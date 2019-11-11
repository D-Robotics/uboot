#ifndef __LPDDR4_2133_H__
#define __LPDDR4_2133_H__

#include <asm/arch/ddr.h>
#include <asm/arch/ddr_phy.h>

static struct dram_cfg_param lpddr4_ddrc_cfg[] = {
	/* Start to config, default 2133mbps */
	{ DDRC_MSTR, 0x80080020 },
	{ DDRC_MRCTRL0, 0x40005010 },
	{ DDRC_MRCTRL1, 0x0003ea1e },
	{ DDRC_MRCTRL2, 0xd81408a4 },
	{ DDRC_DERATEEN, 0x00001101 },
	{ DDRC_DERATEINT, 0x27000000 },
	{ DDRC_DERATECTL, 0x00000001 },

	{ DDRC_PWRCTL, 0x00000000 },
	{ DDRC_PWRTMG, 0x0040d204 },
	{ DDRC_HWLPCTL, 0x00910002 },
	{ DDRC_RFSHCTL0, 0x00210000 },
	{ DDRC_RFSHCTL3, 0x00000001 },
#if defined(CONFIG_X2_SOM_BOARD)
	{ DDRC_RFSHTMG, 0x00410060 },
#else
	{ DDRC_RFSHTMG, 0x00410096 },
#endif /* CONFIG_X2_SOM_BOARD */
	{ DDRC_RFSHTMG1, 0x00300000 },
	{ DDRC_CRCPARCTL0, 0x00000000 },
	{ DDRC_CRCPARCTL1, 0x00000000 },

	{ DDRC_INIT0, 0xc0030002 },
	{ DDRC_INIT1, 0x00020002 },
	{ DDRC_INIT2, 0x0000bc05 },
	{ DDRC_INIT3, 0x0034001b },
	{ DDRC_INIT4, 0x00f30000 },
	{ DDRC_INIT5, 0x00030007 },
	{ DDRC_INIT6, 0x0064004d },
	{ DDRC_INIT7, 0x0004004f },
	{ DDRC_DIMMCTL, 0x00000000},

	{ DDRC_DRAMTMG0, 0x14162417 },
	{ DDRC_DRAMTMG1, 0x00040422 },
	{ DDRC_DRAMTMG2, 0x050b0e0f },
	{ DDRC_DRAMTMG3, 0x00708006 },
	{ DDRC_DRAMTMG4, 0x0a04060a },
	{ DDRC_DRAMTMG5, 0x02030808 },
	{ DDRC_DRAMTMG6, 0x01010005 },
	{ DDRC_DRAMTMG7, 0x00000302 },
	{ DDRC_DRAMTMG8, 0x01010101 },
	{ DDRC_DRAMTMG9, 0x40000002 },
	{ DDRC_DRAMTMG10, 0x000a0809 },
	{ DDRC_DRAMTMG11, 0x6901001e },
	{ DDRC_DRAMTMG12, 0x00020000 },
	{ DDRC_DRAMTMG13, 0x0a100002 },
	{ DDRC_DRAMTMG14, 0x00000099 },
	{ DDRC_DRAMTMG15, 0x80000000 },

	{ DDRC_ZQCTL0, 0x12160010 },
	{ DDRC_ZQCTL1, 0x1b7f16c },
	{ DDRC_ZQCTL2, 0x00000000 },

	{ DDRC_DFITMG0, 0x03918206 },
	{ DDRC_DFITMG1, 0x000b0202 },
	{ DDRC_DFILPCFG0, 0x03614101 },
	{ DDRC_DFILPCFG1, 0x00000051 },
	{ DDRC_DFIUPD0, 0x40400018 },
	{ DDRC_DFIUPD1, 0x008c00f5 },
	{ DDRC_DFIUPD2, 0x80000000 },
	{ DDRC_DFIMISC, 0x000000d1 },
	{ DDRC_DFITMG2, 0x00001106 },
	{ DDRC_DFITMG3, 0x00000008 },

	{ DDRC_DBICTL, 0x00000007 },
	{ DDRC_DFIPHYMSTR, 0x00000001 },

	/* bank interleave */
	{ DDRC_ADDRMAP1, 0x00080808 },
	{ DDRC_ADDRMAP2, 0x00000000 },
	{ DDRC_ADDRMAP3, 0x00000000 },
	{ DDRC_ADDRMAP4, 0x00001f1f },
	{ DDRC_ADDRMAP5, 0x070f0707 },
#if defined(CONFIG_X2_SOM_BOARD)
	{ DDRC_ADDRMAP6, 0x0f070707},
#else
	{ DDRC_ADDRMAP6, 0x07070707},
#endif /* CONFIG_X2_SOM_BOARD */
	{ DDRC_ADDRMAP7, 0x00000f0f },
	{ DDRC_ADDRMAP8, 0x00003f3f },
	{ DDRC_ADDRMAP9, 0x07070707 },
	{ DDRC_ADDRMAP10, 0x07070707 },
	{ DDRC_ADDRMAP11, 0x00000007 },
	{ DDRC_ODTCFG, 0x06060820 },

	/* performance setting */
	{ DDRC_ODTMAP, 0x00000000 },
	{ DDRC_SCHED, 0x20003601 },
	{ DDRC_SCHED1, 0x00000000 },
	{ DDRC_PERFHPR1, 0x0f000001 },
	{ DDRC_PERFLPR1, 0x0f00007f },
	{ DDRC_PERFWR1, 0x0f00007f },
	{ DDRC_DBG0, 0x00000000 },
	{ DDRC_DBG1, 0x00000000 },
	{ DDRC_DBGCMD, 0x00000000 },
	{ DDRC_SWCTL, 0x00000001 },
	{ DDRC_POISONCFG, 0x00000001 },
	{ DDRC_PCCFG, 0x00000101 },

	{ DDRC_PCFGR_0, 0x0000707f },
	{ DDRC_PCFGW_0, 0x0000707f },
	{ DDRC_PCFGQOS0_0, 0x02200a08 },
	{ DDRC_PCFGQOS1_0, 0x003f003f },
	{ DDRC_PCFGWQOS0_0, 0x01100a08 },
	{ DDRC_PCFGWQOS1_0, 0x003f003f },

