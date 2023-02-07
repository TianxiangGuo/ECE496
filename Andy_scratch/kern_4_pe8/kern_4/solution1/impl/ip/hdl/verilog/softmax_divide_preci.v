// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_divide_preci (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        in_proc_2_iter_c_V_V_dout,
        in_proc_2_iter_c_V_V_empty_n,
        in_proc_2_iter_c_V_V_read,
        in_proc_2_iter_r_V_V_dout,
        in_proc_2_iter_r_V_V_empty_n,
        in_proc_2_iter_r_V_V_read,
        in_write_2_iter_c_V_s_din,
        in_write_2_iter_c_V_s_full_n,
        in_write_2_iter_c_V_s_write,
        sum_V_V_dout,
        sum_V_V_empty_n,
        sum_V_V_read,
        in_proc_2_V_V_dout,
        in_proc_2_V_V_empty_n,
        in_proc_2_V_V_read,
        in_write_V_V_din,
        in_write_V_V_full_n,
        in_write_V_V_write
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_pp0_stage0 = 4'd4;
parameter    ap_ST_fsm_state36 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] in_proc_2_iter_c_V_V_dout;
input   in_proc_2_iter_c_V_V_empty_n;
output   in_proc_2_iter_c_V_V_read;
input  [31:0] in_proc_2_iter_r_V_V_dout;
input   in_proc_2_iter_r_V_V_empty_n;
output   in_proc_2_iter_r_V_V_read;
output  [31:0] in_write_2_iter_c_V_s_din;
input   in_write_2_iter_c_V_s_full_n;
output   in_write_2_iter_c_V_s_write;
input  [31:0] sum_V_V_dout;
input   sum_V_V_empty_n;
output   sum_V_V_read;
input  [15:0] in_proc_2_V_V_dout;
input   in_proc_2_V_V_empty_n;
output   in_proc_2_V_V_read;
output  [7:0] in_write_V_V_din;
input   in_write_V_V_full_n;
output   in_write_V_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg in_proc_2_iter_c_V_V_read;
reg in_proc_2_iter_r_V_V_read;
reg in_write_2_iter_c_V_s_write;
reg sum_V_V_read;
reg in_proc_2_V_V_read;
reg in_write_V_V_write;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    in_proc_2_iter_c_V_V_blk_n;
reg    in_proc_2_iter_r_V_V_blk_n;
reg    in_write_2_iter_c_V_s_blk_n;
reg    sum_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] tmp_i_reg_330;
reg    in_proc_2_V_V_blk_n;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] exitcond_flatten_reg_321;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter1_reg;
reg    in_write_V_V_blk_n;
reg    ap_enable_reg_pp0_iter32;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter31_reg;
reg   [63:0] indvar_flatten_reg_175;
reg   [31:0] iter_i_reg_186;
reg   [31:0] tmp_V_101_reg_305;
reg    ap_block_state1;
reg   [31:0] tmp_V_105_reg_311;
wire   [63:0] bound_fu_203_p2;
reg   [63:0] bound_reg_316;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond_flatten_fu_209_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
reg    ap_block_state5_pp0_stage0_iter2;
wire    ap_block_state6_pp0_stage0_iter3;
wire    ap_block_state7_pp0_stage0_iter4;
wire    ap_block_state8_pp0_stage0_iter5;
wire    ap_block_state9_pp0_stage0_iter6;
wire    ap_block_state10_pp0_stage0_iter7;
wire    ap_block_state11_pp0_stage0_iter8;
wire    ap_block_state12_pp0_stage0_iter9;
wire    ap_block_state13_pp0_stage0_iter10;
wire    ap_block_state14_pp0_stage0_iter11;
wire    ap_block_state15_pp0_stage0_iter12;
wire    ap_block_state16_pp0_stage0_iter13;
wire    ap_block_state17_pp0_stage0_iter14;
wire    ap_block_state18_pp0_stage0_iter15;
wire    ap_block_state19_pp0_stage0_iter16;
wire    ap_block_state20_pp0_stage0_iter17;
wire    ap_block_state21_pp0_stage0_iter18;
wire    ap_block_state22_pp0_stage0_iter19;
wire    ap_block_state23_pp0_stage0_iter20;
wire    ap_block_state24_pp0_stage0_iter21;
wire    ap_block_state25_pp0_stage0_iter22;
wire    ap_block_state26_pp0_stage0_iter23;
wire    ap_block_state27_pp0_stage0_iter24;
wire    ap_block_state28_pp0_stage0_iter25;
wire    ap_block_state29_pp0_stage0_iter26;
wire    ap_block_state30_pp0_stage0_iter27;
wire    ap_block_state31_pp0_stage0_iter28;
wire    ap_block_state32_pp0_stage0_iter29;
wire    ap_block_state33_pp0_stage0_iter30;
wire    ap_block_state34_pp0_stage0_iter31;
reg    ap_block_state35_pp0_stage0_iter32;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter2_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter3_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter4_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter5_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter6_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter7_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter8_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter9_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter10_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter11_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter12_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter13_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter14_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter15_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter16_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter17_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter18_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter19_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter20_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter21_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter22_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter23_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter24_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter25_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter26_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter27_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter28_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter29_reg;
reg   [0:0] exitcond_flatten_reg_321_pp0_iter30_reg;
wire   [63:0] indvar_flatten_next_fu_214_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] tmp_i_fu_233_p2;
wire   [31:0] iter_fu_239_p2;
wire   [7:0] tmp_V_104_fu_291_p3;
reg   [7:0] tmp_V_104_reg_349;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter10;
reg    ap_enable_reg_pp0_iter11;
reg    ap_enable_reg_pp0_iter12;
reg    ap_enable_reg_pp0_iter13;
reg    ap_enable_reg_pp0_iter14;
reg    ap_enable_reg_pp0_iter15;
reg    ap_enable_reg_pp0_iter16;
reg    ap_enable_reg_pp0_iter17;
reg    ap_enable_reg_pp0_iter18;
reg    ap_enable_reg_pp0_iter19;
reg    ap_enable_reg_pp0_iter20;
reg    ap_enable_reg_pp0_iter21;
reg    ap_enable_reg_pp0_iter22;
reg    ap_enable_reg_pp0_iter23;
reg    ap_enable_reg_pp0_iter24;
reg    ap_enable_reg_pp0_iter25;
reg    ap_enable_reg_pp0_iter26;
reg    ap_enable_reg_pp0_iter27;
reg    ap_enable_reg_pp0_iter28;
reg    ap_enable_reg_pp0_iter29;
reg    ap_enable_reg_pp0_iter30;
reg    ap_enable_reg_pp0_iter31;
reg    ap_block_pp0_stage0_01001;
reg   [31:0] tmp_V_fu_132;
wire   [31:0] bound_fu_203_p0;
wire   [31:0] bound_fu_203_p1;
wire   [0:0] exitcond_i2_fu_220_p2;
wire   [31:0] iter_i_mid2_fu_225_p3;
wire   [23:0] p_2_i_fu_253_p3;
wire   [25:0] grp_fu_265_p0;
wire   [31:0] grp_fu_265_p2;
wire   [23:0] p_3_i_fu_271_p4;
wire   [0:0] tmp_41_i_fu_281_p2;
wire   [7:0] tmp_fu_287_p1;
reg    grp_fu_265_ce;
wire    ap_CS_fsm_state36;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [63:0] bound_fu_203_p00;
wire   [63:0] bound_fu_203_p10;
wire   [31:0] grp_fu_265_p00;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter32 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
#0 ap_enable_reg_pp0_iter11 = 1'b0;
#0 ap_enable_reg_pp0_iter12 = 1'b0;
#0 ap_enable_reg_pp0_iter13 = 1'b0;
#0 ap_enable_reg_pp0_iter14 = 1'b0;
#0 ap_enable_reg_pp0_iter15 = 1'b0;
#0 ap_enable_reg_pp0_iter16 = 1'b0;
#0 ap_enable_reg_pp0_iter17 = 1'b0;
#0 ap_enable_reg_pp0_iter18 = 1'b0;
#0 ap_enable_reg_pp0_iter19 = 1'b0;
#0 ap_enable_reg_pp0_iter20 = 1'b0;
#0 ap_enable_reg_pp0_iter21 = 1'b0;
#0 ap_enable_reg_pp0_iter22 = 1'b0;
#0 ap_enable_reg_pp0_iter23 = 1'b0;
#0 ap_enable_reg_pp0_iter24 = 1'b0;
#0 ap_enable_reg_pp0_iter25 = 1'b0;
#0 ap_enable_reg_pp0_iter26 = 1'b0;
#0 ap_enable_reg_pp0_iter27 = 1'b0;
#0 ap_enable_reg_pp0_iter28 = 1'b0;
#0 ap_enable_reg_pp0_iter29 = 1'b0;
#0 ap_enable_reg_pp0_iter30 = 1'b0;
#0 ap_enable_reg_pp0_iter31 = 1'b0;
end

