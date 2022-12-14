// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="softmax,hls_ip_2018_3,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xczu19eg-ffvc1760-2-i,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=4.320000,HLS_SYN_LAT=-1,HLS_SYN_TPT=-1,HLS_SYN_MEM=132,HLS_SYN_DSP=370,HLS_SYN_FF=26027,HLS_SYN_LUT=32799,HLS_VERSION=2018_3}" *)

module softmax (
        in_r_TDATA,
        in_r_TID,
        in_r_TDEST,
        in_r_TUSER,
        in_r_TLAST,
        out_r_TDATA,
        out_r_TID,
        out_r_TDEST,
        out_r_TUSER,
        out_r_TLAST,
        ap_clk,
        ap_rst_n,
        in_r_TVALID,
        in_r_TREADY,
        out_r_TVALID,
        out_r_TREADY
);


input  [511:0] in_r_TDATA;
input  [7:0] in_r_TID;
input  [7:0] in_r_TDEST;
input  [15:0] in_r_TUSER;
input  [0:0] in_r_TLAST;
output  [511:0] out_r_TDATA;
output  [7:0] out_r_TID;
output  [7:0] out_r_TDEST;
output  [15:0] out_r_TUSER;
output  [0:0] out_r_TLAST;
input   ap_clk;
input   ap_rst_n;
input   in_r_TVALID;
output   in_r_TREADY;
output   out_r_TVALID;
input   out_r_TREADY;

 reg    ap_rst_n_inv;