	/* port1 */
	{ DDRC_PCFGR_1, 0x0000707f },
	{ DDRC_PCFGW_1, 0x0000707f },
	{ DDRC_PCFGQOS0_1, 0x02200a08 },
	{ DDRC_PCFGQOS1_1, 0x003f003f },
	{ DDRC_PCFGWQOS0_1, 0x01100a08 },
	{ DDRC_PCFGWQOS1_1, 0x003f003f },

	/* port2 */
	{ DDRC_PCFGR_2, 0x0000707f },
	{ DDRC_PCFGW_2, 0x0000707f },
	{ DDRC_PCFGQOS0_2, 0x02200a08 },
	{ DDRC_PCFGQOS1_2, 0x003f003f },
	{ DDRC_PCFGWQOS0_2, 0x01100a08 },
	{ DDRC_PCFGWQOS1_2, 0x003f003f },

	/* port3 */
	{ DDRC_PCFGR_3, 0x0000707f },
	{ DDRC_PCFGW_3, 0x0000707f },
	{ DDRC_PCFGQOS0_3, 0x02200a08 },
	{ DDRC_PCFGQOS1_3, 0x003f003f },
	{ DDRC_PCFGWQOS0_3, 0x01100a08 },
	{ DDRC_PCFGWQOS1_3, 0x003f003f },

	/* port4 */
	{ DDRC_PCFGR_4, 0x0000707f },
	{ DDRC_PCFGW_4, 0x0000707f },
	{ DDRC_PCFGQOS0_4, 0x02200a08 },
	{ DDRC_PCFGQOS1_4, 0x003f003f },
	{ DDRC_PCFGWQOS0_4, 0x01100a08 },
	{ DDRC_PCFGWQOS1_4, 0x003f003f },

	/* port5 */
	{ DDRC_PCFGR_5, 0x0000707f },
	{ DDRC_PCFGW_5, 0x0000707f },
	{ DDRC_PCFGQOS0_5, 0x02200a08 },
	{ DDRC_PCFGQOS1_5, 0x003f003f },
	{ DDRC_PCFGWQOS0_5, 0x01100a08 },
	{ DDRC_PCFGWQOS1_5, 0x003f003f },
};

/* PHY Initialize Configuration */
static struct dram_cfg_param lpddr4_ddrphy_cfg[] = {
	{ DDRP_DBYTE0_TXSLEWRATE_B0_P0, 0x17f },
	{ DDRP_DBYTE0_TXSLEWRATE_B1_P0, 0x17f },
	{ DDRP_DBYTE1_TXSLEWRATE_B0_P0, 0x17f },
	{ DDRP_DBYTE1_TXSLEWRATE_B1_P0, 0x17f },
	{ DDRP_DBYTE2_TXSLEWRATE_B0_P0, 0x17f },
	{ DDRP_DBYTE2_TXSLEWRATE_B1_P0, 0x17f },
	{ DDRP_DBYTE3_TXSLEWRATE_B0_P0, 0x17f },
	{ DDRP_DBYTE3_TXSLEWRATE_B1_P0, 0x17f },
	{ DDRP_ANIB0_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB1_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB2_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB3_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB4_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB5_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB6_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB7_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB8_ATXSLEWRATE, 0x19f },
	{ DDRP_ANIB9_ATXSLEWRATE, 0x19f },
	{ DDRP_MASTER0_PLLCTRL2_P0, 0xa },
	{ DDRP_MASTER0_ARDPTRINITVAL_P0, 0x2 },
	{ DDRP_INITENG0_SEQ0BGPR4_P0, 0x0 },
	{ DDRP_MASTER0_DQSPREAMBLECONTROL_P0, 0x1e3 },
	{ DDRP_MASTER0_DBYTEDLLMODECNTRL, 0x2 },
	{ DDRP_MASTER0_DLLLOCKPARAM_P0, 0x212 },
	{ DDRP_MASTER0_DLLGAINCTL_P0, 0x61 },
	{ DDRP_MASTER0_PROCODTTIMECTL_P0, 0x3 },
	{ DDRP_DBYTE0_TXODTDRVSTREN_B0_P0, 0x600 },
	{ DDRP_DBYTE0_TXODTDRVSTREN_B1_P0, 0x600 },
	{ DDRP_DBYTE1_TXODTDRVSTREN_B0_P0, 0x600 },
	{ DDRP_DBYTE1_TXODTDRVSTREN_B1_P0, 0x600 },
	{ DDRP_DBYTE2_TXODTDRVSTREN_B0_P0, 0x600 },
	{ DDRP_DBYTE2_TXODTDRVSTREN_B1_P0, 0x600 },
	{ DDRP_DBYTE3_TXODTDRVSTREN_B0_P0, 0x600 },
	{ DDRP_DBYTE3_TXODTDRVSTREN_B1_P0, 0x600 },

#if defined(CONFIG_X2_SOM_BOARD) || \
	defined(CONFIG_X2_MONO_BOARD)
	{ DDRP_DBYTE0_TXIMPEDANCECTRL1_B0_P0, 0xe38 },
	{ DDRP_DBYTE0_TXIMPEDANCECTRL1_B1_P0, 0xe38 },
	{ DDRP_DBYTE1_TXIMPEDANCECTRL1_B0_P0, 0xe38 },
	{ DDRP_DBYTE1_TXIMPEDANCECTRL1_B1_P0, 0xe38 },
	{ DDRP_DBYTE2_TXIMPEDANCECTRL1_B0_P0, 0xe38 },
	{ DDRP_DBYTE2_TXIMPEDANCECTRL1_B1_P0, 0xe38 },
	{ DDRP_DBYTE3_TXIMPEDANCECTRL1_B0_P0, 0xe38 },
	{ DDRP_DBYTE3_TXIMPEDANCECTRL1_B1_P0, 0xe38 },
#else
	{ DDRP_DBYTE0_TXIMPEDANCECTRL1_B0_P0, 0x618 },
	{ DDRP_DBYTE0_TXIMPEDANCECTRL1_B1_P0, 0x618 },
	{ DDRP_DBYTE1_TXIMPEDANCECTRL1_B0_P0, 0x618 },
	{ DDRP_DBYTE1_TXIMPEDANCECTRL1_B1_P0, 0x618 },
	{ DDRP_DBYTE2_TXIMPEDANCECTRL1_B0_P0, 0x618 },
	{ DDRP_DBYTE2_TXIMPEDANCECTRL1_B1_P0, 0x618 },
	{ DDRP_DBYTE3_TXIMPEDANCECTRL1_B0_P0, 0x618 },
	{ DDRP_DBYTE3_TXIMPEDANCECTRL1_B1_P0, 0x618 },
#endif /* CONFIG_X2_SOM_BOARD */
	{ DDRP_ANIB0_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB1_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB2_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB3_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB4_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB5_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB6_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB7_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB8_ATXIMPEDANCE, 0x3ff },
	{ DDRP_ANIB9_ATXIMPEDANCE, 0x3ff },
	{ DDRP_MASTER0_DFIMODE, 0x3 },
	{ DDRP_MASTER0_DFICAMODE, 0x4 },
	{ DDRP_MASTER0_CALDRVSTR0, 0x0 },
	{ DDRP_MASTER0_CALUCLKINFO_P0, 0x215 },
	{ DDRP_MASTER0_CALRATE, 0x9 },
	{ DDRP_MASTER0_VREFINGLOBAL_P0, 0x104 },
	{ DDRP_DBYTE0_DQDQSRCVCNTRL_B0_P0, 0x5a1 },
	{ DDRP_DBYTE0_DQDQSRCVCNTRL_B1_P0, 0x5a1 },
	{ DDRP_DBYTE1_DQDQSRCVCNTRL_B0_P0, 0x5a1 },
	{ DDRP_DBYTE1_DQDQSRCVCNTRL_B1_P0, 0x5a1 },
	{ DDRP_DBYTE2_DQDQSRCVCNTRL_B0_P0, 0x5a1 },
	{ DDRP_DBYTE2_DQDQSRCVCNTRL_B1_P0, 0x5a1 },
	{ DDRP_DBYTE3_DQDQSRCVCNTRL_B0_P0, 0x5a1 },
	{ DDRP_DBYTE3_DQDQSRCVCNTRL_B1_P0, 0x5a1 },
	{ DDRP_MASTER0_DFIFREQRATIO_P0, 0x1 },
	{ DDRP_MASTER0_TRISTATEMODECA_P0, 0x1 },
	{ DDRP_MASTER0_DFIFREQXLAT0, 0x0 },
	{ DDRP_MASTER0_DFIFREQXLAT1, 0x0 },
	{ DDRP_MASTER0_DFIFREQXLAT2, 0x4444 },
	{ DDRP_MASTER0_DFIFREQXLAT3, 0x8888 },
	{ DDRP_MASTER0_DFIFREQXLAT4, 0x5555 },
	{ DDRP_MASTER0_DFIFREQXLAT5, 0x0 },
	{ DDRP_MASTER0_DFIFREQXLAT6, 0x0 },
	{ DDRP_MASTER0_DFIFREQXLAT7, 0xf000 },
	{ DDRP_MASTER0_MASTERX4CONFIG, 0x0 },
	{ DDRP_MASTER0_DMIPINPRESENT_P0, 0x1 },
	{ DDRP_MASTER0_ACX4ANIBDIS, 0x0 },
	{ DDRP_MASTER0_CALMISC2, 0x2000 },
	{ DDRP_MASTER0_CALOFFSETS, 0x2240 },
	{ DDRP_MASTER0_PLLCTRL4_P0, 0x17f },
	{ DDRP_MASTER0_PLLCTRL1_P0, 0x60 },

#if defined(CONFIG_X2_SOM_BOARD) || \
	defined(CONFIG_X2_MONO_BOARD)
	{ DDRP_DBYTE0_DQ0LNSEL, 0x0 },
	{ DDRP_DBYTE0_DQ1LNSEL, 0x1 },
	{ DDRP_DBYTE0_DQ2LNSEL, 0x4 },
	{ DDRP_DBYTE0_DQ3LNSEL, 0x2 },
	{ DDRP_DBYTE0_DQ4LNSEL, 0x7 },
	{ DDRP_DBYTE0_DQ5LNSEL, 0x5 },
	{ DDRP_DBYTE0_DQ6LNSEL, 0x6 },
	{ DDRP_DBYTE0_DQ7LNSEL, 0x3 },

