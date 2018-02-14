/** @file MPC5748G_types_3.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_3_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_3_H_

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
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_3_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* ============================================================================
   =============================== Module: MC_RGM =============================
   ============================================================================ */

/* Dang that NXP. Why would they do this? STUPID.
 * many instances of "warning: struct has no named members [-Wpedantic]"
 * many of their unions include a struct w/ anonymous bitfield members. comeon guys, give the
 * field a name to avoid this warning.
 */
#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"								/* { */
#endif

struct MC_RGM_tag {
  union {                              /* 'Destructive' Event Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t F_SWT2_RES:1;          /* Flag for SWT2 Reset */
      vuint32_t F_SWT1_RES:2;          /* Flag for SWT1 Reset */
      vuint32_t F_SWT0_RES:1;          /* Flag for SWT0 (Flash Initialization Failure) Reset */
      vuint32_t F_SUF:1;               /* Flag for SUF (STCU unrecoverable fault) */
      vuint32_t F_FUNC_ESC:1;          /* Flag for Functional Reset Escalation */
      vuint32_t F_SSCM_SEC:1;          /* Flag for SSCM Secure Reset Request */
      vuint32_t F_SOFT_DEST:1;         /* Flag for Software Generated Destructive Reset */
      vuint32_t F_HSM_DEST:1;          /* Flag for HSM Destructive Reset */
      vuint32_t  :1;
      vuint32_t F_POR:1;               /* Flag for Power-On Reset */
    } B;
  } DES;

  uint8_t MC_RGM_reserved0[12];
  union {                              /* 'Destructive' Event Reset Disable Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t D_SWT2_RES:1;          /* Disable SWT2 Reset */
      vuint32_t D_SWT1_RES:2;          /* Disable SWT1 Reset */
      vuint32_t D_SWT0_RES:1;          /* Disable SWT0 (Flash Initialization Failure) Reset */
      vuint32_t D_SUF:1;               /* Disable SUF (STCU unrecoverable fault) */
      vuint32_t D_FUNC_ESC:1;          /* Disable Functional Reset Escalation */
      vuint32_t D_SSCM_SEC:1;          /* Disable SSCM Secure Reset Request */
      vuint32_t D_SOFT_DEST:1;         /* Disable Software Generated Destructive Reset */
      vuint32_t D_HSM_DEST:1;          /* Disable HSM Destructive Reset */
      vuint32_t  :1;
      vuint32_t D_POR:1;               /* Disable Power-On Reset */
    } B;
  } DERD;

  uint8_t MC_RGM_reserved1[28];
  union {                              /* 'Destructive' Bidirectional Reset Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t BE_SWT2_RES:1;         /* Bidirectional Reset Enable for SWT2 Reset */
      vuint32_t BE_SWT1_RES:1;         /* Bidirectional Reset Enable for SWT1 Reset */
      vuint32_t BE_SWT0_RES:1;         /* Bidirectional Reset Enable for SWT0 (Flash Initialization Failure) Reset */
      vuint32_t BE_SUF:1;              /* Bidirectional Reset Enable for SUF (STCU unrecoverable fault) */
      vuint32_t BE_FUNC_ESC:1;         /* Bidirectional Reset Enable for Functional Reset Escalation */
      vuint32_t BE_SSCM_SEC:1;         /* Bidirectional Reset Enable for SSCM Secure Reset Request */
      vuint32_t BE_SOFT_DEST:1;        /* Bidirectional Reset Enable for Software Generated Destructive Reset */
      vuint32_t BE_HSM_DEST:1;         /* Bidirectional Reset Enable for HSM Generated Functional Reset */
      vuint32_t  :1;
      vuint32_t BE_POR:1;              /* Bidirectional Power-On Reset */
    } B;
  } DBRE;

  uint8_t MC_RGM_reserved2[716];
  union {                              /* 'Functional' Event Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t F_LVD_LV_PD2_cold:1;   /* Flag for PD2 LVD at cold point */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t F_HVD_LV_cold:1;       /* Flag for High Voltage Detect */
      vuint32_t F_LVD_IO_A_HI:1;       /* Flag for Low-Voltage Detect IOs */
      vuint32_t F_Z2_DBG:1;            /* Flag for Z2 Debug Reset */
      vuint32_t F_Z4B_DBG:1;           /* Flag for Z4B Debug Reset */
      vuint32_t F_Z4A_DBG:1;           /* Flag for Z4A Debug Reset */
      vuint32_t F_FCCU_SHORT:1;        /* Flag for FCCU Short Functional Reset */
      vuint32_t F_FCCU_LONG:1;         /* Flag for FCCU Long Functional Reset */
      vuint32_t F_CMU_OLR:1;           /* Flag for OSC Frequency less than RC */
      vuint32_t F_ST_DONE:1;           /* Flag for Selt Test Completed */
      vuint32_t F_JTAG_FUNC:1;         /* Flag for JTAG Functional Reset */
      vuint32_t F_NMI_WKPU:1;          /* Flag for Non Maskable Interrupt from Wakeup Unit */
      vuint32_t F_SOFT_FUNC:1;         /* Flag for Software Generated Functional Reset */
      vuint32_t F_HSM_FUNC:1;          /* Flag for HSM Generated Functional Reset */
      vuint32_t  :1;
      vuint32_t F_EXR:1;               /* Flag for External Reset */
    } B;
  } FES;

  uint8_t MC_RGM_reserved3[12];
  union {                              /* 'Functional' Event Reset Disable Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t D_LVD_LV_PD2_cold:1;   /* Disable PD2 LVD at cold point */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t D_HVD_LV_cold:1;       /* Disable High Voltage Detect */
      vuint32_t D_LVD_IO_A_HI:1;       /* Disable Low Voltage Detect IOs */
      vuint32_t D_Z2_DBG:1;            /* Disable Z2 Debug Rreset */
      vuint32_t D_Z4B_DBG:1;           /* Disable Z4B Debug Reset */
      vuint32_t D_Z4A_DBG:1;           /* Disable Z4A Debug Reset */
      vuint32_t D_FCCU_SHORT:1;        /* Disable FCCU Short Functional Reset */
      vuint32_t D_FCCU_LONG:1;         /* Disable FCCU Long Functional Reset */
      vuint32_t D_CMU_OLR:1;           /* Disable OSC Frequency less than RC */
      vuint32_t D_ST_DONE:1;           /* Disable Selt Test Completed */
      vuint32_t D_JTAG_FUNC:1;         /* Disable JTAG Functional Reset */
      vuint32_t D_NMI_WKPU:1;          /* Disable Non Maskable Interrupt from Wakeup Unit */
      vuint32_t D_SOFT_FUNC:1;         /* Disable Software Generated Functional Reset */
      vuint32_t D_HSM_FUNC:1;          /* Disable HSM Genrated Functional Reset */
      vuint32_t  :1;
      vuint32_t D_EXR:1;               /* Disable External Reset */
    } B;
  } FERD;

  uint8_t MC_RGM_reserved4[12];
  union {                              /* 'Functional' Event Reset DisableAlternate Request Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t AR_LVD_LV_PD2_cold:1;  /* Alternate Request for PD2 LVD at cold point */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AR_HVD_LV_cold:1;      /* Alternate Request for High Voltage Detect */
      vuint32_t AR_LVD_IO_A_HI:1;      /* Alternate Request for Low Voltage Detect IOs */
      vuint32_t AR_Z2_DBG:1;           /* Alternate Request for Z2 Debug Reset */
      vuint32_t AR_Z4B_DBG:1;          /* Alternate Request for Z4B Debug Reset */
      vuint32_t AR_Z4A_DBG:1;          /* Alternate Request for Z4A Debug Reset */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AR_CMU_OLR:1;          /* Alternate Request for OSC Frequency less than RC */
      vuint32_t  :1;
      vuint32_t AR_JTAG_FUNC:1;        /* Alternate Request for JTAG functional Reset */
      vuint32_t AR_NMI_WKPU:1;         /* Alternate Request for Non Maskable Interrupt from Wakeup Unit */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AR_EXR:1;              /* Flag for External reset */
    } B;
  } FEAR;

  uint8_t MC_RGM_reserved5[12];
  union {                              /* 'Functional' Bidirectional Reset Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t BE_LVD_LV_PD2_cold:1;  /* Bidirectional Reset Enable for PD2 LVD at Cold Point */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t BE_HVD_LV_cold:1;      /* Bidirectional Reset Enable for High Voltage Detect */
      vuint32_t BE_LVD_IO_A_HI:1;      /* Bidirectional Reset Enable for Low Voltage Detect IOs */
      vuint32_t BE_Z2_DBG:1;           /* Bidirectional Reset Enable for Z2 debug reset */
      vuint32_t BE_Z4B_DBG:1;          /* Bidirectional Reset Enable for BE_Z4B_DBG */
      vuint32_t BE_Z4A_DBG:1;          /* Bidirectional Reset Enable for Z4A Debug Reset */
      vuint32_t BE_FCCU_SHORT:1;       /* Bidirectional Reset Enable for FCCU Short Functional Reset */
      vuint32_t BE_FCCU_LONG:1;        /* Bidirectional Reset Enable for FCCU Long Functional Reset */
      vuint32_t BE_CMU_OLR:1;          /* Bidirectional Reset Enable for OSC Frequency less than RC */
      vuint32_t BE_ST_DONE:1;          /* Bidirectional Reset Enable for Selt Test Completed */
      vuint32_t BE_JTAG_FUNC:1;        /* Bidirectional Reset Enable for JTAG Function */
      vuint32_t BE_NMI_WKPU:1;         /* Bidirectional Reset Enable for Non Maskable Interrupt from Wakeup Unit */
      vuint32_t BE_SOFT_FUNC:1;        /* Bidirectional Reset Enable for Software Generated Functional Reset */
      vuint32_t BE_HSM_FUNC:1;         /* Bidirectional Reset Enable for HSM Generated Functional Reset */
      vuint32_t  :1;
      vuint32_t BE_EXR:1;              /* Flag for External Reset */
    } B;
  } FBRE;

  uint8_t MC_RGM_reserved6[12];
  union {                              /* 'Functional' Event Short Sequence Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t SS_LVD_LV_PD2_cold:1;  /* Short Sequence for PD2 LVD at Cold Point */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t SS_HVD_LV_cold:1;      /* Short Sequence for High Voltage Detect IOs */
      vuint32_t SS_LVD_IO_A_HI:1;      /* Short Sequence for Low Voltage Detect IOs */
      vuint32_t SS_Z2_DBG:1;           /* Short Sequence for Z2 Debug Reset */
      vuint32_t SS_Z4B_DBG:1;          /* Short Sequence for Z4B Debug Reset */
      vuint32_t SS_Z4A_DBG:1;          /* Short Sequence for Z4A Debug Reset */
      vuint32_t SS_FCCU_SHORT:1;       /* Short Sequence for FCCU Short Functional Reset */
      vuint32_t SS_FCCU_LONG:1;        /* Short Sequence for FCCU Long Functional Reset */
      vuint32_t SS_CMU_OLR:1;          /* Short Sequence for OSC Frequency less than RC */
      vuint32_t SS_ST_DONE:1;          /* Short Sequence for Selt Test Completed */
      vuint32_t SS_FUNC_JTAG:1;        /* Short Sequence for JTAG Functional Reset */
      vuint32_t SS_NMI_WKPU:1;         /* Short Sequence for Non Maskable Interrupt 3 Wakeup Unit */
      vuint32_t SS_SOFT_FUNC:1;        /* Short Sequence for Software Generated Functional Reset */
      vuint32_t SS_HSM_FUNC:1;         /* Short Sequence for HSM Genrated Functional Reset */
      vuint32_t  :1;
      vuint32_t SS_EXR:1;              /* Short Sequence for External Reset */
    } B;
  } FESS;

  uint8_t MC_RGM_reserved7[704];
  union {                              /* 'Functional' Reset Escalation Threshold Register */
    vuint8_t R;
    struct {
      vuint8_t  :4;
      vuint8_t FRET:4;
    } B;
  } FRET;

  uint8_t MC_RGM_reserved8[3];
  union {                              /* 'Destructive' Reset Escalation Threshold Register */
    vuint8_t R;
    struct {
      vuint8_t  :4;
      vuint8_t DRET:4;
    } B;
  } DRET;
};


/* ============================================================================
   =============================== Module: MEMU_0 =============================
   ============================================================================ */

struct MEMU_0_tag {
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SWR:1;
      vuint32_t  :15;
    } B;
  } CTRL;

  union {                              /* Error flag register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t PR_CE:1;
      vuint32_t PR_UCE:1;
      vuint32_t PR_CEO:1;
      vuint32_t PR_UCO:1;
      vuint32_t PR_EBO:1;
      vuint32_t  :3;
      vuint32_t F_CE:1;
      vuint32_t F_UCE:1;
      vuint32_t F_CEO:1;
      vuint32_t F_UCO:1;
      vuint32_t F_EBO:1;
      vuint32_t  :3;
      vuint32_t SR_CE:1;
      vuint32_t SR_UCE:1;
      vuint32_t SR_CEO:1;
      vuint32_t SR_UCO:1;
      vuint32_t SR_EBO:1;
    } B;
  } ERR_FLAG;

  uint8_t MEMU_reserved0[4];
  union {                              /* Debug register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t FR_PR_CE:1;
      vuint32_t FR_PR_UCE:1;
      vuint32_t FR_PR_CEO:1;
      vuint32_t FR_PR_UCO:1;
      vuint32_t FR_PR_EBO:1;
      vuint32_t  :3;
      vuint32_t FR_F_CE:1;
      vuint32_t FR_F_UCE:1;
      vuint32_t FR_F_CEO:1;
      vuint32_t FR_F_UCO:1;
      vuint32_t FR_F_EBO:1;
      vuint32_t  :3;
      vuint32_t FR_SR_CE:1;
      vuint32_t FR_SR_UCE:1;
      vuint32_t FR_SR_CEO:1;
      vuint32_t FR_SR_UCO:1;
      vuint32_t FR_SR_EBO:1;
    } B;
  } DEBUG;

  uint8_t MEMU_reserved1[16];
  struct {
    union {                            /* System RAM correctable error reporting table status register */
      vuint32_t R;
      struct {
        vuint32_t VLD:1;
        vuint32_t  :23;
        vuint32_t BAD_BIT:8;
      } B;
    } STS;
    union {                            /* System RAM correctable error reporting table address register */
      vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;
      } B;
    } ADDR;
  } SYS_RAM_CERR[10];

  union {                              /* System RAM uncorrectable error reporting table status register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :31;
    } B;
  } SYS_RAM_UNCERR_STS;

  union {                              /* System RAM uncorrectable error reporting table address register */
    vuint32_t R;
    struct {
      vuint32_t ERR_ADD:32;
    } B;
  } SYS_RAM_UNCERR_ADDR;

  union {                              /* System RAM concurrent overflow register */
    vuint32_t R;
    struct {
      vuint32_t OFLW:32;
    } B;
  } SYS_RAM_OFLW;

  uint8_t MEMU_reserved2[1444];
  struct {
    union {                            /* Peripheral RAM correctable error reporting table status register */
      vuint32_t R;
      struct {
        vuint32_t VLD:1;
        vuint32_t  :23;
        vuint32_t BAD_BIT:8;
      } B;
    } STS;
    union {                            /* Peripheral RAM correctable error reporting table address register */
      vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;
      } B;
    } ADDR;
  } PERIPH_RAM_CERR[2];

  union {                              /* Peripheral RAM uncorrectable error reporting table status register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :31;
    } B;
  } PERIPH_RAM_UNCERR_STS;

  union {                              /* Peripheral RAM uncorrectable error reporting table address register */
    vuint32_t R;
    struct {
      vuint32_t ERR_ADD:32;
    } B;
  } PERIPH_RAM_UNCERR_ADDR;

  union {                              /* Peripheral RAM concurrent overflow register */
    vuint32_t R;
    struct {
      vuint32_t OFLW:32;
    } B;
  } PERIPH_RAM_OFLW;

  uint8_t MEMU_reserved3[1508];
  struct {
    union {                            /* Flash memory correctable error reporting table status register */
      vuint32_t R;
      struct {
        vuint32_t VLD:1;
        vuint32_t  :23;
        vuint32_t BAD_BIT:8;
      } B;
    } STS;
    union {                            /* Flash memory correctable error reporting table address register */
      vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;
      } B;
    } ADDR;
  } FLASH_CERR[20];

  union {                              /* Flash memory uncorrectable error reporting table status register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :31;
    } B;
  } FLASH_UNCERR_STS;

  union {                              /* Flash memory uncorrectable error reporting table address register */
    vuint32_t R;
    struct {
      vuint32_t ERR_ADD:32;
    } B;
  } FLASH_UNCERR_ADDR;

  union {                              /* Flash memory concurrent overflow register */
    vuint32_t R;
    struct {
      vuint32_t OFLW:32;
    } B;
  } FLASH_OFLW;
};


/* ============================================================================
   =============================== Module: MEMU_1 =============================
   ============================================================================ */

struct MEMU_1_tag {
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SWR:1;
      vuint32_t  :15;
    } B;
  } CTRL;

  union {                              /* Error flag register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t PR_CE:1;
      vuint32_t PR_UCE:1;
      vuint32_t PR_CEO:1;
      vuint32_t PR_UCO:1;
      vuint32_t PR_EBO:1;
      vuint32_t  :3;
      vuint32_t  :5;
      vuint32_t  :3;
      vuint32_t SR_CE:1;
      vuint32_t SR_UCE:1;
      vuint32_t SR_CEO:1;
      vuint32_t SR_UCO:1;
      vuint32_t SR_EBO:1;
    } B;
  } ERR_FLAG;

  uint8_t MEMU_reserved0[4];
  union {                              /* Debug register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t FR_PR_CE:1;
      vuint32_t FR_PR_UCE:1;
      vuint32_t FR_PR_CEO:1;
      vuint32_t FR_PR_UCO:1;
      vuint32_t FR_PR_EBO:1;
      vuint32_t  :3;
      vuint32_t  :5;
      vuint32_t  :3;
      vuint32_t FR_SR_CE:1;
      vuint32_t FR_SR_UCE:1;
      vuint32_t FR_SR_CEO:1;
      vuint32_t FR_SR_UCO:1;
      vuint32_t FR_SR_EBO:1;
    } B;
  } DEBUG;

  uint8_t MEMU_reserved1[16];
  struct {
    union {                            /* System RAM correctable error reporting table status register */
      vuint32_t R;
      struct {
        vuint32_t VLD:1;
        vuint32_t  :23;
        vuint32_t BAD_BIT:8;
      } B;
    } STS;
    union {                            /* System RAM correctable error reporting table address register */
      vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;
      } B;
    } ADDR;
  } SYS_RAM_CERR[3];

  union {                              /* System RAM uncorrectable error reporting table status register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :31;
    } B;
  } SYS_RAM_UNCERR_STS;

  union {                              /* System RAM uncorrectable error reporting table address register */
    vuint32_t R;
    struct {
      vuint32_t ERR_ADD:32;
    } B;
  } SYS_RAM_UNCERR_ADDR;

  union {                              /* System RAM concurrent overflow register */
    vuint32_t R;
    struct {
      vuint32_t OFLW:32;
    } B;
  } SYS_RAM_OFLW;

  uint8_t MEMU_reserved2[1500];
  struct {
    union {                            /* Peripheral RAM correctable error reporting table status register */
      vuint32_t R;
      struct {
        vuint32_t VLD:1;
        vuint32_t  :23;
        vuint32_t BAD_BIT:8;
      } B;
    } STS;
    union {                            /* Peripheral RAM correctable error reporting table address register */
      vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;
      } B;
    } ADDR;
  } PERIPH_RAM_CERR[1];

  union {                              /* Peripheral RAM uncorrectable error reporting table status register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :31;
    } B;
  } PERIPH_RAM_UNCERR_STS;

  union {                              /* Peripheral RAM uncorrectable error reporting table address register */
    vuint32_t R;
    struct {
      vuint32_t ERR_ADD:32;
    } B;
  } PERIPH_RAM_UNCERR_ADDR;

  union {                              /* Peripheral RAM concurrent overflow register */
    vuint32_t R;
    struct {
      vuint32_t OFLW:32;
    } B;
  } PERIPH_RAM_OFLW;

};

