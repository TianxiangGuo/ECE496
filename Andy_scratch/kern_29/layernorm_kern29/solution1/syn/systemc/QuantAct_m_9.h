// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_9_H__
#define __QuantAct_m_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_9_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_9_ram) {
        ram[0] = "0b1001110100001111110101011011011";
        ram[1] = "0b1010101000000101001000000101101";
        ram[2] = "0b1011100101000010110011011011000";
        ram[3] = "0b1011110000001011001111110101111";
        ram[4] = "0b1010100000101111110100001000000";
        ram[5] = "0b1010110100000111001010010101000";
        ram[6] = "0b1011110011100010101110001010011";
        ram[7] = "0b1001100100000001101011000001010";
        ram[8] = "0b1010110010010001101110000101111";
        ram[9] = "0b1010100001010001010001111111110";
        ram[10] = "0b1011110001001100110100101000110";
        ram[11] = "0b1011011111001111100111110110000";
        ram[12] = "0b1001100101001011000001101101101";
        ram[13] = "0b1100111000100111110111100101100";
        ram[14] = "0b1011000100000000101001100111110";
        ram[15] = "0b1011111110001010001100110110001";
        ram[16] = "0b1011000110101111000011000010100";
        ram[17] = "0b1011101110001010100111001111000";
        ram[18] = "0b1011101110100000011000100110011";
        ram[19] = "0b1001100000000000110111000110011";
        ram[20] = "0b1001101001001000100100100111010";
        ram[21] = "0b1011010010011101100110101101111";
        ram[22] = "0b1100010101001000101111010000000";
        ram[23] = "0b1010101000011101011101010001010";
        ram[24] = "0b1010101100100011101011011001110";
        ram[25] = "0b1010101001110010110000000100000";
        ram[26] = "0b1010111101011111011110011011011";
        ram[27] = "0b1001000000010010010000100100110";
        ram[28] = "0b1010000010001000000010001101101";
        ram[29] = "0b1010111110000110011111000001010";
        ram[30] = "0b1010000101111010101010100010100";
        ram[31] = "0b1011101010010100011111110111101";
        ram[32] = "0b1010000111101100101110000010010";
        ram[33] = "0b1010100110110111111011001100111";
        ram[34] = "0b1010011100000000100100100011100";
        ram[35] = "0b1011110100000110111100110000111";
        ram[36] = "0b1010100000010100011110001001100";
        ram[37] = "0b1010101001101000111100001101101";
        ram[38] = "0b1010111111110111011010000011111";
        ram[39] = "0b1010010111000010001110110010110";
        ram[40] = "0b1001001101100101010110101011110";
        ram[41] = "0b1011001111100110101111110001001";
        ram[42] = "0b1010101110110100101010001101111";
        ram[43] = "0b1010011011001100101000000100100";
        ram[44] = "0b1010001100100001100010110110010";
        ram[45] = "0b1011100100110011101100010010011";
        ram[46] = "0b1100100111001111110110100000101";
        ram[47] = "0b1011010001110101111000110000110";


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


SC_MODULE(QuantAct_m_9) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_9_ram* meminst;


SC_CTOR(QuantAct_m_9) {
meminst = new QuantAct_m_9_ram("QuantAct_m_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_9() {
    delete meminst;
}


};//endmodule
#endif