wire    read_data_U0_ap_start;
wire    read_data_U0_start_full_n;
wire    read_data_U0_ap_done;
wire    read_data_U0_ap_continue;
wire    read_data_U0_ap_idle;
wire    read_data_U0_ap_ready;
wire    read_data_U0_start_out;
wire    read_data_U0_start_write;
wire    read_data_U0_in_r_TREADY;
wire   [95:0] read_data_U0_in_write_n_V_V_din;
wire    read_data_U0_in_write_n_V_V_write;
wire   [31:0] read_data_U0_in_sub_max_r_V_V_din;
wire    read_data_U0_in_sub_max_r_V_V_write;
wire   [31:0] read_data_U0_in_sub_max_c_V_V_din;
wire    read_data_U0_in_sub_max_c_V_V_write;
wire   [31:0] read_data_U0_max_input_V_V_din;
wire    read_data_U0_max_input_V_V_write;
wire   [511:0] read_data_U0_in_sub_max_V_V_din;
wire    read_data_U0_in_sub_max_V_V_write;
wire    subtract_max_U0_ap_start;
wire    subtract_max_U0_ap_done;
wire    subtract_max_U0_ap_continue;
wire    subtract_max_U0_ap_idle;
wire    subtract_max_U0_ap_ready;
wire    subtract_max_U0_start_out;
wire    subtract_max_U0_start_write;
wire    subtract_max_U0_in_sub_max_c_V_V_read;
wire    subtract_max_U0_in_sub_max_r_V_V_read;
wire   [31:0] subtract_max_U0_in_proc_1_iter_r_V_V_din;
wire    subtract_max_U0_in_proc_1_iter_r_V_V_write;
wire   [31:0] subtract_max_U0_in_proc_1_iter_c_V_V_din;
wire    subtract_max_U0_in_proc_1_iter_c_V_V_write;
wire    subtract_max_U0_max_input_V_V_read;
wire    subtract_max_U0_in_sub_max_V_V_read;
wire   [511:0] subtract_max_U0_in_proc_1_V_V_din;
wire    subtract_max_U0_in_proc_1_V_V_write;
wire    process_1_U0_ap_start;
wire    process_1_U0_ap_done;
wire    process_1_U0_ap_continue;
wire    process_1_U0_ap_idle;
wire    process_1_U0_ap_ready;
wire    process_1_U0_start_out;
wire    process_1_U0_start_write;
wire    process_1_U0_in_proc_1_iter_c_V_V_read;
wire    process_1_U0_in_proc_1_iter_r_V_V_read;
wire   [31:0] process_1_U0_in_quant_iter_r_V_V_din;
wire    process_1_U0_in_quant_iter_r_V_V_write;
wire   [31:0] process_1_U0_in_quant_iter_c_V_V_din;
wire    process_1_U0_in_quant_iter_c_V_V_write;
wire    process_1_U0_in_proc_1_V_V_read;
wire   [1023:0] process_1_U0_in_quant_V_V_din;
wire    process_1_U0_in_quant_V_V_write;
wire    QuantAct_1_channel_U0_ap_start;
wire    QuantAct_1_channel_U0_ap_done;
wire    QuantAct_1_channel_U0_ap_continue;
wire    QuantAct_1_channel_U0_ap_idle;
wire    QuantAct_1_channel_U0_ap_ready;
wire    QuantAct_1_channel_U0_start_out;
wire    QuantAct_1_channel_U0_start_write;
wire    QuantAct_1_channel_U0_in_quant_iter_c_V_V_read;
wire    QuantAct_1_channel_U0_in_quant_iter_r_V_V_read;
wire   [31:0] QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_din;
wire    QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_write;
wire   [31:0] QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_din;
wire    QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_write;
wire   [31:0] QuantAct_1_channel_U0_sum_V_V_din;
wire    QuantAct_1_channel_U0_sum_V_V_write;
wire    QuantAct_1_channel_U0_in_quant_V_V_read;
wire   [255:0] QuantAct_1_channel_U0_in_proc_2_V_V_din;
wire    QuantAct_1_channel_U0_in_proc_2_V_V_write;
wire    divide_U0_ap_start;
wire    divide_U0_ap_done;
wire    divide_U0_ap_continue;
wire    divide_U0_ap_idle;
wire    divide_U0_ap_ready;
wire    divide_U0_in_proc_2_iter_c_V_V_read;
wire    divide_U0_in_proc_2_iter_r_V_V_read;
wire   [31:0] divide_U0_in_write_iter_c_V_V_din;
wire    divide_U0_in_write_iter_c_V_V_write;
wire    divide_U0_sum_V_V_read;
wire    divide_U0_in_proc_2_V_V_read;
wire   [127:0] divide_U0_in_write_V_V_din;
wire    divide_U0_in_write_V_V_write;
wire    write_U0_ap_start;
wire    write_U0_ap_done;
wire    write_U0_ap_continue;
wire    write_U0_ap_idle;
wire    write_U0_ap_ready;
wire   [511:0] write_U0_out_r_TDATA;
wire    write_U0_out_r_TVALID;
wire   [7:0] write_U0_out_r_TID;
wire   [7:0] write_U0_out_r_TDEST;
wire   [15:0] write_U0_out_r_TUSER;
wire   [0:0] write_U0_out_r_TLAST;
wire    write_U0_in_write_n_V_V_read;
wire    write_U0_in_write_iter_c_V_V_read;
wire    write_U0_in_write_V_V_read;
wire    ap_sync_continue;
wire    in_write_n_V_V_full_n;
wire   [95:0] in_write_n_V_V_dout;
wire    in_write_n_V_V_empty_n;
wire    in_sub_max_r_V_V_full_n;
wire   [31:0] in_sub_max_r_V_V_dout;
wire    in_sub_max_r_V_V_empty_n;
wire    in_sub_max_c_V_V_full_n;
wire   [31:0] in_sub_max_c_V_V_dout;
wire    in_sub_max_c_V_V_empty_n;
wire    max_input_V_V_full_n;
wire   [31:0] max_input_V_V_dout;
wire    max_input_V_V_empty_n;
wire    in_sub_max_V_V_full_n;
wire   [511:0] in_sub_max_V_V_dout;
wire    in_sub_max_V_V_empty_n;
wire    in_proc_1_iter_r_V_V_full_n;
wire   [31:0] in_proc_1_iter_r_V_V_dout;
wire    in_proc_1_iter_r_V_V_empty_n;
wire    in_proc_1_iter_c_V_V_full_n;
wire   [31:0] in_proc_1_iter_c_V_V_dout;
wire    in_proc_1_iter_c_V_V_empty_n;
wire    in_proc_1_V_V_full_n;
wire   [511:0] in_proc_1_V_V_dout;
wire    in_proc_1_V_V_empty_n;
wire    in_quant_iter_r_V_V_full_n;
wire   [31:0] in_quant_iter_r_V_V_dout;
wire    in_quant_iter_r_V_V_empty_n;
wire    in_quant_iter_c_V_V_full_n;
wire   [31:0] in_quant_iter_c_V_V_dout;
wire    in_quant_iter_c_V_V_empty_n;
wire    in_quant_V_V_full_n;
wire   [1023:0] in_quant_V_V_dout;
wire    in_quant_V_V_empty_n;
wire    in_proc_2_iter_r_V_V_full_n;
wire   [31:0] in_proc_2_iter_r_V_V_dout;
wire    in_proc_2_iter_r_V_V_empty_n;
wire    in_proc_2_iter_c_V_V_full_n;
wire   [31:0] in_proc_2_iter_c_V_V_dout;
wire    in_proc_2_iter_c_V_V_empty_n;
wire    sum_V_V_full_n;
wire   [31:0] sum_V_V_dout;
wire    sum_V_V_empty_n;
wire    in_proc_2_V_V_full_n;
wire   [255:0] in_proc_2_V_V_dout;
wire    in_proc_2_V_V_empty_n;
wire    in_write_iter_c_V_V_full_n;
wire   [31:0] in_write_iter_c_V_V_dout;
wire    in_write_iter_c_V_V_empty_n;
wire    in_write_V_V_full_n;
wire   [127:0] in_write_V_V_dout;
wire    in_write_V_V_empty_n;
wire   [0:0] start_for_subtract_max_U0_din;
wire    start_for_subtract_max_U0_full_n;
wire   [0:0] start_for_subtract_max_U0_dout;
wire    start_for_subtract_max_U0_empty_n;
wire   [0:0] start_for_write_U0_din;
wire    start_for_write_U0_full_n;
wire   [0:0] start_for_write_U0_dout;
wire    start_for_write_U0_empty_n;
wire   [0:0] start_for_process_1_U0_din;
wire    start_for_process_1_U0_full_n;
wire   [0:0] start_for_process_1_U0_dout;
wire    start_for_process_1_U0_empty_n;
wire   [0:0] start_for_QuantAct_1_channel_U0_din;
wire    start_for_QuantAct_1_channel_U0_full_n;
wire   [0:0] start_for_QuantAct_1_channel_U0_dout;
wire    start_for_QuantAct_1_channel_U0_empty_n;
wire   [0:0] start_for_divide_U0_din;
wire    start_for_divide_U0_full_n;
wire   [0:0] start_for_divide_U0_dout;
wire    start_for_divide_U0_empty_n;
wire    divide_U0_start_full_n;
wire    divide_U0_start_write;
wire    write_U0_start_full_n;
wire    write_U0_start_write;

