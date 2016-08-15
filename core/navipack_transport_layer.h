/**
******************************************************************************
* @file    navipack_transport_layer.h
* @author  Jalon
* @date    2016.02.01
* @brief   通讯协议解包封包等相关声明
* @attention Copyright (C) 2016 Inmotion
******************************************************************************
*/
#ifndef  __NAVIPACK_TRANSPORT_LAYER_H__
#define  __NAVIPACK_TRANSPORT_LAYER_H__

#include "navipack_def.h"
#include "navipack_api.h"

/** @defgroup PACK_FLAG_define
  * @{
  */
#define PACK_FLAG_BEGIN     0x01
#define PACK_FLAG_END       0x02
/**
  * @}
  */

bool Navipack_TransportUnpacking(NavipackComm_Type *comm, u8 data);
bool Navipack_TransportPacking(NavipackComm_Type *comm, u8 *in_buf, u16 len, u8 pack_flag);

#endif
