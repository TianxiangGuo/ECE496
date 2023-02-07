// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel_4,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xczu19eg-ffvc1760-2-i,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=4.371000,HLS_SYN_LAT=-1,HLS_SYN_TPT=-1,HLS_SYN_MEM=151,HLS_SYN_DSP=111,HLS_SYN_FF=38316,HLS_SYN_LUT=49248,HLS_VERSION=2019_1}" *)

module kernel_4 (
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

wire    AttentionMatmul_U0_ap_start;
wire    AttentionMatmul_U0_start_out;
wire    AttentionMatmul_U0_start_write;
wire   [511:0] AttentionMatmul_U0_out_V_data_V_din;
wire    AttentionMatmul_U0_out_V_data_V_write;
wire   [7:0] AttentionMatmul_U0_out_V_id_V_din;
wire    AttentionMatmul_U0_out_V_id_V_write;
wire   [7:0] AttentionMatmul_U0_out_V_dest_V_din;
wire    AttentionMatmul_U0_out_V_dest_V_write;
wire   [15:0] AttentionMatmul_U0_out_V_user_V_din;
wire    AttentionMatmul_U0_out_V_user_V_write;
wire   [0:0] AttentionMatmul_U0_out_V_last_V_din;
wire    AttentionMatmul_U0_out_V_last_V_write;
 reg    ap_rst_n_inv;
wire    AttentionMatmul_U0_in_r_TREADY;
wire    AttentionMatmul_U0_ap_done;
wire    AttentionMatmul_U0_ap_ready;
wire    AttentionMatmul_U0_ap_idle;
wire    AttentionMatmul_U0_ap_continue;
wire    Softmax130_U0_in_V_data_V_read;
wire    Softmax130_U0_in_V_id_V_read;
wire    Softmax130_U0_in_V_dest_V_read;
wire    Softmax130_U0_in_V_user_V_read;
wire    Softmax130_U0_in_V_last_V_read;
wire   [511:0] Softmax130_U0_out_r_TDATA;
wire   [7:0] Softmax130_U0_out_r_TID;
wire   [7:0] Softmax130_U0_out_r_TDEST;
wire   [15:0] Softmax130_U0_out_r_TUSER;
wire   [0:0] Softmax130_U0_out_r_TLAST;
wire    Softmax130_U0_ap_start;
wire    Softmax130_U0_out_r_TVALID;
wire    Softmax130_U0_ap_done;
wire    Softmax130_U0_ap_ready;
wire    Softmax130_U0_ap_idle;
wire    Softmax130_U0_ap_continue;
wire    ap_sync_continue;
wire    pipe_1_V_data_V_full_n;
wire   [511:0] pipe_1_V_data_V_dout;
wire    pipe_1_V_data_V_empty_n;
wire    pipe_1_V_id_V_full_n;
wire   [7:0] pipe_1_V_id_V_dout;
wire    pipe_1_V_id_V_empty_n;
wire    pipe_1_V_dest_V_full_n;
wire   [7:0] pipe_1_V_dest_V_dout;
wire    pipe_1_V_dest_V_empty_n;
wire    pipe_1_V_user_V_full_n;
wire   [15:0] pipe_1_V_user_V_dout;
wire    pipe_1_V_user_V_empty_n;
wire    pipe_1_V_last_V_full_n;
wire   [0:0] pipe_1_V_last_V_dout;
wire    pipe_1_V_last_V_empty_n;
wire   [0:0] start_for_Softmax130_U0_din;
wire    start_for_Softmax130_U0_full_n;
wire   [0:0] start_for_Softmax130_U0_dout;
wire    start_for_Softmax130_U0_empty_n;
wire    Softmax130_U0_start_full_n;
wire    Softmax130_U0_start_write;

AttentionMatmul AttentionMatmul_U0(
    .ap_start(AttentionMatmul_U0_ap_start),
    .start_full_n(start_for_Softmax130_U0_full_n),
    .start_out(AttentionMatmul_U0_start_out),
    .start_write(AttentionMatmul_U0_start_write),
    .in_r_TDATA(in_r_TDATA),
    .in_r_TID(in_r_TID),
    .in_r_TDEST(in_r_TDEST),
    .in_r_TUSER(in_r_TUSER),
    .in_r_TLAST(in_r_TLAST),
    .out_V_data_V_din(AttentionMatmul_U0_out_V_data_V_din),
    .out_V_data_V_full_n(pipe_1_V_data_V_full_n),
    .out_V_data_V_write(AttentionMatmul_U0_out_V_data_V_write),
    .out_V_id_V_din(AttentionMatmul_U0_out_V_id_V_din),
    .out_V_id_V_full_n(pipe_1_V_id_V_full_n),
    .out_V_id_V_write(AttentionMatmul_U0_out_V_id_V_write),
    .out_V_dest_V_din(AttentionMatmul_U0_out_V_dest_V_din),
    .out_V_dest_V_full_n(pipe_1_V_dest_V_full_n),
    .out_V_dest_V_write(AttentionMatmul_U0_out_V_dest_V_write),
    .out_V_user_V_din(AttentionMatmul_U0_out_V_user_V_din),
    .out_V_user_V_full_n(pipe_1_V_user_V_full_n),
    .out_V_user_V_write(AttentionMatmul_U0_out_V_user_V_write),
    .out_V_last_V_din(AttentionMatmul_U0_out_V_last_V_din),
    .out_V_last_V_full_n(pipe_1_V_last_V_full_n),
    .out_V_last_V_write(AttentionMatmul_U0_out_V_last_V_write),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .in_r_TVALID(in_r_TVALID),
    .in_r_TREADY(AttentionMatmul_U0_in_r_TREADY),
    .ap_done(AttentionMatmul_U0_ap_done),
    .ap_ready(AttentionMatmul_U0_ap_ready),
    .ap_idle(AttentionMatmul_U0_ap_idle),
    .ap_continue(AttentionMatmul_U0_ap_continue)
);

Softmax130 Softmax130_U0(
    .in_V_data_V_dout(pipe_1_V_data_V_dout),
    .in_V_data_V_empty_n(pipe_1_V_data_V_empty_n),
    .in_V_data_V_read(Softmax130_U0_in_V_data_V_read),
    .in_V_id_V_dout(pipe_1_V_id_V_dout),
    .in_V_id_V_empty_n(pipe_1_V_id_V_empty_n),
    .in_V_id_V_read(Softmax130_U0_in_V_id_V_read),
    .in_V_dest_V_dout(pipe_1_V_dest_V_dout),
    .in_V_dest_V_empty_n(pipe_1_V_dest_V_empty_n),
    .in_V_dest_V_read(Softmax130_U0_in_V_dest_V_read),
    .in_V_user_V_dout(pipe_1_V_user_V_dout),
    .in_V_user_V_empty_n(pipe_1_V_user_V_empty_n),
    .in_V_user_V_read(Softmax130_U0_in_V_user_V_read),
    .in_V_last_V_dout(pipe_1_V_last_V_dout),
    .in_V_last_V_empty_n(pipe_1_V_last_V_empty_n),
    .in_V_last_V_read(Softmax130_U0_in_V_last_V_read),
    .out_r_TDATA(Softmax130_U0_out_r_TDATA),
    .out_r_TID(Softmax130_U0_out_r_TID),
    .out_r_TDEST(Softmax130_U0_out_r_TDEST),
    .out_r_TUSER(Softmax130_U0_out_r_TUSER),
    .out_r_TLAST(Softmax130_U0_out_r_TLAST),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(Softmax130_U0_ap_start),
    .out_r_TVALID(Softmax130_U0_out_r_TVALID),
    .out_r_TREADY(out_r_TREADY),
    .ap_done(Softmax130_U0_ap_done),
    .ap_ready(Softmax130_U0_ap_ready),
    .ap_idle(Softmax130_U0_ap_idle),
    .ap_continue(Softmax130_U0_ap_continue)
);

fifo_w512_d2_A_x pipe_1_V_data_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(AttentionMatmul_U0_out_V_data_V_din),
    .if_full_n(pipe_1_V_data_V_full_n),
    .if_write(AttentionMatmul_U0_out_V_data_V_write),
    .if_dout(pipe_1_V_data_V_dout),
    .if_empty_n(pipe_1_V_data_V_empty_n),
    .if_read(Softmax130_U0_in_V_data_V_read)
);

