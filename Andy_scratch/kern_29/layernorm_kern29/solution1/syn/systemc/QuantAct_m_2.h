// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_2_H__
#define __QuantAct_m_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_2_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_2_ram) {
        ram[0] = "0b1010100001010000000111000001010";
        ram[1] = "0b1010011110111001110001011101010";
        ram[2] = "0b1010010001000011110100000000100";
        ram[3] = "0b1011011010100011111000111000101";
        ram[4] = "0b1001111010100101000100001101010";
        ram[5] = "0b1011100011000111111011011001010";
        ram[6] = "0b1101101010000010000100010111100";
        ram[7] = "0b1001001100011010010111001111100";
        ram[8] = "0b1110010011011100101111001100101";
        ram[9] = "0b1010000010010110110010100000100";
        ram[10] = "0b1010110000011011011101111000001";
        ram[11] = "0b1001101001000011000011110010000";
        ram[12] = "0b1010001000010011111010100110010";
        ram[13] = "0b1001010010111101111101100101101";
        ram[14] = "0b1010000010111100011100001001101";
        ram[15] = "0b1010010000011011101010000001000";
        ram[16] = "0b1010111111001110111010111101100";
        ram[17] = "0b1010101011101100110111100100110";
        ram[18] = "0b1001110010011010101011110001110";
        ram[19] = "0b1011111001010111100000110000010";
        ram[20] = "0b1010101010010000100111000001001";
        ram[21] = "0b1010001100100011111111000110100";
        ram[22] = "0b1010000011100001110100110010001";
        ram[23] = "0b1010011001111111011111111010001";
        ram[24] = "0b1011011100100111111110000000111";
        ram[25] = "0b1010000111111000101010111011000";
        ram[26] = "0b1011011011001100011011110001000";
        ram[27] = "0b1011011100110110001100001000001";
        ram[28] = "0b1001001101101110010100111110101";
        ram[29] = "0b1010110000001100111001101101100";
        ram[30] = "0b1001011011001111110111110110100";
        ram[31] = "0b1100000100101100111011100101101";
        ram[32] = "0b1101000001100100010001001010101";
        ram[33] = "0b1011100110001000011001100101111";
        ram[34] = "0b1100000111111001010110010110110";
        ram[35] = "0b1010100100101111011111100101110";
        ram[36] = "0b1011010111101110000011011101101";
        ram[37] = "0b1010100110100000000010000011110";
        ram[38] = "0b1010010001010011001001111100101";
        ram[39] = "0b1001010110100011000100001110000";
        ram[40] = "0b1010000101101000101010001010110";
        ram[41] = "0b1010100100000111011010000000011";
        ram[42] = "0b1011010111000111011010110100000";
        ram[43] = "0b1011001011010001011101111101110";
        ram[44] = "0b1010110011001010110101111111000";
        ram[45] = "0b1011011000101101101111010010010";
        ram[46] = "0b1011011100000110111110000100100";
        ram[47] = "0b1010001110110101100110110111101";


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


SC_MODULE(QuantAct_m_2) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_2_ram* meminst;


SC_CTOR(QuantAct_m_2) {
meminst = new QuantAct_m_2_ram("QuantAct_m_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_2() {
    delete meminst;
}


};//endmodule
#endif