/* ============================================================================
   =============================== Module: MLB ================================
   ============================================================================ */

struct MLB_tag {
  union {                              /* MediaLB Control 0 Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;                  /* Not to be written by user. */
      vuint32_t FCT:3;
      vuint32_t CTLRETRY:1;
      vuint32_t  :1;                   /* Not to be written by user. */
      vuint32_t ASYRETRY:1;
      vuint32_t  :4;                   /* Not to be written by user. */
      vuint32_t MLBLK:1;
      vuint32_t  :1;                   /* Not to be written by user. */
      vuint32_t MLBPEN:1;
      vuint32_t MCK:3;
      vuint32_t  :1;                   /* Not to be written by user. */
      vuint32_t MLBEN:1;
    } B;
  } C0;

  uint8_t MLB_reserved0[8];
  union {                              /* MediaLB Channel Status 0 Register */
    vuint32_t R;
    struct {
      vuint32_t MCS:32;
    } B;
  } MS0;

  uint8_t MLB_reserved1[4];
  union {                              /* MediaLB Channel Status1 Register */
    vuint32_t R;
    struct {
      vuint32_t MCS:32;
    } B;
  } MS1;

  uint8_t MLB_reserved2[8];
  union {                              /* MediaLB System Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;                  /* Not to be written by user. */
      vuint32_t SERVREQ:1;
      vuint32_t SWSYSCMD:1;
      vuint32_t CSSYSCMD:1;
      vuint32_t UKSYSCMD:1;
      vuint32_t LKSYSCMD:1;
      vuint32_t RSTSYCMD:1;
    } B;
  } MSS;

  union {                              /* MediaLB System Data Register */
    vuint32_t R;
    struct {
      vuint32_t SD3:8;
      vuint32_t SD2:8;
      vuint32_t SD1:8;
      vuint32_t SD0:8;
    } B;
  } MSD;

  uint8_t MLB_reserved3[4];
  union {                              /* MediaLB Interrupt Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;                   /* Not to be written by user. */
      vuint32_t CTX_BRK:1;
      vuint32_t CTX_PE:1;
      vuint32_t CTX_DONE:1;
      vuint32_t CRX_BRK:1;
      vuint32_t CRX_PE:1;
      vuint32_t CRX_DONE:1;
      vuint32_t  :1;                   /* Not to be written by user. */
      vuint32_t ATX_BRK:1;
      vuint32_t ATX_PE:1;
      vuint32_t ATX_DONE:1;
      vuint32_t ARX_BRK:1;
      vuint32_t ARX_PE:1;
      vuint32_t ARX_DONE:1;
      vuint32_t SYNC_PE:1;
      vuint32_t  :14;                  /* Not to be written by user. */
      vuint32_t ISOC_BFO:1;
      vuint32_t ISOC_PE:1;
    } B;
  } MIEN;

  uint8_t MLB_reserved4[12];
  union {                              /* MediaLB Control 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;                  /* Not to be written by user. */
      vuint32_t NDA:8;
      vuint32_t CLKM:1;
      vuint32_t LOCK:1;
      vuint32_t  :6;                   /* Not to be written by user. */
    } B;
  } C1;

  uint8_t MLB_reserved6[64];
  union {                              /* HBI Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;                  /* Not to be written by user. */
      vuint32_t EN:1;
      vuint32_t  :13;                  /* Not to be written by user. */
      vuint32_t RST1:1;
      vuint32_t RST0:1;
    } B;
  } HCTL;

  uint8_t MLB_reserved7[4];
  union {                              /* HBI Channel Mask 0 Register */
    vuint32_t R;
    struct {
      vuint32_t CM:32;
    } B;
  } HCMR0;

  union {                              /* HBI Channel Mask 1 Register */
    vuint32_t R;
    struct {
      vuint32_t C:32;
    } B;
  } HCMR1;

  union {                              /* HBI Channel Error 0 Register */
    vuint32_t R;
    struct {
      vuint32_t CE:32;
    } B;
  } HCER0;

  union {                              /* HBI Channel Error 1 Register */
    vuint32_t R;
    struct {
      vuint32_t E:32;
    } B;
  } HCER1;

  union {                              /* HBI Channel Busy 0 Register */
    vuint32_t R;
    struct {
      vuint32_t CB:32;
    } B;
  } HCBR0;

  union {                              /* HBI Channel Busy 1 Register */
    vuint32_t R;
    struct {
      vuint32_t B:32;
    } B;
  } HCBR1;

  uint8_t MLB_reserved8[32];
  union {                              /* MIF Data 0 Register */
    vuint32_t R;
    struct {
      vuint32_t D:32;
    } B;
  } MDAT0;

  union {                              /* MIF Data 1 Register */
    vuint32_t R;
    struct {
      vuint32_t D:32;
    } B;
  } MDAT1;

  union {                              /* MIF Data 2 Register */
    vuint32_t R;
    struct {
      vuint32_t D:32;
    } B;
  } MDAT2;

  union {                              /* MIF Data 3 Register */
    vuint32_t R;
    struct {
      vuint32_t D:32;
    } B;
  } MDAT3;

  union {                              /* MIF Data Write Enable 0 Register */
    vuint32_t R;
    struct {
      vuint32_t M:32;
    } B;
  } MDWE0;

  union {                              /* MIF Data Write Enable 1 Register */
    vuint32_t R;
    struct {
      vuint32_t M:32;
    } B;
  } MDWE1;

  union {                              /* MIF Data Write Enable 2 Register */
    vuint32_t R;
    struct {
      vuint32_t M:32;
    } B;
  } MDWE2;

  union {                              /* MIF Data Write Enable 3 Register */
    vuint32_t R;
    struct {
      vuint32_t M:32;
    } B;
  } MDWE3;

  union {                              /* MIF Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;                  /* Not to be written by user. */
      vuint32_t XCMP:1;
    } B;
  } MCTL;

  union {                              /* MIF Address Register */
    vuint32_t R;
    struct {
      vuint32_t WNR:1;
      vuint32_t TB:1;
      vuint32_t  :16;                  /* Not to be written by user. */
      vuint32_t ADDR:6;
      vuint32_t ADR:8;
    } B;
  } MADR;

  uint8_t MLB_reserved9[728];
  union {                              /* AHB Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;                  /* Not to be written by user. */
      vuint32_t MPB:1;
      vuint32_t  :1;                   /* Not to be written by user. */
      vuint32_t DMA_MODE:1;
      vuint32_t SMX:1;
      vuint32_t SCE:1;
    } B;
  } ACTL;

  uint8_t MLB_reserved10[12];
  union {                              /* AHB Channel Status 0 Register */
    vuint32_t R;
    struct {
      vuint32_t INTS_LOG:32;
    } B;
  } ACSR0;

  union {                              /* AHB Channel Status 1 Register */
    vuint32_t R;
    struct {
      vuint32_t L:32;
    } B;
  } ACSR1;

  union {                              /* AHB Channel Mask 0 Register */
    vuint32_t R;
    struct {
      vuint32_t CM:32;
    } B;
  } ACMR0;

  union {                              /* AHB Channel Mask 1 Register */
    vuint32_t R;
    struct {
      vuint32_t CHM:32;
    } B;
  } ACMR1;
};


/* ============================================================================
   =============================== Module: PASS ===============================
   ============================================================================ */

struct PASS_tag {
  union {                              /* Life Cycle Status Register */
    vuint32_t R;
    struct {
      vuint32_t CNS:1;
      vuint32_t JUN:1;
      vuint32_t FBE:1;
      vuint32_t  :26;
      vuint32_t LIFE:3;
    } B;
  } LCSTAT;

  uint8_t PASS_reserved0[4];
  union {                              /* Challenge Selector Register */
    vuint32_t R;
    struct {
      vuint32_t  :30;
      vuint32_t GRP:2;
    } B;
  } CHSEL;

  uint8_t PASS_reserved1[4];
  union {                              /* Challenge Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t CMST:4;
    } B;
  } CSTAT;

  uint8_t PASS_reserved2[12];
  union {                              /* Challenge Input Register */
    vuint32_t R;
    struct {
      vuint32_t PW32:32;
    } B;
  } CIN[8];

  uint8_t PASS_reserved3[192];
  struct {
    union {                            /* Password Group n - Lock 0 Status Register */
      vuint32_t R;
      struct {
        vuint32_t TSLOCK:1;
        vuint32_t ATSL:1;
        vuint32_t LOWLOCK:14;
        vuint32_t MIDLOCK:16;
      } B;
    } LOCK0;
    union {                            /* Password Group n - Lock 1 Status Register */
      vuint32_t R;
      struct {
        vuint32_t  :16;
        vuint32_t HIGHLOCK:16;
      } B;
    } LOCK1;
    union {                            /* Password Group n - Lock 2 Status Register */
      vuint32_t R;
      struct {
        vuint32_t L_256LCK:32;
      } B;
    } LOCK2;
    union {                            /* Password Group n - Lock 3 Status Register */
      vuint32_t R;
      struct {
        vuint32_t PGL:1;
        vuint32_t DBL:1;
        vuint32_t MO:1;
        vuint32_t  :1;
        vuint32_t MSTR:4;
        vuint32_t  :3;
        vuint32_t RL4:1;
        vuint32_t RL3:1;
        vuint32_t RL2:1;
        vuint32_t RL1:1;
        vuint32_t RL0:1;
        vuint32_t U_256LCK:16;
      } B;
    } LOCK3;
  } PG[4];
};


/* ============================================================================
   =============================== Module: PCM ================================
   ============================================================================ */

struct PCM_tag {
  union {                              /* Bus Bridge Configuration Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :5;
      vuint32_t PRE_FLX:1;             /* Pending read enable (PRE) FLX */
      vuint32_t BRE_FLX:1;             /* Burst read enable (BRE) FLX */
      vuint32_t BWE_FLX:1;             /* Burst Read Enable */
      vuint32_t  :5;
      vuint32_t PRE_ENET:1;            /* Pending Read Enable ENET */
      vuint32_t BRE_ENET:1;            /* Burst read enable (BRE) ENET */
      vuint32_t BWE_ENET:1;            /* Burst Write Enable ENET */
      vuint32_t  :5;
      vuint32_t PRE_DMA:1;             /* Pending read enable (PRE) DMA */
      vuint32_t BRE_DMA:1;             /* Burst read enable (BRE) DMA */
      vuint32_t BWE_DMA:1;             /* Burst write enable (BWE) DMA */
      vuint32_t  :5;
      vuint32_t  :3;
    } B;
  } IAHB_BE0;

  union {                              /* Bus Bridge Configuration Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :5;
      vuint32_t PRE_uSDHC:1;           /* Pending read enable (PRE) uSDHC */
      vuint32_t BRE_uSDHC:1;           /* Burst read enable (BRE) uSDHC */
      vuint32_t BWE_uSDHC:1;           /* Burst Read Enable uSDHC */
      vuint32_t  :5;
      vuint32_t PRE_USB_1:1;           /* Pending Read Enable USB_1 */
      vuint32_t BRE_USB_1:1;           /* Burst read enable (BRE) USB_1 */
      vuint32_t BWE_USB_1:1;           /* Burst Write Enable USB_1 */
      vuint32_t  :5;
      vuint32_t PRE_USB_0:1;           /* Pending read enable (PRE) DMA */
      vuint32_t BRE_USB_0:1;           /* Burst read enable (BRE) USB_0 */
      vuint32_t BWE_USB_0:1;           /* Burst write enable (BWE) USB_0 */
      vuint32_t  :5;
      vuint32_t PRE_MLB:1;             /* Pending read enable (PRE) MLB */
      vuint32_t BRE_MLB:1;             /* Burst read enable (BRE) MLB */
      vuint32_t BWE_MLB:1;             /* Burst write enable (BWE) MLB */
    } B;
  } IAHB_BE1;

  union {                              /* Bus Bridge Configuration Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :5;
      vuint32_t PRE_PBRIDGE_A:1;       /* Pending read enable (PRE) PBRIDGE_A */
      vuint32_t BRE_PBRIDGE_A:1;       /* Burst read enable (BRE) PBRIDGE_A */
      vuint32_t BWE_PBRIDGE_A:1;       /* Burst Read Enable PBRIDGE_A */
      vuint32_t  :5;
      vuint32_t PRE_PBRIDGE_B:1;       /* Pending Read Enable PBRIDGE_B */
      vuint32_t BRE_PBRIDGE_B:1;       /* Burst read enable (BRE) PBRIDGE_B */
      vuint32_t BWE_PBRIDGE_B:1;       /* Burst Write Enable PBRIDGE_B */
      vuint32_t  :5;
      vuint32_t PRE_Z2_DATA:1;         /* Pending read enable (PRE) Z2_DATA */
      vuint32_t BRE_Z2_DATA:1;         /* Burst read enable (BRE) Z2_DATA */
      vuint32_t BWE_Z2_DATA:1;         /* Burst write enable (BWE) Z2_DATA */
      vuint32_t  :5;
      vuint32_t PRE_Z2_INST:1;         /* Pending read enable (PRE) Z2_INST */
      vuint32_t BRE_Z2_INST:1;         /* Burst read enable (BRE) Z2_INST */
      vuint32_t BWE_Z2_INST:1;         /* Burst write enable (BWE) Z2_INST */
    } B;
  } IAHB_BE2;

  union {                              /* Bus Bridge Configuration Register 3 */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t PRE_M1:1;              /* Pending read enable (PRE) M1 */
      vuint32_t BRE_M1:1;              /* Burst read enable (BRE) M1 */
      vuint32_t BWE_M1:1;              /* Burst Write Enable M1 */
      vuint32_t  :5;
      vuint32_t PRE_M0:1;              /* Pending Read Enable */
      vuint32_t BRE_M0:1;              /* Burst Read Enable */
      vuint32_t BWE_M0:1;              /* Burst Write Enable */
    } B;
  } IAHB_BE3;

  union {                              /* IPS Clock Gating Module Enable 0 Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t IPS_CGM_SMPU_1:1;      /* IPS clock gating endable for SMPU_1 */
      vuint32_t  :3;
      vuint32_t IPS_CGM_SMPU_0:1;
      vuint32_t  :3;
      vuint32_t IPS_CGM_AXBS_1:1;
      vuint32_t  :3;
      vuint32_t IPS_CGM_AXBS_0:1;      /* IPS clock gating endable for AXBS_0 */
      vuint32_t  :3;
      vuint32_t IPS_CGM_PRAM2:1;       /* IPS clock gating endable for PRAM2 */
      vuint32_t  :3;
      vuint32_t IPS_CGM_PRAM1:1;       /* IPS clock gating endable for PRAM1 */
      vuint32_t  :3;
      vuint32_t IPS_CGM_PRAM0:1;       /* IPS clock gating endable for PRAM0 */
      vuint32_t  :3;
      vuint32_t IPS_CGM_FLASH:1;       /* IPS clock gating endable for PFlash Controller */
    } B;
  } IPS_CGM_EN0;

  union {                              /* IPS Clock Gating Enable 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;
      vuint32_t IPS_CGM_INTC:1;        /* IPS clock gating endable for INTC */
    } B;
  } IPS_CGM_EN1;
};


/* ============================================================================
   =============================== Module: PFLASH =============================
   ============================================================================ */

struct PFLASH_tag {
  union {                              /* Platform Flash Configuration Register 1 */
    vuint32_t R;
    struct {
      vuint32_t P0_M15PFE:1;
      vuint32_t P0_M14PFE:1;
      vuint32_t P0_M13PFE:1;
      vuint32_t P0_M12PFE:1;
      vuint32_t P0_M11PFE:1;
      vuint32_t P0_M10PFE:1;
      vuint32_t P0_M9PFE:1;
      vuint32_t P0_M8PFE:1;
      vuint32_t P0_M7PFE:1;
      vuint32_t P0_M6PFE:1;
      vuint32_t P0_M5PFE:1;
      vuint32_t P0_M4PFE:1;
      vuint32_t P0_M3PFE:1;
      vuint32_t P0_M2PFE:1;
      vuint32_t P0_M1PFE:1;
      vuint32_t P0_M0PFE:1;
      vuint32_t APC:3;
      vuint32_t RWSC:5;
      vuint32_t  :1;
      vuint32_t P0_DPFEN:1;
      vuint32_t  :1;
      vuint32_t P0_IPFEN:1;
      vuint32_t  :1;
      vuint32_t P0_PFLIM:2;
      vuint32_t P0_BFEN:1;
    } B;
  } PFCR1;

  union {                              /* Platform Flash Configuration Register 2 */
    vuint32_t R;
    struct {
      vuint32_t P1_M15PFE:1;
      vuint32_t P1_M14PFE:1;
      vuint32_t P1_M13PFE:1;
      vuint32_t P1_M12PFE:1;
      vuint32_t P1_M11PFE:1;
      vuint32_t P1_M10PFE:1;
      vuint32_t P1_M9PFE:1;
      vuint32_t P1_M8PFE:1;
      vuint32_t P1_M7PFE:1;
      vuint32_t P1_M6PFE:1;
      vuint32_t P1_M5PFE:1;
      vuint32_t P1_M4PFE:1;
      vuint32_t P1_M3PFE:1;
      vuint32_t P1_M2PFE:1;
      vuint32_t P1_M1PFE:1;
      vuint32_t P1_M0PFE:1;
      vuint32_t  :9;
      vuint32_t P1_DPFEN:1;
      vuint32_t  :1;
      vuint32_t P1_IPFEN:1;
      vuint32_t  :1;
      vuint32_t P1_PFLIM:2;
      vuint32_t P1_BFEN:1;
    } B;
  } PFCR2;

  union {                              /* Platform Flash Configuration Register 3 */
    vuint32_t R;
    struct {
      vuint32_t P0_WCFG:2;
      vuint32_t P1_WCFG:2;
      vuint32_t P2_WCFG:2;
      vuint32_t  :5;
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t BAF_DIS:1;
      vuint32_t ARBM:4;                /* Arbitration Mode. This 4-bit field controls the arbitration of concurrent flash access requests from the three AHB ports of the flash memory controller. In both fixed priority or round-robin modes, write requests are prioritized higher than read requests, and read requests are prioritized higher than speculative prefetch requests whenever multiple ports issue concurrent requests. This field is initialized by hardware reset. Specifying a reserved value in this field causes it to default to round-robin arbitration. */
      vuint32_t  :11;
      vuint32_t  :1;
    } B;
  } PFCR3;

