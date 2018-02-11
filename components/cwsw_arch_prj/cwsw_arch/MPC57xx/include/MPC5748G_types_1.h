/** @file MPC5748G_types.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_1_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_1_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------

#if !defined(_TYPEDEFS_H_)
#error Need typedefs

#else

#endif


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* ============================================================================
   =============================== Module: ADC ================================
   ============================================================================ */

struct ADC_tag {
  union {                              /* Main Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t OWREN:1;               /* Overwrite enable. */
      vuint32_t WLSIDE:1;              /* Write Left/Right aligned. */
      vuint32_t MODE:1;                /* One_Shot/Scan. */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t NSTART:1;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t JSTART:1;              /* Injection start. */
      vuint32_t  :2;
      vuint32_t CTUEN:1;               /* Crosstrigger Unit Enable. */
      vuint32_t CTU_MODE:1;            /* Crosstrigger Unit MODE bit */
      vuint32_t  :1;
      vuint32_t  :6;
      vuint32_t ADCLKSEL:1;            /* Analog Clock frequency Selector. */
      vuint32_t ABORT_CHAIN:1;         /* Abort Chain. */
      vuint32_t ABORT:1;               /* Abort Conversion. */
      vuint32_t ACKO:1;                /* Auto clock off enable. */
      vuint32_t  :2;
      vuint32_t REFSEL:2;              /* Reference voltage selection for ADC analog part. */
      vuint32_t PWDN:1;                /* Power-down enable. */
    } B;
  } MCR;

  union {                              /* Main Status register */
    vuint32_t R;
    struct {
      vuint32_t CALIBRTD:1;            /* This bit indicates the ADC calibration status. */
      vuint32_t  :6;
      vuint32_t NSTART:1;              /* This status bit is used to signal that a Normal conversion is ongoing. */
      vuint32_t JABORT:1;
      vuint32_t  :2;
      vuint32_t JSTART:1;              /* This status bit is used to signal that an Injected conversion is ongoing. */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t CTUSTART:1;            /* This status bit is used to signal that a CTU conversion is ongoing. */
      vuint32_t CHADDR:7;              /* Channel under measure address. */
      vuint32_t  :3;
      vuint32_t ACKO:1;                /* Auto clock off enable. */
      vuint32_t  :2;
      vuint32_t ADCSTATUS:3;           /* Status of the ADC. */
    } B;
  } MSR;

  uint8_t ADC_reserved0[8];
  union {                              /* Interrupt Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t EOCTU:1;
      vuint32_t JEOC:1;                /* End of injected channel conversion. */
      vuint32_t JECH:1;                /* End of injected chain conversion. */
      vuint32_t EOC:1;                 /* End of channel conversion. */
      vuint32_t ECH:1;                 /* End of chain conversion. */
    } B;
  } ISR;

  union {                              /* Channel Pending register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t EOCCH15:1;             /* EOC Channel 15. */
      vuint32_t EOCCH14:1;             /* EOC Channel 14. */
      vuint32_t EOCCH13:1;             /* EOC Channel 13. */
      vuint32_t EOCCH12:1;             /* EOC Channel 12. */
      vuint32_t EOCCH11:1;             /* EOC Channel 11. */
      vuint32_t EOCCH10:1;             /* EOC Channel 10. */
      vuint32_t EOCCH9:1;              /* EOC Channel 9. */
      vuint32_t EOCCH8:1;              /* EOC Channel 8. */
      vuint32_t EOCCH7:1;              /* EOC Channel 7. */
      vuint32_t EOCCH6:1;              /* EOC Channel 6. */
      vuint32_t EOCCH5:1;              /* EOC Channel 5. */
      vuint32_t EOCCH4:1;              /* EOC Channel 4. */
      vuint32_t EOCCH3:1;              /* EOC Channel 3. */
      vuint32_t EOCCH2:1;              /* EOC Channel 2. */
      vuint32_t EOCCH1:1;              /* EOC Channel 1. */
      vuint32_t EOCCH0:1;              /* EOC Channel 0. */
    } B;
  } CEOCFR0;

  union {                              /* Channel Pending register 1 */
    vuint32_t R;
    struct {
      vuint32_t EOCCH63:1;             /* EOC Channel 63. */
      vuint32_t EOCCH62:1;             /* EOC Channel 62. */
      vuint32_t EOCCH61:1;             /* EOC Channel 61. */
      vuint32_t EOCCH60:1;             /* EOC Channel 60. */
      vuint32_t EOCCH59:1;             /* EOC Channel 59. */
      vuint32_t EOCCH58:1;             /* EOC Channel 58. */
      vuint32_t EOCCH57:1;             /* EOC Channel 57. */
      vuint32_t EOCCH56:1;             /* EOC Channel 56. */
      vuint32_t EOCCH55:1;             /* EOC Channel 55. */
      vuint32_t EOCCH54:1;             /* EOC Channel 54. */
      vuint32_t EOCCH53:1;             /* EOC Channel 53. */
      vuint32_t EOCCH52:1;             /* EOC Channel 52. */
      vuint32_t EOCCH51:1;             /* EOC Channel 51. */
      vuint32_t EOCCH50:1;             /* EOC Channel 50. */
      vuint32_t EOCCH49:1;             /* EOC Channel 49. */
      vuint32_t EOCCH48:1;             /* EOC Channel 48 */
      vuint32_t EOCCH47:1;             /* EOC Channel 47. */
      vuint32_t EOCCH46:1;             /* EOC Channel 46. */
      vuint32_t EOCCH45:1;             /* EOC Channel 45. */
      vuint32_t EOCCH44:1;             /* EOC Channel 44. */
      vuint32_t EOCCH43:1;             /* EOC Channel 43. */
      vuint32_t EOCCH42:1;             /* EOC Channel 42. */
      vuint32_t EOCCH41:1;             /* EOC Channel 41. */
      vuint32_t EOCCH40:1;             /* EOC Channel 40. */
      vuint32_t EOCCH39:1;             /* EOC Channel 39. */
      vuint32_t EOCCH38:1;             /* EOC Channel 38. */
      vuint32_t EOCCH37:1;             /* EOC Channel 37. */
      vuint32_t EOCCH36:1;             /* EOC Channel 36. */
      vuint32_t EOCCH35:1;             /* EOC Channel 35. */
      vuint32_t EOCCH34:1;             /* EOC Channel 34. */
      vuint32_t EOCCH33:1;             /* EOC Channel 33. */
      vuint32_t EOCCH32:1;             /* EOC Channel 32. */
    } B;
  } CEOCFR1;

  union {                              /* Channel Pending register 2 */
    vuint32_t R;
    struct {
      vuint32_t EOCCH95:1;             /* EOC Channel 95. */
      vuint32_t EOCCH94:1;             /* EOC Channel 94. */
      vuint32_t EOCCH93:1;             /* EOC Channel 93. */
      vuint32_t EOCCH92:1;             /* EOC Channel 92. */
      vuint32_t EOCCH91:1;             /* EOC Channel 91. */
      vuint32_t EOCCH90:1;             /* EOC Channel 90. */
      vuint32_t EOCCH89:1;             /* EOC Channel 89. */
      vuint32_t EOCCH88:1;             /* EOC Channel 88. */
      vuint32_t EOCCH87:1;             /* EOC Channel 87. */
      vuint32_t EOCCH86:1;             /* EOC Channel 86. */
      vuint32_t EOCCH85:1;             /* EOC Channel 85. */
      vuint32_t EOCCH84:1;             /* EOC Channel 84. */
      vuint32_t EOCCH83:1;             /* EOC Channel 83. */
      vuint32_t EOCCH82:1;             /* EOC Channel 82. */
      vuint32_t EOCCH81:1;             /* EOC Channel 81. */
      vuint32_t EOCCH80:1;             /* EOC Channel 80. */
      vuint32_t EOCCH79:1;             /* EOC Channel 79. */
      vuint32_t EOCCH78:1;             /* EOC Channel 78. */
      vuint32_t EOCCH77:1;             /* EOC Channel 77. */
      vuint32_t EOCCH76:1;             /* EOC Channel 76. */
      vuint32_t EOCCH75:1;             /* EOC Channel 75. */
      vuint32_t EOCCH74:1;             /* EOC Channel 74. */
      vuint32_t EOCCH73:1;             /* EOC Channel 73. */
      vuint32_t EOCCH72:1;             /* EOC Channel 72. */
      vuint32_t EOCCH71:1;             /* EOC Channel 71. */
      vuint32_t EOCCH70:1;             /* EOC Channel 70. */
      vuint32_t EOCCH69:1;             /* EOC Channel 69. */
      vuint32_t EOCCH68:1;             /* EOC Channel 68. */
      vuint32_t EOCCH67:1;             /* EOC Channel 67. */
      vuint32_t EOCCH66:1;             /* EOC Channel 66. */
      vuint32_t EOCCH65:1;             /* EOC Channel 65. */
      vuint32_t EOCCH64:1;             /* EOC Channel 64. */
    } B;
  } CEOCFR2;

  union {                              /* Interrupt Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t  :1;
      vuint32_t  :10;
      vuint32_t MSKEOCTU:1;            /* Mask bit for EOCTU. */
      vuint32_t MSKJEOC:1;             /* Mask bit for JEOC. */
      vuint32_t MSKJECH:1;             /* Mask bit for JECH. */
      vuint32_t MSKEOC:1;              /* Mask bit for EOC. */
      vuint32_t MSKECH:1;              /* Mask bit for ECH. */
    } B;
  } IMR;

  union {                              /* Channel Interrupt Mask Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CIM15:1;               /* Channel 15 interrupt enable. */
      vuint32_t CIM14:1;               /* Channel 14 interrupt enable. */
      vuint32_t CIM13:1;               /* Channel 13 interrupt enable. */
      vuint32_t CIM12:1;               /* Channel 12 interrupt enable. */
      vuint32_t CIM11:1;               /* Channel 11 interrupt enable. */
      vuint32_t CIM10:1;               /* Channel 10 interrupt enable. */
      vuint32_t CIM9:1;                /* Channel 9 interrupt enable. */
      vuint32_t CIM8:1;                /* Channel 8 interrupt enable. */
      vuint32_t CIM7:1;                /* Channel 7 interrupt enable. */
      vuint32_t CIM6:1;                /* Channel 6 interrupt enable. */
      vuint32_t CIM5:1;                /* Channel 5 interrupt enable. */
      vuint32_t CIM4:1;                /* Channel 4 interrupt enable. */
      vuint32_t CIM3:1;                /* Channel 3 interrupt enable. */
      vuint32_t CIM2:1;                /* Channel 2 interrupt enable. */
      vuint32_t CIM1:1;                /* Channel 1 interrupt enable. */
      vuint32_t CIM0:1;                /* Channel 0 interrupt enable. */
    } B;
  } CIMR0;

  union {                              /* Channel Interrupt Mask Register 1 */
    vuint32_t R;
    struct {
      vuint32_t CIM63:1;               /* Channel 63 interrupt enable. */
      vuint32_t CIM62:1;               /* Channel 62 interrupt enable. */
      vuint32_t CIM61:1;               /* Channel 61 interrupt enable. */
      vuint32_t CIM60:1;               /* Channel 60 interrupt enable. */
      vuint32_t CIM59:1;               /* Channel 59 interrupt enable. */
      vuint32_t CIM58:1;               /* Channel 58 interrupt enable. */
      vuint32_t CIM57:1;               /* Channel 57 interrupt enable. */
      vuint32_t CIM56:1;               /* Channel 56 interrupt enable. */
      vuint32_t CIM55:1;               /* Channel 55 interrupt enable. */
      vuint32_t CIM54:1;               /* Channel 54 interrupt enable. */
      vuint32_t CIM53:1;               /* Channel 53 interrupt enable. */
      vuint32_t CIM52:1;               /* Channel 52 interrupt enable. */
      vuint32_t CIM51:1;               /* Channel 51 interrupt enable. */
      vuint32_t CIM50:1;               /* Channel 50 interrupt enable. */
      vuint32_t CIM49:1;               /* Channel 49 interrupt enable. */
      vuint32_t CIM48:1;               /* Channel 48 interrupt enable. */
      vuint32_t CIM47:1;               /* Channel 47 interrupt enable. */
      vuint32_t CIM46:1;               /* Channel 46 interrupt enable. */
      vuint32_t CIM45:1;               /* Channel 45 interrupt enable. */
      vuint32_t CIM44:1;               /* Channel 44 interrupt enable. */
      vuint32_t CIM43:1;               /* Channel 43 interrupt enable. */
      vuint32_t CIM42:1;               /* Channel 42 interrupt enable. */
      vuint32_t CIM41:1;               /* Channel 41 interrupt enable. */
      vuint32_t CIM40:1;               /* Channel 40 interrupt enable. */
      vuint32_t CIM39:1;               /* Channel 39 interrupt enable. */
      vuint32_t CIM38:1;               /* Channel 38 interrupt enable. */
      vuint32_t CIM37:1;               /* Channel 37 interrupt enable. */
      vuint32_t CIM36:1;               /* Channel 36 interrupt enable. */
      vuint32_t CIM35:1;               /* Channel 35 interrupt enable. */
      vuint32_t CIM34:1;               /* Channel 34 interrupt enable. */
      vuint32_t CIM33:1;               /* Channel 33 interrupt enable. */
      vuint32_t CIM32:1;               /* Channel 32 interrupt enable. */
    } B;
  } CIMR1;

  union {                              /* Channel Interrupt Mask Register 2 */
    vuint32_t R;
    struct {
      vuint32_t CIM95:1;               /* Channel 95 interrupt enable. */
      vuint32_t CIM94:1;               /* Channel 94 interrupt enable. */
      vuint32_t CIM93:1;               /* Channel 93 interrupt enable. */
      vuint32_t CIM92:1;               /* Channel 92 interrupt enable. */
      vuint32_t CIM91:1;               /* Channel 91 interrupt enable. */
      vuint32_t CIM90:1;               /* Channel 90 interrupt enable. */
      vuint32_t CIM89:1;               /* Channel 89 interrupt enable. */
      vuint32_t CIM88:1;               /* Channel 88 interrupt enable. */
      vuint32_t CIM87:1;               /* Channel 87 interrupt enable. */
      vuint32_t CIM86:1;               /* Channel 86 interrupt enable. */
      vuint32_t CIM85:1;               /* Channel 85 interrupt enable. */
      vuint32_t CIM84:1;               /* Channel 84 interrupt enable. */
      vuint32_t CIM83:1;               /* Channel 83 interrupt enable. */
      vuint32_t CIM82:1;               /* Channel 82 interrupt enable. */
      vuint32_t CIM81:1;               /* Channel 81 interrupt enable. */
      vuint32_t CIM80:1;               /* Channel 80 interrupt enable. */
      vuint32_t CIM79:1;               /* Channel 79 interrupt enable. */
      vuint32_t CIM78:1;               /* Channel 78 interrupt enable. */
      vuint32_t CIM77:1;               /* Channel 77 interrupt enable. */
      vuint32_t CIM76:1;               /* Channel 76 interrupt enable. */
      vuint32_t CIM75:1;               /* Channel 75 interrupt enable. */
      vuint32_t CIM74:1;               /* Channel 74 interrupt enable. */
      vuint32_t CIM73:1;               /* Channel 73 interrupt enable. */
      vuint32_t CIM72:1;               /* Channel 72 interrupt enable. */
      vuint32_t CIM71:1;               /* Channel 71 interrupt enable. */
      vuint32_t CIM70:1;               /* Channel 70 interrupt enable. */
      vuint32_t CIM69:1;               /* Channel 69 interrupt enable. */
      vuint32_t CIM68:1;               /* Channel 68 interrupt enable. */
      vuint32_t CIM67:1;               /* Channel 67 interrupt enable. */
      vuint32_t CIM66:1;               /* Channel 66 interrupt enable. */
      vuint32_t CIM65:1;               /* Channel 65 interrupt enable. */
      vuint32_t CIM64:1;               /* Channel 64 interrupt enable. */
    } B;
  } CIMR2;

  union {                              /* Watchdog Threshold Interrupt Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t WDG5H:1;
      vuint32_t WDG5L:1;
      vuint32_t WDG4H:1;
      vuint32_t WDG4L:1;
      vuint32_t WDG3H:1;
      vuint32_t WDG3L:1;
      vuint32_t WDG2H:1;
      vuint32_t WDG2L:1;
      vuint32_t WDG1H:1;
      vuint32_t WDG1L:1;
      vuint32_t WDG0H:1;
      vuint32_t WDG0L:1;
    } B;
  } WTISR;

  union {                              /* Watchdog Threshold Interrupt Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t MSKWDG5H:1;
      vuint32_t MSKWDG5L:1;
      vuint32_t MSKWDG4H:1;
      vuint32_t MSKWDG4L:1;
      vuint32_t MSKWDG3H:1;
      vuint32_t MSKWDG3L:1;
      vuint32_t MSKWDG2H:1;
      vuint32_t MSKWDG2L:1;
      vuint32_t MSKWDG1H:1;
      vuint32_t MSKWDG1L:1;
      vuint32_t MSKWDG0H:1;
      vuint32_t MSKWDG0L:1;
    } B;
  } WTIMR;

  uint8_t ADC_reserved1[8];
  union {                              /* DMA Enable register */
    vuint32_t R;
    struct {
      vuint32_t  :30;
      vuint32_t DCLR:1;                /* DMA Clear sequence enable. */
      vuint32_t DMAEN:1;               /* DMA global enable. */
    } B;
  } DMAE;

  union {                              /* DMA Channel Select Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DMA15:1;               /* DMA enable for channel 15. */
      vuint32_t DMA14:1;               /* DMA enable for channel 14. */
      vuint32_t DMA13:1;               /* DMA enable for channel 13. */
      vuint32_t DMA12:1;               /* DMA enable for channel 12. */
      vuint32_t DMA11:1;               /* DMA enable for channel 11. */
      vuint32_t DMA10:1;               /* DMA enable for channel 10. */
      vuint32_t DMA9:1;                /* DMA enable for channel 9. */
      vuint32_t DMA8:1;                /* DMA enable for channel 8. */
      vuint32_t DMA7:1;                /* DMA enable for channel 7. */
      vuint32_t DMA6:1;                /* DMA enable for channel 6. */
      vuint32_t DMA5:1;                /* DMA enable for channel 5. */
      vuint32_t DMA4:1;                /* DMA enable for channel 4. */
      vuint32_t DMA3:1;                /* DMA enable for channel 3. */
      vuint32_t DMA2:1;                /* DMA enable for channel 2. */
      vuint32_t DMA1:1;                /* DMA enable for channel 1. */
      vuint32_t DMA0:1;                /* DMA enable for channel 0. */
    } B;
  } DMAR0;

  union {                              /* DMA Channel Select Register 1 */
    vuint32_t R;
    struct {
      vuint32_t DMA63:1;               /* DMA enable for channel 63. */
      vuint32_t DMA62:1;               /* DMA enable for channel 62. */
      vuint32_t DMA61:1;               /* DMA enable for channel 61. */
      vuint32_t DMA60:1;               /* DMA enable for channel 60. */
      vuint32_t DMA59:1;               /* DMA enable for channel 59. */
      vuint32_t DMA58:1;               /* DMA enable for channel 58. */
      vuint32_t DMA57:1;               /* DMA enable for channel 57. */
      vuint32_t DMA56:1;               /* DMA enable for channel 56. */
      vuint32_t DMA55:1;               /* DMA enable for channel 55. */
      vuint32_t DMA54:1;               /* DMA enable for channel 54. */
      vuint32_t DMA53:1;               /* DMA enable for channel 53. */
      vuint32_t DMA52:1;               /* DMA enable for channel 52. */
      vuint32_t DMA51:1;               /* DMA enable for channel 51. */
      vuint32_t DMA50:1;               /* DMA enable for channel 50. */
      vuint32_t DMA49:1;               /* DMA enable for channel 49. */
      vuint32_t DMA48:1;               /* DMA enable for channel 48. */
      vuint32_t DMA47:1;               /* DMA enable for channel 47. */
      vuint32_t DMA46:1;               /* DMA enable for channel 46. */
      vuint32_t DMA45:1;               /* DMA enable for channel 45. */
      vuint32_t DMA44:1;               /* DMA enable for channel 44. */
      vuint32_t DMA43:1;               /* DMA enable for channel 43. */
      vuint32_t DMA42:1;               /* DMA enable for channel 42. */
      vuint32_t DMA41:1;               /* DMA enable for channel 41. */
      vuint32_t DMA40:1;               /* DMA enable for channel 40. */
      vuint32_t DMA39:1;               /* DMA enable for channel 39. */
      vuint32_t DMA38:1;               /* DMA enable for channel 38. */
      vuint32_t DMA37:1;               /* DMA enable for channel 37. */
      vuint32_t DMA36:1;               /* DMA enable for channel 36. */
      vuint32_t DMA35:1;               /* DMA enable for channel 35. */
      vuint32_t DMA34:1;               /* DMA enable for channel 34. */
      vuint32_t DMA33:1;               /* DMA enable for channel 33. */
      vuint32_t DMA32:1;               /* DMA enable for channel 32. */
    } B;
  } DMAR1;

  union {                              /* DMA Channel Select Register 2 */
    vuint32_t R;
    struct {
      vuint32_t DMA95:1;               /* DMA enable for channel 95. */
      vuint32_t DMA94:1;               /* DMA enable for channel 94. */
      vuint32_t DMA93:1;               /* DMA enable for channel 93. */
      vuint32_t DMA92:1;               /* DMA enable for channel 92. */
      vuint32_t DMA91:1;               /* DMA enable for channel 91. */
      vuint32_t DMA90:1;               /* DMA enable for channel 90. */
      vuint32_t DMA89:1;               /* DMA enable for channel 89. */
      vuint32_t DMA88:1;               /* DMA enable for channel 88. */
      vuint32_t DMA87:1;               /* DMA enable for channel 87. */
      vuint32_t DMA86:1;               /* DMA enable for channel 86. */
      vuint32_t DMA85:1;               /* DMA enable for channel 85. */
      vuint32_t DMA84:1;               /* DMA enable for channel 84. */
      vuint32_t DMA83:1;               /* DMA enable for channel 83. */
      vuint32_t DMA82:1;               /* DMA enable for channel 82. */
      vuint32_t DMA81:1;               /* DMA enable for channel 81. */
      vuint32_t DMA80:1;               /* DMA enable for channel 80. */
      vuint32_t DMA79:1;               /* DMA enable for channel 79. */
      vuint32_t DMA78:1;               /* DMA enable for channel 78. */
      vuint32_t DMA77:1;               /* DMA enable for channel 77. */
      vuint32_t DMA76:1;               /* DMA enable for channel 76. */
      vuint32_t DMA75:1;               /* DMA enable for channel 75. */
      vuint32_t DMA74:1;               /* DMA enable for channel 74. */
      vuint32_t DMA73:1;               /* DMA enable for channel 73. */
      vuint32_t DMA72:1;               /* DMA enable for channel 72. */
      vuint32_t DMA71:1;               /* DMA enable for channel 71. */
      vuint32_t DMA70:1;               /* DMA enable for channel 70. */
      vuint32_t DMA69:1;               /* DMA enable for channel 69. */
      vuint32_t DMA68:1;               /* DMA enable for channel 68. */
      vuint32_t DMA67:1;               /* DMA enable for channel 67. */
      vuint32_t DMA66:1;               /* DMA enable for channel 66. */
      vuint32_t DMA65:1;               /* DMA enable for channel 65. */
      vuint32_t DMA64:1;               /* DMA enable for channel 64. */
    } B;
  } DMAR2;

  uint8_t ADC_reserved2[16];
  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for watchdog n. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for watchdog n. */
    } B;
  } THRHLR0;

  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for watchdog n. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for watchdog n. */
    } B;
  } THRHLR1;

  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for watchdog n. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for watchdog n. */
    } B;
  } THRHLR2;

  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for watchdog n. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for watchdog n. */
    } B;
  } THRHLR3;

  uint8_t ADC_reserved3[16];
  union {                              /* Presampling Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :25;
      vuint32_t PREVAL2:2;             /* Internal voltage selection for Presampling */
      vuint32_t PREVAL1:2;             /* Internal voltage selection for Presampling. */
      vuint32_t PREVAL0:2;             /* Internal voltage selection for Presampling. */
      vuint32_t PRECONV:1;             /* Convert Presampled value */
    } B;
  } PSCR;

  union {                              /* Presampling register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t PRES15:1;              /* Presampling enable for channel 15. */
      vuint32_t PRES14:1;              /* Presampling enable for channel 14. */
      vuint32_t PRES13:1;              /* Presampling enable for channel 13. */
      vuint32_t PRES12:1;              /* Presampling enable for channel 12. */
      vuint32_t PRES11:1;              /* Presampling enable for channel 11. */
      vuint32_t PRES10:1;              /* Presampling enable for channel 10. */
      vuint32_t PRES9:1;               /* Presampling enable for channel 9. */
      vuint32_t PRES8:1;               /* Presampling enable for channel 8. */
      vuint32_t PRES7:1;               /* Presampling enable for channel 7. */
      vuint32_t PRES6:1;               /* Presampling enable for channel 6. */
      vuint32_t PRES5:1;               /* Presampling enable for channel 5. */
      vuint32_t PRES4:1;               /* Presampling enable for channel 4. */
      vuint32_t PRES3:1;               /* Presampling enable for channel 3. */
      vuint32_t PRES2:1;               /* Presampling enable for channel 2. */
      vuint32_t PRES1:1;               /* Presampling enable for channel 1. */
      vuint32_t PRES0:1;               /* Presampling enable for channel 0. */
    } B;
  } PSR0;

  union {                              /* Presampling register 1 */
    vuint32_t R;
    struct {
      vuint32_t PRES63:1;              /* Presampling enable for channel 63. */
      vuint32_t PRES62:1;              /* Presampling enable for channel 62. */
      vuint32_t PRES61:1;              /* Presampling enable for channel 61. */
      vuint32_t PRES60:1;              /* Presampling enable for channel 60. */
      vuint32_t PRES59:1;              /* Presampling enable for channel 59. */
      vuint32_t PRES58:1;              /* Presampling enable for channel 58. */
      vuint32_t PRES57:1;              /* Presampling enable for channel 57. */
      vuint32_t PRES56:1;              /* Presampling enable for channel 56. */
      vuint32_t PRES55:1;              /* Presampling enable for channel 55. */
      vuint32_t PRES54:1;              /* Presampling enable for channel 54. */
      vuint32_t PRES53:1;              /* Presampling enable for channel 53. */
      vuint32_t PRES52:1;              /* Presampling enable for channel 52. */
      vuint32_t PRES51:1;              /* Presampling enable for channel 51. */
      vuint32_t PRES50:1;              /* Presampling enable for channel 50. */
      vuint32_t PRES49:1;              /* Presampling enable for channel 49. */
      vuint32_t PRES48:1;              /* Presampling enable for channel 48. */
      vuint32_t PRES47:1;              /* Presampling enable for channel 47. */
      vuint32_t PRES46:1;              /* Presampling enable for channel 46. */
      vuint32_t PRES45:1;              /* Presampling enable for channel 45. */
      vuint32_t PRES44:1;              /* Presampling enable for channel 44. */
      vuint32_t PRES43:1;              /* Presampling enable for channel 43. */
      vuint32_t PRES42:1;              /* Presampling enable for channel 42. */
      vuint32_t PRES41:1;              /* Presampling enable for channel 41. */
      vuint32_t PRES40:1;              /* Presampling enable for channel 40. */
      vuint32_t PRES39:1;              /* Presampling enable for channel 39. */
      vuint32_t PRES38:1;              /* Presampling enable for channel 38. */
      vuint32_t PRES37:1;              /* Presampling enable for channel 37. */
      vuint32_t PRES36:1;              /* Presampling enable for channel 36. */
      vuint32_t PRES35:1;              /* Presampling enable for channel 35. */
      vuint32_t PRES34:1;              /* Presampling enable for channel 34. */
      vuint32_t PRES33:1;              /* Presampling enable for channel 33. */
      vuint32_t PRES32:1;              /* Presampling enable for channel 32. */
    } B;
  } PSR1;

  union {                              /* Presampling register 2 */
    vuint32_t R;
    struct {
      vuint32_t PRES95:1;              /* Presampling enable for channel 95. */
      vuint32_t PRES94:1;              /* Presampling enable for channel 94. */
      vuint32_t PRES93:1;              /* Presampling enable for channel 93. */
      vuint32_t PRES92:1;              /* Presampling enable for channel 92. */
      vuint32_t PRES91:1;              /* Presampling enable for channel 91. */
      vuint32_t PRES90:1;              /* Presampling enable for channel 90. */
      vuint32_t PRES89:1;              /* Presampling enable for channel 89. */
      vuint32_t PRES88:1;              /* Presampling enable for channel 88. */
      vuint32_t PRES87:1;              /* Presampling enable for channel 87. */
      vuint32_t PRES86:1;              /* Presampling enable for channel 86. */
      vuint32_t PRES85:1;              /* Presampling enable for channel 85. */
      vuint32_t PRES84:1;              /* Presampling enable for channel 84. */
      vuint32_t PRES83:1;              /* Presampling enable for channel 83. */
      vuint32_t PRES82:1;              /* Presampling enable for channel 82. */
      vuint32_t PRES81:1;              /* Presampling enable for channel 81. */
      vuint32_t PRES80:1;              /* Presampling enable for channel 80. */
      vuint32_t PRES79:1;              /* Presampling enable for channel 79. */
      vuint32_t PRES78:1;              /* Presampling enable for channel 78. */
      vuint32_t PRES77:1;              /* Presampling enable for channel 77. */
      vuint32_t PRES76:1;              /* Presampling enable for channel 76. */
      vuint32_t PRES75:1;              /* Presampling enable for channel 75. */
      vuint32_t PRES74:1;              /* Presampling enable for channel 74. */
      vuint32_t PRES73:1;              /* Presampling enable for channel 73. */
      vuint32_t PRES72:1;              /* Presampling enable for channel 72. */
      vuint32_t PRES71:1;              /* Presampling enable for channel 71. */
      vuint32_t PRES70:1;              /* Presampling enable for channel 70. */
      vuint32_t PRES69:1;              /* Presampling enable for channel 69. */
      vuint32_t PRES68:1;              /* Presampling enable for channel 68. */
      vuint32_t PRES67:1;              /* Presampling enable for channel 67. */
      vuint32_t PRES66:1;              /* Presampling enable for channel 66. */
      vuint32_t PRES65:1;              /* Presampling enable for channel 65. */
      vuint32_t PRES64:1;              /* Presampling enable for channel 64. */
    } B;
  } PSR2;

  uint8_t ADC_reserved4[4];
  union {                              /* Conversion Timing Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t INPSAMP:8;             /* Configuration of sampling phase duration. */
    } B;
  } CTR0;

  union {                              /* Conversion Timing Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t INPSAMP:8;             /* Configuration of sampling phase duration. */
    } B;
  } CTR1;

  union {                              /* Conversion Timing Register 2 */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t INPSAMP:8;             /* Configuration of sampling phase duration. */
    } B;
  } CTR2;

  uint8_t ADC_reserved5[4];
  union {                              /* Normal Conversion Mask Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CH15:1;                /* Normal sampling enable for channel 15. */
      vuint32_t CH14:1;                /* Normal sampling enable for channel 14. */
      vuint32_t CH13:1;                /* Normal sampling enable for channel 13. */
      vuint32_t CH12:1;                /* Normal sampling enable for channel 12. */
      vuint32_t CH11:1;                /* Normal sampling enable for channel 11. */
      vuint32_t CH10:1;                /* Normal sampling enable for channel 10. */
      vuint32_t CH9:1;                 /* Normal sampling enable for channel 9. */
      vuint32_t CH8:1;                 /* Normal sampling enable for channel 8. */
      vuint32_t CH7:1;                 /* Normal sampling enable for channel 7. */
      vuint32_t CH6:1;                 /* Normal sampling enable for channel 6. */
      vuint32_t CH5:1;                 /* Normal sampling enable for channel 5. */
      vuint32_t CH4:1;                 /* Normal sampling enable for channel 4. */
      vuint32_t CH3:1;                 /* Normal sampling enable for channel 3. */
      vuint32_t CH2:1;                 /* Normal sampling enable for channel 2. */
      vuint32_t CH1:1;                 /* Normal sampling enable for channel 1. */
      vuint32_t CH0:1;                 /* Normal sampling enable for channel 0. */
    } B;
  } NCMR0;

  union {                              /* Normal Conversion Mask Register 1 */
    vuint32_t R;
    struct {
      vuint32_t CH63:1;                /* Normal sampling enable for channel 63. */
      vuint32_t CH62:1;                /* Normal sampling enable for channel 62. */
      vuint32_t CH61:1;                /* Normal sampling enable for channel 61. */
      vuint32_t CH60:1;                /* Normal sampling enable for channel 60. */
      vuint32_t CH59:1;                /* Normal sampling enable for channel 59. */
      vuint32_t CH58:1;                /* Normal sampling enable for channel 58. */
      vuint32_t CH57:1;                /* Normal sampling enable for channel 57. */
      vuint32_t CH56:1;                /* Normal sampling enable for channel 56. */
      vuint32_t CH55:1;                /* Normal sampling enable for channel 55. */
      vuint32_t CH54:1;                /* Normal sampling enable for channel 54. */
      vuint32_t CH53:1;                /* Normal sampling enable for channel 53. */
      vuint32_t CH52:1;                /* Normal sampling enable for channel 52. */
      vuint32_t CH51:1;                /* Normal sampling enable for channel 51. */
      vuint32_t CH50:1;                /* Normal sampling enable for channel 50. */
      vuint32_t CH49:1;                /* Normal sampling enable for channel 49. */
      vuint32_t CH48:1;                /* Normal sampling enable for channel 48. */
      vuint32_t CH47:1;                /* Normal sampling enable for channel 47. */
      vuint32_t CH46:1;                /* Normal sampling enable for channel 46. */
      vuint32_t CH45:1;                /* Normal sampling enable for channel 45. */
      vuint32_t CH44:1;                /* Normal sampling enable for channel 44. */
      vuint32_t CH43:1;                /* Normal sampling enable for channel 43. */
      vuint32_t CH42:1;                /* Normal sampling enable for channel 42. */
      vuint32_t CH41:1;                /* Normal sampling enable for channel 41. */
      vuint32_t CH40:1;                /* Normal sampling enable for channel 40. */
      vuint32_t CH39:1;                /* Normal sampling enable for channel 39. */
      vuint32_t CH38:1;                /* Normal sampling enable for channel 38. */
      vuint32_t CH37:1;                /* Normal sampling enable for channel 37. */
      vuint32_t CH36:1;                /* Normal sampling enable for channel 36. */
      vuint32_t CH35:1;                /* Normal sampling enable for channel 35. */
      vuint32_t CH34:1;                /* Normal sampling enable for channel 34. */
      vuint32_t CH33:1;                /* Normal sampling enable for channel 33. */
      vuint32_t CH32:1;                /* Normal sampling enable for channel 32. */
    } B;
  } NCMR1;

  union {                              /* Normal Conversion Mask Register 2 */
    vuint32_t R;
    struct {
      vuint32_t CH95:1;                /* Normal sampling enable for channel 95. */
      vuint32_t CH94:1;                /* Normal sampling enable for channel 94. */
      vuint32_t CH93:1;                /* Normal sampling enable for channel 93. */
      vuint32_t CH92:1;                /* Normal sampling enable for channel 92. */
      vuint32_t CH91:1;                /* Normal sampling enable for channel 91. */
      vuint32_t CH90:1;                /* Normal sampling enable for channel 90. */
      vuint32_t CH89:1;                /* Normal sampling enable for channel 89. */
      vuint32_t CH88:1;                /* Normal sampling enable for channel 88. */
      vuint32_t CH87:1;                /* Normal sampling enable for channel 87. */
      vuint32_t CH86:1;                /* Normal sampling enable for channel 86. */
      vuint32_t CH85:1;                /* Normal sampling enable for channel 85. */
      vuint32_t CH84:1;                /* Normal sampling enable for channel 84. */
      vuint32_t CH83:1;                /* Normal sampling enable for channel 83. */
      vuint32_t CH82:1;                /* Normal sampling enable for channel 82. */
      vuint32_t CH81:1;                /* Normal sampling enable for channel 81. */
      vuint32_t CH80:1;                /* Normal sampling enable for channel 80. */
      vuint32_t CH79:1;                /* Normal sampling enable for channel 79. */
      vuint32_t CH78:1;                /* Normal sampling enable for channel 78. */
      vuint32_t CH77:1;                /* Normal sampling enable for channel 77. */
      vuint32_t CH76:1;                /* Normal sampling enable for channel 76. */
      vuint32_t CH75:1;                /* Normal sampling enable for channel 75. */
      vuint32_t CH74:1;                /* Normal sampling enable for channel 74. */
      vuint32_t CH73:1;                /* Normal sampling enable for channel 73. */
      vuint32_t CH72:1;                /* Normal sampling enable for channel 72. */
      vuint32_t CH71:1;                /* Normal sampling enable for channel 71. */
      vuint32_t CH70:1;                /* Normal sampling enable for channel 70. */
      vuint32_t CH69:1;                /* Normal sampling enable for channel 69. */
      vuint32_t CH68:1;                /* Normal sampling enable for channel 68. */
      vuint32_t CH67:1;                /* Normal sampling enable for channel 67. */
      vuint32_t CH66:1;                /* Normal sampling enable for channel 66. */
      vuint32_t CH65:1;                /* Normal sampling enable for channel 65. */
      vuint32_t CH64:1;                /* Normal sampling enable for channel 64. */
    } B;
  } NCMR2;

  uint8_t ADC_reserved6[4];
  union {                              /* Injected Conversion Mask Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CH15:1;                /* Injected sampling enable for channel 15. */
      vuint32_t CH14:1;                /* Injected sampling enable for channel 14. */
      vuint32_t CH13:1;                /* Injected sampling enable for channel 13. */
      vuint32_t CH12:1;                /* Injected sampling enable for channel 12. */
      vuint32_t CH11:1;                /* Injected sampling enable for channel 11. */
      vuint32_t CH10:1;                /* Injected sampling enable for channel 10. */
      vuint32_t CH9:1;                 /* Injected sampling enable for channel 9. */
      vuint32_t CH8:1;                 /* Injected sampling enable for channel 8. */
      vuint32_t CH7:1;                 /* Injected sampling enable for channel 7. */
      vuint32_t CH6:1;                 /* Injected sampling enable for channel 6. */
      vuint32_t CH5:1;                 /* Injected sampling enable for channel 5. */
      vuint32_t CH4:1;                 /* Injected sampling enable for channel 4. */
      vuint32_t CH3:1;                 /* Injected sampling enable for channel 3. */
      vuint32_t CH2:1;                 /* Injected sampling enable for channel 2. */
      vuint32_t CH1:1;                 /* Injected sampling enable for channel 1. */
      vuint32_t CH0:1;                 /* Injected sampling enable for channel 0. */
    } B;
  } JCMR0;

  union {                              /* Injected Conversion Mask Register 1 */
    vuint32_t R;
    struct {
      vuint32_t CH63:1;                /* Injected sampling enable for channel 63. */
      vuint32_t CH62:1;                /* Injected sampling enable for channel 62. */
      vuint32_t CH61:1;                /* Injected sampling enable for channel 61. */
      vuint32_t CH60:1;                /* Injected sampling enable for channel 60. */
      vuint32_t CH59:1;                /* Injected sampling enable for channel 59. */
      vuint32_t CH58:1;                /* Injected sampling enable for channel 58. */
      vuint32_t CH57:1;                /* Injected sampling enable for channel 57. */
      vuint32_t CH56:1;                /* Injected sampling enable for channel 56. */
      vuint32_t CH55:1;                /* Injected sampling enable for channel 55. */
      vuint32_t CH54:1;                /* Injected sampling enable for channel 54. */
      vuint32_t CH53:1;                /* Injected sampling enable for channel 53. */
      vuint32_t CH52:1;                /* Injected sampling enable for channel 52. */
      vuint32_t CH51:1;                /* Injected sampling enable for channel 51. */
      vuint32_t CH50:1;                /* Injected sampling enable for channel 50. */
      vuint32_t CH49:1;                /* Injected sampling enable for channel 49. */
      vuint32_t CH48:1;                /* Injected sampling enable for channel 48. */
      vuint32_t CH47:1;                /* Injected sampling enable for channel 47. */
      vuint32_t CH46:1;                /* Injected sampling enable for channel 46. */
      vuint32_t CH45:1;                /* Injected sampling enable for channel 45. */
      vuint32_t CH44:1;                /* Injected sampling enable for channel 44. */
      vuint32_t CH43:1;                /* Injected sampling enable for channel 43. */
      vuint32_t CH42:1;                /* Injected sampling enable for channel 42. */
      vuint32_t CH41:1;                /* Injected sampling enable for channel 41. */
      vuint32_t CH40:1;                /* Injected sampling enable for channel 40. */
      vuint32_t CH39:1;                /* Injected sampling enable for channel 39. */
      vuint32_t CH38:1;                /* Injected sampling enable for channel 38. */
      vuint32_t CH37:1;                /* Injected sampling enable for channel 37. */
      vuint32_t CH36:1;                /* Injected sampling enable for channel 36. */
      vuint32_t CH35:1;                /* Injected sampling enable for channel 35. */
      vuint32_t CH34:1;                /* Injected sampling enable for channel 34. */
      vuint32_t CH33:1;                /* Injected sampling enable for channel 33. */
      vuint32_t CH32:1;                /* Injected sampling enable for channel 32. */
    } B;
  } JCMR1;

  union {                              /* Injected Conversion Mask Register 2 */
    vuint32_t R;
    struct {
      vuint32_t CH95:1;                /* Injected sampling enable for channel 95. */
      vuint32_t CH94:1;                /* Injected sampling enable for channel 94. */
      vuint32_t CH93:1;                /* Injected sampling enable for channel 93. */
      vuint32_t CH92:1;                /* Injected sampling enable for channel 92. */
      vuint32_t CH91:1;                /* Injected sampling enable for channel 91. */
      vuint32_t CH90:1;                /* Injected sampling enable for channel 90. */
      vuint32_t CH89:1;                /* Injected sampling enable for channel 89. */
      vuint32_t CH88:1;                /* Injected sampling enable for channel 88. */
      vuint32_t CH87:1;                /* Injected sampling enable for channel 87. */
      vuint32_t CH86:1;                /* Injected sampling enable for channel 86. */
      vuint32_t CH85:1;                /* Injected sampling enable for channel 85. */
      vuint32_t CH84:1;                /* Injected sampling enable for channel 84. */
      vuint32_t CH83:1;                /* Injected sampling enable for channel 83. */
      vuint32_t CH82:1;                /* Injected sampling enable for channel 82. */
      vuint32_t CH81:1;                /* Injected sampling enable for channel 81. */
      vuint32_t CH80:1;                /* Injected sampling enable for channel 80. */
      vuint32_t CH79:1;                /* Injected sampling enable for channel 79. */
      vuint32_t CH78:1;                /* Injected sampling enable for channel 78. */
      vuint32_t CH77:1;                /* Injected sampling enable for channel 77. */
      vuint32_t CH76:1;                /* Injected sampling enable for channel 76. */
      vuint32_t CH75:1;                /* Injected sampling enable for channel 75. */
      vuint32_t CH74:1;                /* Injected sampling enable for channel 74. */
      vuint32_t CH73:1;                /* Injected sampling enable for channel 73. */
      vuint32_t CH72:1;                /* Injected sampling enable for channel 72. */
      vuint32_t CH71:1;                /* Injected sampling enable for channel 71. */
      vuint32_t CH70:1;                /* Injected sampling enable for channel 70. */
      vuint32_t CH69:1;                /* Injected sampling enable for channel 69. */
      vuint32_t CH68:1;                /* Injected sampling enable for channel 68. */
      vuint32_t CH67:1;                /* Injected sampling enable for channel 67. */
      vuint32_t CH66:1;                /* Injected sampling enable for channel 66. */
      vuint32_t CH65:1;                /* Injected sampling enable for channel 65. */
      vuint32_t CH64:1;                /* Injected sampling enable for channel 64. */
    } B;
  } JCMR2;

  uint8_t ADC_reserved7[4];
  union {                              /* Decode Signals Delay Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DSD:16;
    } B;
  } DSDR;

  union {                              /* Power Down Exit Delay Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t PDED:8;
    } B;
  } PDEDR;

  uint8_t ADC_reserved8[52];
  union {                              /* Channel Data Register n (Precision Channels) */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t VALID:1;               /* Used to notify when the data is valid (a new value has been written). It is automatically cleared when data is read. */
      vuint32_t OVERW:1;               /* Overwrite data */
      vuint32_t RESULT:2;
      vuint32_t CDATA:16;              /* Converted Data 11:0. */
    } B;
  } CDR[96];                           /* Note CDR[16..31] are reserved               */

  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for channel x. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for channel x. */
    } B;
  } THRHLR4;

  union {                              /* Threshold Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t THRH:12;               /* High threshold value for channel x. */
      vuint32_t  :4;
      vuint32_t THRL:12;               /* Low threshold value for channel x. */
    } B;
  } THRHLR5;

  uint8_t ADC_reserved9[40];
  union {                              /* Channel Watchdog Select Register 0 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH7:4;            /* Channel Watchdog select for channel 7. */
      vuint32_t WSEL_CH6:4;            /* Channel Watchdog select for channel 6. */
      vuint32_t WSEL_CH5:4;            /* Channel Watchdog select for channel 5. */
      vuint32_t WSEL_CH4:4;            /* Channel Watchdog select for channel 4. */
      vuint32_t WSEL_CH3:4;            /* Channel Watchdog select for channel 3. */
      vuint32_t WSEL_CH2:4;            /* Channel Watchdog select for channel 2. */
      vuint32_t WSEL_CH1:4;            /* Channel Watchdog select for channel 1. */
      vuint32_t WSEL_CH0:4;            /* Channel Watchdog select for channel 0. */
    } B;
  } CWSELR0;

  union {                              /* Channel Watchdog Select Register 1 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH15:4;           /* Channel Watchdog select for channel 15. */
      vuint32_t WSEL_CH14:4;           /* Channel Watchdog select for channel 14. */
      vuint32_t WSEL_CH13:4;           /* Channel Watchdog select for channel 13. */
      vuint32_t WSEL_CH12:4;           /* Channel Watchdog select for channel 12. */
      vuint32_t WSEL_CH11:4;           /* Channel Watchdog select for channel 11. */
      vuint32_t WSEL_CH10:4;           /* Channel Watchdog select for channel 10. */
      vuint32_t WSEL_CH9:4;            /* Channel Watchdog select for channel 9. */
      vuint32_t WSEL_CH8:4;            /* Channel Watchdog select for channel 8. */
    } B;
  } CWSELR1;

  uint8_t ADC_reserved10[8];
  union {                              /* Channel Watchdog Select Register 4 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH39:4;           /* Channel Watchdog select for channel 39. */
      vuint32_t WSEL_CH38:4;           /* Channel Watchdog select for channel 38. */
      vuint32_t WSEL_CH37:4;           /* Channel Watchdog select for channel 37. */
      vuint32_t WSEL_CH36:4;           /* Channel Watchdog select for channel 36. */
      vuint32_t WSEL_CH35:4;           /* Channel Watchdog select for channel 35. */
      vuint32_t WSEL_CH34:4;           /* Channel Watchdog select for channel 34. */
      vuint32_t WSEL_CH33:4;           /* Channel Watchdog select for channel 33. */
      vuint32_t WSEL_CH32:4;           /* Channel Watchdog select for channel 32. */
    } B;
  } CWSELR4;

  union {                              /* Channel Watchdog Select Register 5 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH47:4;           /* Channel Watchdog select for channel 47. */
      vuint32_t WSEL_CH46:4;           /* Channel Watchdog select for channel 46. */
      vuint32_t WSEL_CH45:4;           /* Channel Watchdog select for channel 45. */
      vuint32_t WSEL_CH44:4;           /* Channel Watchdog select for channel 44. */
      vuint32_t WSEL_CH43:4;           /* Channel Watchdog select for channel 43. */
      vuint32_t WSEL_CH42:4;           /* Channel Watchdog select for channel 42. */
      vuint32_t WSEL_CH41:4;           /* Channel Watchdog select for channel 41. */
      vuint32_t WSEL_CH40:4;           /* Channel Watchdog select for channel 40. */
    } B;
  } CWSELR5;

  union {                              /* Channel Watchdog Select Register 6 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH55:4;           /* Channel Watchdog select for channel 55. */
      vuint32_t WSEL_CH54:4;           /* Channel Watchdog select for channel 54. */
      vuint32_t WSEL_CH53:4;           /* Channel Watchdog select for channel 53. */
      vuint32_t WSEL_CH52:4;           /* Channel Watchdog select for channel 52. */
      vuint32_t WSEL_CH51:4;           /* Channel Watchdog select for channel 51. */
      vuint32_t WSEL_CH50:4;           /* Channel Watchdog select for channel 50. */
      vuint32_t WSEL_CH49:4;           /* Channel Watchdog select for channel 49. */
      vuint32_t WSEL_CH48:4;           /* Channel Watchdog select for channel 48. */
    } B;
  } CWSELR6;

  union {                              /* Channel Watchdog Select Register 7 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH63:4;           /* Channel Watchdog select for channel 63. */
      vuint32_t WSEL_CH62:4;           /* Channel Watchdog select for channel 62. */
      vuint32_t WSEL_CH61:4;           /* Channel Watchdog select for channel 61. */
      vuint32_t WSEL_CH60:4;           /* Channel Watchdog select for channel 60. */
      vuint32_t WSEL_CH59:4;           /* Channel Watchdog select for channel 59. */
      vuint32_t WSEL_CH58:4;           /* Channel Watchdog select for channel 58. */
      vuint32_t WSEL_CH57:4;           /* Channel Watchdog select for channel 57. */
      vuint32_t WSEL_CH56:4;           /* Channel Watchdog select for channel 56. */
    } B;
  } CWSELR7;

  union {                              /* Channel Watchdog Select Register 8 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH71:4;           /* Channel Watchdog select for channel 71. */
      vuint32_t WSEL_CH70:4;           /* Channel Watchdog select for channel 70. */
      vuint32_t WSEL_CH69:4;           /* Channel Watchdog select for channel 69. */
      vuint32_t WSEL_CH68:4;           /* Channel Watchdog select for channel 68. */
      vuint32_t WSEL_CH67:4;           /* Channel Watchdog select for channel 67. */
      vuint32_t WSEL_CH66:4;           /* Channel Watchdog select for channel 66. */
      vuint32_t WSEL_CH65:4;           /* Channel Watchdog select for channel 65. */
      vuint32_t WSEL_CH64:4;           /* Channel Watchdog select for channel 64. */
    } B;
  } CWSELR8;

  union {                              /* Channel Watchdog Select Register 9 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH79:4;           /* Channel Watchdog select for channel 79. */
      vuint32_t WSEL_CH78:4;           /* Channel Watchdog select for channel 78. */
      vuint32_t WSEL_CH77:4;           /* Channel Watchdog select for channel 77. */
      vuint32_t WSEL_CH76:4;           /* Channel Watchdog select for channel 76. */
      vuint32_t WSEL_CH75:4;           /* Channel Watchdog select for channel 75. */
      vuint32_t WSEL_CH74:4;           /* Channel Watchdog select for channel 74. */
      vuint32_t WSEL_CH73:4;           /* Channel Watchdog select for channel 73. */
      vuint32_t WSEL_CH72:4;           /* Channel Watchdog select for channel 72. */
    } B;
  } CWSELR9;

  union {                              /* Channel Watchdog Select Register 10 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH87:4;           /* Channel Watchdog select for channel 87. */
      vuint32_t WSEL_CH86:4;           /* Channel Watchdog select for channel 86. */
      vuint32_t WSEL_CH85:4;           /* Channel Watchdog select for channel 85. */
      vuint32_t WSEL_CH84:4;           /* Channel Watchdog select for channel 84. */
      vuint32_t WSEL_CH83:4;           /* Channel Watchdog select for channel 83. */
      vuint32_t WSEL_CH82:4;           /* Channel Watchdog select for channel 82. */
      vuint32_t WSEL_CH81:4;           /* Channel Watchdog select for channel 81. */
      vuint32_t WSEL_CH80:4;           /* Channel Watchdog select for channel 80. */
    } B;
  } CWSELR10;

  union {                              /* Channel Watchdog Select Register 11 */
    vuint32_t R;
    struct {
      vuint32_t WSEL_CH95:4;           /* Channel Watchdog select for channel 95. */
      vuint32_t WSEL_CH94:4;           /* Channel Watchdog select for channel 94. */
      vuint32_t WSEL_CH93:4;           /* Channel Watchdog select for channel 93. */
      vuint32_t WSEL_CH92:4;           /* Channel Watchdog select for channel 92. */
      vuint32_t WSEL_CH91:4;           /* Channel Watchdog select for channel 91. */
      vuint32_t WSEL_CH90:4;           /* Channel Watchdog select for channel 90. */
      vuint32_t WSEL_CH89:4;           /* Channel Watchdog select for channel 89. */
      vuint32_t WSEL_CH88:4;           /* Channel Watchdog select for channel 88. */
    } B;
  } CWSELR11;

  union {                              /* Channel Watchdog Enable Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CWEN15:1;              /* Watchdog enable for channel 15. */
      vuint32_t CWEN14:1;              /* Watchdog enable for channel 14. */
      vuint32_t CWEN13:1;              /* Watchdog enable for channel 13. */
      vuint32_t CWEN12:1;              /* Watchdog enable for channel 12. */
      vuint32_t CWEN11:1;              /* Watchdog enable for channel 11. */
      vuint32_t CWEN10:1;              /* Watchdog enable for channel 10. */
      vuint32_t CWEN9:1;               /* Watchdog enable for channel 9. */
      vuint32_t CWEN8:1;               /* Watchdog enable for channel 8. */
      vuint32_t CWEN7:1;               /* Watchdog enable for channel 7. */
      vuint32_t CWEN6:1;               /* Watchdog enable for channel 6. */
      vuint32_t CWEN5:1;               /* Watchdog enable for channel 5. */
      vuint32_t CWEN4:1;               /* Watchdog enable for channel 4. */
      vuint32_t CWEN3:1;               /* Watchdog enable for channel 3. */
      vuint32_t CWEN2:1;               /* Watchdog enable for channel 2. */
      vuint32_t CWEN1:1;               /* Watchdog enable for channel 1. */
      vuint32_t CWEN0:1;               /* Watchdog enable for channel 0. */
    } B;
  } CWENR0;

  union {                              /* Channel Watchdog Enable Register 1 */
    vuint32_t R;
    struct {
      vuint32_t CWEN63:1;              /* Watchdog enable for channel 63. */
      vuint32_t CWEN62:1;              /* Watchdog enable for channel 62. */
      vuint32_t CWEN61:1;              /* Watchdog enable for channel 61. */
      vuint32_t CWEN60:1;              /* Watchdog enable for channel 60. */
      vuint32_t CWEN59:1;              /* Watchdog enable for channel 59. */
      vuint32_t CWEN58:1;              /* Watchdog enable for channel 58. */
      vuint32_t CWEN57:1;              /* Watchdog enable for channel 57. */
      vuint32_t CWEN56:1;              /* Watchdog enable for channel 56. */
      vuint32_t CWEN55:1;              /* Watchdog enable for channel 55. */
      vuint32_t CWEN54:1;              /* Watchdog enable for channel 54. */
      vuint32_t CWEN53:1;              /* Watchdog enable for channel 53. */
      vuint32_t CWEN52:1;              /* Watchdog enable for channel 52. */
      vuint32_t CWEN51:1;              /* Watchdog enable for channel 51. */
      vuint32_t CWEN50:1;              /* Watchdog enable for channel 50. */
      vuint32_t CWEN49:1;              /* Watchdog enable for channel 49. */
      vuint32_t CWEN48:1;              /* Watchdog enable for channel 48. */
      vuint32_t CWEN47:1;              /* Watchdog enable for channel 47. */
      vuint32_t CWEN46:1;              /* Watchdog enable for channel 46. */
      vuint32_t CWEN45:1;              /* Watchdog enable for channel 45. */
      vuint32_t CWEN44:1;              /* Watchdog enable for channel 44. */
      vuint32_t CWEN43:1;              /* Watchdog enable for channel 43. */
      vuint32_t CWEN42:1;              /* Watchdog enable for channel 42. */
      vuint32_t CWEN41:1;              /* Watchdog enable for channel 41. */
      vuint32_t CWEN40:1;              /* Watchdog enable for channel 40. */
      vuint32_t CWEN39:1;              /* Watchdog enable for channel 39. */
      vuint32_t CWEN38:1;              /* Watchdog enable for channel 38. */
      vuint32_t CWEN37:1;              /* Watchdog enable for channel 37. */
      vuint32_t CWEN36:1;              /* Watchdog enable for channel 36. */
      vuint32_t CWEN35:1;              /* Watchdog enable for channel 35. */
      vuint32_t CWEN34:1;              /* Watchdog enable for channel 34. */
      vuint32_t CWEN33:1;              /* Watchdog enable for channel 33. */
      vuint32_t CWEN32:1;              /* Watchdog enable for channel 32. */
    } B;
  } CWENR1;

  union {                              /* Channel Watchdog Enable Register 2 */
    vuint32_t R;
    struct {
      vuint32_t CWEN95:1;              /* Watchdog enable for channel 95. */
      vuint32_t CWEN94:1;              /* Watchdog enable for channel 94. */
      vuint32_t CWEN93:1;              /* Watchdog enable for channel 93. */
      vuint32_t CWEN92:1;              /* Watchdog enable for channel 92. */
      vuint32_t CWEN91:1;              /* Watchdog enable for channel 91. */
      vuint32_t CWEN90:1;              /* Watchdog enable for channel 90. */
      vuint32_t CWEN89:1;              /* Watchdog enable for channel 89. */
      vuint32_t CWEN88:1;              /* Watchdog enable for channel 88. */
      vuint32_t CWEN87:1;              /* Watchdog enable for channel 87. */
      vuint32_t CWEN86:1;              /* Watchdog enable for channel 86. */
      vuint32_t CWEN85:1;              /* Watchdog enable for channel 85. */
      vuint32_t CWEN84:1;              /* Watchdog enable for channel 84. */
      vuint32_t CWEN83:1;              /* Watchdog enable for channel 83. */
      vuint32_t CWEN82:1;              /* Watchdog enable for channel 82. */
      vuint32_t CWEN81:1;              /* Watchdog enable for channel 81. */
      vuint32_t CWEN80:1;              /* Watchdog enable for channel 80. */
      vuint32_t CWEN79:1;              /* Watchdog enable for channel 79. */
      vuint32_t CWEN78:1;              /* Watchdog enable for channel 78. */
      vuint32_t CWEN77:1;              /* Watchdog enable for channel 77. */
      vuint32_t CWEN76:1;              /* Watchdog enable for channel 76. */
      vuint32_t CWEN75:1;              /* Watchdog enable for channel 75. */
      vuint32_t CWEN74:1;              /* Watchdog enable for channel 74. */
      vuint32_t CWEN73:1;              /* Watchdog enable for channel 73. */
      vuint32_t CWEN72:1;              /* Watchdog enable for channel 72. */
      vuint32_t CWEN71:1;              /* Watchdog enable for channel 71. */
      vuint32_t CWEN70:1;              /* Watchdog enable for channel 70. */
      vuint32_t CWEN69:1;              /* Watchdog enable for channel 69. */
      vuint32_t CWEN68:1;              /* Watchdog enable for channel 68. */
      vuint32_t CWEN67:1;              /* Watchdog enable for channel 67. */
      vuint32_t CWEN66:1;              /* Watchdog enable for channel 66. */
      vuint32_t CWEN65:1;              /* Watchdog enable for channel 65. */
      vuint32_t CWEN64:1;              /* Watchdog enable for channel 64. */
    } B;
  } CWENR2;

  uint8_t ADC_reserved11[4];
  union {                              /* Analog Watchdog Out of Range Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t AWOR_CH15:1;           /* Analog watchdog out of range for channel 15. */
      vuint32_t AWOR_CH14:1;           /* Analog watchdog out of range for channel 14. */
      vuint32_t AWOR_CH13:1;           /* Analog watchdog out of range for channel 13. */
      vuint32_t AWOR_CH12:1;           /* Analog watchdog out of range for channel 12. */
      vuint32_t AWOR_CH11:1;           /* Analog watchdog out of range for channel 11. */
      vuint32_t AWOR_CH10:1;           /* Analog watchdog out of range for channel 10. */
      vuint32_t AWOR_CH9:1;            /* Analog watchdog out of range for channel 9. */
      vuint32_t AWOR_CH8:1;            /* Analog watchdog out of range for channel 8. */
      vuint32_t AWOR_CH7:1;            /* Analog watchdog out of range for channel 7. */
      vuint32_t AWOR_CH6:1;            /* Analog watchdog out of range for channel 6. */
      vuint32_t AWOR_CH5:1;            /* Analog watchdog out of range for channel 5. */
      vuint32_t AWOR_CH4:1;            /* Analog watchdog out of range for channel 4. */
      vuint32_t AWOR_CH3:1;            /* Analog watchdog out of range for channel 3. */
      vuint32_t AWOR_CH2:1;            /* Analog watchdog out of range for channel 2. */
      vuint32_t AWOR_CH1:1;            /* Analog watchdog out of range for channel 1. */
      vuint32_t AWOR_CH0:1;            /* Analog watchdog out of range for channel 0. */
    } B;
  } AWORR0;

  union {                              /* Analog Watchdog Out of Range Register 1 */
    vuint32_t R;
    struct {
      vuint32_t AWOR_CH63:1;           /* Analog watchdog out of range for channel 63. */
      vuint32_t AWOR_CH62:1;           /* Analog watchdog out of range for channel 62. */
      vuint32_t AWOR_CH61:1;           /* Analog watchdog out of range for channel 61. */
      vuint32_t AWOR_CH60:1;           /* Analog watchdog out of range for channel 60. */
      vuint32_t AWOR_CH59:1;           /* Analog watchdog out of range for channel 59. */
      vuint32_t AWOR_CH58:1;           /* Analog watchdog out of range for channel 58. */
      vuint32_t AWOR_CH57:1;           /* Analog watchdog out of range for channel 57. */
      vuint32_t AWOR_CH56:1;           /* Analog watchdog out of range for channel 56. */
      vuint32_t AWOR_CH55:1;           /* Analog watchdog out of range for channel 55. */
      vuint32_t AWOR_CH54:1;           /* Analog watchdog out of range for channel 54. */
      vuint32_t AWOR_CH53:1;           /* Analog watchdog out of range for channel 53. */
      vuint32_t AWOR_CH52:1;           /* Analog watchdog out of range for channel 52. */
      vuint32_t AWOR_CH51:1;           /* Analog watchdog out of range for channel 51. */
      vuint32_t AWOR_CH50:1;           /* Analog watchdog out of range for channel 50. */
      vuint32_t AWOR_CH49:1;           /* Analog watchdog out of range for channel 49. */
      vuint32_t AWOR_CH48:1;           /* Analog watchdog out of range for channel 48. */
      vuint32_t AWOR_CH47:1;           /* Analog watchdog out of range for channel 47. */
      vuint32_t AWOR_CH46:1;           /* Analog watchdog out of range for channel 46. */
      vuint32_t AWOR_CH45:1;           /* Analog watchdog out of range for channel 45. */
      vuint32_t AWOR_CH44:1;           /* Analog watchdog out of range for channel 44. */
      vuint32_t AWOR_CH43:1;           /* Analog watchdog out of range for channel 43. */
      vuint32_t AWOR_CH42:1;           /* Analog watchdog out of range for channel 42. */
      vuint32_t AWOR_CH41:1;           /* Analog watchdog out of range for channel 41. */
      vuint32_t AWOR_CH40:1;           /* Analog watchdog out of range for channel 40. */
      vuint32_t AWOR_CH39:1;           /* Analog watchdog out of range for channel 39. */
      vuint32_t AWOR_CH38:1;           /* Analog watchdog out of range for channel 38. */
      vuint32_t AWOR_CH37:1;           /* Analog watchdog out of range for channel 37. */
      vuint32_t AWOR_CH36:1;           /* Analog watchdog out of range for channel 36. */
      vuint32_t AWOR_CH35:1;           /* Analog watchdog out of range for channel 35. */
      vuint32_t AWOR_CH34:1;           /* Analog watchdog out of range for channel 34. */
      vuint32_t AWOR_CH33:1;           /* Analog watchdog out of range for channel 33. */
      vuint32_t AWOR_CH32:1;           /* Analog watchdog out of range for channel 32. */
    } B;
  } AWORR1;

  union {                              /* Analog Watchdog Out of Range Register 2 */
    vuint32_t R;
    struct {
      vuint32_t AWOR_CH95:1;           /* Analog watchdog out of range for channel 95. */
      vuint32_t AWOR_CH94:1;           /* Analog watchdog out of range for channel 94. */
      vuint32_t AWOR_CH93:1;           /* Analog watchdog out of range for channel 93. */
      vuint32_t AWOR_CH92:1;           /* Analog watchdog out of range for channel 92. */
      vuint32_t AWOR_CH91:1;           /* Analog watchdog out of range for channel 91. */
      vuint32_t AWOR_CH90:1;           /* Analog watchdog out of range for channel 90. */
      vuint32_t AWOR_CH89:1;           /* Analog watchdog out of range for channel 89. */
      vuint32_t AWOR_CH88:1;           /* Analog watchdog out of range for channel 88. */
      vuint32_t AWOR_CH87:1;           /* Analog watchdog out of range for channel 87. */
      vuint32_t AWOR_CH86:1;           /* Analog watchdog out of range for channel 86. */
      vuint32_t AWOR_CH85:1;           /* Analog watchdog out of range for channel 85. */
      vuint32_t AWOR_CH84:1;           /* Analog watchdog out of range for channel 84. */
      vuint32_t AWOR_CH83:1;           /* Analog watchdog out of range for channel 83. */
      vuint32_t AWOR_CH82:1;           /* Analog watchdog out of range for channel 82. */
      vuint32_t AWOR_CH81:1;           /* Analog watchdog out of range for channel 81. */
      vuint32_t AWOR_CH80:1;           /* Analog watchdog out of range for channel 80. */
      vuint32_t AWOR_CH79:1;           /* Analog watchdog out of range for channel 79. */
      vuint32_t AWOR_CH78:1;           /* Analog watchdog out of range for channel 78. */
      vuint32_t AWOR_CH77:1;           /* Analog watchdog out of range for channel 77. */
      vuint32_t AWOR_CH76:1;           /* Analog watchdog out of range for channel 76. */
      vuint32_t AWOR_CH75:1;           /* Analog watchdog out of range for channel 75. */
      vuint32_t AWOR_CH74:1;           /* Analog watchdog out of range for channel 74. */
      vuint32_t AWOR_CH73:1;           /* Analog watchdog out of range for channel 73. */
      vuint32_t AWOR_CH72:1;           /* Analog watchdog out of range for channel 72. */
      vuint32_t AWOR_CH71:1;           /* Analog watchdog out of range for channel 71. */
      vuint32_t AWOR_CH70:1;           /* Analog watchdog out of range for channel 70. */
      vuint32_t AWOR_CH69:1;           /* Analog watchdog out of range for channel 69. */
      vuint32_t AWOR_CH68:1;           /* Analog watchdog out of range for channel 68. */
      vuint32_t AWOR_CH67:1;           /* Analog watchdog out of range for channel 67. */
      vuint32_t AWOR_CH66:1;           /* Analog watchdog out of range for channel 66. */
      vuint32_t AWOR_CH65:1;           /* Analog watchdog out of range for channel 65. */
      vuint32_t AWOR_CH64:1;           /* Analog watchdog out of range for channel 64. */
    } B;
  } AWORR2;

  uint8_t ADC_reserved12[164];
  union {                              /* Calibration, BIST Control and status Register */
    vuint32_t R;
    struct {
      vuint32_t OPMODE:3;
      vuint32_t TSAMP:2;               /* Test Sample period in Calibration, BIST and Offset calculation process. */
      vuint32_t ACC_C:1;
      vuint32_t ACC_B:2;
      vuint32_t  :8;
      vuint32_t C_T_BUSY:1;
      vuint32_t  :1;
      vuint32_t  :6;
      vuint32_t  :1;
      vuint32_t NR_SMPL:2;             /* Number of Samples for averaging. */
      vuint32_t AVG_EN:1;              /* Average Enable (for Calibration only). */
      vuint32_t TEST_FAIL:1;           /* Test Fail. */
      vuint32_t ACC_A:2;
      vuint32_t TEST_EN:1;             /* Enable the test. */
    } B;
  } CALBISTREG;

  uint8_t ADC_reserved13[4];
  union {                              /* Offset and Gain User Register */
    vuint32_t R;
    struct {
      vuint32_t  :6;
      vuint32_t GAIN_USER:10;
      vuint32_t  :8;
      vuint32_t OFFSET_USER:8;
    } B;
  } OFSGNUSR;
};


