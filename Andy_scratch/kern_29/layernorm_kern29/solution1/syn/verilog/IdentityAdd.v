// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module IdentityAdd (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        in1_0_V_data_V_dout,
        in1_0_V_data_V_empty_n,
        in1_0_V_data_V_read,
        in1_0_V_id_V_dout,
        in1_0_V_id_V_empty_n,
        in1_0_V_id_V_read,
        in1_0_V_dest_V_dout,
        in1_0_V_dest_V_empty_n,
        in1_0_V_dest_V_read,
        in1_0_V_user_V_dout,
        in1_0_V_user_V_empty_n,
        in1_0_V_user_V_read,
        in1_0_V_last_V_dout,
        in1_0_V_last_V_empty_n,
        in1_0_V_last_V_read,
        in2_V_data_V_dout,
        in2_V_data_V_empty_n,
        in2_V_data_V_read,
        in2_V_id_V_dout,
        in2_V_id_V_empty_n,
        in2_V_id_V_read,
        in2_V_dest_V_dout,
        in2_V_dest_V_empty_n,
        in2_V_dest_V_read,
        in2_V_user_V_dout,
        in2_V_user_V_empty_n,
        in2_V_user_V_read,
        in2_V_last_V_dout,
        in2_V_last_V_empty_n,
        in2_V_last_V_read,
        out_V_data_V_din,
        out_V_data_V_full_n,
        out_V_data_V_write,
        out_V_id_V_din,
        out_V_id_V_full_n,
        out_V_id_V_write,
        out_V_dest_V_din,
        out_V_dest_V_full_n,
        out_V_dest_V_write,
        out_V_user_V_din,
        out_V_user_V_full_n,
        out_V_user_V_write,
        out_V_last_V_din,
        out_V_last_V_full_n,
        out_V_last_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state5 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [511:0] in1_0_V_data_V_dout;