  union {                              /* Platform Flash Access Protection Register */
    vuint32_t R;
    struct {
      vuint32_t M0AP:2;
      vuint32_t M1AP:2;
      vuint32_t M2AP:2;
      vuint32_t M3AP:2;
      vuint32_t M4AP:2;
      vuint32_t M5AP:2;
      vuint32_t M6AP:2;
      vuint32_t M7AP:2;
      vuint32_t M8AP:2;
      vuint32_t M9AP:2;
      vuint32_t M10AP:2;
      vuint32_t M11AP:2;
      vuint32_t M12AP:2;
      vuint32_t M13AP:2;
      vuint32_t M14AP:2;
      vuint32_t M15AP:2;
    } B;
  } PFAPR;

  union {                              /* Platform Flash Remap Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t SAFE_CAL:1;
      vuint32_t  :3;
      vuint32_t IRMEN:1;
      vuint32_t  :3;
      vuint32_t GRMEN:1;
    } B;
  } PFCRCR;

  union {                              /* Platform Flash Remap Descriptor Enable Register */
    vuint32_t R;
    struct {
      vuint32_t CRD0EN:1;
      vuint32_t CRD1EN:1;
      vuint32_t CRD2EN:1;
      vuint32_t CRD3EN:1;
      vuint32_t CRD4EN:1;
      vuint32_t CRD5EN:1;
      vuint32_t CRD6EN:1;
      vuint32_t CRD7EN:1;
      vuint32_t CRD8EN:1;
      vuint32_t CRD9EN:1;
      vuint32_t CRD10EN:1;
      vuint32_t CRD11EN:1;
      vuint32_t CRD12EN:1;
      vuint32_t CRD13EN:1;
      vuint32_t CRD14EN:1;
      vuint32_t CRD15EN:1;
      vuint32_t CRD16EN:1;
      vuint32_t CRD17EN:1;
      vuint32_t CRD18EN:1;
      vuint32_t CRD19EN:1;
      vuint32_t CRD20EN:1;
      vuint32_t CRD21EN:1;
      vuint32_t CRD22EN:1;
      vuint32_t CRD23EN:1;
      vuint32_t CRD24EN:1;
      vuint32_t CRD25EN:1;
      vuint32_t CRD26EN:1;
      vuint32_t CRD27EN:1;
      vuint32_t CRD28EN:1;
      vuint32_t CRD29EN:1;
      vuint32_t CRD30EN:1;
      vuint32_t CRD31EN:1;
    } B;
  } PFCRDE;

  union {                              /* Platform Flash Configuration Register 4 */
    vuint32_t R;
    struct {
      vuint32_t P2_M15PFE:1;
      vuint32_t P2_M14PFE:1;
      vuint32_t P2_M13PFE:1;
      vuint32_t P2_M12PFE:1;
      vuint32_t P2_M11PFE:1;
      vuint32_t P2_M10PFE:1;
      vuint32_t P2_M9PFE:1;
      vuint32_t P2_M8PFE:1;
      vuint32_t P2_M7PFE:1;
      vuint32_t P2_M6PFE:1;
      vuint32_t P2_M5PFE:1;
      vuint32_t P2_M4PFE:1;
      vuint32_t P2_M3PFE:1;
      vuint32_t P2_M2PFE:1;
      vuint32_t P2_M1PFE:1;
      vuint32_t P2_M0PFE:1;
      vuint32_t  :9;
      vuint32_t P2_DPFEN:1;
      vuint32_t  :1;
      vuint32_t P2_IPFEN:1;
      vuint32_t  :1;
      vuint32_t P2_PFLIM:2;
      vuint32_t P2_BFEN:1;
    } B;
  } PFCR4;

  uint8_t PFLASH_reserved0[228];
  struct {
    union {                            /* Platform Flash Calibration Region Descriptor n Word0 */
      vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:32;
      } B;
    } Word0;
    union {                            /* Platform Flash Calibration Region Descriptor n Word1 */
      vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:32;
      } B;
    } Word1;
    union {                            /* Platform Flash Calibration Region Descriptor n Word2 */
      vuint32_t R;
      struct {
        vuint32_t M0EN:1;
        vuint32_t M1EN:1;
        vuint32_t M2EN:1;
        vuint32_t M3EN:1;
        vuint32_t M4EN:1;
        vuint32_t M5EN:1;
        vuint32_t M6EN:1;
        vuint32_t M7EN:1;
        vuint32_t M8EN:1;
        vuint32_t M9EN:1;
        vuint32_t M10EN:1;
        vuint32_t M11EN:1;
        vuint32_t M12EN:1;
        vuint32_t M13EN:1;
        vuint32_t M14EN:1;
        vuint32_t M15EN:1;
        vuint32_t  :11;
        vuint32_t CRDSize:5;
      } B;
    } Word2;
    uint8_t PFCRD_reserved0[4];
  } PFCRD[8];
};


/* ============================================================================
   =============================== Module: PIT ================================
   ============================================================================ */

struct PIT_tag {
  union {                              /* PIT Module Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t MDIS_RTI:1;            /* Module Disable - RTI section */
      vuint32_t MDIS:1;                /* Module Disable - (PIT section) */
      vuint32_t FRZ:1;                 /* Freeze */
    } B;
  } MCR;

  uint8_t PIT_reserved0[236];
  union {                              /* Timer Load Value Register */
    vuint32_t R;
    struct {
      vuint32_t TSV:32;                /* Timer Start Value */
    } B;
  } RTI_LDVAL;

  union {                              /* Current Timer Value Register */
    vuint32_t R;
    struct {
      vuint32_t TVL:32;                /* Current Timer Value */
    } B;
  } RTI_CVAL;

  union {                              /* Timer Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :30;
      vuint32_t TIE:1;                 /* Timer Interrupt Enable */
      vuint32_t TEN:1;                 /* Timer Enable Bit */
    } B;
  } RTI_TCTRL;

  union {                              /* Timer Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;
      vuint32_t TIF:1;                 /* Timer Interrupt Flag. */
    } B;
  } RTI_TFLG;

  struct {
    union {                            /* Timer Load Value Register */
      vuint32_t R;
      struct {
        vuint32_t TSV:32;              /* Timer Start Value */
      } B;
    } LDVAL;
    union {                            /* Current Timer Value Register */
      vuint32_t R;
      struct {
        vuint32_t TVL:32;              /* Current Timer Value */
      } B;
    } CVAL;
    union {                            /* Timer Control Register */
      vuint32_t R;
      struct {
        vuint32_t  :29;
        vuint32_t CHN:1;               /* Chain Mode */
        vuint32_t TIE:1;               /* Timer Interrupt Enable */
        vuint32_t TEN:1;               /* Timer Enable */
      } B;
    } TCTRL;
    union {                            /* Timer Flag Register */
      vuint32_t R;
      struct {
        vuint32_t  :31;
        vuint32_t TIF:1;               /* Timer Interrupt Flag */
      } B;
    } TFLG;
  } TIMER[16];
};


/* ============================================================================
   =============================== Module: PLLDIG =============================
   ============================================================================ */

struct PLLDIG_tag {

  uint8_t PLLDIG_reserved0[24];
  union {                              /* PLL Calibration Register 3 */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t MFDEN:16;              /* Denominator fo fractional loop division factor. */
      vuint32_t  :14;
    } B;
  } PLLCAL3;
  uint8_t PLLDIG_reserved1[4];

  union {                              /* PLLDIG PLL Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t EXPDIE:1;              /* External Power Down Cycle Complete indication interrupt enable. */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t LOLIE:1;               /* Loss-of-lock interrupt enable. */
      vuint32_t LOLRE:1;               /* Loss-of-lock reset enable. */
      vuint32_t  :1;
      vuint32_t  :1;
    } B;
  } PLLCR;

  union {                              /* PLLDIG PLL Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t ENPHI1:1;              /* PLL PHI1 Output Enable */
      vuint32_t ENPHI:1;               /* PLL PHI Output Enable */
      vuint32_t EXTPDF:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t LOLF:1;                /* Loss-of-lock flag. */
      vuint32_t LOCK:1;
      vuint32_t  :1;
      vuint32_t  :1;
    } B;
  } PLLSR;

  union {                              /* PLLDIG PLL Divider Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t RFDPHI1:6;             /* PHI1 reduced frequency divider. */
      vuint32_t  :3;
      vuint32_t RFDPHI:6;              /* PHI reduced frequency divider. */
      vuint32_t  :1;
      vuint32_t PREDIV:3;              /* Input clock predivider. */
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t MFD:8;                 /* Loop multiplication factor divider. */
    } B;
  } PLLDV;

  union {                              /* PLLDIG PLL Frequency Modulation Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t SSCGBYP:1;             /* Modulation enable. */
      vuint32_t MODSEL:1;              /* Modulation selection. */
      vuint32_t  :3;
      vuint32_t MODPRD:10;             /* Modulation period. */
      vuint32_t  :5;
      vuint32_t INCSTP:11;             /* Increment step. */
    } B;
  } PLLFM;

  union {                              /* PLLDIG PLL Fractional Divide Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t SMDEN:1;               /* Sigma Delta Modulation Enable */
      vuint32_t SDM2:1;                /* Second Order Sigma Delta Modulation Select */
      vuint32_t SDM3:1;                /* Third Order Sigma Delta Modulation Select */
      vuint32_t  :6;
      vuint32_t DTHRCTL:4;             /* Dither Control. */
      vuint32_t DTHDIS:2;              /* Dither Disable. */
      vuint32_t  :1;
      vuint32_t MFN:15;
    } B;
  } PLLFD;
};


/* ============================================================================
   =============================== Module: PMCDIG =============================
   ============================================================================ */

struct PMCDIG_tag {
  union {                              /* RAM Domain Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t MEM_SLEEP_EN:1;        /* Memory Sleep Enable */
      vuint32_t  :3;
      vuint32_t PAD_KEEP_EN:1;         /* PAD Keeper Enable */
      vuint32_t  :7;
      vuint32_t RD256_RET:1;           /* RAM Domain 256K Retention */
      vuint32_t  :3;
      vuint32_t RD128_RET:1;           /* RAM Domain 128K Retention */
      vuint32_t  :3;
      vuint32_t RD64_RET:1;            /* RAM Domain 64K Retention */
    } B;
  } RDCR;

  union {                              /* Supply Gauge Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :19;
      vuint32_t LP_STATUS:2;           /* Low Power Status */
      vuint32_t  :1;
      vuint32_t HVD_LV_cold:1;         /* HVD LV PD2 Flag */
      vuint32_t  :1;
      vuint32_t LVD_FLASH:1;           /* LVD VDD_HV_ FLA Flag */
      vuint32_t LVD_IO_A_HI:1;         /* LVD IO Segment A High Flag */
      vuint32_t LVD_IO_A_LO:1;         /* LVD IO Segment A Low Flag */
      vuint32_t LVD_LV_PD0_hot:1;      /* LVD VDD_LV PD0 hot point Flag */
      vuint32_t LVD_LV_PD1_hot:1;      /* LVD VDD_LV PD1 hot point Flag */
      vuint32_t LVD_LV_PD2_cold:1;     /* LVD_LV_PD2 Cold Point Flag */
      vuint32_t LVD_LV_PD2_hot:1;      /* LVD LV_PD2 hot Point Flag */
      vuint32_t POR_LV:1;              /* Power On Reset Flag */
    } B;
  } SGSR;

  uint8_t PMCDIG_reserved0[8];
  union {                              /* MISC Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t  :3;
      vuint32_t  :1;
      vuint32_t  :7;
      vuint32_t LP_ST_CHG_IN_PRGRS:1;  /* Low Power State Change in Progress */
      vuint32_t FLASH_LP_FAST_EXIT_DIS:1; /* Flash Low Power Fast Exit Disable */
      vuint32_t  :3;
      vuint32_t LVD_PD2_COLD_REE:1;    /* LVD_PD2 Cold Point Flag Reset Event Enable */
      vuint32_t HVD_REE:1;             /* HVD Reset Event Enable */
      vuint32_t  :1;
      vuint32_t LVD_IO_HI_REE:1;       /* LVD_IO_HI Reset Event Enable */
      vuint32_t  :5;
      vuint32_t  :3;
    } B;
  } MCR;
};


/* ============================================================================
   =============================== Module: PRAMC ==============================
   ============================================================================ */

struct PRAMC_tag {
  union {                              /* Platform RAM Configuration Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t  :2;
      vuint32_t  :5;
      vuint32_t FT_DIS:1;              /* Flow through disabled. */
    } B;
  } PRCR1;
};


/* ============================================================================
   =============================== Module: RTC ================================
   ============================================================================ */

struct RTC_tag {
  union {                              /* RTC Supervisor Control register */
    vuint32_t R;
    struct {
      vuint32_t SUPV:1;                /* RTC Supervisor Bit. */
      vuint32_t  :31;                  /* Reserved. */
    } B;
  } RTCSUPV;

  union {                              /* RTC Control register */
    vuint32_t R;
    struct {
      vuint32_t CNTEN:1;               /* Counter Enable. */
      vuint32_t RTCIE:1;               /* RTC Interrupt Enable. */
      vuint32_t FRZEN:1;               /* Freeze Enable Bit. */
      vuint32_t ROVREN:1;              /* Counter Roll Over Wakeup/Interrupt Enable. */
      vuint32_t  :12;                  /* Reserved. */
      vuint32_t APIEN:1;               /* Autonomous Periodic Interrupt Enable. */
      vuint32_t APIIE:1;               /* API Interrupt Enable. */
      vuint32_t CLKSEL:2;              /* Clock Select. */
      vuint32_t DIV512EN:1;            /* Divide by 512 enable. */
      vuint32_t DIV32EN:1;             /* Divide by 32 enable. */
      vuint32_t  :9;                   /* Reserved. */
      vuint32_t TRIG_EN:1;             /* Trigger enable for Analog Comparator */
    } B;
  } RTCC;

  union {                              /* RTC Status register */
    vuint32_t R;
    struct {
      vuint32_t  :2;                   /* Reserved. */
      vuint32_t RTCF:1;                /* RTC Interrupt Flag. */
      vuint32_t  :10;                  /* Reserved. */
      vuint32_t INV_RTC:1;             /* Invalid rtc write */
      vuint32_t INV_API:1;             /* Invalid APIVAL write */
      vuint32_t INV_ANL:1;             /* Invalid ANLCMP write */
      vuint32_t  :2;
      vuint32_t APIF:1;                /* API Interrupt Flag. */
      vuint32_t  :2;                   /* Reserved. */
      vuint32_t ROVRF:1;               /* Counter Roll Over Interrupt Flag. */
      vuint32_t  :10;                  /* Reserved. */
    } B;
  } RTCS;

  union {                              /* RTC Counter register */
    vuint32_t R;
    struct {
      vuint32_t RTCCNT:32;             /* RTC Counter Value. */
    } B;
  } RTCCNT;

  union {                              /* API Compare Value register */
    vuint32_t R;
    struct {
      vuint32_t APIVAL:32;             /* API Compare Value. */
    } B;
  } APIVAL;

  union {                              /* RTC Compare Value register */
    vuint32_t R;
    struct {
      vuint32_t RTCVAL:32;             /* RTC Compare Value. */
    } B;
  } RTCVAL;

  union {                              /* RTC Analogue comparator count register */
    vuint32_t R;
    struct {
      vuint32_t ANLCMP:32;             /* The trigger_en_out pulse will be generated (after the generation of wakeup_api signal) as per the number of API clocks programmed into this register. */
    } B;
  } ANLCMP_CNT;
};


/* ============================================================================
   =============================== Module: SEMA42 =============================
   ============================================================================ */

struct SEMA42_tag {
  union {                              /* Gate Register */
    vuint8_t R;
    struct {
      vuint8_t  :4;
      vuint8_t GTFSM:4;                /* Gate Finite State Machine. */
    } B;
  } GATE[16];

  uint8_t SEMA42_reserved0[48];
  union {
     union {                          /* Reset Gate Read */
        vuint16_t R;
        struct {
          vuint16_t  :2;
          vuint16_t RSTGSM:2;
          vuint16_t RSTGMS:4;
          vuint16_t RSTGTN:8;
        } B;
      } R;
    union {                            /* Reset Gate Write */
      vuint16_t R;
      struct {
        vuint16_t RSTGDP:8;
        vuint16_t RSTGTN:8;
      } B;
    } W;
  } RSTGT;
};


/* ============================================================================
   =============================== Module: SIRC ===============================
   ============================================================================ */

struct SIRC_tag {
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t SIRCTRIM:8;            /* SIRC TRIM */
      vuint32_t  :3;
      vuint32_t SIRCDIV:5;             /* The SIRC Divider bits select the clock divider . factor */
      vuint32_t  :3;
      vuint32_t SIRCS:1;               /* Describes the SIRC clock status. */
      vuint32_t  :3;
      vuint32_t  :1;
    } B;
  } CTL;
};


/* ============================================================================
   =============================== Module: SIUL2 ==============================
   ============================================================================ */

struct SIUL2_tag {
  uint8_t SIUL2_reserved0[4];
  union {                              /* SIUL2 MCU ID Register #1 */
    vuint32_t R;
    struct {
      vuint32_t PARTNUM:16;            /* MCU Part Number */
      vuint32_t  :1;
      vuint32_t PKG:5;                 /* Package Settings */
      vuint32_t  :2;
      vuint32_t MAJOR_MASK:4;          /* Major Mask Revision */
      vuint32_t MINOR_MASK:4;          /* Minor Mask Revision */
    } B;
  } MIDR1;