fifo_w8_d2_A_x pipe_1_V_id_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(AttentionMatmul_U0_out_V_id_V_din),
    .if_full_n(pipe_1_V_id_V_full_n),
    .if_write(AttentionMatmul_U0_out_V_id_V_write),
    .if_dout(pipe_1_V_id_V_dout),
    .if_empty_n(pipe_1_V_id_V_empty_n),
    .if_read(Softmax130_U0_in_V_id_V_read)
);

fifo_w8_d2_A_x pipe_1_V_dest_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(AttentionMatmul_U0_out_V_dest_V_din),
    .if_full_n(pipe_1_V_dest_V_full_n),
    .if_write(AttentionMatmul_U0_out_V_dest_V_write),
    .if_dout(pipe_1_V_dest_V_dout),
    .if_empty_n(pipe_1_V_dest_V_empty_n),
    .if_read(Softmax130_U0_in_V_dest_V_read)
);

fifo_w16_d2_A_x0 pipe_1_V_user_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(AttentionMatmul_U0_out_V_user_V_din),
    .if_full_n(pipe_1_V_user_V_full_n),
    .if_write(AttentionMatmul_U0_out_V_user_V_write),
    .if_dout(pipe_1_V_user_V_dout),
    .if_empty_n(pipe_1_V_user_V_empty_n),
    .if_read(Softmax130_U0_in_V_user_V_read)
);

