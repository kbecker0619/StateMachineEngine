/** @file MPC5748G_defines_1.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 10, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_1_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_1_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_1_H__REVSTRING "$Revision: 0123 $"

#define SRAM0_START 0x40000000UL;
#define ADC_0 (*(volatile struct ADC_tag *) 0xFFE00000UL)
#define ADC_1 (*(volatile struct ADC_tag *) 0xFBE00000UL)
#define AIPS_A (*(volatile struct AIPS_tag *) 0xFC000000UL)
#define AIPS_B (*(volatile struct AIPS_tag *) 0xF8000000UL)
#define AXBS_0 (*(volatile struct AXBS_tag *) 0xFC004000UL)
#define AXBS_1 (*(volatile struct AXBS_tag *) 0xFC008000UL)
#define BCTU (*(volatile struct BCTU_tag *) 0xFFC10000UL)
#define C55FMC (*(volatile struct C55FMC_tag *) 0xFFFE0000UL)
#define CAN_0 (*(volatile struct CAN_0_tag *) 0xFFEC0000UL)
#define CAN_1 (*(volatile struct CAN_1_7_tag *) 0xFBEC0000UL)
#define CAN_2 (*(volatile struct CAN_1_7_tag *) 0xFFEC4000UL)
#define CAN_3 (*(volatile struct CAN_1_7_tag *) 0xFBEC4000UL)
#define CAN_4 (*(volatile struct CAN_1_7_tag *) 0xFFEC8000UL)
#define CAN_5 (*(volatile struct CAN_1_7_tag *) 0xFBEC8000UL)
#define CAN_6 (*(volatile struct CAN_1_7_tag *) 0xFFECC000UL)
#define CAN_7 (*(volatile struct CAN_1_7_tag *) 0xFBECC000UL)
#define CMP_0 (*(volatile struct CMP_tag *) 0xFFCDC000UL)
#define CMP_1 (*(volatile struct CMP_tag *) 0xFFCE0000UL)
#define CMP_2 (*(volatile struct CMP_tag *) 0xFFCE4000UL)
#define CMU (*(volatile struct CMU_tag *) 0xFFFB0140UL)
#define CRC (*(volatile struct CRC_tag *) 0xFFF64000UL)
#define EDMA (*(volatile struct DMA_tag *) 0xFC0A0000UL)
#define DMAMUX_0 (*(volatile struct DMAMUX_tag *) 0xFFF6C000UL)
#define DMAMUX_1 (*(volatile struct DMAMUX_tag *) 0xFFF6C200UL)
#define DSPI_0 (*(volatile struct DSPI_tag *) 0xFFE70000UL)
#define DSPI_1 (*(volatile struct DSPI_tag *) 0xFBE70000UL)
#define DSPI_2 (*(volatile struct DSPI_tag *) 0xFFE74000UL)
#define DSPI_3 (*(volatile struct DSPI_tag *) 0xFBE74000UL)
#define ENET (*(volatile struct ENET_tag *) 0xFFCC4000UL)
#define FCCU (*(volatile struct FCCU_tag *) 0xFBF58000UL)
#define FIRC (*(volatile struct FIRC_tag *) 0xFFFB0000UL)
#define FR (*(volatile struct FR_tag *) 0xFFE50000UL)
#define FXOSC (*(volatile struct FXOSC_tag *) 0xFFFB0040UL)
#define GPR (*(volatile struct GPR_tag *) 0xFFF94000UL)
#define I2C_0 (*(volatile struct I2C_tag *) 0xFFE68000UL)
#define I2C_1 (*(volatile struct I2C_tag *) 0xFBE68000UL)
#define I2C_2 (*(volatile struct I2C_tag *) 0xFFE6C000UL)
#define I2C_3 (*(volatile struct I2C_tag *) 0xFBE6C000UL)
#define I2S_0 (*(volatile struct I2S_tag *) 0xFFCB4000UL)
#define I2S_1 (*(volatile struct I2S_tag *) 0xFBCB4000UL)
#define I2S_2 (*(volatile struct I2S_tag *) 0xFFCB8000UL)
#define INTC (*(volatile struct INTC_tag *) 0xFC040000UL)
#define JDC (*(volatile struct JDC_tag *) 0xFFF3C000UL)
#define LINFlexD_0 (*(volatile struct LINFlexD_tag *) 0xFFE8C000UL)
#define LINFlexD_1 (*(volatile struct LINFlexD_tag *) 0xFBE8C000UL)
#define LINFlexD_10 (*(volatile struct LINFlexD_tag *) 0xFFEA0000UL)
#define LINFlexD_11 (*(volatile struct LINFlexD_tag *) 0xFBEA0000UL)
#define LINFlexD_12 (*(volatile struct LINFlexD_tag *) 0xFFEA4000UL)
#define LINFlexD_13 (*(volatile struct LINFlexD_tag *) 0xFBEA4000UL)
#define LINFlexD_14 (*(volatile struct LINFlexD_tag *) 0xFFEA8000UL)
#define LINFlexD_15 (*(volatile struct LINFlexD_tag *) 0xFBEA8000UL)
#define LINFlexD_16 (*(volatile struct LINFlexD_tag *) 0xFFEAC000UL)
#define LINFlexD_17 (*(volatile struct LINFlexD_tag *) 0xFBEAC000UL)
#define LINFlexD_2 (*(volatile struct LINFlexD_tag *) 0xFFE90000UL)
#define LINFlexD_3 (*(volatile struct LINFlexD_tag *) 0xFBE90000UL)
#define LINFlexD_4 (*(volatile struct LINFlexD_tag *) 0xFFE94000UL)
#define LINFlexD_5 (*(volatile struct LINFlexD_tag *) 0xFBE94000UL)
#define LINFlexD_6 (*(volatile struct LINFlexD_tag *) 0xFFE98000UL)
#define LINFlexD_7 (*(volatile struct LINFlexD_tag *) 0xFBE98000UL)
#define LINFlexD_8 (*(volatile struct LINFlexD_tag *) 0xFFE9C000UL)
#define LINFlexD_9 (*(volatile struct LINFlexD_tag *) 0xFBE9C000UL)
#define LPU (*(volatile struct LPU_tag *) 0xFFF9C000UL)
#define MC_CGM (*(volatile struct MC_CGM_tag *) 0xFFFB0000UL)
#define MC_ME (*(volatile struct MC_ME_tag *) 0xFFFB8000UL)
#define MC_RGM (*(volatile struct MC_RGM_tag *) 0xFFFA8000UL)
#define MEMU_0 (*(volatile struct MEMU_0_tag *) 0xFFF50000UL)
#define MEMU_1 (*(volatile struct MEMU_1_tag *) 0xFFFEC000UL)
#define MLB (*(volatile struct MLB_tag *) 0xFFC9C000UL)
#define PASS (*(volatile struct PASS_tag *) 0xFFFF4000UL)
#define PCM (*(volatile struct PCM_tag *) 0xFC028000UL)
#define PFLASH (*(volatile struct PFLASH_tag *) 0xFC030000UL)
#define PIT (*(volatile struct PIT_tag *) 0xFFF84000UL)
#define PLLDIG (*(volatile struct PLLDIG_tag *) 0xFFFB0080UL)
#define PMCDIG (*(volatile struct PMCDIG_tag *) 0xFFFA0400UL)
#define PRAMC_0 (*(volatile struct PRAMC_tag *) 0xFC020000UL)
#define PRAMC_1 (*(volatile struct PRAMC_tag *) 0xFC024000UL)
#define PRAMC_2 (*(volatile struct PRAMC_tag *) 0xFC02C000UL)
#define RTC (*(volatile struct RTC_tag *) 0xFFFF0000UL)
#define SEMA42 (*(volatile struct SEMA42_tag *) 0xFC03C000UL)
#define SIRC (*(volatile struct SIRC_tag *) 0xFFFB00C0UL)
#define SIUL2 (*(volatile struct SIUL2_tag *) 0xFFFC0000UL)
#define SMPU_0 (*(volatile struct SMPU_tag *) 0xFC010000UL)
#define SMPU_1 (*(volatile struct SMPU_tag *) 0xFC014000UL)
#define SPI_0 (*(volatile struct SPI_tag *) 0xFFFCC000UL)
#define SPI_1 (*(volatile struct SPI_tag *) 0xFBF9C000UL)
#define SPI_2 (*(volatile struct SPI_tag *) 0xFFFD0000UL)
#define SPI_3 (*(volatile struct SPI_tag *) 0xFBFA0000UL)
#define SPI_4 (*(volatile struct SPI_tag *) 0xFFFD4000UL)
#define SPI_5 (*(volatile struct SPI_tag *) 0xFBFA4000UL)
#define SSCM (*(volatile struct SSCM_tag *) 0xFFFF8000UL)
#define STCU2 (*(volatile struct STCU2_tag *) 0xFFF44000UL)
#define STM_0 (*(volatile struct STM_tag *) 0xFC068000UL)
#define STM_1 (*(volatile struct STM_tag *) 0xFC06C000UL)
#define STM_2 (*(volatile struct STM_tag *) 0xFC070000UL)
#define SWT_0 (*(volatile struct SWT_tag *) 0xFC050000UL)
#define SWT_1 (*(volatile struct SWT_tag *) 0xFC054000UL)
#define SWT_2 (*(volatile struct SWT_tag *) 0xFC058000UL)
#define SXOSC (*(volatile struct SXOSC_tag *) 0xFFFB0100UL)
#define TDM (*(volatile struct TDM_tag *) 0xFFF34000UL)
#define UHST (*(volatile struct UHST_tag *) 0xFFC94000UL)
#define UHSTNC (*(volatile struct UHSTNC_tag *) 0xFFC94000UL)
#define UOTG (*(volatile struct UOTG_tag *) 0xFFC90000UL)
#define UOTGNC (*(volatile struct UOTGNC_tag *) 0xFFC90000UL)
#define WKPU (*(volatile struct WKPU_tag *) 0xFFF98000UL)
#define eMIOS_0 (*(volatile struct eMIOS_tag *) 0xFFC38000UL)
#define eMIOS_1 (*(volatile struct eMIOS_tag *) 0xFBC38000UL)
#define eMIOS_2 (*(volatile struct eMIOS_tag *) 0xFFC3C000UL)
#define eMIOS_UC_0 (*(volatile struct eMIOS_UC_tag *) 0xFFC38000UL)
#define eMIOS_UC_1 (*(volatile struct eMIOS_UC_tag *) 0xFBC38000UL)
#define eMIOS_UC_2 (*(volatile struct eMIOS_UC_tag *) 0xFFC3C000UL)
#define uSDHC (*(volatile struct uSDHC_tag *) 0xFFCA4000UL)

/* ADC */
#define ADC_0_MCR            ADC_0.MCR.R                   /* Main Configuration Register */
#define ADC_0_MSR            ADC_0.MSR.R                   /* Main Status register */
#define ADC_0_ISR            ADC_0.ISR.R                   /* Interrupt Status Register */
#define ADC_0_CEOCFR0        ADC_0.CEOCFR0.R               /* Channel Pending register 0 */
#define ADC_0_CEOCFR1        ADC_0.CEOCFR1.R               /* Channel Pending register 1 */
#define ADC_0_CEOCFR2        ADC_0.CEOCFR2.R               /* Channel Pending register 2 */
#define ADC_0_IMR            ADC_0.IMR.R                   /* Interrupt Mask Register */
#define ADC_0_CIMR0          ADC_0.CIMR0.R                 /* Channel Interrupt Mask Register 0 */
#define ADC_0_CIMR1          ADC_0.CIMR1.R                 /* Channel Interrupt Mask Register 1 */
#define ADC_0_CIMR2          ADC_0.CIMR2.R                 /* Channel Interrupt Mask Register 2 */
#define ADC_0_WTISR          ADC_0.WTISR.R                 /* Watchdog Threshold Interrupt Status Register */
#define ADC_0_WTIMR          ADC_0.WTIMR.R                 /* Watchdog Threshold Interrupt Mask Register */
#define ADC_0_DMAE           ADC_0.DMAE.R                  /* DMA Enable register */
#define ADC_0_DMAR0          ADC_0.DMAR0.R                 /* DMA Channel Select Register 0 */
#define ADC_0_DMAR1          ADC_0.DMAR1.R                 /* DMA Channel Select Register 1 */
#define ADC_0_DMAR2          ADC_0.DMAR2.R                 /* DMA Channel Select Register 2 */
#define ADC_0_THRHLR0        ADC_0.THRHLR0.R               /* Threshold Register */
#define ADC_0_THRHLR1        ADC_0.THRHLR1.R               /* Threshold Register */
#define ADC_0_THRHLR2        ADC_0.THRHLR2.R               /* Threshold Register */
#define ADC_0_THRHLR3        ADC_0.THRHLR3.R               /* Threshold Register */
#define ADC_0_PSCR           ADC_0.PSCR.R                  /* Presampling Control Register */
#define ADC_0_PSR0           ADC_0.PSR0.R                  /* Presampling register 0 */
#define ADC_0_PSR1           ADC_0.PSR1.R                  /* Presampling register 1 */
#define ADC_0_PSR2           ADC_0.PSR2.R                  /* Presampling register 2 */
#define ADC_0_CTR0           ADC_0.CTR0.R                  /* Conversion Timing Register 0 */
#define ADC_0_CTR1           ADC_0.CTR1.R                  /* Conversion Timing Register 1 */
#define ADC_0_CTR2           ADC_0.CTR2.R                  /* Conversion Timing Register 2 */
#define ADC_0_NCMR0          ADC_0.NCMR0.R                 /* Normal Conversion Mask Register 0 */
#define ADC_0_NCMR1          ADC_0.NCMR1.R                 /* Normal Conversion Mask Register 1 */
#define ADC_0_NCMR2          ADC_0.NCMR2.R                 /* Normal Conversion Mask Register 2 */
#define ADC_0_JCMR0          ADC_0.JCMR0.R                 /* Injected Conversion Mask Register 0 */
#define ADC_0_JCMR1          ADC_0.JCMR1.R                 /* Injected Conversion Mask Register 1 */
#define ADC_0_JCMR2          ADC_0.JCMR2.R                 /* Injected Conversion Mask Register 2 */
#define ADC_0_DSDR           ADC_0.DSDR.R                  /* Decode Signals Delay Register */
#define ADC_0_PDEDR          ADC_0.PDEDR.R                 /* Power Down Exit Delay Register */
#define ADC_0_CDR0           ADC_0.CDR[0].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR1           ADC_0.CDR[1].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR2           ADC_0.CDR[2].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR3           ADC_0.CDR[3].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR4           ADC_0.CDR[4].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR5           ADC_0.CDR[5].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR6           ADC_0.CDR[6].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR7           ADC_0.CDR[7].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR8           ADC_0.CDR[8].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR9           ADC_0.CDR[9].R                /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR10          ADC_0.CDR[10].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR11          ADC_0.CDR[11].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR12          ADC_0.CDR[12].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR13          ADC_0.CDR[13].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR14          ADC_0.CDR[14].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR15          ADC_0.CDR[15].R               /* Channel Data Register n (Precision Channels) */
#define ADC_0_CDR16          ADC_0.CDR[16].R               /*  */
#define ADC_0_CDR17          ADC_0.CDR[17].R               /*  */
#define ADC_0_CDR18          ADC_0.CDR[18].R               /*  */
#define ADC_0_CDR19          ADC_0.CDR[19].R               /*  */
#define ADC_0_CDR20          ADC_0.CDR[20].R               /*  */
#define ADC_0_CDR21          ADC_0.CDR[21].R               /*  */
#define ADC_0_CDR22          ADC_0.CDR[22].R               /*  */
#define ADC_0_CDR23          ADC_0.CDR[23].R               /*  */
#define ADC_0_CDR24          ADC_0.CDR[24].R               /*  */
#define ADC_0_CDR25          ADC_0.CDR[25].R               /*  */
#define ADC_0_CDR26          ADC_0.CDR[26].R               /*  */
#define ADC_0_CDR27          ADC_0.CDR[27].R               /*  */
#define ADC_0_CDR28          ADC_0.CDR[28].R               /*  */
#define ADC_0_CDR29          ADC_0.CDR[29].R               /*  */
#define ADC_0_CDR30          ADC_0.CDR[30].R               /*  */
#define ADC_0_CDR31          ADC_0.CDR[31].R               /*  */
#define ADC_0_CDR32          ADC_0.CDR[32].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR33          ADC_0.CDR[33].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR34          ADC_0.CDR[34].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR35          ADC_0.CDR[35].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR36          ADC_0.CDR[36].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR37          ADC_0.CDR[37].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR38          ADC_0.CDR[38].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR39          ADC_0.CDR[39].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR40          ADC_0.CDR[40].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR41          ADC_0.CDR[41].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR42          ADC_0.CDR[42].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR43          ADC_0.CDR[43].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR44          ADC_0.CDR[44].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR45          ADC_0.CDR[45].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR46          ADC_0.CDR[46].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR47          ADC_0.CDR[47].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR48          ADC_0.CDR[48].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR49          ADC_0.CDR[49].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR50          ADC_0.CDR[50].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR51          ADC_0.CDR[51].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR52          ADC_0.CDR[52].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR53          ADC_0.CDR[53].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR54          ADC_0.CDR[54].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR55          ADC_0.CDR[55].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR56          ADC_0.CDR[56].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR57          ADC_0.CDR[57].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR58          ADC_0.CDR[58].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR59          ADC_0.CDR[59].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR60          ADC_0.CDR[60].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR61          ADC_0.CDR[61].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR62          ADC_0.CDR[62].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR63          ADC_0.CDR[63].R               /* Channel Data Register n (Internal Channels) */
#define ADC_0_CDR64          ADC_0.CDR[64].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR65          ADC_0.CDR[65].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR66          ADC_0.CDR[66].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR67          ADC_0.CDR[67].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR68          ADC_0.CDR[68].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR69          ADC_0.CDR[69].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR70          ADC_0.CDR[70].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR71          ADC_0.CDR[71].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR72          ADC_0.CDR[72].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR73          ADC_0.CDR[73].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR74          ADC_0.CDR[74].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR75          ADC_0.CDR[75].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR76          ADC_0.CDR[76].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR77          ADC_0.CDR[77].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR78          ADC_0.CDR[78].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR79          ADC_0.CDR[79].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR80          ADC_0.CDR[80].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR81          ADC_0.CDR[81].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR82          ADC_0.CDR[82].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR83          ADC_0.CDR[83].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR84          ADC_0.CDR[84].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR85          ADC_0.CDR[85].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR86          ADC_0.CDR[86].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR87          ADC_0.CDR[87].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR88          ADC_0.CDR[88].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR89          ADC_0.CDR[89].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR90          ADC_0.CDR[90].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR91          ADC_0.CDR[91].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR92          ADC_0.CDR[92].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR93          ADC_0.CDR[93].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR94          ADC_0.CDR[94].R               /* Channel Data Register n (External Channels) */
#define ADC_0_CDR95          ADC_0.CDR[95].R               /* Channel Data Register n (External Channels) */
#define ADC_0_THRHLR4        ADC_0.THRHLR4.R               /* Threshold Register */
#define ADC_0_THRHLR5        ADC_0.THRHLR5.R               /* Threshold Register */
#define ADC_0_CWSELR0        ADC_0.CWSELR0.R               /* Channel Watchdog Select Register 0 */
#define ADC_0_CWSELR1        ADC_0.CWSELR1.R               /* Channel Watchdog Select Register 1 */
#define ADC_0_CWSELR4        ADC_0.CWSELR4.R               /* Channel Watchdog Select Register 4 */
#define ADC_0_CWSELR5        ADC_0.CWSELR5.R               /* Channel Watchdog Select Register 5 */
#define ADC_0_CWSELR6        ADC_0.CWSELR6.R               /* Channel Watchdog Select Register 6 */
#define ADC_0_CWSELR7        ADC_0.CWSELR7.R               /* Channel Watchdog Select Register 7 */
#define ADC_0_CWSELR8        ADC_0.CWSELR8.R               /* Channel Watchdog Select Register 8 */
#define ADC_0_CWSELR9        ADC_0.CWSELR9.R               /* Channel Watchdog Select Register 9 */
#define ADC_0_CWSELR10       ADC_0.CWSELR10.R              /* Channel Watchdog Select Register 10 */
#define ADC_0_CWSELR11       ADC_0.CWSELR11.R              /* Channel Watchdog Select Register 11 */
#define ADC_0_CWENR0         ADC_0.CWENR0.R                /* Channel Watchdog Enable Register 0 */
#define ADC_0_CWENR1         ADC_0.CWENR1.R                /* Channel Watchdog Enable Register 1 */
#define ADC_0_CWENR2         ADC_0.CWENR2.R                /* Channel Watchdog Enable Register 2 */
#define ADC_0_AWORR0         ADC_0.AWORR0.R                /* Analog Watchdog Out of Range Register 0 */
#define ADC_0_AWORR1         ADC_0.AWORR1.R                /* Analog Watchdog Out of Range Register 1 */
#define ADC_0_AWORR2         ADC_0.AWORR2.R                /* Analog Watchdog Out of Range Register 2 */
#define ADC_0_CALBISTREG     ADC_0.CALBISTREG.R            /* Calibration, BIST Control and status Register */
#define ADC_0_OFSGNUSR       ADC_0.OFSGNUSR.R              /* Offset and Gain User Register */