  union {                              /* SIUL2 MCU ID Register #2 */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t FLASH_SIZE_1:4;        /* Coarse granularity for flash memory size */
      vuint32_t FLASH_SIZE_2:4;        /* Fine granularity for flash memory size */
      vuint32_t  :7;
      vuint32_t PARTNUM:8;             /* ASCII character in MCU Part Number */
      vuint32_t  :8;
    } B;
  } MIDR2;

  uint8_t SIUL2_reserved1[4];
  union {                              /* SIUL2 Interrupt Status Flag Register0 */
    vuint32_t R;
    struct {
      vuint32_t EIF31:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF30:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF29:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF28:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF27:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF26:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF25:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF24:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF23:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF22:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF21:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF20:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF19:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF18:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF17:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF16:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF15:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF14:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF13:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF12:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF11:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF10:1;               /* External Interrupt Status Flag x */
      vuint32_t EIF9:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF8:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF7:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF6:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF5:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF4:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF3:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF2:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF1:1;                /* External Interrupt Status Flag x */
      vuint32_t EIF0:1;                /* External Interrupt Status Flag x */
    } B;
  } ISR0;

  uint8_t SIUL2_reserved2[4];
  union {                              /* SIUL2 Interrupt Request Enable Register0 */
    vuint32_t R;
    struct {
      vuint32_t EIRE31:1;
      vuint32_t EIRE30:1;
      vuint32_t EIRE29:1;
      vuint32_t EIRE28:1;
      vuint32_t EIRE27:1;
      vuint32_t EIRE26:1;
      vuint32_t EIRE25:1;
      vuint32_t EIRE24:1;
      vuint32_t EIRE23:1;
      vuint32_t EIRE22:1;
      vuint32_t EIRE21:1;
      vuint32_t EIRE20:1;
      vuint32_t EIRE19:1;
      vuint32_t EIRE18:1;
      vuint32_t EIRE17:1;
      vuint32_t EIRE16:1;
      vuint32_t EIRE15:1;
      vuint32_t EIRE14:1;
      vuint32_t EIRE13:1;
      vuint32_t EIRE12:1;
      vuint32_t EIRE11:1;
      vuint32_t EIRE10:1;
      vuint32_t EIRE9:1;
      vuint32_t EIRE8:1;
      vuint32_t EIRE7:1;
      vuint32_t EIRE6:1;
      vuint32_t EIRE5:1;
      vuint32_t EIRE4:1;
      vuint32_t EIRE3:1;
      vuint32_t EIRE2:1;
      vuint32_t EIRE1:1;
      vuint32_t EIRE0:1;
    } B;
  } IRER0;

  uint8_t SIUL2_reserved3[4];
  union {                              /* SIUL2 Interrupt Request Select Register0 */
    vuint32_t R;
    struct {
      vuint32_t DIRSR31:1;
      vuint32_t DIRSR30:1;
      vuint32_t DIRSR29:1;
      vuint32_t DIRSR28:1;
      vuint32_t DIRSR27:1;
      vuint32_t DIRSR26:1;
      vuint32_t DIRSR25:1;
      vuint32_t DIRSR24:1;
      vuint32_t DIRSR23:1;
      vuint32_t DIRSR22:1;
      vuint32_t DIRSR21:1;
      vuint32_t DIRSR20:1;
      vuint32_t DIRSR19:1;
      vuint32_t DIRSR18:1;
      vuint32_t DIRSR17:1;
      vuint32_t DIRSR16:1;
      vuint32_t DIRSR15:1;
      vuint32_t DIRSR14:1;
      vuint32_t DIRSR13:1;
      vuint32_t DIRSR12:1;
      vuint32_t DIRSR11:1;
      vuint32_t DIRSR10:1;
      vuint32_t DIRSR9:1;
      vuint32_t DIRSR8:1;
      vuint32_t DIRSR7:1;
      vuint32_t DIRSR6:1;
      vuint32_t DIRSR5:1;
      vuint32_t DIRSR4:1;
      vuint32_t DIRSR3:1;
      vuint32_t DIRSR2:1;
      vuint32_t DIRSR1:1;
      vuint32_t DIRSR0:1;
    } B;
  } IRSR0;

  uint8_t SIUL2_reserved4[4];
  union {                              /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
    vuint32_t R;
    struct {
      vuint32_t IREE31:1;
      vuint32_t IREE30:1;
      vuint32_t IREE29:1;
      vuint32_t IREE28:1;
      vuint32_t IREE27:1;
      vuint32_t IREE26:1;
      vuint32_t IREE25:1;
      vuint32_t IREE24:1;
      vuint32_t IREE23:1;
      vuint32_t IREE22:1;
      vuint32_t IREE21:1;
      vuint32_t IREE20:1;
      vuint32_t IREE19:1;
      vuint32_t IREE18:1;
      vuint32_t IREE17:1;
      vuint32_t IREE16:1;
      vuint32_t IREE15:1;
      vuint32_t IREE14:1;
      vuint32_t IREE13:1;
      vuint32_t IREE12:1;
      vuint32_t IREE11:1;
      vuint32_t IREE10:1;
      vuint32_t IREE9:1;
      vuint32_t IREE8:1;
      vuint32_t IREE7:1;
      vuint32_t IREE6:1;
      vuint32_t IREE5:1;
      vuint32_t IREE4:1;
      vuint32_t IREE3:1;
      vuint32_t IREE2:1;
      vuint32_t IREE1:1;
      vuint32_t IREE0:1;
    } B;
  } IREER0;

  uint8_t SIUL2_reserved5[4];
  union {                              /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
    vuint32_t R;
    struct {
      vuint32_t IFEE31:1;
      vuint32_t IFEE30:1;
      vuint32_t IFEE29:1;
      vuint32_t IFEE28:1;
      vuint32_t IFEE27:1;
      vuint32_t IFEE26:1;
      vuint32_t IFEE25:1;
      vuint32_t IFEE24:1;
      vuint32_t IFEE23:1;
      vuint32_t IFEE22:1;
      vuint32_t IFEE21:1;
      vuint32_t IFEE20:1;
      vuint32_t IFEE19:1;
      vuint32_t IFEE18:1;
      vuint32_t IFEE17:1;
      vuint32_t IFEE16:1;
      vuint32_t IFEE15:1;
      vuint32_t IFEE14:1;
      vuint32_t IFEE13:1;
      vuint32_t IFEE12:1;
      vuint32_t IFEE11:1;
      vuint32_t IFEE10:1;
      vuint32_t IFEE9:1;
      vuint32_t IFEE8:1;
      vuint32_t IFEE7:1;
      vuint32_t IFEE6:1;
      vuint32_t IFEE5:1;
      vuint32_t IFEE4:1;
      vuint32_t IFEE3:1;
      vuint32_t IFEE2:1;
      vuint32_t IFEE1:1;
      vuint32_t IFEE0:1;
    } B;
  } IFEER0;

  uint8_t SIUL2_reserved6[4];
  union {                              /* SIUL2 Interrupt Filter Enable Register 0 */
    vuint32_t R;
    struct {
      vuint32_t IFE31:1;
      vuint32_t IFE30:1;
      vuint32_t IFE29:1;
      vuint32_t IFE28:1;
      vuint32_t IFE27:1;
      vuint32_t IFE26:1;
      vuint32_t IFE25:1;
      vuint32_t IFE24:1;
      vuint32_t IFE23:1;
      vuint32_t IFE22:1;
      vuint32_t IFE21:1;
      vuint32_t IFE20:1;
      vuint32_t IFE19:1;
      vuint32_t IFE18:1;
      vuint32_t IFE17:1;
      vuint32_t IFE16:1;
      vuint32_t IFE15:1;
      vuint32_t IFE14:1;
      vuint32_t IFE13:1;
      vuint32_t IFE12:1;
      vuint32_t IFE11:1;
      vuint32_t IFE10:1;
      vuint32_t IFE9:1;
      vuint32_t IFE8:1;
      vuint32_t IFE7:1;
      vuint32_t IFE6:1;
      vuint32_t IFE5:1;
      vuint32_t IFE4:1;
      vuint32_t IFE3:1;
      vuint32_t IFE2:1;
      vuint32_t IFE1:1;
      vuint32_t IFE0:1;
    } B;
  } IFER0;

  uint8_t SIUL2_reserved7[4];
  union {                              /* SIUL2 Interrupt Filter Maximum Counter Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t MAXCNT:4;              /* Maximum Interrupt Filter Counter setting */
    } B;
  } IFMCR[32];

  union {                              /* SIUL2 Interrupt Filter Clock Prescaler Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t IFCP:4;                /* Interrupt Filter Clock Prescaler setting */
    } B;
  } IFCPR;

  uint8_t SIUL2_reserved8[380];
  union {                              /* SIUL2 Multiplexed Signal Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t SRC:2;                 /* Slew Rate Control */
      vuint32_t  :2;
      vuint32_t OBE:1;                 /* GPIO Output Buffer Enable */
      vuint32_t ODE:1;                 /* Open Drain Enable */
      vuint32_t SMC:1;                 /* Safe Mode Control */
      vuint32_t APC:1;                 /* Analog Pad Control */
      vuint32_t  :1;
      vuint32_t TTL:1;                 /* TTL/Automotive mode selection */
      vuint32_t IBE:1;                 /* Input Buffer Enable */
      vuint32_t HYS:1;                 /* Input Hysteresis */
      vuint32_t PUS:1;                 /* Pull Select */
      vuint32_t PUE:1;                 /* Pull Enable */
      vuint32_t  :8;
      vuint32_t  :4;
      vuint32_t SSS:4;                 /* Source Signal Select */
    } B;
  } MSCR[264];

  uint8_t SIUL2_reserved9[992];
  union {                              /* SIUL2 Input Multiplexed Signal Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t  :4;
      vuint32_t SSS:4;                 /* Source Signal Select */
    } B;
  } IMCR[512];

  uint8_t SIUL2_reserved10[192];
  union {                              /* SIUL2 GPIO Pad Data Output Register */
    vuint8_t R;
    struct {
      vuint8_t  :7;
      vuint8_t PDO_4n:1;					     /* Pad Data Out */
    } B;
  } GPDO[264];

  uint8_t SIUL2_reserved11[248];
  union {                              /* SIUL2 GPIO Pad Data Input Register */
    vuint8_t R;
    struct {
      vuint8_t  :7;
      vuint8_t PDI_4n:1;					     /* Pad Data In */
    } B;
  } GPDI[264];

  uint8_t SIUL2_reserved12[248];
  union {                              /* SIUL2 Parallel GPIO Pad Data Out Register */
    vuint16_t R;
    struct {
      vuint16_t PPDO:16;               /* Parallel Pad Data Out */
    } B;
  } PGPDO[32];

  union {                              /* SIUL2 Parallel GPIO Pad Data In Register */
    vuint16_t R;
    struct {
      vuint16_t PPDI:16;               /* Parallel Pad Data In */
    } B;
  } PGPDI[32];

  union {                              /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
    vuint32_t R;
    struct {
      vuint32_t MASK:16;               /* Mask Field */
      vuint32_t MPPDO:16;              /* Masked Parallel Pad Data Out */
    } B;
  } MPGPDO[32];
};


/* ============================================================================
   =============================== Module: SMPU ===============================
   ============================================================================ */

struct SMPU_tag {
  union {                              /* Control/Error Status Register 0 */
    vuint32_t R;
    struct {
      vuint32_t MERR:16;               /* Master n error, where the bus master number matches the bit number */
      vuint32_t  :12;
      vuint32_t HRL:3;                 /* Hardware revision level */
      vuint32_t GVLD:1;                /* Global Valid (global enable/disable for the SMPU) */
    } B;
  } CES0;

  union {                              /* Control/Error Status Register 1 */
    vuint32_t R;
    struct {
      vuint32_t MEOVR:16;              /* Master n error overrun, where the bus master number matches the bit number */
      vuint32_t  :12;
      vuint32_t NRGD:4;                /* Number of region descriptors */
    } B;
  } CES1;

  uint8_t SMPU_reserved0[248];
  struct {
    union {                            /* Error Address Register, Bus Master */
      vuint32_t R;
      struct {
        vuint32_t EADDR:32;            /* Error address */
      } B;
    } ADR;
    union {                            /* Error Attribute Detail Register, Bus Master */
      vuint32_t R;
      struct {
        vuint32_t PID:8;
        vuint32_t  :14;
        vuint32_t EATTR:2;             /* Error attributes */
        vuint32_t ERW:1;               /* Error read/write */
        vuint32_t EMN:7;               /* Error master number */
      } B;
    } ADTL;
    union {                            /* Error Attribute Control Detail Register, Bus Master */
      vuint32_t R;
      struct {
        vuint32_t EACD:24;             /* Error access control detail */
        vuint32_t  :8;
      } B;
    } ACDL;
    uint8_t ERROR_reserved0[4];
  } ERROR[16];

  uint8_t SMPU_reserved1[512];
  struct {
    union {                            /* Region Descriptor n, Word 0 */
      vuint32_t R;
      struct {
        vuint32_t SRTADDR:28;          /* Start address */
        vuint32_t RD_UNRW0:4;
      } B;
    } WORD0;
    union {                            /* Region Descriptor n, Word 1 */
      vuint32_t R;
      struct {
        vuint32_t ENDADDR:28;          /* End address */
        vuint32_t RD_UNRW1:4;
      } B;
    } WORD1;
    union {
      union {                          /* Region Descriptor n, Word 2 Format 0 */
        vuint32_t R;
        struct {
          vuint32_t M0P:2;             /* Bus master 0 permissions */
          vuint32_t M1P:2;             /* Bus master 1 permissions */
          vuint32_t M2P:2;             /* Bus master 2 permissions */
          vuint32_t M3P:2;             /* Bus master 3 permissions */
          vuint32_t M4P:2;             /* Bus master 4 permissions */
          vuint32_t M5P:2;             /* Bus master 5 permissions */
          vuint32_t M6P:2;             /* Bus master 6 permissions */
          vuint32_t M7P:2;             /* Bus master 7 permissions */
          vuint32_t M8P:2;             /* Bus master 8 permissions */
          vuint32_t M9P:2;             /* Bus master 9 permissions */
          vuint32_t M10P:2;            /* Bus master 10 permissions */
          vuint32_t M11P:2;            /* Bus master 11 permissions */
          vuint32_t M12P:2;            /* Bus master 12 permissions */
          vuint32_t M13P:2;            /* Bus master 13 permissions */
          vuint32_t M14P:2;            /* Bus master 14 permissions */
          vuint32_t M15P:2;            /* Bus master 15 permissions */
        } B;
      } FMT0;
      union {                          /* Region Descriptor n, Word 2 Format 1 */
        vuint32_t R;
        struct {
          vuint32_t M0S:2;             /* Bus master 0 permission select */
          vuint32_t M1S:2;             /* Bus master 1 permission select */
          vuint32_t M2S:2;             /* Bus master 2 permission select */
          vuint32_t M3S:2;             /* Bus master 3 permission select */
          vuint32_t M4S:2;             /* Bus master 4 permission select */
          vuint32_t M5S:2;             /* Bus master 5 permission select */
          vuint32_t M6S:2;             /* Bus master 6 permission select */
          vuint32_t M7S:2;             /* Bus master 7 permission select */
          vuint32_t M8S:2;             /* Bus master 8 permission select */
          vuint32_t M9S:2;             /* Bus master 9 permission select */
          vuint32_t M10S:2;            /* Bus master 10 permission select */
          vuint32_t M11S:2;            /* Bus master 11 permission select */
          vuint32_t M12S:2;            /* Bus master 12 permission select */
          vuint32_t M13S:2;            /* Bus master 13 permission select */
          vuint32_t M14S:2;            /* Bus master 14 permission select */
          vuint32_t M15S:2;            /* Bus master 15 permission select */
        } B;
      } FMT1;
    } WORD2;
    union {                            /* Region Descriptor n, Word 3 */
      vuint32_t R;
      struct {
        vuint32_t ACCSET1:6;           /* Access controls, Set 1 */
        vuint32_t ACCSET2:6;           /* Access controls, Set 2 */
        vuint32_t ACCSET3:6;           /* Access controls, Set 3 */
        vuint32_t  :9;
        vuint32_t FMT:1;               /* Region Descriptor Format */
        vuint32_t  :2;
        vuint32_t CI:1;                /* Cache Inhibit */
        vuint32_t  :1;
      } B;
    } WORD3;
    union {                            /* Region Descriptor n, Word 4 */
      vuint32_t R;
      struct {
        vuint32_t PID:8;               /* Process Identifier */
        vuint32_t PID_MASK:8;          /* Process Identifier Mask */
        vuint32_t  :15;
        vuint32_t PIDEN:1;             /* Region Descriptor PID Enable */
      } B;
    } WORD4;
    union {                            /* Region Descriptor n, Word 5 */
      vuint32_t R;
      struct {
        vuint32_t MID:8;               /* Master ID of RGDn owner */
        vuint32_t  :20;
        vuint32_t LCK:2;               /* Region Descriptor Lock */
        vuint32_t  :1;
        vuint32_t VLD:1;               /* Valid */
      } B;
    } WORD5;
    uint8_t RGD_reserved0[40];
  } RGD[16];
};


/* ============================================================================
   =============================== Module: SPI ================================
   ============================================================================ */

