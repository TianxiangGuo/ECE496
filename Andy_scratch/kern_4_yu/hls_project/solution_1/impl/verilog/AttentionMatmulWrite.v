// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AttentionMatmulWrite (
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
        in_n_r_V_V_dout,
        in_n_r_V_V_empty_n,
        in_n_r_V_V_read,
        in_n_c_V_V_dout,
        in_n_c_V_V_empty_n,
        in_n_c_V_V_read,
        in_0_V_V_dout,
        in_0_V_V_empty_n,
        in_0_V_V_read,
        in_1_V_V_dout,
        in_1_V_V_empty_n,
        in_1_V_V_read,
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

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_pp0_stage0 = 4'd4;
parameter    ap_ST_fsm_state6 = 4'd8;

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
input  [31:0] in_n_r_V_V_dout;
input   in_n_r_V_V_empty_n;
output   in_n_r_V_V_read;
input  [31:0] in_n_c_V_V_dout;
input   in_n_c_V_V_empty_n;
output   in_n_c_V_V_read;
input  [31:0] in_0_V_V_dout;
input   in_0_V_V_empty_n;
output   in_0_V_V_read;
input  [31:0] in_1_V_V_dout;
input   in_1_V_V_empty_n;
output   in_1_V_V_read;
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
reg in_n_r_V_V_read;
reg in_n_c_V_V_read;
reg in_0_V_V_read;
reg in_1_V_V_read;
reg[511:0] out_V_data_V_din;
reg out_V_data_V_write;
reg out_V_id_V_write;
reg out_V_dest_V_write;
reg[15:0] out_V_user_V_din;
reg out_V_user_V_write;
reg[0:0] out_V_last_V_din;
reg out_V_last_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    in_n_r_V_V_blk_n;
reg    in_n_c_V_V_blk_n;
reg    in_0_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg    in_1_V_V_blk_n;
reg    out_V_data_V_blk_n;
wire    ap_CS_fsm_state2;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] icmp_ln1097_reg_1312;
reg   [0:0] icmp_ln1097_reg_1312_pp0_iter1_reg;
reg    out_V_id_V_blk_n;
reg    out_V_dest_V_blk_n;
reg    out_V_user_V_blk_n;
reg    out_V_last_V_blk_n;
reg   [30:0] i_op_assign_reg_314;
reg   [31:0] tmp_V_reg_1261;
reg    ap_block_state1;
reg   [31:0] tmp_V_53_reg_1266;
reg   [15:0] trunc_ln6_reg_1271;
reg   [30:0] ret_V_3_reg_1276;
wire   [15:0] temp_user_V_fu_368_p2;
reg   [15:0] temp_user_V_reg_1282;
wire    io_acc_block_signal_op43;
wire   [31:0] ret_V_2_fu_377_p2;
reg   [31:0] ret_V_2_reg_1287;
wire   [0:0] icmp_ln1083_fu_383_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
wire    io_acc_block_signal_op171;
reg    ap_block_state5_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [30:0] i_fu_388_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [2:0] index_fu_394_p1;
reg   [2:0] index_reg_1301;
reg   [2:0] index_reg_1301_pp0_iter1_reg;
wire   [0:0] icmp_ln1097_fu_402_p2;
wire   [0:0] temp_last_V_fu_408_p2;
reg   [0:0] temp_last_V_reg_1316;
reg   [0:0] temp_last_V_reg_1316_pp0_iter1_reg;
reg   [31:0] tmp_V_54_reg_1321;
reg   [31:0] tmp_V_55_reg_1333;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg   [31:0] out_data_14_V_1_fu_204;
wire   [31:0] out_data_14_V_43_fu_761_p3;
reg   [31:0] out_data_15_V_1_fu_208;
wire   [31:0] out_data_15_V_43_fu_1033_p3;
reg   [31:0] out_data_14_V_2_fu_212;
wire   [31:0] out_data_14_V_42_fu_753_p3;
reg   [31:0] out_data_15_V_2_fu_216;
wire   [31:0] out_data_15_V_42_fu_1025_p3;
reg   [31:0] out_data_14_V_3_fu_220;
wire   [31:0] out_data_14_V_40_fu_738_p3;
reg   [31:0] out_data_15_V_3_fu_224;
wire   [31:0] out_data_15_V_40_fu_1010_p3;
reg   [31:0] out_data_14_V_4_fu_228;
wire   [31:0] out_data_14_V_37_fu_715_p3;
reg   [31:0] out_data_15_V_4_fu_232;
wire   [31:0] out_data_15_V_37_fu_987_p3;
reg   [31:0] out_data_14_V_5_fu_236;
wire   [31:0] out_data_14_V_33_fu_684_p3;
reg   [31:0] out_data_15_V_5_fu_240;
wire   [31:0] out_data_15_V_33_fu_956_p3;
reg   [31:0] out_data_14_V_6_fu_244;
wire   [31:0] out_data_14_V_28_fu_645_p3;
reg   [31:0] out_data_15_V_6_fu_248;
wire   [31:0] out_data_15_V_28_fu_917_p3;
reg   [31:0] out_data_14_V_7_fu_252;
wire   [31:0] out_data_14_V_22_fu_598_p3;
reg   [31:0] out_data_15_V_7_fu_256;
wire   [31:0] out_data_15_V_22_fu_870_p3;
reg   [31:0] out_data_14_V_8_fu_260;
wire   [31:0] out_data_14_V_15_fu_543_p3;
reg   [31:0] out_data_15_V_8_fu_264;
wire   [31:0] out_data_15_V_15_fu_815_p3;
wire   [511:0] p_Result_s_fu_359_p4;
wire   [511:0] tmp_data_V_3_fu_1120_p17;
reg    ap_block_pp0_stage0_01001;
wire   [15:0] trunc_ln302_fu_325_p1;
wire   [15:0] trunc_ln302_1_fu_329_p1;
wire   [31:0] ret_V_fu_1157_p2;
wire   [31:0] ret_V_1_fu_374_p1;
wire   [31:0] zext_ln302_fu_398_p1;
wire   [0:0] icmp_ln180_fu_461_p2;
wire   [0:0] icmp_ln180_1_fu_473_p2;
wire   [31:0] out_data_14_V_fu_466_p3;
wire   [0:0] icmp_ln180_2_fu_486_p2;
wire   [31:0] out_data_14_V_10_fu_478_p3;
wire   [0:0] icmp_ln180_3_fu_499_p2;
wire   [31:0] out_data_14_V_11_fu_491_p3;
wire   [0:0] icmp_ln180_4_fu_512_p2;
wire   [31:0] out_data_14_V_12_fu_504_p3;
wire   [0:0] icmp_ln180_5_fu_525_p2;
wire   [31:0] out_data_14_V_13_fu_517_p3;
wire   [0:0] icmp_ln180_6_fu_538_p2;
wire   [31:0] out_data_14_V_14_fu_530_p3;
wire   [31:0] out_data_14_V_16_fu_551_p3;
wire   [31:0] out_data_14_V_17_fu_558_p3;
wire   [31:0] out_data_14_V_18_fu_566_p3;
wire   [31:0] out_data_14_V_19_fu_574_p3;
wire   [31:0] out_data_14_V_20_fu_582_p3;
wire   [31:0] out_data_14_V_21_fu_590_p3;
wire   [31:0] out_data_14_V_23_fu_606_p3;
wire   [31:0] out_data_14_V_24_fu_613_p3;
wire   [31:0] out_data_14_V_25_fu_621_p3;
wire   [31:0] out_data_14_V_26_fu_629_p3;
wire   [31:0] out_data_14_V_27_fu_637_p3;
wire   [31:0] out_data_14_V_29_fu_653_p3;
wire   [31:0] out_data_14_V_30_fu_660_p3;
wire   [31:0] out_data_14_V_31_fu_668_p3;
wire   [31:0] out_data_14_V_32_fu_676_p3;
wire   [31:0] out_data_14_V_34_fu_692_p3;
wire   [31:0] out_data_14_V_35_fu_699_p3;
wire   [31:0] out_data_14_V_36_fu_707_p3;
wire   [31:0] out_data_14_V_38_fu_723_p3;
wire   [31:0] out_data_14_V_39_fu_730_p3;
wire   [31:0] out_data_14_V_41_fu_746_p3;
wire   [31:0] out_data_15_V_fu_768_p3;
wire   [31:0] out_data_15_V_10_fu_775_p3;
wire   [31:0] out_data_15_V_11_fu_783_p3;
wire   [31:0] out_data_15_V_12_fu_791_p3;
wire   [31:0] out_data_15_V_13_fu_799_p3;
wire   [31:0] out_data_15_V_14_fu_807_p3;
wire   [31:0] out_data_15_V_16_fu_823_p3;
wire   [31:0] out_data_15_V_17_fu_830_p3;
wire   [31:0] out_data_15_V_18_fu_838_p3;
wire   [31:0] out_data_15_V_19_fu_846_p3;
wire   [31:0] out_data_15_V_20_fu_854_p3;
wire   [31:0] out_data_15_V_21_fu_862_p3;
wire   [31:0] out_data_15_V_23_fu_878_p3;
wire   [31:0] out_data_15_V_24_fu_885_p3;
wire   [31:0] out_data_15_V_25_fu_893_p3;
wire   [31:0] out_data_15_V_26_fu_901_p3;
wire   [31:0] out_data_15_V_27_fu_909_p3;
wire   [31:0] out_data_15_V_29_fu_925_p3;
wire   [31:0] out_data_15_V_30_fu_932_p3;
wire   [31:0] out_data_15_V_31_fu_940_p3;
wire   [31:0] out_data_15_V_32_fu_948_p3;
wire   [31:0] out_data_15_V_34_fu_964_p3;
wire   [31:0] out_data_15_V_35_fu_971_p3;
wire   [31:0] out_data_15_V_36_fu_979_p3;
wire   [31:0] out_data_15_V_38_fu_995_p3;
wire   [31:0] out_data_15_V_39_fu_1002_p3;
wire   [31:0] out_data_15_V_41_fu_1018_p3;
wire   [15:0] ret_V_fu_1157_p0;
wire   [15:0] ret_V_fu_1157_p1;
wire    ap_CS_fsm_state6;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [31:0] ret_V_fu_1157_p00;
wire   [31:0] ret_V_fu_1157_p10;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

