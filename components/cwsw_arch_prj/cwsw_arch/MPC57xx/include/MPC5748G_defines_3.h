/** @file MPC5748G_defines_3.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_3_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_3_H_

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
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_3_H__REVSTRING "$Revision: 0123 $"

/* CMP */
#define CMP_0_C0             CMP_0.C0.R                    /* CMP Control Register 0 */
#define CMP_0_C1             CMP_0.C1.R                    /* CMP Control Register 1 */
#define CMP_0_C2             CMP_0.C2.R                    /* CMP Control Register 2 */

/* CMP */
#define CMP_1_C0             CMP_1.C0.R                    /* CMP Control Register 0 */
#define CMP_1_C1             CMP_1.C1.R                    /* CMP Control Register 1 */
#define CMP_1_C2             CMP_1.C2.R                    /* CMP Control Register 2 */

/* CMP */
#define CMP_2_C0             CMP_2.C0.R                    /* CMP Control Register 0 */
#define CMP_2_C1             CMP_2.C1.R                    /* CMP Control Register 1 */
#define CMP_2_C2             CMP_2.C2.R                    /* CMP Control Register 2 */

/* CMU */
#define CMU_CSR              CMU.CSR.R                     /* CMU Control Status Register */
#define CMU_FDR              CMU.FDR.R                     /* CMU Frequency Display Register */
#define CMU_HFREFR           CMU.HFREFR.R                  /* CMU High Frequency Reference Register CLKMN1 */
#define CMU_LFREFR           CMU.LFREFR.R                  /* CMU Low Frequency Reference Register CLKMN1 */
#define CMU_ISR              CMU.ISR.R                     /* CMU Interrupt Status Register */
#define CMU_MDR              CMU.MDR.R                     /* CMU Measurement Duration Register */

/* CRC */
#define CRC_CFG              CRC.CFG.R                     /* Configuration Register */
#define CRC_INP              CRC.INP.R                     /* Input Register */
#define CRC_CSTAT            CRC.CSTAT.R                   /* Current Status Register */
#define CRC_OUTP             CRC.OUTP.R                    /* Output Register */

/* EDMA */
#define DMA_CR               EDMA.CR.R                      /* Control Register */
#define DMA_ES               EDMA.ES.R                      /* Error Status Register */
#define DMA_ERQ              EDMA.ERQ.R                     /* Enable Request Register */
#define DMA_EEI              EDMA.EEI.R                     /* Enable Error Interrupt Register */
#define DMA_SERQ             EDMA.SERQ.R                    /* Set Enable Request Register */
#define DMA_CERQ             EDMA.CERQ.R                    /* Clear Enable Request Register */
#define DMA_SEEI             EDMA.SEEI.R                    /* Set Enable Error Interrupt Register */
#define DMA_CEEI             EDMA.CEEI.R                    /* Clear Enable Error Interrupt Register */
#define DMA_CINT             EDMA.CINT.R                    /* Clear Interrupt Request Register */
#define DMA_CERR             EDMA.CERR.R                    /* Clear Error Register */
#define DMA_SSRT             EDMA.SSRT.R                    /* Set START Bit Register */
#define DMA_CDNE             EDMA.CDNE.R                    /* Clear DONE Status Bit Register */
#define DMA_INT              EDMA.INT.R                     /* Interrupt Request Register */
#define DMA_ERR              EDMA.ERR.R                     /* Error Register */
#define DMA_HRS              EDMA.HRS.R                     /* Hardware Request Status Register */
#define DMA_DCHPRI0          EDMA.DCHPRI[0].R               /* Channel n Priority Register */
#define DMA_DCHPRI1          EDMA.DCHPRI[1].R               /* Channel n Priority Register */
#define DMA_DCHPRI2          EDMA.DCHPRI[2].R               /* Channel n Priority Register */
#define DMA_DCHPRI3          EDMA.DCHPRI[3].R               /* Channel n Priority Register */
#define DMA_DCHPRI4          EDMA.DCHPRI[4].R               /* Channel n Priority Register */
#define DMA_DCHPRI5          EDMA.DCHPRI[5].R               /* Channel n Priority Register */
#define DMA_DCHPRI6          EDMA.DCHPRI[6].R               /* Channel n Priority Register */
#define DMA_DCHPRI7          EDMA.DCHPRI[7].R               /* Channel n Priority Register */
#define DMA_DCHPRI8          EDMA.DCHPRI[8].R               /* Channel n Priority Register */
#define DMA_DCHPRI9          EDMA.DCHPRI[9].R               /* Channel n Priority Register */
#define DMA_DCHPRI10         EDMA.DCHPRI[10].R              /* Channel n Priority Register */
#define DMA_DCHPRI11         EDMA.DCHPRI[11].R              /* Channel n Priority Register */
#define DMA_DCHPRI12         EDMA.DCHPRI[12].R              /* Channel n Priority Register */
#define DMA_DCHPRI13         EDMA.DCHPRI[13].R              /* Channel n Priority Register */
#define DMA_DCHPRI14         EDMA.DCHPRI[14].R              /* Channel n Priority Register */
#define DMA_DCHPRI15         EDMA.DCHPRI[15].R              /* Channel n Priority Register */
#define DMA_DCHPRI16         EDMA.DCHPRI[16].R              /* Channel n Priority Register */
#define DMA_DCHPRI17         EDMA.DCHPRI[17].R              /* Channel n Priority Register */
#define DMA_DCHPRI18         EDMA.DCHPRI[18].R              /* Channel n Priority Register */
#define DMA_DCHPRI19         EDMA.DCHPRI[19].R              /* Channel n Priority Register */
#define DMA_DCHPRI20         EDMA.DCHPRI[20].R              /* Channel n Priority Register */
#define DMA_DCHPRI21         EDMA.DCHPRI[21].R              /* Channel n Priority Register */
#define DMA_DCHPRI22         EDMA.DCHPRI[22].R              /* Channel n Priority Register */
#define DMA_DCHPRI23         EDMA.DCHPRI[23].R              /* Channel n Priority Register */
#define DMA_DCHPRI24         EDMA.DCHPRI[24].R              /* Channel n Priority Register */
#define DMA_DCHPRI25         EDMA.DCHPRI[25].R              /* Channel n Priority Register */
#define DMA_DCHPRI26         EDMA.DCHPRI[26].R              /* Channel n Priority Register */
#define DMA_DCHPRI27         EDMA.DCHPRI[27].R              /* Channel n Priority Register */
#define DMA_DCHPRI28         EDMA.DCHPRI[28].R              /* Channel n Priority Register */
#define DMA_DCHPRI29         EDMA.DCHPRI[29].R              /* Channel n Priority Register */
#define DMA_DCHPRI30         EDMA.DCHPRI[30].R              /* Channel n Priority Register */
#define DMA_DCHPRI31         EDMA.DCHPRI[31].R              /* Channel n Priority Register */
#define DMA_DCHMID0          EDMA.DCHMID[0].R               /* Channel n Master ID Register */
#define DMA_DCHMID1          EDMA.DCHMID[1].R               /* Channel n Master ID Register */
#define DMA_DCHMID2          EDMA.DCHMID[2].R               /* Channel n Master ID Register */
#define DMA_DCHMID3          EDMA.DCHMID[3].R               /* Channel n Master ID Register */
#define DMA_DCHMID4          EDMA.DCHMID[4].R               /* Channel n Master ID Register */
#define DMA_DCHMID5          EDMA.DCHMID[5].R               /* Channel n Master ID Register */
#define DMA_DCHMID6          EDMA.DCHMID[6].R               /* Channel n Master ID Register */
#define DMA_DCHMID7          EDMA.DCHMID[7].R               /* Channel n Master ID Register */
#define DMA_DCHMID8          EDMA.DCHMID[8].R               /* Channel n Master ID Register */
#define DMA_DCHMID9          EDMA.DCHMID[9].R               /* Channel n Master ID Register */
#define DMA_DCHMID10         EDMA.DCHMID[10].R              /* Channel n Master ID Register */
#define DMA_DCHMID11         EDMA.DCHMID[11].R              /* Channel n Master ID Register */
#define DMA_DCHMID12         EDMA.DCHMID[12].R              /* Channel n Master ID Register */
#define DMA_DCHMID13         EDMA.DCHMID[13].R              /* Channel n Master ID Register */
#define DMA_DCHMID14         EDMA.DCHMID[14].R              /* Channel n Master ID Register */
#define DMA_DCHMID15         EDMA.DCHMID[15].R              /* Channel n Master ID Register */
#define DMA_DCHMID16         EDMA.DCHMID[16].R              /* Channel n Master ID Register */
#define DMA_DCHMID17         EDMA.DCHMID[17].R              /* Channel n Master ID Register */
#define DMA_DCHMID18         EDMA.DCHMID[18].R              /* Channel n Master ID Register */
#define DMA_DCHMID19         EDMA.DCHMID[19].R              /* Channel n Master ID Register */
#define DMA_DCHMID20         EDMA.DCHMID[20].R              /* Channel n Master ID Register */
#define DMA_DCHMID21         EDMA.DCHMID[21].R              /* Channel n Master ID Register */
#define DMA_DCHMID22         EDMA.DCHMID[22].R              /* Channel n Master ID Register */
#define DMA_DCHMID23         EDMA.DCHMID[23].R              /* Channel n Master ID Register */
#define DMA_DCHMID24         EDMA.DCHMID[24].R              /* Channel n Master ID Register */
#define DMA_DCHMID25         EDMA.DCHMID[25].R              /* Channel n Master ID Register */
#define DMA_DCHMID26         EDMA.DCHMID[26].R              /* Channel n Master ID Register */
#define DMA_DCHMID27         EDMA.DCHMID[27].R              /* Channel n Master ID Register */
#define DMA_DCHMID28         EDMA.DCHMID[28].R              /* Channel n Master ID Register */
#define DMA_DCHMID29         EDMA.DCHMID[29].R              /* Channel n Master ID Register */
#define DMA_DCHMID30         EDMA.DCHMID[30].R              /* Channel n Master ID Register */
#define DMA_DCHMID31         EDMA.DCHMID[31].R              /* Channel n Master ID Register */
#define DMA_TCD0_SADDR       EDMA.TCD[0].SADDR.R            /* TCD Source Address */
#define DMA_TCD0_ATTR        EDMA.TCD[0].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD0_SOFF        EDMA.TCD[0].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD0_NBYTES_MLNO EDMA.TCD[0].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD0_NBYTES_MLOFFNO EDMA.TCD[0].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD0_NBYTES_MLOFFYES EDMA.TCD[0].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD0_SLAST       EDMA.TCD[0].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD0_DADDR       EDMA.TCD[0].DADDR.R            /* TCD Destination Address */
#define DMA_TCD0_CITER_ELINKNO EDMA.TCD[0].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD0_CITER_ELINKYES EDMA.TCD[0].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD0_DOFF        EDMA.TCD[0].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD0_DLASTSGA    EDMA.TCD[0].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD0_BITER_ELINKNO EDMA.TCD[0].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD0_BITER_ELINKYES EDMA.TCD[0].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD0_CSR         EDMA.TCD[0].CSR.R              /* TCD Control and Status */
#define DMA_TCD1_SADDR       EDMA.TCD[1].SADDR.R            /* TCD Source Address */
#define DMA_TCD1_ATTR        EDMA.TCD[1].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD1_SOFF        EDMA.TCD[1].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD1_NBYTES_MLNO EDMA.TCD[1].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD1_NBYTES_MLOFFNO EDMA.TCD[1].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD1_NBYTES_MLOFFYES EDMA.TCD[1].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD1_SLAST       EDMA.TCD[1].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD1_DADDR       EDMA.TCD[1].DADDR.R            /* TCD Destination Address */
#define DMA_TCD1_CITER_ELINKNO EDMA.TCD[1].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD1_CITER_ELINKYES EDMA.TCD[1].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD1_DOFF        EDMA.TCD[1].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD1_DLASTSGA    EDMA.TCD[1].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD1_BITER_ELINKNO EDMA.TCD[1].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD1_BITER_ELINKYES EDMA.TCD[1].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD1_CSR         EDMA.TCD[1].CSR.R              /* TCD Control and Status */
#define DMA_TCD2_SADDR       EDMA.TCD[2].SADDR.R            /* TCD Source Address */
#define DMA_TCD2_ATTR        EDMA.TCD[2].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD2_SOFF        EDMA.TCD[2].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD2_NBYTES_MLNO EDMA.TCD[2].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD2_NBYTES_MLOFFNO EDMA.TCD[2].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD2_NBYTES_MLOFFYES EDMA.TCD[2].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD2_SLAST       EDMA.TCD[2].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD2_DADDR       EDMA.TCD[2].DADDR.R            /* TCD Destination Address */
#define DMA_TCD2_CITER_ELINKNO EDMA.TCD[2].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD2_CITER_ELINKYES EDMA.TCD[2].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD2_DOFF        EDMA.TCD[2].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD2_DLASTSGA    EDMA.TCD[2].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD2_BITER_ELINKNO EDMA.TCD[2].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD2_BITER_ELINKYES EDMA.TCD[2].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD2_CSR         EDMA.TCD[2].CSR.R              /* TCD Control and Status */
#define DMA_TCD3_SADDR       EDMA.TCD[3].SADDR.R            /* TCD Source Address */
#define DMA_TCD3_ATTR        EDMA.TCD[3].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD3_SOFF        EDMA.TCD[3].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD3_NBYTES_MLNO EDMA.TCD[3].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD3_NBYTES_MLOFFNO EDMA.TCD[3].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD3_NBYTES_MLOFFYES EDMA.TCD[3].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD3_SLAST       EDMA.TCD[3].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD3_DADDR       EDMA.TCD[3].DADDR.R            /* TCD Destination Address */
#define DMA_TCD3_CITER_ELINKNO EDMA.TCD[3].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD3_CITER_ELINKYES EDMA.TCD[3].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD3_DOFF        EDMA.TCD[3].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD3_DLASTSGA    EDMA.TCD[3].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD3_BITER_ELINKNO EDMA.TCD[3].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD3_BITER_ELINKYES EDMA.TCD[3].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD3_CSR         EDMA.TCD[3].CSR.R              /* TCD Control and Status */
#define DMA_TCD4_SADDR       EDMA.TCD[4].SADDR.R            /* TCD Source Address */
#define DMA_TCD4_ATTR        EDMA.TCD[4].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD4_SOFF        EDMA.TCD[4].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD4_NBYTES_MLNO EDMA.TCD[4].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD4_NBYTES_MLOFFNO EDMA.TCD[4].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD4_NBYTES_MLOFFYES EDMA.TCD[4].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD4_SLAST       EDMA.TCD[4].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD4_DADDR       EDMA.TCD[4].DADDR.R            /* TCD Destination Address */
#define DMA_TCD4_CITER_ELINKNO EDMA.TCD[4].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD4_CITER_ELINKYES EDMA.TCD[4].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD4_DOFF        EDMA.TCD[4].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD4_DLASTSGA    EDMA.TCD[4].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD4_BITER_ELINKNO EDMA.TCD[4].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD4_BITER_ELINKYES EDMA.TCD[4].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD4_CSR         EDMA.TCD[4].CSR.R              /* TCD Control and Status */
#define DMA_TCD5_SADDR       EDMA.TCD[5].SADDR.R            /* TCD Source Address */
#define DMA_TCD5_ATTR        EDMA.TCD[5].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD5_SOFF        EDMA.TCD[5].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD5_NBYTES_MLNO EDMA.TCD[5].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD5_NBYTES_MLOFFNO EDMA.TCD[5].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD5_NBYTES_MLOFFYES EDMA.TCD[5].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD5_SLAST       EDMA.TCD[5].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD5_DADDR       EDMA.TCD[5].DADDR.R            /* TCD Destination Address */
#define DMA_TCD5_CITER_ELINKNO EDMA.TCD[5].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD5_CITER_ELINKYES EDMA.TCD[5].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD5_DOFF        EDMA.TCD[5].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD5_DLASTSGA    EDMA.TCD[5].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD5_BITER_ELINKNO EDMA.TCD[5].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD5_BITER_ELINKYES EDMA.TCD[5].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD5_CSR         EDMA.TCD[5].CSR.R              /* TCD Control and Status */
#define DMA_TCD6_SADDR       EDMA.TCD[6].SADDR.R            /* TCD Source Address */
#define DMA_TCD6_ATTR        EDMA.TCD[6].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD6_SOFF        EDMA.TCD[6].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD6_NBYTES_MLNO EDMA.TCD[6].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD6_NBYTES_MLOFFNO EDMA.TCD[6].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD6_NBYTES_MLOFFYES EDMA.TCD[6].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD6_SLAST       EDMA.TCD[6].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD6_DADDR       EDMA.TCD[6].DADDR.R            /* TCD Destination Address */
#define DMA_TCD6_CITER_ELINKNO EDMA.TCD[6].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD6_CITER_ELINKYES EDMA.TCD[6].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD6_DOFF        EDMA.TCD[6].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD6_DLASTSGA    EDMA.TCD[6].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD6_BITER_ELINKNO EDMA.TCD[6].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD6_BITER_ELINKYES EDMA.TCD[6].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD6_CSR         EDMA.TCD[6].CSR.R              /* TCD Control and Status */
#define DMA_TCD7_SADDR       EDMA.TCD[7].SADDR.R            /* TCD Source Address */
#define DMA_TCD7_ATTR        EDMA.TCD[7].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD7_SOFF        EDMA.TCD[7].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD7_NBYTES_MLNO EDMA.TCD[7].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD7_NBYTES_MLOFFNO EDMA.TCD[7].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD7_NBYTES_MLOFFYES EDMA.TCD[7].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD7_SLAST       EDMA.TCD[7].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD7_DADDR       EDMA.TCD[7].DADDR.R            /* TCD Destination Address */
#define DMA_TCD7_CITER_ELINKNO EDMA.TCD[7].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD7_CITER_ELINKYES EDMA.TCD[7].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD7_DOFF        EDMA.TCD[7].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD7_DLASTSGA    EDMA.TCD[7].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD7_BITER_ELINKNO EDMA.TCD[7].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD7_BITER_ELINKYES EDMA.TCD[7].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD7_CSR         EDMA.TCD[7].CSR.R              /* TCD Control and Status */
#define DMA_TCD8_SADDR       EDMA.TCD[8].SADDR.R            /* TCD Source Address */
#define DMA_TCD8_ATTR        EDMA.TCD[8].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD8_SOFF        EDMA.TCD[8].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD8_NBYTES_MLNO EDMA.TCD[8].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD8_NBYTES_MLOFFNO EDMA.TCD[8].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD8_NBYTES_MLOFFYES EDMA.TCD[8].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD8_SLAST       EDMA.TCD[8].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD8_DADDR       EDMA.TCD[8].DADDR.R            /* TCD Destination Address */
#define DMA_TCD8_CITER_ELINKNO EDMA.TCD[8].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD8_CITER_ELINKYES EDMA.TCD[8].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD8_DOFF        EDMA.TCD[8].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD8_DLASTSGA    EDMA.TCD[8].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD8_BITER_ELINKNO EDMA.TCD[8].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD8_BITER_ELINKYES EDMA.TCD[8].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD8_CSR         EDMA.TCD[8].CSR.R              /* TCD Control and Status */
#define DMA_TCD9_SADDR       EDMA.TCD[9].SADDR.R            /* TCD Source Address */
#define DMA_TCD9_ATTR        EDMA.TCD[9].ATTR.R             /* TCD Transfer Attributes */
#define DMA_TCD9_SOFF        EDMA.TCD[9].SOFF.R             /* TCD Signed Source Address Offset */
#define DMA_TCD9_NBYTES_MLNO EDMA.TCD[9].NBYTES.MLNO.R      /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD9_NBYTES_MLOFFNO EDMA.TCD[9].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD9_NBYTES_MLOFFYES EDMA.TCD[9].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD9_SLAST       EDMA.TCD[9].SLAST.R            /* TCD Last Source Address Adjustment */
#define DMA_TCD9_DADDR       EDMA.TCD[9].DADDR.R            /* TCD Destination Address */
#define DMA_TCD9_CITER_ELINKNO EDMA.TCD[9].CITER.ELINKNO.R  /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD9_CITER_ELINKYES EDMA.TCD[9].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD9_DOFF        EDMA.TCD[9].DOFF.R             /* TCD Signed Destination Address Offset */
#define DMA_TCD9_DLASTSGA    EDMA.TCD[9].DLASTSGA.R         /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD9_BITER_ELINKNO EDMA.TCD[9].BITER.ELINKNO.R  /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD9_BITER_ELINKYES EDMA.TCD[9].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD9_CSR         EDMA.TCD[9].CSR.R              /* TCD Control and Status */
#define DMA_TCD10_SADDR      EDMA.TCD[10].SADDR.R           /* TCD Source Address */
#define DMA_TCD10_ATTR       EDMA.TCD[10].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD10_SOFF       EDMA.TCD[10].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD10_NBYTES_MLNO EDMA.TCD[10].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD10_NBYTES_MLOFFNO EDMA.TCD[10].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD10_NBYTES_MLOFFYES EDMA.TCD[10].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD10_SLAST      EDMA.TCD[10].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD10_DADDR      EDMA.TCD[10].DADDR.R           /* TCD Destination Address */
#define DMA_TCD10_CITER_ELINKNO EDMA.TCD[10].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD10_CITER_ELINKYES EDMA.TCD[10].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD10_DOFF       EDMA.TCD[10].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD10_DLASTSGA   EDMA.TCD[10].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD10_BITER_ELINKNO EDMA.TCD[10].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD10_BITER_ELINKYES EDMA.TCD[10].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD10_CSR        EDMA.TCD[10].CSR.R             /* TCD Control and Status */
#define DMA_TCD11_SADDR      EDMA.TCD[11].SADDR.R           /* TCD Source Address */
#define DMA_TCD11_ATTR       EDMA.TCD[11].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD11_SOFF       EDMA.TCD[11].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD11_NBYTES_MLNO EDMA.TCD[11].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD11_NBYTES_MLOFFNO EDMA.TCD[11].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD11_NBYTES_MLOFFYES EDMA.TCD[11].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD11_SLAST      EDMA.TCD[11].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD11_DADDR      EDMA.TCD[11].DADDR.R           /* TCD Destination Address */
#define DMA_TCD11_CITER_ELINKNO EDMA.TCD[11].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD11_CITER_ELINKYES EDMA.TCD[11].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD11_DOFF       EDMA.TCD[11].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD11_DLASTSGA   EDMA.TCD[11].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD11_BITER_ELINKNO EDMA.TCD[11].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD11_BITER_ELINKYES EDMA.TCD[11].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD11_CSR        EDMA.TCD[11].CSR.R             /* TCD Control and Status */
#define DMA_TCD12_SADDR      EDMA.TCD[12].SADDR.R           /* TCD Source Address */
#define DMA_TCD12_ATTR       EDMA.TCD[12].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD12_SOFF       EDMA.TCD[12].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD12_NBYTES_MLNO EDMA.TCD[12].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD12_NBYTES_MLOFFNO EDMA.TCD[12].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD12_NBYTES_MLOFFYES EDMA.TCD[12].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD12_SLAST      EDMA.TCD[12].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD12_DADDR      EDMA.TCD[12].DADDR.R           /* TCD Destination Address */
#define DMA_TCD12_CITER_ELINKNO EDMA.TCD[12].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD12_CITER_ELINKYES EDMA.TCD[12].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD12_DOFF       EDMA.TCD[12].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD12_DLASTSGA   EDMA.TCD[12].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD12_BITER_ELINKNO EDMA.TCD[12].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD12_BITER_ELINKYES EDMA.TCD[12].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD12_CSR        EDMA.TCD[12].CSR.R             /* TCD Control and Status */
#define DMA_TCD13_SADDR      EDMA.TCD[13].SADDR.R           /* TCD Source Address */
#define DMA_TCD13_ATTR       EDMA.TCD[13].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD13_SOFF       EDMA.TCD[13].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD13_NBYTES_MLNO EDMA.TCD[13].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD13_NBYTES_MLOFFNO EDMA.TCD[13].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD13_NBYTES_MLOFFYES EDMA.TCD[13].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD13_SLAST      EDMA.TCD[13].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD13_DADDR      EDMA.TCD[13].DADDR.R           /* TCD Destination Address */
#define DMA_TCD13_CITER_ELINKNO EDMA.TCD[13].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD13_CITER_ELINKYES EDMA.TCD[13].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD13_DOFF       EDMA.TCD[13].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD13_DLASTSGA   EDMA.TCD[13].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD13_BITER_ELINKNO EDMA.TCD[13].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD13_BITER_ELINKYES EDMA.TCD[13].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD13_CSR        EDMA.TCD[13].CSR.R             /* TCD Control and Status */
#define DMA_TCD14_SADDR      EDMA.TCD[14].SADDR.R           /* TCD Source Address */
#define DMA_TCD14_ATTR       EDMA.TCD[14].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD14_SOFF       EDMA.TCD[14].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD14_NBYTES_MLNO EDMA.TCD[14].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD14_NBYTES_MLOFFNO EDMA.TCD[14].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD14_NBYTES_MLOFFYES EDMA.TCD[14].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD14_SLAST      EDMA.TCD[14].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD14_DADDR      EDMA.TCD[14].DADDR.R           /* TCD Destination Address */
#define DMA_TCD14_CITER_ELINKNO EDMA.TCD[14].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD14_CITER_ELINKYES EDMA.TCD[14].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD14_DOFF       EDMA.TCD[14].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD14_DLASTSGA   EDMA.TCD[14].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD14_BITER_ELINKNO EDMA.TCD[14].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD14_BITER_ELINKYES EDMA.TCD[14].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD14_CSR        EDMA.TCD[14].CSR.R             /* TCD Control and Status */
#define DMA_TCD15_SADDR      EDMA.TCD[15].SADDR.R           /* TCD Source Address */
#define DMA_TCD15_ATTR       EDMA.TCD[15].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD15_SOFF       EDMA.TCD[15].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD15_NBYTES_MLNO EDMA.TCD[15].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD15_NBYTES_MLOFFNO EDMA.TCD[15].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD15_NBYTES_MLOFFYES EDMA.TCD[15].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD15_SLAST      EDMA.TCD[15].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD15_DADDR      EDMA.TCD[15].DADDR.R           /* TCD Destination Address */
#define DMA_TCD15_CITER_ELINKNO EDMA.TCD[15].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD15_CITER_ELINKYES EDMA.TCD[15].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD15_DOFF       EDMA.TCD[15].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD15_DLASTSGA   EDMA.TCD[15].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD15_BITER_ELINKNO EDMA.TCD[15].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD15_BITER_ELINKYES EDMA.TCD[15].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD15_CSR        EDMA.TCD[15].CSR.R             /* TCD Control and Status */
#define DMA_TCD16_SADDR      EDMA.TCD[16].SADDR.R           /* TCD Source Address */
#define DMA_TCD16_ATTR       EDMA.TCD[16].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD16_SOFF       EDMA.TCD[16].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD16_NBYTES_MLNO EDMA.TCD[16].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD16_NBYTES_MLOFFNO EDMA.TCD[16].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD16_NBYTES_MLOFFYES EDMA.TCD[16].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD16_SLAST      EDMA.TCD[16].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD16_DADDR      EDMA.TCD[16].DADDR.R           /* TCD Destination Address */
#define DMA_TCD16_CITER_ELINKNO EDMA.TCD[16].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD16_CITER_ELINKYES EDMA.TCD[16].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD16_DOFF       EDMA.TCD[16].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD16_DLASTSGA   EDMA.TCD[16].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD16_BITER_ELINKNO EDMA.TCD[16].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD16_BITER_ELINKYES EDMA.TCD[16].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD16_CSR        EDMA.TCD[16].CSR.R             /* TCD Control and Status */
#define DMA_TCD17_SADDR      EDMA.TCD[17].SADDR.R           /* TCD Source Address */
#define DMA_TCD17_ATTR       EDMA.TCD[17].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD17_SOFF       EDMA.TCD[17].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD17_NBYTES_MLNO EDMA.TCD[17].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD17_NBYTES_MLOFFNO EDMA.TCD[17].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD17_NBYTES_MLOFFYES EDMA.TCD[17].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD17_SLAST      EDMA.TCD[17].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD17_DADDR      EDMA.TCD[17].DADDR.R           /* TCD Destination Address */
#define DMA_TCD17_CITER_ELINKNO EDMA.TCD[17].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD17_CITER_ELINKYES EDMA.TCD[17].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD17_DOFF       EDMA.TCD[17].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD17_DLASTSGA   EDMA.TCD[17].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD17_BITER_ELINKNO EDMA.TCD[17].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD17_BITER_ELINKYES EDMA.TCD[17].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD17_CSR        EDMA.TCD[17].CSR.R             /* TCD Control and Status */
#define DMA_TCD18_SADDR      EDMA.TCD[18].SADDR.R           /* TCD Source Address */
#define DMA_TCD18_ATTR       EDMA.TCD[18].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD18_SOFF       EDMA.TCD[18].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD18_NBYTES_MLNO EDMA.TCD[18].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD18_NBYTES_MLOFFNO EDMA.TCD[18].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD18_NBYTES_MLOFFYES EDMA.TCD[18].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD18_SLAST      EDMA.TCD[18].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD18_DADDR      EDMA.TCD[18].DADDR.R           /* TCD Destination Address */
#define DMA_TCD18_CITER_ELINKNO EDMA.TCD[18].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD18_CITER_ELINKYES EDMA.TCD[18].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD18_DOFF       EDMA.TCD[18].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD18_DLASTSGA   EDMA.TCD[18].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD18_BITER_ELINKNO EDMA.TCD[18].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD18_BITER_ELINKYES EDMA.TCD[18].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD18_CSR        EDMA.TCD[18].CSR.R             /* TCD Control and Status */
#define DMA_TCD19_SADDR      EDMA.TCD[19].SADDR.R           /* TCD Source Address */
#define DMA_TCD19_ATTR       EDMA.TCD[19].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD19_SOFF       EDMA.TCD[19].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD19_NBYTES_MLNO EDMA.TCD[19].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD19_NBYTES_MLOFFNO EDMA.TCD[19].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD19_NBYTES_MLOFFYES EDMA.TCD[19].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD19_SLAST      EDMA.TCD[19].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD19_DADDR      EDMA.TCD[19].DADDR.R           /* TCD Destination Address */
#define DMA_TCD19_CITER_ELINKNO EDMA.TCD[19].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD19_CITER_ELINKYES EDMA.TCD[19].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD19_DOFF       EDMA.TCD[19].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD19_DLASTSGA   EDMA.TCD[19].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD19_BITER_ELINKNO EDMA.TCD[19].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD19_BITER_ELINKYES EDMA.TCD[19].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD19_CSR        EDMA.TCD[19].CSR.R             /* TCD Control and Status */
#define DMA_TCD20_SADDR      EDMA.TCD[20].SADDR.R           /* TCD Source Address */
#define DMA_TCD20_ATTR       EDMA.TCD[20].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD20_SOFF       EDMA.TCD[20].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD20_NBYTES_MLNO EDMA.TCD[20].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD20_NBYTES_MLOFFNO EDMA.TCD[20].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD20_NBYTES_MLOFFYES EDMA.TCD[20].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD20_SLAST      EDMA.TCD[20].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD20_DADDR      EDMA.TCD[20].DADDR.R           /* TCD Destination Address */
#define DMA_TCD20_CITER_ELINKNO EDMA.TCD[20].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD20_CITER_ELINKYES EDMA.TCD[20].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD20_DOFF       EDMA.TCD[20].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD20_DLASTSGA   EDMA.TCD[20].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD20_BITER_ELINKNO EDMA.TCD[20].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD20_BITER_ELINKYES EDMA.TCD[20].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD20_CSR        EDMA.TCD[20].CSR.R             /* TCD Control and Status */
#define DMA_TCD21_SADDR      EDMA.TCD[21].SADDR.R           /* TCD Source Address */
#define DMA_TCD21_ATTR       EDMA.TCD[21].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD21_SOFF       EDMA.TCD[21].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD21_NBYTES_MLNO EDMA.TCD[21].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD21_NBYTES_MLOFFNO EDMA.TCD[21].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD21_NBYTES_MLOFFYES EDMA.TCD[21].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD21_SLAST      EDMA.TCD[21].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD21_DADDR      EDMA.TCD[21].DADDR.R           /* TCD Destination Address */
#define DMA_TCD21_CITER_ELINKNO EDMA.TCD[21].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD21_CITER_ELINKYES EDMA.TCD[21].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD21_DOFF       EDMA.TCD[21].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD21_DLASTSGA   EDMA.TCD[21].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD21_BITER_ELINKNO EDMA.TCD[21].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD21_BITER_ELINKYES EDMA.TCD[21].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD21_CSR        EDMA.TCD[21].CSR.R             /* TCD Control and Status */
#define DMA_TCD22_SADDR      EDMA.TCD[22].SADDR.R           /* TCD Source Address */
#define DMA_TCD22_ATTR       EDMA.TCD[22].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD22_SOFF       EDMA.TCD[22].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD22_NBYTES_MLNO EDMA.TCD[22].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD22_NBYTES_MLOFFNO EDMA.TCD[22].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD22_NBYTES_MLOFFYES EDMA.TCD[22].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD22_SLAST      EDMA.TCD[22].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD22_DADDR      EDMA.TCD[22].DADDR.R           /* TCD Destination Address */
#define DMA_TCD22_CITER_ELINKNO EDMA.TCD[22].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD22_CITER_ELINKYES EDMA.TCD[22].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD22_DOFF       EDMA.TCD[22].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD22_DLASTSGA   EDMA.TCD[22].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD22_BITER_ELINKNO EDMA.TCD[22].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD22_BITER_ELINKYES EDMA.TCD[22].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD22_CSR        EDMA.TCD[22].CSR.R             /* TCD Control and Status */
#define DMA_TCD23_SADDR      EDMA.TCD[23].SADDR.R           /* TCD Source Address */
#define DMA_TCD23_ATTR       EDMA.TCD[23].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD23_SOFF       EDMA.TCD[23].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD23_NBYTES_MLNO EDMA.TCD[23].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD23_NBYTES_MLOFFNO EDMA.TCD[23].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD23_NBYTES_MLOFFYES EDMA.TCD[23].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD23_SLAST      EDMA.TCD[23].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD23_DADDR      EDMA.TCD[23].DADDR.R           /* TCD Destination Address */
#define DMA_TCD23_CITER_ELINKNO EDMA.TCD[23].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD23_CITER_ELINKYES EDMA.TCD[23].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD23_DOFF       EDMA.TCD[23].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD23_DLASTSGA   EDMA.TCD[23].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD23_BITER_ELINKNO EDMA.TCD[23].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD23_BITER_ELINKYES EDMA.TCD[23].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD23_CSR        EDMA.TCD[23].CSR.R             /* TCD Control and Status */
#define DMA_TCD24_SADDR      EDMA.TCD[24].SADDR.R           /* TCD Source Address */
#define DMA_TCD24_ATTR       EDMA.TCD[24].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD24_SOFF       EDMA.TCD[24].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD24_NBYTES_MLNO EDMA.TCD[24].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD24_NBYTES_MLOFFNO EDMA.TCD[24].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD24_NBYTES_MLOFFYES EDMA.TCD[24].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD24_SLAST      EDMA.TCD[24].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD24_DADDR      EDMA.TCD[24].DADDR.R           /* TCD Destination Address */
#define DMA_TCD24_CITER_ELINKNO EDMA.TCD[24].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD24_CITER_ELINKYES EDMA.TCD[24].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD24_DOFF       EDMA.TCD[24].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD24_DLASTSGA   EDMA.TCD[24].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD24_BITER_ELINKNO EDMA.TCD[24].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD24_BITER_ELINKYES EDMA.TCD[24].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD24_CSR        EDMA.TCD[24].CSR.R             /* TCD Control and Status */
#define DMA_TCD25_SADDR      EDMA.TCD[25].SADDR.R           /* TCD Source Address */
#define DMA_TCD25_ATTR       EDMA.TCD[25].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD25_SOFF       EDMA.TCD[25].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD25_NBYTES_MLNO EDMA.TCD[25].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD25_NBYTES_MLOFFNO EDMA.TCD[25].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD25_NBYTES_MLOFFYES EDMA.TCD[25].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD25_SLAST      EDMA.TCD[25].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD25_DADDR      EDMA.TCD[25].DADDR.R           /* TCD Destination Address */
#define DMA_TCD25_CITER_ELINKNO EDMA.TCD[25].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD25_CITER_ELINKYES EDMA.TCD[25].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD25_DOFF       EDMA.TCD[25].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD25_DLASTSGA   EDMA.TCD[25].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD25_BITER_ELINKNO EDMA.TCD[25].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD25_BITER_ELINKYES EDMA.TCD[25].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD25_CSR        EDMA.TCD[25].CSR.R             /* TCD Control and Status */
#define DMA_TCD26_SADDR      EDMA.TCD[26].SADDR.R           /* TCD Source Address */
#define DMA_TCD26_ATTR       EDMA.TCD[26].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD26_SOFF       EDMA.TCD[26].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD26_NBYTES_MLNO EDMA.TCD[26].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD26_NBYTES_MLOFFNO EDMA.TCD[26].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD26_NBYTES_MLOFFYES EDMA.TCD[26].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD26_SLAST      EDMA.TCD[26].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD26_DADDR      EDMA.TCD[26].DADDR.R           /* TCD Destination Address */
#define DMA_TCD26_CITER_ELINKNO EDMA.TCD[26].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD26_CITER_ELINKYES EDMA.TCD[26].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD26_DOFF       EDMA.TCD[26].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD26_DLASTSGA   EDMA.TCD[26].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD26_BITER_ELINKNO EDMA.TCD[26].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD26_BITER_ELINKYES EDMA.TCD[26].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD26_CSR        EDMA.TCD[26].CSR.R             /* TCD Control and Status */
#define DMA_TCD27_SADDR      EDMA.TCD[27].SADDR.R           /* TCD Source Address */
#define DMA_TCD27_ATTR       EDMA.TCD[27].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD27_SOFF       EDMA.TCD[27].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD27_NBYTES_MLNO EDMA.TCD[27].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD27_NBYTES_MLOFFNO EDMA.TCD[27].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD27_NBYTES_MLOFFYES EDMA.TCD[27].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD27_SLAST      EDMA.TCD[27].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD27_DADDR      EDMA.TCD[27].DADDR.R           /* TCD Destination Address */
#define DMA_TCD27_CITER_ELINKNO EDMA.TCD[27].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD27_CITER_ELINKYES EDMA.TCD[27].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD27_DOFF       EDMA.TCD[27].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD27_DLASTSGA   EDMA.TCD[27].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD27_BITER_ELINKNO EDMA.TCD[27].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD27_BITER_ELINKYES EDMA.TCD[27].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD27_CSR        EDMA.TCD[27].CSR.R             /* TCD Control and Status */
#define DMA_TCD28_SADDR      EDMA.TCD[28].SADDR.R           /* TCD Source Address */
#define DMA_TCD28_ATTR       EDMA.TCD[28].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD28_SOFF       EDMA.TCD[28].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD28_NBYTES_MLNO EDMA.TCD[28].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD28_NBYTES_MLOFFNO EDMA.TCD[28].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD28_NBYTES_MLOFFYES EDMA.TCD[28].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD28_SLAST      EDMA.TCD[28].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD28_DADDR      EDMA.TCD[28].DADDR.R           /* TCD Destination Address */
#define DMA_TCD28_CITER_ELINKNO EDMA.TCD[28].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD28_CITER_ELINKYES EDMA.TCD[28].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD28_DOFF       EDMA.TCD[28].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD28_DLASTSGA   EDMA.TCD[28].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD28_BITER_ELINKNO EDMA.TCD[28].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD28_BITER_ELINKYES EDMA.TCD[28].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD28_CSR        EDMA.TCD[28].CSR.R             /* TCD Control and Status */
#define DMA_TCD29_SADDR      EDMA.TCD[29].SADDR.R           /* TCD Source Address */
#define DMA_TCD29_ATTR       EDMA.TCD[29].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD29_SOFF       EDMA.TCD[29].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD29_NBYTES_MLNO EDMA.TCD[29].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD29_NBYTES_MLOFFNO EDMA.TCD[29].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD29_NBYTES_MLOFFYES EDMA.TCD[29].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD29_SLAST      EDMA.TCD[29].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD29_DADDR      EDMA.TCD[29].DADDR.R           /* TCD Destination Address */
#define DMA_TCD29_CITER_ELINKNO EDMA.TCD[29].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD29_CITER_ELINKYES EDMA.TCD[29].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD29_DOFF       EDMA.TCD[29].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD29_DLASTSGA   EDMA.TCD[29].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD29_BITER_ELINKNO EDMA.TCD[29].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD29_BITER_ELINKYES EDMA.TCD[29].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD29_CSR        EDMA.TCD[29].CSR.R             /* TCD Control and Status */
#define DMA_TCD30_SADDR      EDMA.TCD[30].SADDR.R           /* TCD Source Address */
#define DMA_TCD30_ATTR       EDMA.TCD[30].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD30_SOFF       EDMA.TCD[30].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD30_NBYTES_MLNO EDMA.TCD[30].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD30_NBYTES_MLOFFNO EDMA.TCD[30].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD30_NBYTES_MLOFFYES EDMA.TCD[30].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD30_SLAST      EDMA.TCD[30].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD30_DADDR      EDMA.TCD[30].DADDR.R           /* TCD Destination Address */
#define DMA_TCD30_CITER_ELINKNO EDMA.TCD[30].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD30_CITER_ELINKYES EDMA.TCD[30].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD30_DOFF       EDMA.TCD[30].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD30_DLASTSGA   EDMA.TCD[30].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD30_BITER_ELINKNO EDMA.TCD[30].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD30_BITER_ELINKYES EDMA.TCD[30].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD30_CSR        EDMA.TCD[30].CSR.R             /* TCD Control and Status */
#define DMA_TCD31_SADDR      EDMA.TCD[31].SADDR.R           /* TCD Source Address */
#define DMA_TCD31_ATTR       EDMA.TCD[31].ATTR.R            /* TCD Transfer Attributes */
#define DMA_TCD31_SOFF       EDMA.TCD[31].SOFF.R            /* TCD Signed Source Address Offset */
#define DMA_TCD31_NBYTES_MLNO EDMA.TCD[31].NBYTES.MLNO.R    /* TCD Minor Byte Count (Minor Loop Disabled) */
#define DMA_TCD31_NBYTES_MLOFFNO EDMA.TCD[31].NBYTES.MLOFFNO.R /* TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
#define DMA_TCD31_NBYTES_MLOFFYES EDMA.TCD[31].NBYTES.MLOFFYES.R /* TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled) */
#define DMA_TCD31_SLAST      EDMA.TCD[31].SLAST.R           /* TCD Last Source Address Adjustment */
#define DMA_TCD31_DADDR      EDMA.TCD[31].DADDR.R           /* TCD Destination Address */
#define DMA_TCD31_CITER_ELINKNO EDMA.TCD[31].CITER.ELINKNO.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD31_CITER_ELINKYES EDMA.TCD[31].CITER.ELINKYES.R /* TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD31_DOFF       EDMA.TCD[31].DOFF.R            /* TCD Signed Destination Address Offset */
#define DMA_TCD31_DLASTSGA   EDMA.TCD[31].DLASTSGA.R        /* TCD Last Destination Address Adjustment/Scatter Gather Address */
#define DMA_TCD31_BITER_ELINKNO EDMA.TCD[31].BITER.ELINKNO.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
#define DMA_TCD31_BITER_ELINKYES EDMA.TCD[31].BITER.ELINKYES.R /* TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
#define DMA_TCD31_CSR        EDMA.TCD[31].CSR.R             /* TCD Control and Status */

