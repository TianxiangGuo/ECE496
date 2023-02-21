#pragma once
#include "common.hpp" 
struct config_t_identity_gather_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned K=768;
static const unsigned SRC_ID_PREV_LAYER=0;
static const unsigned NUM_SRC_PREV_KERNEL=1;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH_1=32;
static const unsigned DATA_WIDTH_2=8;
static const unsigned VEC_WIDTH_1=BUS_WIDTH/DATA_WIDTH_1;
static const unsigned VEC_WIDTH_2=BUS_WIDTH/DATA_WIDTH_2;
};
struct config_t_identity_act_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned NUM_CHANNEL=768;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=8;
static const unsigned OUT_DATA_WIDTH=32;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH;
static const unsigned UNROLL_FACTOR=16;//NUM_CHANNEL/VEC_WIDTH;
};
struct config_t_identity_add_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned K=768;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=32;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
};
struct config_t_layernorm_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned NUM_CHANNEL=768;
static const unsigned LOG_NUM_CHANNEL=9;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=32;
static const unsigned IM_DATA_WIDTH=32;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
static const unsigned UNROLL_FACTOR=16;
static const unsigned shift=6;
};
struct config_t_act_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned NUM_CHANNEL=768;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=32;
static const unsigned OUT_DATA_WIDTH=8;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
static const unsigned OUT_VEC_WIDTH=BUS_WIDTH/OUT_DATA_WIDTH;
static const unsigned UNROLL_FACTOR=NUM_CHANNEL/VEC_WIDTH;
};
struct config_t_layernorm_bcast_29
{
static const unsigned id=29;
static const unsigned dest=30;
static const unsigned identity_dest=38;
static const unsigned NUM_DEST=5;
static const unsigned K=768;
static const unsigned BUS_WIDTH=512;
static const unsigned DATA_WIDTH=8;
static const unsigned VEC_WIDTH=BUS_WIDTH/DATA_WIDTH;
};