kernel_4_mul_mul_16ns_16ns_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 32 ))
kernel_4_mul_mul_16ns_16ns_32_1_1_U500(
    .din0(ret_V_fu_1157_p0),
    .din1(ret_V_fu_1157_p1),
    .dout(ret_V_fu_1157_p2)
);

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
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state3)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state3);
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
        end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
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
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1083_fu_383_p2 == 1'd0))) begin
        i_op_assign_reg_314 <= i_fu_388_p2;
    end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
        i_op_assign_reg_314 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1083_fu_383_p2 == 1'd0))) begin
        icmp_ln1097_reg_1312 <= icmp_ln1097_fu_402_p2;
        index_reg_1301 <= index_fu_394_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln1097_reg_1312_pp0_iter1_reg <= icmp_ln1097_reg_1312;
        index_reg_1301_pp0_iter1_reg <= index_reg_1301;
        temp_last_V_reg_1316_pp0_iter1_reg <= temp_last_V_reg_1316;
        tmp_V_54_reg_1321 <= in_0_V_V_dout;
        tmp_V_55_reg_1333 <= in_1_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        out_data_14_V_1_fu_204 <= out_data_14_V_43_fu_761_p3;
        out_data_14_V_2_fu_212 <= out_data_14_V_42_fu_753_p3;
        out_data_14_V_3_fu_220 <= out_data_14_V_40_fu_738_p3;
        out_data_14_V_4_fu_228 <= out_data_14_V_37_fu_715_p3;
        out_data_14_V_5_fu_236 <= out_data_14_V_33_fu_684_p3;
        out_data_14_V_6_fu_244 <= out_data_14_V_28_fu_645_p3;
        out_data_14_V_7_fu_252 <= out_data_14_V_22_fu_598_p3;
        out_data_14_V_8_fu_260 <= out_data_14_V_15_fu_543_p3;
        out_data_15_V_1_fu_208 <= out_data_15_V_43_fu_1033_p3;
        out_data_15_V_2_fu_216 <= out_data_15_V_42_fu_1025_p3;
        out_data_15_V_3_fu_224 <= out_data_15_V_40_fu_1010_p3;
        out_data_15_V_4_fu_232 <= out_data_15_V_37_fu_987_p3;
        out_data_15_V_5_fu_240 <= out_data_15_V_33_fu_956_p3;
        out_data_15_V_6_fu_248 <= out_data_15_V_28_fu_917_p3;
        out_data_15_V_7_fu_256 <= out_data_15_V_22_fu_870_p3;
        out_data_15_V_8_fu_264 <= out_data_15_V_15_fu_815_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
        ret_V_2_reg_1287 <= ret_V_2_fu_377_p2;
        temp_user_V_reg_1282 <= temp_user_V_fu_368_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_n_c_V_V_empty_n == 1'b0) | (in_n_r_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        ret_V_3_reg_1276 <= {{ret_V_fu_1157_p2[31:1]}};
        tmp_V_53_reg_1266 <= in_n_c_V_V_dout;
        tmp_V_reg_1261 <= in_n_r_V_V_dout;
        trunc_ln6_reg_1271 <= {{ret_V_fu_1157_p2[19:4]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1083_fu_383_p2 == 1'd0) & (icmp_ln1097_fu_402_p2 == 1'd1))) begin
        temp_last_V_reg_1316 <= temp_last_V_fu_408_p2;
    end
