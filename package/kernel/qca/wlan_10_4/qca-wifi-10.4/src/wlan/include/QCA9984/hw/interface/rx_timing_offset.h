// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_TIMING_OFFSET_H_
#define _RX_TIMING_OFFSET_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	timing_offset[11:0], reserved[31:12]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_TIMING_OFFSET 1

struct rx_timing_offset {
    volatile uint32_t timing_offset                   : 12, //[11:0]
                      reserved                        : 20; //[31:12]
};

/*

timing_offset
			
			Cumulative reference frequency error at end of RX
			packet, expressed as the phase offset measured over 0.8s.
			<legal all>

reserved
			
			Reserved - set to 0 by PHY  <legal 0>
*/


/* Description		RX_TIMING_OFFSET_0_TIMING_OFFSET
			
			Cumulative reference frequency error at end of RX
			packet, expressed as the phase offset measured over 0.8s.
			<legal all>
*/
#define RX_TIMING_OFFSET_0_TIMING_OFFSET_OFFSET                      0x00000000
#define RX_TIMING_OFFSET_0_TIMING_OFFSET_LSB                         0
#define RX_TIMING_OFFSET_0_TIMING_OFFSET_MASK                        0x00000fff

/* Description		RX_TIMING_OFFSET_0_RESERVED
			
			Reserved - set to 0 by PHY  <legal 0>
*/
#define RX_TIMING_OFFSET_0_RESERVED_OFFSET                           0x00000000
#define RX_TIMING_OFFSET_0_RESERVED_LSB                              12
#define RX_TIMING_OFFSET_0_RESERVED_MASK                             0xfffff000


#endif // _RX_TIMING_OFFSET_H_