fifo_w1_d2_A_x pipe_1_V_last_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(AttentionMatmul_U0_out_V_last_V_din),
    .if_full_n(pipe_1_V_last_V_full_n),
    .if_write(AttentionMatmul_U0_out_V_last_V_write),
    .if_dout(pipe_1_V_last_V_dout),
    .if_empty_n(pipe_1_V_last_V_empty_n),
    .if_read(Softmax130_U0_in_V_last_V_read)
);

start_for_Softmax130_U0 start_for_Softmax130_U0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_Softmax130_U0_din),
    .if_full_n(start_for_Softmax130_U0_full_n),
    .if_write(AttentionMatmul_U0_start_write),
    .if_dout(start_for_Softmax130_U0_dout),
    .if_empty_n(start_for_Softmax130_U0_empty_n),
    .if_read(Softmax130_U0_ap_ready)
);

assign AttentionMatmul_U0_ap_continue = 1'b1;

assign AttentionMatmul_U0_ap_start = 1'b1;

assign Softmax130_U0_ap_continue = 1'b1;

assign Softmax130_U0_ap_start = start_for_Softmax130_U0_empty_n;

assign Softmax130_U0_start_full_n = 1'b1;

assign Softmax130_U0_start_write = 1'b0;

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign ap_sync_continue = 1'b0;

assign in_r_TREADY = AttentionMatmul_U0_in_r_TREADY;

assign out_r_TDATA = Softmax130_U0_out_r_TDATA;

assign out_r_TDEST = Softmax130_U0_out_r_TDEST;

assign out_r_TID = Softmax130_U0_out_r_TID;

assign out_r_TLAST = Softmax130_U0_out_r_TLAST;

assign out_r_TUSER = Softmax130_U0_out_r_TUSER;

assign out_r_TVALID = Softmax130_U0_out_r_TVALID;

assign start_for_Softmax130_U0_din = 1'b1;

endmodule //kernel_4
