/*
 * Copyright (C) 2007 Google, Inc.
 * Copyright (c) 2008-2011, Code Aurora Forum. All rights reserved.
 * Author: Brian Swetland <swetland@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
 * The MSM peripherals are spread all over across 768MB of physical
 * space, which makes just having a simple IO_ADDRESS macro to slide
 * them into the right virtual location rough.  Instead, we will
 * provide a master phys->virt mapping for peripherals here.
 *
 */

#ifndef __ASM_ARCH_MSM_IOMAP_8X60_H
#define __ASM_ARCH_MSM_IOMAP_8X60_H

/* Physical base address and size of peripherals.
 * Ordered by the virtual base addresses they will be mapped at.
 *
 * MSM_VIC_BASE must be an value that can be loaded via a "mov"
 * instruction, otherwise entry-macro.S will not compile.
 *
 * If you add or remove entries here, you'll want to edit the
 * msm_io_desc array in arch/arm/mach-msm/io.c to reflect your
 * changes.
 *
 */

#define MSM_QGIC_DIST_BASE	IOMEM(0xFE000000)
#define MSM_QGIC_DIST_PHYS	0x02080000
#define MSM_QGIC_DIST_SIZE	SZ_4K

#define MSM_QGIC_CPU_BASE	IOMEM(0xFE001000)
#define MSM_QGIC_CPU_PHYS	0x02081000
#define MSM_QGIC_CPU_SIZE	SZ_4K

#define MSM_ACC_BASE		IOMEM(0xFE002000)
#define MSM_ACC_PHYS		0x02001000
#define MSM_ACC_SIZE		SZ_4K

#define MSM_GCC_BASE		IOMEM(0xFE003000)
#define MSM_GCC_PHYS		0x02082000
#define MSM_GCC_SIZE		SZ_4K

#define MSM_TLMM_BASE		IOMEM(0xFE004000)
#define MSM_TLMM_PHYS		0x00800000
#define MSM_TLMM_SIZE		SZ_16K

#define MSM_RPM_BASE		IOMEM(0xFE008000)
#define MSM_RPM_PHYS		0x00104000
#define MSM_RPM_SIZE		SZ_16K

#define MSM_CLK_CTL_BASE	IOMEM(0xFE010000)
#define MSM_CLK_CTL_PHYS	0x00900000
#define MSM_CLK_CTL_SIZE	SZ_16K

#define MSM_MMSS_CLK_CTL_BASE	IOMEM(0xFE014000)
#define MSM_MMSS_CLK_CTL_PHYS	0x04000000
#define MSM_MMSS_CLK_CTL_SIZE	SZ_4K

#define MSM_LPASS_CLK_CTL_BASE	IOMEM(0xFE015000)
#define MSM_LPASS_CLK_CTL_PHYS	0x28000000
#define MSM_LPASS_CLK_CTL_SIZE	SZ_4K

#define MSM_TMR_BASE		IOMEM(0xFE016000)
#define MSM_TMR_PHYS		0x02000000
#define MSM_TMR_SIZE		SZ_4K

#define MSM_TMR0_BASE		IOMEM(0xFE017000)
#define MSM_TMR0_PHYS		0x02040000
#define MSM_TMR0_SIZE		SZ_4K

#define MSM_SCPLL_BASE		IOMEM(0xFE018000)
#define MSM_SCPLL_PHYS		0x00903000
#define MSM_SCPLL_SIZE		SZ_1K

#define MSM_SHARED_RAM_BASE	IOMEM(0xFE200000)
#define MSM_SHARED_RAM_PHYS	0x40000000
#define MSM_SHARED_RAM_SIZE	SZ_1M

#define MSM_ACC0_BASE           IOMEM(0xFE300000)
#define MSM_ACC0_PHYS           0x02041000
#define MSM_ACC0_SIZE           SZ_4K

#define MSM_ACC1_BASE           IOMEM(0xFE301000)
#define MSM_ACC1_PHYS           0x02051000
#define MSM_ACC1_SIZE           SZ_4K

#define MSM_RPM_MPM_BASE        IOMEM(0xFE302000)
#define MSM_RPM_MPM_PHYS        0x00200000
#define MSM_RPM_MPM_SIZE        SZ_4K

#define MSM_SAW0_BASE		IOMEM(0xFE303000)
#define MSM_SAW0_PHYS		0x02042000
#define MSM_SAW0_SIZE		SZ_4K

