// ==============================================================
// File generated on Wed Dec 28 18:55:55 -0500 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module softmax_mul_32ns_bkb_MulnS_0(clk, ce, a, b, p);
input clk;
input ce;
input [32 - 1 : 0] a;
input signed [64 - 1 : 0] b;
output[95 - 1 : 0] p;
reg signed [95 - 1 : 0] p;
wire signed [95 - 1 : 0] tmp_product;

assign tmp_product = $signed({1'b0, a}) * $signed(b);
always @ (posedge clk) begin
    if (ce) begin
        p <= tmp_product;
    end
end
endmodule
`timescale 1 ns / 1 ps
module softmax_mul_32ns_bkb(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



softmax_mul_32ns_bkb_MulnS_0 softmax_mul_32ns_bkb_MulnS_0_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

