set moduleName layernorm_save_data
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
set C_modelName {layernorm_save_data}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_data_V int 512 regular {fifo 0 volatile }  }
	{ in_V_id_V int 8 regular {fifo 0 volatile }  }
	{ in_V_dest_V int 8 regular {fifo 0 volatile }  }
	{ in_V_user_V int 16 regular {fifo 0 volatile }  }
	{ in_V_last_V int 1 regular {fifo 0 volatile }  }
	{ n_pipe1_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ mean_pipe1_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ mean_pipe2_V_V int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_0 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_0 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_1 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_1 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_2 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_2 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_3 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_3 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_4 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_4 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_5 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_5 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_6 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_6 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_7 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_7 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_8 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_8 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_9 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_9 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_10 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_10 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_11 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_11 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_12 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_12 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_13 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_13 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_14 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_14 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_V_V_15 int 32 regular {fifo 1 volatile } {global 1}  }
	{ in_compute_y_V_V_15 int 32 regular {fifo 1 volatile } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_data_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_id_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_dest_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_user_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_V_last_V", "interface" : "fifo", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "n_pipe1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "mean_pipe1_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "mean_pipe2_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_8", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_8", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_9", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_9", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_10", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_10", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_11", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_11", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_12", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_12", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_13", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_13", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_14", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_14", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_V_V_15", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "in_compute_y_V_V_15", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 130
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
	{ n_pipe1_V_V_din sc_out sc_lv 32 signal 5 } 
	{ n_pipe1_V_V_full_n sc_in sc_logic 1 signal 5 } 
	{ n_pipe1_V_V_write sc_out sc_logic 1 signal 5 } 
	{ mean_pipe1_V_V_din sc_out sc_lv 32 signal 6 } 
	{ mean_pipe1_V_V_full_n sc_in sc_logic 1 signal 6 } 
	{ mean_pipe1_V_V_write sc_out sc_logic 1 signal 6 } 
	{ mean_pipe2_V_V_din sc_out sc_lv 32 signal 7 } 
	{ mean_pipe2_V_V_full_n sc_in sc_logic 1 signal 7 } 
	{ mean_pipe2_V_V_write sc_out sc_logic 1 signal 7 } 
	{ in_compute_V_V_0_din sc_out sc_lv 32 signal 8 } 
	{ in_compute_V_V_0_full_n sc_in sc_logic 1 signal 8 } 
	{ in_compute_V_V_0_write sc_out sc_logic 1 signal 8 } 
	{ in_compute_y_V_V_0_din sc_out sc_lv 32 signal 9 } 
	{ in_compute_y_V_V_0_full_n sc_in sc_logic 1 signal 9 } 
	{ in_compute_y_V_V_0_write sc_out sc_logic 1 signal 9 } 
	{ in_compute_V_V_1_din sc_out sc_lv 32 signal 10 } 
	{ in_compute_V_V_1_full_n sc_in sc_logic 1 signal 10 } 
	{ in_compute_V_V_1_write sc_out sc_logic 1 signal 10 } 
	{ in_compute_y_V_V_1_din sc_out sc_lv 32 signal 11 } 
	{ in_compute_y_V_V_1_full_n sc_in sc_logic 1 signal 11 } 
	{ in_compute_y_V_V_1_write sc_out sc_logic 1 signal 11 } 
	{ in_compute_V_V_2_din sc_out sc_lv 32 signal 12 } 
	{ in_compute_V_V_2_full_n sc_in sc_logic 1 signal 12 } 
	{ in_compute_V_V_2_write sc_out sc_logic 1 signal 12 } 
	{ in_compute_y_V_V_2_din sc_out sc_lv 32 signal 13 } 
	{ in_compute_y_V_V_2_full_n sc_in sc_logic 1 signal 13 } 
	{ in_compute_y_V_V_2_write sc_out sc_logic 1 signal 13 } 
	{ in_compute_V_V_3_din sc_out sc_lv 32 signal 14 } 
	{ in_compute_V_V_3_full_n sc_in sc_logic 1 signal 14 } 
	{ in_compute_V_V_3_write sc_out sc_logic 1 signal 14 } 
	{ in_compute_y_V_V_3_din sc_out sc_lv 32 signal 15 } 
	{ in_compute_y_V_V_3_full_n sc_in sc_logic 1 signal 15 } 
	{ in_compute_y_V_V_3_write sc_out sc_logic 1 signal 15 } 
	{ in_compute_V_V_4_din sc_out sc_lv 32 signal 16 } 
	{ in_compute_V_V_4_full_n sc_in sc_logic 1 signal 16 } 
	{ in_compute_V_V_4_write sc_out sc_logic 1 signal 16 } 
	{ in_compute_y_V_V_4_din sc_out sc_lv 32 signal 17 } 
	{ in_compute_y_V_V_4_full_n sc_in sc_logic 1 signal 17 } 
	{ in_compute_y_V_V_4_write sc_out sc_logic 1 signal 17 } 
	{ in_compute_V_V_5_din sc_out sc_lv 32 signal 18 } 
	{ in_compute_V_V_5_full_n sc_in sc_logic 1 signal 18 } 
	{ in_compute_V_V_5_write sc_out sc_logic 1 signal 18 } 
	{ in_compute_y_V_V_5_din sc_out sc_lv 32 signal 19 } 
	{ in_compute_y_V_V_5_full_n sc_in sc_logic 1 signal 19 } 
	{ in_compute_y_V_V_5_write sc_out sc_logic 1 signal 19 } 
	{ in_compute_V_V_6_din sc_out sc_lv 32 signal 20 } 
	{ in_compute_V_V_6_full_n sc_in sc_logic 1 signal 20 } 
	{ in_compute_V_V_6_write sc_out sc_logic 1 signal 20 } 
	{ in_compute_y_V_V_6_din sc_out sc_lv 32 signal 21 } 
	{ in_compute_y_V_V_6_full_n sc_in sc_logic 1 signal 21 } 
	{ in_compute_y_V_V_6_write sc_out sc_logic 1 signal 21 } 
	{ in_compute_V_V_7_din sc_out sc_lv 32 signal 22 } 
	{ in_compute_V_V_7_full_n sc_in sc_logic 1 signal 22 } 
	{ in_compute_V_V_7_write sc_out sc_logic 1 signal 22 } 
	{ in_compute_y_V_V_7_din sc_out sc_lv 32 signal 23 } 
	{ in_compute_y_V_V_7_full_n sc_in sc_logic 1 signal 23 } 
	{ in_compute_y_V_V_7_write sc_out sc_logic 1 signal 23 } 
	{ in_compute_V_V_8_din sc_out sc_lv 32 signal 24 } 
	{ in_compute_V_V_8_full_n sc_in sc_logic 1 signal 24 } 
	{ in_compute_V_V_8_write sc_out sc_logic 1 signal 24 } 
	{ in_compute_y_V_V_8_din sc_out sc_lv 32 signal 25 } 
	{ in_compute_y_V_V_8_full_n sc_in sc_logic 1 signal 25 } 
	{ in_compute_y_V_V_8_write sc_out sc_logic 1 signal 25 } 
	{ in_compute_V_V_9_din sc_out sc_lv 32 signal 26 } 
	{ in_compute_V_V_9_full_n sc_in sc_logic 1 signal 26 } 
	{ in_compute_V_V_9_write sc_out sc_logic 1 signal 26 } 
	{ in_compute_y_V_V_9_din sc_out sc_lv 32 signal 27 } 
	{ in_compute_y_V_V_9_full_n sc_in sc_logic 1 signal 27 } 
	{ in_compute_y_V_V_9_write sc_out sc_logic 1 signal 27 } 
	{ in_compute_V_V_10_din sc_out sc_lv 32 signal 28 } 
	{ in_compute_V_V_10_full_n sc_in sc_logic 1 signal 28 } 
	{ in_compute_V_V_10_write sc_out sc_logic 1 signal 28 } 
	{ in_compute_y_V_V_10_din sc_out sc_lv 32 signal 29 } 
	{ in_compute_y_V_V_10_full_n sc_in sc_logic 1 signal 29 } 
	{ in_compute_y_V_V_10_write sc_out sc_logic 1 signal 29 } 
	{ in_compute_V_V_11_din sc_out sc_lv 32 signal 30 } 
	{ in_compute_V_V_11_full_n sc_in sc_logic 1 signal 30 } 
	{ in_compute_V_V_11_write sc_out sc_logic 1 signal 30 } 
	{ in_compute_y_V_V_11_din sc_out sc_lv 32 signal 31 } 
	{ in_compute_y_V_V_11_full_n sc_in sc_logic 1 signal 31 } 
	{ in_compute_y_V_V_11_write sc_out sc_logic 1 signal 31 } 
	{ in_compute_V_V_12_din sc_out sc_lv 32 signal 32 } 
	{ in_compute_V_V_12_full_n sc_in sc_logic 1 signal 32 } 
	{ in_compute_V_V_12_write sc_out sc_logic 1 signal 32 } 
	{ in_compute_y_V_V_12_din sc_out sc_lv 32 signal 33 } 
	{ in_compute_y_V_V_12_full_n sc_in sc_logic 1 signal 33 } 
	{ in_compute_y_V_V_12_write sc_out sc_logic 1 signal 33 } 
	{ in_compute_V_V_13_din sc_out sc_lv 32 signal 34 } 
	{ in_compute_V_V_13_full_n sc_in sc_logic 1 signal 34 } 
	{ in_compute_V_V_13_write sc_out sc_logic 1 signal 34 } 
	{ in_compute_y_V_V_13_din sc_out sc_lv 32 signal 35 } 
	{ in_compute_y_V_V_13_full_n sc_in sc_logic 1 signal 35 } 
	{ in_compute_y_V_V_13_write sc_out sc_logic 1 signal 35 } 
	{ in_compute_V_V_14_din sc_out sc_lv 32 signal 36 } 
	{ in_compute_V_V_14_full_n sc_in sc_logic 1 signal 36 } 
	{ in_compute_V_V_14_write sc_out sc_logic 1 signal 36 } 
	{ in_compute_y_V_V_14_din sc_out sc_lv 32 signal 37 } 
	{ in_compute_y_V_V_14_full_n sc_in sc_logic 1 signal 37 } 
	{ in_compute_y_V_V_14_write sc_out sc_logic 1 signal 37 } 
	{ in_compute_V_V_15_din sc_out sc_lv 32 signal 38 } 
	{ in_compute_V_V_15_full_n sc_in sc_logic 1 signal 38 } 
	{ in_compute_V_V_15_write sc_out sc_logic 1 signal 38 } 
	{ in_compute_y_V_V_15_din sc_out sc_lv 32 signal 39 } 
	{ in_compute_y_V_V_15_full_n sc_in sc_logic 1 signal 39 } 
	{ in_compute_y_V_V_15_write sc_out sc_logic 1 signal 39 } 
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
 	{ "name": "n_pipe1_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "n_pipe1_V_V", "role": "din" }} , 
 	{ "name": "n_pipe1_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe1_V_V", "role": "full_n" }} , 
 	{ "name": "n_pipe1_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "n_pipe1_V_V", "role": "write" }} , 
 	{ "name": "mean_pipe1_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "mean_pipe1_V_V", "role": "din" }} , 
 	{ "name": "mean_pipe1_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean_pipe1_V_V", "role": "full_n" }} , 
 	{ "name": "mean_pipe1_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean_pipe1_V_V", "role": "write" }} , 
 	{ "name": "mean_pipe2_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "mean_pipe2_V_V", "role": "din" }} , 
 	{ "name": "mean_pipe2_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean_pipe2_V_V", "role": "full_n" }} , 
 	{ "name": "mean_pipe2_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean_pipe2_V_V", "role": "write" }} , 
 	{ "name": "in_compute_V_V_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_0", "role": "din" }} , 
 	{ "name": "in_compute_V_V_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_0", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_0", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_0", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_0", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_0", "role": "write" }} , 
 	{ "name": "in_compute_V_V_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_1", "role": "din" }} , 
 	{ "name": "in_compute_V_V_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_1", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_1", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_1", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_1", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_1", "role": "write" }} , 
 	{ "name": "in_compute_V_V_2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_2", "role": "din" }} , 
 	{ "name": "in_compute_V_V_2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_2", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_2", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_2", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_2", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_2", "role": "write" }} , 
 	{ "name": "in_compute_V_V_3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_3", "role": "din" }} , 
 	{ "name": "in_compute_V_V_3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_3", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_3", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_3", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_3", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_3", "role": "write" }} , 
 	{ "name": "in_compute_V_V_4_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_4", "role": "din" }} , 
 	{ "name": "in_compute_V_V_4_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_4", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_4_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_4", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_4_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_4", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_4_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_4", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_4_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_4", "role": "write" }} , 
 	{ "name": "in_compute_V_V_5_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_5", "role": "din" }} , 
 	{ "name": "in_compute_V_V_5_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_5", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_5_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_5", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_5_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_5", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_5_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_5", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_5_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_5", "role": "write" }} , 
 	{ "name": "in_compute_V_V_6_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_6", "role": "din" }} , 
 	{ "name": "in_compute_V_V_6_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_6", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_6_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_6", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_6_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_6", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_6_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_6", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_6_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_6", "role": "write" }} , 
 	{ "name": "in_compute_V_V_7_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_7", "role": "din" }} , 
 	{ "name": "in_compute_V_V_7_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_7", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_7_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_7", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_7_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_7", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_7_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_7", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_7_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_7", "role": "write" }} , 
 	{ "name": "in_compute_V_V_8_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_8", "role": "din" }} , 
 	{ "name": "in_compute_V_V_8_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_8", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_8_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_8", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_8_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_8", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_8_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_8", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_8_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_8", "role": "write" }} , 
 	{ "name": "in_compute_V_V_9_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_9", "role": "din" }} , 
 	{ "name": "in_compute_V_V_9_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_9", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_9_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_9", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_9_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_9", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_9_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_9", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_9_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_9", "role": "write" }} , 
 	{ "name": "in_compute_V_V_10_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_10", "role": "din" }} , 
 	{ "name": "in_compute_V_V_10_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_10", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_10_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_10", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_10_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_10", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_10_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_10", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_10_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_10", "role": "write" }} , 
 	{ "name": "in_compute_V_V_11_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_11", "role": "din" }} , 
 	{ "name": "in_compute_V_V_11_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_11", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_11_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_11", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_11_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_11", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_11_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_11", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_11_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_11", "role": "write" }} , 
 	{ "name": "in_compute_V_V_12_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_12", "role": "din" }} , 
 	{ "name": "in_compute_V_V_12_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_12", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_12_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_12", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_12_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_12", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_12_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_12", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_12_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_12", "role": "write" }} , 
 	{ "name": "in_compute_V_V_13_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_13", "role": "din" }} , 
 	{ "name": "in_compute_V_V_13_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_13", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_13_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_13", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_13_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_13", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_13_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_13", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_13_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_13", "role": "write" }} , 
 	{ "name": "in_compute_V_V_14_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_14", "role": "din" }} , 
 	{ "name": "in_compute_V_V_14_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_14", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_14_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_14", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_14_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_14", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_14_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_14", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_14_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_14", "role": "write" }} , 
 	{ "name": "in_compute_V_V_15_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_V_V_15", "role": "din" }} , 
 	{ "name": "in_compute_V_V_15_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_15", "role": "full_n" }} , 
 	{ "name": "in_compute_V_V_15_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_V_V_15", "role": "write" }} , 
 	{ "name": "in_compute_y_V_V_15_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_compute_y_V_V_15", "role": "din" }} , 
 	{ "name": "in_compute_y_V_V_15_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_15", "role": "full_n" }} , 
 	{ "name": "in_compute_y_V_V_15_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_compute_y_V_V_15", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
			{"Name" : "n_pipe1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "n_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "mean_pipe1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "mean_pipe2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "mean_pipe2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_8", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_8", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_9", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_9", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_10", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_10", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_11", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_11", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_12", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_12", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_13", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_13", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_14", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_14", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_V_V_15", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_V_V_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_compute_y_V_V_15", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_compute_y_V_V_15_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_29_srem_41s_11ns_33_45_1_U95", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		in_compute_y_V_V_15 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "96", "Max" : "24624"}
	, {"Name" : "Interval", "Min" : "96", "Max" : "24624"}
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
	n_pipe1_V_V { ap_fifo {  { n_pipe1_V_V_din fifo_data 1 32 }  { n_pipe1_V_V_full_n fifo_status 0 1 }  { n_pipe1_V_V_write fifo_update 1 1 } } }
	mean_pipe1_V_V { ap_fifo {  { mean_pipe1_V_V_din fifo_data 1 32 }  { mean_pipe1_V_V_full_n fifo_status 0 1 }  { mean_pipe1_V_V_write fifo_update 1 1 } } }
	mean_pipe2_V_V { ap_fifo {  { mean_pipe2_V_V_din fifo_data 1 32 }  { mean_pipe2_V_V_full_n fifo_status 0 1 }  { mean_pipe2_V_V_write fifo_update 1 1 } } }
	in_compute_V_V_0 { ap_fifo {  { in_compute_V_V_0_din fifo_data 1 32 }  { in_compute_V_V_0_full_n fifo_status 0 1 }  { in_compute_V_V_0_write fifo_update 1 1 } } }
	in_compute_y_V_V_0 { ap_fifo {  { in_compute_y_V_V_0_din fifo_data 1 32 }  { in_compute_y_V_V_0_full_n fifo_status 0 1 }  { in_compute_y_V_V_0_write fifo_update 1 1 } } }
	in_compute_V_V_1 { ap_fifo {  { in_compute_V_V_1_din fifo_data 1 32 }  { in_compute_V_V_1_full_n fifo_status 0 1 }  { in_compute_V_V_1_write fifo_update 1 1 } } }
	in_compute_y_V_V_1 { ap_fifo {  { in_compute_y_V_V_1_din fifo_data 1 32 }  { in_compute_y_V_V_1_full_n fifo_status 0 1 }  { in_compute_y_V_V_1_write fifo_update 1 1 } } }
	in_compute_V_V_2 { ap_fifo {  { in_compute_V_V_2_din fifo_data 1 32 }  { in_compute_V_V_2_full_n fifo_status 0 1 }  { in_compute_V_V_2_write fifo_update 1 1 } } }
	in_compute_y_V_V_2 { ap_fifo {  { in_compute_y_V_V_2_din fifo_data 1 32 }  { in_compute_y_V_V_2_full_n fifo_status 0 1 }  { in_compute_y_V_V_2_write fifo_update 1 1 } } }
	in_compute_V_V_3 { ap_fifo {  { in_compute_V_V_3_din fifo_data 1 32 }  { in_compute_V_V_3_full_n fifo_status 0 1 }  { in_compute_V_V_3_write fifo_update 1 1 } } }
	in_compute_y_V_V_3 { ap_fifo {  { in_compute_y_V_V_3_din fifo_data 1 32 }  { in_compute_y_V_V_3_full_n fifo_status 0 1 }  { in_compute_y_V_V_3_write fifo_update 1 1 } } }
	in_compute_V_V_4 { ap_fifo {  { in_compute_V_V_4_din fifo_data 1 32 }  { in_compute_V_V_4_full_n fifo_status 0 1 }  { in_compute_V_V_4_write fifo_update 1 1 } } }
	in_compute_y_V_V_4 { ap_fifo {  { in_compute_y_V_V_4_din fifo_data 1 32 }  { in_compute_y_V_V_4_full_n fifo_status 0 1 }  { in_compute_y_V_V_4_write fifo_update 1 1 } } }
	in_compute_V_V_5 { ap_fifo {  { in_compute_V_V_5_din fifo_data 1 32 }  { in_compute_V_V_5_full_n fifo_status 0 1 }  { in_compute_V_V_5_write fifo_update 1 1 } } }
	in_compute_y_V_V_5 { ap_fifo {  { in_compute_y_V_V_5_din fifo_data 1 32 }  { in_compute_y_V_V_5_full_n fifo_status 0 1 }  { in_compute_y_V_V_5_write fifo_update 1 1 } } }
	in_compute_V_V_6 { ap_fifo {  { in_compute_V_V_6_din fifo_data 1 32 }  { in_compute_V_V_6_full_n fifo_status 0 1 }  { in_compute_V_V_6_write fifo_update 1 1 } } }
	in_compute_y_V_V_6 { ap_fifo {  { in_compute_y_V_V_6_din fifo_data 1 32 }  { in_compute_y_V_V_6_full_n fifo_status 0 1 }  { in_compute_y_V_V_6_write fifo_update 1 1 } } }
	in_compute_V_V_7 { ap_fifo {  { in_compute_V_V_7_din fifo_data 1 32 }  { in_compute_V_V_7_full_n fifo_status 0 1 }  { in_compute_V_V_7_write fifo_update 1 1 } } }
	in_compute_y_V_V_7 { ap_fifo {  { in_compute_y_V_V_7_din fifo_data 1 32 }  { in_compute_y_V_V_7_full_n fifo_status 0 1 }  { in_compute_y_V_V_7_write fifo_update 1 1 } } }
	in_compute_V_V_8 { ap_fifo {  { in_compute_V_V_8_din fifo_data 1 32 }  { in_compute_V_V_8_full_n fifo_status 0 1 }  { in_compute_V_V_8_write fifo_update 1 1 } } }
	in_compute_y_V_V_8 { ap_fifo {  { in_compute_y_V_V_8_din fifo_data 1 32 }  { in_compute_y_V_V_8_full_n fifo_status 0 1 }  { in_compute_y_V_V_8_write fifo_update 1 1 } } }
	in_compute_V_V_9 { ap_fifo {  { in_compute_V_V_9_din fifo_data 1 32 }  { in_compute_V_V_9_full_n fifo_status 0 1 }  { in_compute_V_V_9_write fifo_update 1 1 } } }
	in_compute_y_V_V_9 { ap_fifo {  { in_compute_y_V_V_9_din fifo_data 1 32 }  { in_compute_y_V_V_9_full_n fifo_status 0 1 }  { in_compute_y_V_V_9_write fifo_update 1 1 } } }
	in_compute_V_V_10 { ap_fifo {  { in_compute_V_V_10_din fifo_data 1 32 }  { in_compute_V_V_10_full_n fifo_status 0 1 }  { in_compute_V_V_10_write fifo_update 1 1 } } }
	in_compute_y_V_V_10 { ap_fifo {  { in_compute_y_V_V_10_din fifo_data 1 32 }  { in_compute_y_V_V_10_full_n fifo_status 0 1 }  { in_compute_y_V_V_10_write fifo_update 1 1 } } }
	in_compute_V_V_11 { ap_fifo {  { in_compute_V_V_11_din fifo_data 1 32 }  { in_compute_V_V_11_full_n fifo_status 0 1 }  { in_compute_V_V_11_write fifo_update 1 1 } } }
	in_compute_y_V_V_11 { ap_fifo {  { in_compute_y_V_V_11_din fifo_data 1 32 }  { in_compute_y_V_V_11_full_n fifo_status 0 1 }  { in_compute_y_V_V_11_write fifo_update 1 1 } } }
	in_compute_V_V_12 { ap_fifo {  { in_compute_V_V_12_din fifo_data 1 32 }  { in_compute_V_V_12_full_n fifo_status 0 1 }  { in_compute_V_V_12_write fifo_update 1 1 } } }
	in_compute_y_V_V_12 { ap_fifo {  { in_compute_y_V_V_12_din fifo_data 1 32 }  { in_compute_y_V_V_12_full_n fifo_status 0 1 }  { in_compute_y_V_V_12_write fifo_update 1 1 } } }
	in_compute_V_V_13 { ap_fifo {  { in_compute_V_V_13_din fifo_data 1 32 }  { in_compute_V_V_13_full_n fifo_status 0 1 }  { in_compute_V_V_13_write fifo_update 1 1 } } }
	in_compute_y_V_V_13 { ap_fifo {  { in_compute_y_V_V_13_din fifo_data 1 32 }  { in_compute_y_V_V_13_full_n fifo_status 0 1 }  { in_compute_y_V_V_13_write fifo_update 1 1 } } }
	in_compute_V_V_14 { ap_fifo {  { in_compute_V_V_14_din fifo_data 1 32 }  { in_compute_V_V_14_full_n fifo_status 0 1 }  { in_compute_V_V_14_write fifo_update 1 1 } } }
	in_compute_y_V_V_14 { ap_fifo {  { in_compute_y_V_V_14_din fifo_data 1 32 }  { in_compute_y_V_V_14_full_n fifo_status 0 1 }  { in_compute_y_V_V_14_write fifo_update 1 1 } } }
	in_compute_V_V_15 { ap_fifo {  { in_compute_V_V_15_din fifo_data 1 32 }  { in_compute_V_V_15_full_n fifo_status 0 1 }  { in_compute_V_V_15_write fifo_update 1 1 } } }
	in_compute_y_V_V_15 { ap_fifo {  { in_compute_y_V_V_15_din fifo_data 1 32 }  { in_compute_y_V_V_15_full_n fifo_status 0 1 }  { in_compute_y_V_V_15_write fifo_update 1 1 } } }
}
