// ==============================================================
// File generated on Mon Feb 20 12:11:18 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __kernel_29_udiv_32s_32ns_32_36_seq_1__HH__
#define __kernel_29_udiv_32s_32ns_32_36_seq_1__HH__
#include "ACMP_udiv_seq.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(kernel_29_udiv_32s_32ns_32_36_seq_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_logic >   start;
    sc_core::sc_out< sc_dt::sc_logic >   done;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_udiv_seq<ID, 36, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_udiv_seq_U;

    SC_CTOR(kernel_29_udiv_32s_32ns_32_36_seq_1):  ACMP_udiv_seq_U ("ACMP_udiv_seq_U") {
        ACMP_udiv_seq_U.clk(clk);
        ACMP_udiv_seq_U.reset(reset);
        ACMP_udiv_seq_U.ce(ce);
        ACMP_udiv_seq_U.din0(din0);
        ACMP_udiv_seq_U.din1(din1);
        ACMP_udiv_seq_U.dout(dout);
        ACMP_udiv_seq_U.start(start);
        ACMP_udiv_seq_U.done(done);

    }

};

#endif //