read_data read_data_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(read_data_U0_ap_start),
    .start_full_n(read_data_U0_start_full_n),
    .ap_done(read_data_U0_ap_done),
    .ap_continue(read_data_U0_ap_continue),
    .ap_idle(read_data_U0_ap_idle),
    .ap_ready(read_data_U0_ap_ready),
    .start_out(read_data_U0_start_out),
    .start_write(read_data_U0_start_write),
    .in_r_TDATA(in_r_TDATA),
    .in_r_TVALID(in_r_TVALID),
    .in_r_TREADY(read_data_U0_in_r_TREADY),
    .in_r_TID(in_r_TID),
    .in_r_TDEST(in_r_TDEST),
    .in_r_TUSER(in_r_TUSER),
    .in_r_TLAST(in_r_TLAST),
    .in_write_n_V_V_din(read_data_U0_in_write_n_V_V_din),
    .in_write_n_V_V_full_n(in_write_n_V_V_full_n),
    .in_write_n_V_V_write(read_data_U0_in_write_n_V_V_write),
    .in_sub_max_r_V_V_din(read_data_U0_in_sub_max_r_V_V_din),
    .in_sub_max_r_V_V_full_n(in_sub_max_r_V_V_full_n),
    .in_sub_max_r_V_V_write(read_data_U0_in_sub_max_r_V_V_write),
    .in_sub_max_c_V_V_din(read_data_U0_in_sub_max_c_V_V_din),
    .in_sub_max_c_V_V_full_n(in_sub_max_c_V_V_full_n),
    .in_sub_max_c_V_V_write(read_data_U0_in_sub_max_c_V_V_write),
    .max_input_V_V_din(read_data_U0_max_input_V_V_din),
    .max_input_V_V_full_n(max_input_V_V_full_n),
    .max_input_V_V_write(read_data_U0_max_input_V_V_write),
    .in_sub_max_V_V_din(read_data_U0_in_sub_max_V_V_din),
    .in_sub_max_V_V_full_n(in_sub_max_V_V_full_n),
    .in_sub_max_V_V_write(read_data_U0_in_sub_max_V_V_write)
);