kernel_4_sdiv_26ns_32ns_32_30_1 #(
    .ID( 1 ),
    .NUM_STAGE( 30 ),
    .din0_WIDTH( 26 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
kernel_4_sdiv_26ns_32ns_32_30_1_U1926(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_265_p0),
    .din1(tmp_V_fu_132),
    .ce(grp_fu_265_ce),
    .dout(grp_fu_265_p2)
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
        end else if ((1'b1 == ap_CS_fsm_state36)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3))) begin
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
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter11 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter11 <= ap_enable_reg_pp0_iter10;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter12 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter12 <= ap_enable_reg_pp0_iter11;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter13 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter13 <= ap_enable_reg_pp0_iter12;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter14 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter14 <= ap_enable_reg_pp0_iter13;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter15 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter15 <= ap_enable_reg_pp0_iter14;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter16 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter16 <= ap_enable_reg_pp0_iter15;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter17 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter17 <= ap_enable_reg_pp0_iter16;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter18 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter18 <= ap_enable_reg_pp0_iter17;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter19 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter19 <= ap_enable_reg_pp0_iter18;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter20 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter20 <= ap_enable_reg_pp0_iter19;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter21 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter21 <= ap_enable_reg_pp0_iter20;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter22 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter22 <= ap_enable_reg_pp0_iter21;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter23 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter23 <= ap_enable_reg_pp0_iter22;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter24 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter24 <= ap_enable_reg_pp0_iter23;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter25 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter25 <= ap_enable_reg_pp0_iter24;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter26 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter26 <= ap_enable_reg_pp0_iter25;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter27 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter27 <= ap_enable_reg_pp0_iter26;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter28 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter28 <= ap_enable_reg_pp0_iter27;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter29 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter29 <= ap_enable_reg_pp0_iter28;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter30 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter30 <= ap_enable_reg_pp0_iter29;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter31 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter31 <= ap_enable_reg_pp0_iter30;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter32 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter32 <= ap_enable_reg_pp0_iter31;
        end else if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_enable_reg_pp0_iter32 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_209_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_175 <= indvar_flatten_next_fu_214_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        indvar_flatten_reg_175 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_209_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        iter_i_reg_186 <= iter_fu_239_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        iter_i_reg_186 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        bound_reg_316 <= bound_fu_203_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten_reg_321 <= exitcond_flatten_fu_209_p2;
        exitcond_flatten_reg_321_pp0_iter1_reg <= exitcond_flatten_reg_321;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exitcond_flatten_reg_321_pp0_iter10_reg <= exitcond_flatten_reg_321_pp0_iter9_reg;
        exitcond_flatten_reg_321_pp0_iter11_reg <= exitcond_flatten_reg_321_pp0_iter10_reg;
        exitcond_flatten_reg_321_pp0_iter12_reg <= exitcond_flatten_reg_321_pp0_iter11_reg;
        exitcond_flatten_reg_321_pp0_iter13_reg <= exitcond_flatten_reg_321_pp0_iter12_reg;
        exitcond_flatten_reg_321_pp0_iter14_reg <= exitcond_flatten_reg_321_pp0_iter13_reg;
        exitcond_flatten_reg_321_pp0_iter15_reg <= exitcond_flatten_reg_321_pp0_iter14_reg;
        exitcond_flatten_reg_321_pp0_iter16_reg <= exitcond_flatten_reg_321_pp0_iter15_reg;
        exitcond_flatten_reg_321_pp0_iter17_reg <= exitcond_flatten_reg_321_pp0_iter16_reg;
        exitcond_flatten_reg_321_pp0_iter18_reg <= exitcond_flatten_reg_321_pp0_iter17_reg;
        exitcond_flatten_reg_321_pp0_iter19_reg <= exitcond_flatten_reg_321_pp0_iter18_reg;
        exitcond_flatten_reg_321_pp0_iter20_reg <= exitcond_flatten_reg_321_pp0_iter19_reg;
        exitcond_flatten_reg_321_pp0_iter21_reg <= exitcond_flatten_reg_321_pp0_iter20_reg;
        exitcond_flatten_reg_321_pp0_iter22_reg <= exitcond_flatten_reg_321_pp0_iter21_reg;
        exitcond_flatten_reg_321_pp0_iter23_reg <= exitcond_flatten_reg_321_pp0_iter22_reg;
        exitcond_flatten_reg_321_pp0_iter24_reg <= exitcond_flatten_reg_321_pp0_iter23_reg;
        exitcond_flatten_reg_321_pp0_iter25_reg <= exitcond_flatten_reg_321_pp0_iter24_reg;
        exitcond_flatten_reg_321_pp0_iter26_reg <= exitcond_flatten_reg_321_pp0_iter25_reg;
        exitcond_flatten_reg_321_pp0_iter27_reg <= exitcond_flatten_reg_321_pp0_iter26_reg;
        exitcond_flatten_reg_321_pp0_iter28_reg <= exitcond_flatten_reg_321_pp0_iter27_reg;
        exitcond_flatten_reg_321_pp0_iter29_reg <= exitcond_flatten_reg_321_pp0_iter28_reg;
        exitcond_flatten_reg_321_pp0_iter2_reg <= exitcond_flatten_reg_321_pp0_iter1_reg;
        exitcond_flatten_reg_321_pp0_iter30_reg <= exitcond_flatten_reg_321_pp0_iter29_reg;
        exitcond_flatten_reg_321_pp0_iter31_reg <= exitcond_flatten_reg_321_pp0_iter30_reg;
        exitcond_flatten_reg_321_pp0_iter3_reg <= exitcond_flatten_reg_321_pp0_iter2_reg;
        exitcond_flatten_reg_321_pp0_iter4_reg <= exitcond_flatten_reg_321_pp0_iter3_reg;
        exitcond_flatten_reg_321_pp0_iter5_reg <= exitcond_flatten_reg_321_pp0_iter4_reg;
        exitcond_flatten_reg_321_pp0_iter6_reg <= exitcond_flatten_reg_321_pp0_iter5_reg;
        exitcond_flatten_reg_321_pp0_iter7_reg <= exitcond_flatten_reg_321_pp0_iter6_reg;
        exitcond_flatten_reg_321_pp0_iter8_reg <= exitcond_flatten_reg_321_pp0_iter7_reg;
        exitcond_flatten_reg_321_pp0_iter9_reg <= exitcond_flatten_reg_321_pp0_iter8_reg;
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_V_101_reg_305 <= in_proc_2_iter_c_V_V_dout;
        tmp_V_105_reg_311 <= in_proc_2_iter_r_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_321_pp0_iter30_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_V_104_reg_349 <= tmp_V_104_fu_291_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_reg_330 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_V_fu_132 <= sum_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_209_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_i_reg_330 <= tmp_i_fu_233_p2;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_209_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state36)) begin
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
    if (((ap_enable_reg_pp0_iter32 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter31 == 1'b0) & (ap_enable_reg_pp0_iter30 == 1'b0) & (ap_enable_reg_pp0_iter29 == 1'b0) & (ap_enable_reg_pp0_iter28 == 1'b0) & (ap_enable_reg_pp0_iter27 == 1'b0) & (ap_enable_reg_pp0_iter26 == 1'b0) & (ap_enable_reg_pp0_iter25 == 1'b0) & (ap_enable_reg_pp0_iter24 == 1'b0) & (ap_enable_reg_pp0_iter23 == 1'b0) & (ap_enable_reg_pp0_iter22 == 1'b0) & (ap_enable_reg_pp0_iter21 == 1'b0) & (ap_enable_reg_pp0_iter20 == 1'b0) & (ap_enable_reg_pp0_iter19 == 1'b0) & (ap_enable_reg_pp0_iter18 == 1'b0) & (ap_enable_reg_pp0_iter17 == 1'b0) & (ap_enable_reg_pp0_iter16 == 1'b0) & (ap_enable_reg_pp0_iter15 == 1'b0) & (ap_enable_reg_pp0_iter14 == 1'b0) & (ap_enable_reg_pp0_iter13 == 1'b0) & (ap_enable_reg_pp0_iter12 == 1'b0) & (ap_enable_reg_pp0_iter11 == 1'b0) & (ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state36)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        grp_fu_265_ce = 1'b1;
    end else begin
        grp_fu_265_ce = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        in_proc_2_V_V_blk_n = in_proc_2_V_V_empty_n;
    end else begin
        in_proc_2_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_proc_2_V_V_read = 1'b1;
    end else begin
        in_proc_2_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_2_iter_c_V_V_blk_n = in_proc_2_iter_c_V_V_empty_n;
    end else begin
        in_proc_2_iter_c_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_2_iter_c_V_V_read = 1'b1;
    end else begin
        in_proc_2_iter_c_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_2_iter_r_V_V_blk_n = in_proc_2_iter_r_V_V_empty_n;
    end else begin
        in_proc_2_iter_r_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_proc_2_iter_r_V_V_read = 1'b1;
    end else begin
        in_proc_2_iter_r_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_2_iter_c_V_s_blk_n = in_write_2_iter_c_V_s_full_n;
    end else begin
        in_write_2_iter_c_V_s_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        in_write_2_iter_c_V_s_write = 1'b1;
    end else begin
        in_write_2_iter_c_V_s_write = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter32 == 1'b1))) begin
        in_write_V_V_blk_n = in_write_V_V_full_n;
    end else begin
        in_write_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (ap_enable_reg_pp0_iter32 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        in_write_V_V_write = 1'b1;
    end else begin
        in_write_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_i_reg_330 == 1'd1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        sum_V_V_blk_n = sum_V_V_empty_n;
    end else begin
        sum_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((tmp_i_reg_330 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        sum_V_V_read = 1'b1;
    end else begin
        sum_V_V_read = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((exitcond_flatten_fu_209_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1)) & ~((ap_enable_reg_pp0_iter31 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter32 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter31 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter32 == 1'b1)) | ((exitcond_flatten_fu_209_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state36;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state36 : begin
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

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (in_write_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter32 == 1'b1)) | ((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (in_proc_2_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((tmp_i_reg_330 == 1'd1) & (sum_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (in_write_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter32 == 1'b1)) | ((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (in_proc_2_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((tmp_i_reg_330 == 1'd1) & (sum_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (in_write_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter32 == 1'b1)) | ((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (in_proc_2_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((tmp_i_reg_330 == 1'd1) & (sum_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (in_write_2_iter_c_V_s_full_n == 1'b0) | (in_proc_2_iter_r_V_V_empty_n == 1'b0) | (in_proc_2_iter_c_V_V_empty_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state10_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter10 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage0_iter11 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage0_iter12 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage0_iter13 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp0_stage0_iter14 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp0_stage0_iter15 = ~(1'b1 == 1'b1);

assign ap_block_state19_pp0_stage0_iter16 = ~(1'b1 == 1'b1);

assign ap_block_state20_pp0_stage0_iter17 = ~(1'b1 == 1'b1);

assign ap_block_state21_pp0_stage0_iter18 = ~(1'b1 == 1'b1);

assign ap_block_state22_pp0_stage0_iter19 = ~(1'b1 == 1'b1);

assign ap_block_state23_pp0_stage0_iter20 = ~(1'b1 == 1'b1);

assign ap_block_state24_pp0_stage0_iter21 = ~(1'b1 == 1'b1);

assign ap_block_state25_pp0_stage0_iter22 = ~(1'b1 == 1'b1);

assign ap_block_state26_pp0_stage0_iter23 = ~(1'b1 == 1'b1);

assign ap_block_state27_pp0_stage0_iter24 = ~(1'b1 == 1'b1);

assign ap_block_state28_pp0_stage0_iter25 = ~(1'b1 == 1'b1);

assign ap_block_state29_pp0_stage0_iter26 = ~(1'b1 == 1'b1);

assign ap_block_state30_pp0_stage0_iter27 = ~(1'b1 == 1'b1);

assign ap_block_state31_pp0_stage0_iter28 = ~(1'b1 == 1'b1);

assign ap_block_state32_pp0_stage0_iter29 = ~(1'b1 == 1'b1);

assign ap_block_state33_pp0_stage0_iter30 = ~(1'b1 == 1'b1);

assign ap_block_state34_pp0_stage0_iter31 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state35_pp0_stage0_iter32 = ((exitcond_flatten_reg_321_pp0_iter31_reg == 1'd0) & (in_write_V_V_full_n == 1'b0));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = ((tmp_i_reg_330 == 1'd1) & (sum_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state5_pp0_stage0_iter2 = ((exitcond_flatten_reg_321_pp0_iter1_reg == 1'd0) & (in_proc_2_V_V_empty_n == 1'b0));
end

assign ap_block_state6_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign bound_fu_203_p0 = bound_fu_203_p00;

assign bound_fu_203_p00 = tmp_V_101_reg_305;

assign bound_fu_203_p1 = bound_fu_203_p10;

assign bound_fu_203_p10 = tmp_V_105_reg_311;

assign bound_fu_203_p2 = (bound_fu_203_p0 * bound_fu_203_p1);

assign exitcond_flatten_fu_209_p2 = ((indvar_flatten_reg_175 == bound_reg_316) ? 1'b1 : 1'b0);

assign exitcond_i2_fu_220_p2 = ((iter_i_reg_186 == tmp_V_101_reg_305) ? 1'b1 : 1'b0);

assign grp_fu_265_p0 = grp_fu_265_p00;

assign grp_fu_265_p00 = p_2_i_fu_253_p3;

assign in_write_2_iter_c_V_s_din = in_proc_2_iter_c_V_V_dout;

assign in_write_V_V_din = tmp_V_104_reg_349;

assign indvar_flatten_next_fu_214_p2 = (indvar_flatten_reg_175 + 64'd1);

assign iter_fu_239_p2 = (32'd1 + iter_i_mid2_fu_225_p3);

assign iter_i_mid2_fu_225_p3 = ((exitcond_i2_fu_220_p2[0:0] === 1'b1) ? 32'd0 : iter_i_reg_186);

assign p_2_i_fu_253_p3 = {{in_proc_2_V_V_dout}, {8'd0}};

assign p_3_i_fu_271_p4 = {{grp_fu_265_p2[31:8]}};

assign tmp_41_i_fu_281_p2 = ((p_3_i_fu_271_p4 == 24'd0) ? 1'b1 : 1'b0);

assign tmp_V_104_fu_291_p3 = ((tmp_41_i_fu_281_p2[0:0] === 1'b1) ? tmp_fu_287_p1 : 8'd255);

assign tmp_fu_287_p1 = grp_fu_265_p2[7:0];

assign tmp_i_fu_233_p2 = ((iter_i_mid2_fu_225_p3 == 32'd0) ? 1'b1 : 1'b0);

endmodule //softmax_divide_preci