input   in1_0_V_data_V_empty_n;
output   in1_0_V_data_V_read;
input  [7:0] in1_0_V_id_V_dout;
input   in1_0_V_id_V_empty_n;
output   in1_0_V_id_V_read;
input  [7:0] in1_0_V_dest_V_dout;
input   in1_0_V_dest_V_empty_n;
output   in1_0_V_dest_V_read;
input  [15:0] in1_0_V_user_V_dout;
input   in1_0_V_user_V_empty_n;
output   in1_0_V_user_V_read;
input  [0:0] in1_0_V_last_V_dout;
input   in1_0_V_last_V_empty_n;
output   in1_0_V_last_V_read;
input  [511:0] in2_V_data_V_dout;
input   in2_V_data_V_empty_n;
output   in2_V_data_V_read;
input  [7:0] in2_V_id_V_dout;
input   in2_V_id_V_empty_n;
output   in2_V_id_V_read;
input  [7:0] in2_V_dest_V_dout;
input   in2_V_dest_V_empty_n;
output   in2_V_dest_V_read;
input  [15:0] in2_V_user_V_dout;
input   in2_V_user_V_empty_n;
output   in2_V_user_V_read;
input  [0:0] in2_V_last_V_dout;
input   in2_V_last_V_empty_n;
output   in2_V_last_V_read;
output  [511:0] out_V_data_V_din;
input   out_V_data_V_full_n;
output   out_V_data_V_write;
output  [7:0] out_V_id_V_din;
input   out_V_id_V_full_n;
output   out_V_id_V_write;
output  [7:0] out_V_dest_V_din;
input   out_V_dest_V_full_n;
output   out_V_dest_V_write;
output  [15:0] out_V_user_V_din;
input   out_V_user_V_full_n;
output   out_V_user_V_write;
output  [0:0] out_V_last_V_din;
input   out_V_last_V_full_n;
output   out_V_last_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg[511:0] out_V_data_V_din;
reg[0:0] out_V_last_V_din;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    in1_0_V_data_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] exitcond_flatten_reg_905;
reg    in1_0_V_id_V_blk_n;
reg    in1_0_V_dest_V_blk_n;
reg    in1_0_V_user_V_blk_n;
reg    in1_0_V_last_V_blk_n;
reg    in2_V_data_V_blk_n;
reg    in2_V_id_V_blk_n;
reg    in2_V_dest_V_blk_n;
reg    in2_V_user_V_blk_n;
reg    in2_V_last_V_blk_n;
reg    out_V_data_V_blk_n;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] exitcond_flatten_reg_905_pp0_iter1_reg;
reg    out_V_id_V_blk_n;
reg    out_V_dest_V_blk_n;
reg    out_V_user_V_blk_n;
reg    out_V_last_V_blk_n;
reg   [37:0] indvar_flatten_reg_377;
reg   [5:0] j_reg_388;
wire   [37:0] bound_fu_428_p2;
reg   [37:0] bound_reg_900;
wire    in1_0_V_id_V0_status;
wire    in2_V_id_V0_status;
wire    out_V_id_V1_status;
reg    ap_block_state1;
wire   [0:0] exitcond_flatten_fu_434_p2;
wire    ap_block_state2_pp0_stage0_iter0;
reg    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_state4_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [37:0] indvar_flatten_next_fu_439_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] out_data_last_V_fu_459_p2;
reg   [0:0] out_data_last_V_reg_914;
reg   [0:0] out_data_last_V_reg_914_pp0_iter1_reg;
wire   [5:0] j_4_fu_465_p2;
wire   [31:0] tmp_V_0_trunc_fu_483_p2;
reg   [31:0] tmp_V_0_trunc_reg_924;
wire   [31:0] tmp_V_1_trunc_fu_509_p2;
reg   [31:0] tmp_V_1_trunc_reg_929;
wire   [31:0] tmp_V_2_trunc_fu_535_p2;
reg   [31:0] tmp_V_2_trunc_reg_934;
wire   [31:0] tmp_V_3_trunc_fu_561_p2;
reg   [31:0] tmp_V_3_trunc_reg_939;
wire   [31:0] tmp_V_4_trunc_fu_587_p2;
reg   [31:0] tmp_V_4_trunc_reg_944;
wire   [31:0] tmp_V_5_trunc_fu_613_p2;
reg   [31:0] tmp_V_5_trunc_reg_949;
wire   [31:0] tmp_V_6_trunc_fu_639_p2;
reg   [31:0] tmp_V_6_trunc_reg_954;
wire   [31:0] tmp_V_7_trunc_fu_665_p2;
reg   [31:0] tmp_V_7_trunc_reg_959;
wire   [31:0] tmp_V_8_trunc_fu_691_p2;
reg   [31:0] tmp_V_8_trunc_reg_964;
wire   [31:0] tmp_V_9_trunc_fu_717_p2;
reg   [31:0] tmp_V_9_trunc_reg_969;
wire   [31:0] tmp_V_10_trunc_fu_743_p2;
reg   [31:0] tmp_V_10_trunc_reg_974;
wire   [31:0] tmp_V_11_trunc_fu_769_p2;
reg   [31:0] tmp_V_11_trunc_reg_979;
wire   [31:0] tmp_V_12_trunc_fu_795_p2;
reg   [31:0] tmp_V_12_trunc_reg_984;
wire   [31:0] tmp_V_13_trunc_fu_821_p2;
reg   [31:0] tmp_V_13_trunc_reg_989;
wire   [31:0] tmp_V_14_trunc_fu_847_p2;
reg   [31:0] tmp_V_14_trunc_reg_994;
wire   [31:0] tmp_V_15_trunc_fu_873_p2;
reg   [31:0] tmp_V_15_trunc_reg_999;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    in1_0_V_id_V0_update;
reg    in2_V_id_V0_update;
reg    out_V_id_V1_update;
wire   [511:0] tmp_data_V_15_fu_879_p17;
reg    ap_block_pp0_stage0_01001;
wire   [31:0] tmp_142_fu_404_p1;
wire   [35:0] tmp_s_fu_416_p3;
wire   [37:0] p_shl_fu_408_p3;
wire   [37:0] p_shl2_fu_424_p1;
wire   [0:0] tmp_3_fu_445_p2;
wire   [5:0] j_mid2_fu_451_p3;
wire   [31:0] tmp_143_fu_475_p1;
wire   [31:0] tmp_144_fu_479_p1;
wire   [31:0] p_Result_22_1_fu_489_p4;
wire   [31:0] p_Result_23_1_fu_499_p4;
wire   [31:0] p_Result_22_2_fu_515_p4;
wire   [31:0] p_Result_23_2_fu_525_p4;
wire   [31:0] p_Result_22_3_fu_541_p4;
wire   [31:0] p_Result_23_3_fu_551_p4;
wire   [31:0] p_Result_22_4_fu_567_p4;
wire   [31:0] p_Result_23_4_fu_577_p4;
wire   [31:0] p_Result_22_5_fu_593_p4;
wire   [31:0] p_Result_23_5_fu_603_p4;
wire   [31:0] p_Result_22_6_fu_619_p4;
wire   [31:0] p_Result_23_6_fu_629_p4;
wire   [31:0] p_Result_22_7_fu_645_p4;
wire   [31:0] p_Result_23_7_fu_655_p4;
wire   [31:0] p_Result_22_8_fu_671_p4;
wire   [31:0] p_Result_23_8_fu_681_p4;
wire   [31:0] p_Result_22_9_fu_697_p4;
wire   [31:0] p_Result_23_9_fu_707_p4;
wire   [31:0] p_Result_22_s_fu_723_p4;
wire   [31:0] p_Result_23_s_fu_733_p4;
wire   [31:0] p_Result_22_10_fu_749_p4;
wire   [31:0] p_Result_23_10_fu_759_p4;
wire   [31:0] p_Result_22_11_fu_775_p4;
wire   [31:0] p_Result_23_11_fu_785_p4;
wire   [31:0] p_Result_22_12_fu_801_p4;
wire   [31:0] p_Result_23_12_fu_811_p4;
wire   [31:0] p_Result_22_13_fu_827_p4;
wire   [31:0] p_Result_23_13_fu_837_p4;
wire   [31:0] p_Result_22_14_fu_853_p4;
wire   [31:0] p_Result_23_14_fu_863_p4;
wire    ap_CS_fsm_state5;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state5)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_434_p2 == 1'd0))) begin
        indvar_flatten_reg_377 <= indvar_flatten_next_fu_439_p2;
    end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_377 <= 38'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_434_p2 == 1'd0))) begin
        j_reg_388 <= j_4_fu_465_p2;
    end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_reg_388 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        bound_reg_900[37 : 4] <= bound_fu_428_p2[37 : 4];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten_reg_905 <= exitcond_flatten_fu_434_p2;
        exitcond_flatten_reg_905_pp0_iter1_reg <= exitcond_flatten_reg_905;
        out_data_last_V_reg_914_pp0_iter1_reg <= out_data_last_V_reg_914;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_434_p2 == 1'd0))) begin
        out_data_last_V_reg_914 <= out_data_last_V_fu_459_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_905 == 1'd0))) begin
        tmp_V_0_trunc_reg_924 <= tmp_V_0_trunc_fu_483_p2;
        tmp_V_10_trunc_reg_974 <= tmp_V_10_trunc_fu_743_p2;
        tmp_V_11_trunc_reg_979 <= tmp_V_11_trunc_fu_769_p2;
        tmp_V_12_trunc_reg_984 <= tmp_V_12_trunc_fu_795_p2;
        tmp_V_13_trunc_reg_989 <= tmp_V_13_trunc_fu_821_p2;
        tmp_V_14_trunc_reg_994 <= tmp_V_14_trunc_fu_847_p2;
        tmp_V_15_trunc_reg_999 <= tmp_V_15_trunc_fu_873_p2;
        tmp_V_1_trunc_reg_929 <= tmp_V_1_trunc_fu_509_p2;
        tmp_V_2_trunc_reg_934 <= tmp_V_2_trunc_fu_535_p2;
        tmp_V_3_trunc_reg_939 <= tmp_V_3_trunc_fu_561_p2;
        tmp_V_4_trunc_reg_944 <= tmp_V_4_trunc_fu_587_p2;
        tmp_V_5_trunc_reg_949 <= tmp_V_5_trunc_fu_613_p2;
        tmp_V_6_trunc_reg_954 <= tmp_V_6_trunc_fu_639_p2;
        tmp_V_7_trunc_reg_959 <= tmp_V_7_trunc_fu_665_p2;
        tmp_V_8_trunc_reg_964 <= tmp_V_8_trunc_fu_691_p2;
        tmp_V_9_trunc_reg_969 <= tmp_V_9_trunc_fu_717_p2;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_434_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in1_0_V_data_V_blk_n = in1_0_V_data_V_empty_n;
    end else begin
        in1_0_V_data_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in1_0_V_dest_V_blk_n = in1_0_V_dest_V_empty_n;
    end else begin
        in1_0_V_dest_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_905 == 1'd0)))) begin
        in1_0_V_id_V0_update = 1'b1;
    end else begin
        in1_0_V_id_V0_update = 1'b0;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in1_0_V_id_V_blk_n = in1_0_V_id_V_empty_n;
    end else begin
        in1_0_V_id_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in1_0_V_last_V_blk_n = in1_0_V_last_V_empty_n;
    end else begin
        in1_0_V_last_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in1_0_V_user_V_blk_n = in1_0_V_user_V_empty_n;
    end else begin
        in1_0_V_user_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in2_V_data_V_blk_n = in2_V_data_V_empty_n;
    end else begin
        in2_V_data_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in2_V_dest_V_blk_n = in2_V_dest_V_empty_n;
    end else begin
        in2_V_dest_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_905 == 1'd0)))) begin
        in2_V_id_V0_update = 1'b1;
    end else begin
        in2_V_id_V0_update = 1'b0;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in2_V_id_V_blk_n = in2_V_id_V_empty_n;
    end else begin
        in2_V_id_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in2_V_last_V_blk_n = in2_V_last_V_empty_n;
    end else begin
        in2_V_last_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_905 == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        in2_V_user_V_blk_n = in2_V_user_V_empty_n;
    end else begin
        in2_V_user_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        out_V_data_V_blk_n = out_V_data_V_full_n;
    end else begin
        out_V_data_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0))) begin
        out_V_data_V_din = tmp_data_V_15_fu_879_p17;
    end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_data_V_din = in1_0_V_data_V_dout;
    end else begin
        out_V_data_V_din = 'bx;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        out_V_dest_V_blk_n = out_V_dest_V_full_n;
    end else begin
        out_V_dest_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0)))) begin
        out_V_id_V1_update = 1'b1;
    end else begin
        out_V_id_V1_update = 1'b0;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        out_V_id_V_blk_n = out_V_id_V_full_n;
    end else begin
        out_V_id_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        out_V_last_V_blk_n = out_V_last_V_full_n;
    end else begin
        out_V_last_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0))) begin
        out_V_last_V_din = out_data_last_V_reg_914_pp0_iter1_reg;
    end else if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_last_V_din = 1'd0;
    end else begin
        out_V_last_V_din = 'bx;
    end