/* ADC */
#define ADC_1_MCR            ADC_1.MCR.R                   /* Main Configuration Register */
#define ADC_1_MSR            ADC_1.MSR.R                   /* Main Status register */
#define ADC_1_ISR            ADC_1.ISR.R                   /* Interrupt Status Register */
#define ADC_1_CEOCFR0        ADC_1.CEOCFR0.R               /* Channel Pending register 0 */
#define ADC_1_CEOCFR1        ADC_1.CEOCFR1.R               /* Channel Pending register 1 */
#define ADC_1_CEOCFR2        ADC_1.CEOCFR2.R               /* Channel Pending register 2 */
#define ADC_1_IMR            ADC_1.IMR.R                   /* Interrupt Mask Register */
#define ADC_1_CIMR0          ADC_1.CIMR0.R                 /* Channel Interrupt Mask Register 0 */
#define ADC_1_CIMR1          ADC_1.CIMR1.R                 /* Channel Interrupt Mask Register 1 */
#define ADC_1_CIMR2          ADC_1.CIMR2.R                 /* Channel Interrupt Mask Register 2 */
#define ADC_1_WTISR          ADC_1.WTISR.R                 /* Watchdog Threshold Interrupt Status Register */
#define ADC_1_WTIMR          ADC_1.WTIMR.R                 /* Watchdog Threshold Interrupt Mask Register */
#define ADC_1_DMAE           ADC_1.DMAE.R                  /* DMA Enable register */
#define ADC_1_DMAR0          ADC_1.DMAR0.R                 /* DMA Channel Select Register 0 */
#define ADC_1_DMAR1          ADC_1.DMAR1.R                 /* DMA Channel Select Register 1 */
#define ADC_1_DMAR2          ADC_1.DMAR2.R                 /* DMA Channel Select Register 2 */
#define ADC_1_THRHLR0        ADC_1.THRHLR0.R               /* Threshold Register */
#define ADC_1_THRHLR1        ADC_1.THRHLR1.R               /* Threshold Register */
#define ADC_1_THRHLR2        ADC_1.THRHLR2.R               /* Threshold Register */
#define ADC_1_THRHLR3        ADC_1.THRHLR3.R               /* Threshold Register */
#define ADC_1_PSCR           ADC_1.PSCR.R                  /* Presampling Control Register */
#define ADC_1_PSR0           ADC_1.PSR0.R                  /* Presampling register 0 */
#define ADC_1_PSR1           ADC_1.PSR1.R                  /* Presampling register 1 */
#define ADC_1_PSR2           ADC_1.PSR2.R                  /* Presampling register 2 */
#define ADC_1_CTR0           ADC_1.CTR0.R                  /* Conversion Timing Register 0 */
#define ADC_1_CTR1           ADC_1.CTR1.R                  /* Conversion Timing Register 1 */
#define ADC_1_CTR2           ADC_1.CTR2.R                  /* Conversion Timing Register 2 */
#define ADC_1_NCMR0          ADC_1.NCMR0.R                 /* Normal Conversion Mask Register 0 */
#define ADC_1_NCMR1          ADC_1.NCMR1.R                 /* Normal Conversion Mask Register 1 */
#define ADC_1_NCMR2          ADC_1.NCMR2.R                 /* Normal Conversion Mask Register 2 */
#define ADC_1_JCMR0          ADC_1.JCMR0.R                 /* Injected Conversion Mask Register 0 */
#define ADC_1_JCMR1          ADC_1.JCMR1.R                 /* Injected Conversion Mask Register 1 */
#define ADC_1_JCMR2          ADC_1.JCMR2.R                 /* Injected Conversion Mask Register 2 */
#define ADC_1_DSDR           ADC_1.DSDR.R                  /* Decode Signals Delay Register */
#define ADC_1_PDEDR          ADC_1.PDEDR.R                 /* Power Down Exit Delay Register */
#define ADC_1_CDR0           ADC_1.CDR[0].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR1           ADC_1.CDR[1].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR2           ADC_1.CDR[2].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR3           ADC_1.CDR[3].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR4           ADC_1.CDR[4].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR5           ADC_1.CDR[5].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR6           ADC_1.CDR[6].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR7           ADC_1.CDR[7].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR8           ADC_1.CDR[8].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR9           ADC_1.CDR[9].R                /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR10          ADC_1.CDR[10].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR11          ADC_1.CDR[11].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR12          ADC_1.CDR[12].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR13          ADC_1.CDR[13].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR14          ADC_1.CDR[14].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR15          ADC_1.CDR[15].R               /* Channel Data Register n (Precision Channels) */
#define ADC_1_CDR16          ADC_1.CDR[16].R               /*  */
#define ADC_1_CDR17          ADC_1.CDR[17].R               /*  */
#define ADC_1_CDR18          ADC_1.CDR[18].R               /*  */
#define ADC_1_CDR19          ADC_1.CDR[19].R               /*  */
#define ADC_1_CDR20          ADC_1.CDR[20].R               /*  */
#define ADC_1_CDR21          ADC_1.CDR[21].R               /*  */
#define ADC_1_CDR22          ADC_1.CDR[22].R               /*  */
#define ADC_1_CDR23          ADC_1.CDR[23].R               /*  */
#define ADC_1_CDR24          ADC_1.CDR[24].R               /*  */
#define ADC_1_CDR25          ADC_1.CDR[25].R               /*  */
#define ADC_1_CDR26          ADC_1.CDR[26].R               /*  */
#define ADC_1_CDR27          ADC_1.CDR[27].R               /*  */
#define ADC_1_CDR28          ADC_1.CDR[28].R               /*  */
#define ADC_1_CDR29          ADC_1.CDR[29].R               /*  */
#define ADC_1_CDR30          ADC_1.CDR[30].R               /*  */
#define ADC_1_CDR31          ADC_1.CDR[31].R               /*  */
#define ADC_1_CDR32          ADC_1.CDR[32].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR33          ADC_1.CDR[33].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR34          ADC_1.CDR[34].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR35          ADC_1.CDR[35].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR36          ADC_1.CDR[36].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR37          ADC_1.CDR[37].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR38          ADC_1.CDR[38].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR39          ADC_1.CDR[39].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR40          ADC_1.CDR[40].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR41          ADC_1.CDR[41].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR42          ADC_1.CDR[42].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR43          ADC_1.CDR[43].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR44          ADC_1.CDR[44].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR45          ADC_1.CDR[45].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR46          ADC_1.CDR[46].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR47          ADC_1.CDR[47].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR48          ADC_1.CDR[48].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR49          ADC_1.CDR[49].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR50          ADC_1.CDR[50].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR51          ADC_1.CDR[51].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR52          ADC_1.CDR[52].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR53          ADC_1.CDR[53].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR54          ADC_1.CDR[54].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR55          ADC_1.CDR[55].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR56          ADC_1.CDR[56].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR57          ADC_1.CDR[57].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR58          ADC_1.CDR[58].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR59          ADC_1.CDR[59].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR60          ADC_1.CDR[60].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR61          ADC_1.CDR[61].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR62          ADC_1.CDR[62].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR63          ADC_1.CDR[63].R               /* Channel Data Register n (Internal Channels) */
#define ADC_1_CDR64          ADC_1.CDR[64].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR65          ADC_1.CDR[65].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR66          ADC_1.CDR[66].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR67          ADC_1.CDR[67].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR68          ADC_1.CDR[68].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR69          ADC_1.CDR[69].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR70          ADC_1.CDR[70].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR71          ADC_1.CDR[71].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR72          ADC_1.CDR[72].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR73          ADC_1.CDR[73].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR74          ADC_1.CDR[74].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR75          ADC_1.CDR[75].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR76          ADC_1.CDR[76].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR77          ADC_1.CDR[77].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR78          ADC_1.CDR[78].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR79          ADC_1.CDR[79].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR80          ADC_1.CDR[80].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR81          ADC_1.CDR[81].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR82          ADC_1.CDR[82].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR83          ADC_1.CDR[83].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR84          ADC_1.CDR[84].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR85          ADC_1.CDR[85].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR86          ADC_1.CDR[86].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR87          ADC_1.CDR[87].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR88          ADC_1.CDR[88].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR89          ADC_1.CDR[89].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR90          ADC_1.CDR[90].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR91          ADC_1.CDR[91].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR92          ADC_1.CDR[92].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR93          ADC_1.CDR[93].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR94          ADC_1.CDR[94].R               /* Channel Data Register n (External Channels) */
#define ADC_1_CDR95          ADC_1.CDR[95].R               /* Channel Data Register n (External Channels) */
#define ADC_1_THRHLR4        ADC_1.THRHLR4.R               /* Threshold Register */
#define ADC_1_THRHLR5        ADC_1.THRHLR5.R               /* Threshold Register */
#define ADC_1_CWSELR0        ADC_1.CWSELR0.R               /* Channel Watchdog Select Register 0 */
#define ADC_1_CWSELR1        ADC_1.CWSELR1.R               /* Channel Watchdog Select Register 1 */
#define ADC_1_CWSELR4        ADC_1.CWSELR4.R               /* Channel Watchdog Select Register 4 */
#define ADC_1_CWSELR5        ADC_1.CWSELR5.R               /* Channel Watchdog Select Register 5 */
#define ADC_1_CWSELR6        ADC_1.CWSELR6.R               /* Channel Watchdog Select Register 6 */
#define ADC_1_CWSELR7        ADC_1.CWSELR7.R               /* Channel Watchdog Select Register 7 */
#define ADC_1_CWSELR8        ADC_1.CWSELR8.R               /* Channel Watchdog Select Register 8 */
#define ADC_1_CWSELR9        ADC_1.CWSELR9.R               /* Channel Watchdog Select Register 9 */
#define ADC_1_CWSELR10       ADC_1.CWSELR10.R              /* Channel Watchdog Select Register 10 */
#define ADC_1_CWSELR11       ADC_1.CWSELR11.R              /* Channel Watchdog Select Register 11 */
#define ADC_1_CWENR0         ADC_1.CWENR0.R                /* Channel Watchdog Enable Register 0 */
#define ADC_1_CWENR1         ADC_1.CWENR1.R                /* Channel Watchdog Enable Register 1 */
#define ADC_1_CWENR2         ADC_1.CWENR2.R                /* Channel Watchdog Enable Register 2 */
#define ADC_1_AWORR0         ADC_1.AWORR0.R                /* Analog Watchdog Out of Range Register 0 */
#define ADC_1_AWORR1         ADC_1.AWORR1.R                /* Analog Watchdog Out of Range Register 1 */
#define ADC_1_AWORR2         ADC_1.AWORR2.R                /* Analog Watchdog Out of Range Register 2 */
#define ADC_1_CALBISTREG     ADC_1.CALBISTREG.R            /* Calibration, BIST Control and status Register */
#define ADC_1_OFSGNUSR       ADC_1.OFSGNUSR.R              /* Offset and Gain User Register */

