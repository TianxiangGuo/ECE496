set moduleName softmax_write_out135
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
set C_modelName {softmax_write_out135}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_n_V_V int 96 regular {fifo 0 volatile }  }
	{ in_iter_c_V_V int 32 regular {fifo 0 volatile }  }
	{ in_V_V int 16 regular {fifo 0 volatile }  }
	{ out_V_data_V int 512 regular {axi_s 1 volatile  { out_r Data } }  }
	{ out_V_id_V int 8 regular {axi_s 1 volatile  { out_r ID } }  }
	{ out_V_dest_V int 8 regular {axi_s 1 volatile  { out_r Dest } }  }
	{ out_V_user_V int 16 regular {axi_s 1 volatile  { out_r User } }  }
	{ out_V_last_V int 1 regular {axi_s 1 volatile  { out_r Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_n_V_V", "interface" : "fifo", "bitwidth" : 96, "direction" : "READONLY"} , 
 	{ "Name" : "in_iter_c_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_data_V", "interface" : "axis", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_id_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_dest_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_user_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 23
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_n_V_V_dout sc_in sc_lv 96 signal 0 } 
	{ in_n_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_n_V_V_read sc_out sc_logic 1 signal 0 } 
	{ in_iter_c_V_V_dout sc_in sc_lv 32 signal 1 } 
	{ in_iter_c_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_iter_c_V_V_read sc_out sc_logic 1 signal 1 } 
	{ in_V_V_dout sc_in sc_lv 16 signal 2 } 
	{ in_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ in_V_V_read sc_out sc_logic 1 signal 2 } 
	{ out_r_TDATA sc_out sc_lv 512 signal 3 } 
	{ out_r_TVALID sc_out sc_logic 1 outvld 7 } 
	{ out_r_TREADY sc_in sc_logic 1 outacc 3 } 
	{ out_r_TID sc_out sc_lv 8 signal 4 } 
	{ out_r_TDEST sc_out sc_lv 8 signal 5 } 
	{ out_r_TUSER sc_out sc_lv 16 signal 6 } 
	{ out_r_TLAST sc_out sc_lv 1 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_n_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":96, "type": "signal", "bundle":{"name": "in_n_V_V", "role": "dout" }} , 
 	{ "name": "in_n_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_V_V", "role": "empty_n" }} , 
 	{ "name": "in_n_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_n_V_V", "role": "read" }} , 
 	{ "name": "in_iter_c_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_iter_c_V_V", "role": "dout" }} , 
 	{ "name": "in_iter_c_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_iter_c_V_V", "role": "empty_n" }} , 
 	{ "name": "in_iter_c_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_iter_c_V_V", "role": "read" }} , 
 	{ "name": "in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_V_V", "role": "dout" }} , 
 	{ "name": "in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "empty_n" }} , 
 	{ "name": "in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "read" }} , 
 	{ "name": "out_r_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "default" }} , 
 	{ "name": "out_r_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "out_r_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_V_data_V", "role": "default" }} , 
 	{ "name": "out_r_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "default" }} , 
 	{ "name": "out_r_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "default" }} , 
 	{ "name": "out_r_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "default" }} , 
 	{ "name": "out_r_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
		"Port" : [
			{"Name" : "in_n_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_n_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_last_V", "Type" : "Axis", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_4_mul_mul_15ns_16ns_31_1_1_U793", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
	{"Name" : "Latency", "Min" : "3", "Max" : "16776709"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "16776709"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_n_V_V { ap_fifo {  { in_n_V_V_dout fifo_data 0 96 }  { in_n_V_V_empty_n fifo_status 0 1 }  { in_n_V_V_read fifo_update 1 1 } } }
	in_iter_c_V_V { ap_fifo {  { in_iter_c_V_V_dout fifo_data 0 32 }  { in_iter_c_V_V_empty_n fifo_status 0 1 }  { in_iter_c_V_V_read fifo_update 1 1 } } }
	in_V_V { ap_fifo {  { in_V_V_dout fifo_data 0 16 }  { in_V_V_empty_n fifo_status 0 1 }  { in_V_V_read fifo_update 1 1 } } }
	out_V_data_V { axis {  { out_r_TDATA out_data 1 512 }  { out_r_TREADY out_acc 0 1 } } }
	out_V_id_V { axis {  { out_r_TID out_data 1 8 } } }
	out_V_dest_V { axis {  { out_r_TDEST out_data 1 8 } } }
	out_V_user_V { axis {  { out_r_TUSER out_data 1 16 } } }
	out_V_last_V { axis {  { out_r_TVALID out_vld 1 1 }  { out_r_TLAST out_data 1 1 } } }
}
