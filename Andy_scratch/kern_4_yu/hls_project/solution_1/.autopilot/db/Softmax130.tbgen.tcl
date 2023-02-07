set moduleName Softmax130
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Softmax130}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_data_V int 512 regular {fifo 0 volatile }  }
	{ in_V_id_V int 8 regular {fifo 0 volatile }  }
	{ in_V_dest_V int 8 regular {fifo 0 volatile }  }
	{ in_V_user_V int 16 regular {fifo 0 volatile }  }
	{ in_V_last_V int 1 regular {fifo 0 volatile }  }
	{ out_V_data_V int 512 regular {axi_s 1 volatile  { out_r Data } }  }
	{ out_V_id_V int 8 regular {axi_s 1 volatile  { out_r ID } }  }
	{ out_V_dest_V int 8 regular {axi_s 1 volatile  { out_r Dest } }  }
	{ out_V_user_V int 16 regular {axi_s 1 volatile  { out_r User } }  }
	{ out_V_last_V int 1 regular {axi_s 1 volatile  { out_r Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_data_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_id_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_dest_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_user_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_last_V", "interface" : "fifo", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_data_V", "interface" : "axis", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_id_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_dest_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_user_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 29
set portList { 
	{ in_V_data_V_dout sc_in sc_lv 512 signal 0 } 
	{ in_V_data_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_V_data_V_read sc_out sc_logic 1 signal 0 } 
	{ in_V_id_V_dout sc_in sc_lv 8 signal 1 } 
	{ in_V_id_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_V_id_V_read sc_out sc_logic 1 signal 1 } 
	{ in_V_dest_V_dout sc_in sc_lv 8 signal 2 } 
	{ in_V_dest_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ in_V_dest_V_read sc_out sc_logic 1 signal 2 } 
	{ in_V_user_V_dout sc_in sc_lv 16 signal 3 } 
	{ in_V_user_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ in_V_user_V_read sc_out sc_logic 1 signal 3 } 
	{ in_V_last_V_dout sc_in sc_lv 1 signal 4 } 
	{ in_V_last_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ in_V_last_V_read sc_out sc_logic 1 signal 4 } 
	{ out_r_TDATA sc_out sc_lv 512 signal 5 } 
	{ out_r_TID sc_out sc_lv 8 signal 6 } 
	{ out_r_TDEST sc_out sc_lv 8 signal 7 } 
	{ out_r_TUSER sc_out sc_lv 16 signal 8 } 
	{ out_r_TLAST sc_out sc_lv 1 signal 9 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ out_r_TVALID sc_out sc_logic 1 outvld 9 } 
	{ out_r_TREADY sc_in sc_logic 1 outacc 9 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "in_V_data_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "in_V_data_V", "role": "dout" }} , 
 	{ "name": "in_V_data_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_data_V", "role": "empty_n" }} , 
 	{ "name": "in_V_data_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_data_V", "role": "read" }} , 
 	{ "name": "in_V_id_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V_id_V", "role": "dout" }} , 
 	{ "name": "in_V_id_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_id_V", "role": "empty_n" }} , 
 	{ "name": "in_V_id_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_id_V", "role": "read" }} , 
 	{ "name": "in_V_dest_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V_dest_V", "role": "dout" }} , 
 	{ "name": "in_V_dest_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_dest_V", "role": "empty_n" }} , 
 	{ "name": "in_V_dest_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_dest_V", "role": "read" }} , 
 	{ "name": "in_V_user_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_V_user_V", "role": "dout" }} , 
 	{ "name": "in_V_user_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_user_V", "role": "empty_n" }} , 
 	{ "name": "in_V_user_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_user_V", "role": "read" }} , 
 	{ "name": "in_V_last_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_last_V", "role": "dout" }} , 
 	{ "name": "in_V_last_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_last_V", "role": "empty_n" }} , 
 	{ "name": "in_V_last_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_last_V", "role": "read" }} , 
 	{ "name": "out_r_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "default" }} , 
 	{ "name": "out_r_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "default" }} , 
 	{ "name": "out_r_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "default" }} , 
 	{ "name": "out_r_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "default" }} , 
 	{ "name": "out_r_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "out_r_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "out_r_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "4", "7", "11", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28"],
		"CDFG" : "Softmax130",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "73", "EstimateLatencyMax" : "16776763",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "softmax_save_data131_U0"}],
		"OutputProcess" : [
			{"ID" : "11", "Name" : "softmax_write_out135_U0"}],
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "softmax_save_data131_U0", "Port" : "in_V_data_V"}]},
			{"Name" : "in_V_id_V", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "softmax_save_data131_U0", "Port" : "in_V_id_V"}]},
			{"Name" : "in_V_dest_V", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "softmax_save_data131_U0", "Port" : "in_V_dest_V"}]},
			{"Name" : "in_V_user_V", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "softmax_save_data131_U0", "Port" : "in_V_user_V"}]},
			{"Name" : "in_V_last_V", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "softmax_save_data131_U0", "Port" : "in_V_last_V"}]},
			{"Name" : "out_V_data_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "softmax_write_out135_U0", "Port" : "out_V_data_V"}]},
			{"Name" : "out_V_id_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "softmax_write_out135_U0", "Port" : "out_V_id_V"}]},
			{"Name" : "out_V_dest_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "softmax_write_out135_U0", "Port" : "out_V_dest_V"}]},
			{"Name" : "out_V_user_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "softmax_write_out135_U0", "Port" : "out_V_user_V"}]},
			{"Name" : "out_V_last_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "softmax_write_out135_U0", "Port" : "out_V_last_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_save_data131_U0", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "softmax_save_data131",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "17", "EstimateLatencyMax" : "40449",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_data_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_id_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_id_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_dest_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_dest_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_user_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_user_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_last_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_last_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_n_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "13",
				"BlockSignal" : [
					{"Name" : "out_n_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "14",
				"BlockSignal" : [
					{"Name" : "out_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "15",
				"BlockSignal" : [
					{"Name" : "out_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "16",
				"BlockSignal" : [
					{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_save_data131_U0.kernel_4_mux_646_32_1_1_U758", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_process_1132_U0", "Parent" : "0",
		"CDFG" : "softmax_process_1132",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "32778",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_softmax_process_1132_U0_U",
		"Port" : [
			{"Name" : "in_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "14",
				"BlockSignal" : [
					{"Name" : "in_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "15",
				"BlockSignal" : [
					{"Name" : "in_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "16",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "17",
				"BlockSignal" : [
					{"Name" : "out_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "18",
				"BlockSignal" : [
					{"Name" : "out_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "19",
				"BlockSignal" : [
					{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_QuantAct_1_c_U0", "Parent" : "0", "Child" : ["5", "6"],
		"CDFG" : "softmax_QuantAct_1_c",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14", "EstimateLatencyMax" : "32774",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "3",
		"StartFifo" : "start_for_softmax_QuantAct_1_c_U0_U",
		"Port" : [
			{"Name" : "in_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "17",
				"BlockSignal" : [
					{"Name" : "in_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "18",
				"BlockSignal" : [
					{"Name" : "in_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "19",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "20",
				"BlockSignal" : [
					{"Name" : "out_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "21",
				"BlockSignal" : [
					{"Name" : "out_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "22",
				"BlockSignal" : [
					{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_QuantAct_1_c_U0.kernel_4_mul_32ns_64s_95_2_1_U775", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_QuantAct_1_c_U0.kernel_4_mul_32ns_64s_95_2_1_U776", "Parent" : "4"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_process_2134_U0", "Parent" : "0", "Child" : ["8", "9", "10"],
		"CDFG" : "softmax_process_2134",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "57", "EstimateLatencyMax" : "86017",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "4",
		"StartFifo" : "start_for_softmax_process_2134_U0_U",
		"Port" : [
			{"Name" : "in_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "20",
				"BlockSignal" : [
					{"Name" : "in_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "21",
				"BlockSignal" : [
					{"Name" : "in_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "22",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "23",
				"BlockSignal" : [
					{"Name" : "out_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "24",
				"BlockSignal" : [
					{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_process_2134_U0.kernel_4_sdiv_32s_32ns_8_36_1_U784", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_process_2134_U0.kernel_4_mux_646_32_1_1_U785", "Parent" : "7"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_process_2134_U0.kernel_4_sdiv_32s_32ns_8_36_1_U786", "Parent" : "7"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_write_out135_U0", "Parent" : "0", "Child" : ["12"],
		"CDFG" : "softmax_write_out135",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "16776709",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_softmax_write_out135_U0_U",
		"Port" : [
			{"Name" : "in_n_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "13",
				"BlockSignal" : [
					{"Name" : "in_n_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "23",
				"BlockSignal" : [
					{"Name" : "in_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "24",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_last_V", "Type" : "Axis", "Direction" : "O"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_write_out135_U0.kernel_4_mul_mul_15ns_16ns_31_1_1_U793", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_n_V_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_V_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_V_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_V_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_2_iter_c_V_s_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_process_1132_U0_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_write_out135_U0_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_QuantAct_1_c_U0_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_process_2134_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Softmax130 {
		in_V_data_V {Type I LastRead 3 FirstWrite -1}
		in_V_id_V {Type I LastRead 3 FirstWrite -1}
		in_V_dest_V {Type I LastRead 3 FirstWrite -1}
		in_V_user_V {Type I LastRead 3 FirstWrite -1}
		in_V_last_V {Type I LastRead 3 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}}
	softmax_save_data131 {
		in_V_data_V {Type I LastRead 3 FirstWrite -1}
		in_V_id_V {Type I LastRead 3 FirstWrite -1}
		in_V_dest_V {Type I LastRead 3 FirstWrite -1}
		in_V_user_V {Type I LastRead 3 FirstWrite -1}
		in_V_last_V {Type I LastRead 3 FirstWrite -1}
		out_n_V_V {Type O LastRead -1 FirstWrite 0}
		out_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		out_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		out_V_V {Type O LastRead -1 FirstWrite 6}}
	softmax_process_1132 {
		in_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_V_V {Type I LastRead 3 FirstWrite -1}
		out_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		out_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		out_V_V {Type O LastRead -1 FirstWrite 10}}
	softmax_QuantAct_1_c {
		in_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_V_V {Type I LastRead 3 FirstWrite -1}
		out_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		out_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		out_V_V {Type O LastRead -1 FirstWrite 6}}
	softmax_process_2134 {
		in_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_V_V {Type I LastRead 3 FirstWrite -1}
		out_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		out_V_V {Type O LastRead -1 FirstWrite 40}}
	softmax_write_out135 {
		in_n_V_V {Type I LastRead 0 FirstWrite -1}
		in_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_V_V {Type I LastRead 3 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "73", "Max" : "16776763"}
	, {"Name" : "Interval", "Min" : "58", "Max" : "16776710"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_V_data_V { ap_fifo {  { in_V_data_V_dout fifo_data 0 512 }  { in_V_data_V_empty_n fifo_status 0 1 }  { in_V_data_V_read fifo_update 1 1 } } }
	in_V_id_V { ap_fifo {  { in_V_id_V_dout fifo_data 0 8 }  { in_V_id_V_empty_n fifo_status 0 1 }  { in_V_id_V_read fifo_update 1 1 } } }
	in_V_dest_V { ap_fifo {  { in_V_dest_V_dout fifo_data 0 8 }  { in_V_dest_V_empty_n fifo_status 0 1 }  { in_V_dest_V_read fifo_update 1 1 } } }
	in_V_user_V { ap_fifo {  { in_V_user_V_dout fifo_data 0 16 }  { in_V_user_V_empty_n fifo_status 0 1 }  { in_V_user_V_read fifo_update 1 1 } } }
	in_V_last_V { ap_fifo {  { in_V_last_V_dout fifo_data 0 1 }  { in_V_last_V_empty_n fifo_status 0 1 }  { in_V_last_V_read fifo_update 1 1 } } }
	out_V_data_V { axis {  { out_r_TDATA out_data 1 512 } } }
	out_V_id_V { axis {  { out_r_TID out_data 1 8 } } }
	out_V_dest_V { axis {  { out_r_TDEST out_data 1 8 } } }
	out_V_user_V { axis {  { out_r_TUSER out_data 1 16 } } }
	out_V_last_V { axis {  { out_r_TLAST out_data 1 1 }  { out_r_TVALID out_vld 1 1 }  { out_r_TREADY out_acc 0 1 } } }
}
