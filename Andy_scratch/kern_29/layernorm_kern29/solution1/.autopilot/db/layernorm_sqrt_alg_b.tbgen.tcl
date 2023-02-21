set moduleName layernorm_sqrt_alg_b
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
set C_modelName {layernorm_sqrt_alg_b}
set C_modelType { void 0 }
set C_modelArgList {
	{ n_pipe2_V_V int 32 regular {fifo 0 volatile } {global 0}  }
	{ n_pipe3_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_sqrt_V_V int 32 regular {fifo 0 volatile } {global 0}  }
	{ in_compute_y_factor_s_0 int 32 regular {fifo 1 volatile } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "n_pipe2_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "n_pipe3_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_sqrt_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_factor_s_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ n_pipe2_V_V_dout sc_in sc_lv 32 signal 0 } 
	{ n_pipe2_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ n_pipe2_V_V_read sc_out sc_logic 1 signal 0 } 
	{ n_pipe3_V_V_din sc_out sc_lv 32 signal 1 } 
	{ n_pipe3_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ n_pipe3_V_V_write sc_out sc_logic 1 signal 1 } 
	{ in_sqrt_V_V_dout sc_in sc_lv 32 signal 2 } 
	{ in_sqrt_V_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ in_sqrt_V_V_read sc_out sc_logic 1 signal 2 } 
	{ in_compute_y_factor_s_0_din sc_out sc_lv 32 signal 3 } 
	{ in_compute_y_factor_s_0_full_n sc_in sc_logic 1 signal 3 } 
	{ in_compute_y_factor_s_0_write sc_out sc_logic 1 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "n_pipe2_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "n_pipe2_V_V", "role": "dout" }} , 
 	{ "name": "n_pipe2_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe2_V_V", "role": "empty_n" }} , 
 	{ "name": "n_pipe2_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe2_V_V", "role": "read" }} , 
 	{ "name": "n_pipe3_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "n_pipe3_V_V", "role": "din" }} , 
 	{ "name": "n_pipe3_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe3_V_V", "role": "full_n" }} , 
 	{ "name": "n_pipe3_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe3_V_V", "role": "write" }} , 
 	{ "name": "in_sqrt_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_sqrt_V_V", "role": "dout" }} , 
 	{ "name": "in_sqrt_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_sqrt_V_V", "role": "empty_n" }} , 
 	{ "name": "in_sqrt_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_sqrt_V_V", "role": "read" }} , 
 	{ "name": "in_compute_y_factor_s_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_factor_s_0", "role": "din" }} , 
 	{ "name": "in_compute_y_factor_s_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_factor_s_0", "role": "full_n" }} , 
 	{ "name": "in_compute_y_factor_s_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_factor_s_0", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "layernorm_sqrt_alg_b",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "35841",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "n_pipe2_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "n_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "n_pipe3_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "n_pipe3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sqrt_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_sqrt_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_factor_s_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_factor_s_0_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_29_udiv_32s_32ns_32_36_seq_1_U157", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	layernorm_sqrt_alg_b {
		n_pipe2_V_V {Type I LastRead 0 FirstWrite -1}
		n_pipe3_V_V {Type O LastRead -1 FirstWrite 0}
		in_sqrt_V_V {Type I LastRead 1 FirstWrite -1}
		in_compute_y_factor_s_0 {Type O LastRead -1 FirstWrite 38}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "41", "Max" : "35841"}
	, {"Name" : "Interval", "Min" : "41", "Max" : "35841"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	n_pipe2_V_V { ap_fifo {  { n_pipe2_V_V_dout fifo_data 0 32 }  { n_pipe2_V_V_empty_n fifo_status 0 1 }  { n_pipe2_V_V_read fifo_update 1 1 } } }
	n_pipe3_V_V { ap_fifo {  { n_pipe3_V_V_din fifo_data 1 32 }  { n_pipe3_V_V_full_n fifo_status 0 1 }  { n_pipe3_V_V_write fifo_update 1 1 } } }
	in_sqrt_V_V { ap_fifo {  { in_sqrt_V_V_dout fifo_data 0 32 }  { in_sqrt_V_V_empty_n fifo_status 0 1 }  { in_sqrt_V_V_read fifo_update 1 1 } } }
	in_compute_y_factor_s_0 { ap_fifo {  { in_compute_y_factor_s_0_din fifo_data 1 32 }  { in_compute_y_factor_s_0_full_n fifo_status 0 1 }  { in_compute_y_factor_s_0_write fifo_update 1 1 } } }
}
