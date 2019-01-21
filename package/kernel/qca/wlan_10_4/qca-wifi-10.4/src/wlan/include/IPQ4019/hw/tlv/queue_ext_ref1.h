// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _QUEUE_EXT_REF1_H_
#define _QUEUE_EXT_REF1_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	queue_ext_address[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_QUEUE_EXT_REF1 1

struct queue_ext_ref1 {
    volatile uint32_t queue_ext_address               : 32; //[31:0]
};

/*

queue_ext_address
			
			The physical address of the queue extension struct in
			memory.
*/


/* Description		QUEUE_EXT_REF1_0_QUEUE_EXT_ADDRESS
			
			The physical address of the queue extension struct in
			memory.
*/
#define QUEUE_EXT_REF1_0_QUEUE_EXT_ADDRESS_OFFSET                    0x00000000
#define QUEUE_EXT_REF1_0_QUEUE_EXT_ADDRESS_LSB                       0
#define QUEUE_EXT_REF1_0_QUEUE_EXT_ADDRESS_MASK                      0xffffffff


#endif // _QUEUE_EXT_REF1_H_