subtract_max subtract_max_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(subtract_max_U0_ap_start),
    .start_full_n(start_for_process_1_U0_full_n),
    .ap_done(subtract_max_U0_ap_done),
    .ap_continue(subtract_max_U0_ap_continue),
    .ap_idle(subtract_max_U0_ap_idle),
    .ap_ready(subtract_max_U0_ap_ready),
    .start_out(subtract_max_U0_start_out),
    .start_write(subtract_max_U0_start_write),
    .in_sub_max_c_V_V_dout(in_sub_max_c_V_V_dout),
    .in_sub_max_c_V_V_empty_n(in_sub_max_c_V_V_empty_n),
    .in_sub_max_c_V_V_read(subtract_max_U0_in_sub_max_c_V_V_read),
    .in_sub_max_r_V_V_dout(in_sub_max_r_V_V_dout),
    .in_sub_max_r_V_V_empty_n(in_sub_max_r_V_V_empty_n),
    .in_sub_max_r_V_V_read(subtract_max_U0_in_sub_max_r_V_V_read),
    .in_proc_1_iter_r_V_V_din(subtract_max_U0_in_proc_1_iter_r_V_V_din),
    .in_proc_1_iter_r_V_V_full_n(in_proc_1_iter_r_V_V_full_n),
    .in_proc_1_iter_r_V_V_write(subtract_max_U0_in_proc_1_iter_r_V_V_write),
    .in_proc_1_iter_c_V_V_din(subtract_max_U0_in_proc_1_iter_c_V_V_din),
    .in_proc_1_iter_c_V_V_full_n(in_proc_1_iter_c_V_V_full_n),
    .in_proc_1_iter_c_V_V_write(subtract_max_U0_in_proc_1_iter_c_V_V_write),
    .max_input_V_V_dout(max_input_V_V_dout),
    .max_input_V_V_empty_n(max_input_V_V_empty_n),
    .max_input_V_V_read(subtract_max_U0_max_input_V_V_read),
    .in_sub_max_V_V_dout(in_sub_max_V_V_dout),
    .in_sub_max_V_V_empty_n(in_sub_max_V_V_empty_n),
    .in_sub_max_V_V_read(subtract_max_U0_in_sub_max_V_V_read),
    .in_proc_1_V_V_din(subtract_max_U0_in_proc_1_V_V_din),
    .in_proc_1_V_V_full_n(in_proc_1_V_V_full_n),
    .in_proc_1_V_V_write(subtract_max_U0_in_proc_1_V_V_write)
);

process_1 process_1_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(process_1_U0_ap_start),
    .start_full_n(start_for_QuantAct_1_channel_U0_full_n),
    .ap_done(process_1_U0_ap_done),
    .ap_continue(process_1_U0_ap_continue),
    .ap_idle(process_1_U0_ap_idle),
    .ap_ready(process_1_U0_ap_ready),
    .start_out(process_1_U0_start_out),
    .start_write(process_1_U0_start_write),
    .in_proc_1_iter_c_V_V_dout(in_proc_1_iter_c_V_V_dout),
    .in_proc_1_iter_c_V_V_empty_n(in_proc_1_iter_c_V_V_empty_n),
    .in_proc_1_iter_c_V_V_read(process_1_U0_in_proc_1_iter_c_V_V_read),
    .in_proc_1_iter_r_V_V_dout(in_proc_1_iter_r_V_V_dout),
    .in_proc_1_iter_r_V_V_empty_n(in_proc_1_iter_r_V_V_empty_n),
    .in_proc_1_iter_r_V_V_read(process_1_U0_in_proc_1_iter_r_V_V_read),
    .in_quant_iter_r_V_V_din(process_1_U0_in_quant_iter_r_V_V_din),
    .in_quant_iter_r_V_V_full_n(in_quant_iter_r_V_V_full_n),
    .in_quant_iter_r_V_V_write(process_1_U0_in_quant_iter_r_V_V_write),
    .in_quant_iter_c_V_V_din(process_1_U0_in_quant_iter_c_V_V_din),
    .in_quant_iter_c_V_V_full_n(in_quant_iter_c_V_V_full_n),
    .in_quant_iter_c_V_V_write(process_1_U0_in_quant_iter_c_V_V_write),
    .in_proc_1_V_V_dout(in_proc_1_V_V_dout),
    .in_proc_1_V_V_empty_n(in_proc_1_V_V_empty_n),
    .in_proc_1_V_V_read(process_1_U0_in_proc_1_V_V_read),
    .in_quant_V_V_din(process_1_U0_in_quant_V_V_din),
    .in_quant_V_V_full_n(in_quant_V_V_full_n),
    .in_quant_V_V_write(process_1_U0_in_quant_V_V_write)
);