end

always @ (*) begin
    if ((icmp_ln1083_fu_383_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
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
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_0_V_V_blk_n = in_0_V_V_empty_n;
    end else begin
        in_0_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_0_V_V_read = 1'b1;
    end else begin
        in_0_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_1_V_V_blk_n = in_1_V_V_empty_n;
    end else begin
        in_1_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_1_V_V_read = 1'b1;
    end else begin
        in_1_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_n_c_V_V_blk_n = in_n_c_V_V_empty_n;
    end else begin
        in_n_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_n_c_V_V_empty_n == 1'b0) | (in_n_r_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_n_c_V_V_read = 1'b1;
    end else begin
        in_n_c_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_n_r_V_V_blk_n = in_n_r_V_V_empty_n;
    end else begin
        in_n_r_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_n_c_V_V_empty_n == 1'b0) | (in_n_r_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_n_r_V_V_read = 1'b1;
    end else begin
        in_n_r_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)))) begin
        out_V_data_V_blk_n = out_V_data_V_full_n;
    end else begin
        out_V_data_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1))) begin
        out_V_data_V_din = tmp_data_V_3_fu_1120_p17;
    end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
        out_V_data_V_din = p_Result_s_fu_359_p4;
    end else begin
        out_V_data_V_din = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1)))) begin
        out_V_data_V_write = 1'b1;
    end else begin
        out_V_data_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)))) begin
        out_V_dest_V_blk_n = out_V_dest_V_full_n;
    end else begin
        out_V_dest_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1)))) begin
        out_V_dest_V_write = 1'b1;
    end else begin
        out_V_dest_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)))) begin
        out_V_id_V_blk_n = out_V_id_V_full_n;
    end else begin
        out_V_id_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1)))) begin
        out_V_id_V_write = 1'b1;
    end else begin
        out_V_id_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)))) begin
        out_V_last_V_blk_n = out_V_last_V_full_n;
    end else begin
        out_V_last_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1))) begin
        out_V_last_V_din = temp_last_V_reg_1316_pp0_iter1_reg;
    end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
        out_V_last_V_din = 1'd0;
    end else begin
        out_V_last_V_din = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1)))) begin
        out_V_last_V_write = 1'b1;
    end else begin
        out_V_last_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)))) begin
        out_V_user_V_blk_n = out_V_user_V_full_n;
    end else begin
        out_V_user_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1))) begin
        out_V_user_V_din = temp_user_V_reg_1282;
    end else if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
        out_V_user_V_din = temp_user_V_fu_368_p2;
    end else begin
        out_V_user_V_din = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1)))) begin
        out_V_user_V_write = 1'b1;
    end else begin
        out_V_user_V_write = 1'b0;
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
            if ((~((in_n_c_V_V_empty_n == 1'b0) | (in_n_r_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (io_acc_block_signal_op43 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln1083_fu_383_p2 == 1'd1)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln1083_fu_383_p2 == 1'd1)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & ((in_1_V_V_empty_n == 1'b0) | (in_0_V_V_empty_n == 1'b0))) | ((io_acc_block_signal_op171 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & ((in_1_V_V_empty_n == 1'b0) | (in_0_V_V_empty_n == 1'b0))) | ((io_acc_block_signal_op171 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((ap_enable_reg_pp0_iter1 == 1'b1) & ((in_1_V_V_empty_n == 1'b0) | (in_0_V_V_empty_n == 1'b0))) | ((io_acc_block_signal_op171 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1)));
