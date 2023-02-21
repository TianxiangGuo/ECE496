// ==============================================================
// File generated on Mon Feb 20 12:11:19 EST 2023
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __QuantAct_m_11_H__
#define __QuantAct_m_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct QuantAct_m_11_ram : public sc_core::sc_module {

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


   SC_CTOR(QuantAct_m_11_ram) {
        ram[0] = "0b1100000011111111111001011001110";
        ram[1] = "0b1001100101110101110000011101110";
        ram[2] = "0b1010000001000011100100110100000";
        ram[3] = "0b1100000001100010001011100111010";
        ram[4] = "0b1011110001100110011100010110101";
        ram[5] = "0b1010011100010001101010101001010";
        ram[6] = "0b1011101101010001101010101011110";
        ram[7] = "0b1011011111111111101111100011001";
        ram[8] = "0b1010010100011000101010000110101";
        ram[9] = "0b1011111001011001010011101111011";
        ram[10] = "0b1010110001101110101000100101000";
        ram[11] = "0b1001000100101000110001001000100";
        ram[12] = "0b1001010110000000001010000010111";
        ram[13] = "0b1100110111001011011100101000100";
        ram[14] = "0b1011101001001001110101100010010";
        ram[15] = "0b1011101000011001000101001100001";
        ram[16] = "0b1010000100100100100010111110101";
        ram[17] = "0b1010000001011000000100010001011";
        ram[18] = "0b1010111011001100100110101001010";
        ram[19] = "0b1010011100011011000100101010011";
        ram[20] = "0b1001110000110110010101010100010";
        ram[21] = "0b1010010110111011000000101001100";
        ram[22] = "0b1011001111011011000110000110010";
        ram[23] = "0b1011000011100110111001011001100";
        ram[24] = "0b1010110110110111000111111011010";
        ram[25] = "0b1011001000010001110011101111110";
        ram[26] = "0b1010101010001010010001010000110";
        ram[27] = "0b1010110010011001011000111001111";
        ram[28] = "0b1010110001111111111011010001010";
        ram[29] = "0b1010100001101011111001010110011";
        ram[30] = "0b1011000100010010011000000010010";
        ram[31] = "0b1001101010000001101011000101100";
        ram[32] = "0b1001110110101110111010010100101";
        ram[33] = "0b1010100000000100010110000111101";
        ram[34] = "0b1001111011011011110101110101001";
        ram[35] = "0b1010010001010000000000000001000";
        ram[36] = "0b1101101000111000010010000110111";
        ram[37] = "0b1010100011010010011100111100011";
        ram[38] = "0b1011100111001100011111010111011";
        ram[39] = "0b1011000100011011100011001111110";
        ram[40] = "0b1011000001110011010001000101111";
        ram[41] = "0b1010110000100001011110001101100";
        ram[42] = "0b1010111001111000110101001100011";
        ram[43] = "0b1011011101011111110011111111111";
        ram[44] = "0b1010111000011010010000111001000";
        ram[45] = "0b1101101010101000001100100100011";
        ram[46] = "0b1010000010100000111010101011010";
        ram[47] = "0b1010111010111010011110101101101";


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


SC_MODULE(QuantAct_m_11) {


static const unsigned DataWidth = 31;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


QuantAct_m_11_ram* meminst;


SC_CTOR(QuantAct_m_11) {
meminst = new QuantAct_m_11_ram("QuantAct_m_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~QuantAct_m_11() {
    delete meminst;
}


};//endmodule
#endif