#define MSM_SAW1_BASE		IOMEM(0xFE304000)
#define MSM_SAW1_PHYS		0x02052000
#define MSM_SAW1_SIZE		SZ_4K

#define MSM_IMEM_BASE		IOMEM(0xFE305000)
#define MSM_IMEM_PHYS		0x2A05F000
#define MSM_IMEM_SIZE		SZ_4K

/* TZ will write its jump addres when leaving TZ during resuming.
   While suspending, kernel writes MAGIC number to here.
   We can use it to check whether it has entered TZ or not. */
#define MSM_TZ_FOOTPRINT_JUMP_ADDRESS	(MSM_IMEM_BASE + 0x020) /* 4 bytes */

#define MSM_SIC_NON_SECURE_BASE	IOMEM(0xFE600000)
#define MSM_SIC_NON_SECURE_PHYS	0x12100000
#define MSM_SIC_NON_SECURE_SIZE	SZ_64K

#define MSM_QFPROM_BASE	IOMEM(0xFE700000)
#define MSM_QFPROM_PHYS	0x00700000
#define MSM_QFPROM_SIZE	SZ_4K

#define MSM_TCSR_BASE	IOMEM(0xFE701000)
#define MSM_TCSR_PHYS	0x16B00000
#define MSM_TCSR_SIZE	SZ_4K

#define MSM_EBI1_CH0_BASE	IOMEM(0xFE702000)
#define MSM_EBI1_CH0_PHYS	0x00a00000
#define MSM_EBI1_CH0_SIZE	0x00100000

