#pragma once
#ifndef HEADER_H
#define HEADER_H


#include "common.hpp"


struct config_t
{
	static const unsigned MAX_BATCH_SIZE=512;		// Specifies at most, how many numbers are processed together for softmax.
													// I-BERT's inputs are either 128x128 (128 batches of 128 nums) or 512x512.
	static const unsigned MIN_BATCH_SIZE=16;		// Specifies at the minimum, how many numbers are processed together.
	static const unsigned BUS_WIDTH=512;			// Data packet bus width
	static const unsigned IN_DATA_WIDTH=32;			// Input number bit size
	static const unsigned OUT_DATA_WIDTH=8;			// Output number bit size (up to 256 unsigned)
	static const unsigned QUANT_DATA_WIDTH=16;		// Quantized number bit size (up to 32767 unsigned)
	static const unsigned UNROLL_FACTOR = 4;    	//Assume power of 2, and less than batch size. The larger this number, the more area, but more parallelism
	static const unsigned MAX_SEQUENCE_LEN=MAX_BATCH_SIZE;	 // This affects simulation only, when HLS tries to measure how many times a loop is run.
	static const unsigned IN_VEC_WIDTH=BUS_WIDTH/IN_DATA_WIDTH;  // how many number are in one input packet
	static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH; // how many numbers are in one output packet
};


#endif // HEADER_H