/* DMAMUX */
#define DMAMUX_0_CHCFG0      DMAMUX_0.CHCFG[0].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG1      DMAMUX_0.CHCFG[1].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG2      DMAMUX_0.CHCFG[2].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG3      DMAMUX_0.CHCFG[3].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG4      DMAMUX_0.CHCFG[4].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG5      DMAMUX_0.CHCFG[5].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG6      DMAMUX_0.CHCFG[6].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG7      DMAMUX_0.CHCFG[7].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG8      DMAMUX_0.CHCFG[8].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG9      DMAMUX_0.CHCFG[9].R           /* Channel Configuration register */
#define DMAMUX_0_CHCFG10     DMAMUX_0.CHCFG[10].R          /* Channel Configuration register */
#define DMAMUX_0_CHCFG11     DMAMUX_0.CHCFG[11].R          /* Channel Configuration register */
#define DMAMUX_0_CHCFG12     DMAMUX_0.CHCFG[12].R          /* Channel Configuration register */
#define DMAMUX_0_CHCFG13     DMAMUX_0.CHCFG[13].R          /* Channel Configuration register */
#define DMAMUX_0_CHCFG14     DMAMUX_0.CHCFG[14].R          /* Channel Configuration register */
#define DMAMUX_0_CHCFG15     DMAMUX_0.CHCFG[15].R          /* Channel Configuration register */

/* DMAMUX */
#define DMAMUX_1_CHCFG0      DMAMUX_1.CHCFG[0].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG1      DMAMUX_1.CHCFG[1].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG2      DMAMUX_1.CHCFG[2].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG3      DMAMUX_1.CHCFG[3].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG4      DMAMUX_1.CHCFG[4].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG5      DMAMUX_1.CHCFG[5].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG6      DMAMUX_1.CHCFG[6].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG7      DMAMUX_1.CHCFG[7].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG8      DMAMUX_1.CHCFG[8].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG9      DMAMUX_1.CHCFG[9].R           /* Channel Configuration register */
#define DMAMUX_1_CHCFG10     DMAMUX_1.CHCFG[10].R          /* Channel Configuration register */
#define DMAMUX_1_CHCFG11     DMAMUX_1.CHCFG[11].R          /* Channel Configuration register */
#define DMAMUX_1_CHCFG12     DMAMUX_1.CHCFG[12].R          /* Channel Configuration register */
#define DMAMUX_1_CHCFG13     DMAMUX_1.CHCFG[13].R          /* Channel Configuration register */
#define DMAMUX_1_CHCFG14     DMAMUX_1.CHCFG[14].R          /* Channel Configuration register */
#define DMAMUX_1_CHCFG15     DMAMUX_1.CHCFG[15].R          /* Channel Configuration register */

/* DSPI */
#define DSPI_0_MCR           DSPI_0.MCR.R                  /* Module Configuration Register */
#define DSPI_0_TCR           DSPI_0.TCR.R                  /* Transfer Count Register */
#define DSPI_0_CTAR0         DSPI_0.MODE.CTAR[0].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR1         DSPI_0.MODE.CTAR[1].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR2         DSPI_0.MODE.CTAR[2].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR3         DSPI_0.MODE.CTAR[3].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR4         DSPI_0.MODE.CTAR[4].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR5         DSPI_0.MODE.CTAR[5].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_0_CTAR0_SLAVE   DSPI_0.MODE.CTAR_SLAVE[0].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_0_CTAR1_SLAVE   DSPI_0.MODE.CTAR_SLAVE[1].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_0_SR            DSPI_0.SR.R                   /* Status Register */
#define DSPI_0_RSER          DSPI_0.RSER.R                 /* DMA/Interrupt Request Select and Enable Register */
#define DSPI_0_PUSHR         DSPI_0.PUSHR.PUSHR.R          /* PUSH TX FIFO Register In Master Mode */
#define DSPI_0_PUSHR_SLAVE   DSPI_0.PUSHR.PUSHR_SLAVE.R    /* PUSH TX FIFO Register In Slave Mode */
#define DSPI_0_POPR          DSPI_0.POPR.R                 /* POP RX FIFO Register */
#define DSPI_0_TXFR0         DSPI_0.TXFR[0].R              /* Transmit FIFO Registers */
#define DSPI_0_TXFR1         DSPI_0.TXFR[1].R              /* Transmit FIFO Registers */
#define DSPI_0_TXFR2         DSPI_0.TXFR[2].R              /* Transmit FIFO Registers */
#define DSPI_0_TXFR3         DSPI_0.TXFR[3].R              /* Transmit FIFO Registers */
#define DSPI_0_RXFR0         DSPI_0.RXFR[0].R              /* Receive FIFO Registers */
#define DSPI_0_RXFR1         DSPI_0.RXFR[1].R              /* Receive FIFO Registers */
#define DSPI_0_RXFR2         DSPI_0.RXFR[2].R              /* Receive FIFO Registers */
#define DSPI_0_RXFR3         DSPI_0.RXFR[3].R              /* Receive FIFO Registers */
#define DSPI_0_DSICR0        DSPI_0.DSICR0.R               /* DSI Configuration Register 0 */
#define DSPI_0_SDR0          DSPI_0.SDR0.R                 /* DSI Serialization Data Register 0 */
#define DSPI_0_ASDR0         DSPI_0.ASDR0.R                /* DSI Alternate Serialization Data Register 0 */
#define DSPI_0_COMPR0        DSPI_0.COMPR0.R               /* DSI Transmit Comparison Register 0 */
#define DSPI_0_DDR0          DSPI_0.DDR0.R                 /* DSI Deserialization Data Register 0 */
#define DSPI_0_DSICR1        DSPI_0.DSICR1.R               /* DSI Configuration Register 1 */
#define DSPI_0_SSR0          DSPI_0.SSR0.R                 /* DSI Serialization Source Select Register 0 */
#define DSPI_0_PISR0         DSPI_0.PISR0.R                /* DSI Parallel Input Select Register 0 */
#define DSPI_0_PISR1         DSPI_0.PISR1.R                /* DSI Parallel Input Select Register 1 */
#define DSPI_0_PISR2         DSPI_0.PISR2.R                /* DSI Parallel Input Select Register 2 */
#define DSPI_0_PISR3         DSPI_0.PISR3.R                /* DSI Parallel Input Select Register 3 */
#define DSPI_0_DIMR0         DSPI_0.DIMR0.R                /* DSI Deserialized Data Interrupt Mask Register 0 */
#define DSPI_0_DPIR0         DSPI_0.DPIR0.R                /* DSI Deserialized Data Polarity Interrupt Register 0 */
#define DSPI_0_SDR1          DSPI_0.SDR1.R                 /* DSI Serialization Data Register 1 */
#define DSPI_0_ASDR1         DSPI_0.ASDR1.R                /* DSI Alternate Serialization Data Register 1 */
#define DSPI_0_COMPR1        DSPI_0.COMPR1.R               /* DSI Transmit Comparison Register 1 */
#define DSPI_0_DDR1          DSPI_0.DDR1.R                 /* DSI Deserialization Data Register 1 */
#define DSPI_0_SSR1          DSPI_0.SSR1.R                 /* DSI Serialization Source Select Register 1 */
#define DSPI_0_PISR4         DSPI_0.PISR4.R                /* DSI Parallel Input Select Register 4 */
#define DSPI_0_PISR5         DSPI_0.PISR5.R                /* DSI Parallel Input Select Register 5 */
#define DSPI_0_PISR6         DSPI_0.PISR6.R                /* DSI Parallel Input Select Register 6 */
#define DSPI_0_PISR7         DSPI_0.PISR7.R                /* DSI Parallel Input Select Register 7 */
#define DSPI_0_DIMR1         DSPI_0.DIMR1.R                /* DSI Deserialized Data Interrupt Mask Register 1 */
#define DSPI_0_DPIR1         DSPI_0.DPIR1.R                /* DSI Deserialized Data Polarity Interrupt Register 1 */
#define DSPI_0_CTARE0        DSPI_0.CTARE[0].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_CTARE1        DSPI_0.CTARE[1].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_CTARE2        DSPI_0.CTARE[2].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_CTARE3        DSPI_0.CTARE[3].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_CTARE4        DSPI_0.CTARE[4].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_CTARE5        DSPI_0.CTARE[5].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_0_SREX          DSPI_0.SREX.R                 /* Status Register Extended */
#define DSPI_0_TRIG          DSPI_0.TRIG.R                 /* Trigger Register */

/* DSPI */
#define DSPI_1_MCR           DSPI_1.MCR.R                  /* Module Configuration Register */
#define DSPI_1_TCR           DSPI_1.TCR.R                  /* Transfer Count Register */
#define DSPI_1_CTAR0         DSPI_1.MODE.CTAR[0].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR1         DSPI_1.MODE.CTAR[1].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR2         DSPI_1.MODE.CTAR[2].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR3         DSPI_1.MODE.CTAR[3].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR4         DSPI_1.MODE.CTAR[4].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR5         DSPI_1.MODE.CTAR[5].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_1_CTAR0_SLAVE   DSPI_1.MODE.CTAR_SLAVE[0].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_1_CTAR1_SLAVE   DSPI_1.MODE.CTAR_SLAVE[1].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_1_SR            DSPI_1.SR.R                   /* Status Register */
#define DSPI_1_RSER          DSPI_1.RSER.R                 /* DMA/Interrupt Request Select and Enable Register */
#define DSPI_1_PUSHR         DSPI_1.PUSHR.PUSHR.R          /* PUSH TX FIFO Register In Master Mode */
#define DSPI_1_PUSHR_SLAVE   DSPI_1.PUSHR.PUSHR_SLAVE.R    /* PUSH TX FIFO Register In Slave Mode */
#define DSPI_1_POPR          DSPI_1.POPR.R                 /* POP RX FIFO Register */
#define DSPI_1_TXFR0         DSPI_1.TXFR[0].R              /* Transmit FIFO Registers */
#define DSPI_1_TXFR1         DSPI_1.TXFR[1].R              /* Transmit FIFO Registers */
#define DSPI_1_TXFR2         DSPI_1.TXFR[2].R              /* Transmit FIFO Registers */
#define DSPI_1_TXFR3         DSPI_1.TXFR[3].R              /* Transmit FIFO Registers */
#define DSPI_1_RXFR0         DSPI_1.RXFR[0].R              /* Receive FIFO Registers */
#define DSPI_1_RXFR1         DSPI_1.RXFR[1].R              /* Receive FIFO Registers */
#define DSPI_1_RXFR2         DSPI_1.RXFR[2].R              /* Receive FIFO Registers */
#define DSPI_1_RXFR3         DSPI_1.RXFR[3].R              /* Receive FIFO Registers */
#define DSPI_1_DSICR0        DSPI_1.DSICR0.R               /* DSI Configuration Register 0 */
#define DSPI_1_SDR0          DSPI_1.SDR0.R                 /* DSI Serialization Data Register 0 */
#define DSPI_1_ASDR0         DSPI_1.ASDR0.R                /* DSI Alternate Serialization Data Register 0 */
#define DSPI_1_COMPR0        DSPI_1.COMPR0.R               /* DSI Transmit Comparison Register 0 */
#define DSPI_1_DDR0          DSPI_1.DDR0.R                 /* DSI Deserialization Data Register 0 */
#define DSPI_1_DSICR1        DSPI_1.DSICR1.R               /* DSI Configuration Register 1 */
#define DSPI_1_SSR0          DSPI_1.SSR0.R                 /* DSI Serialization Source Select Register 0 */
#define DSPI_1_PISR0         DSPI_1.PISR0.R                /* DSI Parallel Input Select Register 0 */
#define DSPI_1_PISR1         DSPI_1.PISR1.R                /* DSI Parallel Input Select Register 1 */
#define DSPI_1_PISR2         DSPI_1.PISR2.R                /* DSI Parallel Input Select Register 2 */
#define DSPI_1_PISR3         DSPI_1.PISR3.R                /* DSI Parallel Input Select Register 3 */
#define DSPI_1_DIMR0         DSPI_1.DIMR0.R                /* DSI Deserialized Data Interrupt Mask Register 0 */
#define DSPI_1_DPIR0         DSPI_1.DPIR0.R                /* DSI Deserialized Data Polarity Interrupt Register 0 */
#define DSPI_1_SDR1          DSPI_1.SDR1.R                 /* DSI Serialization Data Register 1 */
#define DSPI_1_ASDR1         DSPI_1.ASDR1.R                /* DSI Alternate Serialization Data Register 1 */
#define DSPI_1_COMPR1        DSPI_1.COMPR1.R               /* DSI Transmit Comparison Register 1 */
#define DSPI_1_DDR1          DSPI_1.DDR1.R                 /* DSI Deserialization Data Register 1 */
#define DSPI_1_SSR1          DSPI_1.SSR1.R                 /* DSI Serialization Source Select Register 1 */
#define DSPI_1_PISR4         DSPI_1.PISR4.R                /* DSI Parallel Input Select Register 4 */
#define DSPI_1_PISR5         DSPI_1.PISR5.R                /* DSI Parallel Input Select Register 5 */
#define DSPI_1_PISR6         DSPI_1.PISR6.R                /* DSI Parallel Input Select Register 6 */
#define DSPI_1_PISR7         DSPI_1.PISR7.R                /* DSI Parallel Input Select Register 7 */
#define DSPI_1_DIMR1         DSPI_1.DIMR1.R                /* DSI Deserialized Data Interrupt Mask Register 1 */
#define DSPI_1_DPIR1         DSPI_1.DPIR1.R                /* DSI Deserialized Data Polarity Interrupt Register 1 */
#define DSPI_1_CTARE0        DSPI_1.CTARE[0].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_CTARE1        DSPI_1.CTARE[1].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_CTARE2        DSPI_1.CTARE[2].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_CTARE3        DSPI_1.CTARE[3].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_CTARE4        DSPI_1.CTARE[4].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_CTARE5        DSPI_1.CTARE[5].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_1_SREX          DSPI_1.SREX.R                 /* Status Register Extended */
#define DSPI_1_TRIG          DSPI_1.TRIG.R                 /* Trigger Register */

/* DSPI */
#define DSPI_2_MCR           DSPI_2.MCR.R                  /* Module Configuration Register */
#define DSPI_2_TCR           DSPI_2.TCR.R                  /* Transfer Count Register */
#define DSPI_2_CTAR0         DSPI_2.MODE.CTAR[0].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR1         DSPI_2.MODE.CTAR[1].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR2         DSPI_2.MODE.CTAR[2].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR3         DSPI_2.MODE.CTAR[3].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR4         DSPI_2.MODE.CTAR[4].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR5         DSPI_2.MODE.CTAR[5].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_2_CTAR0_SLAVE   DSPI_2.MODE.CTAR_SLAVE[0].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_2_CTAR1_SLAVE   DSPI_2.MODE.CTAR_SLAVE[1].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_2_SR            DSPI_2.SR.R                   /* Status Register */
#define DSPI_2_RSER          DSPI_2.RSER.R                 /* DMA/Interrupt Request Select and Enable Register */
#define DSPI_2_PUSHR         DSPI_2.PUSHR.PUSHR.R          /* PUSH TX FIFO Register In Master Mode */
#define DSPI_2_PUSHR_SLAVE   DSPI_2.PUSHR.PUSHR_SLAVE.R    /* PUSH TX FIFO Register In Slave Mode */
#define DSPI_2_POPR          DSPI_2.POPR.R                 /* POP RX FIFO Register */
#define DSPI_2_TXFR0         DSPI_2.TXFR[0].R              /* Transmit FIFO Registers */
#define DSPI_2_TXFR1         DSPI_2.TXFR[1].R              /* Transmit FIFO Registers */
#define DSPI_2_TXFR2         DSPI_2.TXFR[2].R              /* Transmit FIFO Registers */
#define DSPI_2_TXFR3         DSPI_2.TXFR[3].R              /* Transmit FIFO Registers */
#define DSPI_2_RXFR0         DSPI_2.RXFR[0].R              /* Receive FIFO Registers */
#define DSPI_2_RXFR1         DSPI_2.RXFR[1].R              /* Receive FIFO Registers */
#define DSPI_2_RXFR2         DSPI_2.RXFR[2].R              /* Receive FIFO Registers */
#define DSPI_2_RXFR3         DSPI_2.RXFR[3].R              /* Receive FIFO Registers */
#define DSPI_2_DSICR0        DSPI_2.DSICR0.R               /* DSI Configuration Register 0 */
#define DSPI_2_SDR0          DSPI_2.SDR0.R                 /* DSI Serialization Data Register 0 */
#define DSPI_2_ASDR0         DSPI_2.ASDR0.R                /* DSI Alternate Serialization Data Register 0 */
#define DSPI_2_COMPR0        DSPI_2.COMPR0.R               /* DSI Transmit Comparison Register 0 */
#define DSPI_2_DDR0          DSPI_2.DDR0.R                 /* DSI Deserialization Data Register 0 */
#define DSPI_2_DSICR1        DSPI_2.DSICR1.R               /* DSI Configuration Register 1 */
#define DSPI_2_SSR0          DSPI_2.SSR0.R                 /* DSI Serialization Source Select Register 0 */
#define DSPI_2_PISR0         DSPI_2.PISR0.R                /* DSI Parallel Input Select Register 0 */
#define DSPI_2_PISR1         DSPI_2.PISR1.R                /* DSI Parallel Input Select Register 1 */
#define DSPI_2_PISR2         DSPI_2.PISR2.R                /* DSI Parallel Input Select Register 2 */
#define DSPI_2_PISR3         DSPI_2.PISR3.R                /* DSI Parallel Input Select Register 3 */
#define DSPI_2_DIMR0         DSPI_2.DIMR0.R                /* DSI Deserialized Data Interrupt Mask Register 0 */
#define DSPI_2_DPIR0         DSPI_2.DPIR0.R                /* DSI Deserialized Data Polarity Interrupt Register 0 */
#define DSPI_2_SDR1          DSPI_2.SDR1.R                 /* DSI Serialization Data Register 1 */
#define DSPI_2_ASDR1         DSPI_2.ASDR1.R                /* DSI Alternate Serialization Data Register 1 */
#define DSPI_2_COMPR1        DSPI_2.COMPR1.R               /* DSI Transmit Comparison Register 1 */
#define DSPI_2_DDR1          DSPI_2.DDR1.R                 /* DSI Deserialization Data Register 1 */
#define DSPI_2_SSR1          DSPI_2.SSR1.R                 /* DSI Serialization Source Select Register 1 */
#define DSPI_2_PISR4         DSPI_2.PISR4.R                /* DSI Parallel Input Select Register 4 */
#define DSPI_2_PISR5         DSPI_2.PISR5.R                /* DSI Parallel Input Select Register 5 */
#define DSPI_2_PISR6         DSPI_2.PISR6.R                /* DSI Parallel Input Select Register 6 */
#define DSPI_2_PISR7         DSPI_2.PISR7.R                /* DSI Parallel Input Select Register 7 */
#define DSPI_2_DIMR1         DSPI_2.DIMR1.R                /* DSI Deserialized Data Interrupt Mask Register 1 */
#define DSPI_2_DPIR1         DSPI_2.DPIR1.R                /* DSI Deserialized Data Polarity Interrupt Register 1 */
#define DSPI_2_CTARE0        DSPI_2.CTARE[0].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_CTARE1        DSPI_2.CTARE[1].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_CTARE2        DSPI_2.CTARE[2].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_CTARE3        DSPI_2.CTARE[3].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_CTARE4        DSPI_2.CTARE[4].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_CTARE5        DSPI_2.CTARE[5].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_2_SREX          DSPI_2.SREX.R                 /* Status Register Extended */
#define DSPI_2_TRIG          DSPI_2.TRIG.R                 /* Trigger Register */

/* DSPI */
#define DSPI_3_MCR           DSPI_3.MCR.R                  /* Module Configuration Register */
#define DSPI_3_TCR           DSPI_3.TCR.R                  /* Transfer Count Register */
#define DSPI_3_CTAR0         DSPI_3.MODE.CTAR[0].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR1         DSPI_3.MODE.CTAR[1].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR2         DSPI_3.MODE.CTAR[2].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR3         DSPI_3.MODE.CTAR[3].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR4         DSPI_3.MODE.CTAR[4].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR5         DSPI_3.MODE.CTAR[5].R         /* Clock and Transfer Attributes Register (In Master Mode) */
#define DSPI_3_CTAR0_SLAVE   DSPI_3.MODE.CTAR_SLAVE[0].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_3_CTAR1_SLAVE   DSPI_3.MODE.CTAR_SLAVE[1].R   /* Clock and Transfer Attributes Register (In Slave Mode) */
#define DSPI_3_SR            DSPI_3.SR.R                   /* Status Register */
#define DSPI_3_RSER          DSPI_3.RSER.R                 /* DMA/Interrupt Request Select and Enable Register */
#define DSPI_3_PUSHR         DSPI_3.PUSHR.PUSHR.R          /* PUSH TX FIFO Register In Master Mode */
#define DSPI_3_PUSHR_SLAVE   DSPI_3.PUSHR.PUSHR_SLAVE.R    /* PUSH TX FIFO Register In Slave Mode */
#define DSPI_3_POPR          DSPI_3.POPR.R                 /* POP RX FIFO Register */
#define DSPI_3_TXFR0         DSPI_3.TXFR[0].R              /* Transmit FIFO Registers */
#define DSPI_3_TXFR1         DSPI_3.TXFR[1].R              /* Transmit FIFO Registers */
#define DSPI_3_TXFR2         DSPI_3.TXFR[2].R              /* Transmit FIFO Registers */
#define DSPI_3_TXFR3         DSPI_3.TXFR[3].R              /* Transmit FIFO Registers */
#define DSPI_3_RXFR0         DSPI_3.RXFR[0].R              /* Receive FIFO Registers */
#define DSPI_3_RXFR1         DSPI_3.RXFR[1].R              /* Receive FIFO Registers */
#define DSPI_3_RXFR2         DSPI_3.RXFR[2].R              /* Receive FIFO Registers */
#define DSPI_3_RXFR3         DSPI_3.RXFR[3].R              /* Receive FIFO Registers */
#define DSPI_3_DSICR0        DSPI_3.DSICR0.R               /* DSI Configuration Register 0 */
#define DSPI_3_SDR0          DSPI_3.SDR0.R                 /* DSI Serialization Data Register 0 */
#define DSPI_3_ASDR0         DSPI_3.ASDR0.R                /* DSI Alternate Serialization Data Register 0 */
#define DSPI_3_COMPR0        DSPI_3.COMPR0.R               /* DSI Transmit Comparison Register 0 */
#define DSPI_3_DDR0          DSPI_3.DDR0.R                 /* DSI Deserialization Data Register 0 */
#define DSPI_3_DSICR1        DSPI_3.DSICR1.R               /* DSI Configuration Register 1 */
#define DSPI_3_SSR0          DSPI_3.SSR0.R                 /* DSI Serialization Source Select Register 0 */
#define DSPI_3_PISR0         DSPI_3.PISR0.R                /* DSI Parallel Input Select Register 0 */
#define DSPI_3_PISR1         DSPI_3.PISR1.R                /* DSI Parallel Input Select Register 1 */
#define DSPI_3_PISR2         DSPI_3.PISR2.R                /* DSI Parallel Input Select Register 2 */
#define DSPI_3_PISR3         DSPI_3.PISR3.R                /* DSI Parallel Input Select Register 3 */
#define DSPI_3_DIMR0         DSPI_3.DIMR0.R                /* DSI Deserialized Data Interrupt Mask Register 0 */
#define DSPI_3_DPIR0         DSPI_3.DPIR0.R                /* DSI Deserialized Data Polarity Interrupt Register 0 */
#define DSPI_3_SDR1          DSPI_3.SDR1.R                 /* DSI Serialization Data Register 1 */
#define DSPI_3_ASDR1         DSPI_3.ASDR1.R                /* DSI Alternate Serialization Data Register 1 */
#define DSPI_3_COMPR1        DSPI_3.COMPR1.R               /* DSI Transmit Comparison Register 1 */
#define DSPI_3_DDR1          DSPI_3.DDR1.R                 /* DSI Deserialization Data Register 1 */
#define DSPI_3_SSR1          DSPI_3.SSR1.R                 /* DSI Serialization Source Select Register 1 */
#define DSPI_3_PISR4         DSPI_3.PISR4.R                /* DSI Parallel Input Select Register 4 */
#define DSPI_3_PISR5         DSPI_3.PISR5.R                /* DSI Parallel Input Select Register 5 */
#define DSPI_3_PISR6         DSPI_3.PISR6.R                /* DSI Parallel Input Select Register 6 */
#define DSPI_3_PISR7         DSPI_3.PISR7.R                /* DSI Parallel Input Select Register 7 */
#define DSPI_3_DIMR1         DSPI_3.DIMR1.R                /* DSI Deserialized Data Interrupt Mask Register 1 */
#define DSPI_3_DPIR1         DSPI_3.DPIR1.R                /* DSI Deserialized Data Polarity Interrupt Register 1 */
#define DSPI_3_CTARE0        DSPI_3.CTARE[0].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_CTARE1        DSPI_3.CTARE[1].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_CTARE2        DSPI_3.CTARE[2].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_CTARE3        DSPI_3.CTARE[3].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_CTARE4        DSPI_3.CTARE[4].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_CTARE5        DSPI_3.CTARE[5].R             /* Clock and Transfer Attributes Register Extended */
#define DSPI_3_SREX          DSPI_3.SREX.R                 /* Status Register Extended */
#define DSPI_3_TRIG          DSPI_3.TRIG.R                 /* Trigger Register */

/* ENET */
#define ENET_EIR             ENET.EIR.R                    /* Interrupt Event Register */
#define ENET_EIMR            ENET.EIMR.R                   /* Interrupt Mask Register */
#define ENET_RDAR            ENET.RDAR.R                   /* Receive Descriptor Active Register - Ring 0 */
#define ENET_TDAR            ENET.TDAR.R                   /* Transmit Descriptor Active Register - Ring 0 */
#define ENET_ECR             ENET.ECR.R                    /* Ethernet Control Register */
#define ENET_MMFR            ENET.MMFR.R                   /* MII Management Frame Register */
#define ENET_MSCR            ENET.MSCR.R                   /* MII Speed Control Register */
#define ENET_MIBC            ENET.MIBC.R                   /* MIB Control Register */
#define ENET_RCR             ENET.RCR.R                    /* Receive Control Register */
#define ENET_TCR             ENET.TCR.R                    /* Transmit Control Register */
#define ENET_PALR            ENET.PALR.R                   /* Physical Address Lower Register */
#define ENET_PAUR            ENET.PAUR.R                   /* Physical Address Upper Register */
#define ENET_OPD             ENET.OPD.R                    /* Opcode/Pause Duration Register */
#define ENET_TXIC0           ENET.TXIC[0].R                /* Transmit Interrupt Coalescing Register */
#define ENET_TXIC1           ENET.TXIC[1].R                /* Transmit Interrupt Coalescing Register */
#define ENET_TXIC2           ENET.TXIC[2].R                /* Transmit Interrupt Coalescing Register */
#define ENET_RXIC0           ENET.RXIC[0].R                /* Receive Interrupt Coalescing Register */
#define ENET_RXIC1           ENET.RXIC[1].R                /* Receive Interrupt Coalescing Register */
#define ENET_RXIC2           ENET.RXIC[2].R                /* Receive Interrupt Coalescing Register */
#define ENET_DMA2CFG         ENET.DMACFG[1].R              /* DMA Class Based Configuration */
#define ENET_IAUR            ENET.IAUR.R                   /* Descriptor Individual Upper Address Register */
#define ENET_IALR            ENET.IALR.R                   /* Descriptor Individual Lower Address Register */
#define ENET_GAUR            ENET.GAUR.R                   /* Descriptor Group Upper Address Register */
#define ENET_GALR            ENET.GALR.R                   /* Descriptor Group Lower Address Register */
#define ENET_TFWR            ENET.TFWR.R                   /* Transmit FIFO Watermark Register */
#define ENET_RDSR1           ENET.RDSR1.R                  /* Receive Descriptor Ring 1 Start Register */
#define ENET_TDSR1           ENET.TDSR1.R                  /* Transmit Buffer Descriptor Ring 1 Start Register */
#define ENET_MRBR1           ENET.MRBR1.R                  /* Maximum Receive Buffer Size Register - Ring 1 */
#define ENET_RDSR2           ENET.RDSR2.R                  /* Receive Descriptor Ring 2 Start Register */
#define ENET_TDSR2           ENET.TDSR2.R                  /* Transmit Buffer Descriptor Ring 2 Start Register */
#define ENET_MRBR2           ENET.MRBR2.R                  /* Maximum Receive Buffer Size Register - Ring 2 */
#define ENET_RDSR            ENET.RDSR.R                   /* Receive Descriptor Ring 0 Start Register */
#define ENET_TDSR            ENET.TDSR.R                   /* Transmit Buffer Descriptor Ring 0 Start Register */
#define ENET_MRBR            ENET.MRBR.R                   /* Maximum Receive Buffer Size Register - Ring 0 */
#define ENET_RSFL            ENET.RSFL.R                   /* Receive FIFO Section Full Threshold */
#define ENET_RSEM            ENET.RSEM.R                   /* Receive FIFO Section Empty Threshold */
#define ENET_RAEM            ENET.RAEM.R                   /* Receive FIFO Almost Empty Threshold */
#define ENET_RAFL            ENET.RAFL.R                   /* Receive FIFO Almost Full Threshold */
#define ENET_TSEM            ENET.TSEM.R                   /* Transmit FIFO Section Empty Threshold */
#define ENET_TAEM            ENET.TAEM.R                   /* Transmit FIFO Almost Empty Threshold */
#define ENET_TAFL            ENET.TAFL.R                   /* Transmit FIFO Almost Full Threshold */
#define ENET_TIPG            ENET.TIPG.R                   /* Transmit Inter-Packet Gap */
#define ENET_FTRL            ENET.FTRL.R                   /* Frame Truncation Length */
#define ENET_TACC            ENET.TACC.R                   /* Transmit Accelerator Function Configuration */
#define ENET_RACC            ENET.RACC.R                   /* Receive Accelerator Function Configuration */
#define ENET_RCMR1           ENET.RCMR[0].R                /* Receive Classification Match Register for Class n */
#define ENET_RCMR2           ENET.RCMR[1].R                /* Receive Classification Match Register for Class n */
#define ENET_DMA1CFG         ENET.DMACFG[0].R              /* DMA Class Based Configuration */
#define ENET_RDAR1           ENET.RDAR1.R                  /* Receive Descriptor Active Register - Ring 1 */
#define ENET_TDAR1           ENET.TDAR1.R                  /* Transmit Descriptor Active Register - Ring 1 */
#define ENET_RDAR2           ENET.RDAR2.R                  /* Receive Descriptor Active Register - Ring 2 */
#define ENET_TDAR2           ENET.TDAR2.R                  /* Transmit Descriptor Active Register - Ring 2 */
#define ENET_QOS             ENET.QOS.R                    /* QOS Scheme */
#define ENET_RMON_T_PACKETS  ENET.RMON_T_PACKETS.R         /* Tx Packet Count Statistic Register */
#define ENET_RMON_T_BC_PKT   ENET.RMON_T_BC_PKT.R          /* Tx Broadcast Packets Statistic Register */
#define ENET_RMON_T_MC_PKT   ENET.RMON_T_MC_PKT.R          /* Tx Multicast Packets Statistic Register */
#define ENET_RMON_T_CRC_ALIGN ENET.RMON_T_CRC_ALIGN.R      /* Tx Packets with CRC/Align Error Statistic Register */
#define ENET_RMON_T_UNDERSIZE ENET.RMON_T_UNDERSIZE.R      /* Tx Packets Less Than Bytes and Good CRC Statistic Register */
#define ENET_RMON_T_OVERSIZE ENET.RMON_T_OVERSIZE.R        /* Tx Packets GT MAX_FL bytes and Good CRC Statistic Register */
#define ENET_RMON_T_FRAG     ENET.RMON_T_FRAG.R            /* Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register */
#define ENET_RMON_T_JAB      ENET.RMON_T_JAB.R             /* Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register */
#define ENET_RMON_T_COL      ENET.RMON_T_COL.R             /* Tx Collision Count Statistic Register */
#define ENET_RMON_T_P64      ENET.RMON_T_P64.R             /* Tx 64-Byte Packets Statistic Register */
#define ENET_RMON_T_P65TO127 ENET.RMON_T_P65TO127.R        /* Tx 65- to 127-byte Packets Statistic Register */
#define ENET_RMON_T_P128TO255 ENET.RMON_T_P128TO255.R      /* Tx 128- to 255-byte Packets Statistic Register */
#define ENET_RMON_T_P256TO511 ENET.RMON_T_P256TO511.R      /* Tx 256- to 511-byte Packets Statistic Register */
#define ENET_RMON_T_P512TO1023 ENET.RMON_T_P512TO1023.R    /* Tx 512- to 1023-byte Packets Statistic Register */
#define ENET_RMON_T_P1024TO2047 ENET.RMON_T_P1024TO2047.R  /* Tx 1024- to 2047-byte Packets Statistic Register */
#define ENET_RMON_T_P_GTE2048 ENET.RMON_T_P_GTE2048.R      /* Tx Packets Greater Than 2048 Bytes Statistic Register */
#define ENET_RMON_T_OCTETS   ENET.RMON_T_OCTETS.R          /* Tx Octets Statistic Register */
#define ENET_IEEE_T_FRAME_OK ENET.IEEE_T_FRAME_OK.R        /* Frames Transmitted OK Statistic Register */
#define ENET_IEEE_T_1COL     ENET.IEEE_T_1COL.R            /* Frames Transmitted with Single Collision Statistic Register */
#define ENET_IEEE_T_MCOL     ENET.IEEE_T_MCOL.R            /* Frames Transmitted with Multiple Collisions Statistic Register */
#define ENET_IEEE_T_DEF      ENET.IEEE_T_DEF.R             /* Frames Transmitted after Deferral Delay Statistic Register */
#define ENET_IEEE_T_LCOL     ENET.IEEE_T_LCOL.R            /* Frames Transmitted with Late Collision Statistic Register */
#define ENET_IEEE_T_EXCOL    ENET.IEEE_T_EXCOL.R           /* Frames Transmitted with Excessive Collisions Statistic Register */
#define ENET_IEEE_T_MACERR   ENET.IEEE_T_MACERR.R          /* Frames Transmitted with Tx FIFO Underrun Statistic Register */
#define ENET_IEEE_T_CSERR    ENET.IEEE_T_CSERR.R           /* Frames Transmitted with Carrier Sense Error Statistic Register */
#define ENET_IEEE_T_FDXFC    ENET.IEEE_T_FDXFC.R           /* Flow Control Pause Frames Transmitted Statistic Register */
#define ENET_IEEE_T_OCTETS_OK ENET.IEEE_T_OCTETS_OK.R      /* Octet Count for Frames Transmitted w/o Error Statistic Register */
#define ENET_RMON_R_PACKETS  ENET.RMON_R_PACKETS.R         /* Rx Packet Count Statistic Register */
#define ENET_RMON_R_BC_PKT   ENET.RMON_R_BC_PKT.R          /* Rx Broadcast Packets Statistic Register */
#define ENET_RMON_R_MC_PKT   ENET.RMON_R_MC_PKT.R          /* Rx Multicast Packets Statistic Register */
#define ENET_RMON_R_CRC_ALIGN ENET.RMON_R_CRC_ALIGN.R      /* Rx Packets with CRC/Align Error Statistic Register */
#define ENET_RMON_R_UNDERSIZE ENET.RMON_R_UNDERSIZE.R      /* Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register */
#define ENET_RMON_R_OVERSIZE ENET.RMON_R_OVERSIZE.R        /* Rx Packets Greater Than MAX_FL and Good CRC Statistic Register */
#define ENET_RMON_R_FRAG     ENET.RMON_R_FRAG.R            /* Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register */
#define ENET_RMON_R_JAB      ENET.RMON_R_JAB.R             /* Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register */
#define ENET_RMON_R_P64      ENET.RMON_R_P64.R             /* Rx 64-Byte Packets Statistic Register */
#define ENET_RMON_R_P65TO127 ENET.RMON_R_P65TO127.R        /* Rx 65- to 127-Byte Packets Statistic Register */
#define ENET_RMON_R_P128TO255 ENET.RMON_R_P128TO255.R      /* Rx 128- to 255-Byte Packets Statistic Register */
#define ENET_RMON_R_P256TO511 ENET.RMON_R_P256TO511.R      /* Rx 256- to 511-Byte Packets Statistic Register */
#define ENET_RMON_R_P512TO1023 ENET.RMON_R_P512TO1023.R    /* Rx 512- to 1023-Byte Packets Statistic Register */
#define ENET_RMON_R_P1024TO2047 ENET.RMON_R_P1024TO2047.R  /* Rx 1024- to 2047-Byte Packets Statistic Register */
#define ENET_RMON_R_P_GTE2048 ENET.RMON_R_P_GTE2048.R      /* Rx Packets Greater than 2048 Bytes Statistic Register */
#define ENET_RMON_R_OCTETS   ENET.RMON_R_OCTETS.R          /* Rx Octets Statistic Register */
#define ENET_IEEE_R_DROP     ENET.IEEE_R_DROP.R            /* Frames not Counted Correctly Statistic Register */
#define ENET_IEEE_R_FRAME_OK ENET.IEEE_R_FRAME_OK.R        /* Frames Received OK Statistic Register */
#define ENET_IEEE_R_CRC      ENET.IEEE_R_CRC.R             /* Frames Received with CRC Error Statistic Register */
#define ENET_IEEE_R_ALIGN    ENET.IEEE_R_ALIGN.R           /* Frames Received with Alignment Error Statistic Register */
#define ENET_IEEE_R_MACERR   ENET.IEEE_R_MACERR.R          /* Receive FIFO Overflow Count Statistic Register */
#define ENET_IEEE_R_FDXFC    ENET.IEEE_R_FDXFC.R           /* Flow Control Pause Frames Received Statistic Register */
#define ENET_IEEE_R_OCTETS_OK ENET.IEEE_R_OCTETS_OK.R      /* Octet Count for Frames Received without Error Statistic Register */
#define ENET_ATCR            ENET.ATCR.R                   /* Adjustable Timer Control Register */
#define ENET_ATVR            ENET.ATVR.R                   /* Timer Value Register */
#define ENET_ATOFF           ENET.ATOFF.R                  /* Timer Offset Register */
#define ENET_ATPER           ENET.ATPER.R                  /* Timer Period Register */
#define ENET_ATCOR           ENET.ATCOR.R                  /* Timer Correction Register */
#define ENET_ATINC           ENET.ATINC.R                  /* Time-Stamping Clock Period Register */
#define ENET_ATSTMP          ENET.ATSTMP.R                 /* Timestamp of Last Transmitted Frame */
#define ENET_MDATA           ENET.MDATA.R                  /* Pattern Match Data Register */
#define ENET_MMASK           ENET.MMASK.R                  /* Match Entry Mask Register */
#define ENET_MCONFIG         ENET.MCONFIG.R                /* Match Entry Rules Configuration Register */
#define ENET_MENTRYRW        ENET.MENTRYRW.R               /* Match Entry Read/Write Command Register */
#define ENET_RXPCTL          ENET.RXPCTL.R                 /* Receive Parser Control Register */
#define ENET_MAXFRMOFF       ENET.MAXFRMOFF.R              /* Maximum Frame Offset */
#define ENET_RXPARST         ENET.RXPARST.R                /* Receive Parser Status */
#define ENET_PARSDSCD        ENET.PARSDSCD.R               /* Parser Discard Count */
#define ENET_PRSACPT0        ENET.PRSACPT0.R               /* Parser Accept Count 0 */
#define ENET_PRSRJCT0        ENET.PRSRJCT0.R               /* Parser Reject Count 0 */
#define ENET_PRSACPT1        ENET.PRSACPT1.R               /* Parser Accept Count 1 */
#define ENET_PRSRJCT1        ENET.PRSRJCT1.R               /* Parser Reject Count 1 */
#define ENET_PRSACPT2        ENET.PRSACPT2.R               /* Parser Accept Count 2 */
#define ENET_PRSRJCT2        ENET.PRSRJCT2.R               /* Parser Reject Count 2 */
#define ENET_TGSR            ENET.TGSR.R                   /* Timer Global Status Register */
#define ENET_TCSR0           ENET.TIMER[0].TCSR.R          /* Timer Control Status Register */
#define ENET_TCCR0           ENET.TIMER[0].TCCR.R          /* Timer Compare Capture Register */
#define ENET_TCSR1           ENET.TIMER[1].TCSR.R          /* Timer Control Status Register */
#define ENET_TCCR1           ENET.TIMER[1].TCCR.R          /* Timer Compare Capture Register */
#define ENET_TCSR2           ENET.TIMER[2].TCSR.R          /* Timer Control Status Register */
#define ENET_TCCR2           ENET.TIMER[2].TCCR.R          /* Timer Compare Capture Register */
#define ENET_TCSR3           ENET.TIMER[3].TCSR.R          /* Timer Control Status Register */
#define ENET_TCCR3           ENET.TIMER[3].TCCR.R          /* Timer Compare Capture Register */

