// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_4_H__
#define __QuantAct_m_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_4_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_4_ram) {
        ram[0] = "0b1011111101010100011110010100101";
        ram[1] = "0b1010001100010101010100010100100";
        ram[2] = "0b1011011110011010000110001111001";
        ram[3] = "0b1010011110101001101010101100000";
        ram[4] = "0b1010001110110010001111101101001";
        ram[5] = "0b1011000010000010001010000011010";
        ram[6] = "0b1011111111110111010111110101100";
        ram[7] = "0b1010101010010101111100100000011";
        ram[8] = "0b1010001011000000001111000100110";
        ram[9] = "0b1011010010100110111100010100101";
        ram[10] = "0b1001011001111110110000110101010";
        ram[11] = "0b1011110100011011101101100011001";
        ram[12] = "0b1010011111110110010000100000110";
        ram[13] = "0b1011000101010011011101101001000";
        ram[14] = "0b1011010001100110000100111001001";
        ram[15] = "0b1010100111010110100000110001111";
        ram[16] = "0b1010001100010100110001111110111";
        ram[17] = "0b1001010011111011001011011011001";
        ram[18] = "0b1010110011101001110100001000110";
        ram[19] = "0b1010101111111010100000110001010";
        ram[20] = "0b1011111111111111001101111111011";
        ram[21] = "0b1011110100111111100000011011011";
        ram[22] = "0b1010100100101101111010001001101";
        ram[23] = "0b1001011101010000000110110010010";
        ram[24] = "0b1010010011011101111011110101000";
        ram[25] = "0b1010010001110001101100011000001";
        ram[26] = "0b1011011011110111110100011010101";
        ram[27] = "0b1001011110000110100011111011101";
        ram[28] = "0b1011110000011011101010110001100";
        ram[29] = "0b1011011110001000000100111011000";
        ram[30] = "0b1010101011101011110101000110101";
        ram[31] = "0b1100011110001100010101000101011";
        ram[32] = "0b1011001011101000100010001011101";
        ram[33] = "0b1010011001001010001111010100000";
        ram[34] = "0b1010100010011000111111111100011";
        ram[35] = "0b1011111010000110010101100111000";
        ram[36] = "0b1010101110000010101010110011001";
        ram[37] = "0b1011000001010010011101110000000";
        ram[38] = "0b1001000001011011000101101110000";
        ram[39] = "0b1010111000010001110100111011110";
        ram[40] = "0b1010101100100100110110011000010";
        ram[41] = "0b1011001000011101000001101100011";
        ram[42] = "0b1100100110011100011101100111111";
        ram[43] = "0b1011000101110110101110001011101";
        ram[44] = "0b1010100111001101101100100100010";
        ram[45] = "0b1011011011100110100001101110011";
        ram[46] = "0b1010110010110101011101001100010";
        ram[47] = "0b1011100010010111100000110010011";


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


SC_MODULE(QuantAct_m_4) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_4_ram* meminst;


SC_CTOR(QuantAct_m_4) {
meminst = new QuantAct_m_4_ram("QuantAct_m_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_4() {
    delete meminst;
}


};//endmodule
#endif