	{ DDRP_DBYTE1_DQ0LNSEL, 0x1 },
#if defined(CONFIG_X2_SOM_BOARD)
	{ DDRP_DBYTE1_DQ1LNSEL, 0x6 },
#else
	{ DDRP_DBYTE1_DQ1LNSEL, 0x7 },
#endif /* CONFIG_X2_SOM_BOARD */
	{ DDRP_DBYTE1_DQ2LNSEL, 0x5 },
	{ DDRP_DBYTE1_DQ3LNSEL, 0x4 },
	{ DDRP_DBYTE1_DQ4LNSEL, 0x2 },
	{ DDRP_DBYTE1_DQ5LNSEL, 0x0 },
#if defined(CONFIG_X2_SOM_BOARD)
	{ DDRP_DBYTE1_DQ6LNSEL, 0x7 },
#else
	{ DDRP_DBYTE1_DQ6LNSEL, 0x6 },
#endif /* CONFIG_X2_SOM_BOARD */
	{ DDRP_DBYTE1_DQ7LNSEL, 0x3 },

	{ DDRP_DBYTE2_DQ0LNSEL, 0x3 },
	{ DDRP_DBYTE2_DQ1LNSEL, 0x6 },
	{ DDRP_DBYTE2_DQ2LNSEL, 0x0 },
	{ DDRP_DBYTE2_DQ3LNSEL, 0x1 },
	{ DDRP_DBYTE2_DQ4LNSEL, 0x7 },
	{ DDRP_DBYTE2_DQ5LNSEL, 0x5 },
	{ DDRP_DBYTE2_DQ6LNSEL, 0x2 },
	{ DDRP_DBYTE2_DQ7LNSEL, 0x4 },

	{ DDRP_DBYTE3_DQ0LNSEL, 0x7 },
	{ DDRP_DBYTE3_DQ1LNSEL, 0x0 },
	{ DDRP_DBYTE3_DQ2LNSEL, 0x4 },
	{ DDRP_DBYTE3_DQ3LNSEL, 0x2 },
	{ DDRP_DBYTE3_DQ4LNSEL, 0x5 },
	{ DDRP_DBYTE3_DQ5LNSEL, 0x3 },
	{ DDRP_DBYTE3_DQ6LNSEL, 0x1 },
	{ DDRP_DBYTE3_DQ7LNSEL, 0x6 },
#endif /* CONFIG_X2_SOM_BOARD || CONFIG_X2_MONO_BOARD */
};