/* FCCU */
#define FCCU_CTRL            FCCU.CTRL.R                   /* Control Register */
#define FCCU_CTRLK           FCCU.CTRLK.R                  /* CTRL Key Register */
#define FCCU_CFG             FCCU.CFG.R                    /* Configuration Register */
#define FCCU_NCF_CFG0        FCCU.NCF_CFG[0].R             /* NCF Configuration Register */
#define FCCU_NCF_CFG1        FCCU.NCF_CFG[1].R             /* NCF Configuration Register */
#define FCCU_NCF_CFG2        FCCU.NCF_CFG[2].R             /* NCF Configuration Register */
#define FCCU_NCFS_CFG0       FCCU.NCFS_CFG[0].R            /* NCFS Configuration Register */
#define FCCU_NCFS_CFG1       FCCU.NCFS_CFG[1].R            /* NCFS Configuration Register */
#define FCCU_NCFS_CFG2       FCCU.NCFS_CFG[2].R            /* NCFS Configuration Register */
#define FCCU_NCFS_CFG3       FCCU.NCFS_CFG[3].R            /* NCFS Configuration Register */
#define FCCU_NCFS_CFG4       FCCU.NCFS_CFG[4].R            /* NCFS Configuration Register */
#define FCCU_NCF_S0          FCCU.NCF_S[0].R               /* NCF Status Register */
#define FCCU_NCF_S1          FCCU.NCF_S[1].R               /* NCF Status Register */
#define FCCU_NCF_S2          FCCU.NCF_S[2].R               /* NCF Status Register */
#define FCCU_NCFK            FCCU.NCFK.R                   /* NCF Key Register */
#define FCCU_NCF_E0          FCCU.NCF_E[0].R               /* NCF Enable Register */
#define FCCU_NCF_E1          FCCU.NCF_E[1].R               /* NCF Enable Register */
#define FCCU_NCF_E2          FCCU.NCF_E[2].R               /* NCF Enable Register */
#define FCCU_NCF_TOE0        FCCU.NCF_TOE[0].R             /* NCF Time-out Enable Register */
#define FCCU_NCF_TOE1        FCCU.NCF_TOE[1].R             /* NCF Time-out Enable Register */
#define FCCU_NCF_TOE2        FCCU.NCF_TOE[2].R             /* NCF Time-out Enable Register */
#define FCCU_NCF_TO          FCCU.NCF_TO.R                 /* NCF Time-out Register */
#define FCCU_CFG_TO          FCCU.CFG_TO.R                 /* CFG Timeout Register */
#define FCCU_EINOUT          FCCU.EINOUT.R                 /* IO Control Register */
#define FCCU_STAT            FCCU.STAT.R                   /* Status Register */
#define FCCU_N2AF_STATUS     FCCU.N2AF_STATUS.R            /* NA Freeze Status Register */
#define FCCU_A2FF_STATUS     FCCU.A2FF_STATUS.R            /* AF Freeze Status Register */
#define FCCU_N2FF_STATUS     FCCU.N2FF_STATUS.R            /* NF Freeze Status Register */
#define FCCU_F2A_STATUS      FCCU.F2A_STATUS.R             /* FA Freeze Status Register */
#define FCCU_NCFF            FCCU.NCFF.R                   /* NCF Fake Register */
#define FCCU_IRQ_STAT        FCCU.IRQ_STAT.R               /* IRQ Status Register */
#define FCCU_IRQ_EN          FCCU.IRQ_EN.R                 /* IRQ Enable Register */
#define FCCU_XTMR            FCCU.XTMR.R                   /* XTMR Register */
#define FCCU_MCS             FCCU.MCS.R                    /* MCS Register */
#define FCCU_TRANS_LOCK      FCCU.TRANS_LOCK.R             /* Transient Lock Register */
#define FCCU_PERMNT_LOCK     FCCU.PERMNT_LOCK.R            /* Permanent Lock Register */
#define FCCU_DELTA_T         FCCU.DELTA_T.R                /* Delta T Register */
#define FCCU_IRQ_ALARM_EN0   FCCU.IRQ_ALARM_EN[0].R        /* IRQ Alarm Enable Register */
#define FCCU_IRQ_ALARM_EN1   FCCU.IRQ_ALARM_EN[1].R        /* IRQ Alarm Enable Register */
#define FCCU_IRQ_ALARM_EN2   FCCU.IRQ_ALARM_EN[2].R        /* IRQ Alarm Enable Register */
#define FCCU_NMI_EN0         FCCU.NMI_EN[0].R              /* NMI Enable Register */
#define FCCU_NMI_EN1         FCCU.NMI_EN[1].R              /* NMI Enable Register */
#define FCCU_NMI_EN2         FCCU.NMI_EN[2].R              /* NMI Enable Register */
#define FCCU_EOUT_SIG_EN0    FCCU.EOUT_SIG_EN[0].R         /* EOUT Signaling Enable Register */
#define FCCU_EOUT_SIG_EN1    FCCU.EOUT_SIG_EN[1].R         /* EOUT Signaling Enable Register */
#define FCCU_EOUT_SIG_EN2    FCCU.EOUT_SIG_EN[2].R         /* EOUT Signaling Enable Register */

/* FIRC */
#define FIRC_CTL             FIRC.CTL.R                    /* Control register */

/* FR */
#define FR_MVR               FR.MVR.R                      /* Module Version Register */
#define FR_MCR               FR.MCR.R                      /* Module Configuration Register */
#define FR_SYMBADHR          FR.SYMBADHR.R                 /* System Memory Base Address High Register */
#define FR_SYMBADLR          FR.SYMBADLR.R                 /* System Memory Base Address Low Register */
#define FR_STBSCR            FR.STBSCR.R                   /* Strobe Signal Control Register */
#define FR_MBDSR             FR.MBDSR.R                    /* Message Buffer Data Size Register */
#define FR_MBSSUTR           FR.MBSSUTR.R                  /* Message Buffer Segment Size and Utilization Register */
#define FR_PEDRAR            FR.PEDRAR.R                   /* PE DRAM Access Register */
#define FR_PEDRDR            FR.PEDRDR.R                   /* PE DRAM Data Register */
#define FR_POCR              FR.POCR.R                     /* Protocol Operation Control Register */
#define FR_GIFER             FR.GIFER.R                    /* Global Interrupt Flag and Enable Register */
#define FR_PIFR0             FR.PIFR0.R                    /* Protocol Interrupt Flag Register 0 */
#define FR_PIFR1             FR.PIFR1.R                    /* Protocol Interrupt Flag Register 1 */
#define FR_PIER0             FR.PIER0.R                    /* Protocol Interrupt Enable Register 0 */
#define FR_PIER1             FR.PIER1.R                    /* Protocol Interrupt Enable Register 1 */
#define FR_CHIERFR           FR.CHIERFR.R                  /* CHI Error Flag Register */
#define FR_MBIVEC            FR.MBIVEC.R                   /* Message Buffer Interrupt Vector Register */
#define FR_CASERCR           FR.CASERCR.R                  /* Channel A Status Error Counter Register */
#define FR_CBSERCR           FR.CBSERCR.R                  /* Channel B Status Error Counter Register */
#define FR_PSR0              FR.PSR0.R                     /* Protocol Status Register 0 */
#define FR_PSR1              FR.PSR1.R                     /* Protocol Status Register 1 */
#define FR_PSR2              FR.PSR2.R                     /* Protocol Status Register 2 */
#define FR_PSR3              FR.PSR3.R                     /* Protocol Status Register 3 */
#define FR_MTCTR             FR.MTCTR.R                    /* Macrotick Counter Register */
#define FR_CYCTR             FR.CYCTR.R                    /* Cycle Counter Register */
#define FR_SLTCTAR           FR.SLTCTAR.R                  /* Slot Counter Channel A Register */
#define FR_SLTCTBR           FR.SLTCTBR.R                  /* Slot Counter Channel B Register */
#define FR_RTCORVR           FR.RTCORVR.R                  /* Rate Correction Value Register */
#define FR_OFCORVR           FR.OFCORVR.R                  /* Offset Correction Value Register */
#define FR_CIFR              FR.CIFR.R                     /* Combined Interrupt Flag Register */
#define FR_SYMATOR           FR.SYMATOR.R                  /* System Memory Access Time-Out Register */
#define FR_SFCNTR            FR.SFCNTR.R                   /* Sync Frame Counter Register */
#define FR_SFTOR             FR.SFTOR.R                    /* Sync Frame Table Offset Register */
#define FR_SFTCCSR           FR.SFTCCSR.R                  /* Sync Frame Table Configuration, Control, Status Register */
#define FR_SFIDRFR           FR.SFIDRFR.R                  /* Sync Frame ID Rejection Filter Register */
#define FR_SFIDAFVR          FR.SFIDAFVR.R                 /* Sync Frame ID Acceptance Filter Value Register */
#define FR_SFIDAFMR          FR.SFIDAFMR.R                 /* Sync Frame ID Acceptance Filter Mask Register */
#define FR_NMVR0             FR.NMVR[0].R                  /* Network Management Vector Register */
#define FR_NMVR1             FR.NMVR[1].R                  /* Network Management Vector Register */
#define FR_NMVR2             FR.NMVR[2].R                  /* Network Management Vector Register */
#define FR_NMVR3             FR.NMVR[3].R                  /* Network Management Vector Register */
#define FR_NMVR4             FR.NMVR[4].R                  /* Network Management Vector Register */
#define FR_NMVR5             FR.NMVR[5].R                  /* Network Management Vector Register */
#define FR_NMVLR             FR.NMVLR.R                    /* Network Management Vector Length Register */
#define FR_TICCR             FR.TICCR.R                    /* Timer Configuration and Control Register */
#define FR_TI1CYSR           FR.TI1CYSR.R                  /* Timer 1 Cycle Set Register */
#define FR_TI1MTOR           FR.TI1MTOR.R                  /* Timer 1 Macrotick Offset Register */
#define FR_TI2CR0_ABS        FR.TI2CR0.ABS.R               /* Timer 2 Configuration Register 0 (Absolute Timer Configuration) */
#define FR_TI2CR0_REL        FR.TI2CR0.REL.R               /* Timer 2 Configuration Register 0 (Relative Timer Configuration) */
#define FR_TI2CR1_ABS        FR.TI2CR1.ABS.R               /* Timer 2 Configuration Register 1 (Absolute Timer Configuration) */
#define FR_TI2CR1_REL        FR.TI2CR1.REL.R               /* Timer 2 Configuration Register 1 (Relative Timer Configuration) */
#define FR_SSSR              FR.SSSR.R                     /* Slot Status Selection Register */
#define FR_SSCCR             FR.SSCCR.R                    /* Slot Status Counter Condition Register */
#define FR_SSR0              FR.SSR[0].R                   /* Slot Status Register */
#define FR_SSR1              FR.SSR[1].R                   /* Slot Status Register */
#define FR_SSR2              FR.SSR[2].R                   /* Slot Status Register */
#define FR_SSR3              FR.SSR[3].R                   /* Slot Status Register */
#define FR_SSR4              FR.SSR[4].R                   /* Slot Status Register */
#define FR_SSR5              FR.SSR[5].R                   /* Slot Status Register */
#define FR_SSR6              FR.SSR[6].R                   /* Slot Status Register */
#define FR_SSR7              FR.SSR[7].R                   /* Slot Status Register */
#define FR_SSCR0             FR.SSCR[0].R                  /* Slot Status Counter Register */
#define FR_SSCR1             FR.SSCR[1].R                  /* Slot Status Counter Register */
#define FR_SSCR2             FR.SSCR[2].R                  /* Slot Status Counter Register */
#define FR_SSCR3             FR.SSCR[3].R                  /* Slot Status Counter Register */
#define FR_MTSACFR           FR.MTSACFR.R                  /* MTS A Configuration Register */
#define FR_MTSBCFR           FR.MTSBCFR.R                  /* MTS B Configuration Register */
#define FR_RSBIR             FR.RSBIR.R                    /* Receive Shadow Buffer Index Register */
#define FR_RFWMSR            FR.RFWMSR.R                   /* Receive FIFO Watermark and Selection Register */
#define FR_RFSIR             FR.RFSIR.R                    /* Receive FIFO Start Index Register */
#define FR_RFDSR             FR.RFDSR.R                    /* Receive FIFO Depth and Size Register */
#define FR_RFARIR            FR.RFARIR.R                   /* Receive FIFO A Read Index Register */
#define FR_RFBRIR            FR.RFBRIR.R                   /* Receive FIFO B Read Index Register */
#define FR_RFMIDAFVR         FR.RFMIDAFVR.R                /* Receive FIFO Message ID Acceptance Filter Value Register */
#define FR_RFMIDAFMR         FR.RFMIDAFMR.R                /* Receive FIFO Message ID Acceptance Filter Mask Register */
#define FR_RFFIDRFVR         FR.RFFIDRFVR.R                /* Receive FIFO Frame ID Rejection Filter Value Register */
#define FR_RFFIDRFMR         FR.RFFIDRFMR.R                /* Receive FIFO Frame ID Rejection Filter Mask Register */
#define FR_RFRFCFR           FR.RFRFCFR.R                  /* Receive FIFO Range Filter Configuration Register */
#define FR_RFRFCTR           FR.RFRFCTR.R                  /* Receive FIFO Range Filter Control Register */
#define FR_LDTXSLAR          FR.LDTXSLAR.R                 /* Last Dynamic Transmit Slot Channel A Register */
#define FR_LDTXSLBR          FR.LDTXSLBR.R                 /* Last Dynamic Transmit Slot Channel B Register */
#define FR_PCR0              FR.PCR0.R                     /* Protocol Configuration Register 0 */
#define FR_PCR1              FR.PCR1.R                     /* Protocol Configuration Register 1 */
#define FR_PCR2              FR.PCR2.R                     /* Protocol Configuration Register 2 */
#define FR_PCR3              FR.PCR3.R                     /* Protocol Configuration Register 3 */
#define FR_PCR4              FR.PCR4.R                     /* Protocol Configuration Register 4 */
#define FR_PCR5              FR.PCR5.R                     /* Protocol Configuration Register 5 */
#define FR_PCR6              FR.PCR6.R                     /* Protocol Configuration Register 6 */
#define FR_PCR7              FR.PCR7.R                     /* Protocol Configuration Register 7 */
#define FR_PCR8              FR.PCR8.R                     /* Protocol Configuration Register 8 */
#define FR_PCR9              FR.PCR9.R                     /* Protocol Configuration Register 9 */
#define FR_PCR10             FR.PCR10.R                    /* Protocol Configuration Register 10 */
#define FR_PCR11             FR.PCR11.R                    /* Protocol Configuration Register 11 */
#define FR_PCR12             FR.PCR12.R                    /* Protocol Configuration Register 12 */
#define FR_PCR13             FR.PCR13.R                    /* Protocol Configuration Register 13 */
#define FR_PCR14             FR.PCR14.R                    /* Protocol Configuration Register 14 */
#define FR_PCR15             FR.PCR15.R                    /* Protocol Configuration Register 15 */
#define FR_PCR16             FR.PCR16.R                    /* Protocol Configuration Register 16 */
#define FR_PCR17             FR.PCR17.R                    /* Protocol Configuration Register 17 */
#define FR_PCR18             FR.PCR18.R                    /* Protocol Configuration Register 18 */
#define FR_PCR19             FR.PCR19.R                    /* Protocol Configuration Register 19 */
#define FR_PCR20             FR.PCR20.R                    /* Protocol Configuration Register 20 */
#define FR_PCR21             FR.PCR21.R                    /* Protocol Configuration Register 21 */
#define FR_PCR22             FR.PCR22.R                    /* Protocol Configuration Register 22 */
#define FR_PCR23             FR.PCR23.R                    /* Protocol Configuration Register 23 */
#define FR_PCR24             FR.PCR24.R                    /* Protocol Configuration Register 24 */
#define FR_PCR25             FR.PCR25.R                    /* Protocol Configuration Register 25 */
#define FR_PCR26             FR.PCR26.R                    /* Protocol Configuration Register 26 */
#define FR_PCR27             FR.PCR27.R                    /* Protocol Configuration Register 27 */
#define FR_PCR28             FR.PCR28.R                    /* Protocol Configuration Register 28 */
#define FR_PCR29             FR.PCR29.R                    /* Protocol Configuration Register 29 */
#define FR_PCR30             FR.PCR30.R                    /* Protocol Configuration Register 30 */
#define FR_STPWR             FR.STPWR.R                    /* StopWatch Count Register */
#define FR_PEOER             FR.PEOER.R                    /* Protocol Event Output Enable and StopWatch Control Register */
#define FR_RFSDOR            FR.RFSDOR.R                   /* Receive FIFO Start Data Offset Register */
#define FR_RFSYMBADHR        FR.RFSYMBADHR.R               /* Receive FIFO System Memory Base Address High Register */
#define FR_RFSYMBADLR        FR.RFSYMBADLR.R               /* Receive FIFO System Memory Base Address Low Register */
#define FR_RFPTR             FR.RFPTR.R                    /* Receive FIFO Periodic Timer Register */
#define FR_RFFLPCR           FR.RFFLPCR.R                  /* Receive FIFO Fill Level and POP Count Register */
#define FR_EEIFER            FR.EEIFER.R                   /* ECC Error Interrupt Flag and Enable Register */
#define FR_EERICR            FR.EERICR.R                   /* ECC Error Report and Injection Control Register */
#define FR_EERAR             FR.EERAR.R                    /* ECC Error Report Address Register */
#define FR_EERDR             FR.EERDR.R                    /* ECC Error Report Data Register */
#define FR_EERCR             FR.EERCR.R                    /* ECC Error Report Code Register */
#define FR_EEIAR             FR.EEIAR.R                    /* ECC Error Injection Address Register */
#define FR_EEIDR             FR.EEIDR.R                    /* ECC Error Injection Data Register */
#define FR_EEICR             FR.EEICR.R                    /* ECC Error Injection Code Register */
#define FR_MBCCSR0           FR.MB[0].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR0           FR.MB[0].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR0           FR.MB[0].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR0           FR.MB[0].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR1           FR.MB[1].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR1           FR.MB[1].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR1           FR.MB[1].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR1           FR.MB[1].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR2           FR.MB[2].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR2           FR.MB[2].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR2           FR.MB[2].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR2           FR.MB[2].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR3           FR.MB[3].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR3           FR.MB[3].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR3           FR.MB[3].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR3           FR.MB[3].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR4           FR.MB[4].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR4           FR.MB[4].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR4           FR.MB[4].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR4           FR.MB[4].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR5           FR.MB[5].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR5           FR.MB[5].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR5           FR.MB[5].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR5           FR.MB[5].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR6           FR.MB[6].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR6           FR.MB[6].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR6           FR.MB[6].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR6           FR.MB[6].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR7           FR.MB[7].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR7           FR.MB[7].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR7           FR.MB[7].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR7           FR.MB[7].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR8           FR.MB[8].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR8           FR.MB[8].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR8           FR.MB[8].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR8           FR.MB[8].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR9           FR.MB[9].CCSR.R               /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR9           FR.MB[9].CCFR.R               /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR9           FR.MB[9].FIDR.R               /* Message Buffer Frame ID Register */
#define FR_MBIDXR9           FR.MB[9].IDXR.R               /* Message Buffer Index Register */
#define FR_MBCCSR10          FR.MB[10].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR10          FR.MB[10].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR10          FR.MB[10].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR10          FR.MB[10].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR11          FR.MB[11].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR11          FR.MB[11].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR11          FR.MB[11].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR11          FR.MB[11].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR12          FR.MB[12].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR12          FR.MB[12].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR12          FR.MB[12].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR12          FR.MB[12].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR13          FR.MB[13].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR13          FR.MB[13].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR13          FR.MB[13].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR13          FR.MB[13].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR14          FR.MB[14].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR14          FR.MB[14].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR14          FR.MB[14].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR14          FR.MB[14].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR15          FR.MB[15].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR15          FR.MB[15].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR15          FR.MB[15].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR15          FR.MB[15].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR16          FR.MB[16].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR16          FR.MB[16].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR16          FR.MB[16].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR16          FR.MB[16].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR17          FR.MB[17].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR17          FR.MB[17].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR17          FR.MB[17].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR17          FR.MB[17].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR18          FR.MB[18].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR18          FR.MB[18].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR18          FR.MB[18].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR18          FR.MB[18].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR19          FR.MB[19].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR19          FR.MB[19].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR19          FR.MB[19].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR19          FR.MB[19].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR20          FR.MB[20].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR20          FR.MB[20].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR20          FR.MB[20].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR20          FR.MB[20].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR21          FR.MB[21].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR21          FR.MB[21].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR21          FR.MB[21].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR21          FR.MB[21].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR22          FR.MB[22].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR22          FR.MB[22].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR22          FR.MB[22].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR22          FR.MB[22].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR23          FR.MB[23].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR23          FR.MB[23].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR23          FR.MB[23].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR23          FR.MB[23].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR24          FR.MB[24].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR24          FR.MB[24].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR24          FR.MB[24].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR24          FR.MB[24].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR25          FR.MB[25].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR25          FR.MB[25].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR25          FR.MB[25].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR25          FR.MB[25].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR26          FR.MB[26].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR26          FR.MB[26].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR26          FR.MB[26].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR26          FR.MB[26].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR27          FR.MB[27].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR27          FR.MB[27].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR27          FR.MB[27].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR27          FR.MB[27].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR28          FR.MB[28].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR28          FR.MB[28].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR28          FR.MB[28].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR28          FR.MB[28].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR29          FR.MB[29].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR29          FR.MB[29].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR29          FR.MB[29].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR29          FR.MB[29].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR30          FR.MB[30].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR30          FR.MB[30].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR30          FR.MB[30].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR30          FR.MB[30].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR31          FR.MB[31].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR31          FR.MB[31].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR31          FR.MB[31].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR31          FR.MB[31].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR32          FR.MB[32].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR32          FR.MB[32].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR32          FR.MB[32].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR32          FR.MB[32].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR33          FR.MB[33].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR33          FR.MB[33].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR33          FR.MB[33].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR33          FR.MB[33].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR34          FR.MB[34].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR34          FR.MB[34].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR34          FR.MB[34].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR34          FR.MB[34].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR35          FR.MB[35].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR35          FR.MB[35].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR35          FR.MB[35].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR35          FR.MB[35].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR36          FR.MB[36].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR36          FR.MB[36].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR36          FR.MB[36].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR36          FR.MB[36].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR37          FR.MB[37].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR37          FR.MB[37].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR37          FR.MB[37].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR37          FR.MB[37].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR38          FR.MB[38].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR38          FR.MB[38].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR38          FR.MB[38].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR38          FR.MB[38].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR39          FR.MB[39].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR39          FR.MB[39].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR39          FR.MB[39].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR39          FR.MB[39].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR40          FR.MB[40].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR40          FR.MB[40].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR40          FR.MB[40].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR40          FR.MB[40].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR41          FR.MB[41].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR41          FR.MB[41].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR41          FR.MB[41].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR41          FR.MB[41].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR42          FR.MB[42].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR42          FR.MB[42].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR42          FR.MB[42].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR42          FR.MB[42].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR43          FR.MB[43].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR43          FR.MB[43].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR43          FR.MB[43].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR43          FR.MB[43].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR44          FR.MB[44].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR44          FR.MB[44].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR44          FR.MB[44].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR44          FR.MB[44].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR45          FR.MB[45].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR45          FR.MB[45].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR45          FR.MB[45].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR45          FR.MB[45].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR46          FR.MB[46].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR46          FR.MB[46].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR46          FR.MB[46].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR46          FR.MB[46].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR47          FR.MB[47].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR47          FR.MB[47].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR47          FR.MB[47].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR47          FR.MB[47].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR48          FR.MB[48].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR48          FR.MB[48].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR48          FR.MB[48].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR48          FR.MB[48].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR49          FR.MB[49].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR49          FR.MB[49].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR49          FR.MB[49].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR49          FR.MB[49].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR50          FR.MB[50].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR50          FR.MB[50].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR50          FR.MB[50].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR50          FR.MB[50].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR51          FR.MB[51].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR51          FR.MB[51].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR51          FR.MB[51].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR51          FR.MB[51].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR52          FR.MB[52].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR52          FR.MB[52].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR52          FR.MB[52].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR52          FR.MB[52].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR53          FR.MB[53].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR53          FR.MB[53].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR53          FR.MB[53].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR53          FR.MB[53].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR54          FR.MB[54].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR54          FR.MB[54].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR54          FR.MB[54].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR54          FR.MB[54].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR55          FR.MB[55].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR55          FR.MB[55].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR55          FR.MB[55].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR55          FR.MB[55].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR56          FR.MB[56].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR56          FR.MB[56].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR56          FR.MB[56].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR56          FR.MB[56].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR57          FR.MB[57].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR57          FR.MB[57].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR57          FR.MB[57].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR57          FR.MB[57].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR58          FR.MB[58].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR58          FR.MB[58].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR58          FR.MB[58].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR58          FR.MB[58].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR59          FR.MB[59].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR59          FR.MB[59].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR59          FR.MB[59].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR59          FR.MB[59].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR60          FR.MB[60].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR60          FR.MB[60].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR60          FR.MB[60].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR60          FR.MB[60].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR61          FR.MB[61].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR61          FR.MB[61].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR61          FR.MB[61].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR61          FR.MB[61].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR62          FR.MB[62].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR62          FR.MB[62].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR62          FR.MB[62].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR62          FR.MB[62].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR63          FR.MB[63].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR63          FR.MB[63].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR63          FR.MB[63].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR63          FR.MB[63].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR64          FR.MB[64].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR64          FR.MB[64].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR64          FR.MB[64].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR64          FR.MB[64].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR65          FR.MB[65].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR65          FR.MB[65].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR65          FR.MB[65].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR65          FR.MB[65].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR66          FR.MB[66].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR66          FR.MB[66].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR66          FR.MB[66].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR66          FR.MB[66].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR67          FR.MB[67].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR67          FR.MB[67].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR67          FR.MB[67].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR67          FR.MB[67].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR68          FR.MB[68].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR68          FR.MB[68].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR68          FR.MB[68].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR68          FR.MB[68].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR69          FR.MB[69].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR69          FR.MB[69].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR69          FR.MB[69].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR69          FR.MB[69].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR70          FR.MB[70].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR70          FR.MB[70].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR70          FR.MB[70].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR70          FR.MB[70].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR71          FR.MB[71].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR71          FR.MB[71].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR71          FR.MB[71].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR71          FR.MB[71].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR72          FR.MB[72].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR72          FR.MB[72].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR72          FR.MB[72].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR72          FR.MB[72].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR73          FR.MB[73].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR73          FR.MB[73].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR73          FR.MB[73].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR73          FR.MB[73].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR74          FR.MB[74].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR74          FR.MB[74].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR74          FR.MB[74].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR74          FR.MB[74].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR75          FR.MB[75].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR75          FR.MB[75].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR75          FR.MB[75].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR75          FR.MB[75].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR76          FR.MB[76].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR76          FR.MB[76].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR76          FR.MB[76].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR76          FR.MB[76].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR77          FR.MB[77].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR77          FR.MB[77].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR77          FR.MB[77].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR77          FR.MB[77].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR78          FR.MB[78].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR78          FR.MB[78].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR78          FR.MB[78].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR78          FR.MB[78].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR79          FR.MB[79].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR79          FR.MB[79].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR79          FR.MB[79].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR79          FR.MB[79].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR80          FR.MB[80].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR80          FR.MB[80].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR80          FR.MB[80].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR80          FR.MB[80].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR81          FR.MB[81].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR81          FR.MB[81].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR81          FR.MB[81].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR81          FR.MB[81].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR82          FR.MB[82].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR82          FR.MB[82].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR82          FR.MB[82].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR82          FR.MB[82].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR83          FR.MB[83].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR83          FR.MB[83].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR83          FR.MB[83].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR83          FR.MB[83].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR84          FR.MB[84].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR84          FR.MB[84].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR84          FR.MB[84].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR84          FR.MB[84].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR85          FR.MB[85].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR85          FR.MB[85].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR85          FR.MB[85].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR85          FR.MB[85].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR86          FR.MB[86].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR86          FR.MB[86].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR86          FR.MB[86].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR86          FR.MB[86].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR87          FR.MB[87].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR87          FR.MB[87].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR87          FR.MB[87].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR87          FR.MB[87].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR88          FR.MB[88].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR88          FR.MB[88].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR88          FR.MB[88].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR88          FR.MB[88].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR89          FR.MB[89].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR89          FR.MB[89].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR89          FR.MB[89].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR89          FR.MB[89].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR90          FR.MB[90].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR90          FR.MB[90].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR90          FR.MB[90].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR90          FR.MB[90].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR91          FR.MB[91].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR91          FR.MB[91].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR91          FR.MB[91].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR91          FR.MB[91].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR92          FR.MB[92].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR92          FR.MB[92].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR92          FR.MB[92].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR92          FR.MB[92].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR93          FR.MB[93].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR93          FR.MB[93].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR93          FR.MB[93].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR93          FR.MB[93].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR94          FR.MB[94].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR94          FR.MB[94].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR94          FR.MB[94].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR94          FR.MB[94].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR95          FR.MB[95].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR95          FR.MB[95].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR95          FR.MB[95].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR95          FR.MB[95].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR96          FR.MB[96].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR96          FR.MB[96].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR96          FR.MB[96].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR96          FR.MB[96].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR97          FR.MB[97].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR97          FR.MB[97].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR97          FR.MB[97].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR97          FR.MB[97].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR98          FR.MB[98].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR98          FR.MB[98].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR98          FR.MB[98].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR98          FR.MB[98].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR99          FR.MB[99].CCSR.R              /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR99          FR.MB[99].CCFR.R              /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR99          FR.MB[99].FIDR.R              /* Message Buffer Frame ID Register */
#define FR_MBIDXR99          FR.MB[99].IDXR.R              /* Message Buffer Index Register */
#define FR_MBCCSR100         FR.MB[100].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR100         FR.MB[100].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR100         FR.MB[100].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR100         FR.MB[100].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR101         FR.MB[101].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR101         FR.MB[101].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR101         FR.MB[101].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR101         FR.MB[101].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR102         FR.MB[102].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR102         FR.MB[102].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR102         FR.MB[102].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR102         FR.MB[102].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR103         FR.MB[103].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR103         FR.MB[103].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR103         FR.MB[103].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR103         FR.MB[103].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR104         FR.MB[104].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR104         FR.MB[104].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR104         FR.MB[104].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR104         FR.MB[104].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR105         FR.MB[105].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR105         FR.MB[105].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR105         FR.MB[105].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR105         FR.MB[105].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR106         FR.MB[106].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR106         FR.MB[106].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR106         FR.MB[106].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR106         FR.MB[106].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR107         FR.MB[107].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR107         FR.MB[107].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR107         FR.MB[107].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR107         FR.MB[107].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR108         FR.MB[108].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR108         FR.MB[108].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR108         FR.MB[108].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR108         FR.MB[108].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR109         FR.MB[109].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR109         FR.MB[109].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR109         FR.MB[109].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR109         FR.MB[109].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR110         FR.MB[110].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR110         FR.MB[110].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR110         FR.MB[110].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR110         FR.MB[110].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR111         FR.MB[111].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR111         FR.MB[111].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR111         FR.MB[111].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR111         FR.MB[111].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR112         FR.MB[112].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR112         FR.MB[112].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR112         FR.MB[112].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR112         FR.MB[112].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR113         FR.MB[113].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR113         FR.MB[113].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR113         FR.MB[113].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR113         FR.MB[113].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR114         FR.MB[114].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR114         FR.MB[114].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR114         FR.MB[114].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR114         FR.MB[114].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR115         FR.MB[115].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR115         FR.MB[115].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR115         FR.MB[115].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR115         FR.MB[115].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR116         FR.MB[116].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR116         FR.MB[116].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR116         FR.MB[116].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR116         FR.MB[116].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR117         FR.MB[117].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR117         FR.MB[117].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR117         FR.MB[117].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR117         FR.MB[117].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR118         FR.MB[118].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR118         FR.MB[118].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR118         FR.MB[118].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR118         FR.MB[118].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR119         FR.MB[119].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR119         FR.MB[119].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR119         FR.MB[119].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR119         FR.MB[119].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR120         FR.MB[120].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR120         FR.MB[120].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR120         FR.MB[120].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR120         FR.MB[120].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR121         FR.MB[121].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR121         FR.MB[121].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR121         FR.MB[121].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR121         FR.MB[121].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR122         FR.MB[122].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR122         FR.MB[122].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR122         FR.MB[122].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR122         FR.MB[122].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR123         FR.MB[123].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR123         FR.MB[123].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR123         FR.MB[123].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR123         FR.MB[123].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR124         FR.MB[124].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR124         FR.MB[124].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR124         FR.MB[124].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR124         FR.MB[124].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR125         FR.MB[125].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR125         FR.MB[125].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR125         FR.MB[125].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR125         FR.MB[125].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR126         FR.MB[126].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR126         FR.MB[126].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR126         FR.MB[126].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR126         FR.MB[126].IDXR.R             /* Message Buffer Index Register */
#define FR_MBCCSR127         FR.MB[127].CCSR.R             /* Message Buffer Configuration, Control, Status Register */
#define FR_MBCCFR127         FR.MB[127].CCFR.R             /* Message Buffer Cycle Counter Filter Register */
#define FR_MBFIDR127         FR.MB[127].FIDR.R             /* Message Buffer Frame ID Register */
#define FR_MBIDXR127         FR.MB[127].IDXR.R             /* Message Buffer Index Register */
#define FR_MBDOR0            FR.MBDOR[0].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR1            FR.MBDOR[1].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR2            FR.MBDOR[2].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR3            FR.MBDOR[3].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR4            FR.MBDOR[4].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR5            FR.MBDOR[5].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR6            FR.MBDOR[6].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR7            FR.MBDOR[7].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR8            FR.MBDOR[8].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR9            FR.MBDOR[9].R                 /* Message Buffer Data Field Offset Register */
#define FR_MBDOR10           FR.MBDOR[10].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR11           FR.MBDOR[11].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR12           FR.MBDOR[12].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR13           FR.MBDOR[13].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR14           FR.MBDOR[14].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR15           FR.MBDOR[15].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR16           FR.MBDOR[16].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR17           FR.MBDOR[17].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR18           FR.MBDOR[18].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR19           FR.MBDOR[19].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR20           FR.MBDOR[20].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR21           FR.MBDOR[21].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR22           FR.MBDOR[22].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR23           FR.MBDOR[23].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR24           FR.MBDOR[24].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR25           FR.MBDOR[25].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR26           FR.MBDOR[26].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR27           FR.MBDOR[27].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR28           FR.MBDOR[28].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR29           FR.MBDOR[29].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR30           FR.MBDOR[30].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR31           FR.MBDOR[31].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR32           FR.MBDOR[32].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR33           FR.MBDOR[33].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR34           FR.MBDOR[34].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR35           FR.MBDOR[35].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR36           FR.MBDOR[36].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR37           FR.MBDOR[37].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR38           FR.MBDOR[38].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR39           FR.MBDOR[39].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR40           FR.MBDOR[40].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR41           FR.MBDOR[41].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR42           FR.MBDOR[42].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR43           FR.MBDOR[43].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR44           FR.MBDOR[44].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR45           FR.MBDOR[45].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR46           FR.MBDOR[46].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR47           FR.MBDOR[47].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR48           FR.MBDOR[48].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR49           FR.MBDOR[49].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR50           FR.MBDOR[50].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR51           FR.MBDOR[51].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR52           FR.MBDOR[52].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR53           FR.MBDOR[53].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR54           FR.MBDOR[54].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR55           FR.MBDOR[55].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR56           FR.MBDOR[56].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR57           FR.MBDOR[57].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR58           FR.MBDOR[58].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR59           FR.MBDOR[59].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR60           FR.MBDOR[60].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR61           FR.MBDOR[61].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR62           FR.MBDOR[62].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR63           FR.MBDOR[63].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR64           FR.MBDOR[64].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR65           FR.MBDOR[65].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR66           FR.MBDOR[66].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR67           FR.MBDOR[67].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR68           FR.MBDOR[68].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR69           FR.MBDOR[69].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR70           FR.MBDOR[70].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR71           FR.MBDOR[71].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR72           FR.MBDOR[72].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR73           FR.MBDOR[73].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR74           FR.MBDOR[74].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR75           FR.MBDOR[75].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR76           FR.MBDOR[76].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR77           FR.MBDOR[77].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR78           FR.MBDOR[78].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR79           FR.MBDOR[79].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR80           FR.MBDOR[80].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR81           FR.MBDOR[81].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR82           FR.MBDOR[82].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR83           FR.MBDOR[83].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR84           FR.MBDOR[84].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR85           FR.MBDOR[85].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR86           FR.MBDOR[86].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR87           FR.MBDOR[87].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR88           FR.MBDOR[88].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR89           FR.MBDOR[89].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR90           FR.MBDOR[90].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR91           FR.MBDOR[91].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR92           FR.MBDOR[92].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR93           FR.MBDOR[93].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR94           FR.MBDOR[94].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR95           FR.MBDOR[95].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR96           FR.MBDOR[96].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR97           FR.MBDOR[97].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR98           FR.MBDOR[98].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR99           FR.MBDOR[99].R                /* Message Buffer Data Field Offset Register */
#define FR_MBDOR100          FR.MBDOR[100].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR101          FR.MBDOR[101].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR102          FR.MBDOR[102].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR103          FR.MBDOR[103].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR104          FR.MBDOR[104].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR105          FR.MBDOR[105].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR106          FR.MBDOR[106].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR107          FR.MBDOR[107].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR108          FR.MBDOR[108].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR109          FR.MBDOR[109].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR110          FR.MBDOR[110].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR111          FR.MBDOR[111].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR112          FR.MBDOR[112].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR113          FR.MBDOR[113].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR114          FR.MBDOR[114].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR115          FR.MBDOR[115].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR116          FR.MBDOR[116].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR117          FR.MBDOR[117].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR118          FR.MBDOR[118].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR119          FR.MBDOR[119].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR120          FR.MBDOR[120].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR121          FR.MBDOR[121].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR122          FR.MBDOR[122].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR123          FR.MBDOR[123].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR124          FR.MBDOR[124].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR125          FR.MBDOR[125].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR126          FR.MBDOR[126].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR127          FR.MBDOR[127].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR128          FR.MBDOR[128].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR129          FR.MBDOR[129].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR130          FR.MBDOR[130].R               /* Message Buffer Data Field Offset Register */
#define FR_MBDOR131          FR.MBDOR[131].R               /* Message Buffer Data Field Offset Register */
#define FR_LEETR0            FR.LEETR[0].R                 /* LRAM ECC Error Test Register */
#define FR_LEETR1            FR.LEETR[1].R                 /* LRAM ECC Error Test Register */
#define FR_LEETR2            FR.LEETR[2].R                 /* LRAM ECC Error Test Register */
#define FR_LEETR3            FR.LEETR[3].R                 /* LRAM ECC Error Test Register */
#define FR_LEETR4            FR.LEETR[4].R                 /* LRAM ECC Error Test Register */
#define FR_LEETR5            FR.LEETR[5].R                 /* LRAM ECC Error Test Register */

