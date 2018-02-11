/** @file MPC5748G_types_4.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_4_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_4_H_

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
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_4_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* ============================================================================
   =============================== Module: uSDHC ==============================
   ============================================================================ */

struct uSDHC_tag {
  union {                              /* DMA System Address */
    vuint32_t R;
    struct {
      vuint32_t DS_ADDR:30;
      vuint32_t  :2;
    } B;
  } DS_ADDR;

  union {                              /* Block Attributes */
    vuint32_t R;
    struct {
      vuint32_t BLKCNT:16;
      vuint32_t  :3;
      vuint32_t BLKSIZE:13;
    } B;
  } BLK_ATT;

  union {                              /* Command Argument */
    vuint32_t R;
    struct {
      vuint32_t CMDARG:32;
    } B;
  } CMD_ARG;

  union {                              /* Command Transfer Type */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t CMDINX:6;
      vuint32_t CMDTYP:2;
      vuint32_t DPSEL:1;
      vuint32_t CICEN:1;
      vuint32_t CCCEN:1;
      vuint32_t  :1;
      vuint32_t RSPTYP:2;
      vuint32_t  :16;
    } B;
  } CMD_XFR_TYP;

  union {                              /* Command Response0 */
    vuint32_t R;
    struct {
      vuint32_t CMDRSP0:32;
    } B;
  } CMD_RSP0;

  union {                              /* Command Response1 */
    vuint32_t R;
    struct {
      vuint32_t CMDRSP1:32;
    } B;
  } CMD_RSP1;

  union {                              /* Command Response2 */
    vuint32_t R;
    struct {
      vuint32_t CMDRSP2:32;
    } B;
  } CMD_RSP2;

  union {                              /* Command Response3 */
    vuint32_t R;
    struct {
      vuint32_t CMDRSP3:32;
    } B;
  } CMD_RSP3;

  union {                              /* Data Buffer Access Port */
    vuint32_t R;
    struct {
      vuint32_t DATCONT:32;
    } B;
  } DATA_BUFF_ACC_PORT;

  union {                              /* Present State */
    vuint32_t R;
    struct {
      vuint32_t DLSL:8;
      vuint32_t CLSL:1;
      vuint32_t  :3;
      vuint32_t WPSPL:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t CINST:1;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t BREN:1;
      vuint32_t BWEN:1;
      vuint32_t RTA:1;
      vuint32_t WTA:1;
      vuint32_t SDOFF:1;
      vuint32_t PEROFF:1;
      vuint32_t HCKOFF:1;
      vuint32_t BUSOFF:1;
      vuint32_t SDSTB:1;
      vuint32_t DLA:1;
      vuint32_t CDIHB:1;
      vuint32_t CIHB:1;
    } B;
  } PRES_STATE;

  union {                              /* Protocol Control */
    vuint32_t R;
    struct {
      vuint32_t RD_NO8CLK_EN:1;
      vuint32_t NON_EXACT_BLK_RD:1;
      vuint32_t BURST_LEN_EN:3;
      vuint32_t WECRM:1;
      vuint32_t WECINS:1;
      vuint32_t WECINT:1;
      vuint32_t RD_WAIT_POINT:3;
      vuint32_t RD_DONE_NO_8CLK:1;
      vuint32_t IABG:1;
      vuint32_t RWCTL:1;
      vuint32_t CREQ:1;
      vuint32_t SABGREQ:1;
      vuint32_t  :6;
      vuint32_t DMASEL:2;
      vuint32_t CDSS:1;
      vuint32_t CDTL:1;
      vuint32_t EMODE:2;
      vuint32_t D3CD:1;
      vuint32_t DTW:2;
      vuint32_t LCTL:1;
    } B;
  } PROT_CTRL;

  union {                              /* System Control */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t RSTT:1;
      vuint32_t INITA:1;
      vuint32_t RSTD:1;
      vuint32_t RSTC:1;
      vuint32_t RSTA:1;
      vuint32_t IPP_RST_N:1;
      vuint32_t RST_FIFO:1;
      vuint32_t  :2;
      vuint32_t DTOCV:4;
      vuint32_t SDCLKFS:8;
      vuint32_t DVS:4;
      vuint32_t  :4;
    } B;
  } SYS_CTRL;

  union {                              /* Interrupt Status */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t DMAE:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AC12E:1;
      vuint32_t  :1;
      vuint32_t DEBE:1;
      vuint32_t DCE:1;
      vuint32_t DTOE:1;
      vuint32_t CIE:1;
      vuint32_t CEBE:1;
      vuint32_t CCE:1;
      vuint32_t CTOE:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t CINT:1;
      vuint32_t CRM:1;
      vuint32_t CINS:1;
      vuint32_t BRR:1;
      vuint32_t BWR:1;
      vuint32_t DINT:1;
      vuint32_t BGE:1;
      vuint32_t TC:1;
      vuint32_t CC:1;
    } B;
  } INT_STATUS;

  union {                              /* Interrupt Status Enable */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t DMAESEN:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AC12ESEN:1;
      vuint32_t  :1;
      vuint32_t DEBESEN:1;
      vuint32_t DCESEN:1;
      vuint32_t DTOESEN:1;
      vuint32_t CIESEN:1;
      vuint32_t CEBESEN:1;
      vuint32_t CCESEN:1;
      vuint32_t CTOESEN:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t CINTSEN:1;
      vuint32_t CRMSEN:1;
      vuint32_t CINSSEN:1;
      vuint32_t BRRSEN:1;
      vuint32_t BWRSEN:1;
      vuint32_t DINTSEN:1;
      vuint32_t BGESEN:1;
      vuint32_t TCSEN:1;
      vuint32_t CCSEN:1;
    } B;
  } INT_STATUS_EN;

  union {                              /* Interrupt Signal Enable */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t DMAEIEN:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t AC12EIEN:1;
      vuint32_t  :1;
      vuint32_t DEBEIEN:1;
      vuint32_t DCEIEN:1;
      vuint32_t DTOEIEN:1;
      vuint32_t CIEIEN:1;
      vuint32_t CEBEIEN:1;
      vuint32_t CCEIEN:1;
      vuint32_t CTOEIEN:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :3;
      vuint32_t CINTIEN:1;
      vuint32_t CRMIEN:1;
      vuint32_t CINSIEN:1;
      vuint32_t BRRIEN:1;
      vuint32_t BWRIEN:1;
      vuint32_t DINTIEN:1;
      vuint32_t BGEIEN:1;
      vuint32_t TCIEN:1;
      vuint32_t CCIEN:1;
    } B;
  } INT_SIGNAL_EN;

  union {                              /* Auto CMD12 Error Status */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t  :1;
      vuint32_t EXECUTE_TUNING:1;
      vuint32_t  :14;
      vuint32_t CNIBAC12E:1;
      vuint32_t  :2;
      vuint32_t AC12IE:1;
      vuint32_t AC12CE:1;
      vuint32_t AC12EBE:1;
      vuint32_t AC12TOE:1;
      vuint32_t AC12NE:1;
    } B;
  } AUTOCMD12_ERR_STATUS;

  union {                              /* Host Controller Capabilities */
    vuint32_t R;
    struct {
      vuint32_t  :5;
      vuint32_t VS18:1;
      vuint32_t VS30:1;
      vuint32_t VS33:1;
      vuint32_t SRS:1;
      vuint32_t DMAS:1;
      vuint32_t HSS:1;
      vuint32_t ADMAS:1;
      vuint32_t  :1;
      vuint32_t MBL:3;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :4;
      vuint32_t  :5;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } HOST_CTRL_CAP;

  union {                              /* Watermark Level */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t WR_BRST_LEN:5;
      vuint32_t WR_WML:8;
      vuint32_t  :3;
      vuint32_t RD_BRST_LEN:5;
      vuint32_t RD_WML:8;
    } B;
  } WTMK_LVL;

  union {                              /* Mixer Control */
    vuint32_t R;
    struct {
      vuint32_t CMD_DMY_EN:1;
      vuint32_t CMD_DMY_WAIT_CFG:1;
      vuint32_t AC12_RD_POINT:1;
      vuint32_t  :3;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :14;
      vuint32_t AC23EN:1;
      vuint32_t  :1;
      vuint32_t MSBSEL:1;
      vuint32_t DTDSEL:1;
      vuint32_t  :1;
      vuint32_t AC12EN:1;
      vuint32_t BCEN:1;
      vuint32_t DMAEN:1;
    } B;
  } MIX_CTRL;

  uint8_t uSDHC_reserved0[4];
  union {                              /* Force Event */
    vuint32_t R;
    struct {
      vuint32_t FEVTCINT:1;
      vuint32_t  :2;
      vuint32_t FEVTDMAE:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t FEVTAC12E:1;
      vuint32_t  :1;
      vuint32_t FEVTDEBE:1;
      vuint32_t FEVTDCE:1;
      vuint32_t FEVTDTOE:1;
      vuint32_t FEVTCIE:1;
      vuint32_t FEVTCEBE:1;
      vuint32_t FEVTCCE:1;
      vuint32_t FEVTCTOE:1;
      vuint32_t  :8;
      vuint32_t FEVTCNIBAC12E:1;
      vuint32_t  :2;
      vuint32_t FEVTAC12IE:1;
      vuint32_t FEVTAC12EBE:1;
      vuint32_t FEVTAC12CE:1;
      vuint32_t FEVTAC12TOE:1;
      vuint32_t FEVTAC12NE:1;
    } B;
  } FORCE_EVENT;

  union {                              /* ADMA Error Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t ADMADCE:1;
      vuint32_t ADMALME:1;
      vuint32_t ADMAES:2;
    } B;
  } ADMA_ERR_STATUS;

  union {                              /* ADMA System Address */
    vuint32_t R;
    struct {
      vuint32_t ADS_ADDR:30;
      vuint32_t  :2;
    } B;
  } ADMA_SYS_ADDR;

  uint8_t uSDHC_reserved1[100];
  union {                              /* Vendor Specific Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t AC12_RD_CHKBUSY_EN:1;
      vuint32_t CMD_OE_PRE_EN:1;
      vuint32_t DBG_SEL:4;
      vuint32_t INT_ST_VAL:8;
      vuint32_t CRC_CHK_DIS:1;
      vuint32_t CARD_CLK_SOFT_EN:1;
      vuint32_t IPG_PERCLK_SOFT_EN:1;
      vuint32_t HCLK_SOFT_EN:1;
      vuint32_t BUS_CLK_SOFT_EN:1;
      vuint32_t  :1;
      vuint32_t AC12_ISNOT_ABORT:1;
      vuint32_t FRC_SDCLK_ON:1;
      vuint32_t CLKONJ_IN_ABORT:1;
      vuint32_t WP_POL:1;
      vuint32_t CD_POL:1;
      vuint32_t DAT3_CD_POL:1;
      vuint32_t AC12_WR_CHKBUSY_EN:1;
      vuint32_t CONFLICT_CHK_EN:1;
      vuint32_t VSELECT:1;
      vuint32_t EXT_DMA_EN:1;
    } B;
  } VEND_SPEC;

  uint8_t uSDHC_reserved2[4];
  union {                              /* Vendor Specific 2 Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t CARD_INT_AUTO_CLR_DIS:1;
      vuint32_t  :3;
      vuint32_t CARD_INT_D3_TEST:1;
      vuint32_t  :3;
    } B;
  } VEND_SPEC2;

  uint8_t uSDHC_reserved3[48];
  union {                              /* Host Controller Version */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t VVN:8;
      vuint32_t SVN:8;
    } B;
  } HOST_CTRL_VER;
};


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_4_H_ */