/* AIPS */
#define AIPS_A_MPRA          AIPS_A.MPRA.R                 /* Master Privilege Register A */
#define AIPS_A_MPRB          AIPS_A.MPRB.R                 /* Master Privilege Register B */
#define AIPS_A_PACRA         AIPS_A.PACR[0].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRB         AIPS_A.PACR[1].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRC         AIPS_A.PACR[2].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRD         AIPS_A.PACR[3].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRE         AIPS_A.PACR[4].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRF         AIPS_A.PACR[5].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRG         AIPS_A.PACR[6].R              /* Peripheral Access Control Register */
#define AIPS_A_PACRH         AIPS_A.PACR[7].R              /* Peripheral Access Control Register */
#define AIPS_A_OPACRA        AIPS_A.OPACR[0].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRB        AIPS_A.OPACR[1].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRC        AIPS_A.OPACR[2].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRD        AIPS_A.OPACR[3].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRE        AIPS_A.OPACR[4].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRF        AIPS_A.OPACR[5].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRG        AIPS_A.OPACR[6].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRH        AIPS_A.OPACR[7].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRI        AIPS_A.OPACR[8].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRJ        AIPS_A.OPACR[9].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRK        AIPS_A.OPACR[10].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRL        AIPS_A.OPACR[11].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRM        AIPS_A.OPACR[12].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRN        AIPS_A.OPACR[13].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRO        AIPS_A.OPACR[14].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRP        AIPS_A.OPACR[15].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRQ        AIPS_A.OPACR[16].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRR        AIPS_A.OPACR[17].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRS        AIPS_A.OPACR[18].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRT        AIPS_A.OPACR[19].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRU        AIPS_A.OPACR[20].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRV        AIPS_A.OPACR[21].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRW        AIPS_A.OPACR[22].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRX        AIPS_A.OPACR[23].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRY        AIPS_A.OPACR[24].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRZ        AIPS_A.OPACR[25].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAA       AIPS_A.OPACR[26].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAB       AIPS_A.OPACR[27].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAC       AIPS_A.OPACR[28].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAD       AIPS_A.OPACR[29].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAE       AIPS_A.OPACR[30].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_A_OPACRAF       AIPS_A.OPACR[31].R            /* Off-Platform Peripheral Access Control Register */