#define MSM_EBI1_CH0_TOP_MISC_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x00000004)
#define MSM_EBI1_CH0_TOP_PAD_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x00000008)
#define MSM_EBI1_CH0_TOP_PAD_MDDR2_CNTL_ADDR		(MSM_EBI1_CH0_BASE + 0x0000000c)
#define MSM_EBI1_CH0_TOP_PAD_MIF2_CNTL_ADDR		(MSM_EBI1_CH0_BASE + 0x00000010)
#define MSM_EBI1_CH0_PMON_AXI_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x00020000)
#define MSM_EBI1_CH0_PMON_AXI_INTERRUPT_ADDR		(MSM_EBI1_CH0_BASE + 0x00020004)
#define MSM_EBI1_CH0_PMON_AXI_SOURCE_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00020008)
#define MSM_EBI1_CH0_PMON_AXI_COUNT_0_ADDR		(MSM_EBI1_CH0_BASE + 0x0002000c)
#define MSM_EBI1_CH0_PMON_AXI_SOURCE_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00020010)
#define MSM_EBI1_CH0_PMON_AXI_COUNT_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00020014)
#define MSM_EBI1_CH0_PMON_AXI_SOURCE_2_ADDR		(MSM_EBI1_CH0_BASE + 0x00020018)
#define MSM_EBI1_CH0_PMON_AXI_COUNT_2_ADDR		(MSM_EBI1_CH0_BASE + 0x0002001c)
#define MSM_EBI1_CH0_PMON_AXI_SOURCE_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00020020)
#define MSM_EBI1_CH0_PMON_AXI_COUNT_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00020024)
#define MSM_EBI1_CH0_PMON_DDR_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x00030000)
#define MSM_EBI1_CH0_PMON_DDR_INTERRUPT_ADDR		(MSM_EBI1_CH0_BASE + 0x00030004)
#define MSM_EBI1_CH0_PMON_DDR_SOURCE_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00030008)
#define MSM_EBI1_CH0_PMON_DDR_COUNT_0_ADDR		(MSM_EBI1_CH0_BASE + 0x0003000c)
#define MSM_EBI1_CH0_PMON_DDR_SOURCE_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00030010)
#define MSM_EBI1_CH0_PMON_DDR_COUNT_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00030014)
#define MSM_EBI1_CH0_PMON_DDR_SOURCE_2_ADDR		(MSM_EBI1_CH0_BASE + 0x00030018)
#define MSM_EBI1_CH0_PMON_DDR_COUNT_2_ADDR		(MSM_EBI1_CH0_BASE + 0x0003001c)
#define MSM_EBI1_CH0_PMON_DDR_SOURCE_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00030020)
#define MSM_EBI1_CH0_PMON_DDR_COUNT_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00030024)
#define MSM_EBI1_CH0_SLV_CONFIG_ADDR			(MSM_EBI1_CH0_BASE + 0x00040000)
#define MSM_EBI1_CH0_SLV_RD_CONFIG_ADDR			(MSM_EBI1_CH0_BASE + 0x00040004)
#define MSM_EBI1_CH0_SLV_RD_STATUS_ADDR			(MSM_EBI1_CH0_BASE + 0x00040008)
#define MSM_EBI1_CH0_SLV_WR_CONFIG_ADDR			(MSM_EBI1_CH0_BASE + 0x0004000c)
#define MSM_EBI1_CH0_SLV_FLUSH_CONFIG_ADDR		(MSM_EBI1_CH0_BASE + 0x00040010)
#define MSM_EBI1_CH0_SLV_ID_REVISION_ADDR		(MSM_EBI1_CH0_BASE + 0x00040014)
#define MSM_EBI1_CH0_SLV_ADDR_BASE_CSn_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00040020 + 4 * (n))
#define MSM_EBI1_CH0_SLV_ADDR_MAP_CSn_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00040030 + 4 * (n))
#define MSM_EBI1_CH0_SLV_ADDR_SIZE_MASK_CSn_ADDR(n)	(MSM_EBI1_CH0_BASE + 0x00040040 + 4 * (n))
#define MSM_EBI1_CH0_SLV_STALL_ADDR			(MSM_EBI1_CH0_BASE + 0x00040050)
#define MSM_EBI1_CH0_SLV_ERR_ADDR_ADDR			(MSM_EBI1_CH0_BASE + 0x00040100)
#define MSM_EBI1_CH0_SLV_ERR_APACKET_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00040108)
#define MSM_EBI1_CH0_SLV_ERR_APACKET_1_ADDR		(MSM_EBI1_CH0_BASE + 0x0004010c)
#define MSM_EBI1_CH0_SLV_ERR_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x00040114)
#define MSM_EBI1_CH0_SLV_PMON_CFG_ACHAN_ADDR		(MSM_EBI1_CH0_BASE + 0x00040200)
#define MSM_EBI1_CH0_SLV_PMON_CFG_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00040204)
#define MSM_EBI1_CH0_SLV_TEST_CONFIG_ADDR		(MSM_EBI1_CH0_BASE + 0x00040208)
#define MSM_EBI1_CH0_MPU_PRTn_RACR_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00060000 + 4 * (n))
#define MSM_EBI1_CH0_MPU_PRTn_WACR_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00060400 + 4 * (n))
#define MSM_EBI1_CH0_MPU_PRTn_START_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00060800 + 4 * (n))
#define MSM_EBI1_CH0_MPU_PRTn_END_ADDR(n)		(MSM_EBI1_CH0_BASE + 0x00060c00 + 4 * (n))
#define MSM_EBI1_CH0_MPU_CR_ADDR			(MSM_EBI1_CH0_BASE + 0x00060f80)
#define MSM_EBI1_CH0_MPU_EAR_ADDR			(MSM_EBI1_CH0_BASE + 0x00060f84)
#define MSM_EBI1_CH0_MPU_ESR_ADDR			(MSM_EBI1_CH0_BASE + 0x00060f88)
#define MSM_EBI1_CH0_MPU_ESRRESTORE_ADDR		(MSM_EBI1_CH0_BASE + 0x00060f8c)
#define MSM_EBI1_CH0_MPU_ESYNR0_ADDR			(MSM_EBI1_CH0_BASE + 0x00060f90)
#define MSM_EBI1_CH0_MPU_ESYNR1_ADDR			(MSM_EBI1_CH0_BASE + 0x00060f94)
#define MSM_EBI1_CH0_MPU_REV_ADDR			(MSM_EBI1_CH0_BASE + 0x00060ff4)
#define MSM_EBI1_CH0_MPU_IDR_ADDR			(MSM_EBI1_CH0_BASE + 0x00060ff8)
#define MSM_EBI1_CH0_MPU_MPU_ACR_ADDR			(MSM_EBI1_CH0_BASE + 0x00060ffc)
#define MSM_EBI1_CH0_DDR_DEVICE_CONFIG_ADDR		(MSM_EBI1_CH0_BASE + 0x00080000)
#define MSM_EBI1_CH0_DDR_DEVICE_STATUS_ADDR		(MSM_EBI1_CH0_BASE + 0x00080004)
#define MSM_EBI1_CH0_DDR_MANUAL_CMD_ADDR		(MSM_EBI1_CH0_BASE + 0x00080010)
#define MSM_EBI1_CH0_DDR_MR_CNTL_WDATA_ADDR		(MSM_EBI1_CH0_BASE + 0x00080014)
#define MSM_EBI1_CH0_DDR_MR_RDATA_RANK0_ADDR		(MSM_EBI1_CH0_BASE + 0x00080020)
#define MSM_EBI1_CH0_DDR_MR_RDATA_RANK1_ADDR		(MSM_EBI1_CH0_BASE + 0x00080024)
#define MSM_EBI1_CH0_DDR_MRR_REPEAT_ADDR		(MSM_EBI1_CH0_BASE + 0x00080028)
#define MSM_EBI1_CH0_DDR_MRR_REPEAT_DATA_RANK0_ADDR	(MSM_EBI1_CH0_BASE + 0x00080034)
#define MSM_EBI1_CH0_DDR_MRR_REPEAT_DATA_RANK1_ADDR	(MSM_EBI1_CH0_BASE + 0x00080038)
#define MSM_EBI1_CH0_DDR_CMD_EXEC_OPT_0_ADDR		(MSM_EBI1_CH0_BASE + 0x0008003c)
#define MSM_EBI1_CH0_DDR_CMD_EXEC_OPT_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00080040)
#define MSM_EBI1_CH0_DDR_CMD_EXEC_OPT_2_ADDR		(MSM_EBI1_CH0_BASE + 0x00080044)
#define MSM_EBI1_CH0_DDR_CMD_EXEC_OPT_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00080048)
#define MSM_EBI1_CH0_DDR_SM_TIMING_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00080050)
#define MSM_EBI1_CH0_DDR_SM_TIMING_1_ADDR		(MSM_EBI1_CH0_BASE + 0x00080054)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_0_ADDR		(MSM_EBI1_CH0_BASE + 0x00080058)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_1_ADDR		(MSM_EBI1_CH0_BASE + 0x0008005c)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_2_ADDR		(MSM_EBI1_CH0_BASE + 0x00080060)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_3_ADDR		(MSM_EBI1_CH0_BASE + 0x00080064)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_4_ADDR		(MSM_EBI1_CH0_BASE + 0x00080068)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_5_ADDR		(MSM_EBI1_CH0_BASE + 0x0008006c)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_6_ADDR		(MSM_EBI1_CH0_BASE + 0x00080070)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_7_ADDR		(MSM_EBI1_CH0_BASE + 0x00080074)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_0_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x00080080)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_3_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x00080084)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_4_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x00080088)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_5_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x0008008c)
#define MSM_EBI1_CH0_DDR_DRAM_TIMING_7_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x00080090)
#define MSM_EBI1_CH0_DDR_AUTO_RFSH_CNTL_ADDR		(MSM_EBI1_CH0_BASE + 0x000800a0)
#define MSM_EBI1_CH0_DDR_SELF_RFSH_CNTL_ADDR		(MSM_EBI1_CH0_BASE + 0x000800a8)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL0_ADDR		(MSM_EBI1_CH0_BASE + 0x000800b0)
#define MSM_EBI1_CH0_DDR_PMON_EVENT0_MID_MATCH_ADDR	(MSM_EBI1_CH0_BASE + 0x000800b4)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL1_ADDR		(MSM_EBI1_CH0_BASE + 0x000800b8)
#define MSM_EBI1_CH0_DDR_PMON_EVENT1_MID_MATCH_ADDR	(MSM_EBI1_CH0_BASE + 0x000800bc)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL2_ADDR		(MSM_EBI1_CH0_BASE + 0x000800c0)
#define MSM_EBI1_CH0_DDR_PMON_EVENT2_MID_MATCH_ADDR	(MSM_EBI1_CH0_BASE + 0x000800c4)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL3_ADDR		(MSM_EBI1_CH0_BASE + 0x000800c8)
#define MSM_EBI1_CH0_DDR_PMON_EVENT3_MID_MATCH_ADDR	(MSM_EBI1_CH0_BASE + 0x000800cc)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL4_ADDR		(MSM_EBI1_CH0_BASE + 0x000800d0)
#define MSM_EBI1_CH0_DDR_PMON_EVENT_CNTL5_ADDR		(MSM_EBI1_CH0_BASE + 0x000800d4)
#define MSM_EBI1_CH0_DDR_TEST_MUX_ADDR			(MSM_EBI1_CH0_BASE + 0x000800d8)
#define MSM_EBI1_CH0_CDC_CFG_MST_ADDR			(MSM_EBI1_CH0_BASE + 0x000c0000)
#define MSM_EBI1_CH0_CDC_CFG_MST_OSC_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0004)
#define MSM_EBI1_CH0_CDC_CFG_SLV_A_ADDR			(MSM_EBI1_CH0_BASE + 0x000c0008)
#define MSM_EBI1_CH0_CDC_CFG_SLV_D_ADDR			(MSM_EBI1_CH0_BASE + 0x000c000c)
#define MSM_EBI1_CH0_CDC_STATUS_MST_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0010)
#define MSM_EBI1_CH0_CDC_STATUS_SLV_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0014)
#define MSM_EBI1_CH0_CDC_CMD_ADDR			(MSM_EBI1_CH0_BASE + 0x000c0018)
#define MSM_EBI1_CH0_CDC_CAL_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x000c001c)
#define MSM_EBI1_CH0_CDC_CAL_TIMER_ADDR			(MSM_EBI1_CH0_BASE + 0x000c0020)
#define MSM_EBI1_CH0_CDC_CFG_MST_OSC_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0024)
#define MSM_EBI1_CH0_CDC_STATUS_MST_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0028)
#define MSM_EBI1_CH0_CDC_CFG_SLV_ALT_ADDR		(MSM_EBI1_CH0_BASE + 0x000c002c)
#define MSM_EBI1_CH0_CDC_STATUS_SLV_1_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0030)
#define MSM_EBI1_CH0_CDC_STATUS_SLV_2_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0034)
#define MSM_EBI1_CH0_CDC_STATUS_SLV_3_ADDR		(MSM_EBI1_CH0_BASE + 0x000c0038)
#define MSM_EBI1_CH0_LBST_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x000d0000)
#define MSM_EBI1_CH0_LBST_MISR_CA_ADDR			(MSM_EBI1_CH0_BASE + 0x000d0004)
#define MSM_EBI1_CH0_LBST_MISR_DQ_EVEN_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0008)
#define MSM_EBI1_CH0_LBST_MISR_DQ_ODD_ADDR		(MSM_EBI1_CH0_BASE + 0x000d000c)
#define MSM_EBI1_CH0_LBST_COUNT_CA_ALL_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0010)
#define MSM_EBI1_CH0_LBST_COUNT_CA_CMPR_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0014)
#define MSM_EBI1_CH0_LBST_COUNT_DQ_ALL_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0018)
#define MSM_EBI1_CH0_LBST_COUNT_DQ_CMPR_ADDR		(MSM_EBI1_CH0_BASE + 0x000d001c)
#define MSM_EBI1_CH0_LBST_ENABLE_IE_CA_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0020)
#define MSM_EBI1_CH0_LBST_ENABLE_OE_CA_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0024)
#define MSM_EBI1_CH0_LBST_ENABLE_IEOE_DQ_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0028)
#define MSM_EBI1_CH0_LBST_ENABLE_IEOE_DMDQS_ADDR	(MSM_EBI1_CH0_BASE + 0x000d002c)
#define MSM_EBI1_CH0_LBST_CMPR_VAL_CA_EVEN_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0030)
#define MSM_EBI1_CH0_LBST_CMPR_VAL_CA_ODD_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0034)
#define MSM_EBI1_CH0_LBST_CMPR_EN_CA_EVEN_ADDR		(MSM_EBI1_CH0_BASE + 0x000d0038)
#define MSM_EBI1_CH0_LBST_CMPR_EN_CA_ODD_ADDR		(MSM_EBI1_CH0_BASE + 0x000d003c)
#define MSM_EBI1_CH0_LBST_CNTL2_ADDR			(MSM_EBI1_CH0_BASE + 0x000d0040)
#define MSM_EBI1_CH0_IOCAL_CNTL_ADDR			(MSM_EBI1_CH0_BASE + 0x000e0000)
#define MSM_EBI1_CH0_IOCAL_STATUS_ADDR			(MSM_EBI1_CH0_BASE + 0x000e0004)
#define MSM_EBI1_CH0_IOCAL_PNCNT_INIT_ADDR		(MSM_EBI1_CH0_BASE + 0x000e0008)
#define MSM_EBI1_CH0_IOCAL_PNCNT_SET_ADDR		(MSM_EBI1_CH0_BASE + 0x000e000c)
#define MSM_EBI1_CH0_IOCAL_TIMER_ADDR			(MSM_EBI1_CH0_BASE + 0x000e0010)
#define MSM_EBI1_CH0_IOCAL_CHAR_ADDR			(MSM_EBI1_CH0_BASE + 0x000e0014)


