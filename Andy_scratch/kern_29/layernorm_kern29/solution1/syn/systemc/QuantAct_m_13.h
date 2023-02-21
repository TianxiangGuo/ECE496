// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_13_H__
#define __QuantAct_m_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_13_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_13_ram) {
        ram[0] = "0b1010111001101110101001000101101";
        ram[1] = "0b1010111001111100111011010011000";
        ram[2] = "0b1001101001011010000001110110111";
        ram[3] = "0b1010000011000010000101000000111";
        ram[4] = "0b1000101111000110010101111111100";
        ram[5] = "0b1100001001111010000000001110011";
        ram[6] = "0b1001110110111111100000011011111";
        ram[7] = "0b1011010011001111100111101101011";
        ram[8] = "0b1010011001110110001111000001110";
        ram[9] = "0b1001000010001110101000010111101";
        ram[10] = "0b1001100010000000000111010110000";
        ram[11] = "0b1010101100110000111001010000001";
        ram[12] = "0b1010101011110000010101000010011";
        ram[13] = "0b1000100010110111011101100001111";
        ram[14] = "0b1010000011111000111100011101111";
        ram[15] = "0b1010011100110100101010011111010";
        ram[16] = "0b1110011101001110001100001001000";
        ram[17] = "0b1001110000110000111101011101101";
        ram[18] = "0b1010110111110111001010011011100";
        ram[19] = "0b1011011000011111101101110001100";
        ram[20] = "0b1011110111011111011011101010100";
        ram[21] = "0b1011000010001110100000001000111";
        ram[22] = "0b1010101111111010011101010011100";
        ram[23] = "0b1010110111101110010010110000000";
        ram[24] = "0b1011001101101100110100001110100";
        ram[25] = "0b1010111011111100000011001100010";
        ram[26] = "0b1010001110101000001101000011010";
        ram[27] = "0b1001111100100110100101001101001";
        ram[28] = "0b1011010001101101011000000101000";
        ram[29] = "0b1011010000111001011010010101100";
        ram[30] = "0b1010110001101101100111000011011";
        ram[31] = "0b1010100101110000001011000011000";
        ram[32] = "0b1001110010010001000101111100101";
        ram[33] = "0b1011010100001001001101110110000";
        ram[34] = "0b1011001110111010110000000011011";
        ram[35] = "0b1001111000100100111110000110000";
        ram[36] = "0b1001111111100001010001001111110";
        ram[37] = "0b1011000000011100111000000011001";
        ram[38] = "0b1010001101000010111110001100110";
        ram[39] = "0b1001101100010101011001000011101";
        ram[40] = "0b1100100101001000101111000000101";
        ram[41] = "0b1001111100010001011111010100000";
        ram[42] = "0b1010101000010100110000100111011";
        ram[43] = "0b1011001010110000100110100001110";
        ram[44] = "0b1001100010100000000011000101011";
        ram[45] = "0b1011010000111000101111001011011";
        ram[46] = "0b1010011110111001110110110100000";
        ram[47] = "0b1100001000101100100100001101110";


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


SC_MODULE(QuantAct_m_13) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_13_ram* meminst;


SC_CTOR(QuantAct_m_13) {
meminst = new QuantAct_m_13_ram("QuantAct_m_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_13() {
    delete meminst;
}


};//endmodule
#endif