QuantAct_1_channel QuantAct_1_channel_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(QuantAct_1_channel_U0_ap_start),
    .start_full_n(start_for_divide_U0_full_n),
    .ap_done(QuantAct_1_channel_U0_ap_done),
    .ap_continue(QuantAct_1_channel_U0_ap_continue),
    .ap_idle(QuantAct_1_channel_U0_ap_idle),
    .ap_ready(QuantAct_1_channel_U0_ap_ready),
    .start_out(QuantAct_1_channel_U0_start_out),
    .start_write(QuantAct_1_channel_U0_start_write),
    .in_quant_iter_c_V_V_dout(in_quant_iter_c_V_V_dout),
    .in_quant_iter_c_V_V_empty_n(in_quant_iter_c_V_V_empty_n),
    .in_quant_iter_c_V_V_read(QuantAct_1_channel_U0_in_quant_iter_c_V_V_read),
    .in_quant_iter_r_V_V_dout(in_quant_iter_r_V_V_dout),
    .in_quant_iter_r_V_V_empty_n(in_quant_iter_r_V_V_empty_n),
    .in_quant_iter_r_V_V_read(QuantAct_1_channel_U0_in_quant_iter_r_V_V_read),
    .in_proc_2_iter_r_V_V_din(QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_din),
    .in_proc_2_iter_r_V_V_full_n(in_proc_2_iter_r_V_V_full_n),
    .in_proc_2_iter_r_V_V_write(QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_write),
    .in_proc_2_iter_c_V_V_din(QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_din),
    .in_proc_2_iter_c_V_V_full_n(in_proc_2_iter_c_V_V_full_n),
    .in_proc_2_iter_c_V_V_write(QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_write),
    .sum_V_V_din(QuantAct_1_channel_U0_sum_V_V_din),
    .sum_V_V_full_n(sum_V_V_full_n),
    .sum_V_V_write(QuantAct_1_channel_U0_sum_V_V_write),
    .in_quant_V_V_dout(in_quant_V_V_dout),
    .in_quant_V_V_empty_n(in_quant_V_V_empty_n),
    .in_quant_V_V_read(QuantAct_1_channel_U0_in_quant_V_V_read),
    .in_proc_2_V_V_din(QuantAct_1_channel_U0_in_proc_2_V_V_din),
    .in_proc_2_V_V_full_n(in_proc_2_V_V_full_n),
    .in_proc_2_V_V_write(QuantAct_1_channel_U0_in_proc_2_V_V_write)
);

divide divide_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(divide_U0_ap_start),
    .ap_done(divide_U0_ap_done),
    .ap_continue(divide_U0_ap_continue),
    .ap_idle(divide_U0_ap_idle),
    .ap_ready(divide_U0_ap_ready),
    .in_proc_2_iter_c_V_V_dout(in_proc_2_iter_c_V_V_dout),
    .in_proc_2_iter_c_V_V_empty_n(in_proc_2_iter_c_V_V_empty_n),
    .in_proc_2_iter_c_V_V_read(divide_U0_in_proc_2_iter_c_V_V_read),
    .in_proc_2_iter_r_V_V_dout(in_proc_2_iter_r_V_V_dout),
    .in_proc_2_iter_r_V_V_empty_n(in_proc_2_iter_r_V_V_empty_n),
    .in_proc_2_iter_r_V_V_read(divide_U0_in_proc_2_iter_r_V_V_read),
    .in_write_iter_c_V_V_din(divide_U0_in_write_iter_c_V_V_din),
    .in_write_iter_c_V_V_full_n(in_write_iter_c_V_V_full_n),
    .in_write_iter_c_V_V_write(divide_U0_in_write_iter_c_V_V_write),
    .sum_V_V_dout(sum_V_V_dout),
    .sum_V_V_empty_n(sum_V_V_empty_n),
    .sum_V_V_read(divide_U0_sum_V_V_read),
    .in_proc_2_V_V_dout(in_proc_2_V_V_dout),
    .in_proc_2_V_V_empty_n(in_proc_2_V_V_empty_n),
    .in_proc_2_V_V_read(divide_U0_in_proc_2_V_V_read),
    .in_write_V_V_din(divide_U0_in_write_V_V_din),
    .in_write_V_V_full_n(in_write_V_V_full_n),
    .in_write_V_V_write(divide_U0_in_write_V_V_write)
);

