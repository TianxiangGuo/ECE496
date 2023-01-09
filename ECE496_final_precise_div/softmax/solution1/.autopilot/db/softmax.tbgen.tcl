set moduleName softmax
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_none
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {softmax}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_data_V int 512 regular {axi_s 0 volatile  { in_r Data } }  }
	{ in_V_id_V int 8 regular {axi_s 0 volatile  { in_r ID } }  }
	{ in_V_dest_V int 8 regular {axi_s 0 volatile  { in_r Dest } }  }
	{ in_V_user_V int 16 regular {axi_s 0 volatile  { in_r User } }  }
	{ in_V_last_V int 1 regular {axi_s 0 volatile  { in_r Last } }  }
	{ out_V_data_V int 512 regular {axi_s 1 volatile  { out_r Data } }  }
	{ out_V_id_V int 8 regular {axi_s 1 volatile  { out_r ID } }  }
	{ out_V_dest_V int 8 regular {axi_s 1 volatile  { out_r Dest } }  }
	{ out_V_user_V int 16 regular {axi_s 1 volatile  { out_r User } }  }
	{ out_V_last_V int 1 regular {axi_s 1 volatile  { out_r Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_data_V", "interface" : "axis", "bitwidth" : 512, "direction" : "READONLY", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "in.V.data.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_V_id_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in.V.id.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_V_dest_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in.V.dest.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_V_user_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "in.V.user.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_V_data_V", "interface" : "axis", "bitwidth" : 512, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "out.V.data.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_V_id_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out.V.id.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_V_dest_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out.V.dest.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_V_user_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "out.V.user.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ in_r_TDATA sc_in sc_lv 512 signal 0 } 
	{ in_r_TID sc_in sc_lv 8 signal 1 } 
	{ in_r_TDEST sc_in sc_lv 8 signal 2 } 
	{ in_r_TUSER sc_in sc_lv 16 signal 3 } 
	{ in_r_TLAST sc_in sc_lv 1 signal 4 } 
	{ out_r_TDATA sc_out sc_lv 512 signal 5 } 
	{ out_r_TID sc_out sc_lv 8 signal 6 } 
	{ out_r_TDEST sc_out sc_lv 8 signal 7 } 
	{ out_r_TUSER sc_out sc_lv 16 signal 8 } 
	{ out_r_TLAST sc_out sc_lv 1 signal 9 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ in_r_TVALID sc_in sc_logic 1 invld 4 } 
	{ in_r_TREADY sc_out sc_logic 1 inacc 4 } 
	{ out_r_TVALID sc_out sc_logic 1 outvld 9 } 
	{ out_r_TREADY sc_in sc_logic 1 outacc 9 } 
}
set NewPortList {[ 
	{ "name": "in_r_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "in_V_data_V", "role": "default" }} , 
 	{ "name": "in_r_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V_id_V", "role": "default" }} , 
 	{ "name": "in_r_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_V_dest_V", "role": "default" }} , 
 	{ "name": "in_r_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_V_user_V", "role": "default" }} , 
 	{ "name": "in_r_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_last_V", "role": "default" }} , 
 	{ "name": "out_r_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "out_V_data_V", "role": "default" }} , 
 	{ "name": "out_r_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_id_V", "role": "default" }} , 
 	{ "name": "out_r_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_V_dest_V", "role": "default" }} , 
 	{ "name": "out_r_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_user_V", "role": "default" }} , 
 	{ "name": "out_r_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "in_r_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "in_V_last_V", "role": "default" }} , 
 	{ "name": "in_r_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "in_V_last_V", "role": "default" }} , 
 	{ "name": "out_r_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_V_last_V", "role": "default" }} , 
 	{ "name": "out_r_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_V_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "21", "38", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61"],
		"CDFG" : "softmax",
		"Protocol" : "ap_ctrl_none",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "read_data_U0"}],
		"OutputProcess" : [
			{"ID" : "38", "Name" : "write_U0"}],
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_V_data_V"}]},
			{"Name" : "in_V_id_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_V_id_V"}]},
			{"Name" : "in_V_dest_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_V_dest_V"}]},
			{"Name" : "in_V_user_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_V_user_V"}]},
			{"Name" : "in_V_last_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_V_last_V"}]},
			{"Name" : "out_V_data_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "out_V_data_V"}]},
			{"Name" : "out_V_id_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "out_V_id_V"}]},
			{"Name" : "out_V_dest_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "out_V_dest_V"}]},
			{"Name" : "out_V_user_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "out_V_user_V"}]},
			{"Name" : "out_V_last_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "out_V_last_V"}]},
			{"Name" : "in_write_n_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "in_write_n_V_V"},
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_write_n_V_V"}]},
			{"Name" : "in_sub_max_r_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_sub_max_r_V_V"},
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_sub_max_r_V_V"}]},
			{"Name" : "in_sub_max_c_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_sub_max_c_V_V"},
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_sub_max_c_V_V"}]},
			{"Name" : "max_input_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "max_input_V_V"},
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "max_input_V_V"}]},
			{"Name" : "in_sub_max_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_sub_max_V_V"},
					{"ID" : "1", "SubInstance" : "read_data_U0", "Port" : "in_sub_max_V_V"}]},
			{"Name" : "in_proc_1_iter_r_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_proc_1_iter_r_V_V"},
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_proc_1_iter_r_V_V"}]},
			{"Name" : "in_proc_1_iter_c_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_proc_1_iter_c_V_V"},
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_proc_1_iter_c_V_V"}]},
			{"Name" : "in_proc_1_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_proc_1_V_V"},
					{"ID" : "2", "SubInstance" : "subtract_max_U0", "Port" : "in_proc_1_V_V"}]},
			{"Name" : "in_quant_iter_r_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_quant_iter_r_V_V"},
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_quant_iter_r_V_V"}]},
			{"Name" : "in_quant_iter_c_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_quant_iter_c_V_V"},
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_quant_iter_c_V_V"}]},
			{"Name" : "in_quant_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_quant_V_V"},
					{"ID" : "3", "SubInstance" : "process_1_U0", "Port" : "in_quant_V_V"}]},
			{"Name" : "in_proc_2_iter_r_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_proc_2_iter_r_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "in_proc_2_iter_r_V_V"}]},
			{"Name" : "in_proc_2_iter_c_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_proc_2_iter_c_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "in_proc_2_iter_c_V_V"}]},
			{"Name" : "sum_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "sum_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "sum_V_V"}]},
			{"Name" : "in_proc_2_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "QuantAct_1_channel_m_U0", "Port" : "in_proc_2_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "in_proc_2_V_V"}]},
			{"Name" : "in_write_iter_c_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "in_write_iter_c_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "in_write_iter_c_V_V"}]},
			{"Name" : "in_write_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "write_U0", "Port" : "in_write_V_V"},
					{"ID" : "21", "SubInstance" : "softmax_divide_preci_U0", "Port" : "in_write_V_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.read_data_U0", "Parent" : "0",
		"CDFG" : "read_data",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_id_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_V_dest_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_write_n_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "38", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "in_write_n_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sub_max_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "2", "DependentChan" : "41",
				"BlockSignal" : [
					{"Name" : "in_sub_max_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sub_max_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "2", "DependentChan" : "42",
				"BlockSignal" : [
					{"Name" : "in_sub_max_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "max_input_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "2", "DependentChan" : "43",
				"BlockSignal" : [
					{"Name" : "max_input_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sub_max_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "2", "DependentChan" : "44",
				"BlockSignal" : [
					{"Name" : "in_sub_max_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.subtract_max_U0", "Parent" : "0",
		"CDFG" : "subtract_max",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_subtraceOg_U",
		"Port" : [
			{"Name" : "in_sub_max_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "42",
				"BlockSignal" : [
					{"Name" : "in_sub_max_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sub_max_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "41",
				"BlockSignal" : [
					{"Name" : "in_sub_max_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_1_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "45",
				"BlockSignal" : [
					{"Name" : "in_proc_1_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_1_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "46",
				"BlockSignal" : [
					{"Name" : "in_proc_1_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "max_input_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "43",
				"BlockSignal" : [
					{"Name" : "max_input_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sub_max_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "44",
				"BlockSignal" : [
					{"Name" : "in_sub_max_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "47",
				"BlockSignal" : [
					{"Name" : "in_proc_1_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.process_1_U0", "Parent" : "0",
		"CDFG" : "process_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "16394",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "2",
		"StartFifo" : "start_for_processfYi_U",
		"Port" : [
			{"Name" : "in_proc_1_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "46",
				"BlockSignal" : [
					{"Name" : "in_proc_1_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_1_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "45",
				"BlockSignal" : [
					{"Name" : "in_proc_1_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "48",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "49",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "47",
				"BlockSignal" : [
					{"Name" : "in_proc_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "50",
				"BlockSignal" : [
					{"Name" : "in_quant_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0", "Parent" : "0", "Child" : ["5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20"],
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
		"StartSource" : "3",
		"StartFifo" : "start_for_QuantAcg8j_U",
		"Port" : [
			{"Name" : "in_quant_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "49",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "48",
				"BlockSignal" : [
					{"Name" : "in_quant_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_iter_r_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "51",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "52",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "sum_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "sum_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_quant_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "50",
				"BlockSignal" : [
					{"Name" : "in_quant_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "in_proc_2_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U24", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U25", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U26", "Parent" : "4"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U27", "Parent" : "4"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U28", "Parent" : "4"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U29", "Parent" : "4"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U30", "Parent" : "4"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U31", "Parent" : "4"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U32", "Parent" : "4"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U33", "Parent" : "4"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U34", "Parent" : "4"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U35", "Parent" : "4"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U36", "Parent" : "4"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U37", "Parent" : "4"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U38", "Parent" : "4"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.QuantAct_1_channel_m_U0.softmax_mul_32ns_bkb_U39", "Parent" : "4"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0", "Parent" : "0", "Child" : ["22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "softmax_divide_preci",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "4",
		"StartFifo" : "start_for_softmaxhbi_U",
		"Port" : [
			{"Name" : "in_proc_2_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "52",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_iter_r_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "51",
				"BlockSignal" : [
					{"Name" : "in_proc_2_iter_r_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_iter_c_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "38", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "in_write_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "sum_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "sum_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_proc_2_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "in_proc_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "38", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U48", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U49", "Parent" : "21"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U50", "Parent" : "21"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U51", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U52", "Parent" : "21"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U53", "Parent" : "21"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U54", "Parent" : "21"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U55", "Parent" : "21"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U56", "Parent" : "21"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U57", "Parent" : "21"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U58", "Parent" : "21"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U59", "Parent" : "21"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U60", "Parent" : "21"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U61", "Parent" : "21"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U62", "Parent" : "21"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_divide_preci_U0.softmax_sdiv_26nscud_U63", "Parent" : "21"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.write_U0", "Parent" : "0", "Child" : ["39"],
		"CDFG" : "write_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "2096644",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_write_U0_U",
		"Port" : [
			{"Name" : "out_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "in_write_n_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "in_write_n_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_iter_c_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "in_write_iter_c_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.write_U0.softmax_mul_mul_1dEe_U71", "Parent" : "38"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_n_V_V_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_sub_max_r_V_V_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_sub_max_c_V_V_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.max_input_V_V_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_sub_max_V_V_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_1_V_V_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_quant_V_V_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_iter_r_V_V_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sum_V_V_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_proc_2_V_V_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_iter_c_V_V_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_subtraceOg_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_write_U0_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_processfYi_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_QuantAcg8j_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmaxhbi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax {
		in_V_data_V {Type I LastRead 1 FirstWrite -1}
		in_V_id_V {Type I LastRead 1 FirstWrite -1}
		in_V_dest_V {Type I LastRead 1 FirstWrite -1}
		in_V_user_V {Type I LastRead 1 FirstWrite -1}
		in_V_last_V {Type I LastRead 1 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}
		in_write_n_V_V {Type IO LastRead -1 FirstWrite -1}
		in_sub_max_r_V_V {Type IO LastRead -1 FirstWrite -1}
		in_sub_max_c_V_V {Type IO LastRead -1 FirstWrite -1}
		max_input_V_V {Type IO LastRead -1 FirstWrite -1}
		in_sub_max_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_1_iter_r_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_1_iter_c_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_1_V_V {Type IO LastRead -1 FirstWrite -1}
		in_quant_iter_r_V_V {Type IO LastRead -1 FirstWrite -1}
		in_quant_iter_c_V_V {Type IO LastRead -1 FirstWrite -1}
		in_quant_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_2_iter_r_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_2_iter_c_V_V {Type IO LastRead -1 FirstWrite -1}
		sum_V_V {Type IO LastRead -1 FirstWrite -1}
		in_proc_2_V_V {Type IO LastRead -1 FirstWrite -1}
		in_write_iter_c_V_V {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V {Type IO LastRead -1 FirstWrite -1}}
	read_data {
		in_V_data_V {Type I LastRead 1 FirstWrite -1}
		in_V_id_V {Type I LastRead 1 FirstWrite -1}
		in_V_dest_V {Type I LastRead 1 FirstWrite -1}
		in_V_user_V {Type I LastRead 1 FirstWrite -1}
		in_V_last_V {Type I LastRead 1 FirstWrite -1}
		in_write_n_V_V {Type O LastRead -1 FirstWrite 0}
		in_sub_max_r_V_V {Type O LastRead -1 FirstWrite 0}
		in_sub_max_c_V_V {Type O LastRead -1 FirstWrite 0}
		max_input_V_V {Type O LastRead -1 FirstWrite 2}
		in_sub_max_V_V {Type O LastRead -1 FirstWrite 2}}
	subtract_max {
		in_sub_max_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_sub_max_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_proc_1_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		in_proc_1_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		max_input_V_V {Type I LastRead 3 FirstWrite -1}
		in_sub_max_V_V {Type I LastRead 3 FirstWrite -1}
		in_proc_1_V_V {Type O LastRead -1 FirstWrite 4}}
	process_1 {
		in_proc_1_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_proc_1_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_quant_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		in_quant_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		in_proc_1_V_V {Type I LastRead 3 FirstWrite -1}
		in_quant_V_V {Type O LastRead -1 FirstWrite 10}}
	QuantAct_1_channel_m {
		in_quant_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_quant_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_proc_2_iter_r_V_V {Type O LastRead -1 FirstWrite 0}
		in_proc_2_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		sum_V_V {Type O LastRead -1 FirstWrite 7}
		in_quant_V_V {Type I LastRead 3 FirstWrite -1}
		in_proc_2_V_V {Type O LastRead -1 FirstWrite 6}}
	softmax_divide_preci {
		in_proc_2_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_proc_2_iter_r_V_V {Type I LastRead 0 FirstWrite -1}
		in_write_iter_c_V_V {Type O LastRead -1 FirstWrite 0}
		sum_V_V {Type I LastRead 3 FirstWrite -1}
		in_proc_2_V_V {Type I LastRead 4 FirstWrite -1}
		in_write_V_V {Type O LastRead -1 FirstWrite 34}}
	write_r {
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}
		in_write_n_V_V {Type I LastRead 0 FirstWrite -1}
		in_write_iter_c_V_V {Type I LastRead 0 FirstWrite -1}
		in_write_V_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_V_data_V { axis {  { in_r_TDATA in_data 0 512 } } }
	in_V_id_V { axis {  { in_r_TID in_data 0 8 } } }
	in_V_dest_V { axis {  { in_r_TDEST in_data 0 8 } } }
	in_V_user_V { axis {  { in_r_TUSER in_data 0 16 } } }
	in_V_last_V { axis {  { in_r_TLAST in_data 0 1 }  { in_r_TVALID in_vld 0 1 }  { in_r_TREADY in_acc 1 1 } } }
	out_V_data_V { axis {  { out_r_TDATA out_data 1 512 } } }
	out_V_id_V { axis {  { out_r_TID out_data 1 8 } } }
	out_V_dest_V { axis {  { out_r_TDEST out_data 1 8 } } }
	out_V_user_V { axis {  { out_r_TUSER out_data 1 16 } } }
	out_V_last_V { axis {  { out_r_TLAST out_data 1 1 }  { out_r_TVALID out_vld 1 1 }  { out_r_TREADY out_acc 0 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
