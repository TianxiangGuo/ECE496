// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_3_H__
#define __QuantAct_m_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_3_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_3_ram) {
        ram[0] = "0b1010110001100001001111000100110";
        ram[1] = "0b1100010100010111011000001010000";
        ram[2] = "0b1101001000010101010011000100000";
        ram[3] = "0b1001011011000110111010000001111";
        ram[4] = "0b1100000101100011101000011111001";
        ram[5] = "0b1011101101110000010100010110111";
        ram[6] = "0b1011010100101111101101010110111";
        ram[7] = "0b1011100111011011011011001010001";
        ram[8] = "0b1100001011011000001000001011010";
        ram[9] = "0b1010000110100101011011001011100";
        ram[10] = "0b1010111110001111110000001101111";
        ram[11] = "0b1010000011111000010101100011111";
        ram[12] = "0b1011010010101000011011110001101";
        ram[13] = "0b1010110101000000100110011000100";
        ram[14] = "0b1001010011001111000010100100110";
        ram[15] = "0b1100001110101110001001001111111";
        ram[16] = "0b1011010111001101110111110100001";
        ram[17] = "0b1000111011101111101111110100100";
        ram[18] = "0b1011010000110111001101100001001";
        ram[19] = "0b1010000110101000101111100000100";
        ram[20] = "0b1110100000000101010011011110001";
        ram[21] = "0b1011010001100100000011000110100";
        ram[22] = "0b1011100001001111110100000110011";
        ram[23] = "0b1010000010111110111101111010110";
        ram[24] = "0b1100000010111001000101000110110";
        ram[25] = "0b1011001110010000010001101011110";
        ram[26] = "0b1100000111000011001011001010101";
        ram[27] = "0b1001111100001101101110001010010";
        ram[28] = "0b1100000011110011111110101110010";
        ram[29] = "0b1110011000000100111101001110011";
        ram[30] = "0b1001101001110010011011001000100";
        ram[31] = "0b1001111011100100111100101000011";
        ram[32] = "0b1010101011111000010000110111001";
        ram[33] = "0b1000010011000110111101010100100";
        ram[34] = "0b1001111010101110001011011110110";
        ram[35] = "0b1001111100010000111000011010000";
        ram[36] = "0b1010101101100011101011000100101";
        ram[37] = "0b1010000011011010000000101011011";
        ram[38] = "0b1100001110011110001110011100111";
        ram[39] = "0b1010111110111111101010011000001";
        ram[40] = "0b1011000001011110010001110100010";
        ram[41] = "0b1010011101110100111001100110000";
        ram[42] = "0b1011100111010100011100001000101";
        ram[43] = "0b1100001011001001101101110001110";
        ram[44] = "0b1011010110111011001100111010101";
        ram[45] = "0b1010101101101010010100101011001";
        ram[46] = "0b1001101110110010100110001111011";
        ram[47] = "0b1010010011111011010010000001010";


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


SC_MODULE(QuantAct_m_3) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_3_ram* meminst;


SC_CTOR(QuantAct_m_3) {
meminst = new QuantAct_m_3_ram("QuantAct_m_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_3() {
    delete meminst;
}


};//endmodule
#endif