end

always @ (*) begin
    ap_block_state1 = ((in_n_c_V_V_empty_n == 1'b0) | (in_n_r_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = ((in_1_V_V_empty_n == 1'b0) | (in_0_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state5_pp0_stage0_iter2 = ((io_acc_block_signal_op171 == 1'b0) & (icmp_ln1097_reg_1312_pp0_iter1_reg == 1'd1));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign i_fu_388_p2 = (i_op_assign_reg_314 + 31'd1);

assign icmp_ln1083_fu_383_p2 = ((i_op_assign_reg_314 == ret_V_3_reg_1276) ? 1'b1 : 1'b0);

assign icmp_ln1097_fu_402_p2 = ((index_fu_394_p1 == 3'd7) ? 1'b1 : 1'b0);

assign icmp_ln180_1_fu_473_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd5) ? 1'b1 : 1'b0);

assign icmp_ln180_2_fu_486_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd4) ? 1'b1 : 1'b0);

assign icmp_ln180_3_fu_499_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd3) ? 1'b1 : 1'b0);

assign icmp_ln180_4_fu_512_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd2) ? 1'b1 : 1'b0);

assign icmp_ln180_5_fu_525_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd1) ? 1'b1 : 1'b0);

assign icmp_ln180_6_fu_538_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln180_fu_461_p2 = ((index_reg_1301_pp0_iter1_reg == 3'd6) ? 1'b1 : 1'b0);

assign index_fu_394_p1 = i_op_assign_reg_314[2:0];

assign io_acc_block_signal_op171 = (out_V_user_V_full_n & out_V_last_V_full_n & out_V_id_V_full_n & out_V_dest_V_full_n & out_V_data_V_full_n);

assign io_acc_block_signal_op43 = (out_V_user_V_full_n & out_V_last_V_full_n & out_V_id_V_full_n & out_V_dest_V_full_n & out_V_data_V_full_n);

assign out_V_dest_V_din = 8'd16;

assign out_V_id_V_din = 8'd4;

assign out_data_14_V_10_fu_478_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_fu_466_p3);

assign out_data_14_V_11_fu_491_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_10_fu_478_p3);