struct SPI_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t MSTR:1;                /* Master/Slave Mode Select */
      vuint32_t CONT_SCKE:1;           /* Continuous SCK Enable */
      vuint32_t DCONF:2;               /* SPI Configuration. */
      vuint32_t FRZ:1;                 /* Freeze */
      vuint32_t MTFE:1;                /* Modified Timing Format Enable */
      vuint32_t PCSSE:1;               /* Peripheral Chip Select Strobe Enable */
      vuint32_t ROOE:1;                /* Receive FIFO Overflow Overwrite Enable */
      vuint32_t  :2;
      vuint32_t PCSIS:6;               /* Peripheral Chip Select x Inactive State */
      vuint32_t  :1;
      vuint32_t MDIS:1;                /* Module Disable */
      vuint32_t DIS_TXF:1;             /* Disable Transmit FIFO */
      vuint32_t DIS_RXF:1;             /* Disable Receive FIFO */
      vuint32_t CLR_TXF:1;             /* Clear TX FIFO */
      vuint32_t CLR_RXF:1;             /* CLR_RXF */
      vuint32_t SMPL_PT:2;             /* Sample Point */
      vuint32_t  :4;
      vuint32_t XSPI:1;                /* Extended SPI Mode */
      vuint32_t FCPCS:1;               /* Fast Continuous PCS Mode. */
      vuint32_t PES:1;                 /* Parity Error Stop */
      vuint32_t HALT:1;                /* Halt */
    } B;
  } MCR;

  uint8_t SPI_reserved0[4];
  union {                              /* Transfer Count Register */
    vuint32_t R;
    struct {
      vuint32_t SPI_TCNT:16;           /* SPI Transfer Counter */
      vuint32_t  :16;
    } B;
  } TCR;

  union {
    union {                            /* Clock and Transfer Attributes Register (In Master Mode) */
      vuint32_t R;
      struct {
        vuint32_t DBR:1;               /* Double Baud Rate */
        vuint32_t FMSZ:4;              /* Frame Size */
        vuint32_t CPOL:1;              /* Clock Polarity */
        vuint32_t CPHA:1;              /* Clock Phase */
        vuint32_t LSBFE:1;             /* LSB First */
        vuint32_t PCSSCK:2;            /* PCS to SCK Delay Prescaler */
        vuint32_t PASC:2;              /* After SCK Delay Prescaler */
        vuint32_t PDT:2;               /* Delay after Transfer Prescaler */
        vuint32_t PBR:2;               /* Baud Rate Prescaler */
        vuint32_t CSSCK:4;             /* PCS to SCK Delay Scaler */
        vuint32_t ASC:4;               /* After SCK Delay Scaler */
        vuint32_t DT:4;                /* Delay After Transfer Scaler */
        vuint32_t BR:4;                /* Baud Rate Scaler */
      } B;
    } CTAR[6];
    union {                            /* Clock and Transfer Attributes Register (In Slave Mode) */
      vuint32_t R;
      struct {
        vuint32_t FMSZ:5;              /* Frame Size */
        vuint32_t CPOL:1;              /* Clock Polarity */
        vuint32_t CPHA:1;              /* Clock Phase */
        vuint32_t PE:1;                /* Parity Enable */
        vuint32_t PP:1;                /* Parity Polarity */
        vuint32_t  :1;
        vuint32_t  :22;
      } B;
    } CTAR_SLAVE[2];
  } MODE;

  uint8_t SPI_reserved1[8];
  union {                              /* Status Register */
    vuint32_t R;
    struct {
      vuint32_t TCF:1;                 /* Transfer Complete Flag */
      vuint32_t TXRXS:1;               /* TX and RX Status */
      vuint32_t  :1;
      vuint32_t EOQF:1;                /* End of Queue Flag */
      vuint32_t TFUF:1;                /* Transmit FIFO Underflow Flag */
      vuint32_t  :1;
      vuint32_t TFFF:1;                /* Transmit FIFO Fill Flag */
      vuint32_t BSYF:1;                /* Busy Flag. */
      vuint32_t CMDTCF:1;              /* Command Transfer Complete Flag. */
      vuint32_t  :1;
      vuint32_t SPEF:1;                /* SPI Parity Error Flag */
      vuint32_t  :1;
      vuint32_t RFOF:1;                /* Receive FIFO Overflow Flag */
      vuint32_t TFIWF:1;               /* Tranmit FIFO Invalid Write Flag */
      vuint32_t RFDF:1;                /* Receive FIFO Drain Flag */
      vuint32_t CMDFFF:1;              /* Command FIFO Fill Flag */
      vuint32_t TXCTR:4;               /* TX FIFO Counter */
      vuint32_t TXNXTPTR:4;            /* Transmit Next Pointer */
      vuint32_t RXCTR:4;               /* RX FIFO Counter */
      vuint32_t POPNXTPTR:4;           /* Pop Next Pointer */
    } B;
  } SR;

  union {                              /* DMA/Interrupt Request Select and Enable Register */
    vuint32_t R;
    struct {
      vuint32_t TCF_RE:1;              /* Transmission Complete Request Enable */
      vuint32_t CMDFFF_RE:1;           /* Command FIFO Fill Flag Request Enable. */
      vuint32_t  :1;
      vuint32_t EOQF_RE:1;             /* Finished Request Enable */
      vuint32_t TFUF_RE:1;             /* Transmit FIFO Underflow Request Enable */
      vuint32_t  :1;
      vuint32_t TFFF_RE:1;             /* Transmit FIFO Fill Request Enable */
      vuint32_t TFFF_DIRS:1;           /* Transmit FIFO Fill DMA or Interrupt Request Select */
      vuint32_t CMDTCF_RE:1;           /* Command Transmission Complete Request Enable. */
      vuint32_t  :1;
      vuint32_t SPEF_RE:1;             /* SPI Parity Error Request Enable */
      vuint32_t  :1;
      vuint32_t RFOF_RE:1;             /* Receive FIFO Overflow Request Enable */
      vuint32_t TFIWF_RE:1;            /* Transmit FIFO Invalid Write Request Enable. */
      vuint32_t RFDF_RE:1;             /* Receive FIFO Drain Request Enable */
      vuint32_t RFDF_DIRS:1;           /* Receive FIFO Drain DMA or Interrupt Request Select */
      vuint32_t CMDFFF_DIRS:1;         /* Command FIFO Fill DMA or Interrupt Request Select */
      vuint32_t DDIF_DIRS:1;           /* DSI data received with active bits - DMA or Interrupt Request Select. */
      vuint32_t  :14;
    } B;
  } RSER;

  union {
    union {                            /* PUSH TX FIFO Register In Master Mode */
      vuint32_t R;
      struct {
        vuint32_t CONT:1;              /* Continuous Peripheral Chip Select Enable */
        vuint32_t CTAS:3;              /* Clock and Transfer Attributes Select */
        vuint32_t EOQ:1;               /* End Of Queue */
        vuint32_t CTCNT:1;             /* Clear Transfer Counter */
        vuint32_t PE_MASC:1;           /* Parity Enable or Mask T ASC delay in the current frame */
        vuint32_t PP_MCSC:1;           /* Parity Polarity or Mask T CSC delay in the next frame */
        vuint32_t  :2;
        vuint32_t PCS:6;
        vuint32_t TXDATA:16;           /* Transmit Data */
      } B;
    } PUSHR;
    union {                            /* PUSH TX FIFO Register In Slave Mode */
      vuint32_t R;
      struct {
        vuint32_t  :16;
        vuint32_t TXDATA:16;           /* Transmit Data */
      } B;
    } PUSHR_SLAVE;
  } PUSHR;

  union {                              /* POP RX FIFO Register */
    vuint32_t R;
    struct {
      vuint32_t RXDATA:32;             /* Received Data */
    } B;
  } POPR;

  union {                              /* Transmit FIFO Registers */
    vuint32_t R;
    struct {
      vuint32_t TXCMD_TXDATA:16;       /* Transmit Command or Transmit Data */
      vuint32_t TXDATA:16;             /* Transmit Data */
    } B;
  } TXFR[4];

  uint8_t SPI_reserved2[48];
  union {                              /* Receive FIFO Registers */
    vuint32_t R;
    struct {
      vuint32_t RXDATA:32;             /* Receive Data */
    } B;
  } RXFR[4];

  uint8_t SPI_reserved3[144];
  union {                              /* Clock and Transfer Attributes Register Extended */
    vuint32_t R;
    struct {
      vuint32_t  :15;
      vuint32_t FMSZE:1;               /* Frame Size Extended */
      vuint32_t  :5;
      vuint32_t DTCP:11;               /* Data Transfer Count Preload */
    } B;
  } CTARE[6];

  uint8_t SPI_reserved4[8];
  union {                              /* Status Register Extended */
    vuint32_t R;
    struct {
      vuint32_t  :17;
      vuint32_t RXCTR4:1;              /* RX FIFO Counter[4] */
      vuint32_t  :2;
      vuint32_t TXCTR4:1;              /* TX FIFO Counter[4] */
      vuint32_t  :2;
      vuint32_t CMDCTR:5;              /* CMD FIFO Counter */
      vuint32_t CMDNXTPTR:4;           /* Command Next Pointer */
    } B;
  } SREX;

  union {                              /* Trigger Register */
    vuint32_t R;
    struct {
      vuint32_t ENABLE:1;              /* Trigger Register Enable */
      vuint32_t  :27;
      vuint32_t  :1;
      vuint32_t ASDR_WT:1;             /* ASDR Write Trigger Enable */
      vuint32_t CID:1;                 /* Change In Data Transfer Enable */
      vuint32_t TRRE:1;                /* Trigger Reception Enable */
    } B;
  } TRIG;
};


/* ============================================================================
   =============================== Module: SSCM ===============================
   ============================================================================ */

struct SSCM_tag {
  union {                              /* SSCM System Status */
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t CER:1;                 /* Configuration Error */
      vuint16_t CERS:1;                /* Configuration Error for Safe DCF Clients */
      vuint16_t  :1;
      vuint16_t NXEN:1;                /* Processor 0 Nexus enable status */
      vuint16_t  :1;
      vuint16_t  :1;
      vuint16_t  :1;
      vuint16_t BMODE:3;               /* Device Boot Mode */
      vuint16_t  :1;
      vuint16_t  :1;
      vuint16_t  :1;
      vuint16_t  :2;
    } B;
  } STATUS;

  union {                              /* SSCM System Memory and ID Register */
    vuint16_t R;
    struct {
      vuint16_t JPIN:10;
      vuint16_t  :1;
      vuint16_t MREV:4;                /* Minor Mask Revision */
      vuint16_t  :1;
    } B;
  } MEMCONFIG;

  uint8_t SSCM_reserved0[4];
  union {                              /* SSCM Debug Status Port Register */
    vuint16_t R;
    struct {
      vuint16_t  :7;
      vuint16_t  :1;
      vuint16_t  :5;
      vuint16_t DEBUG_MODE:3;
    } B;
  } DEBUGPORT;

  uint8_t SSCM_reserved1[22];
  union {                              /* SSCM HSM and User Option Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t HSB:3;                 /* HSM Boot Configuration */
      vuint32_t HSE:1;                 /* HSM Enabled */
    } B;
  } UOPS;

  uint8_t SSCM_reserved2[4];
  union {                              /* Processor Start Address Register */
    vuint32_t R;
    struct {
      vuint32_t SADR:32;               /* Processor Start Address */
    } B;
  } PSA;

  uint8_t SSCM_reserved3[4];
  union {                              /* SSCM HSM Start Address Register */
    vuint32_t R;
    struct {
      vuint32_t HADR:32;               /* HSM Start Address */
    } B;
  } HSA;

  union {                              /* Life Cycle Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t  :2;
      vuint32_t  :5;
      vuint32_t LC:3;                  /* Life Cycle */
    } B;
  } LCSTAT;
};


/* ============================================================================
   =============================== Module: STCU2 ==============================
   ============================================================================ */

struct STCU2_tag {
  union {                              /* STCU2 Run Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t BYP:1;
      vuint32_t MBPLLEN:1;
      vuint32_t LBPLLEN:1;
      vuint32_t  :7;
      vuint32_t RUN:1;
    } B;
  } RUN;

  union {                              /* STCU2 Run Software Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBIE:1;
      vuint32_t LBIE:1;
      vuint32_t MBSWPLLEN:1;
      vuint32_t LBSWPLLEN:1;
      vuint32_t  :6;
      vuint32_t  :1;
      vuint32_t RUNSW:1;
    } B;
  } RUNSW;

  union {                              /* STCU2 SK Code Register */
    vuint32_t R;
    struct {
      vuint32_t SKC:32;
    } B;
  } SKC;

  union {                              /* STCU2 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PTR:7;
      vuint32_t LB_DELAY:8;
      vuint32_t  :7;
      vuint32_t WRP:1;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t PMOSEN:1;
      vuint32_t MBU:1;
      vuint32_t CLK_CFG:3;
    } B;
  } CFG;

  uint8_t STCU2_reserved0[4];
  union {                              /* STCU2 Watchdog Register Granularity */
    vuint32_t R;
    struct {
      vuint32_t WDGEOC:32;
    } B;
  } WDG;

  union {                              /* STCU2 Interrupt Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :30;
      vuint32_t MBIFLG:1;
      vuint32_t LBIFLG:1;
    } B;
  } INT_FLG;

  uint8_t STCU2_reserved1[8];
  union {                              /* STCU2 Error Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;
      vuint32_t ABORTHW:1;
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t LOCKESW:1;
      vuint32_t WDTOSW:1;
      vuint32_t  :1;
      vuint32_t ENGESW:1;
      vuint32_t INVPSW:1;
      vuint32_t  :6;
      vuint32_t UFSF:1;
      vuint32_t RFSF:1;
      vuint32_t  :3;
      vuint32_t LOCKE:1;
      vuint32_t WDTO:1;
      vuint32_t  :1;
      vuint32_t ENGE:1;
      vuint32_t INVP:1;
    } B;
  } ERR_STAT;

  union {                              /* STCU2 Error FM Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t LOCKEUFM:1;
      vuint32_t WDTOUFM:1;
      vuint32_t  :1;
      vuint32_t ENGEUFM:1;
      vuint32_t INVPUFM:1;
    } B;
  } ERR_FM;

  union {                              /* STCU2 Off-Line LBIST Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t LBS2:1;
      vuint32_t LBS1:1;
      vuint32_t LBS0:1;
    } B;
  } LBS;

  union {                              /* STCU2 Off-Line LBIST End Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t LBE2:1;
      vuint32_t LBE1:1;
      vuint32_t LBE0:1;
    } B;
  } LBE;

  union {                              /* STCU2 On-Line LBIST Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t LBSSW2:1;
      vuint32_t LBSSW1:1;
      vuint32_t LBSSW0:1;
    } B;
  } LBSSW;

  union {                              /* STCU2 On-Line LBIST End Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t LBESW2:1;
      vuint32_t LBESW1:1;
      vuint32_t LBESW0:1;
    } B;
  } LBESW;

  uint8_t STCU2_reserved2[4];
  union {                              /* STCU2 LBIST Unrecoverable FM Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t LBUFM2:1;
      vuint32_t LBUFM1:1;
      vuint32_t LBUFM0:1;
    } B;
  } LBUFM;

  union {                              /* STCU2 Off-Line MBIST Status Low Register */
    vuint32_t R;
    struct {
      vuint32_t MBS31:1;
      vuint32_t MBS30:1;
      vuint32_t MBS29:1;
      vuint32_t MBS28:1;
      vuint32_t MBS27:1;
      vuint32_t MBS26:1;
      vuint32_t MBS25:1;
      vuint32_t MBS24:1;
      vuint32_t MBS23:1;
      vuint32_t MBS22:1;
      vuint32_t MBS21:1;
      vuint32_t MBS20:1;
      vuint32_t MBS19:1;
      vuint32_t MBS18:1;
      vuint32_t MBS17:1;
      vuint32_t MBS16:1;
      vuint32_t MBS15:1;
      vuint32_t MBS14:1;
      vuint32_t MBS13:1;
      vuint32_t MBS12:1;
      vuint32_t MBS11:1;
      vuint32_t MBS10:1;
      vuint32_t MBS9:1;
      vuint32_t MBS8:1;
      vuint32_t MBS7:1;
      vuint32_t MBS6:1;
      vuint32_t MBS5:1;
      vuint32_t MBS4:1;
      vuint32_t MBS3:1;
      vuint32_t MBS2:1;
      vuint32_t MBS1:1;
      vuint32_t MBS0:1;
    } B;
  } MBSL;

  union {                              /* STCU2 Off-Line MBIST Status Medium Register */
    vuint32_t R;
    struct {
      vuint32_t MBS63:1;
      vuint32_t MBS62:1;
      vuint32_t MBS61:1;
      vuint32_t MBS60:1;
      vuint32_t MBS59:1;
      vuint32_t MBS58:1;
      vuint32_t MBS57:1;
      vuint32_t MBS56:1;
      vuint32_t MBS55:1;
      vuint32_t MBS54:1;
      vuint32_t MBS53:1;
      vuint32_t MBS52:1;
      vuint32_t MBS51:1;
      vuint32_t MBS50:1;
      vuint32_t MBS49:1;
      vuint32_t MBS48:1;
      vuint32_t MBS47:1;
      vuint32_t MBS46:1;
      vuint32_t MBS45:1;
      vuint32_t MBS44:1;
      vuint32_t MBS43:1;
      vuint32_t MBS42:1;
      vuint32_t MBS41:1;
      vuint32_t MBS40:1;
      vuint32_t MBS39:1;
      vuint32_t MBS38:1;
      vuint32_t MBS37:1;
      vuint32_t MBS36:1;
      vuint32_t MBS35:1;
      vuint32_t MBS34:1;
      vuint32_t MBS33:1;
      vuint32_t MBS32:1;
    } B;
  } MBSM;

  union {                              /* STCU2 Off-Line MBIST Status High Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBS75:1;
      vuint32_t MBS74:1;
      vuint32_t MBS73:1;
      vuint32_t MBS72:1;
      vuint32_t MBS71:1;
      vuint32_t MBS70:1;
      vuint32_t MBS69:1;
      vuint32_t MBS68:1;
      vuint32_t MBS67:1;
      vuint32_t MBS66:1;
      vuint32_t MBS65:1;
      vuint32_t MBS64:1;
    } B;
  } MBSH;

  union {                              /* STCU2 Off-Line MBIST End Flag Low Register */
    vuint32_t R;
    struct {
      vuint32_t MBE31:1;
      vuint32_t MBE30:1;
      vuint32_t MBE29:1;
      vuint32_t MBE28:1;
      vuint32_t MBE27:1;
      vuint32_t MBE26:1;
      vuint32_t MBE25:1;
      vuint32_t MBE24:1;
      vuint32_t MBE23:1;
      vuint32_t MBE22:1;
      vuint32_t MBE21:1;
      vuint32_t MBE20:1;
      vuint32_t MBE19:1;
      vuint32_t MBE18:1;
      vuint32_t MBE17:1;
      vuint32_t MBE16:1;
      vuint32_t MBE15:1;
      vuint32_t MBE14:1;
      vuint32_t MBE13:1;
      vuint32_t MBE12:1;
      vuint32_t MBE11:1;
      vuint32_t MBE10:1;
      vuint32_t MBE9:1;
      vuint32_t MBE8:1;
      vuint32_t MBE7:1;
      vuint32_t MBE6:1;
      vuint32_t MBE5:1;
      vuint32_t MBE4:1;
      vuint32_t MBE3:1;
      vuint32_t MBE2:1;
      vuint32_t MBE1:1;
      vuint32_t MBE0:1;
    } B;
  } MBEL;

  union {                              /* STCU2 Off-Line MBIST End Flag Medium Register */
    vuint32_t R;
    struct {
      vuint32_t MBE63:1;
      vuint32_t MBE62:1;
      vuint32_t MBE61:1;
      vuint32_t MBE60:1;
      vuint32_t MBE59:1;
      vuint32_t MBE58:1;
      vuint32_t MBE57:1;
      vuint32_t MBE56:1;
      vuint32_t MBE55:1;
      vuint32_t MBE54:1;
      vuint32_t MBE53:1;
      vuint32_t MBE52:1;
      vuint32_t MBE51:1;
      vuint32_t MBE50:1;
      vuint32_t MBE49:1;
      vuint32_t MBE48:1;
      vuint32_t MBE47:1;
      vuint32_t MBE46:1;
      vuint32_t MBE45:1;
      vuint32_t MBE44:1;
      vuint32_t MBE43:1;
      vuint32_t MBE42:1;
      vuint32_t MBE41:1;
      vuint32_t MBE40:1;
      vuint32_t MBE39:1;
      vuint32_t MBE38:1;
      vuint32_t MBE37:1;
      vuint32_t MBE36:1;
      vuint32_t MBE35:1;
      vuint32_t MBE34:1;
      vuint32_t MBE33:1;
      vuint32_t MBE32:1;
    } B;
  } MBEM;

  union {                              /* STCU2 Off-Line MBIST End Flag High Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBE75:1;
      vuint32_t MBE74:1;
      vuint32_t MBE73:1;
      vuint32_t MBE72:1;
      vuint32_t MBE71:1;
      vuint32_t MBE70:1;
      vuint32_t MBE69:1;
      vuint32_t MBE68:1;
      vuint32_t MBE67:1;
      vuint32_t MBE66:1;
      vuint32_t MBE65:1;
      vuint32_t MBE64:1;
    } B;
  } MBEH;

  union {                              /* STCU2 On-Line MBIST Status Low Register */
    vuint32_t R;
    struct {
      vuint32_t MBSSW31:1;
      vuint32_t MBSSW30:1;
      vuint32_t MBSSW29:1;
      vuint32_t MBSSW28:1;
      vuint32_t MBSSW27:1;
      vuint32_t MBSSW26:1;
      vuint32_t MBSSW25:1;
      vuint32_t MBSSW24:1;
      vuint32_t MBSSW23:1;
      vuint32_t MBSSW22:1;
      vuint32_t MBSSW21:1;
      vuint32_t MBSSW20:1;
      vuint32_t MBSSW19:1;
      vuint32_t MBSSW18:1;
      vuint32_t MBSSW17:1;
      vuint32_t MBSSW16:1;
      vuint32_t MBSSW15:1;
      vuint32_t MBSSW14:1;
      vuint32_t MBSSW13:1;
      vuint32_t MBSSW12:1;
      vuint32_t MBSSW11:1;
      vuint32_t MBSSW10:1;
      vuint32_t MBSSW9:1;
      vuint32_t MBSSW8:1;
      vuint32_t MBSSW7:1;
      vuint32_t MBSSW6:1;
      vuint32_t MBSSW5:1;
      vuint32_t MBSSW4:1;
      vuint32_t MBSSW3:1;
      vuint32_t MBSSW2:1;
      vuint32_t MBSSW1:1;
      vuint32_t MBSSW0:1;
    } B;
  } MBSLSW;