#define MSM_HDMI_BASE		IOMEM(0xFE800000)
#define MSM_HDMI_PHYS		0x04A00000
#define MSM_HDMI_SIZE		SZ_4K

#ifdef CONFIG_MSM_DEBUG_UART
#define MSM_DEBUG_UART_BASE	0xFEC40000

#if CONFIG_MSM_DEBUG_UART == 11
	#define MSM_DEBUG_UART_PHYS 0x19B40000
#else
	#define MSM_DEBUG_UART_PHYS	0x19C40000
#endif

#define MSM_DEBUG_UART_SIZE	SZ_4K
#endif

#define MSM_HTC_RAM_CONSOLE_PHYS	0x46400000
#define MSM_HTC_RAM_CONSOLE_SIZE	(0x300000 - SZ_128K) /* 128K for debug info */

#define MSM_HTC_DEBUG_INFO_BASE		IOMEM(0xFE802000)
#define MSM_HTC_DEBUG_INFO_PHYS		(MSM_HTC_RAM_CONSOLE_PHYS + MSM_HTC_RAM_CONSOLE_SIZE)
#define MSM_HTC_DEBUG_INFO_SIZE		SZ_128K

#define MSM_TZLOG_BASE                  MSM_HTC_DEBUG_INFO_BASE
#define MSM_TZLOG_PHYS			MSM_HTC_DEBUG_INFO_PHYS
#define MSM_TZLOG_SIZE			SZ_64K

