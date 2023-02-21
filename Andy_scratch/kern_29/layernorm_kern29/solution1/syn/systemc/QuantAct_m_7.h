// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_7_H__
#define __QuantAct_m_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_7_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_7_ram) {
        ram[0] = "0b1011001001111100100011011011011";
        ram[1] = "0b1010110011111010100110000100001";
        ram[2] = "0b1010101111110101001111101100001";
        ram[3] = "0b1001101000010001100000001111101";
        ram[4] = "0b1010101001100101100111111000100";
        ram[5] = "0b1011001011100110100010100110001";
        ram[6] = "0b1011001110111000011001011110001";
        ram[7] = "0b1010110000001111001110000101110";
        ram[8] = "0b1010001100101111011010010001111";
        ram[9] = "0b1010101001110011010110001011100";
        ram[10] = "0b1010101100101010110001010110111";
        ram[11] = "0b1010000101001101111011010000011";
        ram[12] = "0b1000111111111011011101001101100";
        ram[13] = "0b1011100000110110001011110000001";
        ram[14] = "0b1011101001001001100100110101101";
        ram[15] = "0b1100010110111000111100010011001";
        ram[16] = "0b1010001111110110100101100010111";
        ram[17] = "0b1010100010110111110101010001101";
        ram[18] = "0b1011001111000001111111011101011";
        ram[19] = "0b1001110100011100100111100011011";
        ram[20] = "0b1011011101100101010001000011001";
        ram[21] = "0b1001100110010100100000010010001";
        ram[22] = "0b1011001011001001111110001011011";
        ram[23] = "0b1001111100001100110010110001110";
        ram[24] = "0b1010010001110110101001100111000";
        ram[25] = "0b1010001100010000101001000010111";
        ram[26] = "0b1001111001000001110001110010101";
        ram[27] = "0b1010101000101011110111000010100";
        ram[28] = "0b1001010101101100010001110011101";
        ram[29] = "0b1001111001101101001101010001110";
        ram[30] = "0b1000111101110111110010100010111";
        ram[31] = "0b1001100111000110101100100111100";
        ram[32] = "0b1010110100100010010101111010010";
        ram[33] = "0b1100100101110010010110100100001";
        ram[34] = "0b1110110111110010110111010101010";
        ram[35] = "0b1010011011101111100111111010101";
        ram[36] = "0b1100010010100110010010011001111";
        ram[37] = "0b1001101011000110011110110110101";
        ram[38] = "0b1001111010100011111101001010110";
        ram[39] = "0b1000011000111010100101010000000";
        ram[40] = "0b1011100100100111111011000011101";
        ram[41] = "0b1011101011000111001100000001010";
        ram[42] = "0b1100000000110100100101001100111";
        ram[43] = "0b1011001111100110111101101000010";
        ram[44] = "0b1111110001100010011100011110010";
        ram[45] = "0b1010110110001000110000010111100";
        ram[46] = "0b1010010001110110010011100011110";
        ram[47] = "0b1010100011100000101011101100000";


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


SC_MODULE(QuantAct_m_7) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_7_ram* meminst;


SC_CTOR(QuantAct_m_7) {
meminst = new QuantAct_m_7_ram("QuantAct_m_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_7() {
    delete meminst;
}


};//endmodule
#endif