/* AIPS */
#define AIPS_B_MPRA          AIPS_B.MPRA.R                 /* Master Privilege Register A */
#define AIPS_B_MPRB          AIPS_B.MPRB.R                 /* Master Privilege Register B */
#define AIPS_B_PACRA         AIPS_B.PACR[0].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRB         AIPS_B.PACR[1].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRC         AIPS_B.PACR[2].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRD         AIPS_B.PACR[3].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRE         AIPS_B.PACR[4].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRF         AIPS_B.PACR[5].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRG         AIPS_B.PACR[6].R              /* Peripheral Access Control Register */
#define AIPS_B_PACRH         AIPS_B.PACR[7].R              /* Peripheral Access Control Register */
#define AIPS_B_OPACRA        AIPS_B.OPACR[0].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRB        AIPS_B.OPACR[1].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRC        AIPS_B.OPACR[2].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRD        AIPS_B.OPACR[3].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRE        AIPS_B.OPACR[4].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRF        AIPS_B.OPACR[5].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRG        AIPS_B.OPACR[6].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRH        AIPS_B.OPACR[7].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRI        AIPS_B.OPACR[8].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRJ        AIPS_B.OPACR[9].R             /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRK        AIPS_B.OPACR[10].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRL        AIPS_B.OPACR[11].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRM        AIPS_B.OPACR[12].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRN        AIPS_B.OPACR[13].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRO        AIPS_B.OPACR[14].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRP        AIPS_B.OPACR[15].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRQ        AIPS_B.OPACR[16].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRR        AIPS_B.OPACR[17].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRS        AIPS_B.OPACR[18].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRT        AIPS_B.OPACR[19].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRU        AIPS_B.OPACR[20].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRV        AIPS_B.OPACR[21].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRW        AIPS_B.OPACR[22].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRX        AIPS_B.OPACR[23].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRY        AIPS_B.OPACR[24].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRZ        AIPS_B.OPACR[25].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAA       AIPS_B.OPACR[26].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAB       AIPS_B.OPACR[27].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAC       AIPS_B.OPACR[28].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAD       AIPS_B.OPACR[29].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAE       AIPS_B.OPACR[30].R            /* Off-Platform Peripheral Access Control Register */
#define AIPS_B_OPACRAF       AIPS_B.OPACR[31].R            /* Off-Platform Peripheral Access Control Register */

