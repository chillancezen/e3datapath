#include <e3iface-inventory.h>
#include <e3_init.h>
#include <node.h>
#include <mbuf_delivery.h>
#include <leaf/include/customer-backbone-port.h>
#include <leaf/include/leaf-e-service.h>
#include <rte_ether.h>
#include <e3net/include/mpls-util.h>
extern struct e3iface_role_def  role_defs[E3IFACE_ROLE_MAX_ROLES];
#define CBP_NODE_BURST_SIZE 48

#define CBP_CACHE_SIZE 8
#define CBP_CACHE_MASK (CBP_CACHE_SIZE-1)

#define MAC_CACHE_SIZE 8
#define MAC_CACHE_MASK (MAC_CACHE_SIZE-1)

#define CBP_PROCESS_INPUT_DROP 0x0
#define CBP_PROCESS_INPUT_ELINE_FWD 0x1
#define CBP_PROCESS_INPUT_ELAN_UNICAST_FWD 0x2
#define CBP_PROCESS_INPUT_ELAN_MULTICAST_FWD 0x3
#define CBP_PROCESS_INPUT_HOST_STACK 0x4

struct cbp_cache_entry{
	uint32_t is_valid;
	uint32_t label; 
	struct leaf_label_entry * lentry;
	struct ether_e_lan * elan;
	struct ether_e_line * eline;
}__attribute__((aligned(8)));

