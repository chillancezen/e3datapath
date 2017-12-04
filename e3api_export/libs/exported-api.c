#include <exported-api.h>
#include <e3api/include/e3-api-wrapper.h>
DECLARE_E3_API(e3_exported_api0)={
	.api_name="leaf_api_delete_e_service_nhlfe",
	.api_desc="delete a nhlfe of an ether service",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api1)={
	.api_name="leaf_api_register_e_service_nhlfe",
	.api_desc="register a nhlfe for both ether service",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api2)={
	.api_name="leaf_api_delete_e_service_port",
	.api_desc="delete an ether service port",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api3)={
	.api_name="leaf_api_register_e_service_port",
	.api_desc="register a port for both e-lan&e-line services",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api4)={
	.api_name="leaf_api_delete_e_service",
	.api_desc="deltee an ether service",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api5)={
	.api_name="leaf_api_list_e_services",
	.api_desc="get the list of ether services",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=8192},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api6)={
	.api_name="leaf_api_get_e_line",
	.api_desc="copy an e-line to other client endpoit",
	.args_desc={
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=16},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api7)={
	.api_name="leaf_api_register_e_service",
	.api_desc="register an Ether-service",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api8)={
	.api_name="delete_label_entry",
	.api_desc="invalidate a label entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api9)={
	.api_name="list_label_entry_partial",
	.api_desc="get the partial list of label entry",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2048},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=1024},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api10)={
	.api_name="get_label_entry",
	.api_desc="get the label entry at a given index on a specific e3 iface",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=8},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api11)={
	.api_name="register_label_entry",
	.api_desc="register a label entry on a given E3 interface",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint32_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=8},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api12)={
	.api_name="delete_mnexthops",
	.api_desc="delete a multicast next hop entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api13)={
	.api_name="list_mnexthops_partial",
	.api_desc="enumerate partial list of multicast next hops",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=12608},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=64},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api14)={
	.api_name="update_mnexthops",
	.api_desc="update the nexthop and labels list of a multicast entry",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=394},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api15)={
	.api_name="get_mnexthops",
	.api_desc="get the multicast next hop entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=394},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api16)={
	.api_name="register_mnexthops",
	.api_desc="register multicast next hops entry in the list",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=394},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api17)={
	.api_name="delete_nexthop",
	.api_desc="delete a nexthop entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api18)={
	.api_name="list_nexthop_partial",
	.api_desc="get part of the whole next_hop entries",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=640},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=128},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api19)={
	.api_name="get_nexthop",
	.api_desc="get the next_hop entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=10},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api20)={
	.api_name="register_nexthop",
	.api_desc="register a nexthop entry with e3iface&neighbor",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=16},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api21)={
	.api_name="delete_neighbour",
	.api_desc="invalidate the neighbor entry",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=16},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api22)={
	.api_name="get_neighbour",
	.api_desc="retrieve the neighbour entry at a given index",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=12},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api23)={
	.api_name="list_neighbours_partial",
	.api_desc="enumerate partial list of neighbours",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=768},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=128},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api24)={
	.api_name="refresh_neighbor_mac",
	.api_desc="update the mac address of a neighbor entry",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=16},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=18},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api25)={
	.api_name="register_neighbor",
	.api_desc="register neighbor in neighborhood list",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=16},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=18},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api26)={
	.api_name="update_e3fiace_status",
	.api_desc="update the status of an e3iface",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api27)={
	.api_name="reclaim_e3iface",
	.api_desc="reclaim the given e3iface as with its associated peer iface",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api28)={
	.api_name="create_e3iface",
	.api_desc="attach (v)dev as E3Interface",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=128},
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=4},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api29)={
	.api_name="e3net_api_delete_common_nexthop",
	.api_desc="delete a common next hop entry",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api30)={
	.api_name="e3net_api_list_common_nexthop_partial",
	.api_desc="enumerate next hops list partially",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=2},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2304},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api31)={
	.api_name="e3net_api_get_common_nexthop",
	.api_desc="retrieve a comon nexthop entry",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=12},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api32)={
	.api_name="e3net_api_register_common_nexthop",
	.api_desc="register a common nexthop",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api33)={
	.api_name="e3net_api_delete_common_neighbor",
	.api_desc="delete a common neighbour",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api34)={
	.api_name="e3net_api_list_common_neighbor_partial",
	.api_desc="retrieve part of the neighbors set",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input_and_output,.len=2},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=2048},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api35)={
	.api_name="e3net_api_get_common_neighbor",
	.api_desc="retrieve a common neighbor",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=16},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api36)={
	.api_name="e3net_api_register_or_update_common_neighbor",
	.api_desc="register or update a common neighbor",
	.args_desc={
		{.type=e3_arg_type_uint8_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=16},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_input,.len=18},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api37)={
	.api_name="get_e3interface",
	.api_desc="get the e3interface of a given index,this will copy the structure",
	.args_desc={
		{.type=e3_arg_type_uint16_t,.behavior=e3_arg_behavior_input,.len=0},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=192},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api38)={
	.api_name="list_e3interfaces",
	.api_desc="enumerate e3 interfaces, return the list of available index",
	.args_desc={
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=8},
		{.type=e3_arg_type_uint8_t_ptr,.behavior=e3_arg_behavior_output,.len=512},
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
DECLARE_E3_API(e3_exported_api39)={
	.api_name="e3datapath_version",
	.api_desc="retrieve e3 datapath version dword",
	.args_desc={
		{.type=e3_arg_type_none,.behavior=e3_arg_behavior_none,.len=0},
	},
};
uint64_t leaf_api_delete_e_service_nhlfe(uint64_t * api_ret,
	uint8_t arg0,
	uint16_t arg1,
	uint16_t arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_delete_e_service_nhlfe");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_register_e_service_nhlfe(uint64_t * api_ret,
	uint8_t arg0,
	uint16_t arg1,
	uint32_t arg2,
	uint32_t arg3)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_register_e_service_nhlfe");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_delete_e_service_port(uint64_t * api_ret,
	uint8_t arg0,
	uint16_t arg1,
	uint16_t arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_delete_e_service_port");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_register_e_service_port(uint64_t * api_ret,
	uint8_t arg0,
	uint16_t arg1,
	uint32_t arg2,
	uint32_t arg3)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_register_e_service_port");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_delete_e_service(uint64_t * api_ret,
	uint8_t arg0,
	uint32_t arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_delete_e_service");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_list_e_services(uint64_t * api_ret,
	uint8_t arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_list_e_services");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	output_list[2]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=3;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_get_e_line(uint64_t * api_ret,
	uint32_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_get_e_line");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t leaf_api_register_e_service(uint64_t * api_ret,
	uint8_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("leaf_api_register_e_service");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t delete_label_entry(uint64_t * api_ret,
	uint16_t arg0,
	uint32_t arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("delete_label_entry");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t list_label_entry_partial(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1,
	uint8_t * arg2,
	uint8_t * arg3,
	uint8_t * arg4)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("list_label_entry_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	real_args[4]=cast_to_e3_type(arg4);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	output_list[2]=arg2;
	output_list[3]=arg3;
	output_list[4]=arg4;
	client->para_output_list=output_list;
	client->nr_output_list=5;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t get_label_entry(uint64_t * api_ret,
	uint16_t arg0,
	uint32_t arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("get_label_entry");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t register_label_entry(uint64_t * api_ret,
	uint16_t arg0,
	uint32_t arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("register_label_entry");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t delete_mnexthops(uint64_t * api_ret,
	uint16_t arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("delete_mnexthops");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t list_mnexthops_partial(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2,
	uint8_t * arg3)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("list_mnexthops_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	output_list[3]=arg2;
	output_list[4]=arg3;
	client->para_output_list=output_list;
	client->nr_output_list=5;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t update_mnexthops(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("update_mnexthops");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t get_mnexthops(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("get_mnexthops");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t register_mnexthops(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("register_mnexthops");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t delete_nexthop(uint64_t * api_ret,
	uint16_t arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("delete_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t list_nexthop_partial(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2,
	uint8_t * arg3)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("list_nexthop_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	output_list[3]=arg2;
	output_list[4]=arg3;
	client->para_output_list=output_list;
	client->nr_output_list=5;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t get_nexthop(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("get_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t register_nexthop(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("register_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t delete_neighbour(uint64_t * api_ret,
	uint8_t * arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("delete_neighbour");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t get_neighbour(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("get_neighbour");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t list_neighbours_partial(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2,
	uint8_t * arg3)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("list_neighbours_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	output_list[3]=arg2;
	output_list[4]=arg3;
	client->para_output_list=output_list;
	client->nr_output_list=5;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t refresh_neighbor_mac(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("refresh_neighbor_mac");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t register_neighbor(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("register_neighbor");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t update_e3fiace_status(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("update_e3fiace_status");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t reclaim_e3iface(uint64_t * api_ret,
	uint16_t arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("reclaim_e3iface");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t create_e3iface(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t arg1,
	uint8_t arg2,
	uint8_t arg3,
	uint8_t * arg4)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("create_e3iface");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	real_args[3]=cast_to_e3_type(arg3);
	real_args[4]=cast_to_e3_type(arg4);
	output_list[0]=api_ret;
	output_list[1]=arg4;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_delete_common_nexthop(uint64_t * api_ret,
	uint16_t arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_delete_common_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_list_common_nexthop_partial(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_list_common_nexthop_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	output_list[3]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=4;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_get_common_nexthop(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_get_common_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_register_common_nexthop(uint64_t * api_ret,
	uint16_t arg0,
	uint16_t arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_register_common_nexthop");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_delete_common_neighbor(uint64_t * api_ret,
	uint16_t arg0)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_delete_common_neighbor");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_list_common_neighbor_partial(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_list_common_neighbor_partial");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	output_list[3]=arg2;
	client->para_output_list=output_list;
	client->nr_output_list=4;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_get_common_neighbor(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_get_common_neighbor");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3net_api_register_or_update_common_neighbor(uint64_t * api_ret,
	uint8_t arg0,
	uint8_t * arg1,
	uint8_t * arg2)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3net_api_register_or_update_common_neighbor");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	real_args[2]=cast_to_e3_type(arg2);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t get_e3interface(uint64_t * api_ret,
	uint16_t arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("get_e3interface");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=2;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t list_e3interfaces(uint64_t * api_ret,
	uint8_t * arg0,
	uint8_t * arg1)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("list_e3interfaces");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	real_args[0]=cast_to_e3_type(arg0);
	real_args[1]=cast_to_e3_type(arg1);
	output_list[0]=api_ret;
	output_list[1]=arg0;
	output_list[2]=arg1;
	client->para_output_list=output_list;
	client->nr_output_list=3;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
uint64_t e3datapath_version(uint64_t * api_ret)
{
	#define _(con) if(!(con)) goto error;
	e3_type real_args[MAX_ARGUMENT_SUPPORTED];
	struct e3_api_client      * client=reference_e3_api_client();
	struct e3_api_declaration * api=search_e3_api_by_name("e3datapath_version");
	void                      * output_list[MAX_ARGUMENT_SUPPORTED+1];
	_(client);
	_(api);
	output_list[0]=api_ret;
	client->para_output_list=output_list;
	client->nr_output_list=1;
	_(!encode_e3_api_request(client->send_mbuf,MAX_MSG_LENGTH,api,real_args));
	_(!issue_e3_api_request(client));
	dereference_e3_api_client(client);
	return 0;
	error:
		if(client)
			dereference_e3_api_client(client);
		return -1;
	#undef _
}