/* AXBS */
#define AXBS_0_PRS0          AXBS_0.PORT[0].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS0          AXBS_0.PORT[0].CRS.R          /* Control Register */
#define AXBS_0_PRS1          AXBS_0.PORT[1].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS1          AXBS_0.PORT[1].CRS.R          /* Control Register */
#define AXBS_0_PRS2          AXBS_0.PORT[2].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS2          AXBS_0.PORT[2].CRS.R          /* Control Register */
#define AXBS_0_PRS3          AXBS_0.PORT[3].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS3          AXBS_0.PORT[3].CRS.R          /* Control Register */
#define AXBS_0_PRS4          AXBS_0.PORT[4].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS4          AXBS_0.PORT[4].CRS.R          /* Control Register */
#define AXBS_0_PRS5          AXBS_0.PORT[5].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS5          AXBS_0.PORT[5].CRS.R          /* Control Register */
#define AXBS_0_PRS6          AXBS_0.PORT[6].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS6          AXBS_0.PORT[6].CRS.R          /* Control Register */
#define AXBS_0_PRS7          AXBS_0.PORT[7].PRS.R          /* Priority Registers Slave */
#define AXBS_0_CRS7          AXBS_0.PORT[7].CRS.R          /* Control Register */
#define AXBS_0_MGPCR0        AXBS_0.MGPCR[0].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR1        AXBS_0.MGPCR[1].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR2        AXBS_0.MGPCR[2].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR3        AXBS_0.MGPCR[3].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR4        AXBS_0.MGPCR[4].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR5        AXBS_0.MGPCR[5].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR6        AXBS_0.MGPCR[6].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_0_MGPCR7        AXBS_0.MGPCR[7].MGPCR.R       /* Master General Purpose Control Register */