/* FXOSC */
#define FXOSC_CTL            FXOSC.CTL.R                   /* FXOSC Control Register */

/* GPR */
#define GPR_CTL              GPR.CTL.R                     /* GPR Control Register */
#define GPR_STAT             GPR.STAT.R                    /* GPR Status Register */
#define GPR_CTL1             GPR.CTL1.R                    /* GPR Control Register1 */

/* I2C */
#define I2C_0_IBAD           I2C_0.IBAD.R                  /* I2C Bus Address Register */
#define I2C_0_IBFD           I2C_0.IBFD.R                  /* I2C Bus Frequency Divider Register */
#define I2C_0_IBCR           I2C_0.IBCR.R                  /* I2C Bus Control Register */
#define I2C_0_IBSR           I2C_0.IBSR.R                  /* I2C Bus Status Register */
#define I2C_0_IBDR           I2C_0.IBDR.R                  /* I2C Bus Data I/O Register */
#define I2C_0_IBIC           I2C_0.IBIC.R                  /* I2C Bus Interrupt Config Register */
#define I2C_0_IBDBG          I2C_0.IBDBG.R                 /* I2C Bus Debug Register */

/* I2C */
#define I2C_1_IBAD           I2C_1.IBAD.R                  /* I2C Bus Address Register */
#define I2C_1_IBFD           I2C_1.IBFD.R                  /* I2C Bus Frequency Divider Register */
#define I2C_1_IBCR           I2C_1.IBCR.R                  /* I2C Bus Control Register */
#define I2C_1_IBSR           I2C_1.IBSR.R                  /* I2C Bus Status Register */
#define I2C_1_IBDR           I2C_1.IBDR.R                  /* I2C Bus Data I/O Register */
#define I2C_1_IBIC           I2C_1.IBIC.R                  /* I2C Bus Interrupt Config Register */
#define I2C_1_IBDBG          I2C_1.IBDBG.R                 /* I2C Bus Debug Register */

/* I2C */
#define I2C_2_IBAD           I2C_2.IBAD.R                  /* I2C Bus Address Register */
#define I2C_2_IBFD           I2C_2.IBFD.R                  /* I2C Bus Frequency Divider Register */
#define I2C_2_IBCR           I2C_2.IBCR.R                  /* I2C Bus Control Register */
#define I2C_2_IBSR           I2C_2.IBSR.R                  /* I2C Bus Status Register */
#define I2C_2_IBDR           I2C_2.IBDR.R                  /* I2C Bus Data I/O Register */
#define I2C_2_IBIC           I2C_2.IBIC.R                  /* I2C Bus Interrupt Config Register */
#define I2C_2_IBDBG          I2C_2.IBDBG.R                 /* I2C Bus Debug Register */

/* I2C */
#define I2C_3_IBAD           I2C_3.IBAD.R                  /* I2C Bus Address Register */
#define I2C_3_IBFD           I2C_3.IBFD.R                  /* I2C Bus Frequency Divider Register */
#define I2C_3_IBCR           I2C_3.IBCR.R                  /* I2C Bus Control Register */
#define I2C_3_IBSR           I2C_3.IBSR.R                  /* I2C Bus Status Register */
#define I2C_3_IBDR           I2C_3.IBDR.R                  /* I2C Bus Data I/O Register */
#define I2C_3_IBIC           I2C_3.IBIC.R                  /* I2C Bus Interrupt Config Register */
#define I2C_3_IBDBG          I2C_3.IBDBG.R                 /* I2C Bus Debug Register */

/* I2S */
#define I2S_0_TCSR           I2S_0.TCSR.R                  /* SAI Transmit Control Register */
#define I2S_0_TCR1           I2S_0.TCR1.R                  /* SAI Transmit Configuration 1 Register */
#define I2S_0_TCR2           I2S_0.TCR2.R                  /* SAI Transmit Configuration 2 Register */
#define I2S_0_TCR3           I2S_0.TCR3.R                  /* SAI Transmit Configuration 3 Register */
#define I2S_0_TCR4           I2S_0.TCR4.R                  /* SAI Transmit Configuration 4 Register */
#define I2S_0_TCR5           I2S_0.TCR5.R                  /* SAI Transmit Configuration 5 Register */
#define I2S_0_TDR0           I2S_0.TDR[0].R                /* SAI Transmit Data Register */
#define I2S_0_TDR1           I2S_0.TDR[1].R                /* SAI Transmit Data Register */
#define I2S_0_TDR2           I2S_0.TDR[2].R                /* SAI Transmit Data Register */
#define I2S_0_TDR3           I2S_0.TDR[3].R                /* SAI Transmit Data Register */
#define I2S_0_TFR0           I2S_0.TFR[0].R                /* SAI Transmit FIFO Register */
#define I2S_0_TFR1           I2S_0.TFR[1].R                /* SAI Transmit FIFO Register */
#define I2S_0_TFR2           I2S_0.TFR[2].R                /* SAI Transmit FIFO Register */
#define I2S_0_TFR3           I2S_0.TFR[3].R                /* SAI Transmit FIFO Register */
#define I2S_0_TMR            I2S_0.TMR.R                   /* SAI Transmit Mask Register */
#define I2S_0_RCSR           I2S_0.RCSR.R                  /* SAI Receive Control Register */
#define I2S_0_RCR1           I2S_0.RCR1.R                  /* SAI Receive Configuration 1 Register */
#define I2S_0_RCR2           I2S_0.RCR2.R                  /* SAI Receive Configuration 2 Register */
#define I2S_0_RCR3           I2S_0.RCR3.R                  /* SAI Receive Configuration 3 Register */
#define I2S_0_RCR4           I2S_0.RCR4.R                  /* SAI Receive Configuration 4 Register */
#define I2S_0_RCR5           I2S_0.RCR5.R                  /* SAI Receive Configuration 5 Register */
#define I2S_0_RDR0           I2S_0.RDR[0].R                /* SAI Receive Data Register */
#define I2S_0_RDR1           I2S_0.RDR[1].R                /* SAI Receive Data Register */
#define I2S_0_RDR2           I2S_0.RDR[2].R                /* SAI Receive Data Register */
#define I2S_0_RDR3           I2S_0.RDR[3].R                /* SAI Receive Data Register */
#define I2S_0_RFR0           I2S_0.RFR[0].R                /* SAI Receive FIFO Register */
#define I2S_0_RFR1           I2S_0.RFR[1].R                /* SAI Receive FIFO Register */
#define I2S_0_RFR2           I2S_0.RFR[2].R                /* SAI Receive FIFO Register */
#define I2S_0_RFR3           I2S_0.RFR[3].R                /* SAI Receive FIFO Register */
#define I2S_0_RMR            I2S_0.RMR.R                   /* SAI Receive Mask Register */
#define I2S_0_MCR            I2S_0.MCR.R                   /* SAI MCLK Control Register */
#define I2S_0_MDR            I2S_0.MDR.R                   /* SAI MCLK Divide Register */

/* I2S */
#define I2S_1_TCSR           I2S_1.TCSR.R                  /* SAI Transmit Control Register */
#define I2S_1_TCR1           I2S_1.TCR1.R                  /* SAI Transmit Configuration 1 Register */
#define I2S_1_TCR2           I2S_1.TCR2.R                  /* SAI Transmit Configuration 2 Register */
#define I2S_1_TCR3           I2S_1.TCR3.R                  /* SAI Transmit Configuration 3 Register */
#define I2S_1_TCR4           I2S_1.TCR4.R                  /* SAI Transmit Configuration 4 Register */
#define I2S_1_TCR5           I2S_1.TCR5.R                  /* SAI Transmit Configuration 5 Register */
#define I2S_1_TDR0           I2S_1.TDR[0].R                /* SAI Transmit Data Register */
#define I2S_1_TDR1           I2S_1.TDR[1].R                /* SAI Transmit Data Register */
#define I2S_1_TDR2           I2S_1.TDR[2].R                /* SAI Transmit Data Register */
#define I2S_1_TDR3           I2S_1.TDR[3].R                /* SAI Transmit Data Register */
#define I2S_1_TFR0           I2S_1.TFR[0].R                /* SAI Transmit FIFO Register */
#define I2S_1_TFR1           I2S_1.TFR[1].R                /* SAI Transmit FIFO Register */
#define I2S_1_TFR2           I2S_1.TFR[2].R                /* SAI Transmit FIFO Register */
#define I2S_1_TFR3           I2S_1.TFR[3].R                /* SAI Transmit FIFO Register */
#define I2S_1_TMR            I2S_1.TMR.R                   /* SAI Transmit Mask Register */
#define I2S_1_RCSR           I2S_1.RCSR.R                  /* SAI Receive Control Register */
#define I2S_1_RCR1           I2S_1.RCR1.R                  /* SAI Receive Configuration 1 Register */
#define I2S_1_RCR2           I2S_1.RCR2.R                  /* SAI Receive Configuration 2 Register */
#define I2S_1_RCR3           I2S_1.RCR3.R                  /* SAI Receive Configuration 3 Register */
#define I2S_1_RCR4           I2S_1.RCR4.R                  /* SAI Receive Configuration 4 Register */
#define I2S_1_RCR5           I2S_1.RCR5.R                  /* SAI Receive Configuration 5 Register */
#define I2S_1_RDR0           I2S_1.RDR[0].R                /* SAI Receive Data Register */
#define I2S_1_RDR1           I2S_1.RDR[1].R                /* SAI Receive Data Register */
#define I2S_1_RDR2           I2S_1.RDR[2].R                /* SAI Receive Data Register */
#define I2S_1_RDR3           I2S_1.RDR[3].R                /* SAI Receive Data Register */
#define I2S_1_RFR0           I2S_1.RFR[0].R                /* SAI Receive FIFO Register */
#define I2S_1_RFR1           I2S_1.RFR[1].R                /* SAI Receive FIFO Register */
#define I2S_1_RFR2           I2S_1.RFR[2].R                /* SAI Receive FIFO Register */
#define I2S_1_RFR3           I2S_1.RFR[3].R                /* SAI Receive FIFO Register */
#define I2S_1_RMR            I2S_1.RMR.R                   /* SAI Receive Mask Register */
#define I2S_1_MCR            I2S_1.MCR.R                   /* SAI MCLK Control Register */
#define I2S_1_MDR            I2S_1.MDR.R                   /* SAI MCLK Divide Register */

/* I2S */
#define I2S_2_TCSR           I2S_2.TCSR.R                  /* SAI Transmit Control Register */
#define I2S_2_TCR1           I2S_2.TCR1.R                  /* SAI Transmit Configuration 1 Register */
#define I2S_2_TCR2           I2S_2.TCR2.R                  /* SAI Transmit Configuration 2 Register */
#define I2S_2_TCR3           I2S_2.TCR3.R                  /* SAI Transmit Configuration 3 Register */
#define I2S_2_TCR4           I2S_2.TCR4.R                  /* SAI Transmit Configuration 4 Register */
#define I2S_2_TCR5           I2S_2.TCR5.R                  /* SAI Transmit Configuration 5 Register */
#define I2S_2_TDR0           I2S_2.TDR[0].R                /* SAI Transmit Data Register */
#define I2S_2_TDR1           I2S_2.TDR[1].R                /* SAI Transmit Data Register */
#define I2S_2_TDR2           I2S_2.TDR[2].R                /* SAI Transmit Data Register */
#define I2S_2_TDR3           I2S_2.TDR[3].R                /* SAI Transmit Data Register */
#define I2S_2_TFR0           I2S_2.TFR[0].R                /* SAI Transmit FIFO Register */
#define I2S_2_TFR1           I2S_2.TFR[1].R                /* SAI Transmit FIFO Register */
#define I2S_2_TFR2           I2S_2.TFR[2].R                /* SAI Transmit FIFO Register */
#define I2S_2_TFR3           I2S_2.TFR[3].R                /* SAI Transmit FIFO Register */
#define I2S_2_TMR            I2S_2.TMR.R                   /* SAI Transmit Mask Register */
#define I2S_2_RCSR           I2S_2.RCSR.R                  /* SAI Receive Control Register */
#define I2S_2_RCR1           I2S_2.RCR1.R                  /* SAI Receive Configuration 1 Register */
#define I2S_2_RCR2           I2S_2.RCR2.R                  /* SAI Receive Configuration 2 Register */
#define I2S_2_RCR3           I2S_2.RCR3.R                  /* SAI Receive Configuration 3 Register */
#define I2S_2_RCR4           I2S_2.RCR4.R                  /* SAI Receive Configuration 4 Register */
#define I2S_2_RCR5           I2S_2.RCR5.R                  /* SAI Receive Configuration 5 Register */
#define I2S_2_RDR0           I2S_2.RDR[0].R                /* SAI Receive Data Register */
#define I2S_2_RDR1           I2S_2.RDR[1].R                /* SAI Receive Data Register */
#define I2S_2_RDR2           I2S_2.RDR[2].R                /* SAI Receive Data Register */
#define I2S_2_RDR3           I2S_2.RDR[3].R                /* SAI Receive Data Register */
#define I2S_2_RFR0           I2S_2.RFR[0].R                /* SAI Receive FIFO Register */
#define I2S_2_RFR1           I2S_2.RFR[1].R                /* SAI Receive FIFO Register */
#define I2S_2_RFR2           I2S_2.RFR[2].R                /* SAI Receive FIFO Register */
#define I2S_2_RFR3           I2S_2.RFR[3].R                /* SAI Receive FIFO Register */
#define I2S_2_RMR            I2S_2.RMR.R                   /* SAI Receive Mask Register */
#define I2S_2_MCR            I2S_2.MCR.R                   /* SAI MCLK Control Register */
#define I2S_2_MDR            I2S_2.MDR.R                   /* SAI MCLK Divide Register */