/* ============================================================================
   =============================== Module: AIPS ===============================
   ============================================================================ */

struct AIPS_tag {
  union {                              /* Master Privilege Register A */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t MTR0:1;                /* Master 0 Trusted For Read */
      vuint32_t MTW0:1;                /* Master 0 Trusted For Writes */
      vuint32_t MPL0:1;                /* Master 0 Privilege Level */
      vuint32_t  :1;
      vuint32_t MTR1:1;                /* Master 1 trusted for read */
      vuint32_t MTW1:1;                /* Master 1 trusted for writes */
      vuint32_t MPL1:1;                /* Master 1 privilege level */
      vuint32_t  :1;
      vuint32_t MTR2:1;                /* Master 2 Trusted For Read */
      vuint32_t MTW2:1;                /* Master 2 Trusted For Writes */
      vuint32_t MPL2:1;                /* Master 2 Privilege Level */
      vuint32_t  :1;
      vuint32_t MTR3:1;                /* Master 3 Trusted For Read */
      vuint32_t MTW3:1;                /* Master 3 Trusted For Writes */
      vuint32_t MPL3:1;                /* Master 3 Privilege Level */
      vuint32_t  :1;
      vuint32_t MTR4:1;                /* Master 4 Trusted For Read */
      vuint32_t MTW4:1;                /* Master 4 Trusted For Writes */
      vuint32_t MPL4:1;                /* Master 4 Privilege Level */
      vuint32_t  :1;
      vuint32_t MTR5:1;                /* Master 5 Trusted For Read */
      vuint32_t MTW5:1;                /* Master 5 Trusted For Writes */
      vuint32_t MPL5:1;                /* Master 5 Privilege Level */
      vuint32_t  :1;
      vuint32_t MTR6:1;                /* Master 6 trusted for read */
      vuint32_t MTW6:1;                /* Master 6 trusted for writes */
      vuint32_t MPL6:1;                /* Master 6 privilege level */
      vuint32_t  :4;
    } B;
  } MPRA;

  union {                              /* Master Privilege Register B */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t  :1;
      vuint32_t MTR9:1;                /* Master 9 trusted for read */
      vuint32_t MTW9:1;                /* Master 9 trusted for writes */
      vuint32_t MPL9:1;                /* Master 9 privilege level */
      vuint32_t  :1;
      vuint32_t MTR10:1;               /* Master 10 trusted for read */
      vuint32_t MTW10:1;               /* Master 10 trusted for writes */
      vuint32_t MPL10:1;               /* Master 10 privilege level */
      vuint32_t  :1;
      vuint32_t MTR11:1;               /* Master 11 trusted for read */
      vuint32_t MTW11:1;               /* Master 11 trusted for writes */
      vuint32_t MPL11:1;               /* Master 11 privilege level */
      vuint32_t  :1;
      vuint32_t MTR12:1;               /* Master 12 trusted for read */
      vuint32_t MTW12:1;               /* Master 12 trusted for writes */
      vuint32_t MPL12:1;               /* Master 12 privilege level */
      vuint32_t  :1;
      vuint32_t MTR13:1;               /* Master 13 trusted for read */
      vuint32_t MTW13:1;               /* Master 13 trusted for writes */
      vuint32_t MPL13:1;               /* Master 13 Privilege Level */
      vuint32_t  :4;
      vuint32_t  :4;
    } B;
  } MPRB;

  uint8_t AIPS_reserved0[248];
  union {                              /* Peripheral Access Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t SP0:1;                 /* Supervisor Protect */
      vuint32_t WP0:1;                 /* Write Protect */
      vuint32_t TP0:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP1:1;                 /* Supervisor Protect */
      vuint32_t WP1:1;                 /* Write Protect */
      vuint32_t TP1:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP2:1;                 /* Supervisor Protect */
      vuint32_t WP2:1;                 /* Write Protect */
      vuint32_t TP2:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP3:1;                 /* Supervisor Protect */
      vuint32_t WP3:1;                 /* Write Protect */
      vuint32_t TP3:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP4:1;                 /* Supervisor Protect */
      vuint32_t WP4:1;                 /* Write Protect */
      vuint32_t TP4:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP5:1;                 /* Supervisor Protect */
      vuint32_t WP5:1;                 /* Write Protect */
      vuint32_t TP5:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP6:1;                 /* Supervisor Protect */
      vuint32_t WP6:1;                 /* Write Protect */
      vuint32_t TP6:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP7:1;                 /* Supervisor Protect */
      vuint32_t WP7:1;                 /* Write Protect */
      vuint32_t TP7:1;                 /* Trusted Protect */
    } B;
  } PACR[8];

  uint8_t AIPS_reserved1[32];
  union {                              /* Off-Platform Peripheral Access Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t SP0:1;                 /* Supervisor Protect */
      vuint32_t WP0:1;                 /* Write Protect */
      vuint32_t TP0:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP1:1;                 /* Supervisor Protect */
      vuint32_t WP1:1;                 /* Write Protect */
      vuint32_t TP1:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP2:1;                 /* Supervisor Protect */
      vuint32_t WP2:1;                 /* Write Protect */
      vuint32_t TP2:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP3:1;                 /* Supervisor Protect */
      vuint32_t WP3:1;                 /* Write Protect */
      vuint32_t TP3:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP4:1;                 /* Supervisor Protect */
      vuint32_t WP4:1;                 /* Write Protect */
      vuint32_t TP4:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP5:1;                 /* Supervisor Protect */
      vuint32_t WP5:1;                 /* Write Protect */
      vuint32_t TP5:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP6:1;                 /* Supervisor Protect */
      vuint32_t WP6:1;                 /* Write Protect */
      vuint32_t TP6:1;                 /* Trusted Protect */
      vuint32_t  :1;
      vuint32_t SP7:1;                 /* Supervisor Protect */
      vuint32_t WP7:1;                 /* Write Protect */
      vuint32_t TP7:1;                 /* Trusted Protect */
    } B;
  } OPACR[32];
};