/* AXBS */
#define AXBS_1_PRS0          AXBS_1.PORT[0].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS0          AXBS_1.PORT[0].CRS.R          /* Control Register */
#define AXBS_1_PRS1          AXBS_1.PORT[1].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS1          AXBS_1.PORT[1].CRS.R          /* Control Register */
#define AXBS_1_PRS2          AXBS_1.PORT[2].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS2          AXBS_1.PORT[2].CRS.R          /* Control Register */
#define AXBS_1_PRS3          AXBS_1.PORT[3].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS3          AXBS_1.PORT[3].CRS.R          /* Control Register */
#define AXBS_1_PRS4          AXBS_1.PORT[4].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS4          AXBS_1.PORT[4].CRS.R          /* Control Register */
#define AXBS_1_PRS5          AXBS_1.PORT[5].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS5          AXBS_1.PORT[5].CRS.R          /* Control Register */
#define AXBS_1_PRS6          AXBS_1.PORT[6].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS6          AXBS_1.PORT[6].CRS.R          /* Control Register */
#define AXBS_1_PRS7          AXBS_1.PORT[7].PRS.R          /* Priority Registers Slave */
#define AXBS_1_CRS7          AXBS_1.PORT[7].CRS.R          /* Control Register */
#define AXBS_1_MGPCR0        AXBS_1.MGPCR[0].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR1        AXBS_1.MGPCR[1].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR2        AXBS_1.MGPCR[2].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR3        AXBS_1.MGPCR[3].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR4        AXBS_1.MGPCR[4].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR5        AXBS_1.MGPCR[5].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR6        AXBS_1.MGPCR[6].MGPCR.R       /* Master General Purpose Control Register */
#define AXBS_1_MGPCR7        AXBS_1.MGPCR[7].MGPCR.R       /* Master General Purpose Control Register */