assign out_data_14_V_12_fu_504_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_11_fu_491_p3);

assign out_data_14_V_13_fu_517_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_12_fu_504_p3);

assign out_data_14_V_14_fu_530_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_13_fu_517_p3);

assign out_data_14_V_15_fu_543_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : out_data_14_V_14_fu_530_p3);

assign out_data_14_V_16_fu_551_p3 = ((icmp_ln180_fu_461_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_7_fu_252);

assign out_data_14_V_17_fu_558_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_16_fu_551_p3);

assign out_data_14_V_18_fu_566_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_17_fu_558_p3);

assign out_data_14_V_19_fu_574_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_18_fu_566_p3);

assign out_data_14_V_20_fu_582_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_19_fu_574_p3);

assign out_data_14_V_21_fu_590_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_20_fu_582_p3);

assign out_data_14_V_22_fu_598_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_7_fu_252 : out_data_14_V_21_fu_590_p3);

assign out_data_14_V_23_fu_606_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_6_fu_244);

assign out_data_14_V_24_fu_613_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_14_V_6_fu_244 : out_data_14_V_23_fu_606_p3);

assign out_data_14_V_25_fu_621_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_14_V_6_fu_244 : out_data_14_V_24_fu_613_p3);

assign out_data_14_V_26_fu_629_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_14_V_6_fu_244 : out_data_14_V_25_fu_621_p3);

