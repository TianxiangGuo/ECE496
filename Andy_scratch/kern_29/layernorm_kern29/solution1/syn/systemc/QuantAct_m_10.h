// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_10_H__
#define __QuantAct_m_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_10_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 31;
  static const unsigned AddressRange = 48;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(QuantAct_m_10_ram) {
        ram[0] = "0b1100000000111111011110101010111";
        ram[1] = "0b1011100000011001011100010011101";
        ram[2] = "0b1010011010100101101010111100100";
        ram[3] = "0b1010011101100101010010010101000";
        ram[4] = "0b1010010011001001001101100100000";
        ram[5] = "0b1011110010000111001111000100001";
        ram[6] = "0b1011010010011001101101100001111";
        ram[7] = "0b1011111010010111101101111110001";
        ram[8] = "0b1010000010000011000000100100100";
        ram[9] = "0b1011100001010011100100001001101";
        ram[10] = "0b1010101110010010100000001111100";
        ram[11] = "0b1011000010110110000011011000100";
        ram[12] = "0b1011101010101101001000111001011";
        ram[13] = "0b1011010100101001010111111010101";
        ram[14] = "0b1011010000101011111000000000101";
        ram[15] = "0b1011010100011110011001000101110";
        ram[16] = "0b1010000100110110110000011011000";
        ram[17] = "0b1011100110011001110110101011100";
        ram[18] = "0b1001101011000010001110101010111";
        ram[19] = "0b1010001001111101111101100011000";
        ram[20] = "0b1110111000010110001110001011001";
        ram[21] = "0b1010110100011111101100011011010";
        ram[22] = "0b1010001100011101000011100010110";
        ram[23] = "0b1010111111111100110111011011010";
        ram[24] = "0b1010111111100101001000010111011";
        ram[25] = "0b1010100101010111010100110010100";
        ram[26] = "0b1000000100100100011100001111101";
        ram[27] = "0b1011010100011011110111110011000";
        ram[28] = "0b1011101100000011110100001101100";
        ram[29] = "0b1010101111110101111101010111101";
        ram[30] = "0b1010011101101101101101000001101";
        ram[31] = "0b1001100100000001000001010001111";
        ram[32] = "0b1010101100001000111001000001100";
        ram[33] = "0b1011001010110101111111001010110";
        ram[34] = "0b1011001000110110101111101101100";
        ram[35] = "0b1000110111011110111101000000100";
        ram[36] = "0b1011110000011100001101101111100";
        ram[37] = "0b1010100010000100110110001110010";
        ram[38] = "0b1100000011101110001101100000101";
        ram[39] = "0b1010110000010100011101111010001";
        ram[40] = "0b1010110000101110110110011101001";
        ram[41] = "0b1010101001010100001111001101010";
        ram[42] = "0b1010111110011001101101001100111";
        ram[43] = "0b1010010101111000001011110101101";
        ram[44] = "0b1010111110001010111111100101011";
        ram[45] = "0b1010011110010100111011110010110";
        ram[46] = "0b1010100011111111110011010010100";
        ram[47] = "0b1011110110101101101100010100000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(QuantAct_m_10) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_10_ram* meminst;


SC_CTOR(QuantAct_m_10) {
meminst = new QuantAct_m_10_ram("QuantAct_m_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_10() {
    delete meminst;
}


};//endmodule
#endif