/* ============================================================================
   =============================== Module: AXBS ===============================
   ============================================================================ */

struct AXBS_tag {
  struct {
    union {                            /* Priority Registers Slave */
      vuint32_t R;
      struct {
        vuint32_t  :1;
        vuint32_t M7:3;                /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M6:3;                /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M5:3;                /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M4:3;                /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M3:3;                /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M2:3;                /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M1:3;                /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;
        vuint32_t M0:3;                /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
      } B;
    } PRS;
    uint8_t PORT_reserved0[12];
    union {                            /* Control Register */
      vuint32_t R;
      struct {
        vuint32_t RO:1;                /* Read Only */
        vuint32_t  :1;
        vuint32_t  :6;
        vuint32_t HPE7:1;
        vuint32_t HPE6:1;
        vuint32_t HPE5:1;
        vuint32_t HPE4:1;
        vuint32_t HPE3:1;
        vuint32_t HPE2:1;
        vuint32_t HPE1:1;
        vuint32_t HPE0:1;
        vuint32_t  :6;
        vuint32_t ARB:2;               /* Arbitration Mode */
        vuint32_t  :2;
        vuint32_t PCTL:2;              /* Parking Control */
        vuint32_t  :1;
        vuint32_t PARK:3;              /* Park */
      } B;
    } CRS;
    uint8_t PORT_reserved1[236];
  } PORT[8];