/* INTC */
#define INTC_BCR             INTC.BCR.R                    /* INTC Block Configuration Register */
#define INTC_MPROT           INTC.MPROT.R                  /* INTC Master Protection Register */
#define INTC_CPR0            INTC.CPR[0].R                 /* INTC Current Priority Register for Processor n */
#define INTC_CPR1            INTC.CPR[1].R                 /* INTC Current Priority Register for Processor n */
#define INTC_CPR2            INTC.CPR[2].R                 /* INTC Current Priority Register for Processor n */
#define INTC_IACKR0          INTC.IACKR[0].R               /* INTC Interrupt Acknowledge Register for Processor n */
#define INTC_IACKR1          INTC.IACKR[1].R               /* INTC Interrupt Acknowledge Register for Processor n */
#define INTC_IACKR2          INTC.IACKR[2].R               /* INTC Interrupt Acknowledge Register for Processor n */
#define INTC_EOIR0           INTC.EOIR[0].R                /* INTC End Of Interrupt Register for Processor n */
#define INTC_EOIR1           INTC.EOIR[1].R                /* INTC End Of Interrupt Register for Processor n */
#define INTC_EOIR2           INTC.EOIR[2].R                /* INTC End Of Interrupt Register for Processor n */
#define INTC_SSCIR0          INTC.SSCIR[0].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR1          INTC.SSCIR[1].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR2          INTC.SSCIR[2].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR3          INTC.SSCIR[3].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR4          INTC.SSCIR[4].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR5          INTC.SSCIR[5].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR6          INTC.SSCIR[6].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR7          INTC.SSCIR[7].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR8          INTC.SSCIR[8].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR9          INTC.SSCIR[9].R               /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR10         INTC.SSCIR[10].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR11         INTC.SSCIR[11].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR12         INTC.SSCIR[12].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR13         INTC.SSCIR[13].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR14         INTC.SSCIR[14].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR15         INTC.SSCIR[15].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR16         INTC.SSCIR[16].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR17         INTC.SSCIR[17].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR18         INTC.SSCIR[18].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR19         INTC.SSCIR[19].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR20         INTC.SSCIR[20].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR21         INTC.SSCIR[21].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR22         INTC.SSCIR[22].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_SSCIR23         INTC.SSCIR[23].R              /* INTC Software Set/Clear Interrupt Register */
#define INTC_PSR0            INTC.PSR[0].R                 /* INTC Priority Select Register */
#define INTC_PSR1            INTC.PSR[1].R                 /* INTC Priority Select Register */
#define INTC_PSR2            INTC.PSR[2].R                 /* INTC Priority Select Register */
#define INTC_PSR3            INTC.PSR[3].R                 /* INTC Priority Select Register */
#define INTC_PSR4            INTC.PSR[4].R                 /* INTC Priority Select Register */
#define INTC_PSR5            INTC.PSR[5].R                 /* INTC Priority Select Register */
#define INTC_PSR6            INTC.PSR[6].R                 /* INTC Priority Select Register */
#define INTC_PSR7            INTC.PSR[7].R                 /* INTC Priority Select Register */
#define INTC_PSR8            INTC.PSR[8].R                 /* INTC Priority Select Register */
#define INTC_PSR9            INTC.PSR[9].R                 /* INTC Priority Select Register */
#define INTC_PSR10           INTC.PSR[10].R                /* INTC Priority Select Register */
#define INTC_PSR11           INTC.PSR[11].R                /* INTC Priority Select Register */
#define INTC_PSR12           INTC.PSR[12].R                /* INTC Priority Select Register */
#define INTC_PSR13           INTC.PSR[13].R                /* INTC Priority Select Register */
#define INTC_PSR14           INTC.PSR[14].R                /* INTC Priority Select Register */
#define INTC_PSR15           INTC.PSR[15].R                /* INTC Priority Select Register */
#define INTC_PSR16           INTC.PSR[16].R                /* INTC Priority Select Register */
#define INTC_PSR17           INTC.PSR[17].R                /* INTC Priority Select Register */
#define INTC_PSR18           INTC.PSR[18].R                /* INTC Priority Select Register */
#define INTC_PSR19           INTC.PSR[19].R                /* INTC Priority Select Register */
#define INTC_PSR20           INTC.PSR[20].R                /* INTC Priority Select Register */
#define INTC_PSR21           INTC.PSR[21].R                /* INTC Priority Select Register */
#define INTC_PSR22           INTC.PSR[22].R                /* INTC Priority Select Register */
#define INTC_PSR23           INTC.PSR[23].R                /* INTC Priority Select Register */
#define INTC_PSR24           INTC.PSR[24].R                /* INTC Priority Select Register */
#define INTC_PSR25           INTC.PSR[25].R                /* INTC Priority Select Register */
#define INTC_PSR26           INTC.PSR[26].R                /* INTC Priority Select Register */
#define INTC_PSR27           INTC.PSR[27].R                /* INTC Priority Select Register */
#define INTC_PSR28           INTC.PSR[28].R                /* INTC Priority Select Register */
#define INTC_PSR29           INTC.PSR[29].R                /* INTC Priority Select Register */
#define INTC_PSR30           INTC.PSR[30].R                /* INTC Priority Select Register */
#define INTC_PSR31           INTC.PSR[31].R                /* INTC Priority Select Register */
#define INTC_PSR32           INTC.PSR[32].R                /* INTC Priority Select Register */
#define INTC_PSR33           INTC.PSR[33].R                /* INTC Priority Select Register */
#define INTC_PSR34           INTC.PSR[34].R                /* INTC Priority Select Register */
#define INTC_PSR35           INTC.PSR[35].R                /* INTC Priority Select Register */
#define INTC_PSR36           INTC.PSR[36].R                /* INTC Priority Select Register */
#define INTC_PSR37           INTC.PSR[37].R                /* INTC Priority Select Register */
#define INTC_PSR38           INTC.PSR[38].R                /* INTC Priority Select Register */
#define INTC_PSR39           INTC.PSR[39].R                /* INTC Priority Select Register */
#define INTC_PSR40           INTC.PSR[40].R                /* INTC Priority Select Register */
#define INTC_PSR41           INTC.PSR[41].R                /* INTC Priority Select Register */
#define INTC_PSR42           INTC.PSR[42].R                /* INTC Priority Select Register */
#define INTC_PSR43           INTC.PSR[43].R                /* INTC Priority Select Register */
#define INTC_PSR44           INTC.PSR[44].R                /* INTC Priority Select Register */
#define INTC_PSR45           INTC.PSR[45].R                /* INTC Priority Select Register */
#define INTC_PSR46           INTC.PSR[46].R                /* INTC Priority Select Register */
#define INTC_PSR47           INTC.PSR[47].R                /* INTC Priority Select Register */
#define INTC_PSR48           INTC.PSR[48].R                /* INTC Priority Select Register */
#define INTC_PSR49           INTC.PSR[49].R                /* INTC Priority Select Register */
#define INTC_PSR50           INTC.PSR[50].R                /* INTC Priority Select Register */
#define INTC_PSR51           INTC.PSR[51].R                /* INTC Priority Select Register */
#define INTC_PSR52           INTC.PSR[52].R                /* INTC Priority Select Register */
#define INTC_PSR53           INTC.PSR[53].R                /* INTC Priority Select Register */
#define INTC_PSR54           INTC.PSR[54].R                /* INTC Priority Select Register */
#define INTC_PSR55           INTC.PSR[55].R                /* INTC Priority Select Register */
#define INTC_PSR56           INTC.PSR[56].R                /* INTC Priority Select Register */
#define INTC_PSR57           INTC.PSR[57].R                /* INTC Priority Select Register */
#define INTC_PSR58           INTC.PSR[58].R                /* INTC Priority Select Register */
#define INTC_PSR59           INTC.PSR[59].R                /* INTC Priority Select Register */
#define INTC_PSR60           INTC.PSR[60].R                /* INTC Priority Select Register */
#define INTC_PSR61           INTC.PSR[61].R                /* INTC Priority Select Register */
#define INTC_PSR62           INTC.PSR[62].R                /* INTC Priority Select Register */
#define INTC_PSR63           INTC.PSR[63].R                /* INTC Priority Select Register */
#define INTC_PSR64           INTC.PSR[64].R                /* INTC Priority Select Register */
#define INTC_PSR65           INTC.PSR[65].R                /* INTC Priority Select Register */
#define INTC_PSR66           INTC.PSR[66].R                /* INTC Priority Select Register */
#define INTC_PSR67           INTC.PSR[67].R                /* INTC Priority Select Register */
#define INTC_PSR68           INTC.PSR[68].R                /* INTC Priority Select Register */
#define INTC_PSR69           INTC.PSR[69].R                /* INTC Priority Select Register */
#define INTC_PSR70           INTC.PSR[70].R                /* INTC Priority Select Register */
#define INTC_PSR71           INTC.PSR[71].R                /* INTC Priority Select Register */
#define INTC_PSR72           INTC.PSR[72].R                /* INTC Priority Select Register */
#define INTC_PSR73           INTC.PSR[73].R                /* INTC Priority Select Register */
#define INTC_PSR74           INTC.PSR[74].R                /* INTC Priority Select Register */
#define INTC_PSR75           INTC.PSR[75].R                /* INTC Priority Select Register */
#define INTC_PSR76           INTC.PSR[76].R                /* INTC Priority Select Register */
#define INTC_PSR77           INTC.PSR[77].R                /* INTC Priority Select Register */
#define INTC_PSR78           INTC.PSR[78].R                /* INTC Priority Select Register */
#define INTC_PSR79           INTC.PSR[79].R                /* INTC Priority Select Register */
#define INTC_PSR80           INTC.PSR[80].R                /* INTC Priority Select Register */
#define INTC_PSR81           INTC.PSR[81].R                /* INTC Priority Select Register */
#define INTC_PSR82           INTC.PSR[82].R                /* INTC Priority Select Register */
#define INTC_PSR83           INTC.PSR[83].R                /* INTC Priority Select Register */
#define INTC_PSR84           INTC.PSR[84].R                /* INTC Priority Select Register */
#define INTC_PSR85           INTC.PSR[85].R                /* INTC Priority Select Register */
#define INTC_PSR86           INTC.PSR[86].R                /* INTC Priority Select Register */
#define INTC_PSR87           INTC.PSR[87].R                /* INTC Priority Select Register */
#define INTC_PSR88           INTC.PSR[88].R                /* INTC Priority Select Register */
#define INTC_PSR89           INTC.PSR[89].R                /* INTC Priority Select Register */
#define INTC_PSR90           INTC.PSR[90].R                /* INTC Priority Select Register */
#define INTC_PSR91           INTC.PSR[91].R                /* INTC Priority Select Register */
#define INTC_PSR92           INTC.PSR[92].R                /* INTC Priority Select Register */
#define INTC_PSR93           INTC.PSR[93].R                /* INTC Priority Select Register */
#define INTC_PSR94           INTC.PSR[94].R                /* INTC Priority Select Register */
#define INTC_PSR95           INTC.PSR[95].R                /* INTC Priority Select Register */
#define INTC_PSR96           INTC.PSR[96].R                /* INTC Priority Select Register */
#define INTC_PSR97           INTC.PSR[97].R                /* INTC Priority Select Register */
#define INTC_PSR98           INTC.PSR[98].R                /* INTC Priority Select Register */
#define INTC_PSR99           INTC.PSR[99].R                /* INTC Priority Select Register */
#define INTC_PSR100          INTC.PSR[100].R               /* INTC Priority Select Register */
#define INTC_PSR101          INTC.PSR[101].R               /* INTC Priority Select Register */
#define INTC_PSR102          INTC.PSR[102].R               /* INTC Priority Select Register */
#define INTC_PSR103          INTC.PSR[103].R               /* INTC Priority Select Register */
#define INTC_PSR104          INTC.PSR[104].R               /* INTC Priority Select Register */
#define INTC_PSR105          INTC.PSR[105].R               /* INTC Priority Select Register */
#define INTC_PSR106          INTC.PSR[106].R               /* INTC Priority Select Register */
#define INTC_PSR107          INTC.PSR[107].R               /* INTC Priority Select Register */
#define INTC_PSR108          INTC.PSR[108].R               /* INTC Priority Select Register */
#define INTC_PSR109          INTC.PSR[109].R               /* INTC Priority Select Register */
#define INTC_PSR110          INTC.PSR[110].R               /* INTC Priority Select Register */
#define INTC_PSR111          INTC.PSR[111].R               /* INTC Priority Select Register */
#define INTC_PSR112          INTC.PSR[112].R               /* INTC Priority Select Register */
#define INTC_PSR113          INTC.PSR[113].R               /* INTC Priority Select Register */
#define INTC_PSR114          INTC.PSR[114].R               /* INTC Priority Select Register */
#define INTC_PSR115          INTC.PSR[115].R               /* INTC Priority Select Register */
#define INTC_PSR116          INTC.PSR[116].R               /* INTC Priority Select Register */
#define INTC_PSR117          INTC.PSR[117].R               /* INTC Priority Select Register */
#define INTC_PSR118          INTC.PSR[118].R               /* INTC Priority Select Register */
#define INTC_PSR119          INTC.PSR[119].R               /* INTC Priority Select Register */
#define INTC_PSR120          INTC.PSR[120].R               /* INTC Priority Select Register */
#define INTC_PSR121          INTC.PSR[121].R               /* INTC Priority Select Register */
#define INTC_PSR122          INTC.PSR[122].R               /* INTC Priority Select Register */
#define INTC_PSR123          INTC.PSR[123].R               /* INTC Priority Select Register */
#define INTC_PSR124          INTC.PSR[124].R               /* INTC Priority Select Register */
#define INTC_PSR125          INTC.PSR[125].R               /* INTC Priority Select Register */
#define INTC_PSR126          INTC.PSR[126].R               /* INTC Priority Select Register */
#define INTC_PSR127          INTC.PSR[127].R               /* INTC Priority Select Register */
#define INTC_PSR128          INTC.PSR[128].R               /* INTC Priority Select Register */
#define INTC_PSR129          INTC.PSR[129].R               /* INTC Priority Select Register */
#define INTC_PSR130          INTC.PSR[130].R               /* INTC Priority Select Register */
#define INTC_PSR131          INTC.PSR[131].R               /* INTC Priority Select Register */
#define INTC_PSR132          INTC.PSR[132].R               /* INTC Priority Select Register */
#define INTC_PSR133          INTC.PSR[133].R               /* INTC Priority Select Register */
#define INTC_PSR134          INTC.PSR[134].R               /* INTC Priority Select Register */
#define INTC_PSR135          INTC.PSR[135].R               /* INTC Priority Select Register */
#define INTC_PSR136          INTC.PSR[136].R               /* INTC Priority Select Register */
#define INTC_PSR137          INTC.PSR[137].R               /* INTC Priority Select Register */
#define INTC_PSR138          INTC.PSR[138].R               /* INTC Priority Select Register */
#define INTC_PSR139          INTC.PSR[139].R               /* INTC Priority Select Register */
#define INTC_PSR140          INTC.PSR[140].R               /* INTC Priority Select Register */
#define INTC_PSR141          INTC.PSR[141].R               /* INTC Priority Select Register */
#define INTC_PSR142          INTC.PSR[142].R               /* INTC Priority Select Register */
#define INTC_PSR143          INTC.PSR[143].R               /* INTC Priority Select Register */
#define INTC_PSR144          INTC.PSR[144].R               /* INTC Priority Select Register */
#define INTC_PSR145          INTC.PSR[145].R               /* INTC Priority Select Register */
#define INTC_PSR146          INTC.PSR[146].R               /* INTC Priority Select Register */
#define INTC_PSR147          INTC.PSR[147].R               /* INTC Priority Select Register */
#define INTC_PSR148          INTC.PSR[148].R               /* INTC Priority Select Register */
#define INTC_PSR149          INTC.PSR[149].R               /* INTC Priority Select Register */
#define INTC_PSR150          INTC.PSR[150].R               /* INTC Priority Select Register */
#define INTC_PSR151          INTC.PSR[151].R               /* INTC Priority Select Register */
#define INTC_PSR152          INTC.PSR[152].R               /* INTC Priority Select Register */
#define INTC_PSR153          INTC.PSR[153].R               /* INTC Priority Select Register */
#define INTC_PSR154          INTC.PSR[154].R               /* INTC Priority Select Register */
#define INTC_PSR155          INTC.PSR[155].R               /* INTC Priority Select Register */
#define INTC_PSR156          INTC.PSR[156].R               /* INTC Priority Select Register */
#define INTC_PSR157          INTC.PSR[157].R               /* INTC Priority Select Register */
#define INTC_PSR158          INTC.PSR[158].R               /* INTC Priority Select Register */
#define INTC_PSR159          INTC.PSR[159].R               /* INTC Priority Select Register */
#define INTC_PSR160          INTC.PSR[160].R               /* INTC Priority Select Register */
#define INTC_PSR161          INTC.PSR[161].R               /* INTC Priority Select Register */
#define INTC_PSR162          INTC.PSR[162].R               /* INTC Priority Select Register */
#define INTC_PSR163          INTC.PSR[163].R               /* INTC Priority Select Register */
#define INTC_PSR164          INTC.PSR[164].R               /* INTC Priority Select Register */
#define INTC_PSR165          INTC.PSR[165].R               /* INTC Priority Select Register */
#define INTC_PSR166          INTC.PSR[166].R               /* INTC Priority Select Register */
#define INTC_PSR167          INTC.PSR[167].R               /* INTC Priority Select Register */
#define INTC_PSR168          INTC.PSR[168].R               /* INTC Priority Select Register */
#define INTC_PSR169          INTC.PSR[169].R               /* INTC Priority Select Register */
#define INTC_PSR170          INTC.PSR[170].R               /* INTC Priority Select Register */
#define INTC_PSR171          INTC.PSR[171].R               /* INTC Priority Select Register */
#define INTC_PSR172          INTC.PSR[172].R               /* INTC Priority Select Register */
#define INTC_PSR173          INTC.PSR[173].R               /* INTC Priority Select Register */
#define INTC_PSR174          INTC.PSR[174].R               /* INTC Priority Select Register */
#define INTC_PSR175          INTC.PSR[175].R               /* INTC Priority Select Register */
#define INTC_PSR176          INTC.PSR[176].R               /* INTC Priority Select Register */
#define INTC_PSR177          INTC.PSR[177].R               /* INTC Priority Select Register */
#define INTC_PSR178          INTC.PSR[178].R               /* INTC Priority Select Register */
#define INTC_PSR179          INTC.PSR[179].R               /* INTC Priority Select Register */
#define INTC_PSR180          INTC.PSR[180].R               /* INTC Priority Select Register */
#define INTC_PSR181          INTC.PSR[181].R               /* INTC Priority Select Register */
#define INTC_PSR182          INTC.PSR[182].R               /* INTC Priority Select Register */
#define INTC_PSR183          INTC.PSR[183].R               /* INTC Priority Select Register */
#define INTC_PSR184          INTC.PSR[184].R               /* INTC Priority Select Register */
#define INTC_PSR185          INTC.PSR[185].R               /* INTC Priority Select Register */
#define INTC_PSR186          INTC.PSR[186].R               /* INTC Priority Select Register */
#define INTC_PSR187          INTC.PSR[187].R               /* INTC Priority Select Register */
#define INTC_PSR188          INTC.PSR[188].R               /* INTC Priority Select Register */
#define INTC_PSR189          INTC.PSR[189].R               /* INTC Priority Select Register */
#define INTC_PSR190          INTC.PSR[190].R               /* INTC Priority Select Register */
#define INTC_PSR191          INTC.PSR[191].R               /* INTC Priority Select Register */
#define INTC_PSR192          INTC.PSR[192].R               /* INTC Priority Select Register */
#define INTC_PSR193          INTC.PSR[193].R               /* INTC Priority Select Register */
#define INTC_PSR194          INTC.PSR[194].R               /* INTC Priority Select Register */
#define INTC_PSR195          INTC.PSR[195].R               /* INTC Priority Select Register */
#define INTC_PSR196          INTC.PSR[196].R               /* INTC Priority Select Register */
#define INTC_PSR197          INTC.PSR[197].R               /* INTC Priority Select Register */
#define INTC_PSR198          INTC.PSR[198].R               /* INTC Priority Select Register */
#define INTC_PSR199          INTC.PSR[199].R               /* INTC Priority Select Register */
#define INTC_PSR200          INTC.PSR[200].R               /* INTC Priority Select Register */
#define INTC_PSR201          INTC.PSR[201].R               /* INTC Priority Select Register */
#define INTC_PSR202          INTC.PSR[202].R               /* INTC Priority Select Register */
#define INTC_PSR203          INTC.PSR[203].R               /* INTC Priority Select Register */
#define INTC_PSR204          INTC.PSR[204].R               /* INTC Priority Select Register */
#define INTC_PSR205          INTC.PSR[205].R               /* INTC Priority Select Register */
#define INTC_PSR206          INTC.PSR[206].R               /* INTC Priority Select Register */
#define INTC_PSR207          INTC.PSR[207].R               /* INTC Priority Select Register */
#define INTC_PSR208          INTC.PSR[208].R               /* INTC Priority Select Register */
#define INTC_PSR209          INTC.PSR[209].R               /* INTC Priority Select Register */
#define INTC_PSR210          INTC.PSR[210].R               /* INTC Priority Select Register */
#define INTC_PSR211          INTC.PSR[211].R               /* INTC Priority Select Register */
#define INTC_PSR212          INTC.PSR[212].R               /* INTC Priority Select Register */
#define INTC_PSR213          INTC.PSR[213].R               /* INTC Priority Select Register */
#define INTC_PSR214          INTC.PSR[214].R               /* INTC Priority Select Register */
#define INTC_PSR215          INTC.PSR[215].R               /* INTC Priority Select Register */
#define INTC_PSR216          INTC.PSR[216].R               /* INTC Priority Select Register */
#define INTC_PSR217          INTC.PSR[217].R               /* INTC Priority Select Register */
#define INTC_PSR218          INTC.PSR[218].R               /* INTC Priority Select Register */
#define INTC_PSR219          INTC.PSR[219].R               /* INTC Priority Select Register */
#define INTC_PSR220          INTC.PSR[220].R               /* INTC Priority Select Register */
#define INTC_PSR221          INTC.PSR[221].R               /* INTC Priority Select Register */
#define INTC_PSR222          INTC.PSR[222].R               /* INTC Priority Select Register */
#define INTC_PSR223          INTC.PSR[223].R               /* INTC Priority Select Register */
#define INTC_PSR224          INTC.PSR[224].R               /* INTC Priority Select Register */
#define INTC_PSR225          INTC.PSR[225].R               /* INTC Priority Select Register */
#define INTC_PSR226          INTC.PSR[226].R               /* INTC Priority Select Register */
#define INTC_PSR227          INTC.PSR[227].R               /* INTC Priority Select Register */
#define INTC_PSR228          INTC.PSR[228].R               /* INTC Priority Select Register */
#define INTC_PSR229          INTC.PSR[229].R               /* INTC Priority Select Register */
#define INTC_PSR230          INTC.PSR[230].R               /* INTC Priority Select Register */
#define INTC_PSR231          INTC.PSR[231].R               /* INTC Priority Select Register */
#define INTC_PSR232          INTC.PSR[232].R               /* INTC Priority Select Register */
#define INTC_PSR233          INTC.PSR[233].R               /* INTC Priority Select Register */
#define INTC_PSR234          INTC.PSR[234].R               /* INTC Priority Select Register */
#define INTC_PSR235          INTC.PSR[235].R               /* INTC Priority Select Register */
#define INTC_PSR236          INTC.PSR[236].R               /* INTC Priority Select Register */
#define INTC_PSR237          INTC.PSR[237].R               /* INTC Priority Select Register */
#define INTC_PSR238          INTC.PSR[238].R               /* INTC Priority Select Register */
#define INTC_PSR239          INTC.PSR[239].R               /* INTC Priority Select Register */
#define INTC_PSR240          INTC.PSR[240].R               /* INTC Priority Select Register */
#define INTC_PSR241          INTC.PSR[241].R               /* INTC Priority Select Register */
#define INTC_PSR242          INTC.PSR[242].R               /* INTC Priority Select Register */
#define INTC_PSR243          INTC.PSR[243].R               /* INTC Priority Select Register */
#define INTC_PSR244          INTC.PSR[244].R               /* INTC Priority Select Register */
#define INTC_PSR245          INTC.PSR[245].R               /* INTC Priority Select Register */
#define INTC_PSR246          INTC.PSR[246].R               /* INTC Priority Select Register */
#define INTC_PSR247          INTC.PSR[247].R               /* INTC Priority Select Register */
#define INTC_PSR248          INTC.PSR[248].R               /* INTC Priority Select Register */
#define INTC_PSR249          INTC.PSR[249].R               /* INTC Priority Select Register */
#define INTC_PSR250          INTC.PSR[250].R               /* INTC Priority Select Register */
#define INTC_PSR251          INTC.PSR[251].R               /* INTC Priority Select Register */
#define INTC_PSR252          INTC.PSR[252].R               /* INTC Priority Select Register */
#define INTC_PSR253          INTC.PSR[253].R               /* INTC Priority Select Register */
#define INTC_PSR254          INTC.PSR[254].R               /* INTC Priority Select Register */
#define INTC_PSR255          INTC.PSR[255].R               /* INTC Priority Select Register */
#define INTC_PSR256          INTC.PSR[256].R               /* INTC Priority Select Register */
#define INTC_PSR257          INTC.PSR[257].R               /* INTC Priority Select Register */
#define INTC_PSR258          INTC.PSR[258].R               /* INTC Priority Select Register */
#define INTC_PSR259          INTC.PSR[259].R               /* INTC Priority Select Register */
#define INTC_PSR260          INTC.PSR[260].R               /* INTC Priority Select Register */
#define INTC_PSR261          INTC.PSR[261].R               /* INTC Priority Select Register */
#define INTC_PSR262          INTC.PSR[262].R               /* INTC Priority Select Register */
#define INTC_PSR263          INTC.PSR[263].R               /* INTC Priority Select Register */
#define INTC_PSR264          INTC.PSR[264].R               /* INTC Priority Select Register */
#define INTC_PSR265          INTC.PSR[265].R               /* INTC Priority Select Register */
#define INTC_PSR266          INTC.PSR[266].R               /* INTC Priority Select Register */
#define INTC_PSR267          INTC.PSR[267].R               /* INTC Priority Select Register */
#define INTC_PSR268          INTC.PSR[268].R               /* INTC Priority Select Register */
#define INTC_PSR269          INTC.PSR[269].R               /* INTC Priority Select Register */
#define INTC_PSR270          INTC.PSR[270].R               /* INTC Priority Select Register */
#define INTC_PSR271          INTC.PSR[271].R               /* INTC Priority Select Register */
#define INTC_PSR272          INTC.PSR[272].R               /* INTC Priority Select Register */
#define INTC_PSR273          INTC.PSR[273].R               /* INTC Priority Select Register */
#define INTC_PSR274          INTC.PSR[274].R               /* INTC Priority Select Register */
#define INTC_PSR275          INTC.PSR[275].R               /* INTC Priority Select Register */
#define INTC_PSR276          INTC.PSR[276].R               /* INTC Priority Select Register */
#define INTC_PSR277          INTC.PSR[277].R               /* INTC Priority Select Register */
#define INTC_PSR278          INTC.PSR[278].R               /* INTC Priority Select Register */
#define INTC_PSR279          INTC.PSR[279].R               /* INTC Priority Select Register */
#define INTC_PSR280          INTC.PSR[280].R               /* INTC Priority Select Register */
#define INTC_PSR281          INTC.PSR[281].R               /* INTC Priority Select Register */
#define INTC_PSR282          INTC.PSR[282].R               /* INTC Priority Select Register */
#define INTC_PSR283          INTC.PSR[283].R               /* INTC Priority Select Register */
#define INTC_PSR284          INTC.PSR[284].R               /* INTC Priority Select Register */
#define INTC_PSR285          INTC.PSR[285].R               /* INTC Priority Select Register */
#define INTC_PSR286          INTC.PSR[286].R               /* INTC Priority Select Register */
#define INTC_PSR287          INTC.PSR[287].R               /* INTC Priority Select Register */
#define INTC_PSR288          INTC.PSR[288].R               /* INTC Priority Select Register */
#define INTC_PSR289          INTC.PSR[289].R               /* INTC Priority Select Register */
#define INTC_PSR290          INTC.PSR[290].R               /* INTC Priority Select Register */
#define INTC_PSR291          INTC.PSR[291].R               /* INTC Priority Select Register */
#define INTC_PSR292          INTC.PSR[292].R               /* INTC Priority Select Register */
#define INTC_PSR293          INTC.PSR[293].R               /* INTC Priority Select Register */
#define INTC_PSR294          INTC.PSR[294].R               /* INTC Priority Select Register */
#define INTC_PSR295          INTC.PSR[295].R               /* INTC Priority Select Register */
#define INTC_PSR296          INTC.PSR[296].R               /* INTC Priority Select Register */
#define INTC_PSR297          INTC.PSR[297].R               /* INTC Priority Select Register */
#define INTC_PSR298          INTC.PSR[298].R               /* INTC Priority Select Register */
#define INTC_PSR299          INTC.PSR[299].R               /* INTC Priority Select Register */
#define INTC_PSR300          INTC.PSR[300].R               /* INTC Priority Select Register */
#define INTC_PSR301          INTC.PSR[301].R               /* INTC Priority Select Register */
#define INTC_PSR302          INTC.PSR[302].R               /* INTC Priority Select Register */
#define INTC_PSR303          INTC.PSR[303].R               /* INTC Priority Select Register */
#define INTC_PSR304          INTC.PSR[304].R               /* INTC Priority Select Register */
#define INTC_PSR305          INTC.PSR[305].R               /* INTC Priority Select Register */
#define INTC_PSR306          INTC.PSR[306].R               /* INTC Priority Select Register */
#define INTC_PSR307          INTC.PSR[307].R               /* INTC Priority Select Register */
#define INTC_PSR308          INTC.PSR[308].R               /* INTC Priority Select Register */
#define INTC_PSR309          INTC.PSR[309].R               /* INTC Priority Select Register */
#define INTC_PSR310          INTC.PSR[310].R               /* INTC Priority Select Register */
#define INTC_PSR311          INTC.PSR[311].R               /* INTC Priority Select Register */
#define INTC_PSR312          INTC.PSR[312].R               /* INTC Priority Select Register */
#define INTC_PSR313          INTC.PSR[313].R               /* INTC Priority Select Register */
#define INTC_PSR314          INTC.PSR[314].R               /* INTC Priority Select Register */
#define INTC_PSR315          INTC.PSR[315].R               /* INTC Priority Select Register */
#define INTC_PSR316          INTC.PSR[316].R               /* INTC Priority Select Register */
#define INTC_PSR317          INTC.PSR[317].R               /* INTC Priority Select Register */
#define INTC_PSR318          INTC.PSR[318].R               /* INTC Priority Select Register */
#define INTC_PSR319          INTC.PSR[319].R               /* INTC Priority Select Register */
#define INTC_PSR320          INTC.PSR[320].R               /* INTC Priority Select Register */
#define INTC_PSR321          INTC.PSR[321].R               /* INTC Priority Select Register */
#define INTC_PSR322          INTC.PSR[322].R               /* INTC Priority Select Register */
#define INTC_PSR323          INTC.PSR[323].R               /* INTC Priority Select Register */
#define INTC_PSR324          INTC.PSR[324].R               /* INTC Priority Select Register */
#define INTC_PSR325          INTC.PSR[325].R               /* INTC Priority Select Register */
#define INTC_PSR326          INTC.PSR[326].R               /* INTC Priority Select Register */
#define INTC_PSR327          INTC.PSR[327].R               /* INTC Priority Select Register */
#define INTC_PSR328          INTC.PSR[328].R               /* INTC Priority Select Register */
#define INTC_PSR329          INTC.PSR[329].R               /* INTC Priority Select Register */
#define INTC_PSR330          INTC.PSR[330].R               /* INTC Priority Select Register */
#define INTC_PSR331          INTC.PSR[331].R               /* INTC Priority Select Register */
#define INTC_PSR332          INTC.PSR[332].R               /* INTC Priority Select Register */
#define INTC_PSR333          INTC.PSR[333].R               /* INTC Priority Select Register */
#define INTC_PSR334          INTC.PSR[334].R               /* INTC Priority Select Register */
#define INTC_PSR335          INTC.PSR[335].R               /* INTC Priority Select Register */
#define INTC_PSR336          INTC.PSR[336].R               /* INTC Priority Select Register */
#define INTC_PSR337          INTC.PSR[337].R               /* INTC Priority Select Register */
#define INTC_PSR338          INTC.PSR[338].R               /* INTC Priority Select Register */
#define INTC_PSR339          INTC.PSR[339].R               /* INTC Priority Select Register */
#define INTC_PSR340          INTC.PSR[340].R               /* INTC Priority Select Register */
#define INTC_PSR341          INTC.PSR[341].R               /* INTC Priority Select Register */
#define INTC_PSR342          INTC.PSR[342].R               /* INTC Priority Select Register */
#define INTC_PSR343          INTC.PSR[343].R               /* INTC Priority Select Register */
#define INTC_PSR344          INTC.PSR[344].R               /* INTC Priority Select Register */
#define INTC_PSR345          INTC.PSR[345].R               /* INTC Priority Select Register */
#define INTC_PSR346          INTC.PSR[346].R               /* INTC Priority Select Register */
#define INTC_PSR347          INTC.PSR[347].R               /* INTC Priority Select Register */
#define INTC_PSR348          INTC.PSR[348].R               /* INTC Priority Select Register */
#define INTC_PSR349          INTC.PSR[349].R               /* INTC Priority Select Register */
#define INTC_PSR350          INTC.PSR[350].R               /* INTC Priority Select Register */
#define INTC_PSR351          INTC.PSR[351].R               /* INTC Priority Select Register */
#define INTC_PSR352          INTC.PSR[352].R               /* INTC Priority Select Register */
#define INTC_PSR353          INTC.PSR[353].R               /* INTC Priority Select Register */
#define INTC_PSR354          INTC.PSR[354].R               /* INTC Priority Select Register */
#define INTC_PSR355          INTC.PSR[355].R               /* INTC Priority Select Register */
#define INTC_PSR356          INTC.PSR[356].R               /* INTC Priority Select Register */
#define INTC_PSR357          INTC.PSR[357].R               /* INTC Priority Select Register */
#define INTC_PSR358          INTC.PSR[358].R               /* INTC Priority Select Register */
#define INTC_PSR359          INTC.PSR[359].R               /* INTC Priority Select Register */
#define INTC_PSR360          INTC.PSR[360].R               /* INTC Priority Select Register */
#define INTC_PSR361          INTC.PSR[361].R               /* INTC Priority Select Register */
#define INTC_PSR362          INTC.PSR[362].R               /* INTC Priority Select Register */
#define INTC_PSR363          INTC.PSR[363].R               /* INTC Priority Select Register */
#define INTC_PSR364          INTC.PSR[364].R               /* INTC Priority Select Register */
#define INTC_PSR365          INTC.PSR[365].R               /* INTC Priority Select Register */
#define INTC_PSR366          INTC.PSR[366].R               /* INTC Priority Select Register */
#define INTC_PSR367          INTC.PSR[367].R               /* INTC Priority Select Register */
#define INTC_PSR368          INTC.PSR[368].R               /* INTC Priority Select Register */
#define INTC_PSR369          INTC.PSR[369].R               /* INTC Priority Select Register */
#define INTC_PSR370          INTC.PSR[370].R               /* INTC Priority Select Register */
#define INTC_PSR371          INTC.PSR[371].R               /* INTC Priority Select Register */
#define INTC_PSR372          INTC.PSR[372].R               /* INTC Priority Select Register */
#define INTC_PSR373          INTC.PSR[373].R               /* INTC Priority Select Register */
#define INTC_PSR374          INTC.PSR[374].R               /* INTC Priority Select Register */
#define INTC_PSR375          INTC.PSR[375].R               /* INTC Priority Select Register */
#define INTC_PSR376          INTC.PSR[376].R               /* INTC Priority Select Register */
#define INTC_PSR377          INTC.PSR[377].R               /* INTC Priority Select Register */
#define INTC_PSR378          INTC.PSR[378].R               /* INTC Priority Select Register */
#define INTC_PSR379          INTC.PSR[379].R               /* INTC Priority Select Register */
#define INTC_PSR380          INTC.PSR[380].R               /* INTC Priority Select Register */
#define INTC_PSR381          INTC.PSR[381].R               /* INTC Priority Select Register */
#define INTC_PSR382          INTC.PSR[382].R               /* INTC Priority Select Register */
#define INTC_PSR383          INTC.PSR[383].R               /* INTC Priority Select Register */
#define INTC_PSR384          INTC.PSR[384].R               /* INTC Priority Select Register */
#define INTC_PSR385          INTC.PSR[385].R               /* INTC Priority Select Register */
#define INTC_PSR386          INTC.PSR[386].R               /* INTC Priority Select Register */
#define INTC_PSR387          INTC.PSR[387].R               /* INTC Priority Select Register */
#define INTC_PSR388          INTC.PSR[388].R               /* INTC Priority Select Register */
#define INTC_PSR389          INTC.PSR[389].R               /* INTC Priority Select Register */
#define INTC_PSR390          INTC.PSR[390].R               /* INTC Priority Select Register */
#define INTC_PSR391          INTC.PSR[391].R               /* INTC Priority Select Register */
#define INTC_PSR392          INTC.PSR[392].R               /* INTC Priority Select Register */
#define INTC_PSR393          INTC.PSR[393].R               /* INTC Priority Select Register */
#define INTC_PSR394          INTC.PSR[394].R               /* INTC Priority Select Register */
#define INTC_PSR395          INTC.PSR[395].R               /* INTC Priority Select Register */
#define INTC_PSR396          INTC.PSR[396].R               /* INTC Priority Select Register */
#define INTC_PSR397          INTC.PSR[397].R               /* INTC Priority Select Register */
#define INTC_PSR398          INTC.PSR[398].R               /* INTC Priority Select Register */
#define INTC_PSR399          INTC.PSR[399].R               /* INTC Priority Select Register */
#define INTC_PSR400          INTC.PSR[400].R               /* INTC Priority Select Register */
#define INTC_PSR401          INTC.PSR[401].R               /* INTC Priority Select Register */
#define INTC_PSR402          INTC.PSR[402].R               /* INTC Priority Select Register */
#define INTC_PSR403          INTC.PSR[403].R               /* INTC Priority Select Register */
#define INTC_PSR404          INTC.PSR[404].R               /* INTC Priority Select Register */
#define INTC_PSR405          INTC.PSR[405].R               /* INTC Priority Select Register */
#define INTC_PSR406          INTC.PSR[406].R               /* INTC Priority Select Register */
#define INTC_PSR407          INTC.PSR[407].R               /* INTC Priority Select Register */
#define INTC_PSR408          INTC.PSR[408].R               /* INTC Priority Select Register */
#define INTC_PSR409          INTC.PSR[409].R               /* INTC Priority Select Register */
#define INTC_PSR410          INTC.PSR[410].R               /* INTC Priority Select Register */
#define INTC_PSR411          INTC.PSR[411].R               /* INTC Priority Select Register */
#define INTC_PSR412          INTC.PSR[412].R               /* INTC Priority Select Register */
#define INTC_PSR413          INTC.PSR[413].R               /* INTC Priority Select Register */
#define INTC_PSR414          INTC.PSR[414].R               /* INTC Priority Select Register */
#define INTC_PSR415          INTC.PSR[415].R               /* INTC Priority Select Register */
#define INTC_PSR416          INTC.PSR[416].R               /* INTC Priority Select Register */
#define INTC_PSR417          INTC.PSR[417].R               /* INTC Priority Select Register */
#define INTC_PSR418          INTC.PSR[418].R               /* INTC Priority Select Register */
#define INTC_PSR419          INTC.PSR[419].R               /* INTC Priority Select Register */
#define INTC_PSR420          INTC.PSR[420].R               /* INTC Priority Select Register */
#define INTC_PSR421          INTC.PSR[421].R               /* INTC Priority Select Register */
#define INTC_PSR422          INTC.PSR[422].R               /* INTC Priority Select Register */
#define INTC_PSR423          INTC.PSR[423].R               /* INTC Priority Select Register */
#define INTC_PSR424          INTC.PSR[424].R               /* INTC Priority Select Register */
#define INTC_PSR425          INTC.PSR[425].R               /* INTC Priority Select Register */
#define INTC_PSR426          INTC.PSR[426].R               /* INTC Priority Select Register */
#define INTC_PSR427          INTC.PSR[427].R               /* INTC Priority Select Register */
#define INTC_PSR428          INTC.PSR[428].R               /* INTC Priority Select Register */
#define INTC_PSR429          INTC.PSR[429].R               /* INTC Priority Select Register */
#define INTC_PSR430          INTC.PSR[430].R               /* INTC Priority Select Register */
#define INTC_PSR431          INTC.PSR[431].R               /* INTC Priority Select Register */
#define INTC_PSR432          INTC.PSR[432].R               /* INTC Priority Select Register */
#define INTC_PSR433          INTC.PSR[433].R               /* INTC Priority Select Register */
#define INTC_PSR434          INTC.PSR[434].R               /* INTC Priority Select Register */
#define INTC_PSR435          INTC.PSR[435].R               /* INTC Priority Select Register */
#define INTC_PSR436          INTC.PSR[436].R               /* INTC Priority Select Register */
#define INTC_PSR437          INTC.PSR[437].R               /* INTC Priority Select Register */
#define INTC_PSR438          INTC.PSR[438].R               /* INTC Priority Select Register */
#define INTC_PSR439          INTC.PSR[439].R               /* INTC Priority Select Register */
#define INTC_PSR440          INTC.PSR[440].R               /* INTC Priority Select Register */
#define INTC_PSR441          INTC.PSR[441].R               /* INTC Priority Select Register */
#define INTC_PSR442          INTC.PSR[442].R               /* INTC Priority Select Register */
#define INTC_PSR443          INTC.PSR[443].R               /* INTC Priority Select Register */
#define INTC_PSR444          INTC.PSR[444].R               /* INTC Priority Select Register */
#define INTC_PSR445          INTC.PSR[445].R               /* INTC Priority Select Register */
#define INTC_PSR446          INTC.PSR[446].R               /* INTC Priority Select Register */
#define INTC_PSR447          INTC.PSR[447].R               /* INTC Priority Select Register */
#define INTC_PSR448          INTC.PSR[448].R               /* INTC Priority Select Register */
#define INTC_PSR449          INTC.PSR[449].R               /* INTC Priority Select Register */
#define INTC_PSR450          INTC.PSR[450].R               /* INTC Priority Select Register */
#define INTC_PSR451          INTC.PSR[451].R               /* INTC Priority Select Register */
#define INTC_PSR452          INTC.PSR[452].R               /* INTC Priority Select Register */
#define INTC_PSR453          INTC.PSR[453].R               /* INTC Priority Select Register */
#define INTC_PSR454          INTC.PSR[454].R               /* INTC Priority Select Register */
#define INTC_PSR455          INTC.PSR[455].R               /* INTC Priority Select Register */
#define INTC_PSR456          INTC.PSR[456].R               /* INTC Priority Select Register */
#define INTC_PSR457          INTC.PSR[457].R               /* INTC Priority Select Register */
#define INTC_PSR458          INTC.PSR[458].R               /* INTC Priority Select Register */
#define INTC_PSR459          INTC.PSR[459].R               /* INTC Priority Select Register */
#define INTC_PSR460          INTC.PSR[460].R               /* INTC Priority Select Register */
#define INTC_PSR461          INTC.PSR[461].R               /* INTC Priority Select Register */
#define INTC_PSR462          INTC.PSR[462].R               /* INTC Priority Select Register */
#define INTC_PSR463          INTC.PSR[463].R               /* INTC Priority Select Register */
#define INTC_PSR464          INTC.PSR[464].R               /* INTC Priority Select Register */
#define INTC_PSR465          INTC.PSR[465].R               /* INTC Priority Select Register */
#define INTC_PSR466          INTC.PSR[466].R               /* INTC Priority Select Register */
#define INTC_PSR467          INTC.PSR[467].R               /* INTC Priority Select Register */
#define INTC_PSR468          INTC.PSR[468].R               /* INTC Priority Select Register */
#define INTC_PSR469          INTC.PSR[469].R               /* INTC Priority Select Register */
#define INTC_PSR470          INTC.PSR[470].R               /* INTC Priority Select Register */
#define INTC_PSR471          INTC.PSR[471].R               /* INTC Priority Select Register */
#define INTC_PSR472          INTC.PSR[472].R               /* INTC Priority Select Register */
#define INTC_PSR473          INTC.PSR[473].R               /* INTC Priority Select Register */
#define INTC_PSR474          INTC.PSR[474].R               /* INTC Priority Select Register */
#define INTC_PSR475          INTC.PSR[475].R               /* INTC Priority Select Register */
#define INTC_PSR476          INTC.PSR[476].R               /* INTC Priority Select Register */
#define INTC_PSR477          INTC.PSR[477].R               /* INTC Priority Select Register */
#define INTC_PSR478          INTC.PSR[478].R               /* INTC Priority Select Register */
#define INTC_PSR479          INTC.PSR[479].R               /* INTC Priority Select Register */
#define INTC_PSR480          INTC.PSR[480].R               /* INTC Priority Select Register */
#define INTC_PSR481          INTC.PSR[481].R               /* INTC Priority Select Register */
#define INTC_PSR482          INTC.PSR[482].R               /* INTC Priority Select Register */
#define INTC_PSR483          INTC.PSR[483].R               /* INTC Priority Select Register */
#define INTC_PSR484          INTC.PSR[484].R               /* INTC Priority Select Register */
#define INTC_PSR485          INTC.PSR[485].R               /* INTC Priority Select Register */
#define INTC_PSR486          INTC.PSR[486].R               /* INTC Priority Select Register */
#define INTC_PSR487          INTC.PSR[487].R               /* INTC Priority Select Register */
#define INTC_PSR488          INTC.PSR[488].R               /* INTC Priority Select Register */
#define INTC_PSR489          INTC.PSR[489].R               /* INTC Priority Select Register */
#define INTC_PSR490          INTC.PSR[490].R               /* INTC Priority Select Register */
#define INTC_PSR491          INTC.PSR[491].R               /* INTC Priority Select Register */
#define INTC_PSR492          INTC.PSR[492].R               /* INTC Priority Select Register */
#define INTC_PSR493          INTC.PSR[493].R               /* INTC Priority Select Register */
#define INTC_PSR494          INTC.PSR[494].R               /* INTC Priority Select Register */
#define INTC_PSR495          INTC.PSR[495].R               /* INTC Priority Select Register */
#define INTC_PSR496          INTC.PSR[496].R               /* INTC Priority Select Register */
#define INTC_PSR497          INTC.PSR[497].R               /* INTC Priority Select Register */
#define INTC_PSR498          INTC.PSR[498].R               /* INTC Priority Select Register */
#define INTC_PSR499          INTC.PSR[499].R               /* INTC Priority Select Register */
#define INTC_PSR500          INTC.PSR[500].R               /* INTC Priority Select Register */
#define INTC_PSR501          INTC.PSR[501].R               /* INTC Priority Select Register */
#define INTC_PSR502          INTC.PSR[502].R               /* INTC Priority Select Register */
#define INTC_PSR503          INTC.PSR[503].R               /* INTC Priority Select Register */
#define INTC_PSR504          INTC.PSR[504].R               /* INTC Priority Select Register */
#define INTC_PSR505          INTC.PSR[505].R               /* INTC Priority Select Register */
#define INTC_PSR506          INTC.PSR[506].R               /* INTC Priority Select Register */
#define INTC_PSR507          INTC.PSR[507].R               /* INTC Priority Select Register */
#define INTC_PSR508          INTC.PSR[508].R               /* INTC Priority Select Register */
#define INTC_PSR509          INTC.PSR[509].R               /* INTC Priority Select Register */
#define INTC_PSR510          INTC.PSR[510].R               /* INTC Priority Select Register */
#define INTC_PSR511          INTC.PSR[511].R               /* INTC Priority Select Register */
#define INTC_PSR512          INTC.PSR[512].R               /* INTC Priority Select Register */
#define INTC_PSR513          INTC.PSR[513].R               /* INTC Priority Select Register */
#define INTC_PSR514          INTC.PSR[514].R               /* INTC Priority Select Register */
#define INTC_PSR515          INTC.PSR[515].R               /* INTC Priority Select Register */
#define INTC_PSR516          INTC.PSR[516].R               /* INTC Priority Select Register */
#define INTC_PSR517          INTC.PSR[517].R               /* INTC Priority Select Register */
#define INTC_PSR518          INTC.PSR[518].R               /* INTC Priority Select Register */
#define INTC_PSR519          INTC.PSR[519].R               /* INTC Priority Select Register */
#define INTC_PSR520          INTC.PSR[520].R               /* INTC Priority Select Register */
#define INTC_PSR521          INTC.PSR[521].R               /* INTC Priority Select Register */
#define INTC_PSR522          INTC.PSR[522].R               /* INTC Priority Select Register */
#define INTC_PSR523          INTC.PSR[523].R               /* INTC Priority Select Register */
#define INTC_PSR524          INTC.PSR[524].R               /* INTC Priority Select Register */
#define INTC_PSR525          INTC.PSR[525].R               /* INTC Priority Select Register */
#define INTC_PSR526          INTC.PSR[526].R               /* INTC Priority Select Register */
#define INTC_PSR527          INTC.PSR[527].R               /* INTC Priority Select Register */
#define INTC_PSR528          INTC.PSR[528].R               /* INTC Priority Select Register */
#define INTC_PSR529          INTC.PSR[529].R               /* INTC Priority Select Register */
#define INTC_PSR530          INTC.PSR[530].R               /* INTC Priority Select Register */
#define INTC_PSR531          INTC.PSR[531].R               /* INTC Priority Select Register */
#define INTC_PSR532          INTC.PSR[532].R               /* INTC Priority Select Register */
#define INTC_PSR533          INTC.PSR[533].R               /* INTC Priority Select Register */
#define INTC_PSR534          INTC.PSR[534].R               /* INTC Priority Select Register */
#define INTC_PSR535          INTC.PSR[535].R               /* INTC Priority Select Register */
#define INTC_PSR536          INTC.PSR[536].R               /* INTC Priority Select Register */
#define INTC_PSR537          INTC.PSR[537].R               /* INTC Priority Select Register */
#define INTC_PSR538          INTC.PSR[538].R               /* INTC Priority Select Register */
#define INTC_PSR539          INTC.PSR[539].R               /* INTC Priority Select Register */
#define INTC_PSR540          INTC.PSR[540].R               /* INTC Priority Select Register */
#define INTC_PSR541          INTC.PSR[541].R               /* INTC Priority Select Register */
#define INTC_PSR542          INTC.PSR[542].R               /* INTC Priority Select Register */
#define INTC_PSR543          INTC.PSR[543].R               /* INTC Priority Select Register */
#define INTC_PSR544          INTC.PSR[544].R               /* INTC Priority Select Register */
#define INTC_PSR545          INTC.PSR[545].R               /* INTC Priority Select Register */
#define INTC_PSR546          INTC.PSR[546].R               /* INTC Priority Select Register */
#define INTC_PSR547          INTC.PSR[547].R               /* INTC Priority Select Register */
#define INTC_PSR548          INTC.PSR[548].R               /* INTC Priority Select Register */
#define INTC_PSR549          INTC.PSR[549].R               /* INTC Priority Select Register */
#define INTC_PSR550          INTC.PSR[550].R               /* INTC Priority Select Register */
#define INTC_PSR551          INTC.PSR[551].R               /* INTC Priority Select Register */
#define INTC_PSR552          INTC.PSR[552].R               /* INTC Priority Select Register */
#define INTC_PSR553          INTC.PSR[553].R               /* INTC Priority Select Register */
#define INTC_PSR554          INTC.PSR[554].R               /* INTC Priority Select Register */
#define INTC_PSR555          INTC.PSR[555].R               /* INTC Priority Select Register */
#define INTC_PSR556          INTC.PSR[556].R               /* INTC Priority Select Register */
#define INTC_PSR557          INTC.PSR[557].R               /* INTC Priority Select Register */
#define INTC_PSR558          INTC.PSR[558].R               /* INTC Priority Select Register */
#define INTC_PSR559          INTC.PSR[559].R               /* INTC Priority Select Register */
#define INTC_PSR560          INTC.PSR[560].R               /* INTC Priority Select Register */
#define INTC_PSR561          INTC.PSR[561].R               /* INTC Priority Select Register */
#define INTC_PSR562          INTC.PSR[562].R               /* INTC Priority Select Register */
#define INTC_PSR563          INTC.PSR[563].R               /* INTC Priority Select Register */
#define INTC_PSR564          INTC.PSR[564].R               /* INTC Priority Select Register */
#define INTC_PSR565          INTC.PSR[565].R               /* INTC Priority Select Register */
#define INTC_PSR566          INTC.PSR[566].R               /* INTC Priority Select Register */
#define INTC_PSR567          INTC.PSR[567].R               /* INTC Priority Select Register */
#define INTC_PSR568          INTC.PSR[568].R               /* INTC Priority Select Register */
#define INTC_PSR569          INTC.PSR[569].R               /* INTC Priority Select Register */
#define INTC_PSR570          INTC.PSR[570].R               /* INTC Priority Select Register */
#define INTC_PSR571          INTC.PSR[571].R               /* INTC Priority Select Register */
#define INTC_PSR572          INTC.PSR[572].R               /* INTC Priority Select Register */
#define INTC_PSR573          INTC.PSR[573].R               /* INTC Priority Select Register */
#define INTC_PSR574          INTC.PSR[574].R               /* INTC Priority Select Register */
#define INTC_PSR575          INTC.PSR[575].R               /* INTC Priority Select Register */
#define INTC_PSR576          INTC.PSR[576].R               /* INTC Priority Select Register */
#define INTC_PSR577          INTC.PSR[577].R               /* INTC Priority Select Register */
#define INTC_PSR578          INTC.PSR[578].R               /* INTC Priority Select Register */
#define INTC_PSR579          INTC.PSR[579].R               /* INTC Priority Select Register */
#define INTC_PSR580          INTC.PSR[580].R               /* INTC Priority Select Register */
#define INTC_PSR581          INTC.PSR[581].R               /* INTC Priority Select Register */
#define INTC_PSR582          INTC.PSR[582].R               /* INTC Priority Select Register */
#define INTC_PSR583          INTC.PSR[583].R               /* INTC Priority Select Register */
#define INTC_PSR584          INTC.PSR[584].R               /* INTC Priority Select Register */
#define INTC_PSR585          INTC.PSR[585].R               /* INTC Priority Select Register */
#define INTC_PSR586          INTC.PSR[586].R               /* INTC Priority Select Register */
#define INTC_PSR587          INTC.PSR[587].R               /* INTC Priority Select Register */
#define INTC_PSR588          INTC.PSR[588].R               /* INTC Priority Select Register */
#define INTC_PSR589          INTC.PSR[589].R               /* INTC Priority Select Register */
#define INTC_PSR590          INTC.PSR[590].R               /* INTC Priority Select Register */
#define INTC_PSR591          INTC.PSR[591].R               /* INTC Priority Select Register */
#define INTC_PSR592          INTC.PSR[592].R               /* INTC Priority Select Register */
#define INTC_PSR593          INTC.PSR[593].R               /* INTC Priority Select Register */
#define INTC_PSR594          INTC.PSR[594].R               /* INTC Priority Select Register */
#define INTC_PSR595          INTC.PSR[595].R               /* INTC Priority Select Register */
#define INTC_PSR596          INTC.PSR[596].R               /* INTC Priority Select Register */
#define INTC_PSR597          INTC.PSR[597].R               /* INTC Priority Select Register */
#define INTC_PSR598          INTC.PSR[598].R               /* INTC Priority Select Register */
#define INTC_PSR599          INTC.PSR[599].R               /* INTC Priority Select Register */
#define INTC_PSR600          INTC.PSR[600].R               /* INTC Priority Select Register */
#define INTC_PSR601          INTC.PSR[601].R               /* INTC Priority Select Register */
#define INTC_PSR602          INTC.PSR[602].R               /* INTC Priority Select Register */
#define INTC_PSR603          INTC.PSR[603].R               /* INTC Priority Select Register */
#define INTC_PSR604          INTC.PSR[604].R               /* INTC Priority Select Register */
#define INTC_PSR605          INTC.PSR[605].R               /* INTC Priority Select Register */
#define INTC_PSR606          INTC.PSR[606].R               /* INTC Priority Select Register */
#define INTC_PSR607          INTC.PSR[607].R               /* INTC Priority Select Register */
#define INTC_PSR608          INTC.PSR[608].R               /* INTC Priority Select Register */
#define INTC_PSR609          INTC.PSR[609].R               /* INTC Priority Select Register */
#define INTC_PSR610          INTC.PSR[610].R               /* INTC Priority Select Register */
#define INTC_PSR611          INTC.PSR[611].R               /* INTC Priority Select Register */
#define INTC_PSR612          INTC.PSR[612].R               /* INTC Priority Select Register */
#define INTC_PSR613          INTC.PSR[613].R               /* INTC Priority Select Register */
#define INTC_PSR614          INTC.PSR[614].R               /* INTC Priority Select Register */
#define INTC_PSR615          INTC.PSR[615].R               /* INTC Priority Select Register */
#define INTC_PSR616          INTC.PSR[616].R               /* INTC Priority Select Register */
#define INTC_PSR617          INTC.PSR[617].R               /* INTC Priority Select Register */
#define INTC_PSR618          INTC.PSR[618].R               /* INTC Priority Select Register */
#define INTC_PSR619          INTC.PSR[619].R               /* INTC Priority Select Register */
#define INTC_PSR620          INTC.PSR[620].R               /* INTC Priority Select Register */
#define INTC_PSR621          INTC.PSR[621].R               /* INTC Priority Select Register */
#define INTC_PSR622          INTC.PSR[622].R               /* INTC Priority Select Register */
#define INTC_PSR623          INTC.PSR[623].R               /* INTC Priority Select Register */
#define INTC_PSR624          INTC.PSR[624].R               /* INTC Priority Select Register */
#define INTC_PSR625          INTC.PSR[625].R               /* INTC Priority Select Register */
#define INTC_PSR626          INTC.PSR[626].R               /* INTC Priority Select Register */
#define INTC_PSR627          INTC.PSR[627].R               /* INTC Priority Select Register */
#define INTC_PSR628          INTC.PSR[628].R               /* INTC Priority Select Register */
#define INTC_PSR629          INTC.PSR[629].R               /* INTC Priority Select Register */
#define INTC_PSR630          INTC.PSR[630].R               /* INTC Priority Select Register */
#define INTC_PSR631          INTC.PSR[631].R               /* INTC Priority Select Register */
#define INTC_PSR632          INTC.PSR[632].R               /* INTC Priority Select Register */
#define INTC_PSR633          INTC.PSR[633].R               /* INTC Priority Select Register */
#define INTC_PSR634          INTC.PSR[634].R               /* INTC Priority Select Register */
#define INTC_PSR635          INTC.PSR[635].R               /* INTC Priority Select Register */
#define INTC_PSR636          INTC.PSR[636].R               /* INTC Priority Select Register */
#define INTC_PSR637          INTC.PSR[637].R               /* INTC Priority Select Register */
#define INTC_PSR638          INTC.PSR[638].R               /* INTC Priority Select Register */
#define INTC_PSR639          INTC.PSR[639].R               /* INTC Priority Select Register */
#define INTC_PSR640          INTC.PSR[640].R               /* INTC Priority Select Register */
#define INTC_PSR641          INTC.PSR[641].R               /* INTC Priority Select Register */
#define INTC_PSR642          INTC.PSR[642].R               /* INTC Priority Select Register */
#define INTC_PSR643          INTC.PSR[643].R               /* INTC Priority Select Register */
#define INTC_PSR644          INTC.PSR[644].R               /* INTC Priority Select Register */
#define INTC_PSR645          INTC.PSR[645].R               /* INTC Priority Select Register */
#define INTC_PSR646          INTC.PSR[646].R               /* INTC Priority Select Register */
#define INTC_PSR647          INTC.PSR[647].R               /* INTC Priority Select Register */
#define INTC_PSR648          INTC.PSR[648].R               /* INTC Priority Select Register */
#define INTC_PSR649          INTC.PSR[649].R               /* INTC Priority Select Register */
#define INTC_PSR650          INTC.PSR[650].R               /* INTC Priority Select Register */
#define INTC_PSR651          INTC.PSR[651].R               /* INTC Priority Select Register */
#define INTC_PSR652          INTC.PSR[652].R               /* INTC Priority Select Register */
#define INTC_PSR653          INTC.PSR[653].R               /* INTC Priority Select Register */
#define INTC_PSR654          INTC.PSR[654].R               /* INTC Priority Select Register */
#define INTC_PSR655          INTC.PSR[655].R               /* INTC Priority Select Register */
#define INTC_PSR656          INTC.PSR[656].R               /* INTC Priority Select Register */
#define INTC_PSR657          INTC.PSR[657].R               /* INTC Priority Select Register */
#define INTC_PSR658          INTC.PSR[658].R               /* INTC Priority Select Register */
#define INTC_PSR659          INTC.PSR[659].R               /* INTC Priority Select Register */
#define INTC_PSR660          INTC.PSR[660].R               /* INTC Priority Select Register */
#define INTC_PSR661          INTC.PSR[661].R               /* INTC Priority Select Register */
#define INTC_PSR662          INTC.PSR[662].R               /* INTC Priority Select Register */
#define INTC_PSR663          INTC.PSR[663].R               /* INTC Priority Select Register */
#define INTC_PSR664          INTC.PSR[664].R               /* INTC Priority Select Register */
#define INTC_PSR665          INTC.PSR[665].R               /* INTC Priority Select Register */
#define INTC_PSR666          INTC.PSR[666].R               /* INTC Priority Select Register */
#define INTC_PSR667          INTC.PSR[667].R               /* INTC Priority Select Register */
#define INTC_PSR668          INTC.PSR[668].R               /* INTC Priority Select Register */
#define INTC_PSR669          INTC.PSR[669].R               /* INTC Priority Select Register */
#define INTC_PSR670          INTC.PSR[670].R               /* INTC Priority Select Register */
#define INTC_PSR671          INTC.PSR[671].R               /* INTC Priority Select Register */
#define INTC_PSR672          INTC.PSR[672].R               /* INTC Priority Select Register */
#define INTC_PSR673          INTC.PSR[673].R               /* INTC Priority Select Register */
#define INTC_PSR674          INTC.PSR[674].R               /* INTC Priority Select Register */
#define INTC_PSR675          INTC.PSR[675].R               /* INTC Priority Select Register */
#define INTC_PSR676          INTC.PSR[676].R               /* INTC Priority Select Register */
#define INTC_PSR677          INTC.PSR[677].R               /* INTC Priority Select Register */
#define INTC_PSR678          INTC.PSR[678].R               /* INTC Priority Select Register */
#define INTC_PSR679          INTC.PSR[679].R               /* INTC Priority Select Register */
#define INTC_PSR680          INTC.PSR[680].R               /* INTC Priority Select Register */
#define INTC_PSR681          INTC.PSR[681].R               /* INTC Priority Select Register */
#define INTC_PSR682          INTC.PSR[682].R               /* INTC Priority Select Register */
#define INTC_PSR683          INTC.PSR[683].R               /* INTC Priority Select Register */
#define INTC_PSR684          INTC.PSR[684].R               /* INTC Priority Select Register */
#define INTC_PSR685          INTC.PSR[685].R               /* INTC Priority Select Register */
#define INTC_PSR686          INTC.PSR[686].R               /* INTC Priority Select Register */
#define INTC_PSR687          INTC.PSR[687].R               /* INTC Priority Select Register */
#define INTC_PSR688          INTC.PSR[688].R               /* INTC Priority Select Register */
#define INTC_PSR689          INTC.PSR[689].R               /* INTC Priority Select Register */
#define INTC_PSR690          INTC.PSR[690].R               /* INTC Priority Select Register */
#define INTC_PSR691          INTC.PSR[691].R               /* INTC Priority Select Register */
#define INTC_PSR692          INTC.PSR[692].R               /* INTC Priority Select Register */
#define INTC_PSR693          INTC.PSR[693].R               /* INTC Priority Select Register */
#define INTC_PSR694          INTC.PSR[694].R               /* INTC Priority Select Register */
#define INTC_PSR695          INTC.PSR[695].R               /* INTC Priority Select Register */
#define INTC_PSR696          INTC.PSR[696].R               /* INTC Priority Select Register */
#define INTC_PSR697          INTC.PSR[697].R               /* INTC Priority Select Register */
#define INTC_PSR698          INTC.PSR[698].R               /* INTC Priority Select Register */
#define INTC_PSR699          INTC.PSR[699].R               /* INTC Priority Select Register */
#define INTC_PSR700          INTC.PSR[700].R               /* INTC Priority Select Register */
#define INTC_PSR701          INTC.PSR[701].R               /* INTC Priority Select Register */
#define INTC_PSR702          INTC.PSR[702].R               /* INTC Priority Select Register */
#define INTC_PSR703          INTC.PSR[703].R               /* INTC Priority Select Register */
#define INTC_PSR704          INTC.PSR[704].R               /* INTC Priority Select Register */
#define INTC_PSR705          INTC.PSR[705].R               /* INTC Priority Select Register */
#define INTC_PSR706          INTC.PSR[706].R               /* INTC Priority Select Register */
#define INTC_PSR707          INTC.PSR[707].R               /* INTC Priority Select Register */
#define INTC_PSR708          INTC.PSR[708].R               /* INTC Priority Select Register */
#define INTC_PSR709          INTC.PSR[709].R               /* INTC Priority Select Register */
#define INTC_PSR710          INTC.PSR[710].R               /* INTC Priority Select Register */
#define INTC_PSR711          INTC.PSR[711].R               /* INTC Priority Select Register */
#define INTC_PSR712          INTC.PSR[712].R               /* INTC Priority Select Register */
#define INTC_PSR713          INTC.PSR[713].R               /* INTC Priority Select Register */
#define INTC_PSR714          INTC.PSR[714].R               /* INTC Priority Select Register */
#define INTC_PSR715          INTC.PSR[715].R               /* INTC Priority Select Register */
#define INTC_PSR716          INTC.PSR[716].R               /* INTC Priority Select Register */
#define INTC_PSR717          INTC.PSR[717].R               /* INTC Priority Select Register */
#define INTC_PSR718          INTC.PSR[718].R               /* INTC Priority Select Register */
#define INTC_PSR719          INTC.PSR[719].R               /* INTC Priority Select Register */
#define INTC_PSR720          INTC.PSR[720].R               /* INTC Priority Select Register */
#define INTC_PSR721          INTC.PSR[721].R               /* INTC Priority Select Register */
#define INTC_PSR722          INTC.PSR[722].R               /* INTC Priority Select Register */
#define INTC_PSR723          INTC.PSR[723].R               /* INTC Priority Select Register */
#define INTC_PSR724          INTC.PSR[724].R               /* INTC Priority Select Register */
#define INTC_PSR725          INTC.PSR[725].R               /* INTC Priority Select Register */
#define INTC_PSR726          INTC.PSR[726].R               /* INTC Priority Select Register */
#define INTC_PSR727          INTC.PSR[727].R               /* INTC Priority Select Register */
#define INTC_PSR728          INTC.PSR[728].R               /* INTC Priority Select Register */
#define INTC_PSR729          INTC.PSR[729].R               /* INTC Priority Select Register */
#define INTC_PSR730          INTC.PSR[730].R               /* INTC Priority Select Register */
#define INTC_PSR731          INTC.PSR[731].R               /* INTC Priority Select Register */
#define INTC_PSR732          INTC.PSR[732].R               /* INTC Priority Select Register */
#define INTC_PSR733          INTC.PSR[733].R               /* INTC Priority Select Register */
#define INTC_PSR734          INTC.PSR[734].R               /* INTC Priority Select Register */
#define INTC_PSR735          INTC.PSR[735].R               /* INTC Priority Select Register */
#define INTC_PSR736          INTC.PSR[736].R               /* INTC Priority Select Register */
#define INTC_PSR737          INTC.PSR[737].R               /* INTC Priority Select Register */
#define INTC_PSR738          INTC.PSR[738].R               /* INTC Priority Select Register */
#define INTC_PSR739          INTC.PSR[739].R               /* INTC Priority Select Register */
#define INTC_PSR740          INTC.PSR[740].R               /* INTC Priority Select Register */
#define INTC_PSR741          INTC.PSR[741].R               /* INTC Priority Select Register */
#define INTC_PSR742          INTC.PSR[742].R               /* INTC Priority Select Register */
#define INTC_PSR743          INTC.PSR[743].R               /* INTC Priority Select Register */
#define INTC_PSR744          INTC.PSR[744].R               /* INTC Priority Select Register */
#define INTC_PSR745          INTC.PSR[745].R               /* INTC Priority Select Register */
#define INTC_PSR746          INTC.PSR[746].R               /* INTC Priority Select Register */
#define INTC_PSR747          INTC.PSR[747].R               /* INTC Priority Select Register */
#define INTC_PSR748          INTC.PSR[748].R               /* INTC Priority Select Register */
#define INTC_PSR749          INTC.PSR[749].R               /* INTC Priority Select Register */
#define INTC_PSR750          INTC.PSR[750].R               /* INTC Priority Select Register */
#define INTC_PSR751          INTC.PSR[751].R               /* INTC Priority Select Register */
#define INTC_PSR752          INTC.PSR[752].R               /* INTC Priority Select Register */
#define INTC_PSR753          INTC.PSR[753].R               /* INTC Priority Select Register */
#define INTC_PSR754          INTC.PSR[754].R               /* INTC Priority Select Register */
#define INTC_PSR755          INTC.PSR[755].R               /* INTC Priority Select Register */
#define INTC_PSR756          INTC.PSR[756].R               /* INTC Priority Select Register */
#define INTC_PSR757          INTC.PSR[757].R               /* INTC Priority Select Register */
#define INTC_PSR758          INTC.PSR[758].R               /* INTC Priority Select Register */
#define INTC_PSR759          INTC.PSR[759].R               /* INTC Priority Select Register */
#define INTC_PSR760          INTC.PSR[760].R               /* INTC Priority Select Register */
#define INTC_PSR761          INTC.PSR[761].R               /* INTC Priority Select Register */
#define INTC_PSR762          INTC.PSR[762].R               /* INTC Priority Select Register */
#define INTC_PSR763          INTC.PSR[763].R               /* INTC Priority Select Register */
#define INTC_PSR764          INTC.PSR[764].R               /* INTC Priority Select Register */
#define INTC_PSR765          INTC.PSR[765].R               /* INTC Priority Select Register */
#define INTC_PSR766          INTC.PSR[766].R               /* INTC Priority Select Register */
#define INTC_PSR767          INTC.PSR[767].R               /* INTC Priority Select Register */
#define INTC_PSR768          INTC.PSR[768].R               /* INTC Priority Select Register */
#define INTC_PSR769          INTC.PSR[769].R               /* INTC Priority Select Register */
#define INTC_PSR770          INTC.PSR[770].R               /* INTC Priority Select Register */
#define INTC_PSR771          INTC.PSR[771].R               /* INTC Priority Select Register */
#define INTC_PSR772          INTC.PSR[772].R               /* INTC Priority Select Register */
#define INTC_PSR773          INTC.PSR[773].R               /* INTC Priority Select Register */
#define INTC_PSR774          INTC.PSR[774].R               /* INTC Priority Select Register */
#define INTC_PSR775          INTC.PSR[775].R               /* INTC Priority Select Register */
#define INTC_PSR776          INTC.PSR[776].R               /* INTC Priority Select Register */
#define INTC_PSR777          INTC.PSR[777].R               /* INTC Priority Select Register */
#define INTC_PSR778          INTC.PSR[778].R               /* INTC Priority Select Register */
#define INTC_PSR779          INTC.PSR[779].R               /* INTC Priority Select Register */
#define INTC_PSR780          INTC.PSR[780].R               /* INTC Priority Select Register */
#define INTC_PSR781          INTC.PSR[781].R               /* INTC Priority Select Register */
#define INTC_PSR782          INTC.PSR[782].R               /* INTC Priority Select Register */
#define INTC_PSR783          INTC.PSR[783].R               /* INTC Priority Select Register */
#define INTC_PSR784          INTC.PSR[784].R               /* INTC Priority Select Register */
#define INTC_PSR785          INTC.PSR[785].R               /* INTC Priority Select Register */
#define INTC_PSR786          INTC.PSR[786].R               /* INTC Priority Select Register */
#define INTC_PSR787          INTC.PSR[787].R               /* INTC Priority Select Register */
#define INTC_PSR788          INTC.PSR[788].R               /* INTC Priority Select Register */
#define INTC_PSR789          INTC.PSR[789].R               /* INTC Priority Select Register */
#define INTC_PSR790          INTC.PSR[790].R               /* INTC Priority Select Register */
#define INTC_PSR791          INTC.PSR[791].R               /* INTC Priority Select Register */
#define INTC_PSR792          INTC.PSR[792].R               /* INTC Priority Select Register */
#define INTC_PSR793          INTC.PSR[793].R               /* INTC Priority Select Register */
#define INTC_PSR794          INTC.PSR[794].R               /* INTC Priority Select Register */
#define INTC_PSR795          INTC.PSR[795].R               /* INTC Priority Select Register */
#define INTC_PSR796          INTC.PSR[796].R               /* INTC Priority Select Register */
#define INTC_PSR797          INTC.PSR[797].R               /* INTC Priority Select Register */
#define INTC_PSR798          INTC.PSR[798].R               /* INTC Priority Select Register */
#define INTC_PSR799          INTC.PSR[799].R               /* INTC Priority Select Register */
#define INTC_PSR800          INTC.PSR[800].R               /* INTC Priority Select Register */
#define INTC_PSR801          INTC.PSR[801].R               /* INTC Priority Select Register */
#define INTC_PSR802          INTC.PSR[802].R               /* INTC Priority Select Register */
#define INTC_PSR803          INTC.PSR[803].R               /* INTC Priority Select Register */
#define INTC_PSR804          INTC.PSR[804].R               /* INTC Priority Select Register */
#define INTC_PSR805          INTC.PSR[805].R               /* INTC Priority Select Register */
#define INTC_PSR806          INTC.PSR[806].R               /* INTC Priority Select Register */
#define INTC_PSR807          INTC.PSR[807].R               /* INTC Priority Select Register */
#define INTC_PSR808          INTC.PSR[808].R               /* INTC Priority Select Register */
#define INTC_PSR809          INTC.PSR[809].R               /* INTC Priority Select Register */
#define INTC_PSR810          INTC.PSR[810].R               /* INTC Priority Select Register */
#define INTC_PSR811          INTC.PSR[811].R               /* INTC Priority Select Register */
#define INTC_PSR812          INTC.PSR[812].R               /* INTC Priority Select Register */
#define INTC_PSR813          INTC.PSR[813].R               /* INTC Priority Select Register */
#define INTC_PSR814          INTC.PSR[814].R               /* INTC Priority Select Register */
#define INTC_PSR815          INTC.PSR[815].R               /* INTC Priority Select Register */
#define INTC_PSR816          INTC.PSR[816].R               /* INTC Priority Select Register */
#define INTC_PSR817          INTC.PSR[817].R               /* INTC Priority Select Register */
#define INTC_PSR818          INTC.PSR[818].R               /* INTC Priority Select Register */
#define INTC_PSR819          INTC.PSR[819].R               /* INTC Priority Select Register */
#define INTC_PSR820          INTC.PSR[820].R               /* INTC Priority Select Register */
#define INTC_PSR821          INTC.PSR[821].R               /* INTC Priority Select Register */
#define INTC_PSR822          INTC.PSR[822].R               /* INTC Priority Select Register */
#define INTC_PSR823          INTC.PSR[823].R               /* INTC Priority Select Register */
#define INTC_PSR824          INTC.PSR[824].R               /* INTC Priority Select Register */
#define INTC_PSR825          INTC.PSR[825].R               /* INTC Priority Select Register */
#define INTC_PSR826          INTC.PSR[826].R               /* INTC Priority Select Register */
#define INTC_PSR827          INTC.PSR[827].R               /* INTC Priority Select Register */
#define INTC_PSR828          INTC.PSR[828].R               /* INTC Priority Select Register */
#define INTC_PSR829          INTC.PSR[829].R               /* INTC Priority Select Register */
#define INTC_PSR830          INTC.PSR[830].R               /* INTC Priority Select Register */
#define INTC_PSR831          INTC.PSR[831].R               /* INTC Priority Select Register */
#define INTC_PSR832          INTC.PSR[832].R               /* INTC Priority Select Register */
#define INTC_PSR833          INTC.PSR[833].R               /* INTC Priority Select Register */
#define INTC_PSR834          INTC.PSR[834].R               /* INTC Priority Select Register */
#define INTC_PSR835          INTC.PSR[835].R               /* INTC Priority Select Register */
#define INTC_PSR836          INTC.PSR[836].R               /* INTC Priority Select Register */
#define INTC_PSR837          INTC.PSR[837].R               /* INTC Priority Select Register */
#define INTC_PSR838          INTC.PSR[838].R               /* INTC Priority Select Register */
#define INTC_PSR839          INTC.PSR[839].R               /* INTC Priority Select Register */
#define INTC_PSR840          INTC.PSR[840].R               /* INTC Priority Select Register */
#define INTC_PSR841          INTC.PSR[841].R               /* INTC Priority Select Register */
#define INTC_PSR842          INTC.PSR[842].R               /* INTC Priority Select Register */
#define INTC_PSR843          INTC.PSR[843].R               /* INTC Priority Select Register */
#define INTC_PSR844          INTC.PSR[844].R               /* INTC Priority Select Register */
#define INTC_PSR845          INTC.PSR[845].R               /* INTC Priority Select Register */
#define INTC_PSR846          INTC.PSR[846].R               /* INTC Priority Select Register */
#define INTC_PSR847          INTC.PSR[847].R               /* INTC Priority Select Register */
#define INTC_PSR848          INTC.PSR[848].R               /* INTC Priority Select Register */
#define INTC_PSR849          INTC.PSR[849].R               /* INTC Priority Select Register */
#define INTC_PSR850          INTC.PSR[850].R               /* INTC Priority Select Register */
#define INTC_PSR851          INTC.PSR[851].R               /* INTC Priority Select Register */
#define INTC_PSR852          INTC.PSR[852].R               /* INTC Priority Select Register */
#define INTC_PSR853          INTC.PSR[853].R               /* INTC Priority Select Register */
#define INTC_PSR854          INTC.PSR[854].R               /* INTC Priority Select Register */
#define INTC_PSR855          INTC.PSR[855].R               /* INTC Priority Select Register */
#define INTC_PSR856          INTC.PSR[856].R               /* INTC Priority Select Register */
#define INTC_PSR857          INTC.PSR[857].R               /* INTC Priority Select Register */
#define INTC_PSR858          INTC.PSR[858].R               /* INTC Priority Select Register */
#define INTC_PSR859          INTC.PSR[859].R               /* INTC Priority Select Register */
#define INTC_PSR860          INTC.PSR[860].R               /* INTC Priority Select Register */
#define INTC_PSR861          INTC.PSR[861].R               /* INTC Priority Select Register */
#define INTC_PSR862          INTC.PSR[862].R               /* INTC Priority Select Register */
#define INTC_PSR863          INTC.PSR[863].R               /* INTC Priority Select Register */
#define INTC_PSR864          INTC.PSR[864].R               /* INTC Priority Select Register */
#define INTC_PSR865          INTC.PSR[865].R               /* INTC Priority Select Register */
#define INTC_PSR866          INTC.PSR[866].R               /* INTC Priority Select Register */
#define INTC_PSR867          INTC.PSR[867].R               /* INTC Priority Select Register */
#define INTC_PSR868          INTC.PSR[868].R               /* INTC Priority Select Register */
#define INTC_PSR869          INTC.PSR[869].R               /* INTC Priority Select Register */
#define INTC_PSR870          INTC.PSR[870].R               /* INTC Priority Select Register */
#define INTC_PSR871          INTC.PSR[871].R               /* INTC Priority Select Register */
#define INTC_PSR872          INTC.PSR[872].R               /* INTC Priority Select Register */
#define INTC_PSR873          INTC.PSR[873].R               /* INTC Priority Select Register */
#define INTC_PSR874          INTC.PSR[874].R               /* INTC Priority Select Register */
#define INTC_PSR875          INTC.PSR[875].R               /* INTC Priority Select Register */
#define INTC_PSR876          INTC.PSR[876].R               /* INTC Priority Select Register */
#define INTC_PSR877          INTC.PSR[877].R               /* INTC Priority Select Register */
#define INTC_PSR878          INTC.PSR[878].R               /* INTC Priority Select Register */
#define INTC_PSR879          INTC.PSR[879].R               /* INTC Priority Select Register */
#define INTC_PSR880          INTC.PSR[880].R               /* INTC Priority Select Register */
#define INTC_PSR881          INTC.PSR[881].R               /* INTC Priority Select Register */
#define INTC_PSR882          INTC.PSR[882].R               /* INTC Priority Select Register */
#define INTC_PSR883          INTC.PSR[883].R               /* INTC Priority Select Register */
#define INTC_PSR884          INTC.PSR[884].R               /* INTC Priority Select Register */
#define INTC_PSR885          INTC.PSR[885].R               /* INTC Priority Select Register */
#define INTC_PSR886          INTC.PSR[886].R               /* INTC Priority Select Register */
#define INTC_PSR887          INTC.PSR[887].R               /* INTC Priority Select Register */
#define INTC_PSR888          INTC.PSR[888].R               /* INTC Priority Select Register */
#define INTC_PSR889          INTC.PSR[889].R               /* INTC Priority Select Register */
#define INTC_PSR890          INTC.PSR[890].R               /* INTC Priority Select Register */
#define INTC_PSR891          INTC.PSR[891].R               /* INTC Priority Select Register */
#define INTC_PSR892          INTC.PSR[892].R               /* INTC Priority Select Register */
#define INTC_PSR893          INTC.PSR[893].R               /* INTC Priority Select Register */
#define INTC_PSR894          INTC.PSR[894].R               /* INTC Priority Select Register */
#define INTC_PSR895          INTC.PSR[895].R               /* INTC Priority Select Register */
#define INTC_PSR896          INTC.PSR[896].R               /* INTC Priority Select Register */
#define INTC_PSR897          INTC.PSR[897].R               /* INTC Priority Select Register */
#define INTC_PSR898          INTC.PSR[898].R               /* INTC Priority Select Register */
#define INTC_PSR899          INTC.PSR[899].R               /* INTC Priority Select Register */
#define INTC_PSR900          INTC.PSR[900].R               /* INTC Priority Select Register */
#define INTC_PSR901          INTC.PSR[901].R               /* INTC Priority Select Register */
#define INTC_PSR902          INTC.PSR[902].R               /* INTC Priority Select Register */
#define INTC_PSR903          INTC.PSR[903].R               /* INTC Priority Select Register */
#define INTC_PSR904          INTC.PSR[904].R               /* INTC Priority Select Register */
#define INTC_PSR905          INTC.PSR[905].R               /* INTC Priority Select Register */
#define INTC_PSR906          INTC.PSR[906].R               /* INTC Priority Select Register */
#define INTC_PSR907          INTC.PSR[907].R               /* INTC Priority Select Register */
#define INTC_PSR908          INTC.PSR[908].R               /* INTC Priority Select Register */
#define INTC_PSR909          INTC.PSR[909].R               /* INTC Priority Select Register */
#define INTC_PSR910          INTC.PSR[910].R               /* INTC Priority Select Register */
#define INTC_PSR911          INTC.PSR[911].R               /* INTC Priority Select Register */
#define INTC_PSR912          INTC.PSR[912].R               /* INTC Priority Select Register */
#define INTC_PSR913          INTC.PSR[913].R               /* INTC Priority Select Register */
#define INTC_PSR914          INTC.PSR[914].R               /* INTC Priority Select Register */
#define INTC_PSR915          INTC.PSR[915].R               /* INTC Priority Select Register */
#define INTC_PSR916          INTC.PSR[916].R               /* INTC Priority Select Register */
#define INTC_PSR917          INTC.PSR[917].R               /* INTC Priority Select Register */
#define INTC_PSR918          INTC.PSR[918].R               /* INTC Priority Select Register */
#define INTC_PSR919          INTC.PSR[919].R               /* INTC Priority Select Register */
#define INTC_PSR920          INTC.PSR[920].R               /* INTC Priority Select Register */
#define INTC_PSR921          INTC.PSR[921].R               /* INTC Priority Select Register */
#define INTC_PSR922          INTC.PSR[922].R               /* INTC Priority Select Register */
#define INTC_PSR923          INTC.PSR[923].R               /* INTC Priority Select Register */
#define INTC_PSR924          INTC.PSR[924].R               /* INTC Priority Select Register */
#define INTC_PSR925          INTC.PSR[925].R               /* INTC Priority Select Register */
#define INTC_PSR926          INTC.PSR[926].R               /* INTC Priority Select Register */
#define INTC_PSR927          INTC.PSR[927].R               /* INTC Priority Select Register */
#define INTC_PSR928          INTC.PSR[928].R               /* INTC Priority Select Register */
#define INTC_PSR929          INTC.PSR[929].R               /* INTC Priority Select Register */
#define INTC_PSR930          INTC.PSR[930].R               /* INTC Priority Select Register */
#define INTC_PSR931          INTC.PSR[931].R               /* INTC Priority Select Register */
#define INTC_PSR932          INTC.PSR[932].R               /* INTC Priority Select Register */
#define INTC_PSR933          INTC.PSR[933].R               /* INTC Priority Select Register */
#define INTC_PSR934          INTC.PSR[934].R               /* INTC Priority Select Register */
#define INTC_PSR935          INTC.PSR[935].R               /* INTC Priority Select Register */
#define INTC_PSR936          INTC.PSR[936].R               /* INTC Priority Select Register */
#define INTC_PSR937          INTC.PSR[937].R               /* INTC Priority Select Register */
#define INTC_PSR938          INTC.PSR[938].R               /* INTC Priority Select Register */
#define INTC_PSR939          INTC.PSR[939].R               /* INTC Priority Select Register */
#define INTC_PSR940          INTC.PSR[940].R               /* INTC Priority Select Register */
#define INTC_PSR941          INTC.PSR[941].R               /* INTC Priority Select Register */
#define INTC_PSR942          INTC.PSR[942].R               /* INTC Priority Select Register */
#define INTC_PSR943          INTC.PSR[943].R               /* INTC Priority Select Register */
#define INTC_PSR944          INTC.PSR[944].R               /* INTC Priority Select Register */
#define INTC_PSR945          INTC.PSR[945].R               /* INTC Priority Select Register */
#define INTC_PSR946          INTC.PSR[946].R               /* INTC Priority Select Register */
#define INTC_PSR947          INTC.PSR[947].R               /* INTC Priority Select Register */
#define INTC_PSR948          INTC.PSR[948].R               /* INTC Priority Select Register */
#define INTC_PSR949          INTC.PSR[949].R               /* INTC Priority Select Register */
#define INTC_PSR950          INTC.PSR[950].R               /* INTC Priority Select Register */
#define INTC_PSR951          INTC.PSR[951].R               /* INTC Priority Select Register */
#define INTC_PSR952          INTC.PSR[952].R               /* INTC Priority Select Register */
#define INTC_PSR953          INTC.PSR[953].R               /* INTC Priority Select Register */
#define INTC_PSR954          INTC.PSR[954].R               /* INTC Priority Select Register */
#define INTC_PSR955          INTC.PSR[955].R               /* INTC Priority Select Register */
#define INTC_PSR956          INTC.PSR[956].R               /* INTC Priority Select Register */
#define INTC_PSR957          INTC.PSR[957].R               /* INTC Priority Select Register */
#define INTC_PSR958          INTC.PSR[958].R               /* INTC Priority Select Register */
#define INTC_PSR959          INTC.PSR[959].R               /* INTC Priority Select Register */
#define INTC_PSR960          INTC.PSR[960].R               /* INTC Priority Select Register */
#define INTC_PSR961          INTC.PSR[961].R               /* INTC Priority Select Register */
#define INTC_PSR962          INTC.PSR[962].R               /* INTC Priority Select Register */
#define INTC_PSR963          INTC.PSR[963].R               /* INTC Priority Select Register */
#define INTC_PSR964          INTC.PSR[964].R               /* INTC Priority Select Register */
#define INTC_PSR965          INTC.PSR[965].R               /* INTC Priority Select Register */
#define INTC_PSR966          INTC.PSR[966].R               /* INTC Priority Select Register */
#define INTC_PSR967          INTC.PSR[967].R               /* INTC Priority Select Register */
#define INTC_PSR968          INTC.PSR[968].R               /* INTC Priority Select Register */
#define INTC_PSR969          INTC.PSR[969].R               /* INTC Priority Select Register */
#define INTC_PSR970          INTC.PSR[970].R               /* INTC Priority Select Register */
#define INTC_PSR971          INTC.PSR[971].R               /* INTC Priority Select Register */
#define INTC_PSR972          INTC.PSR[972].R               /* INTC Priority Select Register */
#define INTC_PSR973          INTC.PSR[973].R               /* INTC Priority Select Register */
#define INTC_PSR974          INTC.PSR[974].R               /* INTC Priority Select Register */
#define INTC_PSR975          INTC.PSR[975].R               /* INTC Priority Select Register */
#define INTC_PSR976          INTC.PSR[976].R               /* INTC Priority Select Register */
#define INTC_PSR977          INTC.PSR[977].R               /* INTC Priority Select Register */
#define INTC_PSR978          INTC.PSR[978].R               /* INTC Priority Select Register */
#define INTC_PSR979          INTC.PSR[979].R               /* INTC Priority Select Register */
#define INTC_PSR980          INTC.PSR[980].R               /* INTC Priority Select Register */
#define INTC_PSR981          INTC.PSR[981].R               /* INTC Priority Select Register */
#define INTC_PSR982          INTC.PSR[982].R               /* INTC Priority Select Register */
#define INTC_PSR983          INTC.PSR[983].R               /* INTC Priority Select Register */
#define INTC_PSR984          INTC.PSR[984].R               /* INTC Priority Select Register */
#define INTC_PSR985          INTC.PSR[985].R               /* INTC Priority Select Register */
#define INTC_PSR986          INTC.PSR[986].R               /* INTC Priority Select Register */
#define INTC_PSR987          INTC.PSR[987].R               /* INTC Priority Select Register */
#define INTC_PSR988          INTC.PSR[988].R               /* INTC Priority Select Register */
#define INTC_PSR989          INTC.PSR[989].R               /* INTC Priority Select Register */
#define INTC_PSR990          INTC.PSR[990].R               /* INTC Priority Select Register */
#define INTC_PSR991          INTC.PSR[991].R               /* INTC Priority Select Register */
#define INTC_PSR992          INTC.PSR[992].R               /* INTC Priority Select Register */
#define INTC_PSR993          INTC.PSR[993].R               /* INTC Priority Select Register */
#define INTC_PSR994          INTC.PSR[994].R               /* INTC Priority Select Register */
#define INTC_PSR995          INTC.PSR[995].R               /* INTC Priority Select Register */
#define INTC_PSR996          INTC.PSR[996].R               /* INTC Priority Select Register */
#define INTC_PSR997          INTC.PSR[997].R               /* INTC Priority Select Register */
#define INTC_PSR998          INTC.PSR[998].R               /* INTC Priority Select Register */
#define INTC_PSR999          INTC.PSR[999].R               /* INTC Priority Select Register */
#define INTC_PSR1000         INTC.PSR[1000].R              /* INTC Priority Select Register */
#define INTC_PSR1001         INTC.PSR[1001].R              /* INTC Priority Select Register */
#define INTC_PSR1002         INTC.PSR[1002].R              /* INTC Priority Select Register */
#define INTC_PSR1003         INTC.PSR[1003].R              /* INTC Priority Select Register */
#define INTC_PSR1004         INTC.PSR[1004].R              /* INTC Priority Select Register */
#define INTC_PSR1005         INTC.PSR[1005].R              /* INTC Priority Select Register */
#define INTC_PSR1006         INTC.PSR[1006].R              /* INTC Priority Select Register */
#define INTC_PSR1007         INTC.PSR[1007].R              /* INTC Priority Select Register */
#define INTC_PSR1008         INTC.PSR[1008].R              /* INTC Priority Select Register */
#define INTC_PSR1009         INTC.PSR[1009].R              /* INTC Priority Select Register */
#define INTC_PSR1010         INTC.PSR[1010].R              /* INTC Priority Select Register */
#define INTC_PSR1011         INTC.PSR[1011].R              /* INTC Priority Select Register */
#define INTC_PSR1012         INTC.PSR[1012].R              /* INTC Priority Select Register */
#define INTC_PSR1013         INTC.PSR[1013].R              /* INTC Priority Select Register */
#define INTC_PSR1014         INTC.PSR[1014].R              /* INTC Priority Select Register */
#define INTC_PSR1015         INTC.PSR[1015].R              /* INTC Priority Select Register */
#define INTC_PSR1016         INTC.PSR[1016].R              /* INTC Priority Select Register */
#define INTC_PSR1017         INTC.PSR[1017].R              /* INTC Priority Select Register */
#define INTC_PSR1018         INTC.PSR[1018].R              /* INTC Priority Select Register */
#define INTC_PSR1019         INTC.PSR[1019].R              /* INTC Priority Select Register */
#define INTC_PSR1020         INTC.PSR[1020].R              /* INTC Priority Select Register */
#define INTC_PSR1021         INTC.PSR[1021].R              /* INTC Priority Select Register */
#define INTC_PSR1022         INTC.PSR[1022].R              /* INTC Priority Select Register */
#define INTC_PSR1023         INTC.PSR[1023].R              /* INTC Priority Select Register */