write_r write_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(write_U0_ap_start),
    .ap_done(write_U0_ap_done),
    .ap_continue(write_U0_ap_continue),
    .ap_idle(write_U0_ap_idle),
    .ap_ready(write_U0_ap_ready),
    .out_r_TDATA(write_U0_out_r_TDATA),
    .out_r_TVALID(write_U0_out_r_TVALID),
    .out_r_TREADY(out_r_TREADY),
    .out_r_TID(write_U0_out_r_TID),
    .out_r_TDEST(write_U0_out_r_TDEST),
    .out_r_TUSER(write_U0_out_r_TUSER),
    .out_r_TLAST(write_U0_out_r_TLAST),
    .in_write_n_V_V_dout(in_write_n_V_V_dout),
    .in_write_n_V_V_empty_n(in_write_n_V_V_empty_n),
    .in_write_n_V_V_read(write_U0_in_write_n_V_V_read),
    .in_write_iter_c_V_V_dout(in_write_iter_c_V_V_dout),
    .in_write_iter_c_V_V_empty_n(in_write_iter_c_V_V_empty_n),
    .in_write_iter_c_V_V_read(write_U0_in_write_iter_c_V_V_read),
    .in_write_V_V_dout(in_write_V_V_dout),
    .in_write_V_V_empty_n(in_write_V_V_empty_n),
    .in_write_V_V_read(write_U0_in_write_V_V_read)
);

fifo_w96_d2_A in_write_n_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(read_data_U0_in_write_n_V_V_din),
    .if_full_n(in_write_n_V_V_full_n),
    .if_write(read_data_U0_in_write_n_V_V_write),
    .if_dout(in_write_n_V_V_dout),
    .if_empty_n(in_write_n_V_V_empty_n),
    .if_read(write_U0_in_write_n_V_V_read)
);

fifo_w32_d2_A in_sub_max_r_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(read_data_U0_in_sub_max_r_V_V_din),
    .if_full_n(in_sub_max_r_V_V_full_n),
    .if_write(read_data_U0_in_sub_max_r_V_V_write),
    .if_dout(in_sub_max_r_V_V_dout),
    .if_empty_n(in_sub_max_r_V_V_empty_n),
    .if_read(subtract_max_U0_in_sub_max_r_V_V_read)
);

fifo_w32_d2_A in_sub_max_c_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(read_data_U0_in_sub_max_c_V_V_din),
    .if_full_n(in_sub_max_c_V_V_full_n),
    .if_write(read_data_U0_in_sub_max_c_V_V_write),
    .if_dout(in_sub_max_c_V_V_dout),
    .if_empty_n(in_sub_max_c_V_V_empty_n),
    .if_read(subtract_max_U0_in_sub_max_c_V_V_read)
);

fifo_w32_d2_A max_input_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(read_data_U0_max_input_V_V_din),
    .if_full_n(max_input_V_V_full_n),
    .if_write(read_data_U0_max_input_V_V_write),
    .if_dout(max_input_V_V_dout),
    .if_empty_n(max_input_V_V_empty_n),
    .if_read(subtract_max_U0_max_input_V_V_read)
);

fifo_w512_d32_A in_sub_max_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(read_data_U0_in_sub_max_V_V_din),
    .if_full_n(in_sub_max_V_V_full_n),
    .if_write(read_data_U0_in_sub_max_V_V_write),
    .if_dout(in_sub_max_V_V_dout),
    .if_empty_n(in_sub_max_V_V_empty_n),
    .if_read(subtract_max_U0_in_sub_max_V_V_read)
);

fifo_w32_d2_A in_proc_1_iter_r_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(subtract_max_U0_in_proc_1_iter_r_V_V_din),
    .if_full_n(in_proc_1_iter_r_V_V_full_n),
    .if_write(subtract_max_U0_in_proc_1_iter_r_V_V_write),
    .if_dout(in_proc_1_iter_r_V_V_dout),
    .if_empty_n(in_proc_1_iter_r_V_V_empty_n),
    .if_read(process_1_U0_in_proc_1_iter_r_V_V_read)
);

