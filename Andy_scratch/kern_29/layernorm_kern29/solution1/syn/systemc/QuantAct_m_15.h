// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_15_H__
#define __QuantAct_m_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_15_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_15_ram) {
        ram[0] = "0b1010111110011111001111010010101";
        ram[1] = "0b1011011101100011010101001111100";
        ram[2] = "0b1001000100110000000110110101110";
        ram[3] = "0b1011110111011011111101010000010";
        ram[4] = "0b1011000110001010011111000001000";
        ram[5] = "0b1100010011011000001110111111001";
        ram[6] = "0b1011011111010001010110101110111";
        ram[7] = "0b1010001000110110010011000100001";
        ram[8] = "0b1010001011000100001001100001010";
        ram[9] = "0b1100010111011100000010001000001";
        ram[10] = "0b1010001010101101100001101001111";
        ram[11] = "0b1010000100100001010100010100100";
        ram[12] = "0b1010100110001100000101010000001";
        ram[13] = "0b1010010001010111011101010010000";
        ram[14] = "0b1001110001011011010000101001101";
        ram[15] = "0b1010101010011000111011000110010";
        ram[16] = "0b1010010000111011010111000110110";
        ram[17] = "0b1100100100010100000000110000001";
        ram[18] = "0b1010100100010111100010101010101";
        ram[19] = "0b1001100011001010000010101111010";
        ram[20] = "0b1001100010011010111010000010011";
        ram[21] = "0b1001110000100111001010100011110";
        ram[22] = "0b1010110101000101101100110000000";
        ram[23] = "0b1000111011010111100111000101011";
        ram[24] = "0b1011000001001110100010010111000";
        ram[25] = "0b1001111101101100100011111100101";
        ram[26] = "0b1010010100100110011100011111101";
        ram[27] = "0b1000111011010111011001000100001";
        ram[28] = "0b1010100111001101101011010011101";
        ram[29] = "0b1010001010011110100000110100101";
        ram[30] = "0b1010110011101001011111000001111";
        ram[31] = "0b1011011111010000001100000100100";
        ram[32] = "0b1010100011011011010101100100010";
        ram[33] = "0b1010100100100011110110001111000";
        ram[34] = "0b1011111100010011111110110101011";
        ram[35] = "0b1010000010100101111110010111011";
        ram[36] = "0b1010010010000111000000001000011";
        ram[37] = "0b1010011111101010100100101000110";
        ram[38] = "0b1010111000111001000010011100001";
        ram[39] = "0b1010000111011101110000010110101";
        ram[40] = "0b1100100100110100111110110011100";
        ram[41] = "0b1011011001101000001101001011100";
        ram[42] = "0b1110100101100001111000011100100";
        ram[43] = "0b1110100111101101110111100000011";
        ram[44] = "0b1010000100101100111011010100000";
        ram[45] = "0b1011100110101011110110000110101";
        ram[46] = "0b1011010110001001101011000111001";
        ram[47] = "0b1011010100100001001101111010101";


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


SC_MODULE(QuantAct_m_15) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_15_ram* meminst;


SC_CTOR(QuantAct_m_15) {
meminst = new QuantAct_m_15_ram("QuantAct_m_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_15() {
    delete meminst;
}


};//endmodule
#endif
