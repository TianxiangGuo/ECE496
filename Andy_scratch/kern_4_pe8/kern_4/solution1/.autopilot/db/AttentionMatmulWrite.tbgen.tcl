set moduleName AttentionMatmulWrite
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {AttentionMatmulWrite}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_n_r_V_V int 32 regular {fifo 0 volatile }  }
	{ in_n_c_V_V int 32 regular {fifo 0 volatile }  }
	{ in_0_0_V_V int 32 regular {fifo 0 volatile }  }
	{ in_0_1_V_V int 32 regular {fifo 0 volatile }  }
	{ in_1_0_V_V int 32 regular {fifo 0 volatile }  }
	{ in_1_1_V_V int 32 regular {fifo 0 volatile }  }
	{ in_2_0_V_V int 32 regular {fifo 0 volatile }  }
	{ in_2_1_V_V int 32 regular {fifo 0 volatile }  }
	{ in_3_0_V_V int 32 regular {fifo 0 volatile }  }
	{ in_3_1_V_V int 32 regular {fifo 0 volatile }  }
	{ out_V_data_V int 512 regular {fifo 1 volatile }  }
	{ out_V_id_V int 8 regular {fifo 1 volatile }  }
	{ out_V_dest_V int 8 regular {fifo 1 volatile }  }
	{ out_V_user_V int 16 regular {fifo 1 volatile }  }
	{ out_V_last_V int 1 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_n_r_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_n_c_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_0_0_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_0_1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_1_0_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_1_1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_2_0_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_2_1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_3_0_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_3_1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_data_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_id_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_dest_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_user_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_last_V", "interface" : "fifo", "bitwidth" : 1, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 55
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ in_n_r_V_V_dout sc_in sc_lv 32 signal 0 } 
	{ in_n_r_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_n_r_V_V_read sc_out sc_logic 1 signal 0 } 
	{ in_n_c_V_V_dout sc_in sc_lv 32 signal 1 } 
	{ in_n_c_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_n_c_V_V_read sc_out sc_logic 1 signal 1 } 
	{ in_0_0_V_V_dout sc_in sc_lv 32 signal 2 } 
	{ in_0_0_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ in_0_0_V_V_read sc_out sc_logic 1 signal 2 } 
	{ in_0_1_V_V_dout sc_in sc_lv 32 signal 3 } 
	{ in_0_1_V_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ in_0_1_V_V_read sc_out sc_logic 1 signal 3 } 
	{ in_1_0_V_V_dout sc_in sc_lv 32 signal 4 } 
	{ in_1_0_V_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ in_1_0_V_V_read sc_out sc_logic 1 signal 4 } 
	{ in_1_1_V_V_dout sc_in sc_lv 32 signal 5 } 
	{ in_1_1_V_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ in_1_1_V_V_read sc_out sc_logic 1 signal 5 } 
	{ in_2_0_V_V_dout sc_in sc_lv 32 signal 6 } 
	{ in_2_0_V_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ in_2_0_V_V_read sc_out sc_logic 1 signal 6 } 
	{ in_2_1_V_V_dout sc_in sc_lv 32 signal 7 } 
	{ in_2_1_V_V_empty_n sc_in sc_logic 1 signal 7 } 
	{ in_2_1_V_V_read sc_out sc_logic 1 signal 7 } 
	{ in_3_0_V_V_dout sc_in sc_lv 32 signal 8 } 
	{ in_3_0_V_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ in_3_0_V_V_read sc_out sc_logic 1 signal 8 } 
	{ in_3_1_V_V_dout sc_in sc_lv 32 signal 9 } 
	{ in_3_1_V_V_empty_n sc_in sc_logic 1 signal 9 } 
	{ in_3_1_V_V_read sc_out sc_logic 1 signal 9 } 
	{ out_V_data_V_din sc_out sc_lv 512 signal 10 } 
	{ out_V_data_V_full_n sc_in sc_logic 1 signal 10 } 
	{ out_V_data_V_write sc_out sc_logic 1 signal 10 } 
	{ out_V_id_V_din sc_out sc_lv 8 signal 11 } 
	{ out_V_id_V_full_n sc_in sc_logic 1 signal 11 } 
	{ out_V_id_V_write sc_out sc_logic 1 signal 11 } 
	{ out_V_dest_V_din sc_out sc_lv 8 signal 12 } 
	{ out_V_dest_V_full_n sc_in sc_logic 1 signal 12 } 
	{ out_V_dest_V_write sc_out sc_logic 1 signal 12 } 
	{ out_V_user_V_din sc_out sc_lv 16 signal 13 } 
	{ out_V_user_V_full_n sc_in sc_logic 1 signal 13 } 
	{ out_V_user_V_write sc_out sc_logic 1 signal 13 } 
	{ out_V_last_V_din sc_out sc_lv 1 signal 14 } 
	{ out_V_last_V_full_n sc_in sc_logic 1 signal 14 } 
	{ out_V_last_V_write sc_out sc_logic 1 signal 14 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "in_n_r_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_n_r_V_V", "role": "dout" }} , 
 	{ "name": "in_n_r_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_r_V_V", "role": "empty_n" }} , 
 	{ "name": "in_n_r_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_r_V_V", "role": "read" }} , 
 	{ "name": "in_n_c_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_n_c_V_V", "role": "dout" }} , 
 	{ "name": "in_n_c_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_c_V_V", "role": "empty_n" }} , 
 	{ "name": "in_n_c_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_c_V_V", "role": "read" }} , 
 	{ "name": "in_0_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0_0_V_V", "role": "dout" }} , 
 	{ "name": "in_0_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0_0_V_V", "role": "empty_n" }} , 
 	{ "name": "in_0_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0_0_V_V", "role": "read" }} , 
 	{ "name": "in_0_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0_1_V_V", "role": "dout" }} , 
 	{ "name": "in_0_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0_1_V_V", "role": "empty_n" }} , 
 	{ "name": "in_0_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0_1_V_V", "role": "read" }} , 
 	{ "name": "in_1_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_1_0_V_V", "role": "dout" }} , 
 	{ "name": "in_1_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1_0_V_V", "role": "empty_n" }} , 
 	{ "name": "in_1_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1_0_V_V", "role": "read" }} , 
 	{ "name": "in_1_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_1_1_V_V", "role": "dout" }} , 
 	{ "name": "in_1_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1_1_V_V", "role": "empty_n" }} , 
 	{ "name": "in_1_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1_1_V_V", "role": "read" }} , 
 	{ "name": "in_2_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_2_0_V_V", "role": "dout" }} , 
 	{ "name": "in_2_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2_0_V_V", "role": "empty_n" }} , 
 	{ "name": "in_2_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2_0_V_V", "role": "read" }} , 
 	{ "name": "in_2_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_2_1_V_V", "role": "dout" }} , 
 	{ "name": "in_2_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2_1_V_V", "role": "empty_n" }} , 
 	{ "name": "in_2_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2_1_V_V", "role": "read" }} , 
 	{ "name": "in_3_0_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_3_0_V_V", "role": "dout" }} , 
 	{ "name": "in_3_0_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_3_0_V_V", "role": "empty_n" }} , 
 	{ "name": "in_3_0_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_3_0_V_V", "role": "read" }} , 
 	{ "name": "in_3_1_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_3_1_V_V", "role": "dout" }} , 
 	{ "name": "in_3_1_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_3_1_V_V", "role": "empty_n" }} , 
 	{ "name": "in_3_1_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_3_1_V_V", "role": "read" }} , 
 	{ "name": "out_V_data_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "din" }} , 
 	{ "name": "out_V_data_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "full_n" }} , 
 	{ "name": "out_V_data_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "write" }} , 
 	{ "name": "out_V_id_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "din" }} , 
 	{ "name": "out_V_id_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "full_n" }} , 
 	{ "name": "out_V_id_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "write" }} , 
 	{ "name": "out_V_dest_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "din" }} , 
 	{ "name": "out_V_dest_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "full_n" }} , 
 	{ "name": "out_V_dest_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "write" }} , 
 	{ "name": "out_V_user_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "din" }} , 
 	{ "name": "out_V_user_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "full_n" }} , 
 	{ "name": "out_V_user_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "write" }} , 
 	{ "name": "out_V_last_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "din" }} , 
 	{ "name": "out_V_last_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "full_n" }} , 
 	{ "name": "out_V_last_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "AttentionMatmulWrite",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "35", "EstimateLatencyMax" : "2051",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_n_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_n_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_n_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_n_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_0_0_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_0_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_0_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_0_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_1_0_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_1_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_1_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_1_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_2_0_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_2_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_2_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_2_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_3_0_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_3_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_3_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_3_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_data_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_V_data_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_id_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_V_id_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_dest_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_V_dest_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_user_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_V_user_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_last_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_V_last_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_4_mul_mul_16ns_16ns_32_1_1_U1865", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	AttentionMatmulWrite {
		in_n_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_n_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_0_0_V_V {Type I LastRead 3 FirstWrite -1}
		in_0_1_V_V {Type I LastRead 3 FirstWrite -1}
		in_1_0_V_V {Type I LastRead 3 FirstWrite -1}
		in_1_1_V_V {Type I LastRead 3 FirstWrite -1}
		in_2_0_V_V {Type I LastRead 3 FirstWrite -1}
		in_2_1_V_V {Type I LastRead 3 FirstWrite -1}
		in_3_0_V_V {Type I LastRead 3 FirstWrite -1}
		in_3_1_V_V {Type I LastRead 3 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 1}
		out_V_id_V {Type O LastRead -1 FirstWrite 1}
		out_V_dest_V {Type O LastRead -1 FirstWrite 1}
		out_V_user_V {Type O LastRead -1 FirstWrite 1}
		out_V_last_V {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "35", "Max" : "2051"}
	, {"Name" : "Interval", "Min" : "35", "Max" : "2051"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_n_r_V_V { ap_fifo {  { in_n_r_V_V_dout fifo_data 0 32 }  { in_n_r_V_V_empty_n fifo_status 0 1 }  { in_n_r_V_V_read fifo_update 1 1 } } }
	in_n_c_V_V { ap_fifo {  { in_n_c_V_V_dout fifo_data 0 32 }  { in_n_c_V_V_empty_n fifo_status 0 1 }  { in_n_c_V_V_read fifo_update 1 1 } } }
	in_0_0_V_V { ap_fifo {  { in_0_0_V_V_dout fifo_data 0 32 }  { in_0_0_V_V_empty_n fifo_status 0 1 }  { in_0_0_V_V_read fifo_update 1 1 } } }
	in_0_1_V_V { ap_fifo {  { in_0_1_V_V_dout fifo_data 0 32 }  { in_0_1_V_V_empty_n fifo_status 0 1 }  { in_0_1_V_V_read fifo_update 1 1 } } }
	in_1_0_V_V { ap_fifo {  { in_1_0_V_V_dout fifo_data 0 32 }  { in_1_0_V_V_empty_n fifo_status 0 1 }  { in_1_0_V_V_read fifo_update 1 1 } } }
	in_1_1_V_V { ap_fifo {  { in_1_1_V_V_dout fifo_data 0 32 }  { in_1_1_V_V_empty_n fifo_status 0 1 }  { in_1_1_V_V_read fifo_update 1 1 } } }
	in_2_0_V_V { ap_fifo {  { in_2_0_V_V_dout fifo_data 0 32 }  { in_2_0_V_V_empty_n fifo_status 0 1 }  { in_2_0_V_V_read fifo_update 1 1 } } }
	in_2_1_V_V { ap_fifo {  { in_2_1_V_V_dout fifo_data 0 32 }  { in_2_1_V_V_empty_n fifo_status 0 1 }  { in_2_1_V_V_read fifo_update 1 1 } } }
	in_3_0_V_V { ap_fifo {  { in_3_0_V_V_dout fifo_data 0 32 }  { in_3_0_V_V_empty_n fifo_status 0 1 }  { in_3_0_V_V_read fifo_update 1 1 } } }
	in_3_1_V_V { ap_fifo {  { in_3_1_V_V_dout fifo_data 0 32 }  { in_3_1_V_V_empty_n fifo_status 0 1 }  { in_3_1_V_V_read fifo_update 1 1 } } }
	out_V_data_V { ap_fifo {  { out_V_data_V_din fifo_data 1 512 }  { out_V_data_V_full_n fifo_status 0 1 }  { out_V_data_V_write fifo_update 1 1 } } }
	out_V_id_V { ap_fifo {  { out_V_id_V_din fifo_data 1 8 }  { out_V_id_V_full_n fifo_status 0 1 }  { out_V_id_V_write fifo_update 1 1 } } }
	out_V_dest_V { ap_fifo {  { out_V_dest_V_din fifo_data 1 8 }  { out_V_dest_V_full_n fifo_status 0 1 }  { out_V_dest_V_write fifo_update 1 1 } } }
	out_V_user_V { ap_fifo {  { out_V_user_V_din fifo_data 1 16 }  { out_V_user_V_full_n fifo_status 0 1 }  { out_V_user_V_write fifo_update 1 1 } } }
	out_V_last_V { ap_fifo {  { out_V_last_V_din fifo_data 1 1 }  { out_V_last_V_full_n fifo_status 0 1 }  { out_V_last_V_write fifo_update 1 1 } } }
}