/* JDC */
#define JDC_MCR              JDC.MCR.R                     /* Module Configuration Register */
#define JDC_MSR              JDC.MSR.R                     /* Module Status Register */
#define JDC_JOUT_IPS         JDC.JOUT_IPS.R                /* JTAG Output Data Register */
#define JDC_JIN_IPS          JDC.JIN_IPS.R                 /* JTAG Input Data Register */

/* LINFlexD */
#define LINFlexD_0_LINCR1    LINFlexD_0.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_0_LINIER    LINFlexD_0.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_0_LINSR     LINFlexD_0.LINSR.R            /* LIN Status Register */
#define LINFlexD_0_LINESR    LINFlexD_0.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_0_UARTCR    LINFlexD_0.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_0_UARTSR    LINFlexD_0.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_0_LINTCSR   LINFlexD_0.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_0_LINOCR    LINFlexD_0.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_0_LINTOCR   LINFlexD_0.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_0_LINFBRR   LINFlexD_0.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_0_LINIBRR   LINFlexD_0.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_0_LINCFR    LINFlexD_0.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_0_LINCR2    LINFlexD_0.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_0_BIDR      LINFlexD_0.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_0_BDRL      LINFlexD_0.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_0_BDRM      LINFlexD_0.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_0_IFER      LINFlexD_0.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_0_IFMI      LINFlexD_0.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_0_IFMR      LINFlexD_0.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_0_IFCR0     LINFlexD_0.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR1     LINFlexD_0.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR2     LINFlexD_0.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR3     LINFlexD_0.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR4     LINFlexD_0.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR5     LINFlexD_0.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR6     LINFlexD_0.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR7     LINFlexD_0.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR8     LINFlexD_0.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR9     LINFlexD_0.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR10    LINFlexD_0.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR11    LINFlexD_0.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR12    LINFlexD_0.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR13    LINFlexD_0.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR14    LINFlexD_0.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_0_IFCR15    LINFlexD_0.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_0_GCR       LINFlexD_0.GCR.R              /* Global Control Register */
#define LINFlexD_0_UARTPTO   LINFlexD_0.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_0_UARTCTO   LINFlexD_0.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_0_DMATXE    LINFlexD_0.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_0_DMARXE    LINFlexD_0.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_1_LINCR1    LINFlexD_1.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_1_LINIER    LINFlexD_1.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_1_LINSR     LINFlexD_1.LINSR.R            /* LIN Status Register */
#define LINFlexD_1_LINESR    LINFlexD_1.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_1_UARTCR    LINFlexD_1.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_1_UARTSR    LINFlexD_1.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_1_LINTCSR   LINFlexD_1.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_1_LINOCR    LINFlexD_1.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_1_LINTOCR   LINFlexD_1.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_1_LINFBRR   LINFlexD_1.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_1_LINIBRR   LINFlexD_1.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_1_LINCFR    LINFlexD_1.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_1_LINCR2    LINFlexD_1.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_1_BIDR      LINFlexD_1.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_1_BDRL      LINFlexD_1.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_1_BDRM      LINFlexD_1.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_1_IFER      LINFlexD_1.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_1_IFMI      LINFlexD_1.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_1_IFMR      LINFlexD_1.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_1_IFCR0     LINFlexD_1.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR1     LINFlexD_1.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR2     LINFlexD_1.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR3     LINFlexD_1.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR4     LINFlexD_1.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR5     LINFlexD_1.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR6     LINFlexD_1.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR7     LINFlexD_1.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR8     LINFlexD_1.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR9     LINFlexD_1.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR10    LINFlexD_1.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR11    LINFlexD_1.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR12    LINFlexD_1.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR13    LINFlexD_1.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR14    LINFlexD_1.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_1_IFCR15    LINFlexD_1.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_1_GCR       LINFlexD_1.GCR.R              /* Global Control Register */
#define LINFlexD_1_UARTPTO   LINFlexD_1.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_1_UARTCTO   LINFlexD_1.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_1_DMATXE    LINFlexD_1.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_1_DMARXE    LINFlexD_1.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_10_LINCR1   LINFlexD_10.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_10_LINIER   LINFlexD_10.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_10_LINSR    LINFlexD_10.LINSR.R           /* LIN Status Register */
#define LINFlexD_10_LINESR   LINFlexD_10.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_10_UARTCR   LINFlexD_10.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_10_UARTSR   LINFlexD_10.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_10_LINTCSR  LINFlexD_10.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_10_LINOCR   LINFlexD_10.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_10_LINTOCR  LINFlexD_10.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_10_LINFBRR  LINFlexD_10.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_10_LINIBRR  LINFlexD_10.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_10_LINCFR   LINFlexD_10.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_10_LINCR2   LINFlexD_10.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_10_BIDR     LINFlexD_10.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_10_BDRL     LINFlexD_10.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_10_BDRM     LINFlexD_10.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_10_IFER     LINFlexD_10.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_10_IFMI     LINFlexD_10.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_10_IFMR     LINFlexD_10.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_10_IFCR0    LINFlexD_10.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR1    LINFlexD_10.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR2    LINFlexD_10.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR3    LINFlexD_10.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR4    LINFlexD_10.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR5    LINFlexD_10.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR6    LINFlexD_10.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR7    LINFlexD_10.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR8    LINFlexD_10.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR9    LINFlexD_10.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR10   LINFlexD_10.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR11   LINFlexD_10.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR12   LINFlexD_10.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR13   LINFlexD_10.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR14   LINFlexD_10.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_10_IFCR15   LINFlexD_10.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_10_GCR      LINFlexD_10.GCR.R             /* Global Control Register */
#define LINFlexD_10_UARTPTO  LINFlexD_10.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_10_UARTCTO  LINFlexD_10.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_10_DMATXE   LINFlexD_10.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_10_DMARXE   LINFlexD_10.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_11_LINCR1   LINFlexD_11.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_11_LINIER   LINFlexD_11.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_11_LINSR    LINFlexD_11.LINSR.R           /* LIN Status Register */
#define LINFlexD_11_LINESR   LINFlexD_11.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_11_UARTCR   LINFlexD_11.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_11_UARTSR   LINFlexD_11.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_11_LINTCSR  LINFlexD_11.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_11_LINOCR   LINFlexD_11.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_11_LINTOCR  LINFlexD_11.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_11_LINFBRR  LINFlexD_11.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_11_LINIBRR  LINFlexD_11.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_11_LINCFR   LINFlexD_11.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_11_LINCR2   LINFlexD_11.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_11_BIDR     LINFlexD_11.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_11_BDRL     LINFlexD_11.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_11_BDRM     LINFlexD_11.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_11_IFER     LINFlexD_11.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_11_IFMI     LINFlexD_11.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_11_IFMR     LINFlexD_11.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_11_IFCR0    LINFlexD_11.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR1    LINFlexD_11.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR2    LINFlexD_11.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR3    LINFlexD_11.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR4    LINFlexD_11.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR5    LINFlexD_11.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR6    LINFlexD_11.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR7    LINFlexD_11.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR8    LINFlexD_11.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR9    LINFlexD_11.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR10   LINFlexD_11.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR11   LINFlexD_11.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR12   LINFlexD_11.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR13   LINFlexD_11.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR14   LINFlexD_11.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_11_IFCR15   LINFlexD_11.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_11_GCR      LINFlexD_11.GCR.R             /* Global Control Register */
#define LINFlexD_11_UARTPTO  LINFlexD_11.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_11_UARTCTO  LINFlexD_11.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_11_DMATXE   LINFlexD_11.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_11_DMARXE   LINFlexD_11.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_12_LINCR1   LINFlexD_12.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_12_LINIER   LINFlexD_12.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_12_LINSR    LINFlexD_12.LINSR.R           /* LIN Status Register */
#define LINFlexD_12_LINESR   LINFlexD_12.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_12_UARTCR   LINFlexD_12.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_12_UARTSR   LINFlexD_12.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_12_LINTCSR  LINFlexD_12.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_12_LINOCR   LINFlexD_12.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_12_LINTOCR  LINFlexD_12.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_12_LINFBRR  LINFlexD_12.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_12_LINIBRR  LINFlexD_12.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_12_LINCFR   LINFlexD_12.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_12_LINCR2   LINFlexD_12.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_12_BIDR     LINFlexD_12.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_12_BDRL     LINFlexD_12.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_12_BDRM     LINFlexD_12.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_12_IFER     LINFlexD_12.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_12_IFMI     LINFlexD_12.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_12_IFMR     LINFlexD_12.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_12_IFCR0    LINFlexD_12.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR1    LINFlexD_12.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR2    LINFlexD_12.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR3    LINFlexD_12.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR4    LINFlexD_12.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR5    LINFlexD_12.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR6    LINFlexD_12.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR7    LINFlexD_12.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR8    LINFlexD_12.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR9    LINFlexD_12.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR10   LINFlexD_12.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR11   LINFlexD_12.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR12   LINFlexD_12.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR13   LINFlexD_12.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR14   LINFlexD_12.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_12_IFCR15   LINFlexD_12.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_12_GCR      LINFlexD_12.GCR.R             /* Global Control Register */
#define LINFlexD_12_UARTPTO  LINFlexD_12.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_12_UARTCTO  LINFlexD_12.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_12_DMATXE   LINFlexD_12.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_12_DMARXE   LINFlexD_12.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_13_LINCR1   LINFlexD_13.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_13_LINIER   LINFlexD_13.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_13_LINSR    LINFlexD_13.LINSR.R           /* LIN Status Register */
#define LINFlexD_13_LINESR   LINFlexD_13.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_13_UARTCR   LINFlexD_13.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_13_UARTSR   LINFlexD_13.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_13_LINTCSR  LINFlexD_13.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_13_LINOCR   LINFlexD_13.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_13_LINTOCR  LINFlexD_13.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_13_LINFBRR  LINFlexD_13.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_13_LINIBRR  LINFlexD_13.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_13_LINCFR   LINFlexD_13.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_13_LINCR2   LINFlexD_13.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_13_BIDR     LINFlexD_13.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_13_BDRL     LINFlexD_13.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_13_BDRM     LINFlexD_13.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_13_IFER     LINFlexD_13.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_13_IFMI     LINFlexD_13.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_13_IFMR     LINFlexD_13.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_13_IFCR0    LINFlexD_13.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR1    LINFlexD_13.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR2    LINFlexD_13.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR3    LINFlexD_13.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR4    LINFlexD_13.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR5    LINFlexD_13.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR6    LINFlexD_13.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR7    LINFlexD_13.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR8    LINFlexD_13.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR9    LINFlexD_13.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR10   LINFlexD_13.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR11   LINFlexD_13.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR12   LINFlexD_13.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR13   LINFlexD_13.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR14   LINFlexD_13.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_13_IFCR15   LINFlexD_13.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_13_GCR      LINFlexD_13.GCR.R             /* Global Control Register */
#define LINFlexD_13_UARTPTO  LINFlexD_13.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_13_UARTCTO  LINFlexD_13.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_13_DMATXE   LINFlexD_13.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_13_DMARXE   LINFlexD_13.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_14_LINCR1   LINFlexD_14.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_14_LINIER   LINFlexD_14.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_14_LINSR    LINFlexD_14.LINSR.R           /* LIN Status Register */
#define LINFlexD_14_LINESR   LINFlexD_14.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_14_UARTCR   LINFlexD_14.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_14_UARTSR   LINFlexD_14.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_14_LINTCSR  LINFlexD_14.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_14_LINOCR   LINFlexD_14.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_14_LINTOCR  LINFlexD_14.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_14_LINFBRR  LINFlexD_14.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_14_LINIBRR  LINFlexD_14.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_14_LINCFR   LINFlexD_14.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_14_LINCR2   LINFlexD_14.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_14_BIDR     LINFlexD_14.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_14_BDRL     LINFlexD_14.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_14_BDRM     LINFlexD_14.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_14_IFER     LINFlexD_14.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_14_IFMI     LINFlexD_14.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_14_IFMR     LINFlexD_14.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_14_IFCR0    LINFlexD_14.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR1    LINFlexD_14.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR2    LINFlexD_14.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR3    LINFlexD_14.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR4    LINFlexD_14.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR5    LINFlexD_14.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR6    LINFlexD_14.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR7    LINFlexD_14.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR8    LINFlexD_14.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR9    LINFlexD_14.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR10   LINFlexD_14.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR11   LINFlexD_14.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR12   LINFlexD_14.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR13   LINFlexD_14.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR14   LINFlexD_14.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_14_IFCR15   LINFlexD_14.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_14_GCR      LINFlexD_14.GCR.R             /* Global Control Register */
#define LINFlexD_14_UARTPTO  LINFlexD_14.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_14_UARTCTO  LINFlexD_14.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_14_DMATXE   LINFlexD_14.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_14_DMARXE   LINFlexD_14.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_15_LINCR1   LINFlexD_15.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_15_LINIER   LINFlexD_15.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_15_LINSR    LINFlexD_15.LINSR.R           /* LIN Status Register */
#define LINFlexD_15_LINESR   LINFlexD_15.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_15_UARTCR   LINFlexD_15.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_15_UARTSR   LINFlexD_15.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_15_LINTCSR  LINFlexD_15.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_15_LINOCR   LINFlexD_15.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_15_LINTOCR  LINFlexD_15.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_15_LINFBRR  LINFlexD_15.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_15_LINIBRR  LINFlexD_15.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_15_LINCFR   LINFlexD_15.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_15_LINCR2   LINFlexD_15.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_15_BIDR     LINFlexD_15.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_15_BDRL     LINFlexD_15.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_15_BDRM     LINFlexD_15.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_15_IFER     LINFlexD_15.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_15_IFMI     LINFlexD_15.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_15_IFMR     LINFlexD_15.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_15_IFCR0    LINFlexD_15.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR1    LINFlexD_15.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR2    LINFlexD_15.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR3    LINFlexD_15.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR4    LINFlexD_15.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR5    LINFlexD_15.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR6    LINFlexD_15.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR7    LINFlexD_15.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR8    LINFlexD_15.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR9    LINFlexD_15.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR10   LINFlexD_15.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR11   LINFlexD_15.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR12   LINFlexD_15.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR13   LINFlexD_15.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR14   LINFlexD_15.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_15_IFCR15   LINFlexD_15.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_15_GCR      LINFlexD_15.GCR.R             /* Global Control Register */
#define LINFlexD_15_UARTPTO  LINFlexD_15.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_15_UARTCTO  LINFlexD_15.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_15_DMATXE   LINFlexD_15.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_15_DMARXE   LINFlexD_15.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_16_LINCR1   LINFlexD_16.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_16_LINIER   LINFlexD_16.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_16_LINSR    LINFlexD_16.LINSR.R           /* LIN Status Register */
#define LINFlexD_16_LINESR   LINFlexD_16.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_16_UARTCR   LINFlexD_16.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_16_UARTSR   LINFlexD_16.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_16_LINTCSR  LINFlexD_16.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_16_LINOCR   LINFlexD_16.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_16_LINTOCR  LINFlexD_16.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_16_LINFBRR  LINFlexD_16.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_16_LINIBRR  LINFlexD_16.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_16_LINCFR   LINFlexD_16.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_16_LINCR2   LINFlexD_16.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_16_BIDR     LINFlexD_16.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_16_BDRL     LINFlexD_16.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_16_BDRM     LINFlexD_16.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_16_IFER     LINFlexD_16.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_16_IFMI     LINFlexD_16.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_16_IFMR     LINFlexD_16.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_16_IFCR0    LINFlexD_16.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR1    LINFlexD_16.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR2    LINFlexD_16.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR3    LINFlexD_16.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR4    LINFlexD_16.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR5    LINFlexD_16.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR6    LINFlexD_16.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR7    LINFlexD_16.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR8    LINFlexD_16.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR9    LINFlexD_16.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR10   LINFlexD_16.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR11   LINFlexD_16.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR12   LINFlexD_16.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR13   LINFlexD_16.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR14   LINFlexD_16.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_16_IFCR15   LINFlexD_16.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_16_GCR      LINFlexD_16.GCR.R             /* Global Control Register */
#define LINFlexD_16_UARTPTO  LINFlexD_16.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_16_UARTCTO  LINFlexD_16.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_16_DMATXE   LINFlexD_16.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_16_DMARXE   LINFlexD_16.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_17_LINCR1   LINFlexD_17.LINCR1.R          /* LIN Control Register 1 */
#define LINFlexD_17_LINIER   LINFlexD_17.LINIER.R          /* LIN Interrupt enable register */
#define LINFlexD_17_LINSR    LINFlexD_17.LINSR.R           /* LIN Status Register */
#define LINFlexD_17_LINESR   LINFlexD_17.LINESR.R          /* LIN Error Status Register */
#define LINFlexD_17_UARTCR   LINFlexD_17.UARTCR.R          /* UART Mode Control Register */
#define LINFlexD_17_UARTSR   LINFlexD_17.UARTSR.R          /* UART Mode Status Register */
#define LINFlexD_17_LINTCSR  LINFlexD_17.LINTCSR.R         /* LIN Time-Out Control Status Register */
#define LINFlexD_17_LINOCR   LINFlexD_17.LINOCR.R          /* LIN Output Compare Register */
#define LINFlexD_17_LINTOCR  LINFlexD_17.LINTOCR.R         /* LIN Time-Out Control Register */
#define LINFlexD_17_LINFBRR  LINFlexD_17.LINFBRR.R         /* LIN Fractional Baud Rate Register */
#define LINFlexD_17_LINIBRR  LINFlexD_17.LINIBRR.R         /* LIN Integer Baud Rate Register */
#define LINFlexD_17_LINCFR   LINFlexD_17.LINCFR.R          /* LIN Checksum Field Register */
#define LINFlexD_17_LINCR2   LINFlexD_17.LINCR2.R          /* LIN Control Register 2 */
#define LINFlexD_17_BIDR     LINFlexD_17.BIDR.R            /* Buffer Identifier Register */
#define LINFlexD_17_BDRL     LINFlexD_17.BDRL.R            /* Buffer Data Register Least Significant */
#define LINFlexD_17_BDRM     LINFlexD_17.BDRM.R            /* Buffer Data Register Most Significant */
#define LINFlexD_17_IFER     LINFlexD_17.IFER.R            /* Identifier Filter Enable Register */
#define LINFlexD_17_IFMI     LINFlexD_17.IFMI.R            /* Identifier Filter Match Index */
#define LINFlexD_17_IFMR     LINFlexD_17.IFMR.R            /* Identifier Filter Mode Register */
#define LINFlexD_17_IFCR0    LINFlexD_17.IFCR[0].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR1    LINFlexD_17.IFCR[1].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR2    LINFlexD_17.IFCR[2].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR3    LINFlexD_17.IFCR[3].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR4    LINFlexD_17.IFCR[4].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR5    LINFlexD_17.IFCR[5].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR6    LINFlexD_17.IFCR[6].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR7    LINFlexD_17.IFCR[7].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR8    LINFlexD_17.IFCR[8].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR9    LINFlexD_17.IFCR[9].R         /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR10   LINFlexD_17.IFCR[10].R        /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR11   LINFlexD_17.IFCR[11].R        /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR12   LINFlexD_17.IFCR[12].R        /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR13   LINFlexD_17.IFCR[13].R        /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR14   LINFlexD_17.IFCR[14].R        /* Identifier Filter Control Register */
#define LINFlexD_17_IFCR15   LINFlexD_17.IFCR[15].R        /* Identifier Filter Control Register */
#define LINFlexD_17_GCR      LINFlexD_17.GCR.R             /* Global Control Register */
#define LINFlexD_17_UARTPTO  LINFlexD_17.UARTPTO.R         /* UART Preset Timeout Register */
#define LINFlexD_17_UARTCTO  LINFlexD_17.UARTCTO.R         /* UART Current Timeout Register */
#define LINFlexD_17_DMATXE   LINFlexD_17.DMATXE.R          /* DMA Tx Enable Register */
#define LINFlexD_17_DMARXE   LINFlexD_17.DMARXE.R          /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_2_LINCR1    LINFlexD_2.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_2_LINIER    LINFlexD_2.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_2_LINSR     LINFlexD_2.LINSR.R            /* LIN Status Register */
#define LINFlexD_2_LINESR    LINFlexD_2.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_2_UARTCR    LINFlexD_2.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_2_UARTSR    LINFlexD_2.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_2_LINTCSR   LINFlexD_2.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_2_LINOCR    LINFlexD_2.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_2_LINTOCR   LINFlexD_2.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_2_LINFBRR   LINFlexD_2.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_2_LINIBRR   LINFlexD_2.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_2_LINCFR    LINFlexD_2.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_2_LINCR2    LINFlexD_2.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_2_BIDR      LINFlexD_2.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_2_BDRL      LINFlexD_2.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_2_BDRM      LINFlexD_2.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_2_IFER      LINFlexD_2.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_2_IFMI      LINFlexD_2.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_2_IFMR      LINFlexD_2.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_2_IFCR0     LINFlexD_2.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR1     LINFlexD_2.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR2     LINFlexD_2.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR3     LINFlexD_2.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR4     LINFlexD_2.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR5     LINFlexD_2.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR6     LINFlexD_2.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR7     LINFlexD_2.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR8     LINFlexD_2.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR9     LINFlexD_2.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR10    LINFlexD_2.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR11    LINFlexD_2.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR12    LINFlexD_2.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR13    LINFlexD_2.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR14    LINFlexD_2.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_2_IFCR15    LINFlexD_2.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_2_GCR       LINFlexD_2.GCR.R              /* Global Control Register */
#define LINFlexD_2_UARTPTO   LINFlexD_2.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_2_UARTCTO   LINFlexD_2.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_2_DMATXE    LINFlexD_2.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_2_DMARXE    LINFlexD_2.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_3_LINCR1    LINFlexD_3.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_3_LINIER    LINFlexD_3.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_3_LINSR     LINFlexD_3.LINSR.R            /* LIN Status Register */
#define LINFlexD_3_LINESR    LINFlexD_3.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_3_UARTCR    LINFlexD_3.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_3_UARTSR    LINFlexD_3.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_3_LINTCSR   LINFlexD_3.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_3_LINOCR    LINFlexD_3.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_3_LINTOCR   LINFlexD_3.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_3_LINFBRR   LINFlexD_3.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_3_LINIBRR   LINFlexD_3.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_3_LINCFR    LINFlexD_3.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_3_LINCR2    LINFlexD_3.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_3_BIDR      LINFlexD_3.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_3_BDRL      LINFlexD_3.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_3_BDRM      LINFlexD_3.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_3_IFER      LINFlexD_3.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_3_IFMI      LINFlexD_3.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_3_IFMR      LINFlexD_3.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_3_IFCR0     LINFlexD_3.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR1     LINFlexD_3.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR2     LINFlexD_3.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR3     LINFlexD_3.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR4     LINFlexD_3.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR5     LINFlexD_3.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR6     LINFlexD_3.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR7     LINFlexD_3.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR8     LINFlexD_3.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR9     LINFlexD_3.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR10    LINFlexD_3.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR11    LINFlexD_3.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR12    LINFlexD_3.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR13    LINFlexD_3.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR14    LINFlexD_3.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_3_IFCR15    LINFlexD_3.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_3_GCR       LINFlexD_3.GCR.R              /* Global Control Register */
#define LINFlexD_3_UARTPTO   LINFlexD_3.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_3_UARTCTO   LINFlexD_3.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_3_DMATXE    LINFlexD_3.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_3_DMARXE    LINFlexD_3.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_4_LINCR1    LINFlexD_4.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_4_LINIER    LINFlexD_4.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_4_LINSR     LINFlexD_4.LINSR.R            /* LIN Status Register */
#define LINFlexD_4_LINESR    LINFlexD_4.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_4_UARTCR    LINFlexD_4.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_4_UARTSR    LINFlexD_4.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_4_LINTCSR   LINFlexD_4.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_4_LINOCR    LINFlexD_4.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_4_LINTOCR   LINFlexD_4.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_4_LINFBRR   LINFlexD_4.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_4_LINIBRR   LINFlexD_4.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_4_LINCFR    LINFlexD_4.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_4_LINCR2    LINFlexD_4.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_4_BIDR      LINFlexD_4.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_4_BDRL      LINFlexD_4.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_4_BDRM      LINFlexD_4.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_4_IFER      LINFlexD_4.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_4_IFMI      LINFlexD_4.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_4_IFMR      LINFlexD_4.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_4_IFCR0     LINFlexD_4.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR1     LINFlexD_4.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR2     LINFlexD_4.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR3     LINFlexD_4.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR4     LINFlexD_4.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR5     LINFlexD_4.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR6     LINFlexD_4.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR7     LINFlexD_4.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR8     LINFlexD_4.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR9     LINFlexD_4.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR10    LINFlexD_4.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR11    LINFlexD_4.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR12    LINFlexD_4.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR13    LINFlexD_4.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR14    LINFlexD_4.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_4_IFCR15    LINFlexD_4.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_4_GCR       LINFlexD_4.GCR.R              /* Global Control Register */
#define LINFlexD_4_UARTPTO   LINFlexD_4.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_4_UARTCTO   LINFlexD_4.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_4_DMATXE    LINFlexD_4.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_4_DMARXE    LINFlexD_4.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_5_LINCR1    LINFlexD_5.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_5_LINIER    LINFlexD_5.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_5_LINSR     LINFlexD_5.LINSR.R            /* LIN Status Register */
#define LINFlexD_5_LINESR    LINFlexD_5.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_5_UARTCR    LINFlexD_5.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_5_UARTSR    LINFlexD_5.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_5_LINTCSR   LINFlexD_5.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_5_LINOCR    LINFlexD_5.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_5_LINTOCR   LINFlexD_5.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_5_LINFBRR   LINFlexD_5.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_5_LINIBRR   LINFlexD_5.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_5_LINCFR    LINFlexD_5.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_5_LINCR2    LINFlexD_5.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_5_BIDR      LINFlexD_5.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_5_BDRL      LINFlexD_5.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_5_BDRM      LINFlexD_5.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_5_IFER      LINFlexD_5.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_5_IFMI      LINFlexD_5.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_5_IFMR      LINFlexD_5.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_5_IFCR0     LINFlexD_5.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR1     LINFlexD_5.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR2     LINFlexD_5.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR3     LINFlexD_5.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR4     LINFlexD_5.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR5     LINFlexD_5.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR6     LINFlexD_5.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR7     LINFlexD_5.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR8     LINFlexD_5.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR9     LINFlexD_5.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR10    LINFlexD_5.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR11    LINFlexD_5.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR12    LINFlexD_5.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR13    LINFlexD_5.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR14    LINFlexD_5.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_5_IFCR15    LINFlexD_5.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_5_GCR       LINFlexD_5.GCR.R              /* Global Control Register */
#define LINFlexD_5_UARTPTO   LINFlexD_5.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_5_UARTCTO   LINFlexD_5.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_5_DMATXE    LINFlexD_5.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_5_DMARXE    LINFlexD_5.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_6_LINCR1    LINFlexD_6.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_6_LINIER    LINFlexD_6.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_6_LINSR     LINFlexD_6.LINSR.R            /* LIN Status Register */
#define LINFlexD_6_LINESR    LINFlexD_6.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_6_UARTCR    LINFlexD_6.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_6_UARTSR    LINFlexD_6.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_6_LINTCSR   LINFlexD_6.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_6_LINOCR    LINFlexD_6.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_6_LINTOCR   LINFlexD_6.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_6_LINFBRR   LINFlexD_6.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_6_LINIBRR   LINFlexD_6.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_6_LINCFR    LINFlexD_6.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_6_LINCR2    LINFlexD_6.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_6_BIDR      LINFlexD_6.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_6_BDRL      LINFlexD_6.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_6_BDRM      LINFlexD_6.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_6_IFER      LINFlexD_6.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_6_IFMI      LINFlexD_6.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_6_IFMR      LINFlexD_6.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_6_IFCR0     LINFlexD_6.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR1     LINFlexD_6.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR2     LINFlexD_6.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR3     LINFlexD_6.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR4     LINFlexD_6.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR5     LINFlexD_6.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR6     LINFlexD_6.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR7     LINFlexD_6.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR8     LINFlexD_6.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR9     LINFlexD_6.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR10    LINFlexD_6.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR11    LINFlexD_6.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR12    LINFlexD_6.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR13    LINFlexD_6.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR14    LINFlexD_6.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_6_IFCR15    LINFlexD_6.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_6_GCR       LINFlexD_6.GCR.R              /* Global Control Register */
#define LINFlexD_6_UARTPTO   LINFlexD_6.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_6_UARTCTO   LINFlexD_6.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_6_DMATXE    LINFlexD_6.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_6_DMARXE    LINFlexD_6.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_7_LINCR1    LINFlexD_7.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_7_LINIER    LINFlexD_7.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_7_LINSR     LINFlexD_7.LINSR.R            /* LIN Status Register */
#define LINFlexD_7_LINESR    LINFlexD_7.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_7_UARTCR    LINFlexD_7.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_7_UARTSR    LINFlexD_7.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_7_LINTCSR   LINFlexD_7.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_7_LINOCR    LINFlexD_7.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_7_LINTOCR   LINFlexD_7.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_7_LINFBRR   LINFlexD_7.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_7_LINIBRR   LINFlexD_7.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_7_LINCFR    LINFlexD_7.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_7_LINCR2    LINFlexD_7.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_7_BIDR      LINFlexD_7.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_7_BDRL      LINFlexD_7.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_7_BDRM      LINFlexD_7.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_7_IFER      LINFlexD_7.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_7_IFMI      LINFlexD_7.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_7_IFMR      LINFlexD_7.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_7_IFCR0     LINFlexD_7.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR1     LINFlexD_7.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR2     LINFlexD_7.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR3     LINFlexD_7.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR4     LINFlexD_7.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR5     LINFlexD_7.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR6     LINFlexD_7.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR7     LINFlexD_7.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR8     LINFlexD_7.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR9     LINFlexD_7.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR10    LINFlexD_7.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR11    LINFlexD_7.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR12    LINFlexD_7.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR13    LINFlexD_7.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR14    LINFlexD_7.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_7_IFCR15    LINFlexD_7.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_7_GCR       LINFlexD_7.GCR.R              /* Global Control Register */
#define LINFlexD_7_UARTPTO   LINFlexD_7.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_7_UARTCTO   LINFlexD_7.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_7_DMATXE    LINFlexD_7.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_7_DMARXE    LINFlexD_7.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_8_LINCR1    LINFlexD_8.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_8_LINIER    LINFlexD_8.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_8_LINSR     LINFlexD_8.LINSR.R            /* LIN Status Register */
#define LINFlexD_8_LINESR    LINFlexD_8.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_8_UARTCR    LINFlexD_8.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_8_UARTSR    LINFlexD_8.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_8_LINTCSR   LINFlexD_8.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_8_LINOCR    LINFlexD_8.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_8_LINTOCR   LINFlexD_8.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_8_LINFBRR   LINFlexD_8.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_8_LINIBRR   LINFlexD_8.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_8_LINCFR    LINFlexD_8.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_8_LINCR2    LINFlexD_8.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_8_BIDR      LINFlexD_8.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_8_BDRL      LINFlexD_8.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_8_BDRM      LINFlexD_8.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_8_IFER      LINFlexD_8.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_8_IFMI      LINFlexD_8.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_8_IFMR      LINFlexD_8.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_8_IFCR0     LINFlexD_8.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR1     LINFlexD_8.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR2     LINFlexD_8.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR3     LINFlexD_8.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR4     LINFlexD_8.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR5     LINFlexD_8.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR6     LINFlexD_8.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR7     LINFlexD_8.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR8     LINFlexD_8.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR9     LINFlexD_8.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR10    LINFlexD_8.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR11    LINFlexD_8.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR12    LINFlexD_8.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR13    LINFlexD_8.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR14    LINFlexD_8.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_8_IFCR15    LINFlexD_8.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_8_GCR       LINFlexD_8.GCR.R              /* Global Control Register */
#define LINFlexD_8_UARTPTO   LINFlexD_8.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_8_UARTCTO   LINFlexD_8.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_8_DMATXE    LINFlexD_8.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_8_DMARXE    LINFlexD_8.DMARXE.R           /* DMA Rx Enable Register */