  union {                              /* STCU2 On-Line MBIST Status Medium Register */
    vuint32_t R;
    struct {
      vuint32_t MBSSW63:1;
      vuint32_t MBSSW62:1;
      vuint32_t MBSSW61:1;
      vuint32_t MBSSW60:1;
      vuint32_t MBSSW59:1;
      vuint32_t MBSSW58:1;
      vuint32_t MBSSW57:1;
      vuint32_t MBSSW56:1;
      vuint32_t MBSSW55:1;
      vuint32_t MBSSW54:1;
      vuint32_t MBSSW53:1;
      vuint32_t MBSSW52:1;
      vuint32_t MBSSW51:1;
      vuint32_t MBSSW50:1;
      vuint32_t MBSSW49:1;
      vuint32_t MBSSW48:1;
      vuint32_t MBSSW47:1;
      vuint32_t MBSSW46:1;
      vuint32_t MBSSW45:1;
      vuint32_t MBSSW44:1;
      vuint32_t MBSSW43:1;
      vuint32_t MBSSW42:1;
      vuint32_t MBSSW41:1;
      vuint32_t MBSSW40:1;
      vuint32_t MBSSW39:1;
      vuint32_t MBSSW38:1;
      vuint32_t MBSSW37:1;
      vuint32_t MBSSW36:1;
      vuint32_t MBSSW35:1;
      vuint32_t MBSSW34:1;
      vuint32_t MBSSW33:1;
      vuint32_t MBSSW32:1;
    } B;
  } MBSMSW;

  union {                              /* STCU2 On-Line MBIST Status High Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBSSW75:1;
      vuint32_t MBSSW74:1;
      vuint32_t MBSSW73:1;
      vuint32_t MBSSW72:1;
      vuint32_t MBSSW71:1;
      vuint32_t MBSSW70:1;
      vuint32_t MBSSW69:1;
      vuint32_t MBSSW68:1;
      vuint32_t MBSSW67:1;
      vuint32_t MBSSW66:1;
      vuint32_t MBSSW65:1;
      vuint32_t MBSSW64:1;
    } B;
  } MBSHSW;

  union {                              /* STCU2 On-Line MBIST End Flag Low Register */
    vuint32_t R;
    struct {
      vuint32_t MBESW31:1;
      vuint32_t MBESW30:1;
      vuint32_t MBESW29:1;
      vuint32_t MBESW28:1;
      vuint32_t MBESW27:1;
      vuint32_t MBESW26:1;
      vuint32_t MBESW25:1;
      vuint32_t MBESW24:1;
      vuint32_t MBESW23:1;
      vuint32_t MBESW22:1;
      vuint32_t MBESW21:1;
      vuint32_t MBESW20:1;
      vuint32_t MBESW19:1;
      vuint32_t MBESW18:1;
      vuint32_t MBESW17:1;
      vuint32_t MBESW16:1;
      vuint32_t MBESW15:1;
      vuint32_t MBESW14:1;
      vuint32_t MBESW13:1;
      vuint32_t MBESW12:1;
      vuint32_t MBESW11:1;
      vuint32_t MBESW10:1;
      vuint32_t MBESW9:1;
      vuint32_t MBESW8:1;
      vuint32_t MBESW7:1;
      vuint32_t MBESW6:1;
      vuint32_t MBESW5:1;
      vuint32_t MBESW4:1;
      vuint32_t MBESW3:1;
      vuint32_t MBESW2:1;
      vuint32_t MBESW1:1;
      vuint32_t MBESW0:1;
    } B;
  } MBELSW;

  union {                              /* STCU2 On-Line MBIST End Flag Medium Register */
    vuint32_t R;
    struct {
      vuint32_t MBESW63:1;
      vuint32_t MBESW62:1;
      vuint32_t MBESW61:1;
      vuint32_t MBESW60:1;
      vuint32_t MBESW59:1;
      vuint32_t MBESW58:1;
      vuint32_t MBESW57:1;
      vuint32_t MBESW56:1;
      vuint32_t MBESW55:1;
      vuint32_t MBESW54:1;
      vuint32_t MBESW53:1;
      vuint32_t MBESW52:1;
      vuint32_t MBESW51:1;
      vuint32_t MBESW50:1;
      vuint32_t MBESW49:1;
      vuint32_t MBESW48:1;
      vuint32_t MBESW47:1;
      vuint32_t MBESW46:1;
      vuint32_t MBESW45:1;
      vuint32_t MBESW44:1;
      vuint32_t MBESW43:1;
      vuint32_t MBESW42:1;
      vuint32_t MBESW41:1;
      vuint32_t MBESW40:1;
      vuint32_t MBESW39:1;
      vuint32_t MBESW38:1;
      vuint32_t MBESW37:1;
      vuint32_t MBESW36:1;
      vuint32_t MBESW35:1;
      vuint32_t MBESW34:1;
      vuint32_t MBESW33:1;
      vuint32_t MBESW32:1;
    } B;
  } MBEMSW;

  union {                              /* STCU2 On-Line MBIST End Flag High Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBESW75:1;
      vuint32_t MBESW74:1;
      vuint32_t MBESW73:1;
      vuint32_t MBESW72:1;
      vuint32_t MBESW71:1;
      vuint32_t MBESW70:1;
      vuint32_t MBESW69:1;
      vuint32_t MBESW68:1;
      vuint32_t MBESW67:1;
      vuint32_t MBESW66:1;
      vuint32_t MBESW65:1;
      vuint32_t MBESW64:1;
    } B;
  } MBEHSW;

  union {                              /* STCU2 MBIST Unrecoverable FM Low Register */
    vuint32_t R;
    struct {
      vuint32_t MBUFM31:1;
      vuint32_t MBUFM30:1;
      vuint32_t MBUFM29:1;
      vuint32_t MBUFM28:1;
      vuint32_t MBUFM27:1;
      vuint32_t MBUFM26:1;
      vuint32_t MBUFM25:1;
      vuint32_t MBUFM24:1;
      vuint32_t MBUFM23:1;
      vuint32_t MBUFM22:1;
      vuint32_t MBUFM21:1;
      vuint32_t MBUFM20:1;
      vuint32_t MBUFM19:1;
      vuint32_t MBUFM18:1;
      vuint32_t MBUFM17:1;
      vuint32_t MBUFM16:1;
      vuint32_t MBUFM15:1;
      vuint32_t MBUFM14:1;
      vuint32_t MBUFM13:1;
      vuint32_t MBUFM12:1;
      vuint32_t MBUFM11:1;
      vuint32_t MBUFM10:1;
      vuint32_t MBUFM9:1;
      vuint32_t MBUFM8:1;
      vuint32_t MBUFM7:1;
      vuint32_t MBUFM6:1;
      vuint32_t MBUFM5:1;
      vuint32_t MBUFM4:1;
      vuint32_t MBUFM3:1;
      vuint32_t MBUFM2:1;
      vuint32_t MBUFM1:1;
      vuint32_t MBUFM0:1;
    } B;
  } MBUFML;

  union {                              /* STCU2 MBIST Unrecoverable FM Medium Register */
    vuint32_t R;
    struct {
      vuint32_t MBUFM63:1;
      vuint32_t MBUFM62:1;
      vuint32_t MBUFM61:1;
      vuint32_t MBUFM60:1;
      vuint32_t MBUFM59:1;
      vuint32_t MBUFM58:1;
      vuint32_t MBUFM57:1;
      vuint32_t MBUFM56:1;
      vuint32_t MBUFM55:1;
      vuint32_t MBUFM54:1;
      vuint32_t MBUFM53:1;
      vuint32_t MBUFM52:1;
      vuint32_t MBUFM51:1;
      vuint32_t MBUFM50:1;
      vuint32_t MBUFM49:1;
      vuint32_t MBUFM48:1;
      vuint32_t MBUFM47:1;
      vuint32_t MBUFM46:1;
      vuint32_t MBUFM45:1;
      vuint32_t MBUFM44:1;
      vuint32_t MBUFM43:1;
      vuint32_t MBUFM42:1;
      vuint32_t MBUFM41:1;
      vuint32_t MBUFM40:1;
      vuint32_t MBUFM39:1;
      vuint32_t MBUFM38:1;
      vuint32_t MBUFM37:1;
      vuint32_t MBUFM36:1;
      vuint32_t MBUFM35:1;
      vuint32_t MBUFM34:1;
      vuint32_t MBUFM33:1;
      vuint32_t MBUFM32:1;
    } B;
  } MBUFMM;

  union {                              /* STCU2 MBIST Unrecoverable FM High Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MBUFM75:1;
      vuint32_t MBUFM74:1;
      vuint32_t MBUFM73:1;
      vuint32_t MBUFM72:1;
      vuint32_t MBUFM71:1;
      vuint32_t MBUFM70:1;
      vuint32_t MBUFM69:1;
      vuint32_t MBUFM68:1;
      vuint32_t MBUFM67:1;
      vuint32_t MBUFM66:1;
      vuint32_t MBUFM65:1;
      vuint32_t MBUFM64:1;
    } B;
  } MBUFMH;

  uint8_t STCU2_reserved3[128];
  struct {
    union {                            /* STCU2 LBIST Control Register */
      vuint32_t R;
      struct {
        vuint32_t CSM:1;
        vuint32_t PTR:7;
        vuint32_t  :4;
        vuint32_t PRPGEN:1;
        vuint32_t SHS:3;
        vuint32_t SCEN_OFF:4;
        vuint32_t SCEN_ON:4;
        vuint32_t  :4;
        vuint32_t PFT:1;
        vuint32_t CWS:3;
      } B;
    } CTRL;
    union {                            /* STCU2 LBIST PC Stop Register */
      vuint32_t R;
      struct {
        vuint32_t  :6;
        vuint32_t PCS:26;
      } B;
    } PCS;
    union {                            /* STCU2 LBIST PRPG Low Register */
      vuint32_t R;
      struct {
        vuint32_t PRPGx:32;
      } B;
    } PRPGL;
    union {                            /* STCU2 LBIST PRPG High Register */
      vuint32_t R;
      struct {
        vuint32_t PRPGx:32;
      } B;
    } PRPGH;
    union {                            /* STCU2 Off-Line LBIST MISR Expected Low Register */
      vuint32_t R;
      struct {
        vuint32_t MISREx:32;
      } B;
    } MISREL;
    union {                            /* STCU2 Off-Line LBIST MISR Expected High Register */
      vuint32_t R;
      struct {
        vuint32_t MISREx:32;
      } B;
    } MISREH;
    union {                            /* STCU2 Off-Line LBIST MISR Read Low Register */
      vuint32_t R;
      struct {
        vuint32_t MISRRx:32;
      } B;
    } MISRRL;
    union {                            /* STCU2 Off-Line LBIST MISR Read High Register */
      vuint32_t R;
      struct {
        vuint32_t MISRRx:32;
      } B;
    } MISRRH;
    union {                            /* STCU2 On-Line LBIST MISR Expected Low Register */
      vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;
      } B;
    } MISRELSW;
    union {                            /* STCU2 On-Line LBIST MISR Expected High Register */
      vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;
      } B;
    } MISREHSW;
    union {                            /* STCU2 On-Line LBIST MISR Read Low Register */
      vuint32_t R;
      struct {
        vuint32_t MISRRSWx:32;
      } B;
    } MISRRLSW;
    union {                            /* STCU2 On-Line LBIST MISR Read High Register */
      vuint32_t R;
      struct {
        vuint32_t MISRRSWx:32;
      } B;
    } MISRRHSW;
    uint8_t LB_reserved0[16];
  } LB[3];

  uint8_t STCU2_reserved4[1088];
  union {                              /* STCU2 MBIST Control Register */
    vuint32_t R;
    struct {
      vuint32_t CSM:1;
      vuint32_t PTR:7;
      vuint32_t  :24;
    } B;
  } MB_CTRL[76];
};


/* ============================================================================
   =============================== Module: STM ================================
   ============================================================================ */

struct STM_tag {
  union {                              /* STM Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CPS:8;                 /* Counter Prescaler. */
      vuint32_t  :3;
	  vuint32_t CSL:1;                 /* Clock Selection. */
	  vuint32_t  :2;
      vuint32_t FRZ:1;                 /* Freeze. */
      vuint32_t TEN:1;                 /* Timer counter Enabled. */
    } B;
  } CR;

  union {                              /* STM Count Register */
    vuint32_t R;
    struct {
      vuint32_t CNT:32;                /* Timer count value used as the time base for all channels. */
    } B;
  } CNT;

  uint8_t STM_reserved0[8];
  struct {
    union {                            /* STM Channel Control Register */
      vuint32_t R;
      struct {
        vuint32_t  :31;
        vuint32_t CEN:1;               /* Channel Enable */
      } B;
    } CCR;
    union {                            /* STM Channel Interrupt Register */
      vuint32_t R;
      struct {
        vuint32_t  :31;
        vuint32_t CIF:1;               /* Channel Interrupt Flag */
      } B;
    } CIR;
    union {                            /* STM Channel Compare Register */
      vuint32_t R;
      struct {
        vuint32_t CMP:32;              /* Compare value for channel n. */
      } B;
    } CMP;
    uint8_t CHANNEL_reserved0[4];
  } CHANNEL[4];
};


/* ============================================================================
   =============================== Module: SWT ================================
   ============================================================================ */

struct SWT_tag {
  union {                              /* SWT Control Register */
    vuint32_t R;
    struct {
      vuint32_t MAP0:1;
      vuint32_t MAP1:1;
      vuint32_t MAP2:1;
      vuint32_t MAP3:1;
      vuint32_t MAP4:1;
      vuint32_t MAP5:1;
      vuint32_t MAP6:1;
      vuint32_t MAP7:1;
      vuint32_t  :13;
      vuint32_t SMD:2;                 /* Service Mode. */
      vuint32_t RIA:1;
      vuint32_t WND:1;
      vuint32_t ITR:1;
      vuint32_t HLK:1;
      vuint32_t SLK:1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t STP:1;
      vuint32_t FRZ:1;
      vuint32_t WEN:1;
    } B;
  } CR;

  union {                              /* SWT Interrupt Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;
      vuint32_t TIF:1;
    } B;
  } IR;

  union {                              /* SWT Time-out Register */
    vuint32_t R;
    struct {
      vuint32_t WTO:32;
    } B;
  } TO;

  union {                              /* SWT Window Register */
    vuint32_t R;
    struct {
      vuint32_t WST:32;
    } B;
  } WN;

  union {                              /* SWT Service Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t WSC:16;
    } B;
  } SR;

  union {                              /* SWT Counter Output Register */
    vuint32_t R;
    struct {
      vuint32_t CNT:32;
    } B;
  } CO;

  union {                              /* SWT Service Key Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SK:16;                 /* Service Key. */
    } B;
  } SK;
};


/* ============================================================================
   =============================== Module: SXOSC ==============================
   ============================================================================ */

struct SXOSC_tag {
  union {
    vuint32_t R;
    struct {
      vuint32_t OSCBYP:1;              /* 32 KHz oscillator bypass */
      vuint32_t ALC:1;                 /* Auto loop control */
      vuint32_t  :6;
      vuint32_t EOCV:8;                /* End of Counter Value */
      vuint32_t M_OSC:1;               /* SXOSC clock interrupt mask */
      vuint32_t  :2;
      vuint32_t OSCDIV:5;              /* The SXOSC Divider bits select the clock divider factor. */
      vuint32_t I_OSC:1;               /* SXOSC clock interrupt */
      vuint32_t  :7;
    } B;
  } CTL;
};


/* ============================================================================
   =============================== Module: TDM ================================
   ============================================================================ */

struct TDM_tag {
  union {                              /* TDR Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t TDRSR5:1;
      vuint32_t TDRSR4:1;
      vuint32_t TDRSR3:1;
      vuint32_t TDRSR2:1;
      vuint32_t TDRSR1:1;
      vuint32_t TDRSR0:1;
    } B;
  } TDRSR;

  union {                              /* Last Flash Programmed Address Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t LFPAR:24;
    } B;
  } LFPAR;

  union {                              /* Diary Base Address */
    vuint32_t R;
    struct {
      vuint32_t DBA:32;
    } B;
  } DBA;
};


/* ============================================================================
   =============================== Module: UHST ===============================
   ============================================================================ */

struct UHST_tag {
  union {                              /* Identification Register */
    vuint32_t R;
    struct {
      vuint32_t VERSIONID:3;           /* Version ID */
      vuint32_t VERSION:4;             /* Version */
      vuint32_t REVISION:4;            /* Revision */
      vuint32_t TAG:5;                 /* Tag */
      vuint32_t  :2;                   /* Reserved */
      vuint32_t NID:6;
      vuint32_t  :2;                   /* Reserved */
      vuint32_t ID:6;                  /* Configuration number */
    } B;
  } ID;

