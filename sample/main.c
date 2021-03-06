/*
*Copyright (c) 2016-2017 Jie Zheng
*/
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>
#include <sys/queue.h>
#include <urcu-qsbr.h>
#include <unistd.h>
#include <rte_memory.h>
#include <rte_memzone.h>
#include <rte_launch.h>
#include <rte_eal.h>
#include <rte_per_lcore.h>
#include <rte_lcore.h>
#include <rte_debug.h>
#include <e3infra/include/node.h>
#include <e3infra/include/node-class.h>
#include <e3infra/include/node-adjacency.h>
#include <e3infra/include/lcore-extension.h>
#include <e3infra/include/e3-init.h>
#include <e3infra/include/e3interface.h>
#include <e3net/include/common-nhlfe.h>
#include <leaf/include/leaf-e-service.h>
#include <spine/include/spine-label-mnexthop.h>

//#include <spine-label-fib.h>
//#include <spine-label-nhlfe.h>
int
main(int argc, char **argv)
{
	
	int ret;
	unsigned lcore_id;
	ret = rte_eal_init(argc, argv);
	if (ret < 0)
		rte_panic("Cannot init EAL\n");
	init_registered_tasks();
	printf("node size:%d\n",sizeof(struct node));
	dump_node_structure();
	//printf("mac entry size:%d\n",sizeof(struct leaf_api_mac_entry));
	//printf("multicast nexthops:%d\n",sizeof(struct multicast_next_hops));
	//printf("leaf e-lan size:%d\n",sizeof(struct rcu_head));
	//printf("leaf e-lan size:%d\n",sizeof(rte_spinlock_t));
	//printf("common neighbor size:%d\n",sizeof(struct common_neighbor));
	//printf("common nexthop size:%d\n",sizeof(struct common_nexthop));
	//e3iface_tmp_test();
	//customer_service_port_module_test();
	//cbp_module_test();
	RTE_LCORE_FOREACH_SLAVE(lcore_id) {
		rte_eal_remote_launch(lcore_default_entry, NULL, lcore_id);
	}
	lcore_default_entry(NULL);
	rte_eal_mp_wait_lcore();
	return 0;
}