/* BCTU */
#define BCTU_MCR             BCTU.MCR.R                    /* Module Configuration Register */
#define BCTU_MSR             BCTU.MSR.R                    /* Module Status register */
#define BCTU_TRGCFG_0        BCTU.TRGCFG[0].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_1        BCTU.TRGCFG[1].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_2        BCTU.TRGCFG[2].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_3        BCTU.TRGCFG[3].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_4        BCTU.TRGCFG[4].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_5        BCTU.TRGCFG[5].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_6        BCTU.TRGCFG[6].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_7        BCTU.TRGCFG[7].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_8        BCTU.TRGCFG[8].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_9        BCTU.TRGCFG[9].R              /* Trigger Configuration Register */
#define BCTU_TRGCFG_10       BCTU.TRGCFG[10].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_11       BCTU.TRGCFG[11].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_12       BCTU.TRGCFG[12].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_13       BCTU.TRGCFG[13].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_14       BCTU.TRGCFG[14].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_15       BCTU.TRGCFG[15].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_16       BCTU.TRGCFG[16].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_17       BCTU.TRGCFG[17].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_18       BCTU.TRGCFG[18].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_19       BCTU.TRGCFG[19].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_20       BCTU.TRGCFG[20].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_21       BCTU.TRGCFG[21].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_22       BCTU.TRGCFG[22].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_23       BCTU.TRGCFG[23].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_24       BCTU.TRGCFG[24].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_25       BCTU.TRGCFG[25].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_26       BCTU.TRGCFG[26].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_27       BCTU.TRGCFG[27].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_28       BCTU.TRGCFG[28].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_29       BCTU.TRGCFG[29].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_30       BCTU.TRGCFG[30].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_31       BCTU.TRGCFG[31].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_32       BCTU.TRGCFG[32].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_33       BCTU.TRGCFG[33].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_34       BCTU.TRGCFG[34].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_35       BCTU.TRGCFG[35].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_36       BCTU.TRGCFG[36].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_37       BCTU.TRGCFG[37].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_38       BCTU.TRGCFG[38].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_39       BCTU.TRGCFG[39].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_40       BCTU.TRGCFG[40].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_41       BCTU.TRGCFG[41].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_42       BCTU.TRGCFG[42].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_43       BCTU.TRGCFG[43].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_44       BCTU.TRGCFG[44].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_45       BCTU.TRGCFG[45].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_46       BCTU.TRGCFG[46].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_47       BCTU.TRGCFG[47].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_48       BCTU.TRGCFG[48].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_49       BCTU.TRGCFG[49].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_50       BCTU.TRGCFG[50].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_51       BCTU.TRGCFG[51].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_52       BCTU.TRGCFG[52].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_53       BCTU.TRGCFG[53].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_54       BCTU.TRGCFG[54].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_55       BCTU.TRGCFG[55].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_56       BCTU.TRGCFG[56].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_57       BCTU.TRGCFG[57].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_58       BCTU.TRGCFG[58].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_59       BCTU.TRGCFG[59].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_60       BCTU.TRGCFG[60].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_61       BCTU.TRGCFG[61].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_62       BCTU.TRGCFG[62].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_63       BCTU.TRGCFG[63].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_64       BCTU.TRGCFG[64].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_65       BCTU.TRGCFG[65].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_66       BCTU.TRGCFG[66].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_67       BCTU.TRGCFG[67].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_68       BCTU.TRGCFG[68].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_69       BCTU.TRGCFG[69].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_70       BCTU.TRGCFG[70].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_71       BCTU.TRGCFG[71].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_72       BCTU.TRGCFG[72].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_73       BCTU.TRGCFG[73].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_74       BCTU.TRGCFG[74].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_75       BCTU.TRGCFG[75].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_76       BCTU.TRGCFG[76].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_77       BCTU.TRGCFG[77].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_78       BCTU.TRGCFG[78].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_79       BCTU.TRGCFG[79].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_80       BCTU.TRGCFG[80].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_81       BCTU.TRGCFG[81].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_82       BCTU.TRGCFG[82].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_83       BCTU.TRGCFG[83].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_84       BCTU.TRGCFG[84].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_85       BCTU.TRGCFG[85].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_86       BCTU.TRGCFG[86].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_87       BCTU.TRGCFG[87].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_88       BCTU.TRGCFG[88].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_89       BCTU.TRGCFG[89].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_90       BCTU.TRGCFG[90].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_91       BCTU.TRGCFG[91].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_92       BCTU.TRGCFG[92].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_93       BCTU.TRGCFG[93].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_94       BCTU.TRGCFG[94].R             /* Trigger Configuration Register */
#define BCTU_TRGCFG_95       BCTU.TRGCFG[95].R             /* Trigger Configuration Register */
#define BCTU_WRPROT          BCTU.WRPROT.R                 /* Write Protection register */
#define BCTU_SFTRGR1         BCTU.SFTRGR1.R                /* Software Trigger register 1 */
#define BCTU_SFTRGR2         BCTU.SFTRGR2.R                /* Software Trigger register 1 */
#define BCTU_SFTRGR3         BCTU.SFTRGR3.R                /* Software Trigger register 1 */
#define BCTU_ADC0DR          BCTU.ADC0DR.R                 /* ADC0 Result Data register */
#define BCTU_ADC1DR          BCTU.ADC1DR.R                 /* ADC1 result data register */
#define BCTU_LISTSTAR        BCTU.LISTSTAR.R               /* LIST Size Status register */
#define BCTU_LISTCHR_0       BCTU.LISTCHR[0].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_1       BCTU.LISTCHR[1].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_2       BCTU.LISTCHR[2].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_3       BCTU.LISTCHR[3].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_4       BCTU.LISTCHR[4].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_5       BCTU.LISTCHR[5].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_6       BCTU.LISTCHR[6].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_7       BCTU.LISTCHR[7].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_8       BCTU.LISTCHR[8].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_9       BCTU.LISTCHR[9].R             /* LIST Channel Address Register */
#define BCTU_LISTCHR_10      BCTU.LISTCHR[10].R            /* LIST Channel Address Register */
#define BCTU_LISTCHR_11      BCTU.LISTCHR[11].R            /* LIST Channel Address Register */
#define BCTU_LISTCHR_12      BCTU.LISTCHR[12].R            /* LIST Channel Address Register */
#define BCTU_LISTCHR_13      BCTU.LISTCHR[13].R            /* LIST Channel Address Register */
#define BCTU_LISTCHR_14      BCTU.LISTCHR[14].R            /* LIST Channel Address Register */
#define BCTU_LISTCHR_15      BCTU.LISTCHR[15].R            /* LIST Channel Address Register */