  struct {
    union {                            /* Master General Purpose Control Register */
      vuint32_t R;
      struct {
        vuint32_t  :29;
        vuint32_t AULB:3;              /* Arbitrates On Undefined Length Bursts */
      } B;
    } MGPCR;
    uint8_t MGPCR_reserved0[252];
  } MGPCR[8];
};


/* ============================================================================
   =============================== Module: BCTU ===============================
   ============================================================================ */

struct BCTU_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t MDIS:1;                /* Module Disable */
      vuint32_t FRZ:1;                 /* Freeze mode - for debug operation. */
      vuint32_t  :2;
      vuint32_t GTRGEN:1;              /* Global Trigger Enable. */
      vuint32_t  :6;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;
      vuint32_t DMA1:1;                /* ADC1DR data transferring by DMA. */
      vuint32_t DMA0:1;                /* ADC0DR data transferring by DMA. */
      vuint32_t  :8;
      vuint32_t TRGEN:1;               /* Trigger interrupt request enable. */
      vuint32_t  :1;
      vuint32_t LIST_IEN:1;            /* LIST interrupt enable. */
      vuint32_t  :1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t IEN1:1;                /* Interrupt enable bit for ADC1DR new data. */
      vuint32_t IEN0:1;                /* Interrupt enable bit for ADC0DR new data. */
    } B;
  } MCR;

  uint8_t BCTU_reserved0[4];
  union {                              /* Module Status register */
    vuint32_t R;
    struct {
      vuint32_t TRGF_CLR:1;            /* TRGF clear */
      vuint32_t  :3;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t LIST1_Last_CLR:1;
      vuint32_t LIST0_Last_CLR:1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t DATAOVR1_CLR:1;        /* Clears DATAOVR1 flag */
      vuint32_t DATAOVR0_CLR:1;        /* Clears DATAOVR0 flag */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t NDATA1_CLR:1;          /* Clears NDATA1 flag */
      vuint32_t NDATA0_CLR:1;          /* Clears NDATA0 flag */
      vuint32_t TRGF:1;                /* Trigger Flag */
      vuint32_t  :3;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t LIST1_Last:1;
      vuint32_t LIST0_Last:1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t DATAOVR1:1;
      vuint32_t DATAOVR0:1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t NDATA1:1;
      vuint32_t NDATA0:1;
    } B;
  } MSR;

  uint8_t BCTU_reserved1[12];
  union {                              /* Trigger Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t LOOP:1;                /* LOOP bit */
      vuint32_t  :7;
      vuint32_t  :8;                   /* Reserved. */
      vuint32_t TRIGEN:1;              /* Trigger enable */
      vuint32_t TRG_FLAG:1;
      vuint32_t TRS:1;                 /* Trigger resolution */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t ADC_SEL1:1;
      vuint32_t ADC_SEL0:1;
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t CHANNEL_VALUE_OR_LADDR:7; /* Channel Value or List Address Value. */
    } B;
  } TRGCFG[96];

  uint8_t BCTU_reserved2[144];
  union {                              /* Write Protection register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t PROTEC_CODE:4;         /* The Protection code sets protection for the write protected registers */
    } B;
  } WRPROT;

  union {                              /* Software Trigger register 1 */
    vuint32_t R;
    struct {
      vuint32_t SFTRG31:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG30:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG29:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG28:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG27:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG26:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG25:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG24:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG23:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG22:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG21:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG20:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG19:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG18:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG17:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG16:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG15:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG14:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG13:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG12:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG11:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG10:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG9:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG8:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG7:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG6:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG5:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG4:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG3:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG2:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG1:1;              /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG0:1;              /* Software trigger to start an ADC conversion. */
    } B;
  } SFTRGR1;

  union {                              /* Software Trigger register 1 */
    vuint32_t R;
    struct {
      vuint32_t SFTRG63:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG62:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG61:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG60:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG59:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG58:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG57:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG56:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG55:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG54:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG53:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG52:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG51:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG50:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG49:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG48:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG47:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG46:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG45:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG44:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG43:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG42:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG41:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG40:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG39:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG38:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG37:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG36:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG35:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG34:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG33:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG32:1;             /* Software trigger to start an ADC conversion. */
    } B;
  } SFTRGR2;

  union {                              /* Software Trigger register 1 */
    vuint32_t R;
    struct {
      vuint32_t SFTRG95:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG94:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG93:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG92:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG91:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG90:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG89:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG88:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG87:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG86:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG85:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG84:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG83:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG82:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG81:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG80:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG79:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG78:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG77:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG76:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG75:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG74:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG73:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG72:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG71:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG70:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG69:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG68:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG67:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG66:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG65:1;             /* Software trigger to start an ADC conversion. */
      vuint32_t SFTRG64:1;             /* Software trigger to start an ADC conversion. */
    } B;
  } SFTRGR3;

  uint8_t BCTU_reserved3[4];
  union {                              /* ADC0 Result Data register */
    vuint32_t R;
    struct {
      vuint32_t TRG_SRC:8;
      vuint32_t CH:8;
      vuint32_t LIST:1;
      vuint32_t LAST:1;
      vuint32_t  :2;
      vuint32_t ADC_DATA:12;
    } B;
  } ADC0DR;

  union {                              /* ADC1 result data register */
    vuint32_t R;
    struct {
      vuint32_t TRG_SRC:8;
      vuint32_t CH:8;
      vuint32_t LIST:1;
      vuint32_t LAST:1;
      vuint32_t  :2;
      vuint32_t ADC_DATA:12;
    } B;
  } ADC1DR;

  uint8_t BCTU_reserved4[8];
  union {                              /* LIST Size Status register */
    vuint32_t R;
    struct {
      vuint32_t  :24;                  /* Reserved. */
      vuint32_t LISTSZ:8;              /* Size of the LIST in number of elements. */
    } B;
  } LISTSTAR;

  union {                              /* LIST Channel Address Register */
    vuint32_t R;
    struct {
      vuint32_t LAST_y:1;              /* Last channel in the list of channels. */
      vuint32_t  :3;
      vuint32_t  :4;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t ADC_CH_y:7;            /* ADC channel selection. */
      vuint32_t LAST_y_plus_1:1;       /* Second to last channel in the list of channels. */
      vuint32_t  :3;
      vuint32_t  :4;                   /* Reserved. */
      vuint32_t  :1;                   /* Reserved. */
      vuint32_t ADC_CHL_y_plus_1:7;    /* ADC channel selection. */
    } B;
  } LISTCHR[16];
};


/* ============================================================================
   =============================== Module: C55FMC =============================
   ============================================================================ */

