// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_1_H__
#define __QuantAct_m_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_1_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_1_ram) {
        ram[0] = "0b1011001101101001001010011110100";
        ram[1] = "0b1010011110010011011010011100110";
        ram[2] = "0b1010110010001010010111110000100";
        ram[3] = "0b1010011111000010010100111110011";
        ram[4] = "0b1011000110111110101001101011010";
        ram[5] = "0b1011011100100100100100000000111";
        ram[6] = "0b1011101100100011010101000001000";
        ram[7] = "0b1011010110001001101110010000110";
        ram[8] = "0b1110000111010100101010101111000";
        ram[9] = "0b1111010001010111100101000011110";
        ram[10] = "0b1010011001011010111001101011100";
        ram[11] = "0b1010000100110110110000000110111";
        ram[12] = "0b1100001111011011011010001111011";
        ram[13] = "0b1011101010101000001110001011110";
        ram[14] = "0b1011011101011100000111000110010";
        ram[15] = "0b1011100010110100100001001111100";
        ram[16] = "0b1000011000101000111100101010101";
        ram[17] = "0b1011010011010111101011011010001";
        ram[18] = "0b1010000011110101001101110101011";
        ram[19] = "0b1010001100100001001101101111100";
        ram[20] = "0b1011110110010000101001010101100";
        ram[21] = "0b1010100110010011100010110101011";
        ram[22] = "0b1011000111110101001000000101010";
        ram[23] = "0b1010101001111000000000100000101";
        ram[24] = "0b1010110111111101001010110000111";
        ram[25] = "0b1011011100111001000100011010110";
        ram[26] = "0b1010111010000000110001010101011";
        ram[27] = "0b1010100000000001100010110111101";
        ram[28] = "0b1010101100100110010001000110111";
        ram[29] = "0b1010110101001010011111111001110";
        ram[30] = "0b1010010011010010111011000111001";
        ram[31] = "0b1010111000000100110100010100010";
        ram[32] = "0b1001111010011010010011001111100";
        ram[33] = "0b1011111011001001011011011011101";
        ram[34] = "0b1010101011101000001110100000010";
        ram[35] = "0b1101010101010100110101010000010";
        ram[36] = "0b1011011111010010000001111001000";
        ram[37] = "0b1001011110101000000001000001000";
        ram[38] = "0b1101011111101001111111000101110";
        ram[39] = "0b1011010101111101001011111000110";
        ram[40] = "0b1011100111011100101110111101001";
        ram[41] = "0b1001100101100110001110110111101";
        ram[42] = "0b1001011010011110101110011101100";
        ram[43] = "0b1011001011101010111011100110100";
        ram[44] = "0b1100001001011001111001100111100";
        ram[45] = "0b1001100101101111110111001110001";
        ram[46] = "0b1010011010111000111101001110010";
        ram[47] = "0b1010001001111010110100100011110";


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


SC_MODULE(QuantAct_m_1) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_1_ram* meminst;


SC_CTOR(QuantAct_m_1) {
meminst = new QuantAct_m_1_ram("QuantAct_m_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_1() {
    delete meminst;
}


};//endmodule
#endif