  union {                              /* General Hardware Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;                  /* Reserved */
      vuint32_t SM:2;                  /* Serial mode */
      vuint32_t PHYM:4;                /* PHY Mode */
      vuint32_t PHYW:2;                /* PHY Width */
      vuint32_t  :1;
      vuint32_t CLKC:2;                /* VUSB_HS_CLOCK_CONFIGURATION. */
      vuint32_t RT:1;                  /* VUSB_HS_RESET_TYPE. */
    } B;
  } GNLHW;

  union {                              /* Host Hardware Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t TTPER:8;               /* Transaction translator periodic contexts. */
      vuint32_t TTASY:8;               /* Transaction translator contexts. */
      vuint32_t  :12;                  /* Reserved */
      vuint32_t NPORT:3;               /* Number of Ports */
      vuint32_t HC:1;                  /* Host Capable */
    } B;
  } HSTHWP;

  uint8_t UHST_reserved0[4];
  union {                              /* Transmit Buffer Hardware Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t TXLC:1;                /* Transmit local Context Registers */
      vuint32_t  :7;                   /* Reserved */
      vuint32_t TXCHANADD:8;           /* Transmit Channel Address */
      vuint32_t TXADD:8;               /* Transmit Address. */
      vuint32_t TXBURST:8;             /* Transmit Burst. */
    } B;
  } TXBFP;

  union {                              /* Receive Buffer Hardware Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;                  /* Reserved */
      vuint32_t RXADD:8;               /* Receive Address. */
      vuint32_t RXBURST:8;             /* Receive Burst. */
    } B;
  } RXBFP;

  uint8_t UHST_reserved1[104];
  struct {
    union {                            /* General Purpose Timer n Load Register */
      vuint32_t R;
      struct {
        vuint32_t  :8;                 /* Reserved */
        vuint32_t GPTLD:24;
      } B;
    } LD;
    union {                            /* General Purpose Timer n Control Register */
      vuint32_t R;
      struct {
        vuint32_t GPTRUN:1;            /* Timer Run */
        vuint32_t GPTRST:1;            /* Timer Reset */
        vuint32_t  :5;                 /* Reserved */
        vuint32_t GPTMODE:1;           /* Timer Mode */
        vuint32_t GPTCNT:24;           /* Timer Count */
      } B;
    } CTL;
  } GPT[2];

  union {                              /* System Bus Interface Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;                  /* Reserved */
      vuint32_t BAWR:3;                /* AMBA Burst Alignment for Writes. Set by parameter VUSB_HS_AHBBRST_ALIGN_WR. */
      vuint32_t BARD:3;                /* AMBA Burst Alignment for Reads. */
      vuint32_t AHBBRST:3;             /* AMBA AHB burst configuration. */
    } B;
  } SBUSCFG;

  uint8_t UHST_reserved2[108];
  union {                              /* Capability Register Length */
    vuint8_t R;
    struct {
      vuint8_t CAPLENGTH:8;            /* This register is used to indicate which offset to add to the register base address at the beginning of the Operational Register. */
    } B;
  } CAPLENGTH;

  uint8_t UHST_reserved3[1];
  union {                              /* Host Controller Interface Version and Capability Registers Length Register */
    vuint16_t R;
    struct {
      vuint16_t HCIVERSION:16;         /* EHCI revision number */
    } B;
  } HCIVERSION;

  union {                              /* Host Controller Structural Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;                   /* Reserved */
      vuint32_t N_TT:4;                /* Number of Transaction Translators. */
      vuint32_t N_PTT:4;               /* Ports per Transaction Translator */
      vuint32_t  :3;                   /* Reserved */
      vuint32_t PI:1;                  /* Port Indicators */
      vuint32_t N_CC:4;                /* Number of Companion Controllers */
      vuint32_t N_PCC:4;               /* Number Ports per CC */
      vuint32_t  :3;                   /* Reserved */
      vuint32_t PPCA:1;                 /* Power Port Control */
      vuint32_t N_PORTS:4;             /* Number of Ports */
    } B;
  } HCSPARAMS;

  union {                              /* Host Controller Capability Parameters Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;                  /* Reserved */
      vuint32_t EECP:8;                /* EHCI Extended Capabilities Pointer */
      vuint32_t IST:4;                 /* Isochronous Scheduling Threshold */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ASP:1;                 /* Asynchronous Schedule Park capability */
      vuint32_t PFL:1;                 /* Programmable Frame List flag */
      vuint32_t ADC:1;                 /* 64-bit addressing capability. */
    } B;
  } HCCPARAMS;

  uint8_t UHST_reserved4[52];
  union {                              /* USB Command Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;                   /* Reserved */
      vuint32_t ITC:8;                 /* Interrupt Threshold Control */
      vuint32_t FS1:1;                 /* Frame list Size 1 */
      vuint32_t ATDTW:1;               /* Add dTD TripWire */
      vuint32_t SUTW:1;                /* Setup TripWire */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ASPE:1;                /* Asynchronous Schedule Park mode Enable */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ASP:2;                 /* Asynchronous Schedule Park mode count */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t IAA:1;                 /* Interrupt on Async Advance doorbell */
      vuint32_t ASE:1;                 /* Asynchronous Schedule Enable */
      vuint32_t PSE:1;                 /* Periodic Schedule Enable */
      vuint32_t FS0:2;                 /* Frame list Size 0 */
      vuint32_t RST:1;                 /* Controller Reset */
      vuint32_t RS:1;                  /* Run/Stop */
    } B;
  } USBCMD;

  union {                              /* USB Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;                   /* Reserved */
      vuint32_t TI1:1;                 /* General purpose Timer 1 Interrupt */
      vuint32_t TI0:1;                 /* General purpose Timer 0 Interrupt */
      vuint32_t  :4;                   /* Reserved */
      vuint32_t UPI:1;                 /* USB host Periodic Interrupt */
      vuint32_t UAI:1;                 /* USB host Asynchronous Interrupt */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t NAKI:1;                /* NAK Interrupt */
      vuint32_t AS:1;                  /* Asynchronous schedule Status */
      vuint32_t PS:1;                  /* Periodic schedule Status */
      vuint32_t RCL:1;                 /* Reclamation */
      vuint32_t HCH:1;                 /* Host Controller Halted */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ULPII:1;               /* ULPI Interrupt */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t SLI:1;                 /* Device-controller suspend */
      vuint32_t SRI:1;                 /* SOF Received */
      vuint32_t  :1;
      vuint32_t AAI:1;                 /* Interrupt on Async Advance */
      vuint32_t SEI:1;                 /* System Error */
      vuint32_t FRI:1;                 /* Frame-list Rollover */
      vuint32_t PCI:1;                 /* Port Change detect */
      vuint32_t UEI:1;                 /* USB Error Interrupt */
      vuint32_t UI:1;                  /* USB Interrupt (USBINT) */
    } B;
  } USBSTS;

  union {                              /* USB Interrupt Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;                   /* Reserved */
      vuint32_t TIE1:1;                /* General purpose Timer 1 Interrupt Enable */
      vuint32_t TIE0:1;                /* General purpose Timer 0 Interrupt Enable */
      vuint32_t  :4;                   /* Reserved */
      vuint32_t UPIE:1;                /* USB host Periodic Interrupt Enable */
      vuint32_t UAIE:1;                /* USB host Asynchronous Interrupt Enable */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t NAKE:1;                /* NAK Interrupt Enable */
      vuint32_t  :4;                   /* Reserved */
      vuint32_t UALTIE:1;              /* ULPI alt_int Interrupt Enable. */
      vuint32_t ULPIE:1;               /* ULPI Enable */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t  :1;
      vuint32_t SRE:1;                 /* SOF-Received Enable */
      vuint32_t  :1;
      vuint32_t AAE:1;                 /* Interrupt on Async advance Enable */
      vuint32_t SEE:1;                 /* System Error Enable */
      vuint32_t FRE:1;                 /* Frame list Rollover Enable */
      vuint32_t PCE:1;                 /* Port Change detect Enable */
      vuint32_t UEE:1;                 /* USB Error interrupt Enable */
      vuint32_t UE:1;                  /* USB interrupt Enable */
    } B;
  } USBINTR;

  union {                              /* Frame Index Register */
    vuint32_t R;
    struct {
      vuint32_t  :18;                  /* Reserved */
      vuint32_t FRINDEX:14;            /* Frame Index */
    } B;
  } FRINDEX;

  uint8_t UHST_reserved5[4];
  union {                              /* Periodic Frame List Base Address Register */
    vuint32_t R;
    struct {
      vuint32_t BASEADR:20;            /* Base address */
      vuint32_t  :12;                  /* Reserved */
    } B;
  } PERIODICLISTBASE;

  union {                              /* Current Asynchronous List Address Register */
    vuint32_t R;
    struct {
      vuint32_t ASYBASE:27;            /* Link pointer low (LPL) */
      vuint32_t  :5;                   /* Reserved */
    } B;
  } ASYNCLISTADDR;

  uint8_t UHST_reserved6[4];
  union {                              /* Master Interface Data Burst Size Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;                  /* Reserved */
      vuint32_t TXPBURST:8;            /* Programable TX Burst length */
      vuint32_t RXPBURST:8;            /* Programable RX Burst length */
    } B;
  } BRSTSIZE;

  union {                              /* Transmit FIFO Tuning Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :10;                  /* Reserved */
      vuint32_t TXFIFOTHRES:6;         /* FIFO burst Threshold */
      vuint32_t  :3;                   /* Reserved */
      vuint32_t TXSCHHEALTH:5;         /* Scheduler Health counter */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t TXSCHOH:7;             /* Scheduler Overhead */
    } B;
  } TXTFLTNG;

  uint8_t UHST_reserved7[8];
  union {                              /* ULPI Register Access */
    vuint32_t R;
    struct {
      vuint32_t ULPI_WU:1;             /* ULPI Wake-Up */
      vuint32_t ULPI_RUN:1;            /* ULPI Run */
      vuint32_t ULPI_RW:1;             /* ULPI Read/Write */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ULPI_SS:1;             /* ULPI Sync State */
      vuint32_t ULPI_PORT:3;           /* ULPI Port number */
      vuint32_t ULPI_ADDR:8;           /* ULPI data Address */
      vuint32_t ULPI_DATRD:8;          /* ULPI Data Read */
      vuint32_t ULPI_DATWR:8;          /* ULPI Data Write */
    } B;
  } ULPIVWPT;

  uint8_t UHST_reserved8[12];
  union {                              /* Configure Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;                  /* Reserved */
      vuint32_t  :1;                   /* Reserved */
    } B;
  } CONFIGFLAG;

  union {                              /* Port Status and Control Registers */
    vuint32_t R;
    struct {
      vuint32_t PTS:2;                 /* Port Transceiver Select */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t PSPD:2;                /* Port Speed */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t PFSC:1;                /* Port force Full-Speed Connect */
      vuint32_t PHCD:1;                /* PHY low power suspend */
      vuint32_t WKOC:1;                /* Wake on Over-Current enable */
      vuint32_t WKDS:1;                /* Wake on Disconnect enable */
      vuint32_t WKCN:1;                /* Wake on Connect enable */
      vuint32_t PTC:4;                 /* Port Test Control */
      vuint32_t PIC:2;                 /* Port Indicator Control */
      vuint32_t PO:1;                  /* Port Owner */
      vuint32_t PP:1;                  /* Port Power */
      vuint32_t LS:2;                  /* Line Status */
      vuint32_t HSP:1;                 /* High Speed Port. */
      vuint32_t PR:1;                  /* Port Reset */
      vuint32_t SUSP:1;                /* Suspend */
      vuint32_t FPR:1;                 /* Force Port Resume */
      vuint32_t OCC:1;                 /* Over-Current Change */
      vuint32_t OCA:1;                 /* Over-current active */
      vuint32_t PEC:1;                 /* Port Enable/disable Change */
      vuint32_t PE:1;                  /* Port Enabled/disabled */
      vuint32_t CSC:1;                 /* Connect Change Status */
      vuint32_t CCS:1;                 /* Current Connect Status */
    } B;
  } PORTSC1;

  uint8_t UHST_reserved9[32];
  union {                              /* USB Mode Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;                   /* Reserved */
      vuint32_t ALP:8;                 /* Auto Low Power. */
      vuint32_t SRT:1;                 /* Shorten Reset Time. */
      vuint32_t TXHSD:3;               /* Tx to Tx HS Delay */
      vuint32_t  :7;                   /* Reserved */
      vuint32_t SDIS:1;                /* Stream DISable */
      vuint32_t  :1;
      vuint32_t ES:1;                  /* Endian Select */
      vuint32_t CM:2;                  /* Controller Mode */
    } B;
  } USBMODE;
};


/* ============================================================================
   =============================== Module: UHSTNC =============================
   ============================================================================ */

struct UHSTNC_tag {
  uint8_t UHSTNC_reserved0[512];
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t WAKEUPIS:1;            /* USB Wake up interrupt status. */
      vuint32_t PWRFLTDF:1;            /* VBUS Power Fault current value default. */
      vuint32_t PWRFLTEN:1;            /* Enable VBUS Power fault detection. */
      vuint32_t ENDNSEL:1;             /* Endian Selection of USB Master Port. */
      vuint32_t WAKEUPIC:1;            /* Clear USB Wake up interrupt. */
      vuint32_t  :2;
      vuint32_t PWRFLT:1;              /* Power fault infication. */
      vuint32_t CORE_IE:1;             /* Enable interrupt from core. */
      vuint32_t WAKEUP_IE:1;           /* Enable USB Wake up interrupt. */
    } B;
  } CR;

  uint8_t UHSTNC_reserved1[12];
  union {                              /* USB Endian Mode Select */
    vuint32_t R;
    struct {
      vuint32_t ENDNMODE:32;           /* Select endian mode. */
    } B;
  } ENDNMODE;

  uint8_t UHSTNC_reserved2[8];
  union {                              /* USB Endian Select */
    vuint32_t R;
    struct {
      vuint32_t ENDNMSEL:32;
    } B;
  } ENDNMSEL;
};


/* ============================================================================
   =============================== Module: UOTG ===============================
   ============================================================================ */