/* LINFlexD */
#define LINFlexD_9_LINCR1    LINFlexD_9.LINCR1.R           /* LIN Control Register 1 */
#define LINFlexD_9_LINIER    LINFlexD_9.LINIER.R           /* LIN Interrupt enable register */
#define LINFlexD_9_LINSR     LINFlexD_9.LINSR.R            /* LIN Status Register */
#define LINFlexD_9_LINESR    LINFlexD_9.LINESR.R           /* LIN Error Status Register */
#define LINFlexD_9_UARTCR    LINFlexD_9.UARTCR.R           /* UART Mode Control Register */
#define LINFlexD_9_UARTSR    LINFlexD_9.UARTSR.R           /* UART Mode Status Register */
#define LINFlexD_9_LINTCSR   LINFlexD_9.LINTCSR.R          /* LIN Time-Out Control Status Register */
#define LINFlexD_9_LINOCR    LINFlexD_9.LINOCR.R           /* LIN Output Compare Register */
#define LINFlexD_9_LINTOCR   LINFlexD_9.LINTOCR.R          /* LIN Time-Out Control Register */
#define LINFlexD_9_LINFBRR   LINFlexD_9.LINFBRR.R          /* LIN Fractional Baud Rate Register */
#define LINFlexD_9_LINIBRR   LINFlexD_9.LINIBRR.R          /* LIN Integer Baud Rate Register */
#define LINFlexD_9_LINCFR    LINFlexD_9.LINCFR.R           /* LIN Checksum Field Register */
#define LINFlexD_9_LINCR2    LINFlexD_9.LINCR2.R           /* LIN Control Register 2 */
#define LINFlexD_9_BIDR      LINFlexD_9.BIDR.R             /* Buffer Identifier Register */
#define LINFlexD_9_BDRL      LINFlexD_9.BDRL.R             /* Buffer Data Register Least Significant */
#define LINFlexD_9_BDRM      LINFlexD_9.BDRM.R             /* Buffer Data Register Most Significant */
#define LINFlexD_9_IFER      LINFlexD_9.IFER.R             /* Identifier Filter Enable Register */
#define LINFlexD_9_IFMI      LINFlexD_9.IFMI.R             /* Identifier Filter Match Index */
#define LINFlexD_9_IFMR      LINFlexD_9.IFMR.R             /* Identifier Filter Mode Register */
#define LINFlexD_9_IFCR0     LINFlexD_9.IFCR[0].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR1     LINFlexD_9.IFCR[1].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR2     LINFlexD_9.IFCR[2].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR3     LINFlexD_9.IFCR[3].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR4     LINFlexD_9.IFCR[4].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR5     LINFlexD_9.IFCR[5].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR6     LINFlexD_9.IFCR[6].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR7     LINFlexD_9.IFCR[7].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR8     LINFlexD_9.IFCR[8].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR9     LINFlexD_9.IFCR[9].R          /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR10    LINFlexD_9.IFCR[10].R         /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR11    LINFlexD_9.IFCR[11].R         /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR12    LINFlexD_9.IFCR[12].R         /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR13    LINFlexD_9.IFCR[13].R         /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR14    LINFlexD_9.IFCR[14].R         /* Identifier Filter Control Register */
#define LINFlexD_9_IFCR15    LINFlexD_9.IFCR[15].R         /* Identifier Filter Control Register */
#define LINFlexD_9_GCR       LINFlexD_9.GCR.R              /* Global Control Register */
#define LINFlexD_9_UARTPTO   LINFlexD_9.UARTPTO.R          /* UART Preset Timeout Register */
#define LINFlexD_9_UARTCTO   LINFlexD_9.UARTCTO.R          /* UART Current Timeout Register */
#define LINFlexD_9_DMATXE    LINFlexD_9.DMATXE.R           /* DMA Tx Enable Register */
#define LINFlexD_9_DMARXE    LINFlexD_9.DMARXE.R           /* DMA Rx Enable Register */

/* LPU */
#define LPU_MCTL             LPU.MCTL.R                    /* LPU Mode Control Register */
#define LPU_RUN_CF           LPU.RUN_CF.R                  /* LPU Run Configuration Register */
#define LPU_STOP_CF          LPU.STOP_CF.R                 /* LPU Stop Configuration Register */
#define LPU_STANDBY_CF       LPU.STANDBY_CF.R              /* LPU Standby Configuration Register */
#define LPU_SR               LPU.SR.R                      /* LPU Status Register */
#define LPU_ICR              LPU.ICR.R                     /* LPU Interrupt control register */
#define LPU_MDIS             LPU.MDIS.R                    /* Module Disable */

/* MC_CGM */
#define MC_CGM_CLKOUT1_SC    MC_CGM.CLKOUT1_SC.R           /* Clockout 1 Select Register */
#define MC_CGM_CLKOUT1_DC    MC_CGM.CLKOUT1_DC.R           /* CLKOUT1_DC Configuration Register */
#define MC_CGM_AC5_SC        MC_CGM.AC5_SC.R               /* Auxiliary Clock 5 Select Control Register */
#define MC_CGM_AC5_SS        MC_CGM.AC5_SS.R               /* Auxiliary Clock 5 Select Status Register */
#define MC_CGM_SC_DC6        MC_CGM.SC_DC6.R               /* System Clock Divider 6 Configuration Register */
#define MC_CGM_AC7_SC        MC_CGM.AC7_SC.R               /* Auxiliary Clock 7 Select Control Register */
#define MC_CGM_AC7_SS        MC_CGM.AC7_SS.R               /* Auxiliary Clock 7 Select Status Register */
#define MC_CGM_AC8_SC        MC_CGM.AC8_SC.R               /* Auxiliary Clock 8 Select Control Register */
#define MC_CGM_AC8_SS        MC_CGM.AC8_SS.R               /* Auxiliary Clock 8 Select Status Register */
#define MC_CGM_AC9_SC        MC_CGM.AC9_SC.R               /* Auxiliary Clock 9 Select Control Register */
#define MC_CGM_AC9_SS        MC_CGM.AC9_SS.R               /* Auxiliary Clock 9 Select Status Register */
#define MC_CGM_PCS_SDUR      MC_CGM.PCS_SDUR.R             /* PCS Switch Duration Register */
#define MC_CGM_PCS_DIVC1     MC_CGM.PCS_DIVC1.R            /* PCS Divider Change Register 1 */
#define MC_CGM_PCS_DIVE1     MC_CGM.PCS_DIVE1.R            /* PCS Divider End Register 1 */
#define MC_CGM_PCS_DIVS1     MC_CGM.PCS_DIVS1.R            /* PCS Divider Start Register 1 */
#define MC_CGM_PCS_DIVC2     MC_CGM.PCS_DIVC2.R            /* PCS Divider Change Register 2 */
#define MC_CGM_PCS_DIVE2     MC_CGM.PCS_DIVE2.R            /* PCS Divider End Register 2 */
#define MC_CGM_PCS_DIVS2     MC_CGM.PCS_DIVS2.R            /* PCS Divider Start Register 2 */
#define MC_CGM_DIV_UPD_ABRTD MC_CGM.DIV_UPD_ABRTD.R        /* Divider Update Abort Register */
#define MC_CGM_SC_DIV_RC     MC_CGM.SC_DIV_RC.R            /* System Clock Divider Ratio Change Register */
#define MC_CGM_DIV_UPD_TYPE  MC_CGM.DIV_UPD_TYPE.R         /* Divider Update Type Register */
#define MC_CGM_DIV_UPD_TRIG  MC_CGM.DIV_UPD_TRIG.R         /* Divider Update Trigger Register */
#define MC_CGM_DIV_UPD_STAT  MC_CGM.DIV_UPD_STAT.R         /* Divider Update Status Register */
#define MC_CGM_SC_SS         MC_CGM.SC_SS.R                /* System Clock Select Status Register */
#define MC_CGM_SC_DC0        MC_CGM.SC_DC0.R               /* System Clock Divider 0 Configuration Register */
#define MC_CGM_SC_DC1        MC_CGM.SC_DC1.R               /* System Clock Divider 1 Configuration Register */
#define MC_CGM_SC_DC2        MC_CGM.SC_DC2.R               /* System Clock Divider 2 Configuration Register */
#define MC_CGM_SC_DC3        MC_CGM.SC_DC3.R               /* System Clock Divider 3 Configuration Register */
#define MC_CGM_SC_DC4        MC_CGM.SC_DC4.R               /* System Clock Divider 4 Configuration Register */
#define MC_CGM_SC_DC5        MC_CGM.SC_DC5.R               /* System Clock Divider 5 Configuration Register */
#define MC_CGM_AC2_SC        MC_CGM.AC2_SC.R               /* Auxiliary Clock 2 Select Control Register */
#define MC_CGM_AC2_SS        MC_CGM.AC2_SS.R               /* Auxiliary Clock 2 Select Status Register */
#define MC_CGM_AC3_SC        MC_CGM.AC3_SC.R               /* Auxiliary Clock 3 Select Control Register */
#define MC_CGM_AC3_SS        MC_CGM.AC3_SS.R               /* Auxiliary Clock 3 Select Status Register */
#define MC_CGM_AC4_SC        MC_CGM.AC4_SC.R               /* Auxiliary Clock 4 Select Control Register */
#define MC_CGM_AC4_SS        MC_CGM.AC4_SS.R               /* Auxiliary Clock 4 Select Status Register */
#define MC_CGM_AC6_SC        MC_CGM.AC6_SC.R               /* Auxiliary Clock 6 Select Control Register */
#define MC_CGM_AC6_SS        MC_CGM.AC6_SS.R               /* Auxiliary Clock 6 Select Status Register */
#define MC_CGM_AC6_DC0       MC_CGM.AC6_DC0.R              /* Aux Clock 6 Divider Configuration 0 for CLKOUT_0 */

