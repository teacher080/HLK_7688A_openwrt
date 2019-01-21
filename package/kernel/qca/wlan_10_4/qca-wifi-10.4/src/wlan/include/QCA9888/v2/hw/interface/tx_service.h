// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _TX_SERVICE_H_
#define _TX_SERVICE_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	scrambler_seed[6:0], reserved[7], vht_sig_b_crc_user0[15:8], vht_sig_b_crc_user1[23:16], vht_sig_b_crc_user2[31:24]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_TX_SERVICE 1

struct tx_service {
    volatile uint32_t scrambler_seed                  :  7, //[6:0]
                      reserved                        :  1, //[7]
                      vht_sig_b_crc_user0             :  8, //[15:8]
                      vht_sig_b_crc_user1             :  8, //[23:16]
                      vht_sig_b_crc_user2             :  8; //[31:24]
};

/*

scrambler_seed
			
			This field provides the 7-bit seed for the data
			scrambler.  <legal all>

reserved
			
			Reserved. Set to 0 by sender and ignored by receiver. 
			<legal 0>

vht_sig_b_crc_user0
			
			CRC field valid for 11ac packets only. Reserved and set
			to 0 by the MAC for all other packet types. The user number
			refers to the hardware user location, not the MU group
			location. <legal all>

vht_sig_b_crc_user1
			
			CRC field for user 1. Valid for 11ac packets MU-MIMO
			packets only. Reserved and set to 0 by the MAC for all other
			packet types. The user number refers to the hardware user
			location, not the MU group location. <legal all>

vht_sig_b_crc_user2
			
			CRC field for user 2. Valid for 11ac packets MU-MIMO
			packets with Nusers > 2. Reserved and set to 0 by the MAC
			for all other packet types. The user number refers to the
			hardware user location, not the MU group location.  <legal
			all>
*/


/* Description		TX_SERVICE_0_SCRAMBLER_SEED
			
			This field provides the 7-bit seed for the data
			scrambler.  <legal all>
*/
#define TX_SERVICE_0_SCRAMBLER_SEED_OFFSET                           0x00000000
#define TX_SERVICE_0_SCRAMBLER_SEED_LSB                              0
#define TX_SERVICE_0_SCRAMBLER_SEED_MASK                             0x0000007f

/* Description		TX_SERVICE_0_RESERVED
			
			Reserved. Set to 0 by sender and ignored by receiver. 
			<legal 0>
*/
#define TX_SERVICE_0_RESERVED_OFFSET                                 0x00000000
#define TX_SERVICE_0_RESERVED_LSB                                    7
#define TX_SERVICE_0_RESERVED_MASK                                   0x00000080

/* Description		TX_SERVICE_0_VHT_SIG_B_CRC_USER0
			
			CRC field valid for 11ac packets only. Reserved and set
			to 0 by the MAC for all other packet types. The user number
			refers to the hardware user location, not the MU group
			location. <legal all>
*/
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER0_OFFSET                      0x00000000
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER0_LSB                         8
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER0_MASK                        0x0000ff00

/* Description		TX_SERVICE_0_VHT_SIG_B_CRC_USER1
			
			CRC field for user 1. Valid for 11ac packets MU-MIMO
			packets only. Reserved and set to 0 by the MAC for all other
			packet types. The user number refers to the hardware user
			location, not the MU group location. <legal all>
*/
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER1_OFFSET                      0x00000000
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER1_LSB                         16
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER1_MASK                        0x00ff0000

/* Description		TX_SERVICE_0_VHT_SIG_B_CRC_USER2
			
			CRC field for user 2. Valid for 11ac packets MU-MIMO
			packets with Nusers > 2. Reserved and set to 0 by the MAC
			for all other packet types. The user number refers to the
			hardware user location, not the MU group location.  <legal
			all>
*/
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER2_OFFSET                      0x00000000
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER2_LSB                         24
#define TX_SERVICE_0_VHT_SIG_B_CRC_USER2_MASK                        0xff000000


#endif // _TX_SERVICE_H_
