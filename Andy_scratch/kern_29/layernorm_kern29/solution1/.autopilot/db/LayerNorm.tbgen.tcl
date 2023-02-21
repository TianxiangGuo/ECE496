set moduleName LayerNorm
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {LayerNorm}
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
set portNum 40
set portList { 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
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
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
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
 	{ "name": "out_V_last_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_last_V", "role": "write" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "4", "6", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68"],
		"CDFG" : "LayerNorm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "190", "EstimateLatencyMax" : "35940",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "layernorm_save_data_U0"}],
		"OutputProcess" : [
			{"ID" : "8", "Name" : "layernorm_write_U0"}],
		"Port" : [
			{"Name" : "in_V_data_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_V_data_V"}]},
			{"Name" : "in_V_id_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_V_id_V"}]},
			{"Name" : "in_V_dest_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_V_dest_V"}]},
			{"Name" : "in_V_user_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_V_user_V"}]},
			{"Name" : "in_V_last_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_V_last_V"}]},
			{"Name" : "out_V_data_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "out_V_data_V"}]},
			{"Name" : "out_V_id_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "out_V_id_V"}]},
			{"Name" : "out_V_dest_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "out_V_dest_V"}]},
			{"Name" : "out_V_user_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "out_V_user_V"}]},
			{"Name" : "out_V_last_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "out_V_last_V"}]},
			{"Name" : "n_pipe1_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "n_pipe1_V_V"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "n_pipe1_V_V"}]},
			{"Name" : "mean_pipe1_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "mean_pipe1_V_V"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "mean_pipe1_V_V"}]},
			{"Name" : "mean_pipe2_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "mean_pipe2_V_V"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "mean_pipe2_V_V"}]},
			{"Name" : "in_compute_V_V_0", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_0"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_0"}]},
			{"Name" : "in_compute_y_V_V_0", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_0"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_0"}]},
			{"Name" : "in_compute_V_V_1", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_1"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_1"}]},
			{"Name" : "in_compute_y_V_V_1", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_1"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_1"}]},
			{"Name" : "in_compute_V_V_2", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_2"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_2"}]},
			{"Name" : "in_compute_y_V_V_2", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_2"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_2"}]},
			{"Name" : "in_compute_V_V_3", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_3"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_3"}]},
			{"Name" : "in_compute_y_V_V_3", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_3"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_3"}]},
			{"Name" : "in_compute_V_V_4", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_4"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_4"}]},
			{"Name" : "in_compute_y_V_V_4", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_4"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_4"}]},
			{"Name" : "in_compute_V_V_5", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_5"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_5"}]},
			{"Name" : "in_compute_y_V_V_5", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_5"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_5"}]},
			{"Name" : "in_compute_V_V_6", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_6"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_6"}]},
			{"Name" : "in_compute_y_V_V_6", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_6"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_6"}]},
			{"Name" : "in_compute_V_V_7", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_7"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_7"}]},
			{"Name" : "in_compute_y_V_V_7", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_7"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_7"}]},
			{"Name" : "in_compute_V_V_8", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_8"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_8"}]},
			{"Name" : "in_compute_y_V_V_8", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_8"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_8"}]},
			{"Name" : "in_compute_V_V_9", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_9"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_9"}]},
			{"Name" : "in_compute_y_V_V_9", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_9"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_9"}]},
			{"Name" : "in_compute_V_V_10", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_10"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_10"}]},
			{"Name" : "in_compute_y_V_V_10", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_10"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_10"}]},
			{"Name" : "in_compute_V_V_11", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_11"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_11"}]},
			{"Name" : "in_compute_y_V_V_11", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_11"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_11"}]},
			{"Name" : "in_compute_V_V_12", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_12"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_12"}]},
			{"Name" : "in_compute_y_V_V_12", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_12"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_12"}]},
			{"Name" : "in_compute_V_V_13", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_13"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_13"}]},
			{"Name" : "in_compute_y_V_V_13", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_13"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_13"}]},
			{"Name" : "in_compute_V_V_14", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_14"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_14"}]},
			{"Name" : "in_compute_y_V_V_14", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_14"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_14"}]},
			{"Name" : "in_compute_V_V_15", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_V_V_15"},
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_compute_V_V_15"}]},
			{"Name" : "in_compute_y_V_V_15", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "layernorm_save_data_U0", "Port" : "in_compute_y_V_V_15"},
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_V_V_15"}]},
			{"Name" : "n_pipe2_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "n_pipe2_V_V"},
					{"ID" : "4", "SubInstance" : "layernorm_sqrt_alg_b_U0", "Port" : "n_pipe2_V_V"}]},
			{"Name" : "in_sqrt_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "layernorm_compute_va_U0", "Port" : "in_sqrt_V_V"},
					{"ID" : "4", "SubInstance" : "layernorm_sqrt_alg_b_U0", "Port" : "in_sqrt_V_V"}]},
			{"Name" : "n_pipe3_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "n_pipe3_V_V"},
					{"ID" : "4", "SubInstance" : "layernorm_sqrt_alg_b_U0", "Port" : "n_pipe3_V_V"}]},
			{"Name" : "in_compute_y_factor_s_0", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_compute_y_factor_s_0"},
					{"ID" : "4", "SubInstance" : "layernorm_sqrt_alg_b_U0", "Port" : "in_compute_y_factor_s_0"}]},
			{"Name" : "n_pipe4_V_V", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "n_pipe4_V_V"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "n_pipe4_V_V"}]},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "bias"}]},
			{"Name" : "in_write_V_V_0", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_0"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_0"}]},
			{"Name" : "in_write_V_V_1", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_1"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_1"}]},
			{"Name" : "in_write_V_V_2", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_2"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_2"}]},
			{"Name" : "in_write_V_V_3", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_3"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_3"}]},
			{"Name" : "in_write_V_V_4", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_4"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_4"}]},
			{"Name" : "in_write_V_V_5", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_5"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_5"}]},
			{"Name" : "in_write_V_V_6", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_6"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_6"}]},
			{"Name" : "in_write_V_V_7", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_7"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_7"}]},
			{"Name" : "in_write_V_V_8", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_8"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_8"}]},
			{"Name" : "in_write_V_V_9", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_9"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_9"}]},
			{"Name" : "in_write_V_V_10", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_10"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_10"}]},
			{"Name" : "in_write_V_V_11", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_11"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_11"}]},
			{"Name" : "in_write_V_V_12", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_12"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_12"}]},
			{"Name" : "in_write_V_V_13", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_13"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_13"}]},
			{"Name" : "in_write_V_V_14", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_14"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_14"}]},
			{"Name" : "in_write_V_V_15", "Type" : "Fifo", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "layernorm_compute_y_U0", "Port" : "in_write_V_V_15"},
					{"ID" : "8", "SubInstance" : "layernorm_write_U0", "Port" : "in_write_V_V_15"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layernorm_save_data_U0", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "layernorm_save_data",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "96", "EstimateLatencyMax" : "24624",
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
			{"Name" : "n_pipe1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "9",
				"BlockSignal" : [
					{"Name" : "n_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "10",
				"BlockSignal" : [
					{"Name" : "mean_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "11",
				"BlockSignal" : [
					{"Name" : "mean_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "12",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "13",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "14",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "15",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "16",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "17",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "18",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "19",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "20",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "21",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "22",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "23",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "24",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "25",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "26",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "27",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_8", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "28",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_8", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "29",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_9", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "30",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_9", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "31",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_10", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "32",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_10", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "33",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_11", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "34",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_11", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "35",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_12", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "36",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_12", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "37",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_13", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "38",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_13", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "39",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_14", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_14", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "41",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_15", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "3", "DependentChan" : "42",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_15", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "43",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_15_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.layernorm_save_data_U0.kernel_29_srem_41s_11ns_33_45_1_U95", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layernorm_compute_va_U0", "Parent" : "0",
		"CDFG" : "layernorm_compute_va",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "53", "EstimateLatencyMax" : "24581",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_layernorm_compute_va_U0_U",
		"Port" : [
			{"Name" : "n_pipe1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "9",
				"BlockSignal" : [
					{"Name" : "n_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "n_pipe2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "44",
				"BlockSignal" : [
					{"Name" : "n_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "10",
				"BlockSignal" : [
					{"Name" : "mean_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "12",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "14",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "16",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "18",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "20",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "22",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "24",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "26",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_8", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "28",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_9", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "30",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_10", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "32",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_11", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "34",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_12", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "36",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_13", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "38",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_14", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_15", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "42",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sqrt_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "4", "DependentChan" : "45",
				"BlockSignal" : [
					{"Name" : "in_sqrt_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layernorm_sqrt_alg_b_U0", "Parent" : "0", "Child" : ["5"],
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
		"StartSource" : "3",
		"StartFifo" : "start_for_layernorm_sqrt_alg_b_U0_U",
		"Port" : [
			{"Name" : "n_pipe2_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "44",
				"BlockSignal" : [
					{"Name" : "n_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "n_pipe3_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "46",
				"BlockSignal" : [
					{"Name" : "n_pipe3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_sqrt_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "3", "DependentChan" : "45",
				"BlockSignal" : [
					{"Name" : "in_sqrt_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_factor_s_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "47",
				"BlockSignal" : [
					{"Name" : "in_compute_y_factor_s_0_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.layernorm_sqrt_alg_b_U0.kernel_29_udiv_32s_32ns_32_36_seq_1_U157", "Parent" : "4"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layernorm_compute_y_U0", "Parent" : "0", "Child" : ["7"],
		"CDFG" : "layernorm_compute_y",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "53", "EstimateLatencyMax" : "24581",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_layernorm_compute_y_U0_U",
		"Port" : [
			{"Name" : "n_pipe3_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "46",
				"BlockSignal" : [
					{"Name" : "n_pipe3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "n_pipe4_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "48",
				"BlockSignal" : [
					{"Name" : "n_pipe4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe2_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "11",
				"BlockSignal" : [
					{"Name" : "mean_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_factor_s_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "47",
				"BlockSignal" : [
					{"Name" : "in_compute_y_factor_s_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "13",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "in_write_V_V_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "49",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "15",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "50",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "17",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "51",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "19",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "52",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "21",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "23",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "25",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "27",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_8", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "29",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_8", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_9", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "31",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_9", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_10", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "33",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_10", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_11", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "35",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_11", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_12", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "37",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_12", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "61",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_13", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "39",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_13", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "62",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_14", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "41",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_14", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "63",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_15", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "43",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_15", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "64",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_15_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.layernorm_compute_y_U0.bias_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layernorm_write_U0", "Parent" : "0",
		"CDFG" : "layernorm_write",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "24578",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "6",
		"StartFifo" : "start_for_layernorm_write_U0_U",
		"Port" : [
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
					{"Name" : "out_V_last_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "n_pipe4_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "48",
				"BlockSignal" : [
					{"Name" : "n_pipe4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "49",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "50",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "51",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "52",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_8", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_9", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_10", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_11", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_12", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "61",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_13", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "62",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_14", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "63",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_write_V_V_15", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "64",
				"BlockSignal" : [
					{"Name" : "in_write_V_V_15_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.n_pipe1_V_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mean_pipe1_V_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mean_pipe2_V_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_0_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_0_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_1_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_2_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_2_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_3_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_3_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_4_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_4_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_5_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_5_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_6_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_6_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_7_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_7_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_8_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_8_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_9_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_9_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_10_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_10_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_11_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_11_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_12_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_12_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_13_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_13_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_14_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_14_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_V_V_15_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_V_V_15_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.n_pipe2_V_V_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_sqrt_V_V_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.n_pipe3_V_V_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_compute_y_factor_s_0_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.n_pipe4_V_V_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_0_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_1_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_2_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_3_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_4_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_5_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_6_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_7_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_8_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_9_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_10_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_11_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_12_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_13_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_14_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_write_V_V_15_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_layernorm_compute_va_U0_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_layernorm_compute_y_U0_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_layernorm_sqrt_alg_b_U0_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_layernorm_write_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	LayerNorm {
		in_V_data_V {Type I LastRead 2 FirstWrite -1}
		in_V_id_V {Type I LastRead 2 FirstWrite -1}
		in_V_dest_V {Type I LastRead 2 FirstWrite -1}
		in_V_user_V {Type I LastRead 2 FirstWrite -1}
		in_V_last_V {Type I LastRead 2 FirstWrite -1}
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}
		n_pipe1_V_V {Type IO LastRead -1 FirstWrite -1}
		mean_pipe1_V_V {Type IO LastRead -1 FirstWrite -1}
		mean_pipe2_V_V {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_0 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_0 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_1 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_1 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_2 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_2 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_3 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_3 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_4 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_4 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_5 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_5 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_6 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_6 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_7 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_7 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_8 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_8 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_9 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_9 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_10 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_10 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_11 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_11 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_12 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_12 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_13 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_13 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_14 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_14 {Type IO LastRead -1 FirstWrite -1}
		in_compute_V_V_15 {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_V_V_15 {Type IO LastRead -1 FirstWrite -1}
		n_pipe2_V_V {Type IO LastRead -1 FirstWrite -1}
		in_sqrt_V_V {Type IO LastRead -1 FirstWrite -1}
		n_pipe3_V_V {Type IO LastRead -1 FirstWrite -1}
		in_compute_y_factor_s_0 {Type IO LastRead -1 FirstWrite -1}
		n_pipe4_V_V {Type IO LastRead -1 FirstWrite -1}
		bias {Type I LastRead -1 FirstWrite -1}
		in_write_V_V_0 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_1 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_2 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_3 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_4 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_5 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_6 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_7 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_8 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_9 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_10 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_11 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_12 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_13 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_14 {Type IO LastRead -1 FirstWrite -1}
		in_write_V_V_15 {Type IO LastRead -1 FirstWrite -1}}
	layernorm_save_data {
		in_V_data_V {Type I LastRead 2 FirstWrite -1}
		in_V_id_V {Type I LastRead 2 FirstWrite -1}
		in_V_dest_V {Type I LastRead 2 FirstWrite -1}
		in_V_user_V {Type I LastRead 2 FirstWrite -1}
		in_V_last_V {Type I LastRead 2 FirstWrite -1}
		n_pipe1_V_V {Type O LastRead -1 FirstWrite 0}
		mean_pipe1_V_V {Type O LastRead -1 FirstWrite 48}
		mean_pipe2_V_V {Type O LastRead -1 FirstWrite 48}
		in_compute_V_V_0 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_0 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_1 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_1 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_2 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_2 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_3 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_3 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_4 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_4 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_5 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_5 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_6 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_6 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_7 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_7 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_8 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_8 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_9 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_9 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_10 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_10 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_11 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_11 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_12 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_12 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_13 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_13 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_14 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_14 {Type O LastRead -1 FirstWrite 2}
		in_compute_V_V_15 {Type O LastRead -1 FirstWrite 2}
		in_compute_y_V_V_15 {Type O LastRead -1 FirstWrite 2}}
	layernorm_compute_va {
		n_pipe1_V_V {Type I LastRead 0 FirstWrite -1}
		n_pipe2_V_V {Type O LastRead -1 FirstWrite 0}
		mean_pipe1_V_V {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_0 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_1 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_2 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_3 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_4 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_5 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_6 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_7 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_8 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_9 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_10 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_11 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_12 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_13 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_14 {Type I LastRead 2 FirstWrite -1}
		in_compute_V_V_15 {Type I LastRead 2 FirstWrite -1}
		in_sqrt_V_V {Type O LastRead -1 FirstWrite 5}}
	layernorm_sqrt_alg_b {
		n_pipe2_V_V {Type I LastRead 0 FirstWrite -1}
		n_pipe3_V_V {Type O LastRead -1 FirstWrite 0}
		in_sqrt_V_V {Type I LastRead 1 FirstWrite -1}
		in_compute_y_factor_s_0 {Type O LastRead -1 FirstWrite 38}}
	layernorm_compute_y {
		n_pipe3_V_V {Type I LastRead 0 FirstWrite -1}
		n_pipe4_V_V {Type O LastRead -1 FirstWrite 0}
		mean_pipe2_V_V {Type I LastRead 2 FirstWrite -1}
		in_compute_y_factor_s_0 {Type I LastRead 2 FirstWrite -1}
		in_compute_y_V_V_0 {Type I LastRead 3 FirstWrite -1}
		bias {Type I LastRead -1 FirstWrite -1}
		in_write_V_V_0 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_1 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_1 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_2 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_2 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_3 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_3 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_4 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_4 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_5 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_5 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_6 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_6 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_7 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_7 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_8 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_8 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_9 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_9 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_10 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_10 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_11 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_11 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_12 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_12 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_13 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_13 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_14 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_14 {Type O LastRead -1 FirstWrite 5}
		in_compute_y_V_V_15 {Type I LastRead 3 FirstWrite -1}
		in_write_V_V_15 {Type O LastRead -1 FirstWrite 5}}
	layernorm_write {
		out_V_data_V {Type O LastRead -1 FirstWrite 0}
		out_V_id_V {Type O LastRead -1 FirstWrite 0}
		out_V_dest_V {Type O LastRead -1 FirstWrite 0}
		out_V_user_V {Type O LastRead -1 FirstWrite 0}
		out_V_last_V {Type O LastRead -1 FirstWrite 0}
		n_pipe4_V_V {Type I LastRead 0 FirstWrite -1}
		in_write_V_V_0 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_1 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_2 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_3 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_4 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_5 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_6 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_7 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_8 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_9 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_10 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_11 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_12 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_13 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_14 {Type I LastRead 2 FirstWrite -1}
		in_write_V_V_15 {Type I LastRead 2 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "190", "Max" : "35940"}
	, {"Name" : "Interval", "Min" : "97", "Max" : "35842"}
]}

set PipelineEnableSignalInfo {[
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