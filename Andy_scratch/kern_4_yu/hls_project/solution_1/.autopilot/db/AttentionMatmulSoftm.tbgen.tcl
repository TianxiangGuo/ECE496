set moduleName AttentionMatmulSoftm
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {AttentionMatmulSoftm}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_data_V int 512 regular {fifo 0 volatile }  }
	{ in_V_id_V int 8 regular {fifo 0 volatile }  }
	{ in_V_dest_V int 8 regular {fifo 0 volatile }  }
	{ in_V_user_V int 16 regular {fifo 0 volatile }  }
	{ in_V_last_V int 1 regular {fifo 0 volatile }  }
	{ out_V_data_V int 512 regular {fifo 1 volatile }  }
	{ out_V_id_V int 8 regular {fifo 1 volatile }  }
	{ out_V_dest_V int 8 regular {fifo 1 volatile }  }
	{ out_V_user_V int 16 regular {fifo 1 volatile }  }
	{ out_V_last_V int 1 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_data_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_id_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_dest_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_user_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_last_V", "interface" : "fifo", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_data_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_id_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_dest_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_user_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_last_V", "interface" : "fifo", "bitwidth" : 1, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 37
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
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
	{ out_V_data_V_din sc_out sc_lv 512 signal 5 } 
	{ out_V_data_V_full_n sc_in sc_logic 1 signal 5 } 
	{ out_V_data_V_write sc_out sc_logic 1 signal 5 } 
	{ out_V_id_V_din sc_out sc_lv 8 signal 6 } 
	{ out_V_id_V_full_n sc_in sc_logic 1 signal 6 } 
	{ out_V_id_V_write sc_out sc_logic 1 signal 6 } 
	{ out_V_dest_V_din sc_out sc_lv 8 signal 7 } 
	{ out_V_dest_V_full_n sc_in sc_logic 1 signal 7 } 
	{ out_V_dest_V_write sc_out sc_logic 1 signal 7 } 
	{ out_V_user_V_din sc_out sc_lv 16 signal 8 } 
	{ out_V_user_V_full_n sc_in sc_logic 1 signal 8 } 
	{ out_V_user_V_write sc_out sc_logic 1 signal 8 } 
	{ out_V_last_V_din sc_out sc_lv 1 signal 9 } 
	{ out_V_last_V_full_n sc_in sc_logic 1 signal 9 } 
	{ out_V_last_V_write sc_out sc_logic 1 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
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
		"CDFG" : "AttentionMatmulSoftm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "1029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_data_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_id_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_id_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_dest_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_dest_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_user_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_user_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_last_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_last_V_blk_n", "Type" : "RtlSignal"}]},
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_4_mul_mul_12ns_16ns_28_1_1_U511", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	AttentionMatmulSoftm {
		in_V_data_V {Type I LastRead 2 FirstWrite -1}
		in_V_id_V {Type I LastRead 2 FirstWrite -1}
		in_V_dest_V {Type I LastRead 2 FirstWrite -1}
		in_V_user_V {Type I LastRead 2 FirstWrite -1}
		in_V_last_V {Type I LastRead 2 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "1029"}
	, {"Name" : "Interval", "Min" : "6", "Max" : "1029"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_V_data_V { ap_fifo {  { in_V_data_V_dout fifo_data 0 512 }  { in_V_data_V_empty_n fifo_status 0 1 }  { in_V_data_V_read fifo_update 1 1 } } }
	in_V_id_V { ap_fifo {  { in_V_id_V_dout fifo_data 0 8 }  { in_V_id_V_empty_n fifo_status 0 1 }  { in_V_id_V_read fifo_update 1 1 } } }
	in_V_dest_V { ap_fifo {  { in_V_dest_V_dout fifo_data 0 8 }  { in_V_dest_V_empty_n fifo_status 0 1 }  { in_V_dest_V_read fifo_update 1 1 } } }
	in_V_user_V { ap_fifo {  { in_V_user_V_dout fifo_data 0 16 }  { in_V_user_V_empty_n fifo_status 0 1 }  { in_V_user_V_read fifo_update 1 1 } } }
	in_V_last_V { ap_fifo {  { in_V_last_V_dout fifo_data 0 1 }  { in_V_last_V_empty_n fifo_status 0 1 }  { in_V_last_V_read fifo_update 1 1 } } }
	out_V_data_V { ap_fifo {  { out_V_data_V_din fifo_data 1 512 }  { out_V_data_V_full_n fifo_status 0 1 }  { out_V_data_V_write fifo_update 1 1 } } }
	out_V_id_V { ap_fifo {  { out_V_id_V_din fifo_data 1 8 }  { out_V_id_V_full_n fifo_status 0 1 }  { out_V_id_V_write fifo_update 1 1 } } }
	out_V_dest_V { ap_fifo {  { out_V_dest_V_din fifo_data 1 8 }  { out_V_dest_V_full_n fifo_status 0 1 }  { out_V_dest_V_write fifo_update 1 1 } } }
	out_V_user_V { ap_fifo {  { out_V_user_V_din fifo_data 1 16 }  { out_V_user_V_full_n fifo_status 0 1 }  { out_V_user_V_write fifo_update 1 1 } } }
	out_V_last_V { ap_fifo {  { out_V_last_V_din fifo_data 1 1 }  { out_V_last_V_full_n fifo_status 0 1 }  { out_V_last_V_write fifo_update 1 1 } } }
}