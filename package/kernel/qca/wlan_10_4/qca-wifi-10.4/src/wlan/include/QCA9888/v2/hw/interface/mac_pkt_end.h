// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MAC_PKT_END_H_
#define _MAC_PKT_END_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	status[1:0], reserved_0a[7:2], pkt_end_user0[8], pkt_end_user1[9], pkt_end_user2[10], pkt_end_user3[11], reserved_0b[31:12]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MAC_PKT_END 1

struct mac_pkt_end {
    volatile uint32_t status                          :  2, //[1:0]
                      reserved_0a                     :  6, //[7:2]
                      pkt_end_user0                   :  1, //[8]
                      pkt_end_user1                   :  1, //[9]
                      pkt_end_user2                   :  1, //[10]
                      pkt_end_user3                   :  1, //[11]
                      reserved_0b                     : 20; //[31:12]
};

/*

status
			
			Reason for end of TX packet 
			
			<enum 0     tx_success>
			
			<enum 1     tx_abort>
			
			<enum 2     rf_only_abort>
			
			 <legal 0-2>

reserved_0a
			
			Reserved. Set to 0 by sender and ignored by receiver. 
			<legal 0>

pkt_end_user0
			
			Defines end of packet data transfer for hardware user 0 
			<legal 0-1>

pkt_end_user1
			
			Defines end of packet data transfer for hardware user 1
			- valid for MU-MIMO packets only  <legal 0-1>

pkt_end_user2
			
			Defines end of packet data transfer for hardware user 2
			- valid for MU-MIMO packets only  <legal 0-1>

pkt_end_user3
			
			Unsupported: Defines end of packet data transfer for
			user 3 <legal 0>

reserved_0b
			
			Reserved - set to 0 by MAC <legal 0>
*/


/* Description		MAC_PKT_END_0_STATUS
			
			Reason for end of TX packet 
			
			<enum 0     tx_success>
			
			<enum 1     tx_abort>
			
			<enum 2     rf_only_abort>
			
			 <legal 0-2>
*/
#define MAC_PKT_END_0_STATUS_OFFSET                                  0x00000000
#define MAC_PKT_END_0_STATUS_LSB                                     0
#define MAC_PKT_END_0_STATUS_MASK                                    0x00000003

/* Description		MAC_PKT_END_0_RESERVED_0A
			
			Reserved. Set to 0 by sender and ignored by receiver. 
			<legal 0>
*/
#define MAC_PKT_END_0_RESERVED_0A_OFFSET                             0x00000000
#define MAC_PKT_END_0_RESERVED_0A_LSB                                2
#define MAC_PKT_END_0_RESERVED_0A_MASK                               0x000000fc

/* Description		MAC_PKT_END_0_PKT_END_USER0
			
			Defines end of packet data transfer for hardware user 0 
			<legal 0-1>
*/
#define MAC_PKT_END_0_PKT_END_USER0_OFFSET                           0x00000000
#define MAC_PKT_END_0_PKT_END_USER0_LSB                              8
#define MAC_PKT_END_0_PKT_END_USER0_MASK                             0x00000100

/* Description		MAC_PKT_END_0_PKT_END_USER1
			
			Defines end of packet data transfer for hardware user 1
			- valid for MU-MIMO packets only  <legal 0-1>
*/
#define MAC_PKT_END_0_PKT_END_USER1_OFFSET                           0x00000000
#define MAC_PKT_END_0_PKT_END_USER1_LSB                              9
#define MAC_PKT_END_0_PKT_END_USER1_MASK                             0x00000200

/* Description		MAC_PKT_END_0_PKT_END_USER2
			
			Defines end of packet data transfer for hardware user 2
			- valid for MU-MIMO packets only  <legal 0-1>
*/
#define MAC_PKT_END_0_PKT_END_USER2_OFFSET                           0x00000000
#define MAC_PKT_END_0_PKT_END_USER2_LSB                              10
#define MAC_PKT_END_0_PKT_END_USER2_MASK                             0x00000400

/* Description		MAC_PKT_END_0_PKT_END_USER3
			
			Unsupported: Defines end of packet data transfer for
			user 3 <legal 0>
*/
#define MAC_PKT_END_0_PKT_END_USER3_OFFSET                           0x00000000
#define MAC_PKT_END_0_PKT_END_USER3_LSB                              11
#define MAC_PKT_END_0_PKT_END_USER3_MASK                             0x00000800

/* Description		MAC_PKT_END_0_RESERVED_0B
			
			Reserved - set to 0 by MAC <legal 0>
*/
#define MAC_PKT_END_0_RESERVED_0B_OFFSET                             0x00000000
#define MAC_PKT_END_0_RESERVED_0B_LSB                                12
#define MAC_PKT_END_0_RESERVED_0B_MASK                               0xfffff000


#endif // _MAC_PKT_END_H_