#define MSM_WDT_PROC_INFO_BASE		(MSM_TZLOG_BASE + MSM_TZLOG_SIZE)
#define MSM_WDT_PROC_INFO_SIZE		SZ_4K

#define MSM_DO_IRQ_INFO_BASE		(MSM_WDT_PROC_INFO_BASE + MSM_WDT_PROC_INFO_SIZE)
#define MSM_DO_IRQ_INFO_SIZE		SZ_16

#define MSM_SPIN_LOCK_IRQSAVE_INFO_BASE		(MSM_DO_IRQ_INFO_BASE + MSM_DO_IRQ_INFO_SIZE)
#define MSM_SPIN_LOCK_IRQSAVE_INFO_SIZE		SZ_16

#define MSM_IRQ_COUNT_INFO_BASE		(MSM_SPIN_LOCK_IRQSAVE_INFO_BASE + MSM_SPIN_LOCK_IRQSAVE_INFO_SIZE)

#define MSM_TZ_DOG_BARK_REG_SAVE_BASE	(MSM_DO_IRQ_INFO_BASE + SZ_1K)
#define MSM_TZ_DOG_BARK_REG_SAVE_PHYS	(MSM_HTC_DEBUG_INFO_PHYS + MSM_TZLOG_SIZE + MSM_WDT_PROC_INFO_SIZE + SZ_1K)
#define MSM_TZ_DOG_BARK_REG_SAVE_SIZE	SZ_4K

