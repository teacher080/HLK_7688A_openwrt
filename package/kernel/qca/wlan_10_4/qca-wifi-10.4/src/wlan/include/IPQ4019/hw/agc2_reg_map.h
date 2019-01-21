/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _PHY_AGC2_REG_MAP_H_
#define _PHY_AGC2_REG_MAP_H_


#ifndef __PHY_AGC2_REG_MAP_BASE_ADDRESS
#define __PHY_AGC2_REG_MAP_BASE_ADDRESS (0x12000)
#endif


// 0x4 (PHY_BB_GAIN_FORCE_MAX_GAINS_B2)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_LSB               25
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_MSB               31
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_MASK              0xfe000000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_GET(x)            (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_SET(x)            (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_HYST_MARGIN_2_RESET             0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_LSB               18
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_MSB               24
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_MASK              0x1fc0000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_GET(x)            (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_SET(x)            (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_HYST_MARGIN_2_RESET             0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_LSB                      17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_MSB                      17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_MASK                     0x20000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_GET(x)                   (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_SET(x)                   (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN2_SW_F_2_RESET                    0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_LSB                      16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_MSB                      16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_MASK                     0x10000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_GET(x)                   (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_SET(x)                   (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_XATTEN1_SW_F_2_RESET                    0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_LSB                         8
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_MSB                         15
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_MASK                        0xff00
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_GET(x)                      (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_SET(x)                      (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_MB_GAIN_F_2_RESET                       0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_LSB                         0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_MSB                         7
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_MASK                        0xff
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_GET(x)                      (((x) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_MASK) >> PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_LSB)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_SET(x)                      (((0 | (x)) << PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_LSB) & PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_MASK)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RF_GAIN_F_2_RESET                       0x0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_ADDRESS                                 (0x4 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RSTMASK                                 0xffffffff
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B2_RESET                                   0x0

// 0x18 (PHY_BB_EXT_ATTEN_SWITCH_CTL_B2)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_LSB                      24
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_MSB                      28
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_MASK                     0x1f000000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_GET(x)                   (((x) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_MASK) >> PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_LSB)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_SET(x)                   (((0 | (x)) << PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_LSB) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_MASK)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XLNA_GAIN_DB_2_RESET                    0x0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_LSB                    18
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_MSB                    23
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_MASK                   0xfc0000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_GET(x)                 (((x) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_MASK) >> PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_LSB)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_SET(x)                 (((0 | (x)) << PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_LSB) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_MASK)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_MARGIN_2_RESET                  0x0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_LSB                    12
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_MSB                    17
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_MASK                   0x3f000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_GET(x)                 (((x) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_MASK) >> PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_LSB)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_SET(x)                 (((0 | (x)) << PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_LSB) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_MASK)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_MARGIN_2_RESET                  0x32
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_LSB                        6
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_MSB                        11
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_MASK                       0xfc0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_GET(x)                     (((x) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_MASK) >> PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_LSB)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_SET(x)                     (((0 | (x)) << PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_LSB) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_MASK)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN2_DB_2_RESET                      0x0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_LSB                        0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_MSB                        5
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_MASK                       0x3f
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_GET(x)                     (((x) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_MASK) >> PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_LSB)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_SET(x)                     (((0 | (x)) << PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_LSB) & PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_MASK)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_XATTEN1_DB_2_RESET                      0x0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_ADDRESS                                 (0x18 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_RSTMASK                                 0x1fffffff
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B2_RESET                                   0x32000

// 0x1c (PHY_BB_CCA_B2)
#define PHY_BB_CCA_B2_MINCCAPWR_2_LSB                                          20
#define PHY_BB_CCA_B2_MINCCAPWR_2_MSB                                          28
#define PHY_BB_CCA_B2_MINCCAPWR_2_MASK                                         0x1ff00000
#define PHY_BB_CCA_B2_MINCCAPWR_2_GET(x)                                       (((x) & PHY_BB_CCA_B2_MINCCAPWR_2_MASK) >> PHY_BB_CCA_B2_MINCCAPWR_2_LSB)
#define PHY_BB_CCA_B2_MINCCAPWR_2_SET(x)                                       (((0 | (x)) << PHY_BB_CCA_B2_MINCCAPWR_2_LSB) & PHY_BB_CCA_B2_MINCCAPWR_2_MASK)
#define PHY_BB_CCA_B2_MINCCAPWR_2_RESET                                        0x0
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_LSB                                       0
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_MSB                                       8
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_MASK                                      0x1ff
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_GET(x)                                    (((x) & PHY_BB_CCA_B2_CF_MAXCCAPWR_2_MASK) >> PHY_BB_CCA_B2_CF_MAXCCAPWR_2_LSB)
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_SET(x)                                    (((0 | (x)) << PHY_BB_CCA_B2_CF_MAXCCAPWR_2_LSB) & PHY_BB_CCA_B2_CF_MAXCCAPWR_2_MASK)
#define PHY_BB_CCA_B2_CF_MAXCCAPWR_2_RESET                                     0x0
#define PHY_BB_CCA_B2_ADDRESS                                                  (0x1c + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CCA_B2_RSTMASK                                                  0x1ff001ff
#define PHY_BB_CCA_B2_RESET                                                    0x0

// 0x20 (PHY_BB_CCA_CTRL_2_B2)
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_LSB                                10
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_MSB                                17
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_MASK                               0x3fc00
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_GET(x)                             (((x) & PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_MASK) >> PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_LSB)
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_SET(x)                             (((0 | (x)) << PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_LSB) & PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_MASK)
#define PHY_BB_CCA_CTRL_2_B2_NF_GAIN_COMP_2_RESET                              0x0
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_LSB                               0
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_MSB                               8
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_MASK                              0x1ff
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_GET(x)                            (((x) & PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_MASK) >> PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_LSB)
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_SET(x)                            (((0 | (x)) << PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_LSB) & PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_MASK)
#define PHY_BB_CCA_CTRL_2_B2_MINCCAPWR_THR_2_RESET                             0x0
#define PHY_BB_CCA_CTRL_2_B2_ADDRESS                                           (0x20 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CCA_CTRL_2_B2_RSTMASK                                           0x3fdff
#define PHY_BB_CCA_CTRL_2_B2_RESET                                             0x0

// 0x180 (PHY_BB_RSSI_B2)
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_LSB                                        24
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_MSB                                        31
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_MASK                                       0xff000000
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_GET(x)                                     (((x) & PHY_BB_RSSI_B2_RSSI_EXT80_2_MASK) >> PHY_BB_RSSI_B2_RSSI_EXT80_2_LSB)
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_SET(x)                                     (((0 | (x)) << PHY_BB_RSSI_B2_RSSI_EXT80_2_LSB) & PHY_BB_RSSI_B2_RSSI_EXT80_2_MASK)
#define PHY_BB_RSSI_B2_RSSI_EXT80_2_RESET                                      0x0
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_LSB                                        16
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_MSB                                        23
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_MASK                                       0xff0000
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_GET(x)                                     (((x) & PHY_BB_RSSI_B2_RSSI_EXT40_2_MASK) >> PHY_BB_RSSI_B2_RSSI_EXT40_2_LSB)
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_SET(x)                                     (((0 | (x)) << PHY_BB_RSSI_B2_RSSI_EXT40_2_LSB) & PHY_BB_RSSI_B2_RSSI_EXT40_2_MASK)
#define PHY_BB_RSSI_B2_RSSI_EXT40_2_RESET                                      0x0
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_LSB                                        8
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_MSB                                        15
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_MASK                                       0xff00
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_GET(x)                                     (((x) & PHY_BB_RSSI_B2_RSSI_EXT20_2_MASK) >> PHY_BB_RSSI_B2_RSSI_EXT20_2_LSB)
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_SET(x)                                     (((0 | (x)) << PHY_BB_RSSI_B2_RSSI_EXT20_2_LSB) & PHY_BB_RSSI_B2_RSSI_EXT20_2_MASK)
#define PHY_BB_RSSI_B2_RSSI_EXT20_2_RESET                                      0x0
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_LSB                                        0
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_MSB                                        7
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_MASK                                       0xff
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_GET(x)                                     (((x) & PHY_BB_RSSI_B2_RSSI_PRI20_2_MASK) >> PHY_BB_RSSI_B2_RSSI_PRI20_2_LSB)
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_SET(x)                                     (((0 | (x)) << PHY_BB_RSSI_B2_RSSI_PRI20_2_LSB) & PHY_BB_RSSI_B2_RSSI_PRI20_2_MASK)
#define PHY_BB_RSSI_B2_RSSI_PRI20_2_RESET                                      0x0
#define PHY_BB_RSSI_B2_ADDRESS                                                 (0x180 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RSSI_B2_RSTMASK                                                 0xffffffff
#define PHY_BB_RSSI_B2_RESET                                                   0x0

// 0x188 (PHY_BB_AGC_DIG_DC_STATUS_B2)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_LSB                 10
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_MSB                 19
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_MASK                0xffc00
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_GET(x)              (((x) & PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_MASK) >> PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_LSB)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_SET(x)              (((0 | (x)) << PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_LSB) & PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_MASK)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_Q_2_RESET               0x0
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_LSB                 0
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_MSB                 9
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_MASK                0x3ff
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_GET(x)              (((x) & PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_MASK) >> PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_LSB)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_SET(x)              (((0 | (x)) << PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_LSB) & PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_MASK)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_DC_CAL_RESIDUAL_DC_I_2_RESET               0x0
#define PHY_BB_AGC_DIG_DC_STATUS_B2_ADDRESS                                    (0x188 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_AGC_DIG_DC_STATUS_B2_RSTMASK                                    0xfffff
#define PHY_BB_AGC_DIG_DC_STATUS_B2_RESET                                      0x0

// 0x1a0 (PHY_BB_DC_CAL_STATUS_B2)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_LSB                                24
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_MSB                                31
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_MASK                               0xff000000
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_GET(x)                             (((x) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_SET(x)                             (((0 | (x)) << PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_LSB) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2Q_2_RESET                              0x0
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_LSB                                16
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_MSB                                23
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_MASK                               0xff0000
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_GET(x)                             (((x) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_MASK) >> PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_SET(x)                             (((0 | (x)) << PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_LSB) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC2I_2_RESET                              0x0
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_LSB                                8
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_MSB                                15
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_MASK                               0xff00
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_GET(x)                             (((x) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_SET(x)                             (((0 | (x)) << PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_LSB) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1Q_2_RESET                              0x0
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_LSB                                0
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_MSB                                7
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_MASK                               0xff
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_GET(x)                             (((x) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_MASK) >> PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_SET(x)                             (((0 | (x)) << PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_LSB) & PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_B2_OFFSETC1I_2_RESET                              0x0
#define PHY_BB_DC_CAL_STATUS_B2_ADDRESS                                        (0x1a0 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_DC_CAL_STATUS_B2_RSTMASK                                        0xffffffff
#define PHY_BB_DC_CAL_STATUS_B2_RESET                                          0x0

// 0x1a4 (PHY_BB_DC_CAL_STATUS_2_B2)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_LSB                              24
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_MSB                              31
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_MASK                             0xff000000
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_LSB) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4Q_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_LSB                              16
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_MSB                              23
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_MASK                             0xff0000
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_MASK) >> PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_LSB) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC4I_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_LSB                              8
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_MSB                              15
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_MASK                             0xff00
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_LSB) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3Q_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_LSB                              0
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_MSB                              7
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_MASK                             0xff
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_MASK) >> PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_LSB) & PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_2_B2_OFFSETC3I_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_2_B2_ADDRESS                                      (0x1a4 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_DC_CAL_STATUS_2_B2_RSTMASK                                      0xffffffff
#define PHY_BB_DC_CAL_STATUS_2_B2_RESET                                        0x0

// 0x1a8 (PHY_BB_DC_CAL_STATUS_3_B2)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_LSB                              24
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_MSB                              31
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_MASK                             0xff000000
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_LSB) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6Q_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_LSB                              16
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_MSB                              23
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_MASK                             0xff0000
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_MASK) >> PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_LSB) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC6I_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_LSB                              8
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_MSB                              15
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_MASK                             0xff00
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_LSB) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5Q_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_LSB                              0
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_MSB                              7
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_MASK                             0xff
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_MASK) >> PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_LSB) & PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_3_B2_OFFSETC5I_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_3_B2_ADDRESS                                      (0x1a8 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_DC_CAL_STATUS_3_B2_RSTMASK                                      0xffffffff
#define PHY_BB_DC_CAL_STATUS_3_B2_RESET                                        0x0

// 0x1ac (PHY_BB_DC_CAL_STATUS_4_B2)
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_LSB                              8
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_MSB                              15
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_MASK                             0xff00
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_MASK) >> PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_LSB)
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_LSB) & PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_MASK)
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7Q_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_LSB                              0
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_MSB                              7
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_MASK                             0xff
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_GET(x)                           (((x) & PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_MASK) >> PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_LSB)
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_SET(x)                           (((0 | (x)) << PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_LSB) & PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_MASK)
#define PHY_BB_DC_CAL_STATUS_4_B2_OFFSETC7I_2_RESET                            0x0
#define PHY_BB_DC_CAL_STATUS_4_B2_ADDRESS                                      (0x1ac + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_DC_CAL_STATUS_4_B2_RSTMASK                                      0xffff
#define PHY_BB_DC_CAL_STATUS_4_B2_RESET                                        0x0

// 0x1b0 (PHY_BB_RX_GAIN_NF_B2)
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_LSB                           0
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_MSB                           16
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_MASK                          0x1ffff
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_GET(x)                        (((x) & PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_MASK) >> PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_LSB)
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_SET(x)                        (((0 | (x)) << PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_LSB) & PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_MASK)
#define PHY_BB_RX_GAIN_NF_B2_GAIN_VAL_AFTER_NF_2_RESET                         0x0
#define PHY_BB_RX_GAIN_NF_B2_ADDRESS                                           (0x1b0 + __PHY_AGC2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RX_GAIN_NF_B2_RSTMASK                                           0x1ffff
#define PHY_BB_RX_GAIN_NF_B2_RESET                                             0x0



#endif /* _PHY_AGC2_REG_MAP_H_ */