struct C55FMC_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t RVE:1;                 /* Read Voltage Error */
      vuint32_t RRE:1;                 /* Read Reference Error */
      vuint32_t AEE:1;                 /* Address Encode Error */
      vuint32_t EEE:1;                 /* ECC after ECC Error */
      vuint32_t  :12;
      vuint32_t EER:1;                 /* ECC Event Error */
      vuint32_t RWE:1;                 /* Read-While-Write Event Error */
      vuint32_t SBC:1;                 /* Single Bit Correction */
      vuint32_t  :1;
      vuint32_t PEAS:1;                /* Program Access Space */
      vuint32_t DONE:1;                /* State Machine Status */
      vuint32_t PEG:1;                 /* Program/Erase Good */
      vuint32_t PECIE:1;               /* Program/Erase Complete Interrupt Enable */
      vuint32_t  :3;
      vuint32_t PGM:1;                 /* Program */
      vuint32_t PSUS:1;                /* Program Suspend */
      vuint32_t ERS:1;                 /* Erase */
      vuint32_t ESUS:1;                /* Erase Suspend */
      vuint32_t EHV:1;                 /* Enable High Voltage */
    } B;
  } MCR;

  uint8_t C55FMC_reserved0[4];
  union {                              /* Extended Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t HT:1;                  /* High Temperature Enabled. */
      vuint32_t  :2;
      vuint32_t n256K:5;
      vuint32_t n64Kh:3;
      vuint32_t n32Kh:2;
      vuint32_t n16Kh:3;
      vuint32_t n64Km:3;
      vuint32_t n32Km:2;
      vuint32_t n16Km:3;
      vuint32_t n64Kl:3;
      vuint32_t n32Kl:2;
      vuint32_t n16Kl:3;
    } B;
  } MCRE;

  uint8_t C55FMC_reserved1[4];
  union {                              /* Lock 0 register */
    vuint32_t R;
    struct {
      vuint32_t TSLOCK:1;              /* UTest NVM Lock. */
      vuint32_t  :1;
      vuint32_t LOWLOCK:14;            /* Low Block Lock */
      vuint32_t MIDLOCK:16;            /* Mid Block Lock */
    } B;
  } LOCK0;

  union {                              /* Lock 1 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t HIGHLOCK:16;           /* High Block Lock */
    } B;
  } LOCK1;

  union {                              /* Lock 2 register */
    vuint32_t R;
    struct {
      vuint32_t A256KLOCK:32;          /* 256 KB Block Lock */
    } B;
  } LOCK2;

  union {                              /* Lock 3 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t A256KLOCK:16;          /* 256 KB Block Lock */
    } B;
  } LOCK3;

  uint8_t C55FMC_reserved2[24];
  union {                              /* Select 0 register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t LOWSEL:14;             /* LOW Block Select. */
      vuint32_t MIDSEL:16;             /* Mid Block Select. */
    } B;
  } SEL0;

  union {                              /* Select 1 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t HIGHSEL:16;            /* High Block Select. */
    } B;
  } SEL1;

  union {                              /* Select 2 register */
    vuint32_t R;
    struct {
      vuint32_t A256KSEL:32;           /* 256 KB Block Select. */
    } B;
  } SEL2;

  union {                              /* Select 3 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t A256KSEL:16;           /* 256 KB Block Select. */
    } B;
  } SEL3;

  uint8_t C55FMC_reserved3[8];
  union {                              /* Address register */
    vuint32_t R;
    struct {
      vuint32_t SAD:1;
      vuint32_t aH:1;
      vuint32_t aM:1;
      vuint32_t aL:1;
      vuint32_t a256k:1;
      vuint32_t a64k:1;
      vuint32_t a32k:1;
      vuint32_t a16k:1;
      vuint32_t ADDR:21;
      vuint32_t  :3;
    } B;
  } ADR;

  union {                              /* UTest 0 register */
    vuint32_t R;
    struct {
      vuint32_t UTE:1;
      vuint32_t SBCE:1;
      vuint32_t  :11;
      vuint32_t CPR:1;
      vuint32_t CPA:1;
      vuint32_t CPE:1;
      vuint32_t  :6;
      vuint32_t NAIBP:1;
      vuint32_t AIBPE:1;
      vuint32_t  :1;
      vuint32_t AISUS:1;
      vuint32_t MRE:1;
      vuint32_t MRV:1;
      vuint32_t  :1;
      vuint32_t AIS:1;
      vuint32_t AIE:1;
      vuint32_t AID:1;
    } B;
  } UT0;

  union {                              /* UMISR register */
    vuint32_t R;
    struct {
      vuint32_t MISR:32;
    } B;
  } UM[9];

  union {                              /* UMISR register */
    vuint32_t R;
    struct {
      vuint32_t  :31;
      vuint32_t MISR:1;                /* MISR[288]. */
    } B;
  } UM9;

  union {                              /* Over-Program Protection 0 register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t LOWOPP:14;             /* Low Block Over-Program Protection[13:0]. */
      vuint32_t MIDOPP:16;             /* Mid Block Over-Program Protection[15:0]. */
    } B;
  } OPP0;

  union {                              /* Over-Program Protection 1 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t HIGHOPP:16;            /* High Block Over-Program Protection[15:0]. */
    } B;
  } OPP1;

  union {                              /* Over-Program Protection 2 register */
    vuint32_t R;
    struct {
      vuint32_t A256KOPP:32;           /* 256K Block Over-Program Protection[31:0]. */
    } B;
  } OPP2;

  union {                              /* Over-Program Protection 3 register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t A256KOPP:16;           /* 256K Block Over-Program Protection[47:32]. */
    } B;
  } OPP3;

  union {                              /* Test Mode Disable Password Check register */
    vuint32_t R;
    struct {
      vuint32_t PWD:32;                /* Password challenge */
    } B;
  } TMD;
};


/* ============================================================================
   =============================== Module: CAN_0 ==============================
   ============================================================================ */

struct CAN_0_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t MDIS:1;                /* Module Disable */
      vuint32_t FRZ:1;                 /* Freeze Enable */
      vuint32_t RFEN:1;                /* Rx FIFO Enable */
      vuint32_t HALT:1;                /* Halt FlexCAN */
      vuint32_t NOTRDY:1;              /* FlexCAN Not Ready */
      vuint32_t WAKMSK:1;              /* Wake Up Interrupt Mask */
      vuint32_t SOFTRST:1;             /* Soft Reset */
      vuint32_t FRZACK:1;              /* Freeze Mode Acknowledge */
      vuint32_t SUPV:1;                /* Supervisor Mode */
      vuint32_t SLFWAK:1;              /* Self Wake Up */
      vuint32_t WRNEN:1;               /* Warning Interrupt Enable */
      vuint32_t LPMACK:1;              /* Low-Power Mode Acknowledge */
      vuint32_t WAKSRC:1;              /* Wake Up Source */
      vuint32_t  :1;
      vuint32_t SRXDIS:1;              /* Self Reception Disable */
      vuint32_t IRMQ:1;                /* Individual Rx Masking And Queue Enable */
      vuint32_t DMA:1;                 /* DMA Enable */
      vuint32_t PNET_EN:1;             /* Pretended Networking Enable */
      vuint32_t LPRIOEN:1;             /* Local Priority Enable */
      vuint32_t AEN:1;                 /* Abort Enable */
      vuint32_t FDEN:1;                /* CAN FD operation enable */
      vuint32_t  :1;
      vuint32_t IDAM:2;                /* ID Acceptance Mode */
      vuint32_t  :1;
      vuint32_t MAXMB:7;               /* Number Of The Last Message Buffer */
    } B;
  } MCR;

  union {                              /* Control 1 register */
    vuint32_t R;
    struct {
      vuint32_t PRESDIV:8;             /* Prescaler Division Factor */
      vuint32_t RJW:2;                 /* Resync Jump Width */
      vuint32_t PSEG1:3;               /* Phase Segment 1 */
      vuint32_t PSEG2:3;               /* Phase Segment 2 */
      vuint32_t BOFFMSK:1;             /* Bus Off Interrupt Mask */
      vuint32_t ERRMSK:1;              /* Error Interrupt Mask */
      vuint32_t CLKSRC:1;              /* CAN Engine Clock Source */
      vuint32_t LPB:1;                 /* Loop Back Mode */
      vuint32_t TWRNMSK:1;             /* Tx Warning Interrupt Mask */
      vuint32_t RWRNMSK:1;             /* Rx Warning Interrupt Mask */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t SMP:1;                 /* CAN Bit Sampling */
      vuint32_t BOFFREC:1;             /* Bus Off Recovery */
      vuint32_t TSYN:1;                /* Timer Sync */
      vuint32_t LBUF:1;                /* Lowest Buffer Transmitted First */
      vuint32_t LOM:1;                 /* Listen-Only Mode */
      vuint32_t PROPSEG:3;             /* Propagation Segment */
    } B;
  } CTRL1;

  union {                              /* Free Running Timer */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TIMER:16;              /* Timer Value */
    } B;
  } TIMER;

  uint8_t CAN_0_reserved0[4];
  union {                              /* Rx Mailboxes Global Mask Register */
    vuint32_t R;
    struct {
      vuint32_t MG:32;                 /* Rx Mailboxes Global Mask Bits */
    } B;
  } RXMGMASK;

  union {                              /* Rx 14 Mask register */
    vuint32_t R;
    struct {
      vuint32_t RX14M:32;              /* Rx Buffer 14 Mask Bits */
    } B;
  } RX14MASK;

  union {                              /* Rx 15 Mask register */
    vuint32_t R;
    struct {
      vuint32_t RX15M:32;              /* Rx Buffer 15 Mask Bits */
    } B;
  } RX15MASK;

  union {                              /* Error Counter */
    vuint32_t R;
    struct {
      vuint32_t RXERRCNT_FAST:8;       /* Receive Error Counter for fast bits */
      vuint32_t TXERRCNT_FAST:8;       /* Transmit Error Counter for fast bits */
      vuint32_t RXERRCNT:8;            /* Receive Error Counter */
      vuint32_t TXERRCNT:8;            /* Transmit Error Counter */
    } B;
  } ECR;

  union {                              /* Error and Status 1 register */
    vuint32_t R;
    struct {
      vuint32_t BIT1ERR_FAST:1;        /* Bit1 Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t BIT0ERR_FAST:1;        /* Bit0 Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t  :1;
      vuint32_t CRCERR_FAST:1;         /* Cyclic Redundancy Check Error in the CRC field of CAN FD frames with the BRS bit set */
      vuint32_t FRMERR_FAST:1;         /* Form Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t STFERR_FAST:1;         /* Stuffing Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t  :4;
      vuint32_t ERROVR:1;              /* Error Overrun bit */
      vuint32_t ERRINT_FAST:1;         /* Error Interrupt for errors detected in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t BOFFDONEINT:1;         /* Bus Off Done Interrupt */
      vuint32_t SYNCH:1;               /* CAN Synchronization Status */
      vuint32_t TWRNINT:1;             /* Tx Warning Interrupt Flag */
      vuint32_t RWRNINT:1;             /* Rx Warning Interrupt Flag */
      vuint32_t BIT1ERR:1;             /* Bit1 Error */
      vuint32_t BIT0ERR:1;             /* Bit0 Error */
      vuint32_t ACKERR:1;              /* Acknowledge Error */
      vuint32_t CRCERR:1;              /* Cyclic Redundancy Check Error */
      vuint32_t FRMERR:1;              /* Form Error */
      vuint32_t STFERR:1;              /* Stuffing Error */
      vuint32_t TXWRN:1;               /* TX Error Warning */
      vuint32_t RXWRN:1;               /* Rx Error Warning */
      vuint32_t IDLE:1;
      vuint32_t TX:1;                  /* FlexCAN In Transmission */
      vuint32_t FLTCONF:2;             /* Fault Confinement State */
      vuint32_t RX:1;                  /* FlexCAN In Reception */
      vuint32_t BOFFINT:1;             /* Bus Off Interrupt */
      vuint32_t ERRINT:1;              /* Error Interrupt */
      vuint32_t WAKINT:1;              /* Wake-Up Interrupt */
    } B;
  } ESR1;

  union {                              /* Interrupt Masks 2 register */
    vuint32_t R;
    struct {
      vuint32_t BUF63TO32M:32;         /* Buffer MB i Mask */
    } B;
  } IMASK2;

  union {                              /* Interrupt Masks 1 register */
    vuint32_t R;
    struct {
      vuint32_t BUF31TO0M:32;          /* Buffer MB i Mask */
    } B;
  } IMASK1;

  union {                              /* Interrupt Flags 2 register */
    vuint32_t R;
    struct {
      vuint32_t BUF63TO32I:32;         /* Buffer MB i Interrupt */
    } B;
  } IFLAG2;

  union {                              /* Interrupt Flags 1 register */
    vuint32_t R;
    struct {
      vuint32_t BUF31TO8I:24;          /* Buffer MBi Interrupt */
      vuint32_t BUF7I:1;               /* Buffer MB7 Interrupt Or "Rx FIFO Overflow" */
      vuint32_t BUF6I:1;               /* Buffer MB6 Interrupt Or "Rx FIFO Warning" */
      vuint32_t BUF5I:1;               /* Buffer MB5 Interrupt Or "Frames available in Rx FIFO" */
      vuint32_t BUF4TO1I:4;            /* Buffer MB i Interrupt Or "reserved" */
      vuint32_t BUF0I:1;               /* Buffer MB0 Interrupt Or "reserved" */
    } B;
  } IFLAG1;

  union {                              /* Control 2 register */
    vuint32_t R;
    struct {
      vuint32_t ERRMSK_FAST:1;         /* Error Interrupt Mask for errors detected in the Data Phase of fast CAN FD frames */
      vuint32_t BOFFDONEMSK:1;         /* Bus Off Done Interrupt Mask */
      vuint32_t ECRWRE:1;              /* Error-correction Configuration Register Write Enable */
      vuint32_t WRMFRZ:1;              /* Write-Access To Memory In Freeze Mode */
      vuint32_t RFFN:4;                /* Number Of Rx FIFO Filters */
      vuint32_t TASD:5;                /* Tx Arbitration Start Delay */
      vuint32_t MRP:1;                 /* Mailboxes Reception Priority */
      vuint32_t RRS:1;                 /* Remote Request Storing */
      vuint32_t EACEN:1;               /* Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes */
      vuint32_t TIMER_SRC:1;           /* Timer Source */
      vuint32_t  :15;
    } B;
  } CTRL2;

  union {                              /* Error and Status 2 register */
    vuint32_t R;
    struct {
      vuint32_t  :9;
      vuint32_t LPTM:7;                /* Lowest Priority Tx Mailbox */
      vuint32_t  :1;
      vuint32_t VPS:1;                 /* Valid Priority Status */
      vuint32_t IMB:1;                 /* Inactive Mailbox */
      vuint32_t  :13;
    } B;
  } ESR2;

  uint8_t CAN_0_reserved1[8];
  union {                              /* CRC Register */
    vuint32_t R;
    struct {
      vuint32_t  :9;
      vuint32_t MBCRC:7;               /* CRC Mailbox */
      vuint32_t  :1;
      vuint32_t TXCRC:15;              /* Transmitted CRC value */
    } B;
  } CRCR;

  union {                              /* Rx FIFO Global Mask register */
    vuint32_t R;
    struct {
      vuint32_t FGM:32;                /* Rx FIFO Global Mask Bits */
    } B;
  } RXFGMASK;

  union {                              /* Rx FIFO Information Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t IDHIT:9;               /* Identifier Acceptance Filter Hit Indicator */
    } B;
  } RXFIR;

  union {                              /* CAN Bit Timing Register */
    vuint32_t R;
    struct {
      vuint32_t BTF:1;                 /* Bit Timing Format Enable */
      vuint32_t EPRESDIV:10;           /* Extended Prescaler Division Factor */
      vuint32_t  :1;
      vuint32_t ERJW:4;                /* Extended Resync Jump Width */
      vuint32_t EPROPSEG:6;            /* Extended Propagation Segment */
      vuint32_t EPSEG1:5;              /* Extended Phase Segment 1 */
      vuint32_t EPSEG2:5;              /* Extended Phase Segment 2 */
    } B;
  } CBT;

  uint8_t CAN_0_reserved2[24];
  union {                              /* Interrupt Masks 3 Register */
    vuint32_t R;
    struct {
      vuint32_t BUF95TO64M:32;         /* Buffer MB i Mask */
    } B;
  } IMASK3;

  uint8_t CAN_0_reserved3[4];
  union {                              /* Interrupt Flags 3 Register */
    vuint32_t R;
    struct {
      vuint32_t BUF95TO64:32;          /* Buffer MB i Interrupt */
    } B;
  } IFLAG3;

  uint8_t CAN_0_reserved4[8];
  struct {
    union {                            /* Message Buffer 0 CS Register */
      vuint32_t R;
      struct {
        vuint32_t  :4;
        vuint32_t CODE:4;              /* Message Buffer Code */
        vuint32_t  :1;
        vuint32_t SRR:1;               /* Substitute Remote Request. Contains a fixed recessive bit. */
        vuint32_t IDE:1;               /* ID Extended. One/zero for extended/standard format frame. */
        vuint32_t RTR:1;               /* Remote Transmission Request. One/zero for remote/data frame. */
        vuint32_t DLC:4;               /* Length of the data to be stored/transmitted. */
        vuint32_t TIMESTAMP:16;        /* Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus. */
      } B;
    } CS;
    union {                            /* Message Buffer 0 ID Register */
      vuint32_t R;
      struct {
        vuint32_t PRIO:3;              /* Local Priority */
        vuint32_t ID_STD:11;           /* Frame Identifier Standard */
        vuint32_t ID_EXT:18;           /* Frame Identifier Extended */
      } B;
    } ID;
    union {
      vuint8_t B[8];
      vuint16_t H[4];
      vuint32_t W[2];
    } DATA;
  } MB[96];

  uint8_t CAN_0_reserved5[512];
  union {                              /* Rx Individual Mask Registers */
    vuint32_t R;
    struct {
      vuint32_t MI:32;                 /* Individual Mask Bits */
    } B;
  } RXIMR[96];

  uint8_t CAN_0_reserved6[224];
  union {                              /* Memory Error Control Register */
    vuint32_t R;
    struct {
      vuint32_t ECRWRDIS:1;            /* Error Configuration Register Write Disable */
      vuint32_t  :11;
      vuint32_t HANCEI_MSK:1;          /* Host Access With Non-Correctable Errors Interrupt Mask */
      vuint32_t FANCEI_MSK:1;          /* FlexCAN Access With Non-Correctable Errors Interrupt Mask */
      vuint32_t  :1;
      vuint32_t CEI_MSK:1;             /* Correctable Errors Interrupt Mask */
      vuint32_t HAERRIE:1;             /* Host Access Error Injection Enable */
      vuint32_t FAERRIE:1;             /* FlexCAN Access Error Injection Enable */
      vuint32_t EXTERRIE:1;            /* Extended Error Injection Enable */
      vuint32_t  :3;
      vuint32_t RERRDIS:1;             /* Error Report Disable */
      vuint32_t ECCDIS:1;              /* Error Correction Disable */
      vuint32_t NCEFAFRZ:1;            /* Non-Correctable Errors In FlexCAN Access Put Device In Freeze Mode */
      vuint32_t  :7;
    } B;
  } MECR;

  union {                              /* Error Injection Address Register */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t INJADDR:14;            /* Error Injection Address */
    } B;
  } ERRIAR;

  union {                              /* Error Injection Data Pattern Register */
    vuint32_t R;
    struct {
      vuint32_t DFLIP:32;              /* Data flip pattern */
    } B;
  } ERRIDPR;

  union {                              /* Error Injection Parity Pattern Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t PFLIP3:5;              /* Parity Flip Pattern For Byte 3 (most significant) */
      vuint32_t  :3;
      vuint32_t PFLIP2:5;              /* Parity Flip Pattern For Byte 2 */
      vuint32_t  :3;
      vuint32_t PFLIP1:5;              /* Parity Flip Pattern For Byte 1 */
      vuint32_t  :3;
      vuint32_t PFLIP0:5;              /* Parity Flip Pattern For Byte 0 (Least Significant) */
    } B;
  } ERRIPPR;

  union {                              /* Error Report Address Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t NCE:1;                 /* Non-Correctable Error */
      vuint32_t  :5;
      vuint32_t SAID:3;
      vuint32_t  :2;
      vuint32_t ERRADDR:14;            /* Address Where The Error Was Detected */
    } B;
  } RERRAR;

  union {                              /* Error Report Data Register */
    vuint32_t R;
    struct {
      vuint32_t RDATA:32;              /* Raw data word read from memory with error */
    } B;
  } RERRDR;

  union {                              /* Error Report Syndrome Register */
    vuint32_t R;
    struct {
      vuint32_t BE3:1;                 /* Byte Enabled For Byte 3 (Most Significant) */
      vuint32_t  :2;
      vuint32_t SYND3:5;               /* Error Syndrome For Byte 3 (Most Significant) */
      vuint32_t BE2:1;                 /* Byte Enabled For Byte 2 */
      vuint32_t  :2;
      vuint32_t SYND2:5;               /* Error Syndrome For Byte 2 */
      vuint32_t BE1:1;                 /* Byte Enabled For Byte 1 */
      vuint32_t  :2;
      vuint32_t SYND1:5;               /* Error Syndrome for Byte 1 */
      vuint32_t BE0:1;                 /* Byte Enabled For Byte 0 (least significant) */
      vuint32_t  :2;
      vuint32_t SYND0:5;               /* Error Syndrome For Byte 0 (least significant) */
    } B;
  } RERRSYNR;

  union {                              /* Error Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t HANCEIF:1;             /* Host Access With Non-Correctable Error Interrupt Flag */
      vuint32_t FANCEIF:1;             /* FlexCAN Access With Non-Correctable Error Interrupt Flag */
      vuint32_t  :1;
      vuint32_t CEIF:1;                /* Correctable Error Interrupt Flag */
      vuint32_t  :12;
      vuint32_t HANCEIOF:1;            /* Host Access With Non-Correctable Error Interrupt Overrun Flag */
      vuint32_t FANCEIOF:1;            /* FlexCAN Access With Non-Correctable Error Interrupt Overrun Flag */
      vuint32_t  :1;
      vuint32_t CEIOF:1;               /* Correctable Error Interrupt Overrun Flag */
    } B;
  } ERRSR;

  union {                              /* Pretended Networking Control 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t WTOF_MSK:1;            /* Wake Up by Timeout Flag Mask Bit */
      vuint32_t WUMF_MSK:1;            /* Wake Up by Match Flag Mask Bit */
      vuint32_t NMATCH:8;              /* Number of Messages Matching the Same Filtering Criteria */
      vuint32_t  :2;
      vuint32_t PLFS:2;                /* Payload Filtering Selection */
      vuint32_t IDFS:2;                /* ID Filtering Selection */
      vuint32_t FCS:2;                 /* Filtering Combination Selection */
    } B;
  } CTRL1_PN;

  union {                              /* Pretended Networking Control 2 Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t MATCHTO:16;            /* Timeout for No Message Matching the Filtering Criteria */
    } B;
  } CTRL2_PN;

  union {                              /* Pretended Networking Wake Up Match Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t WTOF:1;                /* Wake Up by Timeout Flag Bit */
      vuint32_t WUMF:1;                /* Wake Up by Match Flag Bit */
      vuint32_t MCOUNTER:8;            /* Number of Matches while in Pretended Networking */
      vuint32_t  :8;
    } B;
  } WU_MTC;

  union {                              /* Pretended Networking ID Filter 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t FLT_IDE:1;             /* ID Extended Filter */
      vuint32_t FLT_RTR:1;             /* Remote Transmission Request Filter */
      vuint32_t FLT_ID1:29;            /* ID Filter 1 for Pretended Networking filtering */
    } B;
  } FLT_ID1;

  union {                              /* Pretended Networking DLC Filter Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t FLT_DLC_LO:4;          /* Lower Limit for Length of Data Bytes Filter */
      vuint32_t  :12;
      vuint32_t FLT_DLC_HI:4;          /* Upper Limit for Length of Data Bytes Filter */
    } B;
  } FLT_DLC;

  union {                              /* Pretended Networking Payload Low Filter 1 Register */
    vuint32_t R;
    struct {
      vuint32_t Data_byte_0:8;         /* Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 0. */
      vuint32_t Data_byte_1:8;         /* Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 1. */
      vuint32_t Data_byte_2:8;         /* Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 2. */
      vuint32_t Data_byte_3:8;         /* Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 3. */
    } B;
  } PL1_LO;

  union {                              /* Pretended Networking Payload High Filter 1 Register */
    vuint32_t R;
    struct {
      vuint32_t Data_byte_4:8;         /* Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 4. */
      vuint32_t Data_byte_5:8;         /* Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 5. */
      vuint32_t Data_byte_6:8;         /* Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 6. */
      vuint32_t Data_byte_7:8;         /* Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 7. */
    } B;
  } PL1_HI;

  union {                              /* Pretended Networking ID Filter 2 Register / ID Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t IDE_MSK:1;             /* ID Extended Mask Bit */
      vuint32_t RTR_MSK:1;             /* Remote Transmission Request Mask Bit */
      vuint32_t FLT_ID2_IDMASK:29;     /* ID Filter 2 for Pretended Networking Filtering / ID Mask Bits for Pretended Networking ID Filtering */
    } B;
  } FLT_ID2_IDMASK;

  union {                              /* Pretended Networking Payload Low Filter 2 Register / Payload Low Mask Register */
    vuint32_t R;
    struct {
      vuint32_t Data_byte_0:8;         /* Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 0. */
      vuint32_t Data_byte_1:8;         /* Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 1. */
      vuint32_t Data_byte_2:8;         /* Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 2. */
      vuint32_t Data_byte_3:8;         /* Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 3. */
    } B;
  } PL2_PLMASK_LO;

  union {                              /* Pretended Networking Payload High Filter 2 low order bits / Payload High Mask Register */
    vuint32_t R;
    struct {
      vuint32_t Data_byte_4:8;         /* Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 4. */
      vuint32_t Data_byte_5:8;         /* Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 5. */
      vuint32_t Data_byte_6:8;         /* Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 6. */
      vuint32_t Data_byte_7:8;         /* Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 7. */
    } B;
  } PL2_PLMASK_HI;

  uint8_t CAN_0_reserved7[24];
  struct {
    union {                            /* Wake Up Message Buffer Register for C/S */
      vuint32_t R;
      struct {
        vuint32_t  :9;
        vuint32_t SRR:1;               /* Substitute Remote Request */
        vuint32_t IDE:1;               /* ID Extended Bit */
        vuint32_t RTR:1;               /* Remote Transmission Request Bit */
        vuint32_t DLC:4;               /* Length of Data in Bytes */
        vuint32_t  :16;
      } B;
    } CS;
    union {                            /* Wake Up Message Buffer Register for ID */
      vuint32_t R;
      struct {
        vuint32_t  :3;
        vuint32_t ID:29;               /* Received ID under Pretended Networking mode */
      } B;
    } ID;
    union {                            /* Wake Up Message Buffer Register for Data 0-3 */
      vuint32_t R;
      struct {
        vuint32_t Data_byte_0:8;       /* Received payload corresponding to the data byte 0 under Pretended Networking mode */
        vuint32_t Data_byte_1:8;       /* Received payload corresponding to the data byte 1 under Pretended Networking mode */
        vuint32_t Data_byte_2:8;       /* Received payload corresponding to the data byte 2 under Pretended Networking mode */
        vuint32_t Data_byte_3:8;       /* Received payload corresponding to the data byte 3 under Pretended Networking mode */
      } B;
    } D03;
    union {                            /* Wake Up Message Buffer Register Data 4-7 */
      vuint32_t R;
      struct {
        vuint32_t Data_byte_4:8;       /* Received payload corresponding to the data byte 4 under Pretended Networking mode */
        vuint32_t Data_byte_5:8;       /* Received payload corresponding to the data byte 5 under Pretended Networking mode */
        vuint32_t Data_byte_6:8;       /* Received payload corresponding to the data byte 6 under Pretended Networking mode */
        vuint32_t Data_byte_7:8;       /* Received payload corresponding to the data byte 7 under Pretended Networking mode */
      } B;
    } D47;
  } WMB[4];

  uint8_t CAN_0_reserved8[128];
  union {                              /* CAN FD Control Register */
    vuint32_t R;
    struct {
      vuint32_t FDRATE:1;              /* Bit Rate Switch Enable */
      vuint32_t  :4;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t MBDSR2:2;              /* Message Buffer Data Size for Region 2 */
      vuint32_t  :1;
      vuint32_t MBDSR1:2;              /* Message Buffer Data Size for Region 1 */
      vuint32_t  :1;
      vuint32_t MBDSR0:2;              /* Message Buffer Data Size for Region 0 */
      vuint32_t TDCEN:1;               /* Transceiver Delay Compensation Enable */
      vuint32_t TDCFAIL:1;             /* Transceiver Delay Compensation Fail */
      vuint32_t  :1;
      vuint32_t TDCOFF:5;              /* Transceiver Delay Compensation Offset */
      vuint32_t  :2;
      vuint32_t TDCVAL:6;              /* Transceiver Delay Compensation Value */
    } B;
  } FDCTRL;

  union {                              /* CAN FD Bit Timing Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t FPRESDIV:10;           /* Fast Prescaler Division Factor */
      vuint32_t  :2;
      vuint32_t FRJW:2;                /* Fast Resync Jump Width */
      vuint32_t  :1;
      vuint32_t FPROPSEG:5;            /* Fast Propagation Segment */
      vuint32_t  :2;
      vuint32_t FPSEG1:3;              /* Fast Phase Segment 1 */
      vuint32_t  :2;
      vuint32_t FPSEG2:3;              /* Fast Phase Segment 2 */
    } B;
  } FDCBT;

  union {                              /* CAN FD CRC Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t FD_MBCRC:7;            /* CRC Mailbox Number for FD_TXCRC */
      vuint32_t  :3;
      vuint32_t FD_TXCRC:21;           /* Extended Transmitted CRC value */
    } B;
  } FDCRC;
};