struct UOTG_tag {
  union {                              /* Identification register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t REVISION:8;
      vuint32_t  :2;
      vuint32_t NID:6;
      vuint32_t  :2;
      vuint32_t ID:6;                  /* Configuration number */
    } B;
  } ID;

  union {                              /* Hardware General */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t SM:2;
      vuint32_t PHYM:3;
      vuint32_t PHYW:2;
      vuint32_t  :4;
    } B;
  } GNLHW;

  union {                              /* Host Hardware Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t NPORT:3;
      vuint32_t HC:1;                  /* Host Capable */
    } B;
  } HSTHWP;

  union {                              /* Device Hardware Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t DEVEP:5;               /* Device Endpoint Number */
      vuint32_t DC:1;
    } B;
  } DEVHWP;

  union {                              /* TX Buffer Hardware Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t TXCHANADD:8;
      vuint32_t TXADD:8;
      vuint32_t TXBURST:8;
    } B;
  } TXBFP;

  union {                              /* RX Buffer Hardware Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t RXADD:8;
      vuint32_t RXBURST:8;
    } B;
  } RXBFP;

  uint8_t UOTG_reserved0[104];
  struct {
    union {                            /* General Purpose Timer Load */
      vuint32_t R;
      struct {
        vuint32_t  :8;
        vuint32_t GPTLD:24;            /* General Purpose Timer Load Value */
      } B;
    } LD;
    union {                            /* General Purpose Timer Controller */
      vuint32_t R;
      struct {
        vuint32_t GPTRUN:1;
        vuint32_t GPTRST:1;
        vuint32_t  :5;
        vuint32_t GPTMODE:1;           /* General Purpose Timer Mode */
        vuint32_t GPTCNT:24;           /* General Purpose Timer Counter */
      } B;
    } CL;
  } GPT[2];

  union {                              /* System Bus Configuration */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t BAWR:3;                /* AMBA Burst Alignment for Writes. */
      vuint32_t BARD:3;                /* AMBA Burst Alignment for Reads. */
      vuint32_t AHBBRST:3;
    } B;
  } SBUSCFG;

  uint8_t UOTG_reserved1[108];
  union {                              /* Capability Register Length */
    vuint8_t R;
    struct {
      vuint8_t CAPLENGTH:8;
    } B;
  } CAPLENGTH;

  uint8_t UOTG_reserved2[1];
  union {                              /* Host Controller Interface Version */
    vuint16_t R;
    struct {
      vuint16_t HCIVERSION:16;
    } B;
  } HCIVERSION;

  union {                              /* Host Controller Structural Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t N_TT:4;                /* Number of Transaction Translators */
      vuint32_t N_PTT:4;               /* Number of Ports per Transaction Translator */
      vuint32_t  :3;
      vuint32_t PI:1;                  /* Port Indicators */
      vuint32_t N_CC:4;                /* Number of Companion Controllers */
      vuint32_t N_PCC:4;
      vuint32_t  :3;
      vuint32_t PPCA:1;
      vuint32_t N_PORTS:4;             /* Number of downstream ports */
    } B;
  } HCSPARAMS;

  union {                              /* Host Controller Capability Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t EECP:8;
      vuint32_t IST:4;
      vuint32_t  :1;
      vuint32_t ASP:1;
      vuint32_t PFL:1;
      vuint32_t ADC:1;
    } B;
  } HCCPARAMS;

  uint8_t UOTG_reserved3[20];
  union {                              /* Device Controller Interface Version */
    vuint16_t R;
    struct {
      vuint16_t DCIFVER:16;
    } B;
  } DCIFVER;

  uint8_t UOTG_reserved4[2];
  union {                              /* Device Controller Capability Parameters */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t HC:1;
      vuint32_t DC:1;
      vuint32_t  :2;
      vuint32_t DEN:5;
    } B;
  } DCCAPPAR;

  uint8_t UOTG_reserved5[24];
  union {                              /* USB Command Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t ITC:8;                 /* Interrupt Threshold Control */
      vuint32_t FS1:1;                 /* Frame List Size */
      vuint32_t ATDTW:1;               /* Add dTD TripWire */
      vuint32_t SUTW:1;                /* Setup TripWire */
      vuint32_t  :1;
      vuint32_t ASPE:1;
      vuint32_t  :1;
      vuint32_t ASP:2;                 /* Asynchronous Schedule Park Mode Count */
      vuint32_t  :1;
      vuint32_t IAA:1;                 /* Interrupt on Async Advance Doorbell */
      vuint32_t ASE:1;                 /* Asynchronous Schedule Enable */
      vuint32_t PSE:1;                 /* Periodic Schedule Enable */
      vuint32_t FS0:2;
      vuint32_t RST:1;                 /* Controller Reset */
      vuint32_t RS:1;                  /* Run/Stop */
    } B;
  } USBCMD;

  union {                              /* USB Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;
      vuint32_t TI1:1;                 /* General Purpose Timer Interrupt 1 */
      vuint32_t TI0:1;                 /* General Purpose Timer Interrupt 0 */
      vuint32_t  :4;
      vuint32_t UPI:1;                 /* USB Host Periodic Interrupt */
      vuint32_t UAI:1;                 /* USB Host Asynchronous Interrupt */
      vuint32_t  :1;
      vuint32_t NAKI:1;                /* NAK Interrupt Bit */
      vuint32_t AS:1;                  /* Asynchronous Schedule Status */
      vuint32_t PS:1;                  /* Periodic Schedule Status */
      vuint32_t RCL:1;                 /* Reclamation */
      vuint32_t HCH:1;                 /* HC Halted */
      vuint32_t UALTI:1;               /* ULPI alt_int Interrupt */
      vuint32_t ULPII:1;               /* ULPI Interrupt */
      vuint32_t  :1;
      vuint32_t SLI:1;                 /* DC Suspend */
      vuint32_t SRI:1;                 /* SOF Received */
      vuint32_t URI:1;                 /* USB Reset Received */
      vuint32_t AAI:1;                 /* Interrupt on Async Advance */
      vuint32_t SEI:1;                 /* System Error */
      vuint32_t FRI:1;                 /* Frame List Rollover */
      vuint32_t PCI:1;                 /* Port Change Detect */
      vuint32_t UEI:1;                 /* USB Error Interrupt */
      vuint32_t UI:1;                  /* USB Interrupt */
    } B;
  } USBSTS;

  union {                              /* Interrupt Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;
      vuint32_t TIE1:1;
      vuint32_t TIE0:1;
      vuint32_t  :4;
      vuint32_t UPIE:1;
      vuint32_t UAIE:1;
      vuint32_t  :1;
      vuint32_t NAKE:1;
      vuint32_t  :5;
      vuint32_t ULPIE:1;
      vuint32_t  :1;
      vuint32_t SLE:1;
      vuint32_t SRE:1;
      vuint32_t URE:1;
      vuint32_t AAE:1;
      vuint32_t SEE:1;
      vuint32_t FRE:1;
      vuint32_t PCE:1;
      vuint32_t UEE:1;
      vuint32_t UE:1;
    } B;
  } USBINTR;

  union {                              /* USB Frame Index */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t FRINDEX:14;
    } B;
  } FRINDEX;

  uint8_t UOTG_reserved6[4];
  union {
    union {                            /* Device Address */
      vuint32_t R;
      struct {
        vuint32_t USBADR:7;
        vuint32_t USBADRA:1;           /* Device Address Advance */
        vuint32_t  :24;
      } B;
    } DEVADR;
    union {                            /* Frame List Base Address */
      vuint32_t R;
      struct {
        vuint32_t BASEADR:20;
        vuint32_t  :12;
      } B;
    } PERIODICLISTBASE;
  } ADDRESS1;

  union {
    union {                            /* Next Asynch. Address */
      vuint32_t R;
      struct {
        vuint32_t ASYBASE:27;
        vuint32_t  :5;
      } B;
    } ASYNCLISTADDR;
    union {                            /* Endpoint List Address */
      vuint32_t R;
      struct {
        vuint32_t EPBASE:21;           /* Endpoint List Pointer(Low) */
        vuint32_t  :11;
      } B;
    } ENDPLADR;
  } ADDRESS2;

  uint8_t UOTG_reserved7[4];
  union {                              /* Programmable Burst Size */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPBURST:8;
      vuint32_t RXPBURST:8;
    } B;
  } BRSTSIZE;

  union {                              /* TX FIFO Fill Tuning */
    vuint32_t R;
    struct {
      vuint32_t  :10;
      vuint32_t TXFIFOTHRES:6;         /* FIFO Burst Threshold */
      vuint32_t  :3;
      vuint32_t TXSCHHEALTH:5;         /* Scheduler Health Counter */
      vuint32_t TXSCHOH:8;             /* Scheduler Overhead */
    } B;
  } TXTFLTNG;

  uint8_t UOTG_reserved8[4];
  union {                              /* IC_USB enable and voltage negotiation */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t IC1:1;
      vuint32_t IC_VDD1:3;
    } B;
  } ICUSBEN;

  union {                              /* ULPI Register Access */
    vuint32_t R;
    struct {
      vuint32_t ULPI_WU:1;             /* ULPI Wake-Up */
      vuint32_t ULPI_RUN:1;            /* ULPI Run */
      vuint32_t ULPI_RW:1;             /* ULPI Read/Write */
      vuint32_t  :1;                   /* Reserved */
      vuint32_t ULPI_SS:1;             /* ULPI Sync State */
      vuint32_t ULPI_PORT:3;           /* ULPI Port number */
      vuint32_t ULPI_ADDR:8;           /* ULPI data Address */
      vuint32_t ULPI_DATRD:8;          /* ULPI Data Read */
      vuint32_t ULPI_DATWR:8;          /* ULPI Data Write */
    } B;
  } ULPIVWPT;

  uint8_t UOTG_reserved9[4];
  union {                              /* Endpoint NAK */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t EPTN:4;                /* TX Endpoint NAK */
      vuint32_t  :12;
      vuint32_t EPRN:4;                /* RX Endpoint NAK */
    } B;
  } ENDPNAK;

  union {                              /* Endpoint NAK Enable */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t EPTNE:4;               /* TX Endpoint NAK Enable */
      vuint32_t  :12;
      vuint32_t EPRNE:4;               /* RX Endpoint NAK Enable */
    } B;
  } ENDPNAKE;

  union {                              /* Configure Flag Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;                  /* Reserved */
      vuint32_t  :1;                   /* Reserved */
    } B;
  } CONFIGFLAG;

  union {                              /* Port Status and Control */
    vuint32_t R;
    struct {
      vuint32_t PTS1:2;                /* Parallel Transceiver Select */
      vuint32_t STS:1;                 /* Serial Transceiver Select */
      vuint32_t PTW:1;                 /* Parallel Transceiver Width */
      vuint32_t PSPD:2;                /* Port Speed */
      vuint32_t PTS0:1;
      vuint32_t PFSC:1;                /* Port Force Full Speed Connect */
      vuint32_t PHCD:1;                /* PHY Low Power Suspend - Clock Disable */
      vuint32_t WKOC:1;                /* Wake on Over-current Enable */
      vuint32_t WKDS:1;                /* Wake on Disconnect Enable */
      vuint32_t WKCN:1;                /* Wake on Connect Enable */
      vuint32_t PTC:4;                 /* Port Test Control */
      vuint32_t PIC:2;                 /* Port Indicator Control */
      vuint32_t PO:1;                  /* Port Owner */
      vuint32_t PP:1;
      vuint32_t LS:2;                  /* Line Status */
      vuint32_t HSP:1;                 /* High-Speed Port */
      vuint32_t PR:1;                  /* Port Reset */
      vuint32_t SUSP:1;                /* Suspend */
      vuint32_t FPR:1;                 /* Force Port Resume */
      vuint32_t OCC:1;                 /* Over-current Change */
      vuint32_t OCA:1;                 /* Over-current Active */
      vuint32_t PEC:1;                 /* Port Enable/Disable Change */
      vuint32_t PE:1;                  /* Port Enabled/Disabled */
      vuint32_t CSC:1;                 /* Connect Status Change */
      vuint32_t CCS:1;                 /* Current Connect Status */
    } B;
  } PORTSC1;

  uint8_t UOTG_reserved10[28];
  union {                              /* On-The-Go Status Control */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t DPIE:1;
      vuint32_t TIMIE:1;               /* One-millisecond timer interrupt enable */
      vuint32_t BSEIE:1;               /* B Session End Interrupt Enable */
      vuint32_t BSVIE:1;               /* B Session Valid Interrupt Enable */
      vuint32_t ASVIE:1;               /* A Session Valid Interrupt Enable */
      vuint32_t AVVIE:1;               /* A VBus Valid Interrupt Enable */
      vuint32_t IDIE:1;                /* USB ID Interrupt Enable */
      vuint32_t  :1;
      vuint32_t DPIS:1;                /* Data Pulse Interrupt Status */
      vuint32_t TIMIS:1;               /* One-millisecond timer interrupt status */
      vuint32_t BSEIS:1;               /* B Session End Interrupt Status */
      vuint32_t BSVIS:1;               /* B Session Valid Interrupt Status */
      vuint32_t ASVIS:1;               /* A Session Valid Interrupt Status */
      vuint32_t AVVIS:1;               /* A VBus Valid Interrupt Status */
      vuint32_t IDIS:1;                /* USB ID Interrupt Status */
      vuint32_t  :1;
      vuint32_t DPS:1;                 /* Data Bus Pulsing Status */
      vuint32_t TIM_TOG:1;             /* One-millisecond timer toggle */
      vuint32_t BSE:1;                 /* B Session End */
      vuint32_t BSV:1;                 /* B Session Valid */
      vuint32_t ASV:1;                 /* A Session Valid */
      vuint32_t AVV:1;                 /* A VBus Valid */
      vuint32_t ID:1;                  /* USB ID */
      vuint32_t HABA:1;                /* Hardware Assist B-Disconnect to A-connect. */
      vuint32_t HADP:1;                /* HADP Hardware Assist Data. */
      vuint32_t IDPU:1;                /* ID Pullup */
      vuint32_t DP:1;                  /* Data Pulsing. */
      vuint32_t OT:1;                  /* OTG Termination */
      vuint32_t HAAR:1;                /* Hardware Assist Auto-Reset. */
      vuint32_t VC:1;                  /* VBUS Charge */
      vuint32_t VD:1;                  /* VBUS Discharge */
    } B;
  } OTGSC;

  union {                              /* USB Device Mode */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t ALP:8;                 /* Auto Low Power */
      vuint32_t SRT:1;                 /* Shorten Reset Time */
      vuint32_t TXHSD:4;               /* Tx to Tx HS Delay. */
      vuint32_t  :6;
      vuint32_t SDIS:1;                /* Stream Disable Mode */
      vuint32_t SLOM:1;                /* Setup Lockout Mode */
      vuint32_t ES:1;                  /* Endian Select */
      vuint32_t CM:2;                  /* Controller Mode */
    } B;
  } USBDMODE;

  union {                              /* Endpoint Setup Status */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t ENPSTPST:16;           /* Setup Endpoint Status */
    } B;
  } ENPSTPST;

  union {                              /* Endpoint Initialization */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t PETB:4;                /* Prime Endpoint Transmit Buffer */
      vuint32_t  :12;
      vuint32_t PERB:4;                /* Prime Endpoint Receive Buffer */
    } B;
  } ENDPINT;

  union {                              /* Endpoint De-Initialize */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t FETB:4;                /* Flush Endpoint Transmit Buffer */
      vuint32_t  :12;
      vuint32_t FERB:4;                /* Flush Endpoint Receive Buffer */
    } B;
  } ENDPDINT;

  union {                              /* Endpoint Status */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t ETBR:4;                /* Endpoint Transmit Buffer Ready */
      vuint32_t  :12;
      vuint32_t ERBR:4;                /* Endpoint Receive Buffer Ready */
    } B;
  } ENDPST;

  union {                              /* Endpoint Complete */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t ETCE:4;                /* Endpoint Transmit Complete Event */
      vuint32_t  :12;
      vuint32_t ERCE:4;                /* Endpoint Receive Complete Event */
    } B;
  } ENPCPLT;

  union {                              /* Endpoint Control 0 */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t TXE:1;
      vuint32_t  :3;
      vuint32_t TXT:2;                 /* TX Endpoint Type */
      vuint32_t  :1;
      vuint32_t TXS:1;                 /* TX Endpoint Stall */
      vuint32_t  :8;
      vuint32_t RXE:1;
      vuint32_t  :3;
      vuint32_t RXT:2;                 /* RX Endpoint Type */
      vuint32_t  :1;
      vuint32_t RXS:1;                 /* RX Endpoint Stall */
    } B;
  } ENDPTC0;

  union {                              /* Endpoint Control */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t TXE:1;
      vuint32_t TXR:1;                 /* TX Data Toggle Reset */
      vuint32_t TXI:1;
      vuint32_t  :1;
      vuint32_t TXT:2;
      vuint32_t TXD:1;
      vuint32_t TXS:1;
      vuint32_t  :8;
      vuint32_t RXE:1;
      vuint32_t RXR:1;                 /* RX Data Toggle Reset */
      vuint32_t RXI:1;                 /* RX Data Toggle Inhibit */
      vuint32_t  :1;
      vuint32_t RXT:2;                 /* RX Endpoint Type */
      vuint32_t RXD:1;                 /* RX Endpoint Data Sink */
      vuint32_t RXS:1;                 /* RX Endpoint Stall */
    } B;
  } ENDPTC[4];
};


/* ============================================================================
   =============================== Module: UOTGNC =============================
   ============================================================================ */

struct UOTGNC_tag {
  uint8_t UOTGNC_reserved0[512];
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t WAKEUPIS:1;            /* USB wake up interrupt status */
      vuint32_t PWRFLTDF:1;            /* Vbus power fault current value default */
      vuint32_t PWRFLTEN:1;            /* Enable Vbus power fault detection */
      vuint32_t ENDNSEL:1;             /* Endian selection of USB master port */
      vuint32_t WAKEUPIC:1;            /* Clear USB wake up interrupt */
      vuint32_t  :2;
      vuint32_t PWRFLT:1;              /* Power fault indication */
      vuint32_t CORE_IE:1;             /* Enable interrupt from core */
      vuint32_t WAKEUP_IE:1;           /* USB wake up interrupt enable */
    } B;
  } CR;

  uint8_t UOTGNC_reserved1[12];
  union {                              /* USB Endian Mode Select */
    vuint32_t R;
    struct {
      vuint32_t ENDNMODE:32;           /* Select endian mode */
    } B;
  } ENDNMODE;

  uint8_t UOTGNC_reserved2[8];
  union {                              /* USB endian select */
    vuint32_t R;
    struct {
      vuint32_t ENDNMSEL:32;
    } B;
  } ENDNMSEL;
};


/* ============================================================================
   =============================== Module: WKPU ===============================
   ============================================================================ */

struct WKPU_tag {
  union {                              /* NMI Status Flag Register */
    vuint32_t R;
    struct {
      vuint32_t NIF0:1;
      vuint32_t NOVF0:1;
      vuint32_t  :6;
      vuint32_t NIF1:1;
      vuint32_t NOVF1:1;
      vuint32_t  :6;
      vuint32_t NIF2:1;
      vuint32_t NOVF2:1;
      vuint32_t  :6;
      vuint32_t RIF:1;                 /* Reset Status Flag */
      vuint32_t ROVF:1;                /* Reset Overrun Status Flag */
      vuint32_t  :6;
    } B;
  } NSR;

  uint8_t WKPU_reserved0[4];
  union {                              /* NMI Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t NLOCK0:1;
      vuint32_t NDSS0:2;
      vuint32_t NWRE0:1;
      vuint32_t  :1;
      vuint32_t NREE0:1;
      vuint32_t NFEE0:1;
      vuint32_t NFE0:1;
      vuint32_t NLOCK1:1;
      vuint32_t NDSS1:2;
      vuint32_t NWRE1:1;
      vuint32_t  :1;
      vuint32_t NREE1:1;
      vuint32_t NFEE1:1;
      vuint32_t  :1;
      vuint32_t NLOCK2:1;
      vuint32_t NDSS2:2;
      vuint32_t NWRE2:1;
      vuint32_t  :1;
      vuint32_t NREE2:1;
      vuint32_t NFEE2:1;
      vuint32_t  :1;
      vuint32_t RLOCK:1;
      vuint32_t RDSS:2;
      vuint32_t RWRE:1;
      vuint32_t  :1;
      vuint32_t RREE:1;
      vuint32_t RFEE:1;
      vuint32_t  :1;
    } B;
  } NCR;

  uint8_t WKPU_reserved1[8];
  union {                              /* Wakeup/Interrupt Status Flag Register */
    vuint32_t R;
    struct {
      vuint32_t EIF:32;
    } B;
  } WISR;

  union {                              /* Interrupt Request Enable Register */
    vuint32_t R;
    struct {
      vuint32_t EIRE:32;
    } B;
  } IRER;

  union {                              /* Wakeup Request Enable Register */
    vuint32_t R;
    struct {
      vuint32_t WRE:32;
    } B;
  } WRER;

  uint8_t WKPU_reserved2[8];
  union {                              /* Wakeup/Interrupt Rising-Edge Event Enable Register */
    vuint32_t R;
    struct {
      vuint32_t IREE:32;
    } B;
  } WIREER;

  union {                              /* Wakeup/Interrupt Falling-Edge Event Enable Register */
    vuint32_t R;
    struct {
      vuint32_t IFEEx:32;
    } B;
  } WIFEER;

  union {                              /* Wakeup/Interrupt Filter Enable Register */
    vuint32_t R;
    struct {
      vuint32_t IFE:32;
    } B;
  } WIFER;

  union {                              /* Wakeup/Interrupt Pullup Enable Register */
    vuint32_t R;
    struct {
      vuint32_t IPUE:32;
    } B;
  } WIPUER;
};


/* ============================================================================
   =============================== Module: eMIOS ==============================
   ============================================================================ */

struct eMIOS_tag {
  union {                              /* eMIOS Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t MDIS:1;                /* Module Disable bit. */
      vuint32_t FRZ:1;                 /* Freeze bit. */
      vuint32_t GTBE:1;                /* Global Time Base Enable bit. */
      vuint32_t ETB:1;                 /* External Time Base bit */
      vuint32_t GPREN:1;               /* Global Prescaler Enable bit. */
      vuint32_t  :6;                   /* Reserved. */
      vuint32_t  :4;                   /* Reserved. */
      vuint32_t GPRE:8;                /* Global Prescaler bits. */
      vuint32_t  :8;                   /* Reserved. */
    } B;
  } MCR;

  union {                              /* eMIOS Global FLAG Register */
    vuint32_t R;
    struct {
      vuint32_t F31_F0:32;             /* Channel [n] mirrored FLAG bit. */
    } B;
  } GFLAG;

  union {                              /* eMIOS Output Update Disable register */
    vuint32_t R;
    struct {
      vuint32_t OU31_OU0:32;           /* Channel [n] Output Update Disable bit. */
    } B;
  } OUDIS;

  union {                              /* eMIOS Disable Channel register */
    vuint32_t R;
    struct {
      vuint32_t CHDIS31_CHDIS0:32;     /* Enable Channel n bit. */
    } B;
  } UCDIS;
};


/* ============================================================================
   =============================== Module: eMIOS_UC ===========================
   ============================================================================ */

struct eMIOS_UC_tag {
  uint8_t eMIOS_reserved0[32];
  struct {
    union {                            /* eMIOS UC A register n */
      vuint32_t R;
      struct {
        vuint32_t  :8;                 /* Reserved. */
        vuint32_t A:24;
      } B;
    } A;
    union {                            /* eMIOS UC B register n */
      vuint32_t R;
      struct {
        vuint32_t  :8;                 /* Reserved. */
        vuint32_t B:24;                /* See text above register figure. */
      } B;
    } B;
    union {                            /* eMIOS CNT register n */
      vuint32_t R;
      struct {
        vuint32_t  :16;                /* Reserved. */
        vuint32_t C:16;                /* The C field contains the value of the internal counter. */
      } B;
    } CNT;
    union {                            /* eMIOS UC Control register n */
      vuint32_t R;
      struct {
        vuint32_t FREN:1;              /* Freeze Enable bit. */
        vuint32_t ODIS:1;              /* Output Disable bit. */
        vuint32_t ODISSL:2;            /* Output Disable select bits. */
        vuint32_t UCPRE:2;             /* Prescaler bits. */
        vuint32_t UCPREN:1;            /* Prescaler Enable bit. */
        vuint32_t DMA:1;               /* Direct Memory Access bit. */
        vuint32_t  :1;                 /* Reserved. */
        vuint32_t IF:4;                /* Input Filter bits. */
        vuint32_t FCK:1;               /* Filter Clock select bit. */
        vuint32_t FEN:1;               /* FLAG Enable bit. */
        vuint32_t  :3;                 /* Reserved. */
        vuint32_t FORCMA:1;            /* Force Match A bit. */
        vuint32_t FORCMB:1;            /* Force Match B bit. */
        vuint32_t  :1;                 /* Reserved. */
        vuint32_t BSL:2;               /* Bus Select bits. */
        vuint32_t EDSEL:1;             /* Edge Selection bit. */
        vuint32_t EDPOL:1;             /* Edge Polarity bit. */
        vuint32_t MODE:7;              /* Mode selection bits. */
      } B;
    } C;
    union {                            /* eMIOS UC Status register n */
      vuint32_t R;
      struct {
        vuint32_t OVR:1;               /* Overrun bit. */
        vuint32_t  :15;                /* Reserved. */
        vuint32_t OVFL:1;              /* Overflow bit. */
        vuint32_t  :12;                /* Reserved. */
        vuint32_t UCIN:1;              /* Unified Channel Input pin bit. */
        vuint32_t UCOUT:1;             /* Unified Channel Output pin bit. */
        vuint32_t FLAG:1;              /* FLAG bit. */
      } B;
    } S;
    union {                            /* eMIOS Alternate Address register n */
      vuint32_t R;
      struct {
        vuint32_t  :8;                 /* Reserved. */
        vuint32_t ALTA:24;             /* See text above register figure. */
      } B;
    } ALTA;
    union {                            /* eMIOS UC Control 2 register n */
      vuint32_t R;
      struct {
        vuint32_t  :12;                /* Reserved. */
        vuint32_t UCEXTPRE:4;          /* Extended Prescaler bits [ 0:11 ]. */
        vuint32_t  :1;                 /* Reserved. */
        vuint32_t UCPRECLK:1;          /* Prescaler Clock select bit. */
        vuint32_t  :14;                /* Reserved. */
      } B;
    } C2;
    uint8_t UC_reserved0[4];
  } UC[32];
};

#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
#pragma GCC diagnostic pop												/* } */
#endif


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_3_H_ */
