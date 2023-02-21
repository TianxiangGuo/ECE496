// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_8_H__
#define __QuantAct_m_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_8_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_8_ram) {
        ram[0] = "0b1010110110111101111011100110111";
        ram[1] = "0b1011101001100111111010101010101";
        ram[2] = "0b1011000000010000100011110110011";
        ram[3] = "0b1111011010100110000000100101011";
        ram[4] = "0b1101100111111110110011001110000";
        ram[5] = "0b1001100101000100001010011010001";
        ram[6] = "0b1010100010010101110101000100010";
        ram[7] = "0b1010001101111011001100110000011";
        ram[8] = "0b1011010010001000101001010101001";
        ram[9] = "0b1010110100101100010100110010010";
        ram[10] = "0b1010101001100010110010011011011";
        ram[11] = "0b1001111010110010110010010110001";
        ram[12] = "0b1001111010010010101101101000001";
        ram[13] = "0b1001101111000000111100001110110";
        ram[14] = "0b1011101111101000011000100000010";
        ram[15] = "0b1010000010110010111011010111001";
        ram[16] = "0b1010100110000011101101011001000";
        ram[17] = "0b1010000011100100001110010111000";
        ram[18] = "0b1010110101111001101010110011110";
        ram[19] = "0b1010101010001101011111010010100";
        ram[20] = "0b1011010011111101110000001001010";
        ram[21] = "0b1010111111100110101010101001110";
        ram[22] = "0b1011001010010101000010011000000";
        ram[23] = "0b1001010110010111000111110011100";
        ram[24] = "0b1011010101100000111111011010010";
        ram[25] = "0b1011101101001000101100000100110";
        ram[26] = "0b1011000111110110011111101010010";
        ram[27] = "0b1100001111001101110011001100001";
        ram[28] = "0b1010111111101100111010000110111";
        ram[29] = "0b1001110100100101011111110111001";
        ram[30] = "0b1010100100110101111101100010010";
        ram[31] = "0b1001100011100100110100110011011";
        ram[32] = "0b1010110101101110011101011111100";
        ram[33] = "0b1010011111000111001110000111001";
        ram[34] = "0b1010111110110011000111000011101";
        ram[35] = "0b1000110100001101101001010000101";
        ram[36] = "0b1010100010110101101111011000111";
        ram[37] = "0b1010110001101111110010111011001";
        ram[38] = "0b1001111111000000010100111011010";
        ram[39] = "0b1010101011100010100100100010011";
        ram[40] = "0b1010010100101110000111100111111";
        ram[41] = "0b1110011110011101111100001101101";
        ram[42] = "0b1010010101010011011001111101001";
        ram[43] = "0b1011000010000001000110101000101";
        ram[44] = "0b1011001010011001011101100101011";
        ram[45] = "0b1011001011010010110011000001011";
        ram[46] = "0b1010101011110011100100111101001";
        ram[47] = "0b1001101000011100101000000011001";


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


SC_MODULE(QuantAct_m_8) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_8_ram* meminst;


SC_CTOR(QuantAct_m_8) {
meminst = new QuantAct_m_8_ram("QuantAct_m_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_8() {
    delete meminst;
}


};//endmodule
#endif
