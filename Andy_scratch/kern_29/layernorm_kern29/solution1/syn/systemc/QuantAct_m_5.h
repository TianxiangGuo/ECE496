// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_5_H__
#define __QuantAct_m_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_5_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_5_ram) {
        ram[0] = "0b1011001001011110111111011000000";
        ram[1] = "0b1010000001110110011011001101000";
        ram[2] = "0b1010101010000100111100011001110";
        ram[3] = "0b1010000011101010000001001001011";
        ram[4] = "0b1010110110011011110100110010001";
        ram[5] = "0b1011011011010110111110100011100";
        ram[6] = "0b1010111001000100110011010110110";
        ram[7] = "0b1011001110110101001010001011101";
        ram[8] = "0b1011110101001011001010000110001";
        ram[9] = "0b1010110101000011001000111100000";
        ram[10] = "0b1010111000000110010111001111000";
        ram[11] = "0b1010100000000110011010011011101";
        ram[12] = "0b1001100001001011100100111001101";
        ram[13] = "0b1001101111001100001010010101011";
        ram[14] = "0b1011110100100011011000000010111";
        ram[15] = "0b1100011011001110100111010011011";
        ram[16] = "0b1011100101000110110111111100110";
        ram[17] = "0b1010011000001101000001000000010";
        ram[18] = "0b1011001000101100011010011110000";
        ram[19] = "0b1011001111001110100011011010001";
        ram[20] = "0b1001110011000101110000000111000";
        ram[21] = "0b1011100000101011111100001011100";
        ram[22] = "0b1010110100000101010100001100011";
        ram[23] = "0b1100001010100100000101011001001";
        ram[24] = "0b1011011001010011111111111111100";
        ram[25] = "0b1010100100110000010001010111010";
        ram[26] = "0b1011100100100101111000111100111";
        ram[27] = "0b1011010000010010110010000000001";
        ram[28] = "0b1001001001110001011010001111110";
        ram[29] = "0b1010100010000100011011110000101";
        ram[30] = "0b1010010111111011001011000001111";
        ram[31] = "0b1001110100111110100001111011110";
        ram[32] = "0b1011011100100001100000011000100";
        ram[33] = "0b1000111011001010100000101000111";
        ram[34] = "0b1011001010111001110101110101011";
        ram[35] = "0b1010101101010100001011010111100";
        ram[36] = "0b1111100010100001011110010100101";
        ram[37] = "0b1010011011000100101110110001001";
        ram[38] = "0b1011000111111001111101110000010";
        ram[39] = "0b1001100101000111001110010110110";
        ram[40] = "0b1010000001010110000000101111111";
        ram[41] = "0b1011110111011001010100000101011";
        ram[42] = "0b1011100110000001010000011111010";
        ram[43] = "0b1011100010111111111101101011101";
        ram[44] = "0b1011001010000001110111010110000";
        ram[45] = "0b1011010010111111100100000101110";
        ram[46] = "0b1011110100001101000111011111100";
        ram[47] = "0b1010001000100110010001000001010";


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


SC_MODULE(QuantAct_m_5) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_5_ram* meminst;


SC_CTOR(QuantAct_m_5) {
meminst = new QuantAct_m_5_ram("QuantAct_m_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_5() {
    delete meminst;
}


};//endmodule
#endif