/* MC_ME */
#define MC_ME_GS             MC_ME.GS.R                    /* Global Status Register */
#define MC_ME_MCTL           MC_ME.MCTL.R                  /* Mode Control Register */
#define MC_ME_ME             MC_ME.ME.R                    /* Mode Enable Register */
#define MC_ME_IS             MC_ME.IS.R                    /* Interrupt Status Register */
#define MC_ME_IM             MC_ME.IM.R                    /* Interrupt Mask Register */
#define MC_ME_IMTS           MC_ME.IMTS.R                  /* Invalid Mode Transition Status Register */
#define MC_ME_DMTS           MC_ME.DMTS.R                  /* Debug Mode Transition Status Register */
#define MC_ME_RESET_MC       MC_ME.RESET_MC.R              /* RESET Mode Configuration Register */
#define MC_ME_SAFE_MC        MC_ME.SAFE_MC.R               /* SAFE Mode Configuration Register */
#define MC_ME_DRUN_MC        MC_ME.DRUN_MC.R               /* DRUN Mode Configuration Register */
#define MC_ME_RUN0_MC        MC_ME.RUN_MC[0].R             /* RUN0 Mode Configuration Register */
#define MC_ME_RUN1_MC        MC_ME.RUN_MC[1].R             /* RUN1 Mode Configuration Register */
#define MC_ME_RUN2_MC        MC_ME.RUN_MC[2].R             /* RUN2 Mode Configuration Register */
#define MC_ME_RUN3_MC        MC_ME.RUN_MC[3].R             /* RUN3 Mode Configuration Register */
#define MC_ME_STOP_MC        MC_ME.STOP_MC.R               /* STOP0 Mode Configuration Register */
#define MC_ME_STANDBY_MC     MC_ME.STANDBY_MC.R            /* STANDBY0 Mode Configuration Register */
#define MC_ME_PS0            MC_ME.PS0.R                   /* Peripheral Status Register 0 */
#define MC_ME_PS1            MC_ME.PS1.R                   /* Peripheral Status Register 1 */
#define MC_ME_PS2            MC_ME.PS2.R                   /* Peripheral Status Register 2 */
#define MC_ME_PS3            MC_ME.PS3.R                   /* Peripheral Status Register 3 */
#define MC_ME_RUN_PC0        MC_ME.RUN_PC[0].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC1        MC_ME.RUN_PC[1].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC2        MC_ME.RUN_PC[2].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC3        MC_ME.RUN_PC[3].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC4        MC_ME.RUN_PC[4].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC5        MC_ME.RUN_PC[5].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC6        MC_ME.RUN_PC[6].R             /* Run Peripheral Configuration Register */
#define MC_ME_RUN_PC7        MC_ME.RUN_PC[7].R             /* Run Peripheral Configuration Register */
#define MC_ME_LP_PC0         MC_ME.LP_PC[0].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC1         MC_ME.LP_PC[1].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC2         MC_ME.LP_PC[2].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC3         MC_ME.LP_PC[3].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC4         MC_ME.LP_PC[4].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC5         MC_ME.LP_PC[5].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC6         MC_ME.LP_PC[6].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_LP_PC7         MC_ME.LP_PC[7].R              /* Low-Power Peripheral Configuration Register */
#define MC_ME_PCTL0          MC_ME.PCTL[0].R               /* BCTU Peripheral Control Register */
#define MC_ME_PCTL1          MC_ME.PCTL[1].R               /* eMIOS_0 Peripheral Control Register */
#define MC_ME_PCTL2          MC_ME.PCTL[2].R               /* eMIOS_1 Peripheral Control Register */
#define MC_ME_PCTL3          MC_ME.PCTL[3].R               /* eMIOS_2 Peripheral Control Register */
#define MC_ME_PCTL4          MC_ME.PCTL[4].R               /* USB OTG Peripheral Control register */
#define MC_ME_PCTL5          MC_ME.PCTL[5].R               /* USB_SPH Peripheral Control Register */
#define MC_ME_PCTL6          MC_ME.PCTL[6].R               /* MLB Peripheral Control Register */
#define MC_ME_PCTL7          MC_ME.PCTL[7].R               /* SDHC Peripheral Control Register */
#define MC_ME_PCTL8          MC_ME.PCTL[8].R               /*  */
#define MC_ME_PCTL9          MC_ME.PCTL[9].R               /*  */
#define MC_ME_PCTL10         MC_ME.PCTL[10].R              /* SAI0 Peripheral Control Register */
#define MC_ME_PCTL11         MC_ME.PCTL[11].R              /* SAI1 Peripheral Control Register */
#define MC_ME_PCTL12         MC_ME.PCTL[12].R              /* SAI2 Peripheral Control Register */
#define MC_ME_PCTL13         MC_ME.PCTL[13].R              /*  */
#define MC_ME_PCTL14         MC_ME.PCTL[14].R              /*  */
#define MC_ME_PCTL15         MC_ME.PCTL[15].R              /* ENET Peripheral Control Register */
#define MC_ME_PCTL16         MC_ME.PCTL[16].R              /*  */
#define MC_ME_PCTL17         MC_ME.PCTL[17].R              /*  */
#define MC_ME_PCTL18         MC_ME.PCTL[18].R              /*  */
#define MC_ME_PCTL19         MC_ME.PCTL[19].R              /*  */
#define MC_ME_PCTL20         MC_ME.PCTL[20].R              /* CMP_0 Peripheral Control Register */
#define MC_ME_PCTL21         MC_ME.PCTL[21].R              /* CMP_1 Peripheral Control Register */
#define MC_ME_PCTL22         MC_ME.PCTL[22].R              /* CMP_2 Peripheral Control Register */
#define MC_ME_PCTL23         MC_ME.PCTL[23].R              /*  */
#define MC_ME_PCTL24         MC_ME.PCTL[24].R              /* ADC_0 Peripheral Control Register */
#define MC_ME_PCTL25         MC_ME.PCTL[25].R              /* ADC_1 Peripheral Control Register */
#define MC_ME_PCTL26         MC_ME.PCTL[26].R              /*  */
#define MC_ME_PCTL27         MC_ME.PCTL[27].R              /*  */
#define MC_ME_PCTL28         MC_ME.PCTL[28].R              /* FlexRay Peripheral Control Register */
#define MC_ME_PCTL29         MC_ME.PCTL[29].R              /*  */
#define MC_ME_PCTL30         MC_ME.PCTL[30].R              /* IIC_0 Peripheral Control Register */
#define MC_ME_PCTL31         MC_ME.PCTL[31].R              /* IIC_1 Peripheral Control Register */
#define MC_ME_PCTL32         MC_ME.PCTL[32].R              /* IIC_2 Peripheral Control Register */
#define MC_ME_PCTL33         MC_ME.PCTL[33].R              /* IIC_3 Peripheral Control Register */
#define MC_ME_PCTL34         MC_ME.PCTL[34].R              /*  */
#define MC_ME_PCTL35         MC_ME.PCTL[35].R              /*  */
#define MC_ME_PCTL36         MC_ME.PCTL[36].R              /*  */
#define MC_ME_PCTL37         MC_ME.PCTL[37].R              /*  */
#define MC_ME_PCTL38         MC_ME.PCTL[38].R              /*  */
#define MC_ME_PCTL39         MC_ME.PCTL[39].R              /*  */
#define MC_ME_PCTL40         MC_ME.PCTL[40].R              /* DSPI_0 Peripheral Control Register */
#define MC_ME_PCTL41         MC_ME.PCTL[41].R              /* DSPI_1 Peripheral Control Register */
#define MC_ME_PCTL42         MC_ME.PCTL[42].R              /* DSPI_2 Peripheral Control Register */
#define MC_ME_PCTL43         MC_ME.PCTL[43].R              /* DSPI_3 Peripheral Control Register */
#define MC_ME_PCTL44         MC_ME.PCTL[44].R              /*  */
#define MC_ME_PCTL45         MC_ME.PCTL[45].R              /*  */
#define MC_ME_PCTL46         MC_ME.PCTL[46].R              /*  */
#define MC_ME_PCTL47         MC_ME.PCTL[47].R              /*  */
#define MC_ME_PCTL48         MC_ME.PCTL[48].R              /*  */
#define MC_ME_PCTL49         MC_ME.PCTL[49].R              /*  */
#define MC_ME_PCTL50         MC_ME.PCTL[50].R              /* LIN_0 Peripheral Control Register */
#define MC_ME_PCTL51         MC_ME.PCTL[51].R              /* LIN_1 Peripheral Control Register */
#define MC_ME_PCTL52         MC_ME.PCTL[52].R              /* LIN_2 Peripheral Control Register */
#define MC_ME_PCTL53         MC_ME.PCTL[53].R              /* LIN_3 Peripheral Control Register */
#define MC_ME_PCTL54         MC_ME.PCTL[54].R              /* LIN_4 Peripheral Control Register */
#define MC_ME_PCTL55         MC_ME.PCTL[55].R              /* LIN_5 Peripheral Control Register */
#define MC_ME_PCTL56         MC_ME.PCTL[56].R              /* LIN_6 Peripheral Control Register */
#define MC_ME_PCTL57         MC_ME.PCTL[57].R              /* LIN_7 Peripheral Control Register */
#define MC_ME_PCTL58         MC_ME.PCTL[58].R              /* LIN 8 Peripheral Control Register */
#define MC_ME_PCTL59         MC_ME.PCTL[59].R              /* LIN_9 Peripheral Control Register */
#define MC_ME_PCTL60         MC_ME.PCTL[60].R              /* LIN_10 Peripheral Control Register */
#define MC_ME_PCTL61         MC_ME.PCTL[61].R              /* LIN_11 Peripheral Control Register */
#define MC_ME_PCTL62         MC_ME.PCTL[62].R              /* LIN 12 Peripheral Control Register */
#define MC_ME_PCTL63         MC_ME.PCTL[63].R              /* LIN_13 Peripheral Control Register */
#define MC_ME_PCTL64         MC_ME.PCTL[64].R              /* LIN 14 Peripheral Control Register */
#define MC_ME_PCTL65         MC_ME.PCTL[65].R              /* LIN_15 Peripheral Control Register */
#define MC_ME_PCTL66         MC_ME.PCTL[66].R              /* LIN_16 Peripheral Control Register */
#define MC_ME_PCTL67         MC_ME.PCTL[67].R              /* LIN_17 Peripheral Control Register */
#define MC_ME_PCTL68         MC_ME.PCTL[68].R              /*  */
#define MC_ME_PCTL69         MC_ME.PCTL[69].R              /*  */
#define MC_ME_PCTL70         MC_ME.PCTL[70].R              /* FLEXCAN_0 Peripheral Control Register */
#define MC_ME_PCTL71         MC_ME.PCTL[71].R              /* FLEXCAN_1 Peripheral Control Register */
#define MC_ME_PCTL72         MC_ME.PCTL[72].R              /* FLEXCAN_2 Peripheral Control Register */
#define MC_ME_PCTL73         MC_ME.PCTL[73].R              /* FLEXCAN_3 Peripheral Control Register */
#define MC_ME_PCTL74         MC_ME.PCTL[74].R              /* FLEXCAN_4 Peripheral Control Register */
#define MC_ME_PCTL75         MC_ME.PCTL[75].R              /* FLEXCAN_5 Peripheral Control Register */
#define MC_ME_PCTL76         MC_ME.PCTL[76].R              /* FLEXCAN_6 Peripheral Control Register */
#define MC_ME_PCTL77         MC_ME.PCTL[77].R              /* FLEXCAN_7 Peripheral Control Register */
#define MC_ME_PCTL78         MC_ME.PCTL[78].R              /*  */
#define MC_ME_PCTL79         MC_ME.PCTL[79].R              /*  */
#define MC_ME_PCTL80         MC_ME.PCTL[80].R              /*  */
#define MC_ME_PCTL81         MC_ME.PCTL[81].R              /* TDM Control Register */
#define MC_ME_PCTL82         MC_ME.PCTL[82].R              /* JDC Control Register */
#define MC_ME_PCTL83         MC_ME.PCTL[83].R              /* MEMU_0 Control Register */
#define MC_ME_PCTL84         MC_ME.PCTL[84].R              /* CRC Control Register */
#define MC_ME_PCTL85         MC_ME.PCTL[85].R              /*  */
#define MC_ME_PCTL86         MC_ME.PCTL[86].R              /*  */
#define MC_ME_PCTL87         MC_ME.PCTL[87].R              /*  */
#define MC_ME_PCTL88         MC_ME.PCTL[88].R              /*  */
#define MC_ME_PCTL89         MC_ME.PCTL[89].R              /*  */
#define MC_ME_PCTL90         MC_ME.PCTL[90].R              /* DMAMUX Control Register */
#define MC_ME_PCTL91         MC_ME.PCTL[91].R              /* PIT_RTI_0 Control Register */
#define MC_ME_PCTL92         MC_ME.PCTL[92].R              /*  */
#define MC_ME_PCTL93         MC_ME.PCTL[93].R              /* WKPU Control Register */
#define MC_ME_PCTL94         MC_ME.PCTL[94].R              /*  */
#define MC_ME_PCTL95         MC_ME.PCTL[95].R              /*  */
#define MC_ME_PCTL96         MC_ME.PCTL[96].R              /* SPI0 Control Register */
#define MC_ME_PCTL97         MC_ME.PCTL[97].R              /* SPI1 Control Register */
#define MC_ME_PCTL98         MC_ME.PCTL[98].R              /* SPI2 Control Register */
#define MC_ME_PCTL99         MC_ME.PCTL[99].R              /* SPI3 Control Register */
#define MC_ME_PCTL100        MC_ME.PCTL[100].R             /* SPI4 Control Register */
#define MC_ME_PCTL101        MC_ME.PCTL[101].R             /* SPI5 Control Register */
#define MC_ME_PCTL102        MC_ME.PCTL[102].R             /* RTC-API Control Register */
#define MC_ME_PCTL103        MC_ME.PCTL[103].R             /*  */
#define MC_ME_CS             MC_ME.CS.R                    /* Core Status Register */
#define MC_ME_CCTL0          MC_ME.CCTL[0].R               /*  */
#define MC_ME_CCTL1          MC_ME.CCTL[1].R               /* Core1 Control Register */
#define MC_ME_CCTL2          MC_ME.CCTL[2].R               /* Core2 Control Register */
#define MC_ME_CCTL3          MC_ME.CCTL[3].R               /* Core3 Control Register */
#define MC_ME_CADDR0         MC_ME.CADDR[0].R              /*  */
#define MC_ME_CADDR1         MC_ME.CADDR[1].R              /* CORE1 Address Register */
#define MC_ME_CADDR2         MC_ME.CADDR[2].R              /* CORE2 Address Register */
#define MC_ME_CADDR3         MC_ME.CADDR[3].R              /* CORE3 Address Register */

/* MC_RGM */
#define MC_RGM_DES           MC_RGM.DES.R                  /* 'Destructive' Event Status Register */
#define MC_RGM_DERD          MC_RGM.DERD.R                 /* 'Destructive' Event Reset Disable Register */
#define MC_RGM_DBRE          MC_RGM.DBRE.R                 /* 'Destructive' Bidirectional Reset Enable Register */
#define MC_RGM_FES           MC_RGM.FES.R                  /* 'Functional' Event Status Register */
#define MC_RGM_FERD          MC_RGM.FERD.R                 /* 'Functional' Event Reset Disable Register */
#define MC_RGM_FEAR          MC_RGM.FEAR.R                 /* 'Functional' Event Reset DisableAlternate Request Status Register */
#define MC_RGM_FBRE          MC_RGM.FBRE.R                 /* 'Functional' Bidirectional Reset Enable Register */
#define MC_RGM_FESS          MC_RGM.FESS.R                 /* 'Functional' Event Short Sequence Register */
#define MC_RGM_FRET          MC_RGM.FRET.R                 /* 'Functional' Reset Escalation Threshold Register */
#define MC_RGM_DRET          MC_RGM.DRET.R                 /* 'Destructive' Reset Escalation Threshold Register */

/* MEMU_0 */
#define MEMU_0_CTRL          MEMU_0.CTRL.R                 /* Control register */
#define MEMU_0_ERR_FLAG      MEMU_0.ERR_FLAG.R             /* Error flag register */
#define MEMU_0_DEBUG         MEMU_0.DEBUG.R                /* Debug register */
#define MEMU_0_SYS_RAM_CERR_STS0 MEMU_0.SYS_RAM_CERR[0].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR0 MEMU_0.SYS_RAM_CERR[0].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS1 MEMU_0.SYS_RAM_CERR[1].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR1 MEMU_0.SYS_RAM_CERR[1].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS2 MEMU_0.SYS_RAM_CERR[2].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR2 MEMU_0.SYS_RAM_CERR[2].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS3 MEMU_0.SYS_RAM_CERR[3].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR3 MEMU_0.SYS_RAM_CERR[3].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS4 MEMU_0.SYS_RAM_CERR[4].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR4 MEMU_0.SYS_RAM_CERR[4].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS5 MEMU_0.SYS_RAM_CERR[5].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR5 MEMU_0.SYS_RAM_CERR[5].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS6 MEMU_0.SYS_RAM_CERR[6].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR6 MEMU_0.SYS_RAM_CERR[6].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS7 MEMU_0.SYS_RAM_CERR[7].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR7 MEMU_0.SYS_RAM_CERR[7].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS8 MEMU_0.SYS_RAM_CERR[8].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR8 MEMU_0.SYS_RAM_CERR[8].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_CERR_STS9 MEMU_0.SYS_RAM_CERR[9].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_0_SYS_RAM_CERR_ADDR9 MEMU_0.SYS_RAM_CERR[9].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_0_SYS_RAM_UNCERR_STS MEMU_0.SYS_RAM_UNCERR_STS.R /* System RAM uncorrectable error reporting table status register */
#define MEMU_0_SYS_RAM_UNCERR_ADDR MEMU_0.SYS_RAM_UNCERR_ADDR.R /* System RAM uncorrectable error reporting table address register */
#define MEMU_0_SYS_RAM_OFLW  MEMU_0.SYS_RAM_OFLW.R         /* System RAM concurrent overflow register */
#define MEMU_0_PERIPH_RAM_CERR_STS0  MEMU_0.PERIPH_RAM_CERR[0].STS.R        /* Peripheral RAM correctable error reporting table status register */
#define MEMU_0_PERIPH_RAM_CERR_ADDR0 MEMU_0.PERIPH_RAM_CERR[0].ADDR.R       /* Peripheral RAM correctable error reporting table address register */
#define MEMU_0_PERIPH_RAM_CERR_STS1  MEMU_0.PERIPH_RAM_CERR[1].STS.R        /* Peripheral RAM correctable error reporting table status register */
#define MEMU_0_PERIPH_RAM_CERR_ADDR1 MEMU_0.PERIPH_RAM_CERR[1].ADDR.R       /* Peripheral RAM correctable error reporting table address register */
#define MEMU_0_PERIPH_RAM_UNCERR_STS MEMU_0.PERIPH_RAM_UNCERR_STS.R /* Peripheral RAM uncorrectable error reporting table status register */
#define MEMU_0_PERIPH_RAM_UNCERR_ADDR MEMU_0.PERIPH_RAM_UNCERR_ADDR.R /* Peripheral RAM uncorrectable error reporting table address register */
#define MEMU_0_PERIPH_RAM_OFLW MEMU_0.PERIPH_RAM_OFLW.R  /* Peripheral RAM concurrent overflow register */
#define MEMU_0_FLASH_CERR_STS0 MEMU_0.FLASH_CERR[0].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR0 MEMU_0.FLASH_CERR[0].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS1 MEMU_0.FLASH_CERR[1].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR1 MEMU_0.FLASH_CERR[1].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS2 MEMU_0.FLASH_CERR[2].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR2 MEMU_0.FLASH_CERR[2].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS3 MEMU_0.FLASH_CERR[3].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR3 MEMU_0.FLASH_CERR[3].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS4 MEMU_0.FLASH_CERR[4].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR4 MEMU_0.FLASH_CERR[4].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS5 MEMU_0.FLASH_CERR[5].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR5 MEMU_0.FLASH_CERR[5].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS6 MEMU_0.FLASH_CERR[6].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR6 MEMU_0.FLASH_CERR[6].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS7 MEMU_0.FLASH_CERR[7].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR7 MEMU_0.FLASH_CERR[7].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS8 MEMU_0.FLASH_CERR[8].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR8 MEMU_0.FLASH_CERR[8].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS9 MEMU_0.FLASH_CERR[9].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR9 MEMU_0.FLASH_CERR[9].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS10 MEMU_0.FLASH_CERR[10].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR10 MEMU_0.FLASH_CERR[10].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS11 MEMU_0.FLASH_CERR[11].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR11 MEMU_0.FLASH_CERR[11].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS12 MEMU_0.FLASH_CERR[12].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR12 MEMU_0.FLASH_CERR[12].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS13 MEMU_0.FLASH_CERR[13].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR13 MEMU_0.FLASH_CERR[13].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS14 MEMU_0.FLASH_CERR[14].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR14 MEMU_0.FLASH_CERR[14].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS15 MEMU_0.FLASH_CERR[15].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR15 MEMU_0.FLASH_CERR[15].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS16 MEMU_0.FLASH_CERR[16].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR16 MEMU_0.FLASH_CERR[16].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS17 MEMU_0.FLASH_CERR[17].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR17 MEMU_0.FLASH_CERR[17].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS18 MEMU_0.FLASH_CERR[18].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR18 MEMU_0.FLASH_CERR[18].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_CERR_STS19 MEMU_0.FLASH_CERR[19].STS.R /* Flash correctable error reporting table status register */
#define MEMU_0_FLASH_CERR_ADDR19 MEMU_0.FLASH_CERR[19].ADDR.R /* Flash correctable error reporting table address register */
#define MEMU_0_FLASH_UNCERR_STS MEMU_0.FLASH_UNCERR_STS.R /* Flash uncorrectable error reporting table status register */
#define MEMU_0_FLASH_UNCERR_ADDR MEMU_0.FLASH_UNCERR_ADDR.R /* Flash uncorrectable error reporting table address register */
#define MEMU_0_FLASH_OFLW        MEMU_0.FLASH_OFLW.R         /* Flash concurrent overflow register */

/* MEMU_1 */
#define MEMU_1_CTRL          MEMU_1.CTRL.R                 /* Control register */
#define MEMU_1_ERR_FLAG      MEMU_1.ERR_FLAG.R             /* Error flag register */
#define MEMU_1_DEBUG         MEMU_1.DEBUG.R                /* Debug register */
#define MEMU_1_SYS_RAM_CERR_STS0 MEMU_1.SYS_RAM_CERR[0].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_1_SYS_RAM_CERR_ADDR0 MEMU_1.SYS_RAM_CERR[0].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_1_SYS_RAM_CERR_STS1 MEMU_1.SYS_RAM_CERR[1].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_1_SYS_RAM_CERR_ADDR1 MEMU_1.SYS_RAM_CERR[1].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_1_SYS_RAM_CERR_STS2 MEMU_1.SYS_RAM_CERR[2].STS.R /* System RAM correctable error reporting table status register */
#define MEMU_1_SYS_RAM_CERR_ADDR2 MEMU_1.SYS_RAM_CERR[2].ADDR.R /* System RAM correctable error reporting table address register */
#define MEMU_1_SYS_RAM_UNCERR_STS MEMU_1.SYS_RAM_UNCERR_STS.R /* System RAM uncorrectable error reporting table status register */
#define MEMU_1_SYS_RAM_UNCERR_ADDR MEMU_1.SYS_RAM_UNCERR_ADDR.R /* System RAM uncorrectable error reporting table address register */
#define MEMU_1_SYS_RAM_OFLW  MEMU_1.SYS_RAM_OFLW.R         /* System RAM concurrent overflow register */
#define MEMU_1_PERIPH_RAM_CERR_STS0  MEMU_1.PERIPH_RAM_CERR[0].STS.R        /* Peripheral RAM correctable error reporting table status register */
#define MEMU_1_PERIPH_RAM_CERR_ADDR0 MEMU_1.PERIPH_RAM_CERR[0].ADDR.R       /* Peripheral RAM correctable error reporting table address register */
#define MEMU_1_PERIPH_RAM_UNCERR_STS MEMU_1.PERIPH_RAM_UNCERR_STS.R /* Peripheral RAM uncorrectable error reporting table status register */
#define MEMU_1_PERIPH_RAM_UNCERR_ADDR MEMU_1.PERIPH_RAM_UNCERR_ADDR.R /* Peripheral RAM uncorrectable error reporting table address register */
#define MEMU_1_PERIPH_RAM_OFLW MEMU_1.PERIPH_RAM_OFLW.R  /* Peripheral RAM concurrent overflow register */

/* MLB */
#define MLB_C0               MLB.C0.R                      /* MediaLB Control 0 Register */
#define MLB_MS0              MLB.MS0.R                     /* MediaLB Channel Status 0 Register */
#define MLB_MS1              MLB.MS1.R                     /* MediaLB Channel Status1 Register */
#define MLB_MSS              MLB.MSS.R                     /* MediaLB System Status Register */
#define MLB_MSD              MLB.MSD.R                     /* MediaLB System Data Register */
#define MLB_MIEN             MLB.MIEN.R                    /* MediaLB Interrupt Enable Register */
#define MLB_C1               MLB.C1.R                      /* MediaLB Control 1 Register */
#define MLB_HCTL             MLB.HCTL.R                    /* HBI Control Register */
#define MLB_HCMR0            MLB.HCMR0.R                   /* HBI Channel Mask 0 Register */
#define MLB_HCMR1            MLB.HCMR1.R                   /* HBI Channel Mask 1 Register */
#define MLB_HCER0            MLB.HCER0.R                   /* HBI Channel Error 0 Register */
#define MLB_HCER1            MLB.HCER1.R                   /* HBI Channel Error 1 Register */
#define MLB_HCBR0            MLB.HCBR0.R                   /* HBI Channel Busy 0 Register */
#define MLB_HCBR1            MLB.HCBR1.R                   /* HBI Channel Busy 1 Register */
#define MLB_MDAT0            MLB.MDAT0.R                   /* MIF Data 0 Register */
#define MLB_MDAT1            MLB.MDAT1.R                   /* MIF Data 1 Register */
#define MLB_MDAT2            MLB.MDAT2.R                   /* MIF Data 2 Register */
#define MLB_MDAT3            MLB.MDAT3.R                   /* MIF Data 3 Register */
#define MLB_MDWE0            MLB.MDWE0.R                   /* MIF Data Write Enable 0 Register */
#define MLB_MDWE1            MLB.MDWE1.R                   /* MIF Data Write Enable 1 Register */
#define MLB_MDWE2            MLB.MDWE2.R                   /* MIF Data Write Enable 2 Register */
#define MLB_MDWE3            MLB.MDWE3.R                   /* MIF Data Write Enable 3 Register */
#define MLB_MCTL             MLB.MCTL.R                    /* MIF Control Register */
#define MLB_MADR             MLB.MADR.R                    /* MIF Address Register */
#define MLB_ACTL             MLB.ACTL.R                    /* AHB Control Register */
#define MLB_ACSR0            MLB.ACSR0.R                   /* AHB Channel Status 0 Register */
#define MLB_ACSR1            MLB.ACSR1.R                   /* AHB Channel Status 1 Register */
#define MLB_ACMR0            MLB.ACMR0.R                   /* AHB Channel Mask 0 Register */
#define MLB_ACMR1            MLB.ACMR1.R                   /* AHB Channel Mask 1 Register */

/* PASS */
#define PASS_LCSTAT          PASS.LCSTAT.R                 /* Life Cycle Status Register */
#define PASS_CHSEL           PASS.CHSEL.R                  /* Challenge Selector Register */
#define PASS_CSTAT           PASS.CSTAT.R                  /* Challenge Status Register */
#define PASS_CIN0            PASS.CIN[0].R                 /* Challenge Input Register */
#define PASS_CIN1            PASS.CIN[1].R                 /* Challenge Input Register */
#define PASS_CIN2            PASS.CIN[2].R                 /* Challenge Input Register */
#define PASS_CIN3            PASS.CIN[3].R                 /* Challenge Input Register */
#define PASS_CIN4            PASS.CIN[4].R                 /* Challenge Input Register */
#define PASS_CIN5            PASS.CIN[5].R                 /* Challenge Input Register */
#define PASS_CIN6            PASS.CIN[6].R                 /* Challenge Input Register */
#define PASS_CIN7            PASS.CIN[7].R                 /* Challenge Input Register */
#define PASS_LOCK0_PG0       PASS.PG[0].LOCK0.R            /* Password Group n - Lock 0 Status Register */
#define PASS_LOCK1_PG0       PASS.PG[0].LOCK1.R            /* Password Group n - Lock 1 Status Register */
#define PASS_LOCK2_PG0       PASS.PG[0].LOCK2.R            /* Password Group n - Lock 2 Status Register */
#define PASS_LOCK3_PG0       PASS.PG[0].LOCK3.R            /* Password Group n - Lock 3 Status Register */
#define PASS_LOCK0_PG1       PASS.PG[1].LOCK0.R            /* Password Group n - Lock 0 Status Register */
#define PASS_LOCK1_PG1       PASS.PG[1].LOCK1.R            /* Password Group n - Lock 1 Status Register */
#define PASS_LOCK2_PG1       PASS.PG[1].LOCK2.R            /* Password Group n - Lock 2 Status Register */
#define PASS_LOCK3_PG1       PASS.PG[1].LOCK3.R            /* Password Group n - Lock 3 Status Register */
#define PASS_LOCK0_PG2       PASS.PG[2].LOCK0.R            /* Password Group n - Lock 0 Status Register */
#define PASS_LOCK1_PG2       PASS.PG[2].LOCK1.R            /* Password Group n - Lock 1 Status Register */
#define PASS_LOCK2_PG2       PASS.PG[2].LOCK2.R            /* Password Group n - Lock 2 Status Register */
#define PASS_LOCK3_PG2       PASS.PG[2].LOCK3.R            /* Password Group n - Lock 3 Status Register */
#define PASS_LOCK0_PG3       PASS.PG[3].LOCK0.R            /* Password Group n - Lock 0 Status Register */
#define PASS_LOCK1_PG3       PASS.PG[3].LOCK1.R            /* Password Group n - Lock 1 Status Register */
#define PASS_LOCK2_PG3       PASS.PG[3].LOCK2.R            /* Password Group n - Lock 2 Status Register */
#define PASS_LOCK3_PG3       PASS.PG[3].LOCK3.R            /* Password Group n - Lock 3 Status Register */

/* PCM */
#define PCM_IAHB_BE0         PCM.IAHB_BE0.R                /* Bus Bridge Configuration Register 0 */
#define PCM_IAHB_BE1         PCM.IAHB_BE1.R                /* Bus Bridge Configuration Register 0 */
#define PCM_IAHB_BE2         PCM.IAHB_BE2.R                /* Bus Bridge Configuration Register 0 */
#define PCM_IAHB_BE3         PCM.IAHB_BE3.R                /* Bus Bridge Configuration Register 3 */
#define PCM_IPS_CGM_EN0      PCM.IPS_CGM_EN0.R             /* IPS Clock Gating Module Enable 0 Register */
#define PCM_IPS_CGM_EN1      PCM.IPS_CGM_EN1.R             /* IPS Clock Gating Enable 1 Register */

/* PFLASH */
#define PFLASH_PFCR1         PFLASH.PFCR1.R                /* Platform Flash Configuration Register 1 */
#define PFLASH_PFCR2         PFLASH.PFCR2.R                /* Platform Flash Configuration Register 2 */
#define PFLASH_PFCR3         PFLASH.PFCR3.R                /* Platform Flash Configuration Register 3 */
#define PFLASH_PFAPR         PFLASH.PFAPR.R                /* Platform Flash Access Protection Register */
#define PFLASH_PFCRCR        PFLASH.PFCRCR.R               /* Platform Flash Remap Control Register */
#define PFLASH_PFCRDE        PFLASH.PFCRDE.R               /* Platform Flash Remap Descriptor Enable Register */
#define PFLASH_PFCR4         PFLASH.PFCR4.R                /* Platform Flash Configuration Register 4 */
#define PFLASH_PFCRD0_Word0  PFLASH.PFCRD[0].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD0_Word1  PFLASH.PFCRD[0].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD0_Word2  PFLASH.PFCRD[0].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD1_Word0  PFLASH.PFCRD[1].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD1_Word1  PFLASH.PFCRD[1].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD1_Word2  PFLASH.PFCRD[1].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD2_Word0  PFLASH.PFCRD[2].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD2_Word1  PFLASH.PFCRD[2].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD2_Word2  PFLASH.PFCRD[2].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD3_Word0  PFLASH.PFCRD[3].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD3_Word1  PFLASH.PFCRD[3].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD3_Word2  PFLASH.PFCRD[3].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD4_Word0  PFLASH.PFCRD[4].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD4_Word1  PFLASH.PFCRD[4].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD4_Word2  PFLASH.PFCRD[4].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD5_Word0  PFLASH.PFCRD[5].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD5_Word1  PFLASH.PFCRD[5].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD5_Word2  PFLASH.PFCRD[5].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD6_Word0  PFLASH.PFCRD[6].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD6_Word1  PFLASH.PFCRD[6].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD6_Word2  PFLASH.PFCRD[6].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */
#define PFLASH_PFCRD7_Word0  PFLASH.PFCRD[7].Word0.R       /* Platform Flash Calibration Region Descriptor n Word0 */
#define PFLASH_PFCRD7_Word1  PFLASH.PFCRD[7].Word1.R       /* Platform Flash Calibration Region Descriptor n Word1 */
#define PFLASH_PFCRD7_Word2  PFLASH.PFCRD[7].Word2.R       /* Platform Flash Calibration Region Descriptor n Word2 */

/* PIT */
#define PIT_MCR              PIT.MCR.R                     /* PIT Module Control Register */
#define PIT_RTI_LDVAL        PIT.RTI_LDVAL.R               /* Timer Load Value Register */
#define PIT_RTI_CVAL         PIT.RTI_CVAL.R                /* Current Timer Value Register */
#define PIT_RTI_TCTRL        PIT.RTI_TCTRL.R               /* Timer Control Register */
#define PIT_RTI_TFLG         PIT.RTI_TFLG.R                /* Timer Flag Register */
#define PIT_LDVAL0           PIT.TIMER[0].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL0            PIT.TIMER[0].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL0           PIT.TIMER[0].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG0            PIT.TIMER[0].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL1           PIT.TIMER[1].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL1            PIT.TIMER[1].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL1           PIT.TIMER[1].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG1            PIT.TIMER[1].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL2           PIT.TIMER[2].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL2            PIT.TIMER[2].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL2           PIT.TIMER[2].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG2            PIT.TIMER[2].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL3           PIT.TIMER[3].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL3            PIT.TIMER[3].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL3           PIT.TIMER[3].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG3            PIT.TIMER[3].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL4           PIT.TIMER[4].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL4            PIT.TIMER[4].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL4           PIT.TIMER[4].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG4            PIT.TIMER[4].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL5           PIT.TIMER[5].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL5            PIT.TIMER[5].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL5           PIT.TIMER[5].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG5            PIT.TIMER[5].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL6           PIT.TIMER[6].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL6            PIT.TIMER[6].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL6           PIT.TIMER[6].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG6            PIT.TIMER[6].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL7           PIT.TIMER[7].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL7            PIT.TIMER[7].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL7           PIT.TIMER[7].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG7            PIT.TIMER[7].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL8           PIT.TIMER[8].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL8            PIT.TIMER[8].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL8           PIT.TIMER[8].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG8            PIT.TIMER[8].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL9           PIT.TIMER[9].LDVAL.R          /* Timer Load Value Register */
#define PIT_CVAL9            PIT.TIMER[9].CVAL.R           /* Current Timer Value Register */
#define PIT_TCTRL9           PIT.TIMER[9].TCTRL.R          /* Timer Control Register */
#define PIT_TFLG9            PIT.TIMER[9].TFLG.R           /* Timer Flag Register */
#define PIT_LDVAL10          PIT.TIMER[10].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL10           PIT.TIMER[10].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL10          PIT.TIMER[10].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG10           PIT.TIMER[10].TFLG.R          /* Timer Flag Register */
#define PIT_LDVAL11          PIT.TIMER[11].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL11           PIT.TIMER[11].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL11          PIT.TIMER[11].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG11           PIT.TIMER[11].TFLG.R          /* Timer Flag Register */
#define PIT_LDVAL12          PIT.TIMER[12].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL12           PIT.TIMER[12].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL12          PIT.TIMER[12].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG12           PIT.TIMER[12].TFLG.R          /* Timer Flag Register */
#define PIT_LDVAL13          PIT.TIMER[13].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL13           PIT.TIMER[13].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL13          PIT.TIMER[13].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG13           PIT.TIMER[13].TFLG.R          /* Timer Flag Register */
#define PIT_LDVAL14          PIT.TIMER[14].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL14           PIT.TIMER[14].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL14          PIT.TIMER[14].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG14           PIT.TIMER[14].TFLG.R          /* Timer Flag Register */
#define PIT_LDVAL15          PIT.TIMER[15].LDVAL.R         /* Timer Load Value Register */
#define PIT_CVAL15           PIT.TIMER[15].CVAL.R          /* Current Timer Value Register */
#define PIT_TCTRL15          PIT.TIMER[15].TCTRL.R         /* Timer Control Register */
#define PIT_TFLG15           PIT.TIMER[15].TFLG.R          /* Timer Flag Register */

/* PLLDIG */
#define PLLDIG_PLLCAL3       PLLDIG.PLLCAL3.R              /* PLLDIG PLL Calibration 3 Register */
#define PLLDIG_PLLCR         PLLDIG.PLLCR.R                /* PLLDIG PLL Control Register */
#define PLLDIG_PLLSR         PLLDIG.PLLSR.R                /* PLLDIG PLL Status Register */
#define PLLDIG_PLLDV         PLLDIG.PLLDV.R                /* PLLDIG PLL Divider Register */
#define PLLDIG_PLLFM         PLLDIG.PLLFM.R                /* PLLDIG PLL Frequency Modulation Register */
#define PLLDIG_PLLFD         PLLDIG.PLLFD.R                /* PLLDIG PLL Fractional Divide Register */

/* PMCDIG */
#define PMCDIG_RDCR          PMCDIG.RDCR.R                 /* RAM Domain Configuration Register */
#define PMCDIG_SGSR          PMCDIG.SGSR.R                 /* Supply Gauge Status Register */
#define PMCDIG_MCR           PMCDIG.MCR.R                  /* MISC Control Register */

/* PRAMC */
#define PRAMC_0_PRCR1        PRAMC_0.PRCR1.R               /* Platform RAM Configuration Register 1 */

/* PRAMC */
#define PRAMC_1_PRCR1        PRAMC_1.PRCR1.R               /* Platform RAM Configuration Register 1 */

/* PRAMC */
#define PRAMC_2_PRCR1        PRAMC_2.PRCR1.R               /* Platform RAM Configuration Register 1 */

/* RTC */
#define RTC_RTCSUPV          RTC.RTCSUPV.R                 /* RTC Supervisor Control register */
#define RTC_RTCC             RTC.RTCC.R                    /* RTC Control register */
#define RTC_RTCS             RTC.RTCS.R                    /* RTC Status register */
#define RTC_RTCCNT           RTC.RTCCNT.R                  /* RTC Counter register */
#define RTC_APIVAL           RTC.APIVAL.R                  /* API Compare Value register */
#define RTC_RTCVAL           RTC.RTCVAL.R                  /* RTC Compare Value register */
#define RTC_ANLCMP_CNT       RTC.ANLCMP_CNT.R              /* RTC Analogue comparator count register */

/* SEMA42 */
#define SEMA42_GATE0         SEMA42.GATE[0].R              /* Gate Register */
#define SEMA42_GATE1         SEMA42.GATE[1].R              /* Gate Register */
#define SEMA42_GATE2         SEMA42.GATE[2].R              /* Gate Register */
#define SEMA42_GATE3         SEMA42.GATE[3].R              /* Gate Register */
#define SEMA42_GATE4         SEMA42.GATE[4].R              /* Gate Register */
#define SEMA42_GATE5         SEMA42.GATE[5].R              /* Gate Register */
#define SEMA42_GATE6         SEMA42.GATE[6].R              /* Gate Register */
#define SEMA42_GATE7         SEMA42.GATE[7].R              /* Gate Register */
#define SEMA42_GATE8         SEMA42.GATE[8].R              /* Gate Register */
#define SEMA42_GATE9         SEMA42.GATE[9].R              /* Gate Register */
#define SEMA42_GATE10        SEMA42.GATE[10].R             /* Gate Register */
#define SEMA42_GATE11        SEMA42.GATE[11].R             /* Gate Register */
#define SEMA42_GATE12        SEMA42.GATE[12].R             /* Gate Register */
#define SEMA42_GATE13        SEMA42.GATE[13].R             /* Gate Register */
#define SEMA42_GATE14        SEMA42.GATE[14].R             /* Gate Register */
#define SEMA42_GATE15        SEMA42.GATE[15].R             /* Gate Register */
#define SEMA42_RSTGT_R       SEMA42.RSTGT.R.R              /* Reset Gate Read */
#define SEMA42_RSTGT_W       SEMA42.RSTGT.W.R              /* Reset Gate Write */

/* SIRC */
#define SIRC_CTL             SIRC.CTL.R                    /* Control register */


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

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_3_H_ */
