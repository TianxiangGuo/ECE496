#pragma once
#include "common.hpp"



struct Config_Softmax_1
{
	static const unsigned NUM_CHANNEL=128;
	static const unsigned BUS_WIDTH=512;
	static const unsigned DATA_WIDTH=32;
	static const unsigned OUT_DATA_WIDTH=8;
	static const unsigned QUANT_DATA_WIDTH=16;
	static const unsigned UNROLL_FACTOR = 16;
	static const unsigned MAX_SEQUENCE_LEN = 128;
	static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
	static const unsigned OUT_VEC_WIDTH=UNROLL_FACTOR;
	static const unsigned self_const = 30;
};

ap_int<Config_Softmax_1::DATA_WIDTH> self_const = 30;
ap_int<Config_Softmax_1::DATA_WIDTH> x0 = -490;
ap_int<Config_Softmax_1::DATA_WIDTH> b = 1913;
ap_int<Config_Softmax_1::DATA_WIDTH> c = 1394358;
ap_int<Config_Softmax_1::DATA_WIDTH> m = 1614886140;
ap_int<Config_Softmax_1::QUANT_DATA_WIDTH> e = 66;