/* ============================================================================
   =============================== Module: CAN 1-7 ============================
   ============================================================================ */

struct CAN_1_7_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t MDIS:1;                /* Module Disable */
      vuint32_t FRZ:1;                 /* Freeze Enable */
      vuint32_t RFEN:1;                /* Rx FIFO Enable */
      vuint32_t HALT:1;                /* Halt FlexCAN */
      vuint32_t NOTRDY:1;              /* FlexCAN Not Ready */
      vuint32_t WAKMSK:1;              /* Wake Up Interrupt Mask */
      vuint32_t SOFTRST:1;             /* Soft Reset */
      vuint32_t FRZACK:1;              /* Freeze Mode Acknowledge */
      vuint32_t SUPV:1;                /* Supervisor Mode */
      vuint32_t SLFWAK:1;              /* Self Wake Up */
      vuint32_t WRNEN:1;               /* Warning Interrupt Enable */
      vuint32_t LPMACK:1;              /* Low-Power Mode Acknowledge */
      vuint32_t WAKSRC:1;              /* Wake Up Source */
      vuint32_t  :1;
      vuint32_t SRXDIS:1;              /* Self Reception Disable */
      vuint32_t IRMQ:1;                /* Individual Rx Masking And Queue Enable */
      vuint32_t  :1;
      vuint32_t  :1;                   /* Pretended Networking Enable */
      vuint32_t LPRIOEN:1;             /* Local Priority Enable */
      vuint32_t AEN:1;                 /* Abort Enable */
      vuint32_t  :2;
      vuint32_t IDAM:2;                /* ID Acceptance Mode */
      vuint32_t  :1;
      vuint32_t MAXMB:7;               /* Number Of The Last Message Buffer */
    } B;
  } MCR;

  union {                              /* Control 1 register */
    vuint32_t R;
    struct {
      vuint32_t PRESDIV:8;             /* Prescaler Division Factor */
      vuint32_t RJW:2;                 /* Resync Jump Width */
      vuint32_t PSEG1:3;               /* Phase Segment 1 */
      vuint32_t PSEG2:3;               /* Phase Segment 2 */
      vuint32_t BOFFMSK:1;             /* Bus Off Mask */
      vuint32_t ERRMSK:1;              /* Error Mask */
      vuint32_t CLKSRC:1;              /* CAN Engine Clock Source */
      vuint32_t LPB:1;                 /* Loop Back Mode */
      vuint32_t TWRNMSK:1;             /* Tx Warning Interrupt Mask */
      vuint32_t RWRNMSK:1;             /* Rx Warning Interrupt Mask */
      vuint32_t  :2;
      vuint32_t SMP:1;                 /* CAN Bit Sampling */
      vuint32_t BOFFREC:1;             /* Bus Off Recovery */
      vuint32_t TSYN:1;                /* Timer Sync */
      vuint32_t LBUF:1;                /* Lowest Buffer Transmitted First */
      vuint32_t LOM:1;                 /* Listen-Only Mode */
      vuint32_t PROPSEG:3;             /* Propagation Segment */
    } B;
  } CTRL1;

  union {                              /* Free Running Timer */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TIMER:16;              /* Timer Value */
    } B;
  } TIMER;

  uint8_t CAN_reserved0[4];
  union {                              /* Rx Mailboxes Global Mask Register */
    vuint32_t R;
    struct {
      vuint32_t MG:32;                 /* Rx Mailboxes Global Mask Bits */
    } B;
  } RXMGMASK;

  union {                              /* Rx 14 Mask register */
    vuint32_t R;
    struct {
      vuint32_t RX14M:32;              /* Rx Buffer 14 Mask Bits */
    } B;
  } RX14MASK;

  union {                              /* Rx 15 Mask register */
    vuint32_t R;
    struct {
      vuint32_t RX15M:32;              /* Rx Buffer 15 Mask Bits */
    } B;
  } RX15MASK;

  union {                              /* Error Counter */
    vuint32_t R;
    struct {
      vuint32_t RXERRCNT_FAST:8;       /* Receive Error Counter for fast bits */
      vuint32_t TXERRCNT_FAST:8;       /* Transmit Error Counter for fast bits */
      vuint32_t RXERRCNT:8;            /* Receive Error Counter */
      vuint32_t TXERRCNT:8;            /* Transmit Error Counter */
    } B;
  } ECR;

  union {                              /* Error and Status 1 register */
    vuint32_t R;
    struct {
      vuint32_t BIT1ERR_FAST:1;        /* Bit1 Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t BIT0ERR_FAST:1;        /* Bit0 Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t  :1;
      vuint32_t CRCERR_FAST:1;         /* Cyclic Redundancy Check Error in the CRC field of CAN FD frames with the BRS bit set */
      vuint32_t FRMERR_FAST:1;         /* Form Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t STFERR_FAST:1;         /* Stuffing Error in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t  :4;
      vuint32_t ERROVR:1;              /* Error Overrun bit */
      vuint32_t ERRINT_FAST:1;         /* Error Interrupt for errors detected in the Data Phase of CAN FD frames with the BRS bit set */
      vuint32_t BOFFDONEINT:1;         /* Bus Off Done Interrupt */
      vuint32_t SYNCH:1;               /* CAN Synchronization Status */
      vuint32_t TWRNINT:1;             /* Tx Warning Interrupt Flag */
      vuint32_t RWRNINT:1;             /* Rx Warning Interrupt Flag */
      vuint32_t BIT1ERR:1;             /* Bit1 Error */
      vuint32_t BIT0ERR:1;             /* Bit0 Error */
      vuint32_t ACKERR:1;              /* Acknowledge Error */
      vuint32_t CRCERR:1;              /* Cyclic Redundancy Check Error */
      vuint32_t FRMERR:1;              /* Form Error */
      vuint32_t STFERR:1;              /* Stuffing Error */
      vuint32_t TXWRN:1;               /* TX Error Warning */
      vuint32_t RXWRN:1;               /* Rx Error Warning */
      vuint32_t IDLE:1;
      vuint32_t TX:1;                  /* FlexCAN In Transmission */
      vuint32_t FLTCONF:2;             /* Fault Confinement State */
      vuint32_t RX:1;                  /* FlexCAN In Reception */
      vuint32_t BOFFINT:1;             /* Bus Off Interrupt */
      vuint32_t ERRINT:1;              /* Error Interrupt */
      vuint32_t WAKINT:1;              /* Wake-Up Interrupt */
    } B;
  } ESR1;

  union {                              /* Interrupt Masks 2 register */
    vuint32_t R;
    struct {
      vuint32_t BUFHM:32;              /* Buffer MB i Mask */
    } B;
  } IMASK2;

  union {                              /* Interrupt Masks 1 register */
    vuint32_t R;
    struct {
      vuint32_t BUFLM:32;              /* Buffer MB i Mask */
    } B;
  } IMASK1;

  union {                              /* Interrupt Flags 2 register */
    vuint32_t R;
    struct {
      vuint32_t BUFHI:32;              /* Buffer MB i Interrupt */
    } B;
  } IFLAG2;

  union {                              /* Interrupt Flags 1 register */
    vuint32_t R;
    struct {
      vuint32_t BUF31TO8I:24;          /* Buffer MBi Interrupt */
      vuint32_t BUF7I:1;               /* Buffer MB7 Interrupt Or "Rx FIFO Overflow" */
      vuint32_t BUF6I:1;               /* Buffer MB6 Interrupt Or "Rx FIFO Warning" */
      vuint32_t BUF5I:1;               /* Buffer MB5 Interrupt Or "Frames available in Rx FIFO" */
      vuint32_t BUF4TO1I:4;            /* Buffer MB i Interrupt Or "reserved" */
      vuint32_t BUF0I:1;               /* Buffer MB0 Interrupt Or "reserved" */
    } B;
  } IFLAG1;

  union {                              /* Control 2 register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t WRMFRZ:1;              /* Write-Access To Memory In Freeze Mode */
      vuint32_t RFFN:4;                /* Number Of Rx FIFO Filters */
      vuint32_t TASD:5;                /* Tx Arbitration Start Delay */
      vuint32_t MRP:1;                 /* Mailboxes Reception Priority */
      vuint32_t RRS:1;                 /* Remote Request Storing */
      vuint32_t EACEN:1;               /* Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes */
      vuint32_t  :16;
    } B;
  } CTRL2;

  union {                              /* Error and Status 2 register */
    vuint32_t R;
    struct {
      vuint32_t  :9;
      vuint32_t LPTM:7;                /* Lowest Priority Tx Mailbox */
      vuint32_t  :1;
      vuint32_t VPS:1;                 /* Valid Priority Status */
      vuint32_t IMB:1;                 /* Inactive Mailbox */
      vuint32_t  :13;
    } B;
  } ESR2;

  uint8_t CAN_reserved1[8];
  union {                              /* CRC Register */
    vuint32_t R;
    struct {
      vuint32_t  :9;
      vuint32_t MBCRC:7;               /* CRC Mailbox */
      vuint32_t  :1;
      vuint32_t TXCRC:15;              /* CRC Transmitted */
    } B;
  } CRCR;

  union {                              /* Rx FIFO Global Mask register */
    vuint32_t R;
    struct {
      vuint32_t FGM:32;                /* Rx FIFO Global Mask Bits */
    } B;
  } RXFGMASK;

  union {                              /* Rx FIFO Information Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t IDHIT:9;               /* Identifier Acceptance Filter Hit Indicator */
    } B;
  } RXFIR;

  uint8_t CAN_reserved2[48];
  struct {
    union {                            /* Message Buffer 0 CS Register */
      vuint32_t R;
      struct {
        vuint32_t  :4;
        vuint32_t CODE:4;              /* Message Buffer Code */
        vuint32_t  :1;
        vuint32_t SRR:1;               /* Substitute Remote Request. Contains a fixed recessive bit. */
        vuint32_t IDE:1;               /* ID Extended. One/zero for extended/standard format frame. */
        vuint32_t RTR:1;               /* Remote Transmission Request. One/zero for remote/data frame. */
        vuint32_t DLC:4;               /* Length of the data to be stored/transmitted. */
        vuint32_t TIMESTAMP:16;        /* Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus. */
      } B;
    } CS;
    union {                            /* Message Buffer 0 ID Register */
      vuint32_t R;
      struct {
        vuint32_t PRIO:3;              /* Local Priority */
        vuint32_t ID_STD:11;           /* Frame Identifier Standard */
        vuint32_t ID_EXT:18;           /* Frame Identifier Extended */
      } B;
    } ID;
    union {
      vuint8_t B[8];
      vuint16_t H[4];
      vuint32_t W[2];
    } DATA;
  } MB[96];

  uint8_t CAN_reserved3[512];
  union {                              /* Rx Individual Mask Registers */
    vuint32_t R;
    struct {
      vuint32_t MI:32;                 /* Individual Mask Bits */
    } B;
  } RXIMR[96];

  uint8_t CAN_reserved4[512];

    union {                              /* CAN FD Control Register */
    vuint32_t R;
    struct {
      vuint32_t FDRATE:1;              /* Bit Rate Switch Enable */
      vuint32_t  :4;
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t MBDSR2:2;              /* Message Buffer Data Size for Region 2 */
      vuint32_t  :1;
      vuint32_t MBDSR1:2;              /* Message Buffer Data Size for Region 1 */
      vuint32_t  :1;
      vuint32_t MBDSR0:2;              /* Message Buffer Data Size for Region 0 */
      vuint32_t TDCEN:1;               /* Transceiver Delay Compensation Enable */
      vuint32_t TDCFAIL:1;             /* Transceiver Delay Compensation Fail */
      vuint32_t  :1;
      vuint32_t TDCOFF:5;              /* Transceiver Delay Compensation Offset */
      vuint32_t  :2;
      vuint32_t TDCVAL:6;              /* Transceiver Delay Compensation Value */
    } B;
  } FDCTRL;

    union {                              /* CAN FD Bit Timing Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t FPRESDIV:10;           /* Fast Prescaler Division Factor */
      vuint32_t  :2;
      vuint32_t FRJW:2;                /* Fast Resync Jump Width */
      vuint32_t  :1;
      vuint32_t FPROPSEG:5;            /* Fast Propagation Segment */
      vuint32_t  :2;
      vuint32_t FPSEG1:3;              /* Fast Phase Segment 1 */
      vuint32_t  :2;
      vuint32_t FPSEG2:3;              /* Fast Phase Segment 2 */
    } B;
  } FDCBT;

    union {                              /* CAN FD CRC Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t FD_MBCRC:7;            /* CRC Mailbox Number for FD_TXCRC */
      vuint32_t  :3;
      vuint32_t FD_TXCRC:21;           /* Extended Transmitted CRC value */
    } B;
  } FDCRC;
};

/* ============================================================================
   =============================== Module: CMP ================================
   ============================================================================ */

