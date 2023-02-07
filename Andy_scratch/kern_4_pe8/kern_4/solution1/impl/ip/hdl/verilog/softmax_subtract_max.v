// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_subtract_max (
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
        in_sub_max_c_V_V_dout,
        in_sub_max_c_V_V_empty_n,
        in_sub_max_c_V_V_read,
        in_sub_max_r_V_V_dout,
        in_sub_max_r_V_V_empty_n,
        in_sub_max_r_V_V_read,
        in_proc_1_iter_r_V_V_din,
        in_proc_1_iter_r_V_V_full_n,
        in_proc_1_iter_r_V_V_write,
        in_proc_1_iter_c_V_V_din,
        in_proc_1_iter_c_V_V_full_n,
        in_proc_1_iter_c_V_V_write,
        max_input_V_V_dout,
        max_input_V_V_empty_n,
        max_input_V_V_read,
        in_sub_max_V_V_dout,
        in_sub_max_V_V_empty_n,
        in_sub_max_V_V_read,
        in_proc_1_V_V_din,
        in_proc_1_V_V_full_n,
        in_proc_1_V_V_write
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
input  [31:0] in_sub_max_c_V_V_dout;
input   in_sub_max_c_V_V_empty_n;
output   in_sub_max_c_V_V_read;
input  [31:0] in_sub_max_r_V_V_dout;
input   in_sub_max_r_V_V_empty_n;
output   in_sub_max_r_V_V_read;
output  [31:0] in_proc_1_iter_r_V_V_din;
input   in_proc_1_iter_r_V_V_full_n;
output   in_proc_1_iter_r_V_V_write;
output  [31:0] in_proc_1_iter_c_V_V_din;
input   in_proc_1_iter_c_V_V_full_n;
output   in_proc_1_iter_c_V_V_write;
input  [31:0] max_input_V_V_dout;
input   max_input_V_V_empty_n;
output   max_input_V_V_read;
input  [31:0] in_sub_max_V_V_dout;
input   in_sub_max_V_V_empty_n;
output   in_sub_max_V_V_read;
output  [31:0] in_proc_1_V_V_din;
input   in_proc_1_V_V_full_n;
output   in_proc_1_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg in_sub_max_c_V_V_read;
reg in_sub_max_r_V_V_read;
reg in_proc_1_iter_r_V_V_write;
reg in_proc_1_iter_c_V_V_write;
reg max_input_V_V_read;
reg in_sub_max_V_V_read;
reg in_proc_1_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    in_sub_max_c_V_V_blk_n;
reg    in_sub_max_r_V_V_blk_n;
reg    in_proc_1_iter_r_V_V_blk_n;
reg    in_proc_1_iter_c_V_V_blk_n;
reg    max_input_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] tmp_i_28_reg_309;
reg    in_sub_max_V_V_blk_n;
reg   [0:0] exitcond_flatten_reg_300;
reg    in_proc_1_V_V_blk_n;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] exitcond_flatten_reg_300_pp0_iter1_reg;
reg   [63:0] indvar_flatten_reg_181;
reg   [31:0] iter_i_reg_192;
reg   [31:0] tmp_V_71_reg_284;
reg    ap_block_state1;
reg   [31:0] tmp_V_70_reg_290;
wire   [63:0] bound_fu_209_p2;
reg   [63:0] bound_reg_295;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond_flatten_fu_215_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
reg    ap_block_state5_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [63:0] indvar_flatten_next_fu_220_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] tmp_i_28_fu_239_p2;
wire   [31:0] iter_fu_245_p2;
reg   [31:0] tmp_V_73_reg_318;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg    ap_block_pp0_stage0_01001;
reg   [31:0] tmp_V_fu_130;
wire   [31:0] bound_fu_209_p0;
wire   [31:0] bound_fu_209_p1;
wire   [0:0] exitcond_i2_fu_226_p2;
wire   [31:0] iter_i_mid2_fu_231_p3;
wire   [0:0] tmp_13_i_fu_259_p2;
wire   [31:0] tmp_14_i_fu_264_p2;
wire    ap_CS_fsm_state6;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [63:0] bound_fu_209_p00;
wire   [63:0] bound_fu_209_p10;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
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
        end else if ((1'b1 == ap_CS_fsm_state2)) begin
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
        end else if ((1'b1 == ap_CS_fsm_state2)) begin
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
    if (((exitcond_flatten_fu_215_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_181 <= indvar_flatten_next_fu_220_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        indvar_flatten_reg_181 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_215_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        iter_i_reg_192 <= iter_fu_245_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        iter_i_reg_192 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        bound_reg_295 <= bound_fu_209_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten_reg_300 <= exitcond_flatten_fu_215_p2;
        exitcond_flatten_reg_300_pp0_iter1_reg <= exitcond_flatten_reg_300;
    end
end

always @ (posedge ap_clk) begin
    if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_V_70_reg_290 <= in_sub_max_r_V_V_dout;
        tmp_V_71_reg_284 <= in_sub_max_c_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_300 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_V_73_reg_318 <= in_sub_max_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_28_reg_309 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_V_fu_130 <= max_input_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_215_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_i_28_reg_309 <= tmp_i_28_fu_239_p2;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_215_p2 == 1'd1)) begin
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
    if (((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        in_proc_1_V_V_blk_n = in_proc_1_V_V_full_n;
    end else begin
        in_proc_1_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_proc_1_V_V_write = 1'b1;
    end else begin
        in_proc_1_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_1_iter_c_V_V_blk_n = in_proc_1_iter_c_V_V_full_n;
    end else begin
        in_proc_1_iter_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_1_iter_c_V_V_write = 1'b1;
    end else begin
        in_proc_1_iter_c_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_1_iter_r_V_V_blk_n = in_proc_1_iter_r_V_V_full_n;
    end else begin
        in_proc_1_iter_r_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_1_iter_r_V_V_write = 1'b1;
    end else begin
        in_proc_1_iter_r_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_300 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        in_sub_max_V_V_blk_n = in_sub_max_V_V_empty_n;
    end else begin
        in_sub_max_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_300 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_sub_max_V_V_read = 1'b1;
    end else begin
        in_sub_max_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_c_V_V_blk_n = in_sub_max_c_V_V_empty_n;
    end else begin
        in_sub_max_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_c_V_V_read = 1'b1;
    end else begin
        in_sub_max_c_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_r_V_V_blk_n = in_sub_max_r_V_V_empty_n;
    end else begin
        in_sub_max_r_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_sub_max_r_V_V_read = 1'b1;
    end else begin
        in_sub_max_r_V_V_read = 1'b0;
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
    if (((tmp_i_28_reg_309 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        max_input_V_V_blk_n = max_input_V_V_empty_n;
    end else begin
        max_input_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_i_28_reg_309 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        max_input_V_V_read = 1'b1;
    end else begin
        max_input_V_V_read = 1'b0;
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
            if ((~((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((exitcond_flatten_fu_215_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((exitcond_flatten_fu_215_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
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
    ap_block_pp0_stage0_01001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_300 == 1'd0) & (in_sub_max_V_V_empty_n == 1'b0)) | ((tmp_i_28_reg_309 == 1'd1) & (max_input_V_V_empty_n == 1'b0)))) | ((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (in_proc_1_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_300 == 1'd0) & (in_sub_max_V_V_empty_n == 1'b0)) | ((tmp_i_28_reg_309 == 1'd1) & (max_input_V_V_empty_n == 1'b0)))) | ((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (in_proc_1_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_flatten_reg_300 == 1'd0) & (in_sub_max_V_V_empty_n == 1'b0)) | ((tmp_i_28_reg_309 == 1'd1) & (max_input_V_V_empty_n == 1'b0)))) | ((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (in_proc_1_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((in_proc_1_iter_c_V_V_full_n == 1'b0) | (in_proc_1_iter_r_V_V_full_n == 1'b0) | (in_sub_max_r_V_V_empty_n == 1'b0) | (in_sub_max_c_V_V_empty_n == 1'b0) | (real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = (((exitcond_flatten_reg_300 == 1'd0) & (in_sub_max_V_V_empty_n == 1'b0)) | ((tmp_i_28_reg_309 == 1'd1) & (max_input_V_V_empty_n == 1'b0)));
end

always @ (*) begin
    ap_block_state5_pp0_stage0_iter2 = ((exitcond_flatten_reg_300_pp0_iter1_reg == 1'd0) & (in_proc_1_V_V_full_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign bound_fu_209_p0 = bound_fu_209_p00;

assign bound_fu_209_p00 = tmp_V_71_reg_284;

assign bound_fu_209_p1 = bound_fu_209_p10;

assign bound_fu_209_p10 = tmp_V_70_reg_290;

assign bound_fu_209_p2 = (bound_fu_209_p0 * bound_fu_209_p1);

assign exitcond_flatten_fu_215_p2 = ((indvar_flatten_reg_181 == bound_reg_295) ? 1'b1 : 1'b0);

assign exitcond_i2_fu_226_p2 = ((iter_i_reg_192 == tmp_V_71_reg_284) ? 1'b1 : 1'b0);

assign in_proc_1_V_V_din = ((tmp_13_i_fu_259_p2[0:0] === 1'b1) ? 32'd2147483648 : tmp_14_i_fu_264_p2);

assign in_proc_1_iter_c_V_V_din = in_sub_max_c_V_V_dout;

assign in_proc_1_iter_r_V_V_din = in_sub_max_r_V_V_dout;

assign indvar_flatten_next_fu_220_p2 = (indvar_flatten_reg_181 + 64'd1);

assign iter_fu_245_p2 = (iter_i_mid2_fu_231_p3 + 32'd1);

assign iter_i_mid2_fu_231_p3 = ((exitcond_i2_fu_226_p2[0:0] === 1'b1) ? 32'd0 : iter_i_reg_192);

assign start_out = real_start;

assign tmp_13_i_fu_259_p2 = ((tmp_V_73_reg_318 == 32'd2147483648) ? 1'b1 : 1'b0);

assign tmp_14_i_fu_264_p2 = (tmp_V_73_reg_318 - tmp_V_fu_130);

assign tmp_i_28_fu_239_p2 = ((iter_i_mid2_fu_231_p3 == 32'd0) ? 1'b1 : 1'b0);

endmodule //softmax_subtract_max