end

always @ (*) begin
    if (((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0)))) begin
        out_V_user_V_blk_n = out_V_user_V_full_n;
    end else begin
        out_V_user_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_flatten_fu_434_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & ~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_flatten_fu_434_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((out_V_id_V1_status == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((in2_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)) | ((in1_0_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((out_V_id_V1_status == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((in2_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)) | ((in1_0_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((out_V_id_V1_status == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (((in2_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)) | ((in1_0_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)))));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (out_V_id_V1_status == 1'b0) | (in2_V_id_V0_status == 1'b0) | (in1_0_V_id_V0_status == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = (((in2_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)) | ((in1_0_V_id_V0_status == 1'b0) & (exitcond_flatten_reg_905 == 1'd0)));
end

always @ (*) begin
    ap_block_state4_pp0_stage0_iter2 = ((out_V_id_V1_status == 1'b0) & (exitcond_flatten_reg_905_pp0_iter1_reg == 1'd0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign bound_fu_428_p2 = (p_shl_fu_408_p3 - p_shl2_fu_424_p1);

assign exitcond_flatten_fu_434_p2 = ((indvar_flatten_reg_377 == bound_reg_900) ? 1'b1 : 1'b0);

assign in1_0_V_data_V_read = in1_0_V_id_V0_update;

assign in1_0_V_dest_V_read = in1_0_V_id_V0_update;

assign in1_0_V_id_V0_status = (in1_0_V_user_V_empty_n & in1_0_V_last_V_empty_n & in1_0_V_id_V_empty_n & in1_0_V_dest_V_empty_n & in1_0_V_data_V_empty_n);

assign in1_0_V_id_V_read = in1_0_V_id_V0_update;

assign in1_0_V_last_V_read = in1_0_V_id_V0_update;

assign in1_0_V_user_V_read = in1_0_V_id_V0_update;

assign in2_V_data_V_read = in2_V_id_V0_update;

assign in2_V_dest_V_read = in2_V_id_V0_update;

assign in2_V_id_V0_status = (in2_V_user_V_empty_n & in2_V_last_V_empty_n & in2_V_id_V_empty_n & in2_V_dest_V_empty_n & in2_V_data_V_empty_n);

assign in2_V_id_V_read = in2_V_id_V0_update;

assign in2_V_last_V_read = in2_V_id_V0_update;

assign in2_V_user_V_read = in2_V_id_V0_update;

assign indvar_flatten_next_fu_439_p2 = (indvar_flatten_reg_377 + 38'd1);

assign j_4_fu_465_p2 = (6'd1 + j_mid2_fu_451_p3);

assign j_mid2_fu_451_p3 = ((tmp_3_fu_445_p2[0:0] === 1'b1) ? 6'd0 : j_reg_388);

assign out_V_data_V_write = out_V_id_V1_update;

assign out_V_dest_V_din = 8'd30;

assign out_V_dest_V_write = out_V_id_V1_update;

assign out_V_id_V1_status = (out_V_user_V_full_n & out_V_last_V_full_n & out_V_id_V_full_n & out_V_dest_V_full_n & out_V_data_V_full_n);

assign out_V_id_V_din = 8'd29;

assign out_V_id_V_write = out_V_id_V1_update;

assign out_V_last_V_write = out_V_id_V1_update;

assign out_V_user_V_din = 16'd49;

assign out_V_user_V_write = out_V_id_V1_update;

assign out_data_last_V_fu_459_p2 = ((j_mid2_fu_451_p3 == 6'd47) ? 1'b1 : 1'b0);

assign p_Result_22_10_fu_749_p4 = {{in1_0_V_data_V_dout[383:352]}};

assign p_Result_22_11_fu_775_p4 = {{in1_0_V_data_V_dout[415:384]}};

assign p_Result_22_12_fu_801_p4 = {{in1_0_V_data_V_dout[447:416]}};

assign p_Result_22_13_fu_827_p4 = {{in1_0_V_data_V_dout[479:448]}};

assign p_Result_22_14_fu_853_p4 = {{in1_0_V_data_V_dout[511:480]}};

assign p_Result_22_1_fu_489_p4 = {{in1_0_V_data_V_dout[63:32]}};

assign p_Result_22_2_fu_515_p4 = {{in1_0_V_data_V_dout[95:64]}};

assign p_Result_22_3_fu_541_p4 = {{in1_0_V_data_V_dout[127:96]}};

assign p_Result_22_4_fu_567_p4 = {{in1_0_V_data_V_dout[159:128]}};

assign p_Result_22_5_fu_593_p4 = {{in1_0_V_data_V_dout[191:160]}};

assign p_Result_22_6_fu_619_p4 = {{in1_0_V_data_V_dout[223:192]}};

assign p_Result_22_7_fu_645_p4 = {{in1_0_V_data_V_dout[255:224]}};

assign p_Result_22_8_fu_671_p4 = {{in1_0_V_data_V_dout[287:256]}};

assign p_Result_22_9_fu_697_p4 = {{in1_0_V_data_V_dout[319:288]}};

assign p_Result_22_s_fu_723_p4 = {{in1_0_V_data_V_dout[351:320]}};

assign p_Result_23_10_fu_759_p4 = {{in2_V_data_V_dout[383:352]}};

assign p_Result_23_11_fu_785_p4 = {{in2_V_data_V_dout[415:384]}};

assign p_Result_23_12_fu_811_p4 = {{in2_V_data_V_dout[447:416]}};

assign p_Result_23_13_fu_837_p4 = {{in2_V_data_V_dout[479:448]}};

assign p_Result_23_14_fu_863_p4 = {{in2_V_data_V_dout[511:480]}};

assign p_Result_23_1_fu_499_p4 = {{in2_V_data_V_dout[63:32]}};

assign p_Result_23_2_fu_525_p4 = {{in2_V_data_V_dout[95:64]}};

assign p_Result_23_3_fu_551_p4 = {{in2_V_data_V_dout[127:96]}};

assign p_Result_23_4_fu_577_p4 = {{in2_V_data_V_dout[159:128]}};

assign p_Result_23_5_fu_603_p4 = {{in2_V_data_V_dout[191:160]}};

assign p_Result_23_6_fu_629_p4 = {{in2_V_data_V_dout[223:192]}};

assign p_Result_23_7_fu_655_p4 = {{in2_V_data_V_dout[255:224]}};

assign p_Result_23_8_fu_681_p4 = {{in2_V_data_V_dout[287:256]}};

assign p_Result_23_9_fu_707_p4 = {{in2_V_data_V_dout[319:288]}};

assign p_Result_23_s_fu_733_p4 = {{in2_V_data_V_dout[351:320]}};

assign p_shl2_fu_424_p1 = tmp_s_fu_416_p3;

assign p_shl_fu_408_p3 = {{tmp_142_fu_404_p1}, {6'd0}};

assign start_out = real_start;

assign tmp_142_fu_404_p1 = in1_0_V_data_V_dout[31:0];

assign tmp_143_fu_475_p1 = in1_0_V_data_V_dout[31:0];

assign tmp_144_fu_479_p1 = in2_V_data_V_dout[31:0];

assign tmp_3_fu_445_p2 = ((j_reg_388 == 6'd48) ? 1'b1 : 1'b0);

assign tmp_V_0_trunc_fu_483_p2 = (tmp_143_fu_475_p1 + tmp_144_fu_479_p1);

assign tmp_V_10_trunc_fu_743_p2 = (p_Result_22_s_fu_723_p4 + p_Result_23_s_fu_733_p4);

assign tmp_V_11_trunc_fu_769_p2 = (p_Result_22_10_fu_749_p4 + p_Result_23_10_fu_759_p4);

assign tmp_V_12_trunc_fu_795_p2 = (p_Result_22_11_fu_775_p4 + p_Result_23_11_fu_785_p4);

assign tmp_V_13_trunc_fu_821_p2 = (p_Result_22_12_fu_801_p4 + p_Result_23_12_fu_811_p4);

assign tmp_V_14_trunc_fu_847_p2 = (p_Result_22_13_fu_827_p4 + p_Result_23_13_fu_837_p4);

assign tmp_V_15_trunc_fu_873_p2 = (p_Result_22_14_fu_853_p4 + p_Result_23_14_fu_863_p4);

assign tmp_V_1_trunc_fu_509_p2 = (p_Result_22_1_fu_489_p4 + p_Result_23_1_fu_499_p4);

assign tmp_V_2_trunc_fu_535_p2 = (p_Result_22_2_fu_515_p4 + p_Result_23_2_fu_525_p4);

assign tmp_V_3_trunc_fu_561_p2 = (p_Result_22_3_fu_541_p4 + p_Result_23_3_fu_551_p4);

assign tmp_V_4_trunc_fu_587_p2 = (p_Result_22_4_fu_567_p4 + p_Result_23_4_fu_577_p4);

assign tmp_V_5_trunc_fu_613_p2 = (p_Result_22_5_fu_593_p4 + p_Result_23_5_fu_603_p4);

assign tmp_V_6_trunc_fu_639_p2 = (p_Result_22_6_fu_619_p4 + p_Result_23_6_fu_629_p4);

assign tmp_V_7_trunc_fu_665_p2 = (p_Result_22_7_fu_645_p4 + p_Result_23_7_fu_655_p4);

assign tmp_V_8_trunc_fu_691_p2 = (p_Result_22_8_fu_671_p4 + p_Result_23_8_fu_681_p4);

assign tmp_V_9_trunc_fu_717_p2 = (p_Result_22_9_fu_697_p4 + p_Result_23_9_fu_707_p4);

assign tmp_data_V_15_fu_879_p17 = {{{{{{{{{{{{{{{{tmp_V_15_trunc_reg_999}, {tmp_V_14_trunc_reg_994}}, {tmp_V_13_trunc_reg_989}}, {tmp_V_12_trunc_reg_984}}, {tmp_V_11_trunc_reg_979}}, {tmp_V_10_trunc_reg_974}}, {tmp_V_9_trunc_reg_969}}, {tmp_V_8_trunc_reg_964}}, {tmp_V_7_trunc_reg_959}}, {tmp_V_6_trunc_reg_954}}, {tmp_V_5_trunc_reg_949}}, {tmp_V_4_trunc_reg_944}}, {tmp_V_3_trunc_reg_939}}, {tmp_V_2_trunc_reg_934}}, {tmp_V_1_trunc_reg_929}}, {tmp_V_0_trunc_reg_924}};

assign tmp_s_fu_416_p3 = {{tmp_142_fu_404_p1}, {4'd0}};

always @ (posedge ap_clk) begin
    bound_reg_900[3:0] <= 4'b0000;
end

endmodule //IdentityAdd