struct CMP_tag {
  union {                              /* CMP Control Register 0 */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t DMAEN:1;               /* DMA Enable */
      vuint32_t  :1;
      vuint32_t IER:1;                 /* Comparator Interrupt Enable Rising */
      vuint32_t IEF:1;                 /* Comparator Interrupt Enable Falling */
      vuint32_t CFR:1;                 /* Analog Comparator Flag Rising */
      vuint32_t CFF:1;                 /* Analog Comparator Flag Falling */
      vuint32_t COUT:1;                /* Analog Comparator Output */
      vuint32_t FPR:8;                 /* Filter Sample Period */
      vuint32_t SE:1;                  /* Sample Enable */
      vuint32_t WE:1;                  /* Windowing Enable */
      vuint32_t  :1;
      vuint32_t PMODE:1;               /* Power Mode Select */
      vuint32_t INVT:1;                /* Comparator invert */
      vuint32_t COS:1;                 /* Comparator Output Select */
      vuint32_t OPE:1;                 /* Comparator Output Pin Enable */
      vuint32_t EN:1;                  /* Comparator Module Enable */
      vuint32_t  :1;
      vuint32_t FILTER_CNT:3;          /* Filter Sample Count */
      vuint32_t  :2;
      vuint32_t HYSTCTR:2;             /* Comparator hard block hysteresis control */
    } B;
  } C0;

  union {                              /* CMP Control Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t  :7;
      vuint32_t CHN7:1;                /* Channel 7 input enable */
      vuint32_t CHN6:1;                /* Channel 6 input enable */
      vuint32_t CHN5:1;                /* Channel 5 input enable */
      vuint32_t CHN4:1;                /* Channel 4 input enable */
      vuint32_t CHN3:1;                /* Channel 3 input enable */
      vuint32_t CHN2:1;                /* Channel 2 input enable */
      vuint32_t CHN1:1;                /* Channel 1 input enable */
      vuint32_t CHN0:1;                /* Channel 0 input enable */
      vuint32_t DPSEL:1;               /* DAC output to Plus side ANMUX selection */
      vuint32_t DMSEL:1;               /* DAC output to Minus side ANMUX selection */
      vuint32_t PSEL:3;                /* Plus Input MUX Control */
      vuint32_t MSEL:3;                /* Minus Input MUX Control */
      vuint32_t DACEN:1;               /* DAC Enable */
      vuint32_t VRSEL:1;               /* Supply Voltage Reference Source Select */
      vuint32_t VOSEL:6;               /* DAC Output Voltage Select */
    } B;
  } C1;

  union {                              /* CMP Control Register 2 */
    vuint32_t R;
    struct {
      vuint32_t RRE:1;                 /* Round-Robin Enable */
      vuint32_t RRIE:1;                /* Round-Robin interrupt enable */
      vuint32_t FXMP:1;                /* Fixed MUX Port */
      vuint32_t FXDACI:1;              /* Fix DAC input to the fixed mux port side */
      vuint32_t FXMXCH:3;              /* Fixed channel selection */
      vuint32_t  :1;
      vuint32_t CH7F:1;
      vuint32_t CH6F:1;
      vuint32_t CH5F:1;
      vuint32_t CH4F:1;
      vuint32_t CH3F:1;
      vuint32_t CH2F:1;
      vuint32_t CH1F:1;
      vuint32_t CH0F:1;
      vuint32_t NSAM:2;                /* Number of sample clocks */
      vuint32_t  :6;
      vuint32_t ACOn:8;
    } B;
  } C2;
};


/* ============================================================================
   =============================== Module: CMU ================================
   ============================================================================ */

struct CMU_tag {
  union {                              /* CMU Control Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t SFM:1;                 /* Start frequency measure. */
      vuint32_t  :13;
      vuint32_t CKSEL1:2;              /* Frequency measure clock selection bit. */
      vuint32_t  :5;
      vuint32_t RCDIV:2;               /* CLKMT0_RMN division factor. */
      vuint32_t CME:1;                 /* CLKMN1 monitor enable. */
    } B;
  } CSR;

  union {                              /* CMU Frequency Display Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t FD:20;                 /* Measured frequency bits. */
    } B;
  } FDR;

  union {                              /* CMU High Frequency Reference Register CLKMN1 */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t HFREF:12;              /* High Frequency reference value. */
    } B;
  } HFREFR;

  union {                              /* CMU Low Frequency Reference Register CLKMN1 */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t LFREF:12;              /* Low Frequency reference value. */
    } B;
  } LFREFR;

  union {                              /* CMU Interrupt Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t  :1;
      vuint32_t FHHI:1;                /* CLKMN1 frequency higher than high reference event status. */
      vuint32_t FLLI:1;                /* CLKMN1 frequency less than low reference event status. */
      vuint32_t OLRI:1;                /* Oscillator frequency less than f CLKMT0_RMN * 2RCDIVevent status. */
    } B;
  } ISR;

  uint8_t CMU_reserved0[4];
  union {                              /* CMU Measurement Duration Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t MD:20;                 /* Measurement duration bits */
    } B;
  } MDR;
};


/* ============================================================================
   =============================== Module: CRC ================================
   ============================================================================ */

struct CRC_tag {
  union {                              /* Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t  :18;
      vuint32_t SWAP_BYTEWISE:1;       /* Swap CRC_INP byte-wise */
      vuint32_t SWAP_BITWISE:1;        /* Swap CRC_INP bit-wise */
      vuint32_t POLYG:2;               /* Polynomial selection */
      vuint32_t SWAP:1;                /* Swap selection */
      vuint32_t INV:1;                 /* Inversion selection */
    } B;
  } CFG;

  union {                              /* Input Register */
    vuint32_t R;
    struct {
      vuint32_t INP:32;                /* Input data for the CRC computation */
    } B;
  } INP;

  union {                              /* Current Status Register */
    vuint32_t R;
    struct {
      vuint32_t CSTAT:32;              /* CRC signature status */
    } B;
  } CSTAT;

  union {                              /* Output Register */
    vuint32_t R;
    struct {
      vuint32_t OUTP:32;               /* Final CRC signature */
    } B;
  } OUTP;
};


/* ============================================================================
   =============================== Module: DMA ================================
   ============================================================================ */

struct DMA_tag {
  union {                              /* Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :14;
      vuint32_t CX:1;                  /* Cancel Transfer */
      vuint32_t ECX:1;                 /* Error Cancel Transfer */
      vuint32_t  :5;
      vuint32_t GRP1PRI:1;             /* Channel Group 1 Priority */
      vuint32_t  :1;
      vuint32_t GRP0PRI:1;             /* Channel Group 0 Priority */
      vuint32_t EMLM:1;                /* Enable Minor Loop Mapping */
      vuint32_t CLM:1;                 /* Continuous Link Mode */
      vuint32_t HALT:1;                /* Halt DMA Operations */
      vuint32_t HOE:1;                 /* Halt On Error */
      vuint32_t ERGA:1;                /* Enable Round Robin Group Arbitration */
      vuint32_t ERCA:1;                /* Enable Round Robin Channel Arbitration */
      vuint32_t EDBG:1;                /* Enable Debug */
      vuint32_t  :1;
    } B;
  } CR;

  union {                              /* Error Status Register */
    vuint32_t R;
    struct {
      vuint32_t VLD:1;
      vuint32_t  :13;
      vuint32_t UCE:1;                 /* Uncorrectable ECC error during channel execution. */
      vuint32_t ECX:1;                 /* Transfer Canceled */
      vuint32_t GPE:1;                 /* Group Priority Error */
      vuint32_t CPE:1;                 /* Channel Priority Error */
      vuint32_t  :1;
      vuint32_t ERRCHN:5;              /* Error Channel Number or Canceled Channel Number */
      vuint32_t SAE:1;                 /* Source Address Error */
      vuint32_t SOE:1;                 /* Source Offset Error */
      vuint32_t DAE:1;                 /* Destination Address Error */
      vuint32_t DOE:1;                 /* Destination Offset Error */
      vuint32_t NCE:1;                 /* NBYTES/CITER Configuration Error */
      vuint32_t SGE:1;                 /* Scatter/Gather Configuration Error */
      vuint32_t SBE:1;                 /* Source Bus Error */
      vuint32_t DBE:1;                 /* Destination Bus Error */
    } B;
  } ES;

  uint8_t DMA_reserved0[4];
  union {                              /* Enable Request Register */
    vuint32_t R;
    struct {
      vuint32_t ERQ31:1;               /* Enable DMA Request 31 */
      vuint32_t ERQ30:1;               /* Enable DMA Request 30 */
      vuint32_t ERQ29:1;               /* Enable DMA Request 29 */
      vuint32_t ERQ28:1;               /* Enable DMA Request 28 */
      vuint32_t ERQ27:1;               /* Enable DMA Request 27 */
      vuint32_t ERQ26:1;               /* Enable DMA Request 26 */
      vuint32_t ERQ25:1;               /* Enable DMA Request 25 */
      vuint32_t ERQ24:1;               /* Enable DMA Request 24 */
      vuint32_t ERQ23:1;               /* Enable DMA Request 23 */
      vuint32_t ERQ22:1;               /* Enable DMA Request 22 */
      vuint32_t ERQ21:1;               /* Enable DMA Request 21 */
      vuint32_t ERQ20:1;               /* Enable DMA Request 20 */
      vuint32_t ERQ19:1;               /* Enable DMA Request 19 */
      vuint32_t ERQ18:1;               /* Enable DMA Request 18 */
      vuint32_t ERQ17:1;               /* Enable DMA Request 17 */
      vuint32_t ERQ16:1;               /* Enable DMA Request 16 */
      vuint32_t ERQ15:1;               /* Enable DMA Request 15 */
      vuint32_t ERQ14:1;               /* Enable DMA Request 14 */
      vuint32_t ERQ13:1;               /* Enable DMA Request 13 */
      vuint32_t ERQ12:1;               /* Enable DMA Request 12 */
      vuint32_t ERQ11:1;               /* Enable DMA Request 11 */
      vuint32_t ERQ10:1;               /* Enable DMA Request 10 */
      vuint32_t ERQ9:1;                /* Enable DMA Request 9 */
      vuint32_t ERQ8:1;                /* Enable DMA Request 8 */
      vuint32_t ERQ7:1;                /* Enable DMA Request 7 */
      vuint32_t ERQ6:1;                /* Enable DMA Request 6 */
      vuint32_t ERQ5:1;                /* Enable DMA Request 5 */
      vuint32_t ERQ4:1;                /* Enable DMA Request 4 */
      vuint32_t ERQ3:1;                /* Enable DMA Request 3 */
      vuint32_t ERQ2:1;                /* Enable DMA Request 2 */
      vuint32_t ERQ1:1;                /* Enable DMA Request 1 */
      vuint32_t ERQ0:1;                /* Enable DMA Request 0 */
    } B;
  } ERQ;

  uint8_t DMA_reserved1[4];
  union {                              /* Enable Error Interrupt Register */
    vuint32_t R;
    struct {
      vuint32_t EEI31:1;               /* Enable Error Interrupt 31 */
      vuint32_t EEI30:1;               /* Enable Error Interrupt 30 */
      vuint32_t EEI29:1;               /* Enable Error Interrupt 29 */
      vuint32_t EEI28:1;               /* Enable Error Interrupt 28 */
      vuint32_t EEI27:1;               /* Enable Error Interrupt 27 */
      vuint32_t EEI26:1;               /* Enable Error Interrupt 26 */
      vuint32_t EEI25:1;               /* Enable Error Interrupt 25 */
      vuint32_t EEI24:1;               /* Enable Error Interrupt 24 */
      vuint32_t EEI23:1;               /* Enable Error Interrupt 23 */
      vuint32_t EEI22:1;               /* Enable Error Interrupt 22 */
      vuint32_t EEI21:1;               /* Enable Error Interrupt 21 */
      vuint32_t EEI20:1;               /* Enable Error Interrupt 20 */
      vuint32_t EEI19:1;               /* Enable Error Interrupt 19 */
      vuint32_t EEI18:1;               /* Enable Error Interrupt 18 */
      vuint32_t EEI17:1;               /* Enable Error Interrupt 17 */
      vuint32_t EEI16:1;               /* Enable Error Interrupt 16 */
      vuint32_t EEI15:1;               /* Enable Error Interrupt 15 */
      vuint32_t EEI14:1;               /* Enable Error Interrupt 14 */
      vuint32_t EEI13:1;               /* Enable Error Interrupt 13 */
      vuint32_t EEI12:1;               /* Enable Error Interrupt 12 */
      vuint32_t EEI11:1;               /* Enable Error Interrupt 11 */
      vuint32_t EEI10:1;               /* Enable Error Interrupt 10 */
      vuint32_t EEI9:1;                /* Enable Error Interrupt 9 */
      vuint32_t EEI8:1;                /* Enable Error Interrupt 8 */
      vuint32_t EEI7:1;                /* Enable Error Interrupt 7 */
      vuint32_t EEI6:1;                /* Enable Error Interrupt 6 */
      vuint32_t EEI5:1;                /* Enable Error Interrupt 5 */
      vuint32_t EEI4:1;                /* Enable Error Interrupt 4 */
      vuint32_t EEI3:1;                /* Enable Error Interrupt 3 */
      vuint32_t EEI2:1;                /* Enable Error Interrupt 2 */
      vuint32_t EEI1:1;                /* Enable Error Interrupt 1 */
      vuint32_t EEI0:1;                /* Enable Error Interrupt 0 */
    } B;
  } EEI;

  union {                              /* Set Enable Request Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t SAER:1;                 /* Set All Enable Requests */
      vuint8_t  :1;
      vuint8_t SERQ:5;                 /* Set Enable Request */
    } B;
  } SERQ;

  union {                              /* Clear Enable Request Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t CAER:1;                 /* Clear All Enable Requests */
      vuint8_t  :1;
      vuint8_t CERQ:5;                 /* Clear Enable Request */
    } B;
  } CERQ;

  union {                              /* Set Enable Error Interrupt Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t SAEE:1;                 /* Sets All Enable Error Interrupts */
      vuint8_t  :1;
      vuint8_t SEEI:5;                 /* Set Enable Error Interrupt */
    } B;
  } SEEI;

  union {                              /* Clear Enable Error Interrupt Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t CAEE:1;                 /* Clear All Enable Error Interrupts */
      vuint8_t  :1;
      vuint8_t CEEI:5;                 /* Clear Enable Error Interrupt */
    } B;
  } CEEI;

  union {                              /* Clear Interrupt Request Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t CAIR:1;                 /* Clear All Interrupt Requests */
      vuint8_t  :1;
      vuint8_t CINT:5;                 /* Clear Interrupt Request */
    } B;
  } CINT;

  union {                              /* Clear Error Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t CAEI:1;                 /* Clear All Error Indicators */
      vuint8_t  :1;
      vuint8_t CERR:5;                 /* Clear Error Indicator */
    } B;
  } CERR;

  union {                              /* Set START Bit Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t SAST:1;                 /* Set All START Bits (activates all channels) */
      vuint8_t  :1;
      vuint8_t SSRT:5;                 /* Set START Bit */
    } B;
  } SSRT;

  union {                              /* Clear DONE Status Bit Register */
    vuint8_t R;
    struct {
      vuint8_t NOP:1;                  /* No Op enable */
      vuint8_t CADN:1;                 /* Clears All DONE Bits */
      vuint8_t  :1;
      vuint8_t CDNE:5;                 /* Clear DONE Bit */
    } B;
  } CDNE;

  uint8_t DMA_reserved2[4];
  union {                              /* Interrupt Request Register */
    vuint32_t R;
    struct {
      vuint32_t INT31:1;               /* Interrupt Request 31 */
      vuint32_t INT30:1;               /* Interrupt Request 30 */
      vuint32_t INT29:1;               /* Interrupt Request 29 */
      vuint32_t INT28:1;               /* Interrupt Request 28 */
      vuint32_t INT27:1;               /* Interrupt Request 27 */
      vuint32_t INT26:1;               /* Interrupt Request 26 */
      vuint32_t INT25:1;               /* Interrupt Request 25 */
      vuint32_t INT24:1;               /* Interrupt Request 24 */
      vuint32_t INT23:1;               /* Interrupt Request 23 */
      vuint32_t INT22:1;               /* Interrupt Request 22 */
      vuint32_t INT21:1;               /* Interrupt Request 21 */
      vuint32_t INT20:1;               /* Interrupt Request 20 */
      vuint32_t INT19:1;               /* Interrupt Request 19 */
      vuint32_t INT18:1;               /* Interrupt Request 18 */
      vuint32_t INT17:1;               /* Interrupt Request 17 */
      vuint32_t INT16:1;               /* Interrupt Request 16 */
      vuint32_t INT15:1;               /* Interrupt Request 15 */
      vuint32_t INT14:1;               /* Interrupt Request 14 */
      vuint32_t INT13:1;               /* Interrupt Request 13 */
      vuint32_t INT12:1;               /* Interrupt Request 12 */
      vuint32_t INT11:1;               /* Interrupt Request 11 */
      vuint32_t INT10:1;               /* Interrupt Request 10 */
      vuint32_t INT9:1;                /* Interrupt Request 9 */
      vuint32_t INT8:1;                /* Interrupt Request 8 */
      vuint32_t INT7:1;                /* Interrupt Request 7 */
      vuint32_t INT6:1;                /* Interrupt Request 6 */
      vuint32_t INT5:1;                /* Interrupt Request 5 */
      vuint32_t INT4:1;                /* Interrupt Request 4 */
      vuint32_t INT3:1;                /* Interrupt Request 3 */
      vuint32_t INT2:1;                /* Interrupt Request 2 */
      vuint32_t INT1:1;                /* Interrupt Request 1 */
      vuint32_t INT0:1;                /* Interrupt Request 0 */
    } B;
  } INT;

  uint8_t DMA_reserved3[4];
  union {                              /* Error Register */
    vuint32_t R;
    struct {
      vuint32_t ERR31:1;               /* Error In Channel 31 */
      vuint32_t ERR30:1;               /* Error In Channel 30 */
      vuint32_t ERR29:1;               /* Error In Channel 29 */
      vuint32_t ERR28:1;               /* Error In Channel 28 */
      vuint32_t ERR27:1;               /* Error In Channel 27 */
      vuint32_t ERR26:1;               /* Error In Channel 26 */
      vuint32_t ERR25:1;               /* Error In Channel 25 */
      vuint32_t ERR24:1;               /* Error In Channel 24 */
      vuint32_t ERR23:1;               /* Error In Channel 23 */
      vuint32_t ERR22:1;               /* Error In Channel 22 */
      vuint32_t ERR21:1;               /* Error In Channel 21 */
      vuint32_t ERR20:1;               /* Error In Channel 20 */
      vuint32_t ERR19:1;               /* Error In Channel 19 */
      vuint32_t ERR18:1;               /* Error In Channel 18 */
      vuint32_t ERR17:1;               /* Error In Channel 17 */
      vuint32_t ERR16:1;               /* Error In Channel 16 */
      vuint32_t ERR15:1;               /* Error In Channel 15 */
      vuint32_t ERR14:1;               /* Error In Channel 14 */
      vuint32_t ERR13:1;               /* Error In Channel 13 */
      vuint32_t ERR12:1;               /* Error In Channel 12 */
      vuint32_t ERR11:1;               /* Error In Channel 11 */
      vuint32_t ERR10:1;               /* Error In Channel 10 */
      vuint32_t ERR9:1;                /* Error In Channel 9 */
      vuint32_t ERR8:1;                /* Error In Channel 8 */
      vuint32_t ERR7:1;                /* Error In Channel 7 */
      vuint32_t ERR6:1;                /* Error In Channel 6 */
      vuint32_t ERR5:1;                /* Error In Channel 5 */
      vuint32_t ERR4:1;                /* Error In Channel 4 */
      vuint32_t ERR3:1;                /* Error In Channel 3 */
      vuint32_t ERR2:1;                /* Error In Channel 2 */
      vuint32_t ERR1:1;                /* Error In Channel 1 */
      vuint32_t ERR0:1;                /* Error In Channel 0 */
    } B;
  } ERR;

  uint8_t DMA_reserved4[4];
  union {                              /* Hardware Request Status Register */
    vuint32_t R;
    struct {
      vuint32_t HRS31:1;               /* Hardware Request Status Channel 31 */
      vuint32_t HRS30:1;               /* Hardware Request Status Channel 30 */
      vuint32_t HRS29:1;               /* Hardware Request Status Channel 29 */
      vuint32_t HRS28:1;               /* Hardware Request Status Channel 28 */
      vuint32_t HRS27:1;               /* Hardware Request Status Channel 27 */
      vuint32_t HRS26:1;               /* Hardware Request Status Channel 26 */
      vuint32_t HRS25:1;               /* Hardware Request Status Channel 25 */
      vuint32_t HRS24:1;               /* Hardware Request Status Channel 24 */
      vuint32_t HRS23:1;               /* Hardware Request Status Channel 23 */
      vuint32_t HRS22:1;               /* Hardware Request Status Channel 22 */
      vuint32_t HRS21:1;               /* Hardware Request Status Channel 21 */
      vuint32_t HRS20:1;               /* Hardware Request Status Channel 20 */
      vuint32_t HRS19:1;               /* Hardware Request Status Channel 19 */
      vuint32_t HRS18:1;               /* Hardware Request Status Channel 18 */
      vuint32_t HRS17:1;               /* Hardware Request Status Channel 17 */
      vuint32_t HRS16:1;               /* Hardware Request Status Channel 16 */
      vuint32_t HRS15:1;               /* Hardware Request Status Channel 15 */
      vuint32_t HRS14:1;               /* Hardware Request Status Channel 14 */
      vuint32_t HRS13:1;               /* Hardware Request Status Channel 13 */
      vuint32_t HRS12:1;               /* Hardware Request Status Channel 12 */
      vuint32_t HRS11:1;               /* Hardware Request Status Channel 11 */
      vuint32_t HRS10:1;               /* Hardware Request Status Channel 10 */
      vuint32_t HRS9:1;                /* Hardware Request Status Channel 9 */
      vuint32_t HRS8:1;                /* Hardware Request Status Channel 8 */
      vuint32_t HRS7:1;                /* Hardware Request Status Channel 7 */
      vuint32_t HRS6:1;                /* Hardware Request Status Channel 6 */
      vuint32_t HRS5:1;                /* Hardware Request Status Channel 5 */
      vuint32_t HRS4:1;                /* Hardware Request Status Channel 4 */
      vuint32_t HRS3:1;                /* Hardware Request Status Channel 3 */
      vuint32_t HRS2:1;                /* Hardware Request Status Channel 2 */
      vuint32_t HRS1:1;                /* Hardware Request Status Channel 1 */
      vuint32_t HRS0:1;                /* Hardware Request Status Channel 0 */
    } B;
  } HRS;

  uint8_t DMA_reserved5[200];
  union {                              /* Channel n Priority Register */
    vuint8_t R;
    struct {
      vuint8_t ECP:1;                  /* Enable Channel Preemption. */
      vuint8_t DPA:1;                  /* Disable Preempt Ability. */
      vuint8_t GRPPRI:2;               /* Channel n Current Group Priority */
      vuint8_t CHPRI:4;                /* Channel n Arbitration Priority */
    } B;
  } DCHPRI[32];

  uint8_t DMA_reserved6[32];
  union {                              /* Channel n Master ID Register */
    vuint8_t R;
    struct {
      vuint8_t EMI:1;                  /* Enable Master ID replication */
      vuint8_t PAL:1;                  /* Privileged Access Level */
      vuint8_t  :2;
      vuint8_t MID:4;                  /* Master ID */
    } B;
  } DCHMID[32];

  uint8_t DMA_reserved7[3744];
  struct {
    union {                            /* TCD Source Address */
      vuint32_t R;
      struct {
        vuint32_t SADDR:32;            /* Source Address */
      } B;
    } SADDR;
    union {                            /* TCD Transfer Attributes */
      vuint16_t R;
      struct {
        vuint16_t SMOD:5;              /* Source Address Modulo */
        vuint16_t SSIZE:3;             /* Source data transfer size */
        vuint16_t DMOD:5;              /* Destination Address Modulo */
        vuint16_t DSIZE:3;             /* Destination data transfer size */
      } B;
    } ATTR;
    union {                            /* TCD Signed Source Address Offset */
      vuint16_t R;
      struct {
        vuint16_t SOFF:16;             /* Source address signed offset */
      } B;
    } SOFF;
    union {
      union {                          /* TCD Minor Byte Count (Minor Loop Disabled) */
        vuint32_t R;
        struct {
          vuint32_t NBYTES:32;         /* Minor Byte Transfer Count */
        } B;
      } MLNO;
      union {                          /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
        vuint32_t R;
        struct {
          vuint32_t SMLOE:1;           /* Source Minor Loop Offset Enable */
          vuint32_t DMLOE:1;           /* Destination Minor Loop Offset enable */
          vuint32_t NBYTES:30;         /* Minor Byte Transfer Count */
        } B;
      } MLOFFNO;
      union {                          /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
        vuint32_t R;
        struct {
          vuint32_t SMLOE:1;           /* Source Minor Loop Offset Enable */
          vuint32_t DMLOE:1;           /* Destination Minor Loop Offset enable */
          vuint32_t MLOFF:20;          /* If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes. */
          vuint32_t NBYTES:10;         /* Minor Byte Transfer Count */
        } B;
      } MLOFFYES;
    } NBYTES;
    union {                            /* TCD Last Source Address Adjustment */
      vuint32_t R;
      struct {
        vuint32_t SLAST:32;            /* Last Source Address Adjustment */
      } B;
    } SLAST;
    union {                            /* TCD Destination Address */
      vuint32_t R;
      struct {
        vuint32_t DADDR:32;            /* Destination Address */
      } B;
    } DADDR;
    union {
      union {                          /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
        vuint16_t R;
        struct {
          vuint16_t ELINK:1;           /* Enable channel-to-channel linking on minor-loop complete */
          vuint16_t CITER:15;          /* Current Major Iteration Count */
        } B;
      } ELINKNO;
      union {                          /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
        vuint16_t R;
        struct {
          vuint16_t ELINK:1;           /* Enable channel-to-channel linking on minor-loop complete */
          vuint16_t  :1;
          vuint16_t LINKCH:5;          /* Link Channel Number */
          vuint16_t CITER:9;           /* Current Major Iteration Count */
        } B;
      } ELINKYES;
    } CITER;
    union {                            /* TCD Signed Destination Address Offset */
      vuint16_t R;
      struct {
        vuint16_t DOFF:16;             /* Destination Address Signed Offset */
      } B;
    } DOFF;
    union {                            /* TCD Last Destination Address Adjustment/Scatter Gather Address */
      vuint32_t R;
      struct {
        vuint32_t DLASTSGA:32;
      } B;
    } DLASTSGA;
    union {
      union {                          /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
        vuint16_t R;
        struct {
          vuint16_t ELINK:1;           /* Enables channel-to-channel linking on minor loop complete */
          vuint16_t BITER:15;          /* Starting Major Iteration Count */
        } B;
      } ELINKNO;
      union {                          /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
        vuint16_t R;
        struct {
          vuint16_t ELINK:1;           /* Enables channel-to-channel linking on minor loop complete */
          vuint16_t  :1;
          vuint16_t LINKCH:5;          /* Link Channel Number */
          vuint16_t BITER:9;           /* Starting major iteration count */
        } B;
      } ELINKYES;
    } BITER;
    union {                            /* TCD Control and Status */
      vuint16_t R;
      struct {
        vuint16_t BWC:2;               /* Bandwidth Control */
        vuint16_t  :1;
        vuint16_t MAJORLINKCH:5;       /* Link Channel Number */
        vuint16_t DONE:1;              /* Channel Done */
        vuint16_t ACTIVE:1;            /* Channel Active */
        vuint16_t MAJORELINK:1;        /* Enable channel-to-channel linking on major loop complete */
        vuint16_t ESG:1;               /* Enable Scatter/Gather Processing */
        vuint16_t DREQ:1;              /* Disable Request */
        vuint16_t INTHALF:1;           /* Enable an interrupt when major counter is half complete. */
        vuint16_t INTMAJOR:1;          /* Enable an interrupt when major iteration count completes. */
        vuint16_t START:1;             /* Channel Start */
      } B;
    } CSR;
  } TCD[32];
};