fifo_w32_d2_A in_proc_1_iter_c_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(subtract_max_U0_in_proc_1_iter_c_V_V_din),
    .if_full_n(in_proc_1_iter_c_V_V_full_n),
    .if_write(subtract_max_U0_in_proc_1_iter_c_V_V_write),
    .if_dout(in_proc_1_iter_c_V_V_dout),
    .if_empty_n(in_proc_1_iter_c_V_V_empty_n),
    .if_read(process_1_U0_in_proc_1_iter_c_V_V_read)
);

fifo_w512_d2_A in_proc_1_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(subtract_max_U0_in_proc_1_V_V_din),
    .if_full_n(in_proc_1_V_V_full_n),
    .if_write(subtract_max_U0_in_proc_1_V_V_write),
    .if_dout(in_proc_1_V_V_dout),
    .if_empty_n(in_proc_1_V_V_empty_n),
    .if_read(process_1_U0_in_proc_1_V_V_read)
);

fifo_w32_d2_A in_quant_iter_r_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(process_1_U0_in_quant_iter_r_V_V_din),
    .if_full_n(in_quant_iter_r_V_V_full_n),
    .if_write(process_1_U0_in_quant_iter_r_V_V_write),
    .if_dout(in_quant_iter_r_V_V_dout),
    .if_empty_n(in_quant_iter_r_V_V_empty_n),
    .if_read(QuantAct_1_channel_U0_in_quant_iter_r_V_V_read)
);

fifo_w32_d2_A in_quant_iter_c_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(process_1_U0_in_quant_iter_c_V_V_din),
    .if_full_n(in_quant_iter_c_V_V_full_n),
    .if_write(process_1_U0_in_quant_iter_c_V_V_write),
    .if_dout(in_quant_iter_c_V_V_dout),
    .if_empty_n(in_quant_iter_c_V_V_empty_n),
    .if_read(QuantAct_1_channel_U0_in_quant_iter_c_V_V_read)
);

fifo_w1024_d2_A in_quant_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(process_1_U0_in_quant_V_V_din),
    .if_full_n(in_quant_V_V_full_n),
    .if_write(process_1_U0_in_quant_V_V_write),
    .if_dout(in_quant_V_V_dout),
    .if_empty_n(in_quant_V_V_empty_n),
    .if_read(QuantAct_1_channel_U0_in_quant_V_V_read)
);

fifo_w32_d2_A in_proc_2_iter_r_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_din),
    .if_full_n(in_proc_2_iter_r_V_V_full_n),
    .if_write(QuantAct_1_channel_U0_in_proc_2_iter_r_V_V_write),
    .if_dout(in_proc_2_iter_r_V_V_dout),
    .if_empty_n(in_proc_2_iter_r_V_V_empty_n),
    .if_read(divide_U0_in_proc_2_iter_r_V_V_read)
);

fifo_w32_d2_A in_proc_2_iter_c_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_din),
    .if_full_n(in_proc_2_iter_c_V_V_full_n),
    .if_write(QuantAct_1_channel_U0_in_proc_2_iter_c_V_V_write),
    .if_dout(in_proc_2_iter_c_V_V_dout),
    .if_empty_n(in_proc_2_iter_c_V_V_empty_n),
    .if_read(divide_U0_in_proc_2_iter_c_V_V_read)
);

fifo_w32_d2_A sum_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(QuantAct_1_channel_U0_sum_V_V_din),
    .if_full_n(sum_V_V_full_n),
    .if_write(QuantAct_1_channel_U0_sum_V_V_write),
    .if_dout(sum_V_V_dout),
    .if_empty_n(sum_V_V_empty_n),
    .if_read(divide_U0_sum_V_V_read)
);

fifo_w256_d32_A in_proc_2_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(QuantAct_1_channel_U0_in_proc_2_V_V_din),
    .if_full_n(in_proc_2_V_V_full_n),
    .if_write(QuantAct_1_channel_U0_in_proc_2_V_V_write),
    .if_dout(in_proc_2_V_V_dout),
    .if_empty_n(in_proc_2_V_V_empty_n),
    .if_read(divide_U0_in_proc_2_V_V_read)
);

fifo_w32_d2_A in_write_iter_c_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(divide_U0_in_write_iter_c_V_V_din),
    .if_full_n(in_write_iter_c_V_V_full_n),
    .if_write(divide_U0_in_write_iter_c_V_V_write),
    .if_dout(in_write_iter_c_V_V_dout),
    .if_empty_n(in_write_iter_c_V_V_empty_n),
    .if_read(write_U0_in_write_iter_c_V_V_read)
);

