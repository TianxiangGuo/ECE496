// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_14_H__
#define __QuantAct_m_14_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_14_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_14_ram) {
        ram[0] = "0b1011100111110110010001010100010";
        ram[1] = "0b1001110001110100000001110111100";
        ram[2] = "0b1100001100100100001011101010100";
        ram[3] = "0b1100001000001000011010000001101";
        ram[4] = "0b1010110010000111101101000000110";
        ram[5] = "0b1010001111010110111101110011110";
        ram[6] = "0b1000101111011100110000011110000";
        ram[7] = "0b1010110000111100010110010000101";
        ram[8] = "0b1010000100001000011010100110010";
        ram[9] = "0b1010110101100001000011010110111";
        ram[10] = "0b1010011111100100001111100000110";
        ram[11] = "0b1010101001101111001110001100000";
        ram[12] = "0b1011101110011111000100011111010";
        ram[13] = "0b1011100110000001011101011001111";
        ram[14] = "0b1010001111010011011110011101001";
        ram[15] = "0b1100011111010010101011011101001";
        ram[16] = "0b1010111000101110000100111000000";
        ram[17] = "0b1001100000101101111111011011011";
        ram[18] = "0b1011010101011100011101100101011";
        ram[19] = "0b1010001110011000000010100000000";
        ram[20] = "0b1111100110011111100011101101111";
        ram[21] = "0b1111111111001011101100110101100";
        ram[22] = "0b1011110010110101100011001010000";
        ram[23] = "0b1010100110100011000101011000000";
        ram[24] = "0b1011010000100000100001100011110";
        ram[25] = "0b1011001101010011110010111100010";
        ram[26] = "0b1010110100000110111010111001001";
        ram[27] = "0b1011101001100111010100110111010";
        ram[28] = "0b1010010001010101001011000111000";
        ram[29] = "0b1100111101101010100000101011100";
        ram[30] = "0b1101001110101101101011100111100";
        ram[31] = "0b1010000011100010101000100110110";
        ram[32] = "0b1011011111001001001011011110010";
        ram[33] = "0b1010101111101110100010010011110";
        ram[34] = "0b1010110011111110010101011111000";
        ram[35] = "0b1010101011001110001111110010100";
        ram[36] = "0b1000010100111100111000111001101";
        ram[37] = "0b1011110011100010000110001001111";
        ram[38] = "0b1001000110100001111001101001000";
        ram[39] = "0b1011000000001101111100010000011";
        ram[40] = "0b1001111111001111111001101011000";
        ram[41] = "0b1001010100011011111000110010000";
        ram[42] = "0b1101101101100100100111001011110";
        ram[43] = "0b1011011001101100010000001000100";
        ram[44] = "0b1011011000101100100100111100001";
        ram[45] = "0b1011000101011101110110111110101";
        ram[46] = "0b1011101001001010101100010110011";
        ram[47] = "0b1010110001110011010101000111010";


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


SC_MODULE(QuantAct_m_14) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_14_ram* meminst;


SC_CTOR(QuantAct_m_14) {
meminst = new QuantAct_m_14_ram("QuantAct_m_14_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_14() {
    delete meminst;
}


};//endmodule
#endif
