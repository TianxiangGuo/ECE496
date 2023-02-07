#pragma once
#include "common.hpp" 
struct config_t_attention_matmul_4
{
static const unsigned id=4;
static const unsigned dest=16;
static const unsigned M=64;
static const unsigned NUM_PE=2;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=8;
static const unsigned OUT_DATA_WIDTH=32;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH;
static const unsigned MAX_SEQUENCE_LEN=128;
};
struct config_t_softmax_4
{
static const unsigned id=4;
static const unsigned dest=16;
static const unsigned NUM_CHANNEL=128;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=32;
static const unsigned OUT_DATA_WIDTH=8;
static const unsigned QUANT_DATA_WIDTH=16;
static const unsigned UNROLL_FACTOR=2;
static const unsigned MAX_SEQUENCE_LEN=128;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH;
};
