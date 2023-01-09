#pragma once
#ifndef HEADER_H
#define HEADER_H


#include "common.hpp"


struct config_t
{
	static const unsigned NUM_CHANNEL=512;
	static const unsigned MAX_BATCH_SIZE=512;		// Specifies at most, how many numbers are processed together for softmax.
													// I-BERT's inputs are either 128x128 (128 batches of 128 nums) or 512x512.
	static const unsigned MIN_BATCH_SIZE=16;		// Specifies at the minimum, how many numbers are processed together.
	static const unsigned BUS_WIDTH=512;			// Data packet bus width
	static const unsigned DATA_WIDTH=32;			// Input number bit size
	static const unsigned OUT_DATA_WIDTH=8;			// Output number bit size (up to 256 unsigned)
	static const unsigned QUANT_DATA_WIDTH=16;		// Quantized number bit size (up to 32767 unsigned)
	static const unsigned UNROLL_FACTOR = 16;    	//Assume power of 2, and less than batch size. The larger this number, the more area, but more parallelism
	static const unsigned MAX_SEQUENCE_LEN=MAX_BATCH_SIZE;	 // This affects simulation only, when HLS tries to measure how many times a loop is run.
	static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;  // how many number are in one input packet, 16
	static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH; // how many numbers are in one output packet, 64
};



// Defines constants used in softmax calculations.
// IMPORTANT: these are defined for scaling factor of 0.00142, so for softmax
// modules with other scaling factors, we have to adjust these constants
const ap_int<config_t::DATA_WIDTH> self_const = 30;
const ap_int<config_t::DATA_WIDTH> x0 = -490;
const ap_int<config_t::DATA_WIDTH> b = 1913;
const ap_int<config_t::DATA_WIDTH> c = 1394358;
const ap_int<config_t::DATA_WIDTH> m = 1614886140;
const ap_int<config_t::QUANT_DATA_WIDTH> e = 66;



//const ap_int<config_t::IN_DATA_WIDTH> self_const = 30;
//const ap_int<config_t::IN_DATA_WIDTH> x0 = -660; // -ln(2) / scaling
//const ap_int<config_t::IN_DATA_WIDTH> b = 2589; // 0.96963238/(scaling * 0.35815147)
//const ap_int<config_t::IN_DATA_WIDTH> c = 2552912; // 1/(scaling^2 * 0.35815147)
//const ap_int<config_t::IN_DATA_WIDTH> m = 614886140; // by feel for now, ask Yu later. Has to be large but not overflow
//const ap_int<config_t::QUANT_DATA_WIDTH> e = 66;

#endif // HEADER_H