fifo_w128_d2_A in_write_V_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(divide_U0_in_write_V_V_din),
    .if_full_n(in_write_V_V_full_n),
    .if_write(divide_U0_in_write_V_V_write),
    .if_dout(in_write_V_V_dout),
    .if_empty_n(in_write_V_V_empty_n),
    .if_read(write_U0_in_write_V_V_read)
);

start_for_subtracdEe start_for_subtracdEe_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_subtract_max_U0_din),
    .if_full_n(start_for_subtract_max_U0_full_n),
    .if_write(read_data_U0_start_write),
    .if_dout(start_for_subtract_max_U0_dout),
    .if_empty_n(start_for_subtract_max_U0_empty_n),
    .if_read(subtract_max_U0_ap_ready)
);

start_for_write_U0 start_for_write_U0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_write_U0_din),
    .if_full_n(start_for_write_U0_full_n),
    .if_write(read_data_U0_start_write),
    .if_dout(start_for_write_U0_dout),
    .if_empty_n(start_for_write_U0_empty_n),
    .if_read(write_U0_ap_ready)
);

start_for_processeOg start_for_processeOg_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_process_1_U0_din),
    .if_full_n(start_for_process_1_U0_full_n),
    .if_write(subtract_max_U0_start_write),
    .if_dout(start_for_process_1_U0_dout),
    .if_empty_n(start_for_process_1_U0_empty_n),
    .if_read(process_1_U0_ap_ready)
);

start_for_QuantAcfYi start_for_QuantAcfYi_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_QuantAct_1_channel_U0_din),
    .if_full_n(start_for_QuantAct_1_channel_U0_full_n),
    .if_write(process_1_U0_start_write),
    .if_dout(start_for_QuantAct_1_channel_U0_dout),
    .if_empty_n(start_for_QuantAct_1_channel_U0_empty_n),
    .if_read(QuantAct_1_channel_U0_ap_ready)
);

start_for_divide_U0 start_for_divide_U0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_divide_U0_din),
    .if_full_n(start_for_divide_U0_full_n),
    .if_write(QuantAct_1_channel_U0_start_write),
    .if_dout(start_for_divide_U0_dout),
    .if_empty_n(start_for_divide_U0_empty_n),
    .if_read(divide_U0_ap_ready)
);

assign QuantAct_1_channel_U0_ap_continue = 1'b1;

assign QuantAct_1_channel_U0_ap_start = start_for_QuantAct_1_channel_U0_empty_n;

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign ap_sync_continue = 1'b0;

assign divide_U0_ap_continue = 1'b1;

assign divide_U0_ap_start = start_for_divide_U0_empty_n;

assign divide_U0_start_full_n = 1'b1;

assign divide_U0_start_write = 1'b0;

assign in_r_TREADY = read_data_U0_in_r_TREADY;

assign out_r_TDATA = write_U0_out_r_TDATA;

assign out_r_TDEST = write_U0_out_r_TDEST;

assign out_r_TID = write_U0_out_r_TID;

assign out_r_TLAST = write_U0_out_r_TLAST;

assign out_r_TUSER = write_U0_out_r_TUSER;

assign out_r_TVALID = write_U0_out_r_TVALID;

assign process_1_U0_ap_continue = 1'b1;

assign process_1_U0_ap_start = start_for_process_1_U0_empty_n;

assign read_data_U0_ap_continue = 1'b1;

assign read_data_U0_ap_start = 1'b1;

assign read_data_U0_start_full_n = (start_for_write_U0_full_n & start_for_subtract_max_U0_full_n);

assign start_for_QuantAct_1_channel_U0_din = 1'b1;

assign start_for_divide_U0_din = 1'b1;

assign start_for_process_1_U0_din = 1'b1;

assign start_for_subtract_max_U0_din = 1'b1;

assign start_for_write_U0_din = 1'b1;

assign subtract_max_U0_ap_continue = 1'b1;

assign subtract_max_U0_ap_start = start_for_subtract_max_U0_empty_n;

assign write_U0_ap_continue = 1'b1;

assign write_U0_ap_start = start_for_write_U0_empty_n;

assign write_U0_start_full_n = 1'b1;

assign write_U0_start_write = 1'b0;

endmodule //softmax
