// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module read_data (
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
        in_r_TDATA,
        in_r_TVALID,
        in_r_TREADY,
        in_r_TID,
        in_r_TDEST,
        in_r_TUSER,
        in_r_TLAST,
        in_write_n_V_V_din,
        in_write_n_V_V_full_n,
        in_write_n_V_V_write,
        in_sub_max_r_V_V_din,
        in_sub_max_r_V_V_full_n,
        in_sub_max_r_V_V_write,
        in_sub_max_c_V_V_din,
        in_sub_max_c_V_V_full_n,
        in_sub_max_c_V_V_write,
        max_input_V_V_din,
        max_input_V_V_full_n,
        max_input_V_V_write,
        in_sub_max_V_V_din,
        in_sub_max_V_V_full_n,
        in_sub_max_V_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

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
input  [511:0] in_r_TDATA;
input   in_r_TVALID;
output   in_r_TREADY;
input  [7:0] in_r_TID;
input  [7:0] in_r_TDEST;
input  [15:0] in_r_TUSER;
input  [0:0] in_r_TLAST;
output  [95:0] in_write_n_V_V_din;
input   in_write_n_V_V_full_n;
output   in_write_n_V_V_write;
output  [31:0] in_sub_max_r_V_V_din;
input   in_sub_max_r_V_V_full_n;
output   in_sub_max_r_V_V_write;
output  [31:0] in_sub_max_c_V_V_din;
input   in_sub_max_c_V_V_full_n;
output   in_sub_max_c_V_V_write;
output  [31:0] max_input_V_V_din;
input   max_input_V_V_full_n;
output   max_input_V_V_write;
output  [511:0] in_sub_max_V_V_din;
input   in_sub_max_V_V_full_n;
output   in_sub_max_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg in_write_n_V_V_write;
reg in_sub_max_r_V_V_write;
reg in_sub_max_c_V_V_write;
reg max_input_V_V_write;
reg in_sub_max_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg   [511:0] in_V_data_V_0_data_out;
wire    in_V_data_V_0_vld_in;
wire    in_V_data_V_0_vld_out;
wire    in_V_data_V_0_ack_in;
reg    in_V_data_V_0_ack_out;
reg   [511:0] in_V_data_V_0_payload_A;
reg   [511:0] in_V_data_V_0_payload_B;
reg    in_V_data_V_0_sel_rd;
reg    in_V_data_V_0_sel_wr;
wire    in_V_data_V_0_sel;
wire    in_V_data_V_0_load_A;
wire    in_V_data_V_0_load_B;
reg   [1:0] in_V_data_V_0_state;
wire    in_V_data_V_0_state_cmp_full;
wire    in_V_last_V_0_vld_in;
reg    in_V_last_V_0_ack_out;
reg   [1:0] in_V_last_V_0_state;
reg    in_r_TDATA_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
wire   [0:0] exitcond_flatten_fu_260_p2;
reg    in_write_n_V_V_blk_n;
reg    in_sub_max_r_V_V_blk_n;
reg    in_sub_max_c_V_V_blk_n;
reg    max_input_V_V_blk_n;
reg    ap_enable_reg_pp0_iter1;
reg   [0:0] tmp_20_i_reg_761;
reg    in_sub_max_V_V_blk_n;
reg   [0:0] exitcond_flatten_reg_728;
reg   [59:0] indvar_flatten_reg_185;
reg   [27:0] packet_i_reg_196;
wire   [27:0] unrolled_iterations_fu_216_p4;
reg   [27:0] unrolled_iterations_reg_713;
reg    ap_block_state1;
wire   [28:0] tmp_i_fu_240_p2;
reg   [28:0] tmp_i_reg_718;
wire   [59:0] bound_fu_254_p2;
reg   [59:0] bound_reg_723;
reg    ap_block_state2_pp0_stage0_iter0;
reg    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [59:0] indvar_flatten_next_fu_265_p2;
wire   [0:0] tmp_16_i_fu_288_p2;
reg   [0:0] tmp_16_i_reg_737;
reg   [511:0] tmp_data_V_2_reg_742;
wire   [31:0] max_3_0_V_fu_622_p3;
reg   [31:0] max_3_0_V_reg_747;
wire   [31:0] max_val_V_fu_636_p3;
reg   [31:0] max_val_V_reg_754;
wire   [0:0] tmp_20_i_fu_644_p2;
wire   [27:0] packet_fu_649_p2;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
wire   [31:0] num_batches_fu_211_p1;
reg    ap_block_pp0_stage0_01001;
wire   [31:0] tmp_V_22_fu_693_p3;
reg   [31:0] tmp_V_fu_132;
wire   [28:0] unrolled_iterations_s_fu_231_p1;
wire   [27:0] bound_fu_254_p0;
wire   [31:0] bound_fu_254_p1;
wire   [0:0] exitcond2_fu_271_p2;
wire   [27:0] packet_i_mid2_fu_276_p3;
wire   [31:0] tmp_fu_294_p1;
wire   [31:0] p_Result_22_i_fu_298_p4;
wire   [0:0] tmp_28_i_fu_308_p2;
wire   [31:0] p_Result_21_1_i_fu_322_p4;
wire   [31:0] p_Result_22_1_i_fu_332_p4;
wire   [0:0] tmp_28_1_i_fu_342_p2;
wire   [31:0] p_Result_21_2_i_fu_356_p4;
wire   [31:0] p_Result_22_2_i_fu_366_p4;
wire   [0:0] tmp_28_2_i_fu_376_p2;
wire   [31:0] p_Result_21_3_i_fu_390_p4;
wire   [31:0] p_Result_22_3_i_fu_400_p4;
wire   [0:0] tmp_28_3_i_fu_410_p2;
wire   [31:0] p_Result_21_4_i_fu_424_p4;
wire   [31:0] p_Result_22_4_i_fu_434_p4;
wire   [0:0] tmp_28_4_i_fu_444_p2;
wire   [31:0] p_Result_21_5_i_fu_458_p4;
wire   [31:0] p_Result_22_5_i_fu_468_p4;
wire   [0:0] tmp_28_5_i_fu_478_p2;
wire   [31:0] p_Result_21_6_i_fu_492_p4;
wire   [31:0] p_Result_22_6_i_fu_502_p4;
wire   [0:0] tmp_28_6_i_fu_512_p2;
wire   [31:0] p_Result_21_7_i_fu_526_p4;
wire   [31:0] p_Result_22_7_i_fu_536_p4;
wire   [0:0] tmp_28_7_i_fu_546_p2;
wire   [31:0] max_1_0_V_fu_314_p3;
wire   [31:0] max_1_1_V_fu_348_p3;
wire   [0:0] tmp_37_i_fu_560_p2;
wire   [31:0] max_1_2_V_fu_382_p3;
wire   [31:0] max_1_3_V_fu_416_p3;
wire   [0:0] tmp_37_1_i_fu_574_p2;
wire   [31:0] max_1_4_V_fu_450_p3;
wire   [31:0] max_1_5_V_fu_484_p3;
wire   [0:0] tmp_37_2_i_fu_588_p2;
wire   [31:0] max_1_6_V_fu_518_p3;
wire   [31:0] max_1_7_V_fu_552_p3;
wire   [0:0] tmp_37_3_i_fu_602_p2;
wire   [31:0] max_2_0_V_fu_566_p3;
wire   [31:0] max_2_1_V_fu_580_p3;
wire   [0:0] tmp_45_i_fu_616_p2;
wire   [31:0] max_2_2_V_fu_594_p3;
wire   [31:0] max_2_3_V_fu_608_p3;
wire   [0:0] tmp_45_1_i_fu_630_p2;
wire   [28:0] packet_cast_i_fu_284_p1;
wire   [31:0] p_0203_1_i_fu_658_p3;
wire   [0:0] tmp_18_i_fu_669_p2;
wire   [0:0] tmp_19_i_fu_681_p2;
wire   [0:0] tmp_17_i_fu_665_p2;
wire   [31:0] storemerge10_0203_s_fu_674_p3;
wire   [31:0] max_val_V_1_0203_1_fu_686_p3;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [59:0] bound_fu_254_p00;
wire   [59:0] bound_fu_254_p10;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 in_V_data_V_0_sel_rd = 1'b0;
#0 in_V_data_V_0_sel_wr = 1'b0;
#0 in_V_data_V_0_state = 2'd0;
#0 in_V_last_V_0_state = 2'd0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
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
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
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
        end else if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_V_data_V_0_sel_rd <= 1'b0;
    end else begin
        if (((in_V_data_V_0_ack_out == 1'b1) & (in_V_data_V_0_vld_out == 1'b1))) begin
            in_V_data_V_0_sel_rd <= ~in_V_data_V_0_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_V_data_V_0_sel_wr <= 1'b0;
    end else begin
        if (((in_V_data_V_0_ack_in == 1'b1) & (in_V_data_V_0_vld_in == 1'b1))) begin
            in_V_data_V_0_sel_wr <= ~in_V_data_V_0_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_V_data_V_0_state <= 2'd0;
    end else begin
        if ((((in_V_data_V_0_state == 2'd2) & (in_V_data_V_0_vld_in == 1'b0)) | ((in_V_data_V_0_state == 2'd3) & (in_V_data_V_0_vld_in == 1'b0) & (in_V_data_V_0_ack_out == 1'b1)))) begin
            in_V_data_V_0_state <= 2'd2;
        end else if ((((in_V_data_V_0_state == 2'd1) & (in_V_data_V_0_ack_out == 1'b0)) | ((in_V_data_V_0_state == 2'd3) & (in_V_data_V_0_ack_out == 1'b0) & (in_V_data_V_0_vld_in == 1'b1)))) begin
            in_V_data_V_0_state <= 2'd1;
        end else if (((~((in_V_data_V_0_vld_in == 1'b0) & (in_V_data_V_0_ack_out == 1'b1)) & ~((in_V_data_V_0_ack_out == 1'b0) & (in_V_data_V_0_vld_in == 1'b1)) & (in_V_data_V_0_state == 2'd3)) | ((in_V_data_V_0_state == 2'd1) & (in_V_data_V_0_ack_out == 1'b1)) | ((in_V_data_V_0_state == 2'd2) & (in_V_data_V_0_vld_in == 1'b1)))) begin
            in_V_data_V_0_state <= 2'd3;
        end else begin
            in_V_data_V_0_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        in_V_last_V_0_state <= 2'd0;
    end else begin
        if ((((in_V_last_V_0_state == 2'd2) & (in_V_last_V_0_vld_in == 1'b0)) | ((in_V_last_V_0_state == 2'd3) & (in_V_last_V_0_vld_in == 1'b0) & (in_V_last_V_0_ack_out == 1'b1)))) begin
            in_V_last_V_0_state <= 2'd2;
        end else if ((((in_V_last_V_0_state == 2'd1) & (in_V_last_V_0_ack_out == 1'b0)) | ((in_V_last_V_0_state == 2'd3) & (in_V_last_V_0_ack_out == 1'b0) & (in_V_last_V_0_vld_in == 1'b1)))) begin
            in_V_last_V_0_state <= 2'd1;
        end else if (((~((in_V_last_V_0_vld_in == 1'b0) & (in_V_last_V_0_ack_out == 1'b1)) & ~((in_V_last_V_0_ack_out == 1'b0) & (in_V_last_V_0_vld_in == 1'b1)) & (in_V_last_V_0_state == 2'd3)) | ((in_V_last_V_0_state == 2'd1) & (in_V_last_V_0_ack_out == 1'b1)) | ((in_V_last_V_0_state == 2'd2) & (in_V_last_V_0_vld_in == 1'b1)))) begin
            in_V_last_V_0_state <= 2'd3;
        end else begin
            in_V_last_V_0_state <= 2'd2;
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
    if (((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_185 <= indvar_flatten_next_fu_265_p2;
    end else if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_185 <= 60'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        packet_i_reg_196 <= packet_fu_649_p2;
    end else if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        packet_i_reg_196 <= 28'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        bound_reg_723 <= bound_fu_254_p2;
        tmp_i_reg_718 <= tmp_i_fu_240_p2;
        unrolled_iterations_reg_713 <= {{in_V_data_V_0_data_out[63:36]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_flatten_reg_728 <= exitcond_flatten_fu_260_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((in_V_data_V_0_load_A == 1'b1)) begin
        in_V_data_V_0_payload_A <= in_r_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if ((in_V_data_V_0_load_B == 1'b1)) begin
        in_V_data_V_0_payload_B <= in_r_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        max_3_0_V_reg_747 <= max_3_0_V_fu_622_p3;
        max_val_V_reg_754 <= max_val_V_fu_636_p3;
        tmp_16_i_reg_737 <= tmp_16_i_fu_288_p2;
        tmp_20_i_reg_761 <= tmp_20_i_fu_644_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_728 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_V_fu_132 <= tmp_V_22_fu_693_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_data_V_2_reg_742 <= in_V_data_V_0_data_out;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_260_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
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
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        in_V_data_V_0_ack_out = 1'b1;
    end else begin
        in_V_data_V_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if ((in_V_data_V_0_sel == 1'b1)) begin
        in_V_data_V_0_data_out = in_V_data_V_0_payload_B;
    end else begin
        in_V_data_V_0_data_out = in_V_data_V_0_payload_A;
    end
end

always @ (*) begin
    if ((((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        in_V_last_V_0_ack_out = 1'b1;
    end else begin
        in_V_last_V_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if ((((exitcond_flatten_fu_260_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        in_r_TDATA_blk_n = in_V_data_V_0_state[1'd0];
    end else begin
        in_r_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_728 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_sub_max_V_V_blk_n = in_sub_max_V_V_full_n;
    end else begin
        in_sub_max_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_728 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_sub_max_V_V_write = 1'b1;
    end else begin
        in_sub_max_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_c_V_V_blk_n = in_sub_max_c_V_V_full_n;
    end else begin
        in_sub_max_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_c_V_V_write = 1'b1;
    end else begin
        in_sub_max_c_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_r_V_V_blk_n = in_sub_max_r_V_V_full_n;
    end else begin
        in_sub_max_r_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_r_V_V_write = 1'b1;
    end else begin
        in_sub_max_r_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_n_V_V_blk_n = in_write_n_V_V_full_n;
    end else begin
        in_write_n_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_n_V_V_write = 1'b1;
    end else begin
        in_write_n_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_20_i_reg_761 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        max_input_V_V_blk_n = max_input_V_V_full_n;
    end else begin
        max_input_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_20_i_reg_761 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        max_input_V_V_write = 1'b1;
    end else begin
        max_input_V_V_write = 1'b0;
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
            if ((~((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((exitcond_flatten_fu_260_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((exitcond_flatten_fu_260_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_728 == 1'd0) & (in_sub_max_V_V_full_n == 1'b0)) | ((tmp_20_i_reg_761 == 1'd1) & (max_input_V_V_full_n == 1'b0)))) | ((exitcond_flatten_fu_260_p2 == 1'd0) & (in_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_728 == 1'd0) & (in_sub_max_V_V_full_n == 1'b0)) | ((tmp_20_i_reg_761 == 1'd1) & (max_input_V_V_full_n == 1'b0)))) | ((exitcond_flatten_fu_260_p2 == 1'd0) & (in_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_728 == 1'd0) & (in_sub_max_V_V_full_n == 1'b0)) | ((tmp_20_i_reg_761 == 1'd1) & (max_input_V_V_full_n == 1'b0)))) | ((exitcond_flatten_fu_260_p2 == 1'd0) & (in_V_data_V_0_vld_out == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (in_V_data_V_0_vld_out == 1'b0) | (in_sub_max_c_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_full_n == 1'b0) | (in_write_n_V_V_full_n == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state2_pp0_stage0_iter0 = ((exitcond_flatten_fu_260_p2 == 1'd0) & (in_V_data_V_0_vld_out == 1'b0));
end

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = (((exitcond_flatten_reg_728 == 1'd0) & (in_sub_max_V_V_full_n == 1'b0)) | ((tmp_20_i_reg_761 == 1'd1) & (max_input_V_V_full_n == 1'b0)));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign bound_fu_254_p0 = bound_fu_254_p00;

assign bound_fu_254_p00 = unrolled_iterations_fu_216_p4;

assign bound_fu_254_p1 = bound_fu_254_p10;

assign bound_fu_254_p10 = num_batches_fu_211_p1;

assign bound_fu_254_p2 = (bound_fu_254_p0 * bound_fu_254_p1);

assign exitcond2_fu_271_p2 = ((packet_i_reg_196 == unrolled_iterations_reg_713) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_260_p2 = ((indvar_flatten_reg_185 == bound_reg_723) ? 1'b1 : 1'b0);

assign in_V_data_V_0_ack_in = in_V_data_V_0_state[1'd1];

assign in_V_data_V_0_load_A = (in_V_data_V_0_state_cmp_full & ~in_V_data_V_0_sel_wr);

assign in_V_data_V_0_load_B = (in_V_data_V_0_state_cmp_full & in_V_data_V_0_sel_wr);

assign in_V_data_V_0_sel = in_V_data_V_0_sel_rd;

assign in_V_data_V_0_state_cmp_full = ((in_V_data_V_0_state != 2'd1) ? 1'b1 : 1'b0);

assign in_V_data_V_0_vld_in = in_r_TVALID;

assign in_V_data_V_0_vld_out = in_V_data_V_0_state[1'd0];

assign in_V_last_V_0_vld_in = in_r_TVALID;

assign in_r_TREADY = in_V_last_V_0_state[1'd1];

assign in_sub_max_V_V_din = tmp_data_V_2_reg_742;

assign in_sub_max_c_V_V_din = unrolled_iterations_fu_216_p4;

assign in_sub_max_r_V_V_din = num_batches_fu_211_p1;

assign in_write_n_V_V_din = in_V_data_V_0_data_out[95:0];

assign indvar_flatten_next_fu_265_p2 = (indvar_flatten_reg_185 + 60'd1);

assign max_1_0_V_fu_314_p3 = ((tmp_28_i_fu_308_p2[0:0] === 1'b1) ? tmp_fu_294_p1 : p_Result_22_i_fu_298_p4);

assign max_1_1_V_fu_348_p3 = ((tmp_28_1_i_fu_342_p2[0:0] === 1'b1) ? p_Result_21_1_i_fu_322_p4 : p_Result_22_1_i_fu_332_p4);

assign max_1_2_V_fu_382_p3 = ((tmp_28_2_i_fu_376_p2[0:0] === 1'b1) ? p_Result_21_2_i_fu_356_p4 : p_Result_22_2_i_fu_366_p4);

assign max_1_3_V_fu_416_p3 = ((tmp_28_3_i_fu_410_p2[0:0] === 1'b1) ? p_Result_21_3_i_fu_390_p4 : p_Result_22_3_i_fu_400_p4);

assign max_1_4_V_fu_450_p3 = ((tmp_28_4_i_fu_444_p2[0:0] === 1'b1) ? p_Result_21_4_i_fu_424_p4 : p_Result_22_4_i_fu_434_p4);

assign max_1_5_V_fu_484_p3 = ((tmp_28_5_i_fu_478_p2[0:0] === 1'b1) ? p_Result_21_5_i_fu_458_p4 : p_Result_22_5_i_fu_468_p4);

assign max_1_6_V_fu_518_p3 = ((tmp_28_6_i_fu_512_p2[0:0] === 1'b1) ? p_Result_21_6_i_fu_492_p4 : p_Result_22_6_i_fu_502_p4);

assign max_1_7_V_fu_552_p3 = ((tmp_28_7_i_fu_546_p2[0:0] === 1'b1) ? p_Result_21_7_i_fu_526_p4 : p_Result_22_7_i_fu_536_p4);

assign max_2_0_V_fu_566_p3 = ((tmp_37_i_fu_560_p2[0:0] === 1'b1) ? max_1_1_V_fu_348_p3 : max_1_0_V_fu_314_p3);

assign max_2_1_V_fu_580_p3 = ((tmp_37_1_i_fu_574_p2[0:0] === 1'b1) ? max_1_3_V_fu_416_p3 : max_1_2_V_fu_382_p3);

assign max_2_2_V_fu_594_p3 = ((tmp_37_2_i_fu_588_p2[0:0] === 1'b1) ? max_1_5_V_fu_484_p3 : max_1_4_V_fu_450_p3);

assign max_2_3_V_fu_608_p3 = ((tmp_37_3_i_fu_602_p2[0:0] === 1'b1) ? max_1_7_V_fu_552_p3 : max_1_6_V_fu_518_p3);

assign max_3_0_V_fu_622_p3 = ((tmp_45_i_fu_616_p2[0:0] === 1'b1) ? max_2_1_V_fu_580_p3 : max_2_0_V_fu_566_p3);

assign max_input_V_V_din = ((tmp_17_i_fu_665_p2[0:0] === 1'b1) ? storemerge10_0203_s_fu_674_p3 : max_val_V_1_0203_1_fu_686_p3);

assign max_val_V_1_0203_1_fu_686_p3 = ((tmp_19_i_fu_681_p2[0:0] === 1'b1) ? max_3_0_V_reg_747 : p_0203_1_i_fu_658_p3);

assign max_val_V_fu_636_p3 = ((tmp_45_1_i_fu_630_p2[0:0] === 1'b1) ? max_2_3_V_fu_608_p3 : max_2_2_V_fu_594_p3);

assign num_batches_fu_211_p1 = in_V_data_V_0_data_out[31:0];

assign p_0203_1_i_fu_658_p3 = ((tmp_16_i_reg_737[0:0] === 1'b1) ? 32'd0 : tmp_V_fu_132);

assign p_Result_21_1_i_fu_322_p4 = {{in_V_data_V_0_data_out[95:64]}};

assign p_Result_21_2_i_fu_356_p4 = {{in_V_data_V_0_data_out[159:128]}};

assign p_Result_21_3_i_fu_390_p4 = {{in_V_data_V_0_data_out[223:192]}};

assign p_Result_21_4_i_fu_424_p4 = {{in_V_data_V_0_data_out[287:256]}};

assign p_Result_21_5_i_fu_458_p4 = {{in_V_data_V_0_data_out[351:320]}};

assign p_Result_21_6_i_fu_492_p4 = {{in_V_data_V_0_data_out[415:384]}};

assign p_Result_21_7_i_fu_526_p4 = {{in_V_data_V_0_data_out[479:448]}};

assign p_Result_22_1_i_fu_332_p4 = {{in_V_data_V_0_data_out[127:96]}};

assign p_Result_22_2_i_fu_366_p4 = {{in_V_data_V_0_data_out[191:160]}};

assign p_Result_22_3_i_fu_400_p4 = {{in_V_data_V_0_data_out[255:224]}};

assign p_Result_22_4_i_fu_434_p4 = {{in_V_data_V_0_data_out[319:288]}};

assign p_Result_22_5_i_fu_468_p4 = {{in_V_data_V_0_data_out[383:352]}};

assign p_Result_22_6_i_fu_502_p4 = {{in_V_data_V_0_data_out[447:416]}};

assign p_Result_22_7_i_fu_536_p4 = {{in_V_data_V_0_data_out[511:480]}};

assign p_Result_22_i_fu_298_p4 = {{in_V_data_V_0_data_out[63:32]}};

assign packet_cast_i_fu_284_p1 = packet_i_mid2_fu_276_p3;

assign packet_fu_649_p2 = (packet_i_mid2_fu_276_p3 + 28'd1);

assign packet_i_mid2_fu_276_p3 = ((exitcond2_fu_271_p2[0:0] === 1'b1) ? 28'd0 : packet_i_reg_196);

assign start_out = real_start;

assign storemerge10_0203_s_fu_674_p3 = ((tmp_18_i_fu_669_p2[0:0] === 1'b1) ? max_val_V_reg_754 : p_0203_1_i_fu_658_p3);

assign tmp_16_i_fu_288_p2 = ((packet_i_mid2_fu_276_p3 == 28'd0) ? 1'b1 : 1'b0);

assign tmp_17_i_fu_665_p2 = (($signed(max_3_0_V_reg_747) < $signed(max_val_V_reg_754)) ? 1'b1 : 1'b0);

assign tmp_18_i_fu_669_p2 = (($signed(max_val_V_reg_754) > $signed(p_0203_1_i_fu_658_p3)) ? 1'b1 : 1'b0);

assign tmp_19_i_fu_681_p2 = (($signed(max_3_0_V_reg_747) > $signed(p_0203_1_i_fu_658_p3)) ? 1'b1 : 1'b0);

assign tmp_20_i_fu_644_p2 = ((packet_cast_i_fu_284_p1 == tmp_i_reg_718) ? 1'b1 : 1'b0);

assign tmp_28_1_i_fu_342_p2 = (($signed(p_Result_21_1_i_fu_322_p4) > $signed(p_Result_22_1_i_fu_332_p4)) ? 1'b1 : 1'b0);

assign tmp_28_2_i_fu_376_p2 = (($signed(p_Result_21_2_i_fu_356_p4) > $signed(p_Result_22_2_i_fu_366_p4)) ? 1'b1 : 1'b0);

assign tmp_28_3_i_fu_410_p2 = (($signed(p_Result_21_3_i_fu_390_p4) > $signed(p_Result_22_3_i_fu_400_p4)) ? 1'b1 : 1'b0);

assign tmp_28_4_i_fu_444_p2 = (($signed(p_Result_21_4_i_fu_424_p4) > $signed(p_Result_22_4_i_fu_434_p4)) ? 1'b1 : 1'b0);

assign tmp_28_5_i_fu_478_p2 = (($signed(p_Result_21_5_i_fu_458_p4) > $signed(p_Result_22_5_i_fu_468_p4)) ? 1'b1 : 1'b0);

assign tmp_28_6_i_fu_512_p2 = (($signed(p_Result_21_6_i_fu_492_p4) > $signed(p_Result_22_6_i_fu_502_p4)) ? 1'b1 : 1'b0);

assign tmp_28_7_i_fu_546_p2 = (($signed(p_Result_21_7_i_fu_526_p4) > $signed(p_Result_22_7_i_fu_536_p4)) ? 1'b1 : 1'b0);

assign tmp_28_i_fu_308_p2 = (($signed(tmp_fu_294_p1) > $signed(p_Result_22_i_fu_298_p4)) ? 1'b1 : 1'b0);

assign tmp_37_1_i_fu_574_p2 = (($signed(max_1_2_V_fu_382_p3) < $signed(max_1_3_V_fu_416_p3)) ? 1'b1 : 1'b0);

assign tmp_37_2_i_fu_588_p2 = (($signed(max_1_4_V_fu_450_p3) < $signed(max_1_5_V_fu_484_p3)) ? 1'b1 : 1'b0);

assign tmp_37_3_i_fu_602_p2 = (($signed(max_1_6_V_fu_518_p3) < $signed(max_1_7_V_fu_552_p3)) ? 1'b1 : 1'b0);

assign tmp_37_i_fu_560_p2 = (($signed(max_1_0_V_fu_314_p3) < $signed(max_1_1_V_fu_348_p3)) ? 1'b1 : 1'b0);

assign tmp_45_1_i_fu_630_p2 = (($signed(max_2_2_V_fu_594_p3) < $signed(max_2_3_V_fu_608_p3)) ? 1'b1 : 1'b0);

assign tmp_45_i_fu_616_p2 = (($signed(max_2_0_V_fu_566_p3) < $signed(max_2_1_V_fu_580_p3)) ? 1'b1 : 1'b0);

assign tmp_V_22_fu_693_p3 = ((tmp_17_i_fu_665_p2[0:0] === 1'b1) ? storemerge10_0203_s_fu_674_p3 : max_val_V_1_0203_1_fu_686_p3);

assign tmp_fu_294_p1 = in_V_data_V_0_data_out[31:0];

assign tmp_i_fu_240_p2 = ($signed(29'd536870911) + $signed(unrolled_iterations_s_fu_231_p1));

assign unrolled_iterations_fu_216_p4 = {{in_V_data_V_0_data_out[63:36]}};

assign unrolled_iterations_s_fu_231_p1 = unrolled_iterations_fu_216_p4;

endmodule //read_data