/* ============================================================================
   =============================== Module: DMAMUX =============================
   ============================================================================ */

struct DMAMUX_tag {
  union {                              /* Channel Configuration register */
    vuint8_t R;
    struct {
      vuint8_t ENBL:1;                 /* DMA Channel Enable */
      vuint8_t TRIG:1;                 /* DMA Channel Trigger Enable */
      vuint8_t SOURCE:6;               /* DMA Channel Source (Slot) */
    } B;
  } CHCFG[16];
};


/* ============================================================================
   =============================== Module: DSPI ===============================
   ============================================================================ */

struct DSPI_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t MSTR:1;                /* Master/Slave Mode Select */
      vuint32_t CONT_SCKE:1;           /* Continuous SCK Enable */
      vuint32_t DCONF:2;               /* Interface Configuration */
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

  uint8_t DSPI_reserved0[4];
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
        vuint32_t FMSZ5:1;             /* MSB of Frame Size when DSI is used in 64-bit Mode */
        vuint32_t  :22;
      } B;
    } CTAR_SLAVE[2];
  } MODE;

  uint8_t DSPI_reserved1[8];
  union {                              /* Status Register */
    vuint32_t R;
    struct {
      vuint32_t TCF:1;                 /* Transfer Complete Flag */
      vuint32_t TXRXS:1;               /* TX and RX Status */
      vuint32_t SPITCF:1;              /* SPI Frame Transfer Complete Flag. */
      vuint32_t EOQF:1;                /* End of Queue Flag */
      vuint32_t TFUF:1;                /* Transmit FIFO Underflow Flag */
      vuint32_t DSITCF:1;              /* DSI Frame Transfer Complete Flag. */
      vuint32_t TFFF:1;                /* Transmit FIFO Fill Flag */
      vuint32_t BSYF:1;                /* Busy Flag. */
      vuint32_t CMDTCF:1;              /* Command Transfer Complete Flag. */
      vuint32_t DPEF:1;                /* DSI Parity Error Flag */
      vuint32_t SPEF:1;                /* SPI Parity Error Flag */
      vuint32_t DDIF:1;                /* DSI Data Received with Active Bits */
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
      vuint32_t SPITCF_RE:1;           /* SPI Frame Transmission Complete Request Enable. */
      vuint32_t EOQF_RE:1;             /* Finished Request Enable */
      vuint32_t TFUF_RE:1;             /* Transmit FIFO Underflow Request Enable */
      vuint32_t DSITCF_RE:1;           /* DSI Frame Transmission Complete Request Enable. */
      vuint32_t TFFF_RE:1;             /* Transmit FIFO Fill Request Enable */
      vuint32_t TFFF_DIRS:1;           /* Transmit FIFO Fill DMA or Interrupt Request Select */
      vuint32_t CMDTCF_RE:1;           /* Command Transmission Complete Request Enable. */
      vuint32_t DPEF_RE:1;             /* DSI Parity Error Request Enable */
      vuint32_t SPEF_RE:1;             /* SPI Parity Error Request Enable */
      vuint32_t DDIF_RE:1;             /* DSI data received with active bits Request Enable */
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

  uint8_t DSPI_reserved2[48];
  union {                              /* Receive FIFO Registers */
    vuint32_t R;
    struct {
      vuint32_t RXDATA:32;             /* Receive Data */
    } B;
  } RXFR[4];

  uint8_t DSPI_reserved3[48];
  union {                              /* DSI Configuration Register 0 */
    vuint32_t R;
    struct {
      vuint32_t MTOE:1;                /* Multiple Transfer Operation Enable */
      vuint32_t FMSZ4:1;               /* MSB of the frame size in master mode. */
      vuint32_t MTOCNT:6;              /* Multiple Transfer Operation Count */
      vuint32_t FMSZ5:1;               /* MSB of the frame size in master mode when DSI is used in 64-bit mode. */
      vuint32_t  :2;
      vuint32_t  :1;
      vuint32_t TXSS:1;                /* Transmit Data Source Select. */
      vuint32_t TPOL:1;                /* Trigger Polarity */
      vuint32_t TRRE:1;                /* Trigger Reception Enable */
      vuint32_t CID:1;                 /* Change In Data Transfer Enable */
      vuint32_t DCONT:1;               /* DSI Continuous Peripheral Chip Select Enable */
      vuint32_t DSICTAS:3;             /* DSI Clock and Transfer Attributes Select */
      vuint32_t DMS:1;                 /* Data Match Stop */
      vuint32_t PES:1;                 /* Parity Error Stop */
      vuint32_t PE:1;                  /* Parity Enable */
      vuint32_t PP:1;                  /* Parity Polarity */
      vuint32_t DPCSx:8;               /* DSI Peripheral Chip Select 0-7 */
    } B;
  } DSICR0;

  union {                              /* DSI Serialization Data Register 0 */
    vuint32_t R;
    struct {
      vuint32_t SER_DATA:32;           /* Serialized Data */
    } B;
  } SDR0;

  union {                              /* DSI Alternate Serialization Data Register 0 */
    vuint32_t R;
    struct {
      vuint32_t ASER_DATA:32;          /* Alternate Serialized Data */
    } B;
  } ASDR0;

  union {                              /* DSI Transmit Comparison Register 0 */
    vuint32_t R;
    struct {
      vuint32_t COMP_DATA:32;          /* Compare Data */
    } B;
  } COMPR0;

  union {                              /* DSI Deserialization Data Register 0 */
    vuint32_t R;
    struct {
      vuint32_t DESER_DATA:32;         /* Deserialized Data */
    } B;
  } DDR0;

  union {                              /* DSI Configuration Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t  :6;
      vuint32_t  :3;
      vuint32_t CSI_PRTY:1;            /* CSI Priority */
      vuint32_t  :1;
      vuint32_t DSI64E:1;              /* DSI 64-bit Mode Enable */
      vuint32_t  :2;
      vuint32_t  :8;
      vuint32_t  :8;
    } B;
  } DSICR1;

  union {                              /* DSI Serialization Source Select Register 0 */
    vuint32_t R;
    struct {
      vuint32_t SS:32;                 /* Source Select */
    } B;
  } SSR0;

  union {                              /* DSI Parallel Input Select Register 0 */
    vuint32_t R;
    struct {
      vuint32_t IPS7:4;                /* Input Pin Select 7 */
      vuint32_t IPS6:4;                /* Input Pin Select 6 */
      vuint32_t IPS5:4;                /* Input Pin Select 5 */
      vuint32_t IPS4:4;                /* Input Pin Select 5 */
      vuint32_t IPS3:4;                /* Input Pin Select 3 */
      vuint32_t IPS2:4;                /* Input Pin Select 2 */
      vuint32_t IPS1:4;                /* Input Pin Select 1 */
      vuint32_t IPS0:4;                /* Input Pin Select 0 */
    } B;
  } PISR0;

  union {                              /* DSI Parallel Input Select Register 1 */
    vuint32_t R;
    struct {
      vuint32_t IPS15:4;               /* Input Pin Select 15 */
      vuint32_t IPS14:4;               /* Input Pin Select 14 */
      vuint32_t IPS13:4;               /* Input Pin Select 13 */
      vuint32_t IPS12:4;               /* Input Pin Select 12 */
      vuint32_t IPS11:4;               /* Input Pin Select 11 */
      vuint32_t IPS10:4;               /* Input Pin Select 10 */
      vuint32_t IPS9:4;                /* Input Pin Select 9 */
      vuint32_t IPS8:4;                /* Input Pin Select 8 */
    } B;
  } PISR1;

  union {                              /* DSI Parallel Input Select Register 2 */
    vuint32_t R;
    struct {
      vuint32_t IPS23:4;               /* Input Pin Select 23 */
      vuint32_t IPS22:4;               /* Input Pin Select 22 */
      vuint32_t IPS21:4;               /* Input Pin Select 21 */
      vuint32_t IPS20:4;               /* Input Pin Select 20 */
      vuint32_t IPS19:4;               /* Input Pin Select 19 */
      vuint32_t IPS18:4;               /* Input Pin Select 18 */
      vuint32_t IPS17:4;               /* Input Pin Select 17 */
      vuint32_t IPS16:4;               /* Input Pin Select 16 */
    } B;
  } PISR2;

  union {                              /* DSI Parallel Input Select Register 3 */
    vuint32_t R;
    struct {
      vuint32_t IPS31:4;               /* Input Pin Select 31 */
      vuint32_t IPS30:4;               /* Input Pin Select 30 */
      vuint32_t IPS29:4;               /* Input Pin Select 29 */
      vuint32_t IPS28:4;               /* Input Pin Select 28 */
      vuint32_t IPS27:4;               /* Input Pin Select 27 */
      vuint32_t IPS26:4;               /* Input Pin Select 26 */
      vuint32_t IPS25:4;               /* Input Pin Select 25 */
      vuint32_t IPS24:4;               /* Input Pin Select 24 */
    } B;
  } PISR3;

  union {                              /* DSI Deserialized Data Interrupt Mask Register 0 */
    vuint32_t R;
    struct {
      vuint32_t MASK:32;               /* Mask */
    } B;
  } DIMR0;

  union {                              /* DSI Deserialized Data Polarity Interrupt Register 0 */
    vuint32_t R;
    struct {
      vuint32_t DP:32;                 /* Data Polarity */
    } B;
  } DPIR0;

  union {                              /* DSI Serialization Data Register 1 */
    vuint32_t R;
    struct {
      vuint32_t SER_DATA:32;           /* Serialized Data */
    } B;
  } SDR1;

  union {                              /* DSI Alternate Serialization Data Register 1 */
    vuint32_t R;
    struct {
      vuint32_t ASER_DATA:32;          /* Alternate Serialized Data */
    } B;
  } ASDR1;

  union {                              /* DSI Transmit Comparison Register 1 */
    vuint32_t R;
    struct {
      vuint32_t COMP_DATA:32;          /* Compare Data */
    } B;
  } COMPR1;

  union {                              /* DSI Deserialization Data Register 1 */
    vuint32_t R;
    struct {
      vuint32_t DESER_DATA:32;         /* Deserialized Data */
    } B;
  } DDR1;

  union {                              /* DSI Serialization Source Select Register 1 */
    vuint32_t R;
    struct {
      vuint32_t SS:32;                 /* Source Select */
    } B;
  } SSR1;

  union {                              /* DSI Parallel Input Select Register 4 */
    vuint32_t R;
    struct {
      vuint32_t IPS39:4;               /* Input Pin Select 39 */
      vuint32_t IPS38:4;               /* Input Pin Select 38 */
      vuint32_t IPS37:4;               /* Input Pin Select 37 */
      vuint32_t IPS36:4;               /* Input Pin Select 36 */
      vuint32_t IPS35:4;               /* Input Pin Select 35 */
      vuint32_t IPS34:4;               /* Input Pin Select 34 */
      vuint32_t IPS33:4;               /* Input Pin Select 33 */
      vuint32_t IPS32:4;               /* Input Pin Select 32 */
    } B;
  } PISR4;

  union {                              /* DSI Parallel Input Select Register 5 */
    vuint32_t R;
    struct {
      vuint32_t IPS47:4;               /* Input Pin Select 47 */
      vuint32_t IPS46:4;               /* Input Pin Select 46 */
      vuint32_t IPS45:4;               /* Input Pin Select 45 */
      vuint32_t IPS44:4;               /* Input Pin Select 44 */
      vuint32_t IPS43:4;               /* Input Pin Select 43 */
      vuint32_t IPS42:4;               /* Input Pin Select 42 */
      vuint32_t IPS41:4;               /* Input Pin Select 41 */
      vuint32_t IPS40:4;               /* Input Pin Select 40 */
    } B;
  } PISR5;

  union {                              /* DSI Parallel Input Select Register 6 */
    vuint32_t R;
    struct {
      vuint32_t IPS55:4;               /* Input Pin Select 55 */
      vuint32_t IPS54:4;               /* Input Pin Select 54 */
      vuint32_t IPS53:4;               /* Input Pin Select 53 */
      vuint32_t IPS52:4;               /* Input Pin Select 52 */
      vuint32_t IPS51:4;               /* Input Pin Select 51 */
      vuint32_t IPS50:4;               /* Input Pin Select 50 */
      vuint32_t IPS49:4;               /* Input Pin Select 49 */
      vuint32_t IPS48:4;               /* Input Pin Select 48 */
    } B;
  } PISR6;

  union {                              /* DSI Parallel Input Select Register 7 */
    vuint32_t R;
    struct {
      vuint32_t IPS63:4;               /* Input Pin Select 63 */
      vuint32_t IPS62:4;               /* Input Pin Select 62 */
      vuint32_t IPS61:4;               /* Input Pin Select 61 */
      vuint32_t IPS60:4;               /* Input Pin Select 60 */
      vuint32_t IPS59:4;               /* Input Pin Select 59 */
      vuint32_t IPS58:4;               /* Input Pin Select 58 */
      vuint32_t IPS57:4;               /* Input Pin Select 57 */
      vuint32_t IPS56:4;               /* Input Pin Select 56 */
    } B;
  } PISR7;

  union {                              /* DSI Deserialized Data Interrupt Mask Register 1 */
    vuint32_t R;
    struct {
      vuint32_t MASK:32;               /* Mask */
    } B;
  } DIMR1;

  union {                              /* DSI Deserialized Data Polarity Interrupt Register 1 */
    vuint32_t R;
    struct {
      vuint32_t DP:32;                 /* Data Polarity */
    } B;
  } DPIR1;

  union {                              /* Clock and Transfer Attributes Register Extended */
    vuint32_t R;
    struct {
      vuint32_t  :15;
      vuint32_t FMSZE:1;               /* Frame Size Extended */
      vuint32_t  :5;
      vuint32_t DTCP:11;               /* Data Transfer Count Preload */
    } B;
  } CTARE[6];

  uint8_t DSPI_reserved4[8];
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


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_1_H_ */
