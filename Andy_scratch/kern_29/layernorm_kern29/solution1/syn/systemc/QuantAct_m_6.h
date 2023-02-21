// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_6_H__
#define __QuantAct_m_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_6_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_6_ram) {
        ram[0] = "0b1010010010101000010000110001010";
        ram[1] = "0b1010110001100000011110100011111";
        ram[2] = "0b1011011000001010110011110110100";
        ram[3] = "0b1010010110010110001010111111000";
        ram[4] = "0b1011000101011010110110110100000";
        ram[5] = "0b1001011100010001111101000110000";
        ram[6] = "0b1011000011111110111000100001110";
        ram[7] = "0b1010011000110101001100111000110";
        ram[8] = "0b1010011011110101000100000001010";
        ram[9] = "0b1010000101000100111010011100001";
        ram[10] = "0b1010110001011000001000111001111";
        ram[11] = "0b1010111101010110111010100110001";
        ram[12] = "0b1011101111001000011010000101100";
        ram[13] = "0b1011001111000001000000011101000";
        ram[14] = "0b1001111110110111101111101011010";
        ram[15] = "0b1010111101111010001100101101100";
        ram[16] = "0b1011100001000001101111110000000";
        ram[17] = "0b1000001101100101011000011011111";
        ram[18] = "0b1010001001001110001100100001011";
        ram[19] = "0b1010011100001001100000010101000";
        ram[20] = "0b1011110001011011011010101100010";
        ram[21] = "0b1011011111000101011001110110001";
        ram[22] = "0b1001110101011101111000110100001";
        ram[23] = "0b1010100100110111100110110000010";
        ram[24] = "0b1011011011011011101100000010010";
        ram[25] = "0b1010111010010100001011001010111";
        ram[26] = "0b1001110111010111011010000011010";
        ram[27] = "0b1010000011000110000111111101111";
        ram[28] = "0b1010101101101101111011100101110";
        ram[29] = "0b1011000111100100111100010001100";
        ram[30] = "0b1011000101011001000110010110010";
        ram[31] = "0b1011001110011101100001011011000";
        ram[32] = "0b1010111011010100101110110000010";
        ram[33] = "0b1010110000011011101100111111111";
        ram[34] = "0b1010011110001111001111100111110";
        ram[35] = "0b1001111011110111101000101000100";
        ram[36] = "0b1010100111000101110011100101000";
        ram[37] = "0b1001110010101011100010011011100";
        ram[38] = "0b1001110001111111011100111000111";
        ram[39] = "0b1110001001100000001011110111100";
        ram[40] = "0b1000110000001101010100001101101";
        ram[41] = "0b1010110011111010100000000101000";
        ram[42] = "0b1011011011011001001110001101010";
        ram[43] = "0b1011001101111000101000111011000";
        ram[44] = "0b1001111100000100110000101001110";
        ram[45] = "0b1011001110010100111100000000111";
        ram[46] = "0b1010110001000001010101000100010";
        ram[47] = "0b1011001110110000011011001000000";


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


SC_MODULE(QuantAct_m_6) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_6_ram* meminst;


SC_CTOR(QuantAct_m_6) {
meminst = new QuantAct_m_6_ram("QuantAct_m_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_6() {
    delete meminst;
}


};//endmodule
#endif
