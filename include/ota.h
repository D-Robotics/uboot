/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2000-2009
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 */

#ifndef __OTA_H_
#define __OTA_H_	1

#define NOR_SECTOR_SIZE (64*1024)

extern char boot_partition[64];
extern char system_partition[64];

extern char hb_upmode[32];
extern char hb_bootreason[32];
extern char hb_partstatus;

char *printf_efiname(gpt_entry *pte);

unsigned int hex_to_char(unsigned int temp);

void uint32_to_char(unsigned int temp, char *s);

int get_partition_id(char *partname);

int ota_write(cmd_tbl_t *cmdtp, int flag, int argc,
        char *const argv[]);

void ota_recovery_mode_set(bool upflag);

void ota_ab_boot_bak_partition(void);

unsigned int ota_check_update_success_flag(void);

void ota_upgrade_flag_check(char *up_mode, char *boot_reason);

int ota_download_and_upimage(cmd_tbl_t *cmdtp, int flag, int argc,
				char *const argv[]);

// bool hb_nor_ota_upflag_check(void);

#endif