struct mac_cache_entry{
	uint8_t mac[6];
	uint8_t is_valid;
	uint8_t reserved0;
	uint64_t fwd_entry;
}__attribute__((aligned(8)));
static int null_capability_check(int port_id)
{
	return 0;
}
inline uint64_t _process_cbp_input_packet(struct rte_mbuf* mbuf,
	struct cbp_cache_entry* cbp_cache,
	struct mac_cache_entry* mac_cache,
	struct cbp_private * priv)
{
	uint64_t fwd_id=MAKE_UINT64(CBP_PROCESS_INPUT_DROP,0);
	uint32_t label;
	uint16_t ccache_index;
	uint16_t mcache_index;
	struct cbp_cache_entry * ccache;
	struct mac_cache_entry * mcache;
	struct ether_hdr * inner_eth_hdr;
	struct ether_hdr * eth_hdr=rte_pktmbuf_mtod(mbuf,struct ether_hdr*);
	struct mpls_hdr  * mpls_hdr=(struct mpls_hdr*)(eth_hdr+1);
	if(PREDICT_FALSE(eth_hdr->ether_type!=ETHER_PROTO_MPLS_UNICAST)){
		fwd_id=MAKE_UINT64(CBP_PROCESS_INPUT_HOST_STACK,0);
		goto ret;
	}
	label=mpls_label(mpls_hdr);
	if(PREDICT_FALSE(!mpls_ttl(mpls_hdr)))
		goto ret;
	ccache_index=label&CBP_CACHE_MASK;
	ccache=&cbp_cache[ccache_index];
	{
		if(PREDICT_FALSE(ccache->label!=label)){
			ccache->is_valid=0;
			ccache->label=label;
			ccache->lentry=leaf_label_entry_at(priv->label_base,label);
			if(!ccache->lentry->is_valid)
				goto normal;
			switch(ccache->lentry->e3_service)
			{
				case e_line_service:
					ccache->eline=find_e_line_service(ccache->lentry->service_index);
					if(!ccache->eline||!ccache->eline->is_valid)
						goto normal;
					break;
				case e_lan_service:
					ccache->elan=find_e_lan_service(ccache->lentry->service_index);
					if(!ccache->elan||!ccache->elan->is_valid)
						goto normal;
					break;
				default:
					goto normal;
					break;
			}
			ccache->is_valid=1;
		}
		normal:
		if(PREDICT_FALSE(!ccache->is_valid)){
			fwd_id=MAKE_UINT64(CBP_PROCESS_INPUT_DROP,0);
			goto ret;
		}
	}
	switch(ccache->lentry->e3_service)
	{
		case e_line_service:
			/*
			*strip outer ether header plus mpls header
			*where we do not care whether e3iface exists
			*/
			rte_pktmbuf_adj(mbuf,14);
			if(ccache->eline->vlan_tci){
				mbuf->vlan_tci=ccache->eline->vlan_tci;
				mbuf->ol_flags=PKT_TX_VLAN_PKT;
			}
			fwd_id=MAKE_UINT64(CBP_PROCESS_INPUT_ELINE_FWD,ccache->eline->e3iface);
			break;
		case e_lan_service:
			/*
			*lookup the mac base to find the fwd entry
			*of the dst mac
			*/
			rte_pktmbuf_adj(mbuf,14);
			inner_eth_hdr=rte_pktmbuf_mtod(mbuf,struct ether_hdr*);
			/*
			*use last byte which is mutable and ease distribution
			*/
			mcache_index=inner_eth_hdr->d_addr.addr_bytes[5]&MAC_CACHE_MASK;
			mcache=&mac_cache[mcache_index];
			
			break;
	}
	ret:
	return fwd_id;
}
int customer_backbone_port_iface_input_iface(void * arg)
{
	struct rte_mbuf * 	mbufs[CBP_NODE_BURST_SIZE];
	int 				nr_rx;
	int 				iptr;
	int 				process_rc;
	int					start_index;
	int					end_index;
	struct node *		pnode=(struct node*)arg;
	int 				iface=HIGH_UINT64((uint64_t)pnode->node_priv);
	int					queue_id=LOW_UINT64((uint64_t)pnode->node_priv);
	struct E3Interface* pif=find_e3interface_by_index(iface);
	struct cbp_private* priv=NULL;
	DEF_EXPRESS_DELIVERY_VARS();
	RESET_EXPRESS_DELIVERY_VARS();
	uint64_t fwd_id;
	uint64_t last_fwd_id;
	struct cbp_cache_entry cbp_cache[CBP_CACHE_SIZE];
	struct mac_cache_entry mac_cache[MAC_CACHE_SIZE];
	
	if(PREDICT_FALSE(!pif))
		return 0;
	memset(cbp_cache,0x0,sizeof(cbp_cache));
	memset(mac_cache,0x0,sizeof(mac_cache));
	priv=(struct cbp_private*)pif->private;
	nr_rx=rte_eth_rx_burst(iface,queue_id,mbufs,CBP_NODE_BURST_SIZE);
	pre_setup_env(nr_rx);
	while((iptr=peek_next_mbuf())>=0){
		prefetch_next_mbuf(mbufs,iptr);
		fwd_id=_process_cbp_input_packet(mbufs[iptr],cbp_cache,mac_cache,priv);
		process_rc=proceed_mbuf(iptr,fwd_id);
		if(process_rc==MBUF_PROCESS_RESTART){
			fetch_pending_index(start_index,end_index);
			fetch_pending_fwd_id(last_fwd_id);

			flush_pending_mbuf();
			proceed_mbuf(iptr,fwd_id);
		}
	}
	fetch_pending_index(start_index,end_index);
	fetch_pending_fwd_id(last_fwd_id);
	
	return 0;
}
int customer_backbone_port_iface_output_iface(void * arg)
{
	return 0;
}
int customer_backbone_port_iface_post_setup(struct E3Interface * pif)
{
	struct cbp_private *priv=(struct cbp_private *)pif->private;
	pif->hwiface_role=E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT;
	priv->label_base=allocate_leaf_label_base(-1);
	if(!priv->label_base)
		return -1;
	return 0;
}

int customer_backbone_port_iface_delete(int iface)
{

	return 0;
}

static void cbp_init(void)
{
	
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].is_set=1;
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].capability_check=null_capability_check;
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].priv_size=sizeof(struct cbp_private);
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].input_node_process_func=customer_backbone_port_iface_input_iface;
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].output_node_process_func=customer_backbone_port_iface_output_iface;
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].post_setup=customer_backbone_port_iface_post_setup;
	role_defs[E3IFACE_ROLE_CUSTOMER_BACKBONE_FACING_PORT].iface_delete=customer_backbone_port_iface_delete;
}

E3_init(cbp_init,(TASK_PTIORITY_LOW+1));

void cbp_module_test(void)
{

	printf("%d %d\n",sizeof(struct cbp_cache_entry),
		sizeof(struct mac_cache_entry));
}
