// ==============================================================
// File generated on Mon Feb 20 12:11:18 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1ns/1ps

module kernel_29_mux_42_31_1_1 #(
parameter
    ID                = 0,
    NUM_STAGE         = 1,
    din0_WIDTH       = 32,
    din1_WIDTH       = 32,
    din2_WIDTH       = 32,
    din3_WIDTH       = 32,
    din4_WIDTH         = 32,
    dout_WIDTH            = 32
)(
    input  [30 : 0]     din0,
    input  [30 : 0]     din1,
    input  [30 : 0]     din2,
    input  [30 : 0]     din3,
    input  [1 : 0]    din4,
    output [30 : 0]   dout);

// puts internal signals
wire [1 : 0]     sel;
// level 1 signals
wire [30 : 0]         mux_1_0;
wire [30 : 0]         mux_1_1;
// level 2 signals
wire [30 : 0]         mux_2_0;

assign sel = din4;

// Generate level 1 logic
assign mux_1_0 = (sel[0] == 0)? din0 : din1;
assign mux_1_1 = (sel[0] == 0)? din2 : din3;

// Generate level 2 logic
assign mux_2_0 = (sel[1] == 0)? mux_1_0 : mux_1_1;

// output logic
assign dout = mux_2_0;

endmodule