/*Reserve 2 bytes for watchdog enable foot print*/
#define MSM_IRQ_COUNT_WATCHDOG_ENABLE_ADDR	MSM_IRQ_COUNT_INFO_BASE
/*Reserve 8 bytes for timestamp*/
#define MSM_IRQ_COUNT_TIMESTAMP_ADDR	(MSM_IRQ_COUNT_WATCHDOG_ENABLE_ADDR + 2)
/*Reserve 2 bytes for recoding which cpu pet watchdog */
#define MSM_IRQ_COUNT_WATCHDOG_PET_WORK_CPU_ADDR	(MSM_IRQ_COUNT_TIMESTAMP_ADDR + 8)
/*Reserve 8 bytes for timestamp*/
#define MSM_IRQ_COUNT_WATCHDOG_PET_TIMESTAMP_ADDR	(MSM_IRQ_COUNT_WATCHDOG_PET_WORK_CPU_ADDR + 2)
#define MSM_IRQ_COUNT_ADDR				(MSM_IRQ_COUNT_WATCHDOG_PET_TIMESTAMP_ADDR + 8)
#define MSM_IRQ_COUNT_INFO_SIZE		(SZ_1K - MSM_DO_IRQ_INFO_SIZE - MSM_SPIN_LOCK_IRQSAVE_INFO_SIZE)

#endif