/* DRAM PHY init engine image */
static struct dram_cfg_param lpddr4_phy_pie[] = {
	{ DDRP_APBONLY0_MICROCONTMUXSEL, 0x0 },
	{ DDRP_INITENG0_PRESEQUENCEREG0B0S0, 0x10 },
	{ DDRP_INITENG0_PRESEQUENCEREG0B0S1, 0x400 },
	{ DDRP_INITENG0_PRESEQUENCEREG0B0S2, 0x10e },
	{ DDRP_INITENG0_PRESEQUENCEREG0B1S0, 0x0 },
	{ DDRP_INITENG0_PRESEQUENCEREG0B1S1, 0x0 },
	{ DDRP_INITENG0_PRESEQUENCEREG0B1S2, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B0S0, 0xb },
	{ DDRP_INITENG0_SEQUENCEREG0B0S1, 0x480 },
	{ DDRP_INITENG0_SEQUENCEREG0B0S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B1S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B1S1, 0x448 },
	{ DDRP_INITENG0_SEQUENCEREG0B1S2, 0x139 },
	{ DDRP_INITENG0_SEQUENCEREG0B2S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B2S1, 0x478 },
	{ DDRP_INITENG0_SEQUENCEREG0B2S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B3S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B3S1, 0xe8 },
	{ DDRP_INITENG0_SEQUENCEREG0B3S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B4S0, 0x2 },
	{ DDRP_INITENG0_SEQUENCEREG0B4S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B4S2, 0x139 },
	{ DDRP_INITENG0_SEQUENCEREG0B5S0, 0xb },
	{ DDRP_INITENG0_SEQUENCEREG0B5S1, 0x7c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B5S2, 0x139 },
	{ DDRP_INITENG0_SEQUENCEREG0B6S0, 0x44 },
	{ DDRP_INITENG0_SEQUENCEREG0B6S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B6S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B7S0, 0x14f },
	{ DDRP_INITENG0_SEQUENCEREG0B7S1, 0x630 },
	{ DDRP_INITENG0_SEQUENCEREG0B7S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B8S0, 0x47 },
	{ DDRP_INITENG0_SEQUENCEREG0B8S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B8S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B9S0, 0x4f },
	{ DDRP_INITENG0_SEQUENCEREG0B9S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B9S2, 0x179 },
	{ DDRP_INITENG0_SEQUENCEREG0B10S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B10S1, 0xe0 },
	{ DDRP_INITENG0_SEQUENCEREG0B10S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B11S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B11S1, 0x7c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B11S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B12S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B12S1, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B12S2, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B13S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B13S1, 0x45a },
	{ DDRP_INITENG0_SEQUENCEREG0B13S2, 0x9 },
	{ DDRP_INITENG0_SEQUENCEREG0B14S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B14S1, 0x448 },
	{ DDRP_INITENG0_SEQUENCEREG0B14S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B15S0, 0x40 },
	{ DDRP_INITENG0_SEQUENCEREG0B15S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B15S2, 0x179 },
	{ DDRP_INITENG0_SEQUENCEREG0B16S0, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B16S1, 0x618 },
	{ DDRP_INITENG0_SEQUENCEREG0B16S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B17S0, 0x40c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B17S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B17S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B18S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B18S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B18S2, 0x48 },
	{ DDRP_INITENG0_SEQUENCEREG0B19S0, 0x4040 },
	{ DDRP_INITENG0_SEQUENCEREG0B19S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B19S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B20S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B20S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B20S2, 0x48 },
	{ DDRP_INITENG0_SEQUENCEREG0B21S0, 0x40 },
	{ DDRP_INITENG0_SEQUENCEREG0B21S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B21S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B22S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B22S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B22S2, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B23S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B23S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B23S2, 0x78 },
	{ DDRP_INITENG0_SEQUENCEREG0B24S0, 0x549 },
	{ DDRP_INITENG0_SEQUENCEREG0B24S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B24S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B25S0, 0xd49 },
	{ DDRP_INITENG0_SEQUENCEREG0B25S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B25S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B26S0, 0x94a },
	{ DDRP_INITENG0_SEQUENCEREG0B26S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B26S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B27S0, 0x441 },
	{ DDRP_INITENG0_SEQUENCEREG0B27S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B27S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B28S0, 0x42 },
	{ DDRP_INITENG0_SEQUENCEREG0B28S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B28S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B29S0, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B29S1, 0x633 },
	{ DDRP_INITENG0_SEQUENCEREG0B29S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B30S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B30S1, 0xe0 },
	{ DDRP_INITENG0_SEQUENCEREG0B30S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B31S0, 0xa },
	{ DDRP_INITENG0_SEQUENCEREG0B31S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B31S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B32S0, 0x9 },
	{ DDRP_INITENG0_SEQUENCEREG0B32S1, 0x3c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B32S2, 0x149 },
	{ DDRP_INITENG0_SEQUENCEREG0B33S0, 0x9 },
	{ DDRP_INITENG0_SEQUENCEREG0B33S1, 0x3c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B33S2, 0x159 },
	{ DDRP_INITENG0_SEQUENCEREG0B34S0, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B34S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B34S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B35S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B35S1, 0x3c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B35S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B36S0, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B36S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B36S2, 0x48 },
	{ DDRP_INITENG0_SEQUENCEREG0B37S0, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B37S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B37S2, 0x58 },
	{ DDRP_INITENG0_SEQUENCEREG0B38S0, 0xb },
	{ DDRP_INITENG0_SEQUENCEREG0B38S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B38S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B39S0, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B39S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B39S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B40S0, 0x5 },
	{ DDRP_INITENG0_SEQUENCEREG0B40S1, 0x7c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B40S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B41S0, 0xd },
	{ DDRP_INITENG0_SEQUENCEREG0B41S1, 0x7c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B41S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B42S0, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B42S1, 0x7c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B42S2, 0x109 },
	{ DDRP_ACSM0_ACSMSEQ0X0, 0x811 },
	{ DDRP_ACSM0_ACSMSEQ1X0, 0x880 },
	{ DDRP_ACSM0_ACSMSEQ2X0, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X0, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X1, 0x4008 },
	{ DDRP_ACSM0_ACSMSEQ1X1, 0x83 },
	{ DDRP_ACSM0_ACSMSEQ2X1, 0x4f },
	{ DDRP_ACSM0_ACSMSEQ3X1, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X2, 0x4040 },
	{ DDRP_ACSM0_ACSMSEQ1X2, 0x83 },
	{ DDRP_ACSM0_ACSMSEQ2X2, 0x51 },
	{ DDRP_ACSM0_ACSMSEQ3X2, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X3, 0x811 },
	{ DDRP_ACSM0_ACSMSEQ1X3, 0x880 },
	{ DDRP_ACSM0_ACSMSEQ2X3, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X3, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X4, 0x720 },
	{ DDRP_ACSM0_ACSMSEQ1X4, 0xf },
	{ DDRP_ACSM0_ACSMSEQ2X4, 0x1740 },
	{ DDRP_ACSM0_ACSMSEQ3X4, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X5, 0x16 },
	{ DDRP_ACSM0_ACSMSEQ1X5, 0x83 },
	{ DDRP_ACSM0_ACSMSEQ2X5, 0x4b },
	{ DDRP_ACSM0_ACSMSEQ3X5, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X6, 0x716 },
	{ DDRP_ACSM0_ACSMSEQ1X6, 0xf },
	{ DDRP_ACSM0_ACSMSEQ2X6, 0x2001 },
	{ DDRP_ACSM0_ACSMSEQ3X6, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X7, 0x716 },
	{ DDRP_ACSM0_ACSMSEQ1X7, 0xf },
	{ DDRP_ACSM0_ACSMSEQ2X7, 0x2800 },
	{ DDRP_ACSM0_ACSMSEQ3X7, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X8, 0x716 },
	{ DDRP_ACSM0_ACSMSEQ1X8, 0xf },
	{ DDRP_ACSM0_ACSMSEQ2X8, 0xf00 },
	{ DDRP_ACSM0_ACSMSEQ3X8, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X9, 0x720 },
	{ DDRP_ACSM0_ACSMSEQ1X9, 0xf },
	{ DDRP_ACSM0_ACSMSEQ2X9, 0x1400 },
	{ DDRP_ACSM0_ACSMSEQ3X9, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X10, 0xe08 },
	{ DDRP_ACSM0_ACSMSEQ1X10, 0xc15 },
	{ DDRP_ACSM0_ACSMSEQ2X10, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X10, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X11, 0x625 },
	{ DDRP_ACSM0_ACSMSEQ1X11, 0x15 },
	{ DDRP_ACSM0_ACSMSEQ2X11, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X11, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X12, 0x4028 },
	{ DDRP_ACSM0_ACSMSEQ1X12, 0x80 },
	{ DDRP_ACSM0_ACSMSEQ2X12, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X12, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X13, 0xe08 },
	{ DDRP_ACSM0_ACSMSEQ1X13, 0xc1a },
	{ DDRP_ACSM0_ACSMSEQ2X13, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X13, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X14, 0x625 },
	{ DDRP_ACSM0_ACSMSEQ1X14, 0x1a },
	{ DDRP_ACSM0_ACSMSEQ2X14, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X14, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X15, 0x4040 },
	{ DDRP_ACSM0_ACSMSEQ1X15, 0x80 },
	{ DDRP_ACSM0_ACSMSEQ2X15, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X15, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X16, 0x2604 },
	{ DDRP_ACSM0_ACSMSEQ1X16, 0x15 },
	{ DDRP_ACSM0_ACSMSEQ2X16, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X16, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X17, 0x708 },
	{ DDRP_ACSM0_ACSMSEQ1X17, 0x5 },
	{ DDRP_ACSM0_ACSMSEQ2X17, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X17, 0x2002 },
	{ DDRP_ACSM0_ACSMSEQ0X18, 0x8 },
	{ DDRP_ACSM0_ACSMSEQ1X18, 0x80 },
	{ DDRP_ACSM0_ACSMSEQ2X18, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X18, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X19, 0x2604 },
	{ DDRP_ACSM0_ACSMSEQ1X19, 0x1a },
	{ DDRP_ACSM0_ACSMSEQ2X19, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X19, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X20, 0x708 },
	{ DDRP_ACSM0_ACSMSEQ1X20, 0xa },
	{ DDRP_ACSM0_ACSMSEQ2X20, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X20, 0x2002 },
	{ DDRP_ACSM0_ACSMSEQ0X21, 0x4040 },
	{ DDRP_ACSM0_ACSMSEQ1X21, 0x80 },
	{ DDRP_ACSM0_ACSMSEQ2X21, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X21, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X22, 0x60a },
	{ DDRP_ACSM0_ACSMSEQ1X22, 0x15 },
	{ DDRP_ACSM0_ACSMSEQ2X22, 0x1200 },
	{ DDRP_ACSM0_ACSMSEQ3X22, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X23, 0x61a },
	{ DDRP_ACSM0_ACSMSEQ1X23, 0x15 },
	{ DDRP_ACSM0_ACSMSEQ2X23, 0x1300 },
	{ DDRP_ACSM0_ACSMSEQ3X23, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X24, 0x60a },
	{ DDRP_ACSM0_ACSMSEQ1X24, 0x1a },
	{ DDRP_ACSM0_ACSMSEQ2X24, 0x1200 },
	{ DDRP_ACSM0_ACSMSEQ3X24, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X25, 0x642 },
	{ DDRP_ACSM0_ACSMSEQ1X25, 0x1a },
	{ DDRP_ACSM0_ACSMSEQ2X25, 0x1300 },
	{ DDRP_ACSM0_ACSMSEQ3X25, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ0X26, 0x4808 },
	{ DDRP_ACSM0_ACSMSEQ1X26, 0x880 },
	{ DDRP_ACSM0_ACSMSEQ2X26, 0x0 },
	{ DDRP_ACSM0_ACSMSEQ3X26, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B43S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B43S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B43S2, 0x11a },
	{ DDRP_INITENG0_SEQUENCEREG0B44S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B44S1, 0x7aa },
	{ DDRP_INITENG0_SEQUENCEREG0B44S2, 0x2a },
	{ DDRP_INITENG0_SEQUENCEREG0B45S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B45S1, 0x7b2 },
	{ DDRP_INITENG0_SEQUENCEREG0B45S2, 0x2a },
	{ DDRP_INITENG0_SEQUENCEREG0B46S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B46S1, 0x7c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B46S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B47S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B47S1, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B47S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B48S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B48S1, 0x2a8 },
	{ DDRP_INITENG0_SEQUENCEREG0B48S2, 0x129 },
	{ DDRP_INITENG0_SEQUENCEREG0B49S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B49S1, 0x370 },
	{ DDRP_INITENG0_SEQUENCEREG0B49S2, 0x129 },
	{ DDRP_INITENG0_SEQUENCEREG0B50S0, 0xa },
	{ DDRP_INITENG0_SEQUENCEREG0B50S1, 0x3c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B50S2, 0x1a9 },
	{ DDRP_INITENG0_SEQUENCEREG0B51S0, 0xc },
	{ DDRP_INITENG0_SEQUENCEREG0B51S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B51S2, 0x199 },
	{ DDRP_INITENG0_SEQUENCEREG0B52S0, 0x14 },
	{ DDRP_INITENG0_SEQUENCEREG0B52S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B52S2, 0x11a },
	{ DDRP_INITENG0_SEQUENCEREG0B53S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B53S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B53S2, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B54S0, 0xe },
	{ DDRP_INITENG0_SEQUENCEREG0B54S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B54S2, 0x199 },
	{ DDRP_INITENG0_SEQUENCEREG0B55S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B55S1, 0x8568 },
	{ DDRP_INITENG0_SEQUENCEREG0B55S2, 0x108 },
	{ DDRP_INITENG0_SEQUENCEREG0B56S0, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B56S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B56S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B57S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B57S1, 0x1d8 },
	{ DDRP_INITENG0_SEQUENCEREG0B57S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B58S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B58S1, 0x8558 },
	{ DDRP_INITENG0_SEQUENCEREG0B58S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B59S0, 0x70 },
	{ DDRP_INITENG0_SEQUENCEREG0B59S1, 0x788 },
	{ DDRP_INITENG0_SEQUENCEREG0B59S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B60S0, 0x1ff8 },
	{ DDRP_INITENG0_SEQUENCEREG0B60S1, 0x85a8 },
	{ DDRP_INITENG0_SEQUENCEREG0B60S2, 0x1e8 },
	{ DDRP_INITENG0_SEQUENCEREG0B61S0, 0x50 },
	{ DDRP_INITENG0_SEQUENCEREG0B61S1, 0x798 },
	{ DDRP_INITENG0_SEQUENCEREG0B61S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B62S0, 0x60 },
	{ DDRP_INITENG0_SEQUENCEREG0B62S1, 0x7a0 },
	{ DDRP_INITENG0_SEQUENCEREG0B62S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B63S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B63S1, 0x8310 },
	{ DDRP_INITENG0_SEQUENCEREG0B63S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B64S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B64S1, 0xa310 },
	{ DDRP_INITENG0_SEQUENCEREG0B64S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B65S0, 0xa },
	{ DDRP_INITENG0_SEQUENCEREG0B65S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B65S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B66S0, 0x6e },
	{ DDRP_INITENG0_SEQUENCEREG0B66S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B66S2, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B67S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B67S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B67S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B68S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B68S1, 0x8310 },
	{ DDRP_INITENG0_SEQUENCEREG0B68S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B69S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B69S1, 0xa310 },
	{ DDRP_INITENG0_SEQUENCEREG0B69S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B70S0, 0x1ff8 },
	{ DDRP_INITENG0_SEQUENCEREG0B70S1, 0x85a8 },
	{ DDRP_INITENG0_SEQUENCEREG0B70S2, 0x1e8 },
	{ DDRP_INITENG0_SEQUENCEREG0B71S0, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B71S1, 0x798 },
	{ DDRP_INITENG0_SEQUENCEREG0B71S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B72S0, 0x78 },
	{ DDRP_INITENG0_SEQUENCEREG0B72S1, 0x7a0 },
	{ DDRP_INITENG0_SEQUENCEREG0B72S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B73S0, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B73S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B73S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B74S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B74S1, 0x8b10 },
	{ DDRP_INITENG0_SEQUENCEREG0B74S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B75S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B75S1, 0xab10 },
	{ DDRP_INITENG0_SEQUENCEREG0B75S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B76S0, 0xa },
	{ DDRP_INITENG0_SEQUENCEREG0B76S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B76S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B77S0, 0x58 },
	{ DDRP_INITENG0_SEQUENCEREG0B77S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B77S2, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B78S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B78S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B78S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B79S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B79S1, 0x8b10 },
	{ DDRP_INITENG0_SEQUENCEREG0B79S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B80S0, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B80S1, 0xab10 },
	{ DDRP_INITENG0_SEQUENCEREG0B80S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B81S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B81S1, 0x1d8 },
	{ DDRP_INITENG0_SEQUENCEREG0B81S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B82S0, 0x80 },
	{ DDRP_INITENG0_SEQUENCEREG0B82S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B82S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B83S0, 0x18 },
	{ DDRP_INITENG0_SEQUENCEREG0B83S1, 0x7aa },
	{ DDRP_INITENG0_SEQUENCEREG0B83S2, 0x6a },
	{ DDRP_INITENG0_SEQUENCEREG0B84S0, 0xa },
	{ DDRP_INITENG0_SEQUENCEREG0B84S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B84S2, 0x1e9 },
	{ DDRP_INITENG0_SEQUENCEREG0B85S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B85S1, 0x8080 },
	{ DDRP_INITENG0_SEQUENCEREG0B85S2, 0x108 },
	{ DDRP_INITENG0_SEQUENCEREG0B86S0, 0xf },
	{ DDRP_INITENG0_SEQUENCEREG0B86S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B86S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B87S0, 0xc },
	{ DDRP_INITENG0_SEQUENCEREG0B87S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B87S2, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B88S0, 0x9 },
	{ DDRP_INITENG0_SEQUENCEREG0B88S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B88S2, 0x1a9 },
	{ DDRP_INITENG0_SEQUENCEREG0B89S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B89S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B89S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B90S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B90S1, 0x8080 },
	{ DDRP_INITENG0_SEQUENCEREG0B90S2, 0x108 },
	{ DDRP_INITENG0_SEQUENCEREG0B91S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B91S1, 0x7aa },
	{ DDRP_INITENG0_SEQUENCEREG0B91S2, 0x6a },
	{ DDRP_INITENG0_SEQUENCEREG0B92S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B92S1, 0x8568 },
	{ DDRP_INITENG0_SEQUENCEREG0B92S2, 0x108 },
	{ DDRP_INITENG0_SEQUENCEREG0B93S0, 0xb7 },
	{ DDRP_INITENG0_SEQUENCEREG0B93S1, 0x790 },
	{ DDRP_INITENG0_SEQUENCEREG0B93S2, 0x16a },
	{ DDRP_INITENG0_SEQUENCEREG0B94S0, 0x1f },
	{ DDRP_INITENG0_SEQUENCEREG0B94S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B94S2, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B95S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B95S1, 0x8558 },
	{ DDRP_INITENG0_SEQUENCEREG0B95S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B96S0, 0xf },
	{ DDRP_INITENG0_SEQUENCEREG0B96S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B96S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B97S0, 0xd },
	{ DDRP_INITENG0_SEQUENCEREG0B97S1, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B97S2, 0x68 },
	{ DDRP_INITENG0_SEQUENCEREG0B98S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B98S1, 0x408 },
	{ DDRP_INITENG0_SEQUENCEREG0B98S2, 0x169 },
	{ DDRP_INITENG0_SEQUENCEREG0B99S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B99S1, 0x8558 },
	{ DDRP_INITENG0_SEQUENCEREG0B99S2, 0x168 },
	{ DDRP_INITENG0_SEQUENCEREG0B100S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B100S1, 0x3c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B100S2, 0x1a9 },
	{ DDRP_INITENG0_SEQUENCEREG0B101S0, 0x3 },
	{ DDRP_INITENG0_SEQUENCEREG0B101S1, 0x370 },
	{ DDRP_INITENG0_SEQUENCEREG0B101S2, 0x129 },
	{ DDRP_INITENG0_SEQUENCEREG0B102S0, 0x20 },
	{ DDRP_INITENG0_SEQUENCEREG0B102S1, 0x2aa },
	{ DDRP_INITENG0_SEQUENCEREG0B102S2, 0x9 },
	{ DDRP_INITENG0_SEQUENCEREG0B103S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B103S1, 0x400 },
	{ DDRP_INITENG0_SEQUENCEREG0B103S2, 0x10e },
	{ DDRP_INITENG0_SEQUENCEREG0B104S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B104S1, 0xe8 },
	{ DDRP_INITENG0_SEQUENCEREG0B104S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B105S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B105S1, 0x8140 },
	{ DDRP_INITENG0_SEQUENCEREG0B105S2, 0x10c },
	{ DDRP_INITENG0_SEQUENCEREG0B106S0, 0x10 },
	{ DDRP_INITENG0_SEQUENCEREG0B106S1, 0x8138 },
	{ DDRP_INITENG0_SEQUENCEREG0B106S2, 0x10c },
	{ DDRP_INITENG0_SEQUENCEREG0B107S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B107S1, 0x7c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B107S2, 0x101 },
	{ DDRP_INITENG0_SEQUENCEREG0B108S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B108S1, 0x448 },
	{ DDRP_INITENG0_SEQUENCEREG0B108S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B109S0, 0xf },
	{ DDRP_INITENG0_SEQUENCEREG0B109S1, 0x7c0 },
	{ DDRP_INITENG0_SEQUENCEREG0B109S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B110S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B110S1, 0xe8 },
	{ DDRP_INITENG0_SEQUENCEREG0B110S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B111S0, 0x47 },
	{ DDRP_INITENG0_SEQUENCEREG0B111S1, 0x630 },
	{ DDRP_INITENG0_SEQUENCEREG0B111S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B112S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B112S1, 0x618 },
	{ DDRP_INITENG0_SEQUENCEREG0B112S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B113S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B113S1, 0xe0 },
	{ DDRP_INITENG0_SEQUENCEREG0B113S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B114S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B114S1, 0x7c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B114S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B115S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B115S1, 0x8140 },
	{ DDRP_INITENG0_SEQUENCEREG0B115S2, 0x10c },
	{ DDRP_INITENG0_SEQUENCEREG0B116S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B116S1, 0x478 },
	{ DDRP_INITENG0_SEQUENCEREG0B116S2, 0x109 },
	{ DDRP_INITENG0_SEQUENCEREG0B117S0, 0x0 },
	{ DDRP_INITENG0_SEQUENCEREG0B117S1, 0x1 },
	{ DDRP_INITENG0_SEQUENCEREG0B117S2, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B118S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B118S1, 0x4 },
	{ DDRP_INITENG0_SEQUENCEREG0B118S2, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B119S0, 0x8 },
	{ DDRP_INITENG0_SEQUENCEREG0B119S1, 0x7c8 },
	{ DDRP_INITENG0_SEQUENCEREG0B119S2, 0x101 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B0S0, 0x0 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B0S1, 0x0 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B0S2, 0x8 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B1S0, 0x0 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B1S1, 0x0 },
	{ DDRP_INITENG0_POSTSEQUENCEREG0B1S2, 0x0 },
	{ DDRP_APBONLY0_SEQUENCEROVERRIDE, 0x400 },
	{ DDRP_INITENG0_STARTVECTOR0B0, 0x0 },
	{ DDRP_INITENG0_STARTVECTOR0B8, 0x2b },
	{ DDRP_INITENG0_STARTVECTOR0B15, 0x6c },
	{ DDRP_ACSM0_ACSMCSMAPCTRL0, 0x0 },
	{ DDRP_ACSM0_ACSMCSMAPCTRL1, 0x101 },
	{ DDRP_ACSM0_ACSMCSMAPCTRL2, 0x105 },
	{ DDRP_ACSM0_ACSMCSMAPCTRL3, 0x107 },
	{ DDRP_ACSM0_ACSMCSMAPCTRL4, 0x10f },
	{ DDRP_ACSM0_ACSMCSMAPCTRL5, 0x202 },
	{ DDRP_ACSM0_ACSMCSMAPCTRL6, 0x20a },
	{ DDRP_ACSM0_ACSMCSMAPCTRL7, 0x20b },
	{ DDRP_MASTER0_DBYTEDLLMODECNTRL, 0x2 },
	{ DDRP_MASTER0_SEQ0BDLY0_P0, 0x42 },
	{ DDRP_MASTER0_SEQ0BDLY1_P0, 0x85 },
	{ DDRP_MASTER0_SEQ0BDLY2_P0, 0x534 },
	{ DDRP_MASTER0_SEQ0BDLY3_P0, 0x2c },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG0, 0x0 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG1, 0x173 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG2, 0x60 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG3, 0x6110 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG4, 0x2152 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG5, 0xdfbd },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG6, 0x2060 },
	{ DDRP_INITENG0_SEQ0BDISABLEFLAG7, 0x6152 },
	{ DDRP_MASTER0_PPTTRAINSETUP_P0, 0x5a },
	{ DDRP_MASTER0_PPTTRAINSETUP2_P0, 0x3 },
	{ DDRP_ACSM0_ACSMPLAYBACK0X0_P0, 0xe0 },
	{ DDRP_ACSM0_ACSMPLAYBACK1X0_P0, 0x12 },
	{ DDRP_ACSM0_ACSMPLAYBACK0X1_P0, 0xe0 },
	{ DDRP_ACSM0_ACSMPLAYBACK1X1_P0, 0x12 },
	{ DDRP_ACSM0_ACSMPLAYBACK0X2_P0, 0xe0 },
	{ DDRP_ACSM0_ACSMPLAYBACK1X2_P0, 0x12 },
	{ DDRP_ACSM0_ACSMCTRL13, 0xf },
	{ DDRP_DBYTE0_TSMBYTE1, 0x1 },
	{ DDRP_DBYTE0_TSMBYTE2, 0x1 },
	{ DDRP_DBYTE0_TSMBYTE3, 0x180 },
	{ DDRP_DBYTE0_TSMBYTE5, 0x1 },
	{ DDRP_DBYTE0_TRAININGPARAM, 0x6209 },
	{ DDRP_DBYTE0_TSM0_I0, 0x1 },
	{ DDRP_DBYTE0_TSM2_I1, 0x1 },
	{ DDRP_DBYTE0_TSM2_I2, 0x1 },
	{ DDRP_DBYTE0_TSM2_I3, 0x1 },
	{ DDRP_DBYTE0_TSM2_I4, 0x1 },
	{ DDRP_DBYTE0_TSM2_I5, 0x1 },
	{ DDRP_DBYTE0_TSM2_I6, 0x1 },
	{ DDRP_DBYTE0_TSM2_I7, 0x1 },
	{ DDRP_DBYTE0_TSM2_I8, 0x1 },
	{ DDRP_DBYTE1_TSMBYTE1, 0x1 },
	{ DDRP_DBYTE1_TSMBYTE2, 0x1 },
	{ DDRP_DBYTE1_TSMBYTE3, 0x180 },
	{ DDRP_DBYTE1_TSMBYTE5, 0x1 },
	{ DDRP_DBYTE1_TRAININGPARAM, 0x6209 },
	{ DDRP_DBYTE1_TSM0_I0, 0x1 },
	{ DDRP_DBYTE1_TSM2_I1, 0x1 },
	{ DDRP_DBYTE1_TSM2_I2, 0x1 },
	{ DDRP_DBYTE1_TSM2_I3, 0x1 },
	{ DDRP_DBYTE1_TSM2_I4, 0x1 },
	{ DDRP_DBYTE1_TSM2_I5, 0x1 },
	{ DDRP_DBYTE1_TSM2_I6, 0x1 },
	{ DDRP_DBYTE1_TSM2_I7, 0x1 },
	{ DDRP_DBYTE1_TSM2_I8, 0x1 },
	{ DDRP_DBYTE2_TSMBYTE1, 0x1 },
	{ DDRP_DBYTE2_TSMBYTE2, 0x1 },
	{ DDRP_DBYTE2_TSMBYTE3, 0x180 },
	{ DDRP_DBYTE2_TSMBYTE5, 0x1 },
	{ DDRP_DBYTE2_TRAININGPARAM, 0x6209 },
	{ DDRP_DBYTE2_TSM0_I0, 0x1 },
	{ DDRP_DBYTE2_TSM2_I1, 0x1 },
	{ DDRP_DBYTE2_TSM2_I2, 0x1 },
	{ DDRP_DBYTE2_TSM2_I3, 0x1 },
	{ DDRP_DBYTE2_TSM2_I4, 0x1 },
	{ DDRP_DBYTE2_TSM2_I5, 0x1 },
	{ DDRP_DBYTE2_TSM2_I6, 0x1 },
	{ DDRP_DBYTE2_TSM2_I7, 0x1 },
	{ DDRP_DBYTE2_TSM2_I8, 0x1 },
	{ DDRP_DBYTE3_TSMBYTE1, 0x1 },
	{ DDRP_DBYTE3_TSMBYTE2, 0x1 },
	{ DDRP_DBYTE3_TSMBYTE3, 0x180 },
	{ DDRP_DBYTE3_TSMBYTE5, 0x1 },
	{ DDRP_DBYTE3_TRAININGPARAM, 0x6209 },
	{ DDRP_DBYTE3_TSM0_I0, 0x1 },
	{ DDRP_DBYTE3_TSM2_I1, 0x1 },
	{ DDRP_DBYTE3_TSM2_I2, 0x1 },
	{ DDRP_DBYTE3_TSM2_I3, 0x1 },
	{ DDRP_DBYTE3_TSM2_I4, 0x1 },
	{ DDRP_DBYTE3_TSM2_I5, 0x1 },
	{ DDRP_DBYTE3_TSM2_I6, 0x1 },
	{ DDRP_DBYTE3_TSM2_I7, 0x1 },
	{ DDRP_DBYTE3_TSM2_I8, 0x1 },
	{ DDRP_MASTER0_CALZAP, 0x1 },
	{ DDRP_MASTER0_CALRATE, 0x19 },
	{ DDRP_DRTUB0_UCCLKHCLKENABLES, 0x2 },
	{ DDRP_APBONLY0_MICROCONTMUXSEL, 0x1 },
	};

#endif /* __LPDDR4_2133_H__ */
