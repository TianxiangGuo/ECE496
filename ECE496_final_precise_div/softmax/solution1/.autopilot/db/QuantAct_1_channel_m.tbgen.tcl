set moduleName QuantAct_1_channel_m
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
set C_modelName {QuantAct_1_channel_m}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_quant_iter_c_V_V int 32 regular {fifo 0 volatile } {global 0}  }
	{ in_quant_iter_r_V_V int 32 regular {fifo 0 volatile } {global 0}  }
	{ in_proc_2_iter_r_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_proc_2_iter_c_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ sum_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_quant_V_V int 1024 regular {fifo 0 volatile } {global 0}  }
	{ in_proc_2_V_V int 256 regular {fifo 1 volatile } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_quant_iter_c_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "in_quant_iter_r_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "in_proc_2_iter_r_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_proc_2_iter_c_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "sum_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_quant_V_V", "interface" : "fifo", "bitwidth" : 1024, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "in_proc_2_V_V", "interface" : "fifo", "bitwidth" : 256, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 31
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
	{ in_quant_iter_c_V_V_dout sc_in sc_lv 32 signal 0 } 
	{ in_quant_iter_c_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_quant_iter_c_V_V_read sc_out sc_logic 1 signal 0 } 
	{ in_quant_iter_r_V_V_dout sc_in sc_lv 32 signal 1 } 
	{ in_quant_iter_r_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_quant_iter_r_V_V_read sc_out sc_logic 1 signal 1 } 
	{ in_proc_2_iter_r_V_V_din sc_out sc_lv 32 signal 2 } 
	{ in_proc_2_iter_r_V_V_full_n sc_in sc_logic 1 signal 2 } 
	{ in_proc_2_iter_r_V_V_write sc_out sc_logic 1 signal 2 } 
	{ in_proc_2_iter_c_V_V_din sc_out sc_lv 32 signal 3 } 
	{ in_proc_2_iter_c_V_V_full_n sc_in sc_logic 1 signal 3 } 
	{ in_proc_2_iter_c_V_V_write sc_out sc_logic 1 signal 3 } 
	{ sum_V_V_din sc_out sc_lv 32 signal 4 } 
	{ sum_V_V_full_n sc_in sc_logic 1 signal 4 } 
	{ sum_V_V_write sc_out sc_logic 1 signal 4 } 
	{ in_quant_V_V_dout sc_in sc_lv 1024 signal 5 } 
	{ in_quant_V_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ in_quant_V_V_read sc_out sc_logic 1 signal 5 } 
	{ in_proc_2_V_V_din sc_out sc_lv 256 signal 6 } 
	{ in_proc_2_V_V_full_n sc_in sc_logic 1 signal 6 } 
	{ in_proc_2_V_V_write sc_out sc_logic 1 signal 6 } 
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
 	{ "name": "in_quant_iter_c_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_quant_iter_c_V_V", "role": "dout" }} , 
 	{ "name": "in_quant_iter_c_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_iter_c_V_V", "role": "empty_n" }} , 
 	{ "name": "in_quant_iter_c_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_iter_c_V_V", "role": "read" }} , 
 	{ "name": "in_quant_iter_r_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_quant_iter_r_V_V", "role": "dout" }} , 
 	{ "name": "in_quant_iter_r_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_iter_r_V_V", "role": "empty_n" }} , 
 	{ "name": "in_quant_iter_r_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_iter_r_V_V", "role": "read" }} , 
 	{ "name": "in_proc_2_iter_r_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_proc_2_iter_r_V_V", "role": "din" }} , 
 	{ "name": "in_proc_2_iter_r_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_iter_r_V_V", "role": "full_n" }} , 
 	{ "name": "in_proc_2_iter_r_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_iter_r_V_V", "role": "write" }} , 
 	{ "name": "in_proc_2_iter_c_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_proc_2_iter_c_V_V", "role": "din" }} , 
 	{ "name": "in_proc_2_iter_c_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_iter_c_V_V", "role": "full_n" }} , 
 	{ "name": "in_proc_2_iter_c_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_iter_c_V_V", "role": "write" }} , 
 	{ "name": "sum_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sum_V_V", "role": "din" }} , 
 	{ "name": "sum_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sum_V_V", "role": "full_n" }} , 
 	{ "name": "sum_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sum_V_V", "role": "write" }} , 
 	{ "name": "in_quant_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":1024, "type": "signal", "bundle":{"name": "in_quant_V_V", "role": "dout" }} , 
 	{ "name": "in_quant_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_V_V", "role": "empty_n" }} , 
 	{ "name": "in_quant_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_quant_V_V", "role": "read" }} , 
 	{ "name": "in_proc_2_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":256, "type": "signal", "bundle":{"name": "in_proc_2_V_V", "role": "din" }} , 
 	{ "name": "in_proc_2_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_V_V", "role": "full_n" }} , 
 	{ "name": "in_proc_2_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_proc_2_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "QuantAct_1_channel_m",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "16391",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_quant_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "sum_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "sum_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_quant_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_proc_2_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U24", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U25", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U26", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U27", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U28", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U29", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U30", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U31", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U32", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U33", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U34", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U35", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U36", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U37", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U38", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_mul_32ns_bkb_U39", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	QuantAct_1_channel_m {
		in_quant_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_quant_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_proc_2_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		in_proc_2_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		sum_V_V {Type O LastRead -1 FirstWrite 7}
		in_quant_V_V {Type I LastRead 3 FirstWrite -1}
		in_proc_2_V_V {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8", "Max" : "16391"}
	, {"Name" : "Interval", "Min" : "8", "Max" : "16391"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_quant_iter_c_V_V { ap_fifo {  { in_quant_iter_c_V_V_dout fifo_data 0 32 }  { in_quant_iter_c_V_V_empty_n fifo_status 0 1 }  { in_quant_iter_c_V_V_read fifo_update 1 1 } } }
	in_quant_iter_r_V_V { ap_fifo {  { in_quant_iter_r_V_V_dout fifo_data 0 32 }  { in_quant_iter_r_V_V_empty_n fifo_status 0 1 }  { in_quant_iter_r_V_V_read fifo_update 1 1 } } }
	in_proc_2_iter_r_V_V { ap_fifo {  { in_proc_2_iter_r_V_V_din fifo_data 1 32 }  { in_proc_2_iter_r_V_V_full_n fifo_status 0 1 }  { in_proc_2_iter_r_V_V_write fifo_update 1 1 } } }
	in_proc_2_iter_c_V_V { ap_fifo {  { in_proc_2_iter_c_V_V_din fifo_data 1 32 }  { in_proc_2_iter_c_V_V_full_n fifo_status 0 1 }  { in_proc_2_iter_c_V_V_write fifo_update 1 1 } } }
	sum_V_V { ap_fifo {  { sum_V_V_din fifo_data 1 32 }  { sum_V_V_full_n fifo_status 0 1 }  { sum_V_V_write fifo_update 1 1 } } }
	in_quant_V_V { ap_fifo {  { in_quant_V_V_dout fifo_data 0 1024 }  { in_quant_V_V_empty_n fifo_status 0 1 }  { in_quant_V_V_read fifo_update 1 1 } } }
	in_proc_2_V_V { ap_fifo {  { in_proc_2_V_V_din fifo_data 1 256 }  { in_proc_2_V_V_full_n fifo_status 0 1 }  { in_proc_2_V_V_write fifo_update 1 1 } } }
}