/* C55FMC */
#define C55FMC_MCR           C55FMC.MCR.R                  /* Module Configuration Register */
#define C55FMC_MCRE          C55FMC.MCRE.R                 /* Extended Module Configuration Register */
#define C55FMC_LOCK0         C55FMC.LOCK0.R                /* Lock 0 register */
#define C55FMC_LOCK1         C55FMC.LOCK1.R                /* Lock 1 register */
#define C55FMC_LOCK2         C55FMC.LOCK2.R                /* Lock 2 register */
#define C55FMC_LOCK3         C55FMC.LOCK3.R                /* Lock 3 register */
#define C55FMC_SEL0          C55FMC.SEL0.R                 /* Select 0 register */
#define C55FMC_SEL1          C55FMC.SEL1.R                 /* Select 1 register */
#define C55FMC_SEL2          C55FMC.SEL2.R                 /* Select 2 register */
#define C55FMC_SEL3          C55FMC.SEL3.R                 /* Select 3 register */
#define C55FMC_ADR           C55FMC.ADR.R                  /* Address register */
#define C55FMC_UT0           C55FMC.UT0.R                  /* UTest 0 register */
#define C55FMC_UM0           C55FMC.UM[0].R                /* UMISR register */
#define C55FMC_UM1           C55FMC.UM[1].R                /* UMISR register */
#define C55FMC_UM2           C55FMC.UM[2].R                /* UMISR register */
#define C55FMC_UM3           C55FMC.UM[3].R                /* UMISR register */
#define C55FMC_UM4           C55FMC.UM[4].R                /* UMISR register */
#define C55FMC_UM5           C55FMC.UM[5].R                /* UMISR register */
#define C55FMC_UM6           C55FMC.UM[6].R                /* UMISR register */
#define C55FMC_UM7           C55FMC.UM[7].R                /* UMISR register */
#define C55FMC_UM8           C55FMC.UM[8].R                /* UMISR register */
#define C55FMC_UM9           C55FMC.UM9.R                  /* UMISR register */
#define C55FMC_OPP0          C55FMC.OPP0.R                 /* Over-Program Protection 0 register */
#define C55FMC_OPP1          C55FMC.OPP1.R                 /* Over-Program Protection 1 register */
#define C55FMC_OPP2          C55FMC.OPP2.R                 /* Over-Program Protection 2 register */
#define C55FMC_OPP3          C55FMC.OPP3.R                 /* Over-Program Protection 3 register */
#define C55FMC_TMD           C55FMC.TMD.R                  /* Test Mode Disable Password Check register */


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_1_H_ */
