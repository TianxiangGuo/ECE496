// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module write_r (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        out_r_TDATA,
        out_r_TVALID,
        out_r_TREADY,
        out_r_TID,
        out_r_TDEST,
        out_r_TUSER,
        out_r_TLAST,
        in_write_n_V_V_dout,
        in_write_n_V_V_empty_n,
        in_write_n_V_V_read,
        in_write_iter_c_V_V_dout,
        in_write_iter_c_V_V_empty_n,
        in_write_iter_c_V_V_read,
        in_write_V_V_dout,
        in_write_V_V_empty_n,
        in_write_V_V_read
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_pp0_stage0 = 4'd4;
parameter    ap_ST_fsm_state6 = 4'd8;
parameter    ap_const_lv512_lc_1 = 512'd0;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [511:0] out_r_TDATA;
output   out_r_TVALID;
input   out_r_TREADY;
output  [7:0] out_r_TID;
output  [7:0] out_r_TDEST;
output  [15:0] out_r_TUSER;
output  [0:0] out_r_TLAST;
input  [95:0] in_write_n_V_V_dout;
input   in_write_n_V_V_empty_n;
output   in_write_n_V_V_read;
input  [31:0] in_write_iter_c_V_V_dout;
input   in_write_iter_c_V_V_empty_n;
output   in_write_iter_c_V_V_read;
input  [127:0] in_write_V_V_dout;
input   in_write_V_V_empty_n;
output   in_write_V_V_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg in_write_n_V_V_read;
reg in_write_iter_c_V_V_read;
reg in_write_V_V_read;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [511:0] out_V_data_V_1_data_in;
reg   [511:0] out_V_data_V_1_data_out;
reg    out_V_data_V_1_vld_in;
wire    out_V_data_V_1_vld_out;
wire    out_V_data_V_1_ack_in;
wire    out_V_data_V_1_ack_out;
reg   [511:0] out_V_data_V_1_payload_A;
reg   [511:0] out_V_data_V_1_payload_B;
reg    out_V_data_V_1_sel_rd;
reg    out_V_data_V_1_sel_wr;
wire    out_V_data_V_1_sel;
wire    out_V_data_V_1_load_A;
wire    out_V_data_V_1_load_B;
reg   [1:0] out_V_data_V_1_state;
wire    out_V_data_V_1_state_cmp_full;
wire   [7:0] out_V_id_V_1_data_out;
reg    out_V_id_V_1_vld_in;
wire    out_V_id_V_1_vld_out;
wire    out_V_id_V_1_ack_in;
wire    out_V_id_V_1_ack_out;
reg    out_V_id_V_1_sel_rd;
wire    out_V_id_V_1_sel;
reg   [1:0] out_V_id_V_1_state;
wire   [7:0] out_V_dest_V_1_data_out;
reg    out_V_dest_V_1_vld_in;
wire    out_V_dest_V_1_vld_out;
wire    out_V_dest_V_1_ack_in;
wire    out_V_dest_V_1_ack_out;
reg    out_V_dest_V_1_sel_rd;
wire    out_V_dest_V_1_sel;
reg   [1:0] out_V_dest_V_1_state;
reg   [15:0] out_V_user_V_1_data_in;
reg   [15:0] out_V_user_V_1_data_out;
reg    out_V_user_V_1_vld_in;
wire    out_V_user_V_1_vld_out;
wire    out_V_user_V_1_ack_in;
wire    out_V_user_V_1_ack_out;
reg   [15:0] out_V_user_V_1_payload_A;
reg   [15:0] out_V_user_V_1_payload_B;
reg    out_V_user_V_1_sel_rd;
reg    out_V_user_V_1_sel_wr;
wire    out_V_user_V_1_sel;
wire    out_V_user_V_1_load_A;
wire    out_V_user_V_1_load_B;
reg   [1:0] out_V_user_V_1_state;
wire    out_V_user_V_1_state_cmp_full;
reg   [0:0] out_V_last_V_1_data_in;
reg   [0:0] out_V_last_V_1_data_out;
reg    out_V_last_V_1_vld_in;
wire    out_V_last_V_1_vld_out;
wire    out_V_last_V_1_ack_in;
wire    out_V_last_V_1_ack_out;
reg   [0:0] out_V_last_V_1_payload_A;
reg   [0:0] out_V_last_V_1_payload_B;
reg    out_V_last_V_1_sel_rd;
reg    out_V_last_V_1_sel_wr;
wire    out_V_last_V_1_sel;
wire    out_V_last_V_1_load_A;
wire    out_V_last_V_1_load_B;
reg   [1:0] out_V_last_V_1_state;
wire    out_V_last_V_1_state_cmp_full;
reg    out_r_TDATA_blk_n;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] or_cond1_i_reg_713;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] or_cond1_i_reg_713_pp0_iter1_reg;
reg    in_write_n_V_V_blk_n;
reg    in_write_iter_c_V_V_blk_n;
reg    in_write_V_V_blk_n;
reg   [0:0] exitcond_flatten_reg_692;
reg   [27:0] indvar_flatten_reg_194;
reg   [11:0] t_V_reg_205;
wire   [511:0] p_Result_s_fu_334_p5;
reg    ap_block_state1;
wire   [15:0] out_data_user_V_fu_357_p2;
reg   [15:0] out_data_user_V_reg_661;
wire   [15:0] tmp_5_fu_364_p1;
reg   [15:0] tmp_5_reg_666;
reg   [27:0] tmp_2_reg_671;
reg   [11:0] tmp_reg_676;
wire   [28:0] op2_assign_fu_391_p2;
reg   [28:0] op2_assign_reg_682;
wire   [27:0] bound_fu_626_p2;
reg   [27:0] bound_reg_687;
wire   [0:0] exitcond_flatten_fu_403_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
reg    ap_block_state4_io;
wire    ap_block_state5_pp0_stage0_iter2;
reg    ap_block_state5_io;
reg    ap_block_pp0_stage0_11001;
wire   [27:0] indvar_flatten_next_fu_408_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [1:0] ret_V_fu_427_p1;
reg   [1:0] ret_V_reg_701;
wire   [0:0] out_data_last_V_fu_453_p2;
reg   [0:0] out_data_last_V_reg_708;
wire   [0:0] or_cond1_i_fu_458_p2;
wire   [11:0] i_V_fu_464_p2;
wire   [511:0] tmp_data_V_1_fu_613_p5;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg   [127:0] temp_V_0_1_i_fu_138;
wire   [127:0] temp_V_0_3_i_fu_585_p3;
reg   [127:0] temp_V_1_1_i_fu_142;
wire   [127:0] temp_V_1_3_i_fu_577_p3;
reg   [127:0] temp_V_2_1_i_fu_146;
wire   [127:0] temp_V_2_3_i_fu_561_p3;
reg   [127:0] temp_V_3_1_i_fu_150;
wire   [127:0] temp_V_3_3_i_fu_537_p3;
reg    ap_block_pp0_stage0_01001;
wire   [25:0] tmp_4_fu_250_p4;
wire   [5:0] NN_c_2_cast_i_fu_230_p4;
wire   [31:0] NN_c_2_fu_220_p4;
wire   [31:0] tmp_3_i_fu_272_p2;
wire   [25:0] tmp_1_fu_278_p4;
wire   [0:0] icmp_fu_260_p2;
wire   [31:0] NN_c_fu_288_p3;
wire   [0:0] tmp_2_i_fu_266_p2;
wire   [0:0] sel_tmp5_fu_304_p2;
wire   [0:0] sel_tmp6_fu_310_p2;
wire   [31:0] sel_tmp4_fu_296_p3;
wire   [31:0] unquant_N_fu_240_p4;
wire   [31:0] val_assign_fu_316_p3;
wire   [31:0] N_r_fu_216_p1;
wire   [95:0] tmp_9_i_fu_324_p4;
wire   [15:0] tmp_6_i_fu_347_p4;
wire   [28:0] tmp_cast_i_fu_388_p1;
wire   [0:0] exitcond2_fu_414_p2;
wire   [11:0] t_V_1_mid2_fu_419_p3;
wire   [0:0] tmp_12_i_fu_431_p2;
wire   [0:0] tmp_13_i_fu_437_p2;
wire   [28:0] tmp_14_cast_i_fu_449_p1;
wire   [0:0] or_cond_i_fu_443_p2;
wire   [0:0] tmp_7_i_fu_482_p2;
wire   [0:0] sel_tmp_fu_511_p2;
wire   [127:0] p_temp_V_3_1_i_fu_487_p3;
wire   [0:0] sel_tmp2_fu_524_p2;
wire   [127:0] sel_tmp1_fu_516_p3;
wire   [127:0] sel_tmp3_fu_529_p3;
wire   [127:0] p_temp_V_2_1_i_fu_495_p3;
wire   [127:0] sel_tmp7_fu_545_p3;
wire   [127:0] sel_tmp9_fu_553_p3;
wire   [127:0] p_temp_V_1_1_i_fu_503_p3;
wire   [127:0] sel_tmp8_fu_569_p3;
wire   [11:0] bound_fu_626_p0;
wire   [15:0] bound_fu_626_p1;
wire    ap_CS_fsm_state6;
reg    ap_block_state6;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [27:0] bound_fu_626_p00;
wire   [27:0] bound_fu_626_p10;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 out_V_data_V_1_sel_rd = 1'b0;
#0 out_V_data_V_1_sel_wr = 1'b0;
#0 out_V_data_V_1_state = 2'd0;
#0 out_V_id_V_1_sel_rd = 1'b0;
#0 out_V_id_V_1_state = 2'd0;
#0 out_V_dest_V_1_sel_rd = 1'b0;
#0 out_V_dest_V_1_state = 2'd0;
#0 out_V_user_V_1_sel_rd = 1'b0;
#0 out_V_user_V_1_sel_wr = 1'b0;
#0 out_V_user_V_1_state = 2'd0;
#0 out_V_last_V_1_sel_rd = 1'b0;
#0 out_V_last_V_1_sel_wr = 1'b0;
#0 out_V_last_V_1_state = 2'd0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

