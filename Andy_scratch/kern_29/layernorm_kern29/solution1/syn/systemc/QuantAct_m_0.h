// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_0_H__
#define __QuantAct_m_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_0_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_0_ram) {
        ram[0] = "0b1001101110001011000101101011001";
        ram[1] = "0b1011110010010110100000010001111";
        ram[2] = "0b1010010001110100101001011001010";
        ram[3] = "0b1010000010101110111000100100010";
        ram[4] = "0b1010110000000101011001100111000";
        ram[5] = "0b1001110001010111011011011001110";
        ram[6] = "0b1010100110100111001101000011011";
        ram[7] = "0b1011001011010001011101010101011";
        ram[8] = "0b1010000101101111110001000100011";
        ram[9] = "0b1011011100100011101111000101110";
        ram[10] = "0b1001110010111110111011110010111";
        ram[11] = "0b1100001111010110011000010010000";
        ram[12] = "0b1001101010100101100111011010101";
        ram[13] = "0b1010110111110010011110100001100";
        ram[14] = "0b1011101110000101001000100111000";
        ram[15] = "0b1010101111110010010110001000111";
        ram[16] = "0b1010010101111011000001100111000";
        ram[17] = "0b1001010001111111100100010011010";
        ram[18] = "0b1010011011100000110100111100011";
        ram[19] = "0b1011000110101100111110011010011";
        ram[20] = "0b1010110000011010111000101101000";
        ram[21] = "0b1110011001110100011100010001111";
        ram[22] = "0b1001111001010100011011011011100";
        ram[23] = "0b1001001100000111000000110111110";
        ram[24] = "0b1010001110101000001111111000101";
        ram[25] = "0b1010001111110010110111011000101";
        ram[26] = "0b1100001000001101000010001001101";
        ram[27] = "0b1010100101111011010000011111010";
        ram[28] = "0b1010100001011111011001011111101";
        ram[29] = "0b1010110100101010001100011000010";
        ram[30] = "0b1010100010100001111000100100011";
        ram[31] = "0b1000000011100111010010001100000";
        ram[32] = "0b1010011110010001001011011011010";
        ram[33] = "0b1001101101010011011011110100010";
        ram[34] = "0b1101100110101100000011010010111";
        ram[35] = "0b1001110110000110100000010000110";
        ram[36] = "0b1011001100011110100001011001110";
        ram[37] = "0b1011001010101111010011010111000";
        ram[38] = "0b1010101011001001111111100110110";
        ram[39] = "0b1000110000001001111100000110101";
        ram[40] = "0b1000110100001010110110010100110";
        ram[41] = "0b1010100001000100101011001101100";
        ram[42] = "0b1011100011000000010101010011110";
        ram[43] = "0b1010011010110010010111101101110";
        ram[44] = "0b1010010111100110101011010000011";
        ram[45] = "0b1011111100011010100000111000001";
        ram[46] = "0b1010101011110100001110110110110";
        ram[47] = "0b1000111011010101000110000110110";


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


SC_MODULE(QuantAct_m_0) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_0_ram* meminst;


SC_CTOR(QuantAct_m_0) {
meminst = new QuantAct_m_0_ram("QuantAct_m_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_0() {
    delete meminst;
}


};//endmodule
#endif