assign out_data_14_V_27_fu_637_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_6_fu_244 : out_data_14_V_26_fu_629_p3);

assign out_data_14_V_28_fu_645_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_6_fu_244 : out_data_14_V_27_fu_637_p3);

assign out_data_14_V_29_fu_653_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_5_fu_236);

assign out_data_14_V_30_fu_660_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_14_V_5_fu_236 : out_data_14_V_29_fu_653_p3);

assign out_data_14_V_31_fu_668_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_14_V_5_fu_236 : out_data_14_V_30_fu_660_p3);

assign out_data_14_V_32_fu_676_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_5_fu_236 : out_data_14_V_31_fu_668_p3);

assign out_data_14_V_33_fu_684_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_5_fu_236 : out_data_14_V_32_fu_676_p3);

assign out_data_14_V_34_fu_692_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_4_fu_228);

assign out_data_14_V_35_fu_699_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_14_V_4_fu_228 : out_data_14_V_34_fu_692_p3);

assign out_data_14_V_36_fu_707_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_4_fu_228 : out_data_14_V_35_fu_699_p3);

assign out_data_14_V_37_fu_715_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_4_fu_228 : out_data_14_V_36_fu_707_p3);

assign out_data_14_V_38_fu_723_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_3_fu_220);

assign out_data_14_V_39_fu_730_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_14_V_3_fu_220 : out_data_14_V_38_fu_723_p3);

assign out_data_14_V_40_fu_738_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_3_fu_220 : out_data_14_V_39_fu_730_p3);

assign out_data_14_V_41_fu_746_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_2_fu_212);

assign out_data_14_V_42_fu_753_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_14_V_2_fu_212 : out_data_14_V_41_fu_746_p3);

assign out_data_14_V_43_fu_761_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? tmp_V_54_reg_1321 : out_data_14_V_1_fu_204);

assign out_data_14_V_fu_466_p3 = ((icmp_ln180_fu_461_p2[0:0] === 1'b1) ? out_data_14_V_8_fu_260 : tmp_V_54_reg_1321);

assign out_data_15_V_10_fu_775_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_fu_768_p3);

assign out_data_15_V_11_fu_783_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_10_fu_775_p3);

assign out_data_15_V_12_fu_791_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_11_fu_783_p3);

assign out_data_15_V_13_fu_799_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_12_fu_791_p3);

assign out_data_15_V_14_fu_807_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_13_fu_799_p3);

assign out_data_15_V_15_fu_815_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : out_data_15_V_14_fu_807_p3);

assign out_data_15_V_16_fu_823_p3 = ((icmp_ln180_fu_461_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_7_fu_256);

assign out_data_15_V_17_fu_830_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_16_fu_823_p3);

assign out_data_15_V_18_fu_838_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_17_fu_830_p3);

assign out_data_15_V_19_fu_846_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_18_fu_838_p3);

assign out_data_15_V_20_fu_854_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_19_fu_846_p3);

assign out_data_15_V_21_fu_862_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_20_fu_854_p3);

assign out_data_15_V_22_fu_870_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_7_fu_256 : out_data_15_V_21_fu_862_p3);

assign out_data_15_V_23_fu_878_p3 = ((icmp_ln180_1_fu_473_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_6_fu_248);

assign out_data_15_V_24_fu_885_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? out_data_15_V_6_fu_248 : out_data_15_V_23_fu_878_p3);

assign out_data_15_V_25_fu_893_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_15_V_6_fu_248 : out_data_15_V_24_fu_885_p3);

assign out_data_15_V_26_fu_901_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_15_V_6_fu_248 : out_data_15_V_25_fu_893_p3);

assign out_data_15_V_27_fu_909_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_6_fu_248 : out_data_15_V_26_fu_901_p3);

assign out_data_15_V_28_fu_917_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_6_fu_248 : out_data_15_V_27_fu_909_p3);

assign out_data_15_V_29_fu_925_p3 = ((icmp_ln180_2_fu_486_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_5_fu_240);

assign out_data_15_V_30_fu_932_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? out_data_15_V_5_fu_240 : out_data_15_V_29_fu_925_p3);