softmax_mul_mul_1dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 12 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 28 ))
softmax_mul_mul_1dEe_U71(
    .din0(bound_fu_626_p0),
    .din1(bound_fu_626_p1),
    .dout(bound_fu_626_p2)
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
        end else if ((~((out_V_id_V_1_ack_in == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (out_V_last_V_1_ack_in == 1'b0) | (out_V_user_V_1_ack_in == 1'b0) | (out_V_dest_V_1_ack_in == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
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
        end else if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_data_V_1_sel_rd <= 1'b0;
    end else begin
        if (((out_V_data_V_1_ack_out == 1'b1) & (out_V_data_V_1_vld_out == 1'b1))) begin
            out_V_data_V_1_sel_rd <= ~out_V_data_V_1_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_data_V_1_sel_wr <= 1'b0;
    end else begin
        if (((out_V_data_V_1_ack_in == 1'b1) & (out_V_data_V_1_vld_in == 1'b1))) begin
            out_V_data_V_1_sel_wr <= ~out_V_data_V_1_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_data_V_1_state <= 2'd0;
    end else begin
        if ((((out_V_data_V_1_state == 2'd2) & (out_V_data_V_1_vld_in == 1'b0)) | ((out_V_data_V_1_state == 2'd3) & (out_V_data_V_1_vld_in == 1'b0) & (out_V_data_V_1_ack_out == 1'b1)))) begin
            out_V_data_V_1_state <= 2'd2;
        end else if ((((out_V_data_V_1_state == 2'd1) & (out_V_data_V_1_ack_out == 1'b0)) | ((out_V_data_V_1_state == 2'd3) & (out_V_data_V_1_ack_out == 1'b0) & (out_V_data_V_1_vld_in == 1'b1)))) begin
            out_V_data_V_1_state <= 2'd1;
        end else if (((~((out_V_data_V_1_vld_in == 1'b0) & (out_V_data_V_1_ack_out == 1'b1)) & ~((out_V_data_V_1_ack_out == 1'b0) & (out_V_data_V_1_vld_in == 1'b1)) & (out_V_data_V_1_state == 2'd3)) | ((out_V_data_V_1_state == 2'd1) & (out_V_data_V_1_ack_out == 1'b1)) | ((out_V_data_V_1_state == 2'd2) & (out_V_data_V_1_vld_in == 1'b1)))) begin
            out_V_data_V_1_state <= 2'd3;
        end else begin
            out_V_data_V_1_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_dest_V_1_sel_rd <= 1'b0;
    end else begin
        if (((out_V_dest_V_1_ack_out == 1'b1) & (out_V_dest_V_1_vld_out == 1'b1))) begin
            out_V_dest_V_1_sel_rd <= ~out_V_dest_V_1_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_dest_V_1_state <= 2'd0;
    end else begin
        if ((((out_V_dest_V_1_state == 2'd2) & (out_V_dest_V_1_vld_in == 1'b0)) | ((out_V_dest_V_1_state == 2'd3) & (out_V_dest_V_1_vld_in == 1'b0) & (out_V_dest_V_1_ack_out == 1'b1)))) begin
            out_V_dest_V_1_state <= 2'd2;
        end else if ((((out_V_dest_V_1_state == 2'd1) & (out_V_dest_V_1_ack_out == 1'b0)) | ((out_V_dest_V_1_state == 2'd3) & (out_V_dest_V_1_ack_out == 1'b0) & (out_V_dest_V_1_vld_in == 1'b1)))) begin
            out_V_dest_V_1_state <= 2'd1;
        end else if (((~((out_V_dest_V_1_vld_in == 1'b0) & (out_V_dest_V_1_ack_out == 1'b1)) & ~((out_V_dest_V_1_ack_out == 1'b0) & (out_V_dest_V_1_vld_in == 1'b1)) & (out_V_dest_V_1_state == 2'd3)) | ((out_V_dest_V_1_state == 2'd1) & (out_V_dest_V_1_ack_out == 1'b1)) | ((out_V_dest_V_1_state == 2'd2) & (out_V_dest_V_1_vld_in == 1'b1)))) begin
            out_V_dest_V_1_state <= 2'd3;
        end else begin
            out_V_dest_V_1_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_id_V_1_sel_rd <= 1'b0;
    end else begin
        if (((out_V_id_V_1_vld_out == 1'b1) & (out_V_id_V_1_ack_out == 1'b1))) begin
            out_V_id_V_1_sel_rd <= ~out_V_id_V_1_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_id_V_1_state <= 2'd0;
    end else begin
        if ((((out_V_id_V_1_state == 2'd2) & (out_V_id_V_1_vld_in == 1'b0)) | ((out_V_id_V_1_state == 2'd3) & (out_V_id_V_1_vld_in == 1'b0) & (out_V_id_V_1_ack_out == 1'b1)))) begin
            out_V_id_V_1_state <= 2'd2;
        end else if ((((out_V_id_V_1_state == 2'd1) & (out_V_id_V_1_ack_out == 1'b0)) | ((out_V_id_V_1_state == 2'd3) & (out_V_id_V_1_ack_out == 1'b0) & (out_V_id_V_1_vld_in == 1'b1)))) begin
            out_V_id_V_1_state <= 2'd1;
        end else if (((~((out_V_id_V_1_vld_in == 1'b0) & (out_V_id_V_1_ack_out == 1'b1)) & ~((out_V_id_V_1_ack_out == 1'b0) & (out_V_id_V_1_vld_in == 1'b1)) & (out_V_id_V_1_state == 2'd3)) | ((out_V_id_V_1_state == 2'd1) & (out_V_id_V_1_ack_out == 1'b1)) | ((out_V_id_V_1_state == 2'd2) & (out_V_id_V_1_vld_in == 1'b1)))) begin
            out_V_id_V_1_state <= 2'd3;
        end else begin
            out_V_id_V_1_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_last_V_1_sel_rd <= 1'b0;
    end else begin
        if (((out_V_last_V_1_ack_out == 1'b1) & (out_V_last_V_1_vld_out == 1'b1))) begin
            out_V_last_V_1_sel_rd <= ~out_V_last_V_1_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_last_V_1_sel_wr <= 1'b0;
    end else begin
        if (((out_V_last_V_1_ack_in == 1'b1) & (out_V_last_V_1_vld_in == 1'b1))) begin
            out_V_last_V_1_sel_wr <= ~out_V_last_V_1_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_last_V_1_state <= 2'd0;
    end else begin
        if ((((out_V_last_V_1_state == 2'd2) & (out_V_last_V_1_vld_in == 1'b0)) | ((out_V_last_V_1_state == 2'd3) & (out_V_last_V_1_vld_in == 1'b0) & (out_V_last_V_1_ack_out == 1'b1)))) begin
            out_V_last_V_1_state <= 2'd2;
        end else if ((((out_V_last_V_1_state == 2'd1) & (out_V_last_V_1_ack_out == 1'b0)) | ((out_V_last_V_1_state == 2'd3) & (out_V_last_V_1_ack_out == 1'b0) & (out_V_last_V_1_vld_in == 1'b1)))) begin
            out_V_last_V_1_state <= 2'd1;
        end else if (((~((out_V_last_V_1_vld_in == 1'b0) & (out_V_last_V_1_ack_out == 1'b1)) & ~((out_V_last_V_1_ack_out == 1'b0) & (out_V_last_V_1_vld_in == 1'b1)) & (out_V_last_V_1_state == 2'd3)) | ((out_V_last_V_1_state == 2'd1) & (out_V_last_V_1_ack_out == 1'b1)) | ((out_V_last_V_1_state == 2'd2) & (out_V_last_V_1_vld_in == 1'b1)))) begin
            out_V_last_V_1_state <= 2'd3;
        end else begin
            out_V_last_V_1_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_user_V_1_sel_rd <= 1'b0;
    end else begin
        if (((out_V_user_V_1_ack_out == 1'b1) & (out_V_user_V_1_vld_out == 1'b1))) begin
            out_V_user_V_1_sel_rd <= ~out_V_user_V_1_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_user_V_1_sel_wr <= 1'b0;
    end else begin
        if (((out_V_user_V_1_ack_in == 1'b1) & (out_V_user_V_1_vld_in == 1'b1))) begin
            out_V_user_V_1_sel_wr <= ~out_V_user_V_1_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_V_user_V_1_state <= 2'd0;
    end else begin
        if ((((out_V_user_V_1_state == 2'd2) & (out_V_user_V_1_vld_in == 1'b0)) | ((out_V_user_V_1_state == 2'd3) & (out_V_user_V_1_vld_in == 1'b0) & (out_V_user_V_1_ack_out == 1'b1)))) begin
            out_V_user_V_1_state <= 2'd2;
        end else if ((((out_V_user_V_1_state == 2'd1) & (out_V_user_V_1_ack_out == 1'b0)) | ((out_V_user_V_1_state == 2'd3) & (out_V_user_V_1_ack_out == 1'b0) & (out_V_user_V_1_vld_in == 1'b1)))) begin
            out_V_user_V_1_state <= 2'd1;
        end else if (((~((out_V_user_V_1_vld_in == 1'b0) & (out_V_user_V_1_ack_out == 1'b1)) & ~((out_V_user_V_1_ack_out == 1'b0) & (out_V_user_V_1_vld_in == 1'b1)) & (out_V_user_V_1_state == 2'd3)) | ((out_V_user_V_1_state == 2'd1) & (out_V_user_V_1_ack_out == 1'b1)) | ((out_V_user_V_1_state == 2'd2) & (out_V_user_V_1_vld_in == 1'b1)))) begin
            out_V_user_V_1_state <= 2'd3;
        end else begin
            out_V_user_V_1_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_403_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_194 <= indvar_flatten_next_fu_408_p2;
    end else if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        indvar_flatten_reg_194 <= 28'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_403_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        t_V_reg_205 <= i_V_fu_464_p2;
    end else if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        t_V_reg_205 <= 12'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        bound_reg_687 <= bound_fu_626_p2;
        op2_assign_reg_682 <= op2_assign_fu_391_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_flatten_reg_692 <= exitcond_flatten_fu_403_p2;
        or_cond1_i_reg_713_pp0_iter1_reg <= or_cond1_i_reg_713;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_403_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        or_cond1_i_reg_713 <= or_cond1_i_fu_458_p2;
        out_data_last_V_reg_708 <= out_data_last_V_fu_453_p2;
        ret_V_reg_701 <= ret_V_fu_427_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_data_V_1_load_A == 1'b1)) begin
        out_V_data_V_1_payload_A <= out_V_data_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_data_V_1_load_B == 1'b1)) begin
        out_V_data_V_1_payload_B <= out_V_data_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_last_V_1_load_A == 1'b1)) begin
        out_V_last_V_1_payload_A <= out_V_last_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_last_V_1_load_B == 1'b1)) begin
        out_V_last_V_1_payload_B <= out_V_last_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_user_V_1_load_A == 1'b1)) begin
        out_V_user_V_1_payload_A <= out_V_user_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((out_V_user_V_1_load_B == 1'b1)) begin
        out_V_user_V_1_payload_B <= out_V_user_V_1_data_in;
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_data_user_V_reg_661 <= out_data_user_V_fu_357_p2;
        tmp_2_reg_671 <= {{in_write_n_V_V_dout[63:36]}};
        tmp_5_reg_666 <= tmp_5_fu_364_p1;
        tmp_reg_676 <= {{in_write_n_V_V_dout[47:36]}};
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_692 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        temp_V_0_1_i_fu_138 <= temp_V_0_3_i_fu_585_p3;
        temp_V_1_1_i_fu_142 <= temp_V_1_3_i_fu_577_p3;
        temp_V_2_1_i_fu_146 <= temp_V_2_3_i_fu_561_p3;
        temp_V_3_1_i_fu_150 <= temp_V_3_3_i_fu_537_p3;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_403_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((~((out_V_id_V_1_ack_in == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (out_V_last_V_1_ack_in == 1'b0) | (out_V_user_V_1_ack_in == 1'b0) | (out_V_dest_V_1_ack_in == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
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
    if ((~((out_V_id_V_1_ack_in == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (out_V_last_V_1_ack_in == 1'b0) | (out_V_user_V_1_ack_in == 1'b0) | (out_V_dest_V_1_ack_in == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_692 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_write_V_V_blk_n = in_write_V_V_empty_n;
    end else begin
        in_write_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_692 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_write_V_V_read = 1'b1;
    end else begin
        in_write_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_iter_c_V_V_blk_n = in_write_iter_c_V_V_empty_n;
    end else begin
        in_write_iter_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_iter_c_V_V_read = 1'b1;
    end else begin
        in_write_iter_c_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_n_V_V_blk_n = in_write_n_V_V_empty_n;
    end else begin
        in_write_n_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_n_V_V_read = 1'b1;
    end else begin
        in_write_n_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        out_V_data_V_1_data_in = tmp_data_V_1_fu_613_p5;
    end else if ((~((ap_start == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_data_V_1_data_in = p_Result_s_fu_334_p5;
    end else begin
        out_V_data_V_1_data_in = 'bx;
    end
end

always @ (*) begin
    if ((out_V_data_V_1_sel == 1'b1)) begin
        out_V_data_V_1_data_out = out_V_data_V_1_payload_B;
    end else begin
        out_V_data_V_1_data_out = out_V_data_V_1_payload_A;
    end
end

always @ (*) begin
    if ((((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_V_data_V_1_vld_in = 1'b1;
    end else begin
        out_V_data_V_1_vld_in = 1'b0;
    end
end

always @ (*) begin
    if ((((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_V_dest_V_1_vld_in = 1'b1;
    end else begin
        out_V_dest_V_1_vld_in = 1'b0;
    end
end

always @ (*) begin
    if ((((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_V_id_V_1_vld_in = 1'b1;
    end else begin
        out_V_id_V_1_vld_in = 1'b0;
    end
end

always @ (*) begin
    if (((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        out_V_last_V_1_data_in = out_data_last_V_reg_708;
    end else if ((~((ap_start == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_last_V_1_data_in = 1'd0;
    end else begin
        out_V_last_V_1_data_in = 'bx;
    end
end

always @ (*) begin
    if ((out_V_last_V_1_sel == 1'b1)) begin
        out_V_last_V_1_data_out = out_V_last_V_1_payload_B;
    end else begin
        out_V_last_V_1_data_out = out_V_last_V_1_payload_A;
    end
end

always @ (*) begin
    if ((((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_V_last_V_1_vld_in = 1'b1;
    end else begin
        out_V_last_V_1_vld_in = 1'b0;
    end
end

always @ (*) begin
    if (((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_01001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        out_V_user_V_1_data_in = out_data_user_V_reg_661;
    end else if ((~((ap_start == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        out_V_user_V_1_data_in = out_data_user_V_fu_357_p2;
    end else begin
        out_V_user_V_1_data_in = 'bx;
    end
end

always @ (*) begin
    if ((out_V_user_V_1_sel == 1'b1)) begin
        out_V_user_V_1_data_out = out_V_user_V_1_payload_B;
    end else begin
        out_V_user_V_1_data_out = out_V_user_V_1_payload_A;
    end
end

always @ (*) begin
    if ((((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_V_user_V_1_vld_in = 1'b1;
    end else begin
        out_V_user_V_1_vld_in = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((or_cond1_i_reg_713_pp0_iter1_reg == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((or_cond1_i_reg_713 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | (~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        out_r_TDATA_blk_n = out_V_data_V_1_state[1'd1];
    end else begin
        out_r_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((out_V_data_V_1_ack_in == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((exitcond_flatten_fu_403_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)) & ~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((exitcond_flatten_fu_403_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            if ((~((out_V_id_V_1_ack_in == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (out_V_last_V_1_ack_in == 1'b0) | (out_V_user_V_1_ack_in == 1'b0) | (out_V_dest_V_1_ack_in == 1'b0)) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign NN_c_2_cast_i_fu_230_p4 = {{in_write_n_V_V_dout[37:32]}};

assign NN_c_2_fu_220_p4 = {{in_write_n_V_V_dout[63:32]}};

assign NN_c_fu_288_p3 = {{tmp_1_fu_278_p4}, {6'd0}};

assign N_r_fu_216_p1 = in_write_n_V_V_dout[31:0];

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((exitcond_flatten_reg_692 == 1'd0) & (in_write_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((1'b1 == ap_block_state5_io) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & ((1'b1 == ap_block_state4_io) | ((exitcond_flatten_reg_692 == 1'd0) & (in_write_V_V_empty_n == 1'b0)))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((1'b1 == ap_block_state5_io) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & ((1'b1 == ap_block_state4_io) | ((exitcond_flatten_reg_692 == 1'd0) & (in_write_V_V_empty_n == 1'b0)))));
end

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (in_write_iter_c_V_V_empty_n == 1'b0) | (in_write_n_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_io = ((or_cond1_i_reg_713 == 1'd1) & (out_V_data_V_1_ack_in == 1'b0));
end

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = ((exitcond_flatten_reg_692 == 1'd0) & (in_write_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state5_io = ((or_cond1_i_reg_713_pp0_iter1_reg == 1'd1) & (out_V_data_V_1_ack_in == 1'b0));
end

assign ap_block_state5_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state6 = ((out_V_id_V_1_ack_in == 1'b0) | (out_V_data_V_1_ack_in == 1'b0) | (out_V_last_V_1_ack_in == 1'b0) | (out_V_user_V_1_ack_in == 1'b0) | (out_V_dest_V_1_ack_in == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign bound_fu_626_p0 = bound_fu_626_p00;

assign bound_fu_626_p00 = tmp_reg_676;

assign bound_fu_626_p1 = bound_fu_626_p10;

assign bound_fu_626_p10 = tmp_5_reg_666;

assign exitcond2_fu_414_p2 = ((t_V_reg_205 == tmp_reg_676) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_403_p2 = ((indvar_flatten_reg_194 == bound_reg_687) ? 1'b1 : 1'b0);

assign i_V_fu_464_p2 = (t_V_1_mid2_fu_419_p3 + 12'd1);

assign icmp_fu_260_p2 = ((tmp_4_fu_250_p4 == 26'd0) ? 1'b1 : 1'b0);

assign indvar_flatten_next_fu_408_p2 = (indvar_flatten_reg_194 + 28'd1);

assign op2_assign_fu_391_p2 = ($signed(29'd536870911) + $signed(tmp_cast_i_fu_388_p1));

assign or_cond1_i_fu_458_p2 = (out_data_last_V_fu_453_p2 | or_cond_i_fu_443_p2);

assign or_cond_i_fu_443_p2 = (tmp_13_i_fu_437_p2 & tmp_12_i_fu_431_p2);

assign out_V_data_V_1_ack_in = out_V_data_V_1_state[1'd1];

assign out_V_data_V_1_ack_out = out_r_TREADY;

assign out_V_data_V_1_load_A = (out_V_data_V_1_state_cmp_full & ~out_V_data_V_1_sel_wr);

assign out_V_data_V_1_load_B = (out_V_data_V_1_state_cmp_full & out_V_data_V_1_sel_wr);

assign out_V_data_V_1_sel = out_V_data_V_1_sel_rd;

assign out_V_data_V_1_state_cmp_full = ((out_V_data_V_1_state != 2'd1) ? 1'b1 : 1'b0);

assign out_V_data_V_1_vld_out = out_V_data_V_1_state[1'd0];

assign out_V_dest_V_1_ack_in = out_V_dest_V_1_state[1'd1];

assign out_V_dest_V_1_ack_out = out_r_TREADY;

assign out_V_dest_V_1_data_out = 8'd255;

assign out_V_dest_V_1_sel = out_V_dest_V_1_sel_rd;

assign out_V_dest_V_1_vld_out = out_V_dest_V_1_state[1'd0];

assign out_V_id_V_1_ack_in = out_V_id_V_1_state[1'd1];

assign out_V_id_V_1_ack_out = out_r_TREADY;

assign out_V_id_V_1_data_out = 8'd0;

assign out_V_id_V_1_sel = out_V_id_V_1_sel_rd;

assign out_V_id_V_1_vld_out = out_V_id_V_1_state[1'd0];

assign out_V_last_V_1_ack_in = out_V_last_V_1_state[1'd1];

assign out_V_last_V_1_ack_out = out_r_TREADY;

assign out_V_last_V_1_load_A = (out_V_last_V_1_state_cmp_full & ~out_V_last_V_1_sel_wr);

assign out_V_last_V_1_load_B = (out_V_last_V_1_state_cmp_full & out_V_last_V_1_sel_wr);

assign out_V_last_V_1_sel = out_V_last_V_1_sel_rd;

assign out_V_last_V_1_state_cmp_full = ((out_V_last_V_1_state != 2'd1) ? 1'b1 : 1'b0);

assign out_V_last_V_1_vld_out = out_V_last_V_1_state[1'd0];

assign out_V_user_V_1_ack_in = out_V_user_V_1_state[1'd1];

assign out_V_user_V_1_ack_out = out_r_TREADY;

assign out_V_user_V_1_load_A = (out_V_user_V_1_state_cmp_full & ~out_V_user_V_1_sel_wr);

assign out_V_user_V_1_load_B = (out_V_user_V_1_state_cmp_full & out_V_user_V_1_sel_wr);

assign out_V_user_V_1_sel = out_V_user_V_1_sel_rd;

assign out_V_user_V_1_state_cmp_full = ((out_V_user_V_1_state != 2'd1) ? 1'b1 : 1'b0);

assign out_V_user_V_1_vld_out = out_V_user_V_1_state[1'd0];

assign out_data_last_V_fu_453_p2 = ((tmp_14_cast_i_fu_449_p1 == op2_assign_reg_682) ? 1'b1 : 1'b0);

assign out_data_user_V_fu_357_p2 = (16'd1 + tmp_6_i_fu_347_p4);

assign out_r_TDATA = out_V_data_V_1_data_out;

assign out_r_TDEST = out_V_dest_V_1_data_out;

assign out_r_TID = out_V_id_V_1_data_out;

assign out_r_TLAST = out_V_last_V_1_data_out;

assign out_r_TUSER = out_V_user_V_1_data_out;

assign out_r_TVALID = out_V_last_V_1_state[1'd0];

assign p_Result_s_fu_334_p5 = {{ap_const_lv512_lc_1[511:96]}, {tmp_9_i_fu_324_p4}};

assign p_temp_V_1_1_i_fu_503_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : temp_V_1_1_i_fu_142);

assign p_temp_V_2_1_i_fu_495_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : temp_V_2_1_i_fu_146);

assign p_temp_V_3_1_i_fu_487_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : temp_V_3_1_i_fu_150);

assign ret_V_fu_427_p1 = t_V_1_mid2_fu_419_p3[1:0];

assign sel_tmp1_fu_516_p3 = ((sel_tmp_fu_511_p2[0:0] === 1'b1) ? p_temp_V_3_1_i_fu_487_p3 : in_write_V_V_dout);

assign sel_tmp2_fu_524_p2 = ((ret_V_reg_701 == 2'd1) ? 1'b1 : 1'b0);

assign sel_tmp3_fu_529_p3 = ((sel_tmp2_fu_524_p2[0:0] === 1'b1) ? p_temp_V_3_1_i_fu_487_p3 : sel_tmp1_fu_516_p3);

assign sel_tmp4_fu_296_p3 = ((icmp_fu_260_p2[0:0] === 1'b1) ? 32'd64 : NN_c_fu_288_p3);

assign sel_tmp5_fu_304_p2 = (icmp_fu_260_p2 ^ 1'd1);

assign sel_tmp6_fu_310_p2 = (tmp_2_i_fu_266_p2 & sel_tmp5_fu_304_p2);

assign sel_tmp7_fu_545_p3 = ((sel_tmp_fu_511_p2[0:0] === 1'b1) ? in_write_V_V_dout : p_temp_V_2_1_i_fu_495_p3);

assign sel_tmp8_fu_569_p3 = ((sel_tmp2_fu_524_p2[0:0] === 1'b1) ? in_write_V_V_dout : p_temp_V_1_1_i_fu_503_p3);

assign sel_tmp9_fu_553_p3 = ((sel_tmp2_fu_524_p2[0:0] === 1'b1) ? p_temp_V_2_1_i_fu_495_p3 : sel_tmp7_fu_545_p3);

assign sel_tmp_fu_511_p2 = ((ret_V_reg_701 == 2'd2) ? 1'b1 : 1'b0);

assign t_V_1_mid2_fu_419_p3 = ((exitcond2_fu_414_p2[0:0] === 1'b1) ? 12'd0 : t_V_reg_205);

assign temp_V_0_3_i_fu_585_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? in_write_V_V_dout : temp_V_0_1_i_fu_138);

assign temp_V_1_3_i_fu_577_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : sel_tmp8_fu_569_p3);

assign temp_V_2_3_i_fu_561_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : sel_tmp9_fu_553_p3);

assign temp_V_3_3_i_fu_537_p3 = ((tmp_7_i_fu_482_p2[0:0] === 1'b1) ? 128'd0 : sel_tmp3_fu_529_p3);

assign tmp_12_i_fu_431_p2 = ((t_V_1_mid2_fu_419_p3 != 12'd0) ? 1'b1 : 1'b0);

assign tmp_13_i_fu_437_p2 = ((ret_V_fu_427_p1 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_14_cast_i_fu_449_p1 = t_V_1_mid2_fu_419_p3;

assign tmp_1_fu_278_p4 = {{tmp_3_i_fu_272_p2[31:6]}};

assign tmp_2_i_fu_266_p2 = ((NN_c_2_cast_i_fu_230_p4 == 6'd0) ? 1'b1 : 1'b0);

assign tmp_3_i_fu_272_p2 = (32'd64 + NN_c_2_fu_220_p4);

assign tmp_4_fu_250_p4 = {{in_write_n_V_V_dout[63:38]}};

assign tmp_5_fu_364_p1 = in_write_n_V_V_dout[15:0];

assign tmp_6_i_fu_347_p4 = {{val_assign_fu_316_p3[21:6]}};

assign tmp_7_i_fu_482_p2 = ((ret_V_reg_701 == 2'd0) ? 1'b1 : 1'b0);

assign tmp_9_i_fu_324_p4 = {{{unquant_N_fu_240_p4}, {val_assign_fu_316_p3}}, {N_r_fu_216_p1}};

assign tmp_cast_i_fu_388_p1 = tmp_2_reg_671;

assign tmp_data_V_1_fu_613_p5 = {{{{temp_V_3_3_i_fu_537_p3}, {temp_V_2_3_i_fu_561_p3}}, {temp_V_1_3_i_fu_577_p3}}, {temp_V_0_3_i_fu_585_p3}};

assign unquant_N_fu_240_p4 = {{in_write_n_V_V_dout[95:64]}};

assign val_assign_fu_316_p3 = ((sel_tmp6_fu_310_p2[0:0] === 1'b1) ? NN_c_2_fu_220_p4 : sel_tmp4_fu_296_p3);

endmodule //write_r
