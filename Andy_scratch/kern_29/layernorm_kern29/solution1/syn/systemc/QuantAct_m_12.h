// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_12_H__
#define __QuantAct_m_12_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_12_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_12_ram) {
        ram[0] = "0b1010100111001101100111110101110";
        ram[1] = "0b1011000001100011110110000111001";
        ram[2] = "0b1010100111010011111110001110100";
        ram[3] = "0b1011001110100011001000001111001";
        ram[4] = "0b1011011011100100110011011101110";
        ram[5] = "0b1001111000101011001011010110000";
        ram[6] = "0b1001101111110001100001011001000";
        ram[7] = "0b1100101000101101000111010101001";
        ram[8] = "0b1011001000100101110110100010011";
        ram[9] = "0b1010101001010001000101100101110";
        ram[10] = "0b1010011000010000011001000111001";
        ram[11] = "0b1010111001001000011001000000101";
        ram[12] = "0b1011110100111000000000101001000";
        ram[13] = "0b1010001101001000110011001100010";
        ram[14] = "0b1001000110011000101111100010000";
        ram[15] = "0b1011010110010111001001000001101";
        ram[16] = "0b1000111110000000011111010110110";
        ram[17] = "0b1010001111001010001000110110010";
        ram[18] = "0b1010011100110100111011100000000";
        ram[19] = "0b1010110001101011000101001000010";
        ram[20] = "0b1100101011100101110011011110001";
        ram[21] = "0b1010111100100000110011100000000";
        ram[22] = "0b1011010000100101010010001100001";
        ram[23] = "0b1010111000101100110011100110010";
        ram[24] = "0b1011011011111000000010010001110";
        ram[25] = "0b1010101101111011010001101000010";
        ram[26] = "0b1010110000011101001100110001000";
        ram[27] = "0b1001101011010101110000101100101";
        ram[28] = "0b1011000011100110100111011100010";
        ram[29] = "0b1101110110100001010001011101011";
        ram[30] = "0b1011110001100111010001111010001";
        ram[31] = "0b1010101101010001001010111000101";
        ram[32] = "0b1010101100111011000000111100101";
        ram[33] = "0b1011001101001001101001101011000";
        ram[34] = "0b1011110011111101011000101010101";
        ram[35] = "0b1001001111111001110101101001000";
        ram[36] = "0b1000110000000111101011010110011";
        ram[37] = "0b1010101100010001000011000001101";
        ram[38] = "0b1010101100110100101101011001011";
        ram[39] = "0b1001111111101010100001000001100";
        ram[40] = "0b1011001100010000001001100001011";
        ram[41] = "0b1010111101000111111101110110111";
        ram[42] = "0b1011010101010011010111000110011";
        ram[43] = "0b1011000001000101011001101010110";
        ram[44] = "0b1011001011100101100000001000000";
        ram[45] = "0b1001110100111001011111101010010";
        ram[46] = "0b1001110101010111000010010011000";
        ram[47] = "0b1010111011100101010000111011100";


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


SC_MODULE(QuantAct_m_12) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_12_ram* meminst;


SC_CTOR(QuantAct_m_12) {
meminst = new QuantAct_m_12_ram("QuantAct_m_12_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_12() {
    delete meminst;
}


};//endmodule
#endif