assign out_data_15_V_31_fu_940_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_15_V_5_fu_240 : out_data_15_V_30_fu_932_p3);

assign out_data_15_V_32_fu_948_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_5_fu_240 : out_data_15_V_31_fu_940_p3);

assign out_data_15_V_33_fu_956_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_5_fu_240 : out_data_15_V_32_fu_948_p3);

assign out_data_15_V_34_fu_964_p3 = ((icmp_ln180_3_fu_499_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_4_fu_232);

assign out_data_15_V_35_fu_971_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? out_data_15_V_4_fu_232 : out_data_15_V_34_fu_964_p3);

assign out_data_15_V_36_fu_979_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_4_fu_232 : out_data_15_V_35_fu_971_p3);

assign out_data_15_V_37_fu_987_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_4_fu_232 : out_data_15_V_36_fu_979_p3);

assign out_data_15_V_38_fu_995_p3 = ((icmp_ln180_4_fu_512_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_3_fu_224);

assign out_data_15_V_39_fu_1002_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? out_data_15_V_3_fu_224 : out_data_15_V_38_fu_995_p3);

assign out_data_15_V_40_fu_1010_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_3_fu_224 : out_data_15_V_39_fu_1002_p3);

assign out_data_15_V_41_fu_1018_p3 = ((icmp_ln180_5_fu_525_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_2_fu_216);

assign out_data_15_V_42_fu_1025_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? out_data_15_V_2_fu_216 : out_data_15_V_41_fu_1018_p3);

assign out_data_15_V_43_fu_1033_p3 = ((icmp_ln180_6_fu_538_p2[0:0] === 1'b1) ? tmp_V_55_reg_1333 : out_data_15_V_1_fu_208);

assign out_data_15_V_fu_768_p3 = ((icmp_ln180_fu_461_p2[0:0] === 1'b1) ? out_data_15_V_8_fu_264 : tmp_V_55_reg_1333);

assign p_Result_s_fu_359_p4 = {{{{448'd0}, {tmp_V_53_reg_1266}}}, {tmp_V_reg_1261}};

assign ret_V_1_fu_374_p1 = ret_V_3_reg_1276;

assign ret_V_2_fu_377_p2 = ($signed(32'd4294967295) + $signed(ret_V_1_fu_374_p1));

assign ret_V_fu_1157_p0 = ret_V_fu_1157_p00;

assign ret_V_fu_1157_p00 = trunc_ln302_1_fu_329_p1;

assign ret_V_fu_1157_p1 = ret_V_fu_1157_p10;

assign ret_V_fu_1157_p10 = trunc_ln302_fu_325_p1;

assign start_out = real_start;

assign temp_last_V_fu_408_p2 = ((zext_ln302_fu_398_p1 == ret_V_2_reg_1287) ? 1'b1 : 1'b0);

assign temp_user_V_fu_368_p2 = (16'd1 + trunc_ln6_reg_1271);

assign tmp_data_V_3_fu_1120_p17 = {{{{{{{{{{{{{{{{out_data_15_V_15_fu_815_p3}, {out_data_14_V_15_fu_543_p3}}, {out_data_15_V_22_fu_870_p3}}, {out_data_14_V_22_fu_598_p3}}, {out_data_15_V_28_fu_917_p3}}, {out_data_14_V_28_fu_645_p3}}, {out_data_15_V_33_fu_956_p3}}, {out_data_14_V_33_fu_684_p3}}, {out_data_15_V_37_fu_987_p3}}, {out_data_14_V_37_fu_715_p3}}, {out_data_15_V_40_fu_1010_p3}}, {out_data_14_V_40_fu_738_p3}}, {out_data_15_V_42_fu_1025_p3}}, {out_data_14_V_42_fu_753_p3}}, {out_data_15_V_43_fu_1033_p3}}, {out_data_14_V_43_fu_761_p3}};

assign trunc_ln302_1_fu_329_p1 = in_n_c_V_V_dout[15:0];

assign trunc_ln302_fu_325_p1 = in_n_r_V_V_dout[15:0];

assign zext_ln302_fu_398_p1 = i_op_assign_reg_314;

endmodule //AttentionMatmulWrite