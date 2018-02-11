/** @file MPC5748G_defines_2.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_2_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_2_H_

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
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_2_H__REVSTRING "$Revision: 0123 $"

/* CAN_0 */
#define CAN_0_MCR            CAN_0.MCR.R                   /* Module Configuration Register */

#define CAN_0_CTRL1          CAN_0.CTRL1.R                 /* Control 1 register */
#define CAN_0_TIMER          CAN_0.TIMER.R                 /* Free Running Timer */
#define CAN_0_RXMGMASK       CAN_0.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_0_RX14MASK       CAN_0.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_0_RX15MASK       CAN_0.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_0_ECR            CAN_0.ECR.R                   /* Error Counter */
#define CAN_0_ESR1           CAN_0.ESR1.R                  /* Error and Status 1 register */
#define CAN_0_IMASK2         CAN_0.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_0_IMASK1         CAN_0.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_0_IFLAG2         CAN_0.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_0_IFLAG1         CAN_0.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_0_CTRL2          CAN_0.CTRL2.R                 /* Control 2 register */
#define CAN_0_ESR2           CAN_0.ESR2.R                  /* Error and Status 2 register */
#define CAN_0_CRCR           CAN_0.CRCR.R                  /* CRC Register */
#define CAN_0_RXFGMASK       CAN_0.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_0_RXFIR          CAN_0.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_0_CBT            CAN_0.CBT.R                   /* CAN Bit Timing Register */
#define CAN_0_IMASK3         CAN_0.IMASK3.R                /* Interrupt Masks 3 Register */
#define CAN_0_IFLAG3         CAN_0.IFLAG3.R                /* Interrupt Flags 3 Register */

#define CAN_0_CS0            CAN_0.MB[0].CS.R              /* Message Buffer 0 CS Register */
#define CAN_0_ID0            CAN_0.MB[0].ID.R              /* Message Buffer 0 ID Register */
#define CAN_0_B0             CAN_0.MB[0].DATA.B            /* Message Buffer 0 B Register */
#define CAN_0_H0             CAN_0.MB[0].DATA.H            /* Message Buffer 0 H Register */
#define CAN_0_W0             CAN_0.MB[0].DATA.W            /* Message Buffer 0 W Register */
#define CAN_0_CS1            CAN_0.MB[1].CS.R              /* Message Buffer 1 CS Register */
#define CAN_0_ID1            CAN_0.MB[1].ID.R              /* Message Buffer 1 ID Register */
#define CAN_0_B1             CAN_0.MB[1].DATA.B            /* Message Buffer 1 B Register */
#define CAN_0_H1             CAN_0.MB[1].DATA.H            /* Message Buffer 1 H Register */
#define CAN_0_W1             CAN_0.MB[1].DATA.W            /* Message Buffer 1 W Register */
#define CAN_0_CS2            CAN_0.MB[2].CS.R              /* Message Buffer 2 CS Register */
#define CAN_0_ID2            CAN_0.MB[2].ID.R              /* Message Buffer 2 ID Register */
#define CAN_0_B2             CAN_0.MB[2].DATA.B            /* Message Buffer 2 B Register */
#define CAN_0_H2             CAN_0.MB[2].DATA.H            /* Message Buffer 2 H Register */
#define CAN_0_W2             CAN_0.MB[2].DATA.W            /* Message Buffer 2 W Register */
#define CAN_0_CS3            CAN_0.MB[3].CS.R              /* Message Buffer 3 CS Register */
#define CAN_0_ID3            CAN_0.MB[3].ID.R              /* Message Buffer 3 ID Register */
#define CAN_0_B3             CAN_0.MB[3].DATA.B            /* Message Buffer 3 B Register */
#define CAN_0_H3             CAN_0.MB[3].DATA.H            /* Message Buffer 3 H Register */
#define CAN_0_W3             CAN_0.MB[3].DATA.W            /* Message Buffer 3 W Register */
#define CAN_0_CS4            CAN_0.MB[4].CS.R              /* Message Buffer 4 CS Register */
#define CAN_0_ID4            CAN_0.MB[4].ID.R              /* Message Buffer 4 ID Register */
#define CAN_0_B4             CAN_0.MB[4].DATA.B            /* Message Buffer 4 B Register */
#define CAN_0_H4             CAN_0.MB[4].DATA.H            /* Message Buffer 4 H Register */
#define CAN_0_W4             CAN_0.MB[4].DATA.W            /* Message Buffer 4 W Register */
#define CAN_0_CS5            CAN_0.MB[5].CS.R              /* Message Buffer 5 CS Register */
#define CAN_0_ID5            CAN_0.MB[5].ID.R              /* Message Buffer 5 ID Register */
#define CAN_0_B5             CAN_0.MB[5].DATA.B            /* Message Buffer 5 B Register */
#define CAN_0_H5             CAN_0.MB[5].DATA.H            /* Message Buffer 5 H Register */
#define CAN_0_W5             CAN_0.MB[5].DATA.W            /* Message Buffer 5 W Register */
#define CAN_0_CS6            CAN_0.MB[6].CS.R              /* Message Buffer 6 CS Register */
#define CAN_0_ID6            CAN_0.MB[6].ID.R              /* Message Buffer 6 ID Register */
#define CAN_0_B6             CAN_0.MB[6].DATA.B            /* Message Buffer 6 B Register */
#define CAN_0_H6             CAN_0.MB[6].DATA.H            /* Message Buffer 6 H Register */
#define CAN_0_W6             CAN_0.MB[6].DATA.W            /* Message Buffer 6 W Register */
#define CAN_0_CS7            CAN_0.MB[7].CS.R              /* Message Buffer 7 CS Register */
#define CAN_0_ID7            CAN_0.MB[7].ID.R              /* Message Buffer 7 ID Register */
#define CAN_0_B7             CAN_0.MB[7].DATA.B            /* Message Buffer 7 B Register */
#define CAN_0_H7             CAN_0.MB[7].DATA.H            /* Message Buffer 7 H Register */
#define CAN_0_W7             CAN_0.MB[7].DATA.W            /* Message Buffer 7 W Register */
#define CAN_0_CS8            CAN_0.MB[8].CS.R              /* Message Buffer 8 CS Register */
#define CAN_0_ID8            CAN_0.MB[8].ID.R              /* Message Buffer 8 ID Register */
#define CAN_0_B8             CAN_0.MB[8].DATA.B            /* Message Buffer 8 B Register */
#define CAN_0_H8             CAN_0.MB[8].DATA.H            /* Message Buffer 8 H Register */
#define CAN_0_W8             CAN_0.MB[8].DATA.W            /* Message Buffer 8 W Register */
#define CAN_0_CS9            CAN_0.MB[9].CS.R              /* Message Buffer 9 CS Register */
#define CAN_0_ID9            CAN_0.MB[9].ID.R              /* Message Buffer 9 ID Register */
#define CAN_0_B9             CAN_0.MB[9].DATA.B            /* Message Buffer 9 B Register */
#define CAN_0_H9             CAN_0.MB[9].DATA.H            /* Message Buffer 9 H Register */
#define CAN_0_W9             CAN_0.MB[9].DATA.W            /* Message Buffer 9 W Register */
#define CAN_0_CS10           CAN_0.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_0_ID10           CAN_0.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_0_B10            CAN_0.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_0_H10            CAN_0.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_0_W10            CAN_0.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_0_CS11           CAN_0.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_0_ID11           CAN_0.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_0_B11            CAN_0.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_0_H11            CAN_0.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_0_W11            CAN_0.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_0_CS12           CAN_0.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_0_ID12           CAN_0.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_0_B12            CAN_0.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_0_H12            CAN_0.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_0_W12            CAN_0.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_0_CS13           CAN_0.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_0_ID13           CAN_0.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_0_B13            CAN_0.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_0_H13            CAN_0.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_0_W13            CAN_0.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_0_CS14           CAN_0.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_0_ID14           CAN_0.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_0_B14            CAN_0.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_0_H14            CAN_0.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_0_W14            CAN_0.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_0_CS15           CAN_0.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_0_ID15           CAN_0.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_0_B15            CAN_0.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_0_H15            CAN_0.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_0_W15            CAN_0.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_0_CS16           CAN_0.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_0_ID16           CAN_0.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_0_B16            CAN_0.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_0_H16            CAN_0.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_0_W16            CAN_0.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_0_CS17           CAN_0.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_0_ID17           CAN_0.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_0_B17            CAN_0.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_0_H17            CAN_0.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_0_W17            CAN_0.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_0_CS18           CAN_0.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_0_ID18           CAN_0.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_0_B18            CAN_0.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_0_H18            CAN_0.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_0_W18            CAN_0.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_0_CS19           CAN_0.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_0_ID19           CAN_0.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_0_B19            CAN_0.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_0_H19            CAN_0.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_0_W19            CAN_0.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_0_CS20           CAN_0.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_0_ID20           CAN_0.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_0_B20            CAN_0.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_0_H20            CAN_0.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_0_W20            CAN_0.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_0_CS21           CAN_0.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_0_ID21           CAN_0.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_0_B21            CAN_0.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_0_H21            CAN_0.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_0_W21            CAN_0.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_0_CS22           CAN_0.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_0_ID22           CAN_0.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_0_B22            CAN_0.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_0_H22            CAN_0.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_0_W22            CAN_0.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_0_CS23           CAN_0.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_0_ID23           CAN_0.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_0_B23            CAN_0.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_0_H23            CAN_0.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_0_W23            CAN_0.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_0_CS24           CAN_0.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_0_ID24           CAN_0.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_0_B24            CAN_0.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_0_H24            CAN_0.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_0_W24            CAN_0.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_0_CS25           CAN_0.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_0_ID25           CAN_0.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_0_B25            CAN_0.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_0_H25            CAN_0.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_0_W25            CAN_0.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_0_CS26           CAN_0.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_0_ID26           CAN_0.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_0_B26            CAN_0.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_0_H26            CAN_0.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_0_W26            CAN_0.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_0_CS27           CAN_0.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_0_ID27           CAN_0.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_0_B27            CAN_0.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_0_H27            CAN_0.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_0_W27            CAN_0.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_0_CS28           CAN_0.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_0_ID28           CAN_0.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_0_B28            CAN_0.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_0_H28            CAN_0.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_0_W28            CAN_0.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_0_CS29           CAN_0.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_0_ID29           CAN_0.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_0_B29            CAN_0.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_0_H29            CAN_0.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_0_W29            CAN_0.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_0_CS30           CAN_0.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_0_ID30           CAN_0.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_0_B30            CAN_0.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_0_H30            CAN_0.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_0_W30            CAN_0.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_0_CS31           CAN_0.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_0_ID31           CAN_0.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_0_B31            CAN_0.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_0_H31            CAN_0.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_0_W31            CAN_0.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_0_CS32           CAN_0.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_0_ID32           CAN_0.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_0_B32            CAN_0.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_0_H32            CAN_0.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_0_W32            CAN_0.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_0_CS33           CAN_0.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_0_ID33           CAN_0.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_0_B33            CAN_0.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_0_H33            CAN_0.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_0_W33            CAN_0.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_0_CS34           CAN_0.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_0_ID34           CAN_0.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_0_B34            CAN_0.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_0_H34            CAN_0.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_0_W34            CAN_0.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_0_CS35           CAN_0.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_0_ID35           CAN_0.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_0_B35            CAN_0.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_0_H35            CAN_0.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_0_W35            CAN_0.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_0_CS36           CAN_0.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_0_ID36           CAN_0.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_0_B36            CAN_0.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_0_H36            CAN_0.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_0_W36            CAN_0.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_0_CS37           CAN_0.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_0_ID37           CAN_0.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_0_B37            CAN_0.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_0_H37            CAN_0.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_0_W37            CAN_0.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_0_CS38           CAN_0.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_0_ID38           CAN_0.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_0_B38            CAN_0.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_0_H38            CAN_0.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_0_W38            CAN_0.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_0_CS39           CAN_0.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_0_ID39           CAN_0.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_0_B39            CAN_0.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_0_H39            CAN_0.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_0_W39            CAN_0.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_0_CS40           CAN_0.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_0_ID40           CAN_0.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_0_B40            CAN_0.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_0_H40            CAN_0.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_0_W40            CAN_0.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_0_CS41           CAN_0.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_0_ID41           CAN_0.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_0_B41            CAN_0.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_0_H41            CAN_0.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_0_W41            CAN_0.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_0_CS42           CAN_0.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_0_ID42           CAN_0.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_0_B42            CAN_0.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_0_H42            CAN_0.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_0_W42            CAN_0.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_0_CS43           CAN_0.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_0_ID43           CAN_0.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_0_B43            CAN_0.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_0_H43            CAN_0.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_0_W43            CAN_0.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_0_CS44           CAN_0.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_0_ID44           CAN_0.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_0_B44            CAN_0.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_0_H44            CAN_0.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_0_W44            CAN_0.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_0_CS45           CAN_0.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_0_ID45           CAN_0.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_0_B45            CAN_0.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_0_H45            CAN_0.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_0_W45            CAN_0.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_0_CS46           CAN_0.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_0_ID46           CAN_0.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_0_B46            CAN_0.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_0_H46            CAN_0.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_0_W46            CAN_0.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_0_CS47           CAN_0.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_0_ID47           CAN_0.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_0_B47            CAN_0.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_0_H47            CAN_0.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_0_W47            CAN_0.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_0_CS48           CAN_0.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_0_ID48           CAN_0.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_0_B48            CAN_0.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_0_H48            CAN_0.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_0_W48            CAN_0.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_0_CS49           CAN_0.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_0_ID49           CAN_0.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_0_B49            CAN_0.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_0_H49            CAN_0.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_0_W49            CAN_0.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_0_CS50           CAN_0.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_0_ID50           CAN_0.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_0_B50            CAN_0.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_0_H50            CAN_0.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_0_W50            CAN_0.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_0_CS51           CAN_0.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_0_ID51           CAN_0.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_0_B51            CAN_0.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_0_H51            CAN_0.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_0_W51            CAN_0.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_0_CS52           CAN_0.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_0_ID52           CAN_0.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_0_B52            CAN_0.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_0_H52            CAN_0.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_0_W52            CAN_0.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_0_CS53           CAN_0.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_0_ID53           CAN_0.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_0_B53            CAN_0.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_0_H53            CAN_0.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_0_W53            CAN_0.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_0_CS54           CAN_0.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_0_ID54           CAN_0.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_0_B54            CAN_0.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_0_H54            CAN_0.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_0_W54            CAN_0.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_0_CS55           CAN_0.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_0_ID55           CAN_0.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_0_B55            CAN_0.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_0_H55            CAN_0.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_0_W55            CAN_0.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_0_CS56           CAN_0.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_0_ID56           CAN_0.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_0_B56            CAN_0.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_0_H56            CAN_0.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_0_W56            CAN_0.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_0_CS57           CAN_0.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_0_ID57           CAN_0.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_0_B57            CAN_0.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_0_H57            CAN_0.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_0_W57            CAN_0.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_0_CS58           CAN_0.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_0_ID58           CAN_0.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_0_B58            CAN_0.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_0_H58            CAN_0.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_0_W58            CAN_0.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_0_CS59           CAN_0.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_0_ID59           CAN_0.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_0_B59            CAN_0.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_0_H59            CAN_0.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_0_W59            CAN_0.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_0_CS60           CAN_0.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_0_ID60           CAN_0.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_0_B60            CAN_0.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_0_H60            CAN_0.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_0_W60            CAN_0.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_0_CS61           CAN_0.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_0_ID61           CAN_0.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_0_B61            CAN_0.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_0_H61            CAN_0.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_0_W61            CAN_0.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_0_CS62           CAN_0.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_0_ID62           CAN_0.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_0_B62            CAN_0.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_0_H62            CAN_0.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_0_W62            CAN_0.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_0_CS63           CAN_0.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_0_ID63           CAN_0.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_0_B63            CAN_0.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_0_H63            CAN_0.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_0_W63            CAN_0.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_0_CS64           CAN_0.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_0_ID64           CAN_0.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_0_B64            CAN_0.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_0_H64            CAN_0.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_0_W64            CAN_0.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_0_CS65           CAN_0.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_0_ID65           CAN_0.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_0_B65            CAN_0.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_0_H65            CAN_0.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_0_W65            CAN_0.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_0_CS66           CAN_0.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_0_ID66           CAN_0.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_0_B66            CAN_0.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_0_H66            CAN_0.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_0_W66            CAN_0.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_0_CS67           CAN_0.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_0_ID67           CAN_0.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_0_B67            CAN_0.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_0_H67            CAN_0.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_0_W67            CAN_0.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_0_CS68           CAN_0.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_0_ID68           CAN_0.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_0_B68            CAN_0.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_0_H68            CAN_0.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_0_W68            CAN_0.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_0_CS69           CAN_0.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_0_ID69           CAN_0.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_0_B69            CAN_0.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_0_H69            CAN_0.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_0_W69            CAN_0.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_0_CS70           CAN_0.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_0_ID70           CAN_0.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_0_B70            CAN_0.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_0_H70            CAN_0.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_0_W70            CAN_0.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_0_CS71           CAN_0.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_0_ID71           CAN_0.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_0_B71            CAN_0.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_0_H71            CAN_0.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_0_W71            CAN_0.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_0_CS72           CAN_0.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_0_ID72           CAN_0.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_0_B72            CAN_0.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_0_H72            CAN_0.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_0_W72            CAN_0.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_0_CS73           CAN_0.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_0_ID73           CAN_0.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_0_B73            CAN_0.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_0_H73            CAN_0.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_0_W73            CAN_0.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_0_CS74           CAN_0.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_0_ID74           CAN_0.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_0_B74            CAN_0.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_0_H74            CAN_0.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_0_W74            CAN_0.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_0_CS75           CAN_0.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_0_ID75           CAN_0.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_0_B75            CAN_0.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_0_H75            CAN_0.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_0_W75            CAN_0.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_0_CS76           CAN_0.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_0_ID76           CAN_0.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_0_B76            CAN_0.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_0_H76            CAN_0.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_0_W76            CAN_0.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_0_CS77           CAN_0.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_0_ID77           CAN_0.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_0_B77            CAN_0.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_0_H77            CAN_0.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_0_W77            CAN_0.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_0_CS78           CAN_0.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_0_ID78           CAN_0.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_0_B78            CAN_0.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_0_H78            CAN_0.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_0_W78            CAN_0.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_0_CS79           CAN_0.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_0_ID79           CAN_0.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_0_B79            CAN_0.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_0_H79            CAN_0.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_0_W79            CAN_0.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_0_CS80           CAN_0.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_0_ID80           CAN_0.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_0_B80            CAN_0.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_0_H80            CAN_0.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_0_W80            CAN_0.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_0_CS81           CAN_0.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_0_ID81           CAN_0.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_0_B81            CAN_0.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_0_H81            CAN_0.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_0_W81            CAN_0.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_0_CS82           CAN_0.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_0_ID82           CAN_0.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_0_B82            CAN_0.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_0_H82            CAN_0.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_0_W82            CAN_0.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_0_CS83           CAN_0.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_0_ID83           CAN_0.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_0_B83            CAN_0.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_0_H83            CAN_0.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_0_W83            CAN_0.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_0_CS84           CAN_0.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_0_ID84           CAN_0.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_0_B84            CAN_0.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_0_H84            CAN_0.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_0_W84            CAN_0.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_0_CS85           CAN_0.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_0_ID85           CAN_0.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_0_B85            CAN_0.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_0_H85            CAN_0.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_0_W85            CAN_0.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_0_CS86           CAN_0.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_0_ID86           CAN_0.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_0_B86            CAN_0.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_0_H86            CAN_0.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_0_W86            CAN_0.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_0_CS87           CAN_0.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_0_ID87           CAN_0.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_0_B87            CAN_0.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_0_H87            CAN_0.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_0_W87            CAN_0.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_0_CS88           CAN_0.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_0_ID88           CAN_0.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_0_B88            CAN_0.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_0_H88            CAN_0.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_0_W88            CAN_0.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_0_CS89           CAN_0.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_0_ID89           CAN_0.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_0_B89            CAN_0.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_0_H89            CAN_0.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_0_W89            CAN_0.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_0_CS90           CAN_0.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_0_ID90           CAN_0.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_0_B90            CAN_0.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_0_H90            CAN_0.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_0_W90            CAN_0.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_0_CS91           CAN_0.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_0_ID91           CAN_0.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_0_B91            CAN_0.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_0_H91            CAN_0.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_0_W91            CAN_0.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_0_CS92           CAN_0.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_0_ID92           CAN_0.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_0_B92            CAN_0.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_0_H92            CAN_0.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_0_W92            CAN_0.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_0_CS93           CAN_0.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_0_ID93           CAN_0.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_0_B93            CAN_0.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_0_H93            CAN_0.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_0_W93            CAN_0.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_0_CS94           CAN_0.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_0_ID94           CAN_0.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_0_B94            CAN_0.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_0_H94            CAN_0.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_0_W94            CAN_0.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_0_CS95           CAN_0.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_0_ID95           CAN_0.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_0_B95            CAN_0.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_0_H95            CAN_0.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_0_W95            CAN_0.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_0_RXIMR0         CAN_0.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR1         CAN_0.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR2         CAN_0.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR3         CAN_0.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR4         CAN_0.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR5         CAN_0.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR6         CAN_0.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR7         CAN_0.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR8         CAN_0.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR9         CAN_0.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_0_RXIMR10        CAN_0.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR11        CAN_0.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR12        CAN_0.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR13        CAN_0.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR14        CAN_0.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR15        CAN_0.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR16        CAN_0.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR17        CAN_0.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR18        CAN_0.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR19        CAN_0.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR20        CAN_0.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR21        CAN_0.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR22        CAN_0.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR23        CAN_0.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR24        CAN_0.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR25        CAN_0.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR26        CAN_0.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR27        CAN_0.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR28        CAN_0.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR29        CAN_0.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR30        CAN_0.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR31        CAN_0.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR32        CAN_0.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR33        CAN_0.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR34        CAN_0.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR35        CAN_0.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR36        CAN_0.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR37        CAN_0.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR38        CAN_0.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR39        CAN_0.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR40        CAN_0.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR41        CAN_0.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR42        CAN_0.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR43        CAN_0.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR44        CAN_0.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR45        CAN_0.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR46        CAN_0.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR47        CAN_0.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR48        CAN_0.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR49        CAN_0.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR50        CAN_0.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR51        CAN_0.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR52        CAN_0.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR53        CAN_0.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR54        CAN_0.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR55        CAN_0.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR56        CAN_0.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR57        CAN_0.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR58        CAN_0.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR59        CAN_0.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR60        CAN_0.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR61        CAN_0.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR62        CAN_0.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR63        CAN_0.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR64        CAN_0.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR65        CAN_0.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR66        CAN_0.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR67        CAN_0.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR68        CAN_0.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR69        CAN_0.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR70        CAN_0.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR71        CAN_0.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR72        CAN_0.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR73        CAN_0.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR74        CAN_0.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR75        CAN_0.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR76        CAN_0.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR77        CAN_0.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR78        CAN_0.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR79        CAN_0.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR80        CAN_0.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR81        CAN_0.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR82        CAN_0.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR83        CAN_0.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR84        CAN_0.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR85        CAN_0.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR86        CAN_0.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR87        CAN_0.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR88        CAN_0.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR89        CAN_0.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR90        CAN_0.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR91        CAN_0.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR92        CAN_0.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR93        CAN_0.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR94        CAN_0.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_0_RXIMR95        CAN_0.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_0_MECR           CAN_0.MECR.R                  /* Memory Error Control Register */
#define CAN_0_ERRIAR         CAN_0.ERRIAR.R                /* Error Injection Address Register */
#define CAN_0_ERRIDPR        CAN_0.ERRIDPR.R               /* Error Injection Data Pattern Register */
#define CAN_0_ERRIPPR        CAN_0.ERRIPPR.R               /* Error Injection Parity Pattern Register */
#define CAN_0_RERRAR         CAN_0.RERRAR.R                /* Error Report Address Register */
#define CAN_0_RERRDR         CAN_0.RERRDR.R                /* Error Report Data Register */
#define CAN_0_RERRSYNR       CAN_0.RERRSYNR.R              /* Error Report Syndrome Register */
#define CAN_0_ERRSR          CAN_0.ERRSR.R                 /* Error Status Register */
#define CAN_0_CTRL1_PN       CAN_0.CTRL1_PN.R              /* Pretended Networking Control 1 Register */
#define CAN_0_CTRL2_PN       CAN_0.CTRL2_PN.R              /* Pretended Networking Control 2 Register */
#define CAN_0_WU_MTC         CAN_0.WU_MTC.R                /* Pretended Networking Wake Up Match Register */
#define CAN_0_FLT_ID1        CAN_0.FLT_ID1.R               /* Pretended Networking ID Filter 1 Register */
#define CAN_0_FLT_DLC        CAN_0.FLT_DLC.R               /* Pretended Networking DLC Filter Register */
#define CAN_0_PL1_LO         CAN_0.PL1_LO.R                /* Pretended Networking Payload Low Filter 1 Register */
#define CAN_0_PL1_HI         CAN_0.PL1_HI.R                /* Pretended Networking Payload High Filter 1 Register */
#define CAN_0_FLT_ID2_IDMASK CAN_0.FLT_ID2_IDMASK.R        /* Pretended Networking ID Filter 2 Register / ID Mask Register */
#define CAN_0_PL2_PLMASK_LO  CAN_0.PL2_PLMASK_LO.R         /* Pretended Networking Payload Low Filter 2 Register / Payload Low Mask Register */
#define CAN_0_PL2_PLMASK_HI  CAN_0.PL2_PLMASK_HI.R         /* Pretended Networking Payload High Filter 2 low order bits / Payload High Mask Register */
#define CAN_0_WMB0_CS        CAN_0.WMB[0].CS.R             /* Wake Up Message Buffer Register for C/S */
#define CAN_0_WMB0_ID        CAN_0.WMB[0].ID.R             /* Wake Up Message Buffer Register for ID */
#define CAN_0_WMB0_D03       CAN_0.WMB[0].D03.R            /* Wake Up Message Buffer Register for Data 0-3 */
#define CAN_0_WMB0_D47       CAN_0.WMB[0].D47.R            /* Wake Up Message Buffer Register Data 4-7 */
#define CAN_0_WMB1_CS        CAN_0.WMB[1].CS.R             /* Wake Up Message Buffer Register for C/S */
#define CAN_0_WMB1_ID        CAN_0.WMB[1].ID.R             /* Wake Up Message Buffer Register for ID */
#define CAN_0_WMB1_D03       CAN_0.WMB[1].D03.R            /* Wake Up Message Buffer Register for Data 0-3 */
#define CAN_0_WMB1_D47       CAN_0.WMB[1].D47.R            /* Wake Up Message Buffer Register Data 4-7 */
#define CAN_0_WMB2_CS        CAN_0.WMB[2].CS.R             /* Wake Up Message Buffer Register for C/S */
#define CAN_0_WMB2_ID        CAN_0.WMB[2].ID.R             /* Wake Up Message Buffer Register for ID */
#define CAN_0_WMB2_D03       CAN_0.WMB[2].D03.R            /* Wake Up Message Buffer Register for Data 0-3 */
#define CAN_0_WMB2_D47       CAN_0.WMB[2].D47.R            /* Wake Up Message Buffer Register Data 4-7 */
#define CAN_0_WMB3_CS        CAN_0.WMB[3].CS.R             /* Wake Up Message Buffer Register for C/S */
#define CAN_0_WMB3_ID        CAN_0.WMB[3].ID.R             /* Wake Up Message Buffer Register for ID */
#define CAN_0_WMB3_D03       CAN_0.WMB[3].D03.R            /* Wake Up Message Buffer Register for Data 0-3 */
#define CAN_0_WMB3_D47       CAN_0.WMB[3].D47.R            /* Wake Up Message Buffer Register Data 4-7 */
#define CAN_0_FDCTRL         CAN_0.FDCTRL.R                /* CAN FD Control Register */
#define CAN_0_FDCBT          CAN_0.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_0_FDCRC          CAN_0.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_1_MCR            CAN_1.MCR.R                   /* Module Configuration Register */
#define CAN_1_CTRL1          CAN_1.CTRL1.R                 /* Control 1 register */
#define CAN_1_TIMER          CAN_1.TIMER.R                 /* Free Running Timer */
#define CAN_1_RXMGMASK       CAN_1.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_1_RX14MASK       CAN_1.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_1_RX15MASK       CAN_1.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_1_ECR            CAN_1.ECR.R                   /* Error Counter */
#define CAN_1_ESR1           CAN_1.ESR1.R                  /* Error and Status 1 register */
#define CAN_1_IMASK2         CAN_1.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_1_IMASK1         CAN_1.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_1_IFLAG2         CAN_1.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_1_IFLAG1         CAN_1.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_1_CTRL2          CAN_1.CTRL2.R                 /* Control 2 register */
#define CAN_1_ESR2           CAN_1.ESR2.R                  /* Error and Status 2 register */
#define CAN_1_CRCR           CAN_1.CRCR.R                  /* CRC Register */
#define CAN_1_RXFGMASK       CAN_1.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_1_RXFIR          CAN_1.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_1_CS0            CAN_1.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_1_ID0            CAN_1.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_1_B0             CAN_1.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_1_H0             CAN_1.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_1_W0             CAN_1.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_1_CS1            CAN_1.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_1_ID1            CAN_1.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_1_B1             CAN_1.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_1_H1             CAN_1.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_1_W1             CAN_1.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_1_CS2            CAN_1.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_1_ID2            CAN_1.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_1_B2             CAN_1.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_1_H2             CAN_1.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_1_W2             CAN_1.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_1_CS3            CAN_1.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_1_ID3            CAN_1.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_1_B3             CAN_1.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_1_H3             CAN_1.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_1_W3             CAN_1.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_1_CS4            CAN_1.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_1_ID4            CAN_1.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_1_B4             CAN_1.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_1_H4             CAN_1.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_1_W4             CAN_1.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_1_CS5            CAN_1.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_1_ID5            CAN_1.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_1_B5             CAN_1.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_1_H5             CAN_1.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_1_W5             CAN_1.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_1_CS6            CAN_1.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_1_ID6            CAN_1.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_1_B6             CAN_1.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_1_H6             CAN_1.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_1_W6             CAN_1.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_1_CS7            CAN_1.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_1_ID7            CAN_1.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_1_B7             CAN_1.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_1_H7             CAN_1.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_1_W7             CAN_1.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_1_CS8            CAN_1.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_1_ID8            CAN_1.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_1_B8             CAN_1.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_1_H8             CAN_1.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_1_W8             CAN_1.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_1_CS9            CAN_1.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_1_ID9            CAN_1.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_1_B9             CAN_1.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_1_H9             CAN_1.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_1_W9             CAN_1.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_1_CS10           CAN_1.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_1_ID10           CAN_1.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_1_B10            CAN_1.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_1_H10            CAN_1.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_1_W10            CAN_1.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_1_CS11           CAN_1.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_1_ID11           CAN_1.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_1_B11            CAN_1.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_1_H11            CAN_1.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_1_W11            CAN_1.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_1_CS12           CAN_1.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_1_ID12           CAN_1.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_1_B12            CAN_1.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_1_H12            CAN_1.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_1_W12            CAN_1.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_1_CS13           CAN_1.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_1_ID13           CAN_1.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_1_B13            CAN_1.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_1_H13            CAN_1.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_1_W13            CAN_1.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_1_CS14           CAN_1.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_1_ID14           CAN_1.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_1_B14            CAN_1.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_1_H14            CAN_1.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_1_W14            CAN_1.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_1_CS15           CAN_1.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_1_ID15           CAN_1.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_1_B15            CAN_1.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_1_H15            CAN_1.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_1_W15            CAN_1.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_1_CS16           CAN_1.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_1_ID16           CAN_1.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_1_B16            CAN_1.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_1_H16            CAN_1.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_1_W16            CAN_1.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_1_CS17           CAN_1.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_1_ID17           CAN_1.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_1_B17            CAN_1.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_1_H17            CAN_1.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_1_W17            CAN_1.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_1_CS18           CAN_1.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_1_ID18           CAN_1.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_1_B18            CAN_1.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_1_H18            CAN_1.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_1_W18            CAN_1.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_1_CS19           CAN_1.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_1_ID19           CAN_1.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_1_B19            CAN_1.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_1_H19            CAN_1.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_1_W19            CAN_1.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_1_CS20           CAN_1.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_1_ID20           CAN_1.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_1_B20            CAN_1.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_1_H20            CAN_1.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_1_W20            CAN_1.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_1_CS21           CAN_1.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_1_ID21           CAN_1.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_1_B21            CAN_1.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_1_H21            CAN_1.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_1_W21            CAN_1.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_1_CS22           CAN_1.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_1_ID22           CAN_1.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_1_B22            CAN_1.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_1_H22            CAN_1.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_1_W22            CAN_1.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_1_CS23           CAN_1.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_1_ID23           CAN_1.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_1_B23            CAN_1.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_1_H23            CAN_1.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_1_W23            CAN_1.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_1_CS24           CAN_1.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_1_ID24           CAN_1.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_1_B24            CAN_1.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_1_H24            CAN_1.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_1_W24            CAN_1.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_1_CS25           CAN_1.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_1_ID25           CAN_1.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_1_B25            CAN_1.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_1_H25            CAN_1.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_1_W25            CAN_1.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_1_CS26           CAN_1.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_1_ID26           CAN_1.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_1_B26            CAN_1.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_1_H26            CAN_1.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_1_W26            CAN_1.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_1_CS27           CAN_1.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_1_ID27           CAN_1.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_1_B27            CAN_1.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_1_H27            CAN_1.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_1_W27            CAN_1.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_1_CS28           CAN_1.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_1_ID28           CAN_1.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_1_B28            CAN_1.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_1_H28            CAN_1.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_1_W28            CAN_1.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_1_CS29           CAN_1.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_1_ID29           CAN_1.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_1_B29            CAN_1.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_1_H29            CAN_1.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_1_W29            CAN_1.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_1_CS30           CAN_1.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_1_ID30           CAN_1.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_1_B30            CAN_1.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_1_H30            CAN_1.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_1_W30            CAN_1.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_1_CS31           CAN_1.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_1_ID31           CAN_1.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_1_B31            CAN_1.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_1_H31            CAN_1.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_1_W31            CAN_1.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_1_CS32           CAN_1.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_1_ID32           CAN_1.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_1_B32            CAN_1.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_1_H32            CAN_1.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_1_W32            CAN_1.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_1_CS33           CAN_1.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_1_ID33           CAN_1.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_1_B33            CAN_1.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_1_H33            CAN_1.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_1_W33            CAN_1.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_1_CS34           CAN_1.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_1_ID34           CAN_1.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_1_B34            CAN_1.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_1_H34            CAN_1.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_1_W34            CAN_1.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_1_CS35           CAN_1.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_1_ID35           CAN_1.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_1_B35            CAN_1.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_1_H35            CAN_1.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_1_W35            CAN_1.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_1_CS36           CAN_1.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_1_ID36           CAN_1.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_1_B36            CAN_1.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_1_H36            CAN_1.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_1_W36            CAN_1.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_1_CS37           CAN_1.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_1_ID37           CAN_1.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_1_B37            CAN_1.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_1_H37            CAN_1.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_1_W37            CAN_1.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_1_CS38           CAN_1.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_1_ID38           CAN_1.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_1_B38            CAN_1.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_1_H38            CAN_1.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_1_W38            CAN_1.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_1_CS39           CAN_1.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_1_ID39           CAN_1.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_1_B39            CAN_1.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_1_H39            CAN_1.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_1_W39            CAN_1.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_1_CS40           CAN_1.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_1_ID40           CAN_1.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_1_B40            CAN_1.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_1_H40            CAN_1.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_1_W40            CAN_1.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_1_CS41           CAN_1.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_1_ID41           CAN_1.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_1_B41            CAN_1.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_1_H41            CAN_1.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_1_W41            CAN_1.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_1_CS42           CAN_1.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_1_ID42           CAN_1.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_1_B42            CAN_1.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_1_H42            CAN_1.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_1_W42            CAN_1.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_1_CS43           CAN_1.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_1_ID43           CAN_1.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_1_B43            CAN_1.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_1_H43            CAN_1.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_1_W43            CAN_1.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_1_CS44           CAN_1.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_1_ID44           CAN_1.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_1_B44            CAN_1.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_1_H44            CAN_1.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_1_W44            CAN_1.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_1_CS45           CAN_1.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_1_ID45           CAN_1.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_1_B45            CAN_1.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_1_H45            CAN_1.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_1_W45            CAN_1.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_1_CS46           CAN_1.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_1_ID46           CAN_1.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_1_B46            CAN_1.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_1_H46            CAN_1.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_1_W46            CAN_1.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_1_CS47           CAN_1.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_1_ID47           CAN_1.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_1_B47            CAN_1.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_1_H47            CAN_1.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_1_W47            CAN_1.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_1_CS48           CAN_1.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_1_ID48           CAN_1.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_1_B48            CAN_1.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_1_H48            CAN_1.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_1_W48            CAN_1.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_1_CS49           CAN_1.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_1_ID49           CAN_1.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_1_B49            CAN_1.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_1_H49            CAN_1.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_1_W49            CAN_1.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_1_CS50           CAN_1.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_1_ID50           CAN_1.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_1_B50            CAN_1.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_1_H50            CAN_1.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_1_W50            CAN_1.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_1_CS51           CAN_1.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_1_ID51           CAN_1.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_1_B51            CAN_1.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_1_H51            CAN_1.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_1_W51            CAN_1.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_1_CS52           CAN_1.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_1_ID52           CAN_1.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_1_B52            CAN_1.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_1_H52            CAN_1.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_1_W52            CAN_1.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_1_CS53           CAN_1.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_1_ID53           CAN_1.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_1_B53            CAN_1.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_1_H53            CAN_1.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_1_W53            CAN_1.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_1_CS54           CAN_1.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_1_ID54           CAN_1.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_1_B54            CAN_1.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_1_H54            CAN_1.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_1_W54            CAN_1.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_1_CS55           CAN_1.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_1_ID55           CAN_1.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_1_B55            CAN_1.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_1_H55            CAN_1.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_1_W55            CAN_1.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_1_CS56           CAN_1.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_1_ID56           CAN_1.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_1_B56            CAN_1.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_1_H56            CAN_1.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_1_W56            CAN_1.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_1_CS57           CAN_1.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_1_ID57           CAN_1.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_1_B57            CAN_1.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_1_H57            CAN_1.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_1_W57            CAN_1.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_1_CS58           CAN_1.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_1_ID58           CAN_1.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_1_B58            CAN_1.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_1_H58            CAN_1.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_1_W58            CAN_1.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_1_CS59           CAN_1.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_1_ID59           CAN_1.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_1_B59            CAN_1.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_1_H59            CAN_1.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_1_W59            CAN_1.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_1_CS60           CAN_1.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_1_ID60           CAN_1.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_1_B60            CAN_1.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_1_H60            CAN_1.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_1_W60            CAN_1.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_1_CS61           CAN_1.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_1_ID61           CAN_1.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_1_B61            CAN_1.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_1_H61            CAN_1.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_1_W61            CAN_1.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_1_CS62           CAN_1.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_1_ID62           CAN_1.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_1_B62            CAN_1.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_1_H62            CAN_1.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_1_W62            CAN_1.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_1_CS63           CAN_1.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_1_ID63           CAN_1.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_1_B63            CAN_1.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_1_H63            CAN_1.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_1_W63            CAN_1.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_1_CS64           CAN_1.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_1_ID64           CAN_1.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_1_B64            CAN_1.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_1_H64            CAN_1.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_1_W64            CAN_1.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_1_CS65           CAN_1.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_1_ID65           CAN_1.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_1_B65            CAN_1.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_1_H65            CAN_1.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_1_W65            CAN_1.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_1_CS66           CAN_1.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_1_ID66           CAN_1.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_1_B66            CAN_1.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_1_H66            CAN_1.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_1_W66            CAN_1.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_1_CS67           CAN_1.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_1_ID67           CAN_1.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_1_B67            CAN_1.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_1_H67            CAN_1.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_1_W67            CAN_1.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_1_CS68           CAN_1.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_1_ID68           CAN_1.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_1_B68            CAN_1.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_1_H68            CAN_1.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_1_W68            CAN_1.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_1_CS69           CAN_1.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_1_ID69           CAN_1.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_1_B69            CAN_1.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_1_H69            CAN_1.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_1_W69            CAN_1.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_1_CS70           CAN_1.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_1_ID70           CAN_1.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_1_B70            CAN_1.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_1_H70            CAN_1.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_1_W70            CAN_1.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_1_CS71           CAN_1.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_1_ID71           CAN_1.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_1_B71            CAN_1.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_1_H71            CAN_1.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_1_W71            CAN_1.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_1_CS72           CAN_1.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_1_ID72           CAN_1.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_1_B72            CAN_1.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_1_H72            CAN_1.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_1_W72            CAN_1.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_1_CS73           CAN_1.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_1_ID73           CAN_1.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_1_B73            CAN_1.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_1_H73            CAN_1.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_1_W73            CAN_1.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_1_CS74           CAN_1.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_1_ID74           CAN_1.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_1_B74            CAN_1.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_1_H74            CAN_1.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_1_W74            CAN_1.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_1_CS75           CAN_1.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_1_ID75           CAN_1.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_1_B75            CAN_1.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_1_H75            CAN_1.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_1_W75            CAN_1.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_1_CS76           CAN_1.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_1_ID76           CAN_1.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_1_B76            CAN_1.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_1_H76            CAN_1.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_1_W76            CAN_1.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_1_CS77           CAN_1.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_1_ID77           CAN_1.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_1_B77            CAN_1.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_1_H77            CAN_1.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_1_W77            CAN_1.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_1_CS78           CAN_1.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_1_ID78           CAN_1.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_1_B78            CAN_1.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_1_H78            CAN_1.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_1_W78            CAN_1.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_1_CS79           CAN_1.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_1_ID79           CAN_1.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_1_B79            CAN_1.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_1_H79            CAN_1.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_1_W79            CAN_1.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_1_CS80           CAN_1.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_1_ID80           CAN_1.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_1_B80            CAN_1.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_1_H80            CAN_1.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_1_W80            CAN_1.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_1_CS81           CAN_1.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_1_ID81           CAN_1.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_1_B81            CAN_1.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_1_H81            CAN_1.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_1_W81            CAN_1.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_1_CS82           CAN_1.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_1_ID82           CAN_1.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_1_B82            CAN_1.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_1_H82            CAN_1.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_1_W82            CAN_1.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_1_CS83           CAN_1.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_1_ID83           CAN_1.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_1_B83            CAN_1.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_1_H83            CAN_1.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_1_W83            CAN_1.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_1_CS84           CAN_1.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_1_ID84           CAN_1.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_1_B84            CAN_1.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_1_H84            CAN_1.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_1_W84            CAN_1.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_1_CS85           CAN_1.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_1_ID85           CAN_1.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_1_B85            CAN_1.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_1_H85            CAN_1.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_1_W85            CAN_1.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_1_CS86           CAN_1.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_1_ID86           CAN_1.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_1_B86            CAN_1.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_1_H86            CAN_1.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_1_W86            CAN_1.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_1_CS87           CAN_1.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_1_ID87           CAN_1.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_1_B87            CAN_1.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_1_H87            CAN_1.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_1_W87            CAN_1.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_1_CS88           CAN_1.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_1_ID88           CAN_1.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_1_B88            CAN_1.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_1_H88            CAN_1.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_1_W88            CAN_1.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_1_CS89           CAN_1.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_1_ID89           CAN_1.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_1_B89            CAN_1.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_1_H89            CAN_1.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_1_W89            CAN_1.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_1_CS90           CAN_1.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_1_ID90           CAN_1.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_1_B90            CAN_1.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_1_H90            CAN_1.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_1_W90            CAN_1.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_1_CS91           CAN_1.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_1_ID91           CAN_1.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_1_B91            CAN_1.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_1_H91            CAN_1.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_1_W91            CAN_1.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_1_CS92           CAN_1.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_1_ID92           CAN_1.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_1_B92            CAN_1.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_1_H92            CAN_1.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_1_W92            CAN_1.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_1_CS93           CAN_1.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_1_ID93           CAN_1.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_1_B93            CAN_1.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_1_H93            CAN_1.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_1_W93            CAN_1.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_1_CS94           CAN_1.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_1_ID94           CAN_1.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_1_B94            CAN_1.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_1_H94            CAN_1.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_1_W94            CAN_1.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_1_CS95           CAN_1.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_1_ID95           CAN_1.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_1_B95            CAN_1.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_1_H95            CAN_1.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_1_W95            CAN_1.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_1_RXIMR0         CAN_1.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR1         CAN_1.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR2         CAN_1.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR3         CAN_1.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR4         CAN_1.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR5         CAN_1.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR6         CAN_1.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR7         CAN_1.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR8         CAN_1.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR9         CAN_1.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_1_RXIMR10        CAN_1.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR11        CAN_1.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR12        CAN_1.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR13        CAN_1.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR14        CAN_1.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR15        CAN_1.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR16        CAN_1.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR17        CAN_1.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR18        CAN_1.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR19        CAN_1.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR20        CAN_1.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR21        CAN_1.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR22        CAN_1.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR23        CAN_1.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR24        CAN_1.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR25        CAN_1.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR26        CAN_1.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR27        CAN_1.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR28        CAN_1.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR29        CAN_1.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR30        CAN_1.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR31        CAN_1.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR32        CAN_1.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR33        CAN_1.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR34        CAN_1.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR35        CAN_1.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR36        CAN_1.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR37        CAN_1.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR38        CAN_1.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR39        CAN_1.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR40        CAN_1.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR41        CAN_1.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR42        CAN_1.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR43        CAN_1.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR44        CAN_1.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR45        CAN_1.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR46        CAN_1.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR47        CAN_1.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR48        CAN_1.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR49        CAN_1.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR50        CAN_1.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR51        CAN_1.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR52        CAN_1.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR53        CAN_1.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR54        CAN_1.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR55        CAN_1.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR56        CAN_1.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR57        CAN_1.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR58        CAN_1.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR59        CAN_1.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR60        CAN_1.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR61        CAN_1.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR62        CAN_1.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR63        CAN_1.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR64        CAN_1.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR65        CAN_1.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR66        CAN_1.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR67        CAN_1.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR68        CAN_1.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR69        CAN_1.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR70        CAN_1.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR71        CAN_1.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR72        CAN_1.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR73        CAN_1.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR74        CAN_1.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR75        CAN_1.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR76        CAN_1.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR77        CAN_1.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR78        CAN_1.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR79        CAN_1.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR80        CAN_1.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR81        CAN_1.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR82        CAN_1.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR83        CAN_1.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR84        CAN_1.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR85        CAN_1.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR86        CAN_1.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR87        CAN_1.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR88        CAN_1.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR89        CAN_1.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR90        CAN_1.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR91        CAN_1.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR92        CAN_1.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR93        CAN_1.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR94        CAN_1.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_1_RXIMR95        CAN_1.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_1_FDCTRL         CAN_1.FDCTRL.R                /* CAN FD Control Register */
#define CAN_1_FDCBT          CAN_1.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_1_FDCRC          CAN_1.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_2_MCR            CAN_2.MCR.R                   /* Module Configuration Register */
#define CAN_2_CTRL1          CAN_2.CTRL1.R                 /* Control 1 register */
#define CAN_2_TIMER          CAN_2.TIMER.R                 /* Free Running Timer */
#define CAN_2_RXMGMASK       CAN_2.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_2_RX14MASK       CAN_2.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_2_RX15MASK       CAN_2.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_2_ECR            CAN_2.ECR.R                   /* Error Counter */
#define CAN_2_ESR1           CAN_2.ESR1.R                  /* Error and Status 1 register */
#define CAN_2_IMASK2         CAN_2.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_2_IMASK1         CAN_2.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_2_IFLAG2         CAN_2.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_2_IFLAG1         CAN_2.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_2_CTRL2          CAN_2.CTRL2.R                 /* Control 2 register */
#define CAN_2_ESR2           CAN_2.ESR2.R                  /* Error and Status 2 register */
#define CAN_2_CRCR           CAN_2.CRCR.R                  /* CRC Register */
#define CAN_2_RXFGMASK       CAN_2.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_2_RXFIR          CAN_2.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_2_CS0            CAN_2.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_2_ID0            CAN_2.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_2_B0             CAN_2.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_2_H0             CAN_2.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_2_W0             CAN_2.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_2_CS1            CAN_2.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_2_ID1            CAN_2.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_2_B1             CAN_2.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_2_H1             CAN_2.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_2_W1             CAN_2.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_2_CS2            CAN_2.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_2_ID2            CAN_2.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_2_B2             CAN_2.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_2_H2             CAN_2.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_2_W2             CAN_2.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_2_CS3            CAN_2.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_2_ID3            CAN_2.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_2_B3             CAN_2.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_2_H3             CAN_2.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_2_W3             CAN_2.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_2_CS4            CAN_2.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_2_ID4            CAN_2.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_2_B4             CAN_2.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_2_H4             CAN_2.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_2_W4             CAN_2.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_2_CS5            CAN_2.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_2_ID5            CAN_2.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_2_B5             CAN_2.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_2_H5             CAN_2.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_2_W5             CAN_2.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_2_CS6            CAN_2.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_2_ID6            CAN_2.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_2_B6             CAN_2.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_2_H6             CAN_2.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_2_W6             CAN_2.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_2_CS7            CAN_2.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_2_ID7            CAN_2.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_2_B7             CAN_2.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_2_H7             CAN_2.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_2_W7             CAN_2.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_2_CS8            CAN_2.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_2_ID8            CAN_2.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_2_B8             CAN_2.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_2_H8             CAN_2.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_2_W8             CAN_2.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_2_CS9            CAN_2.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_2_ID9            CAN_2.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_2_B9             CAN_2.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_2_H9             CAN_2.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_2_W9             CAN_2.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_2_CS10           CAN_2.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_2_ID10           CAN_2.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_2_B10            CAN_2.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_2_H10            CAN_2.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_2_W10            CAN_2.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_2_CS11           CAN_2.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_2_ID11           CAN_2.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_2_B11            CAN_2.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_2_H11            CAN_2.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_2_W11            CAN_2.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_2_CS12           CAN_2.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_2_ID12           CAN_2.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_2_B12            CAN_2.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_2_H12            CAN_2.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_2_W12            CAN_2.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_2_CS13           CAN_2.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_2_ID13           CAN_2.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_2_B13            CAN_2.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_2_H13            CAN_2.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_2_W13            CAN_2.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_2_CS14           CAN_2.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_2_ID14           CAN_2.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_2_B14            CAN_2.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_2_H14            CAN_2.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_2_W14            CAN_2.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_2_CS15           CAN_2.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_2_ID15           CAN_2.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_2_B15            CAN_2.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_2_H15            CAN_2.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_2_W15            CAN_2.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_2_CS16           CAN_2.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_2_ID16           CAN_2.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_2_B16            CAN_2.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_2_H16            CAN_2.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_2_W16            CAN_2.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_2_CS17           CAN_2.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_2_ID17           CAN_2.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_2_B17            CAN_2.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_2_H17            CAN_2.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_2_W17            CAN_2.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_2_CS18           CAN_2.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_2_ID18           CAN_2.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_2_B18            CAN_2.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_2_H18            CAN_2.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_2_W18            CAN_2.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_2_CS19           CAN_2.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_2_ID19           CAN_2.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_2_B19            CAN_2.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_2_H19            CAN_2.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_2_W19            CAN_2.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_2_CS20           CAN_2.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_2_ID20           CAN_2.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_2_B20            CAN_2.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_2_H20            CAN_2.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_2_W20            CAN_2.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_2_CS21           CAN_2.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_2_ID21           CAN_2.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_2_B21            CAN_2.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_2_H21            CAN_2.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_2_W21            CAN_2.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_2_CS22           CAN_2.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_2_ID22           CAN_2.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_2_B22            CAN_2.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_2_H22            CAN_2.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_2_W22            CAN_2.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_2_CS23           CAN_2.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_2_ID23           CAN_2.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_2_B23            CAN_2.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_2_H23            CAN_2.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_2_W23            CAN_2.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_2_CS24           CAN_2.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_2_ID24           CAN_2.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_2_B24            CAN_2.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_2_H24            CAN_2.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_2_W24            CAN_2.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_2_CS25           CAN_2.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_2_ID25           CAN_2.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_2_B25            CAN_2.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_2_H25            CAN_2.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_2_W25            CAN_2.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_2_CS26           CAN_2.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_2_ID26           CAN_2.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_2_B26            CAN_2.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_2_H26            CAN_2.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_2_W26            CAN_2.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_2_CS27           CAN_2.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_2_ID27           CAN_2.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_2_B27            CAN_2.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_2_H27            CAN_2.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_2_W27            CAN_2.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_2_CS28           CAN_2.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_2_ID28           CAN_2.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_2_B28            CAN_2.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_2_H28            CAN_2.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_2_W28            CAN_2.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_2_CS29           CAN_2.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_2_ID29           CAN_2.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_2_B29            CAN_2.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_2_H29            CAN_2.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_2_W29            CAN_2.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_2_CS30           CAN_2.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_2_ID30           CAN_2.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_2_B30            CAN_2.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_2_H30            CAN_2.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_2_W30            CAN_2.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_2_CS31           CAN_2.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_2_ID31           CAN_2.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_2_B31            CAN_2.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_2_H31            CAN_2.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_2_W31            CAN_2.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_2_CS32           CAN_2.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_2_ID32           CAN_2.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_2_B32            CAN_2.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_2_H32            CAN_2.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_2_W32            CAN_2.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_2_CS33           CAN_2.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_2_ID33           CAN_2.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_2_B33            CAN_2.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_2_H33            CAN_2.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_2_W33            CAN_2.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_2_CS34           CAN_2.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_2_ID34           CAN_2.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_2_B34            CAN_2.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_2_H34            CAN_2.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_2_W34            CAN_2.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_2_CS35           CAN_2.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_2_ID35           CAN_2.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_2_B35            CAN_2.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_2_H35            CAN_2.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_2_W35            CAN_2.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_2_CS36           CAN_2.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_2_ID36           CAN_2.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_2_B36            CAN_2.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_2_H36            CAN_2.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_2_W36            CAN_2.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_2_CS37           CAN_2.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_2_ID37           CAN_2.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_2_B37            CAN_2.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_2_H37            CAN_2.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_2_W37            CAN_2.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_2_CS38           CAN_2.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_2_ID38           CAN_2.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_2_B38            CAN_2.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_2_H38            CAN_2.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_2_W38            CAN_2.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_2_CS39           CAN_2.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_2_ID39           CAN_2.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_2_B39            CAN_2.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_2_H39            CAN_2.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_2_W39            CAN_2.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_2_CS40           CAN_2.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_2_ID40           CAN_2.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_2_B40            CAN_2.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_2_H40            CAN_2.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_2_W40            CAN_2.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_2_CS41           CAN_2.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_2_ID41           CAN_2.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_2_B41            CAN_2.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_2_H41            CAN_2.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_2_W41            CAN_2.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_2_CS42           CAN_2.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_2_ID42           CAN_2.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_2_B42            CAN_2.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_2_H42            CAN_2.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_2_W42            CAN_2.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_2_CS43           CAN_2.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_2_ID43           CAN_2.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_2_B43            CAN_2.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_2_H43            CAN_2.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_2_W43            CAN_2.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_2_CS44           CAN_2.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_2_ID44           CAN_2.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_2_B44            CAN_2.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_2_H44            CAN_2.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_2_W44            CAN_2.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_2_CS45           CAN_2.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_2_ID45           CAN_2.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_2_B45            CAN_2.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_2_H45            CAN_2.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_2_W45            CAN_2.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_2_CS46           CAN_2.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_2_ID46           CAN_2.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_2_B46            CAN_2.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_2_H46            CAN_2.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_2_W46            CAN_2.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_2_CS47           CAN_2.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_2_ID47           CAN_2.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_2_B47            CAN_2.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_2_H47            CAN_2.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_2_W47            CAN_2.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_2_CS48           CAN_2.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_2_ID48           CAN_2.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_2_B48            CAN_2.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_2_H48            CAN_2.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_2_W48            CAN_2.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_2_CS49           CAN_2.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_2_ID49           CAN_2.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_2_B49            CAN_2.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_2_H49            CAN_2.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_2_W49            CAN_2.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_2_CS50           CAN_2.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_2_ID50           CAN_2.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_2_B50            CAN_2.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_2_H50            CAN_2.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_2_W50            CAN_2.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_2_CS51           CAN_2.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_2_ID51           CAN_2.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_2_B51            CAN_2.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_2_H51            CAN_2.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_2_W51            CAN_2.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_2_CS52           CAN_2.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_2_ID52           CAN_2.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_2_B52            CAN_2.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_2_H52            CAN_2.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_2_W52            CAN_2.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_2_CS53           CAN_2.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_2_ID53           CAN_2.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_2_B53            CAN_2.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_2_H53            CAN_2.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_2_W53            CAN_2.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_2_CS54           CAN_2.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_2_ID54           CAN_2.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_2_B54            CAN_2.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_2_H54            CAN_2.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_2_W54            CAN_2.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_2_CS55           CAN_2.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_2_ID55           CAN_2.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_2_B55            CAN_2.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_2_H55            CAN_2.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_2_W55            CAN_2.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_2_CS56           CAN_2.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_2_ID56           CAN_2.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_2_B56            CAN_2.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_2_H56            CAN_2.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_2_W56            CAN_2.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_2_CS57           CAN_2.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_2_ID57           CAN_2.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_2_B57            CAN_2.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_2_H57            CAN_2.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_2_W57            CAN_2.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_2_CS58           CAN_2.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_2_ID58           CAN_2.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_2_B58            CAN_2.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_2_H58            CAN_2.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_2_W58            CAN_2.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_2_CS59           CAN_2.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_2_ID59           CAN_2.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_2_B59            CAN_2.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_2_H59            CAN_2.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_2_W59            CAN_2.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_2_CS60           CAN_2.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_2_ID60           CAN_2.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_2_B60            CAN_2.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_2_H60            CAN_2.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_2_W60            CAN_2.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_2_CS61           CAN_2.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_2_ID61           CAN_2.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_2_B61            CAN_2.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_2_H61            CAN_2.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_2_W61            CAN_2.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_2_CS62           CAN_2.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_2_ID62           CAN_2.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_2_B62            CAN_2.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_2_H62            CAN_2.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_2_W62            CAN_2.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_2_CS63           CAN_2.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_2_ID63           CAN_2.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_2_B63            CAN_2.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_2_H63            CAN_2.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_2_W63            CAN_2.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_2_CS64           CAN_2.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_2_ID64           CAN_2.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_2_B64            CAN_2.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_2_H64            CAN_2.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_2_W64            CAN_2.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_2_CS65           CAN_2.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_2_ID65           CAN_2.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_2_B65            CAN_2.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_2_H65            CAN_2.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_2_W65            CAN_2.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_2_CS66           CAN_2.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_2_ID66           CAN_2.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_2_B66            CAN_2.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_2_H66            CAN_2.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_2_W66            CAN_2.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_2_CS67           CAN_2.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_2_ID67           CAN_2.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_2_B67            CAN_2.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_2_H67            CAN_2.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_2_W67            CAN_2.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_2_CS68           CAN_2.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_2_ID68           CAN_2.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_2_B68            CAN_2.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_2_H68            CAN_2.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_2_W68            CAN_2.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_2_CS69           CAN_2.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_2_ID69           CAN_2.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_2_B69            CAN_2.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_2_H69            CAN_2.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_2_W69            CAN_2.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_2_CS70           CAN_2.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_2_ID70           CAN_2.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_2_B70            CAN_2.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_2_H70            CAN_2.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_2_W70            CAN_2.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_2_CS71           CAN_2.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_2_ID71           CAN_2.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_2_B71            CAN_2.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_2_H71            CAN_2.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_2_W71            CAN_2.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_2_CS72           CAN_2.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_2_ID72           CAN_2.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_2_B72            CAN_2.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_2_H72            CAN_2.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_2_W72            CAN_2.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_2_CS73           CAN_2.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_2_ID73           CAN_2.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_2_B73            CAN_2.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_2_H73            CAN_2.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_2_W73            CAN_2.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_2_CS74           CAN_2.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_2_ID74           CAN_2.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_2_B74            CAN_2.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_2_H74            CAN_2.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_2_W74            CAN_2.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_2_CS75           CAN_2.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_2_ID75           CAN_2.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_2_B75            CAN_2.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_2_H75            CAN_2.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_2_W75            CAN_2.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_2_CS76           CAN_2.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_2_ID76           CAN_2.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_2_B76            CAN_2.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_2_H76            CAN_2.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_2_W76            CAN_2.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_2_CS77           CAN_2.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_2_ID77           CAN_2.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_2_B77            CAN_2.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_2_H77            CAN_2.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_2_W77            CAN_2.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_2_CS78           CAN_2.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_2_ID78           CAN_2.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_2_B78            CAN_2.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_2_H78            CAN_2.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_2_W78            CAN_2.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_2_CS79           CAN_2.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_2_ID79           CAN_2.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_2_B79            CAN_2.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_2_H79            CAN_2.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_2_W79            CAN_2.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_2_CS80           CAN_2.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_2_ID80           CAN_2.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_2_B80            CAN_2.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_2_H80            CAN_2.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_2_W80            CAN_2.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_2_CS81           CAN_2.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_2_ID81           CAN_2.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_2_B81            CAN_2.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_2_H81            CAN_2.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_2_W81            CAN_2.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_2_CS82           CAN_2.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_2_ID82           CAN_2.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_2_B82            CAN_2.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_2_H82            CAN_2.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_2_W82            CAN_2.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_2_CS83           CAN_2.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_2_ID83           CAN_2.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_2_B83            CAN_2.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_2_H83            CAN_2.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_2_W83            CAN_2.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_2_CS84           CAN_2.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_2_ID84           CAN_2.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_2_B84            CAN_2.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_2_H84            CAN_2.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_2_W84            CAN_2.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_2_CS85           CAN_2.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_2_ID85           CAN_2.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_2_B85            CAN_2.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_2_H85            CAN_2.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_2_W85            CAN_2.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_2_CS86           CAN_2.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_2_ID86           CAN_2.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_2_B86            CAN_2.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_2_H86            CAN_2.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_2_W86            CAN_2.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_2_CS87           CAN_2.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_2_ID87           CAN_2.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_2_B87            CAN_2.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_2_H87            CAN_2.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_2_W87            CAN_2.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_2_CS88           CAN_2.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_2_ID88           CAN_2.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_2_B88            CAN_2.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_2_H88            CAN_2.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_2_W88            CAN_2.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_2_CS89           CAN_2.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_2_ID89           CAN_2.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_2_B89            CAN_2.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_2_H89            CAN_2.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_2_W89            CAN_2.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_2_CS90           CAN_2.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_2_ID90           CAN_2.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_2_B90            CAN_2.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_2_H90            CAN_2.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_2_W90            CAN_2.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_2_CS91           CAN_2.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_2_ID91           CAN_2.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_2_B91            CAN_2.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_2_H91            CAN_2.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_2_W91            CAN_2.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_2_CS92           CAN_2.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_2_ID92           CAN_2.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_2_B92            CAN_2.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_2_H92            CAN_2.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_2_W92            CAN_2.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_2_CS93           CAN_2.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_2_ID93           CAN_2.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_2_B93            CAN_2.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_2_H93            CAN_2.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_2_W93            CAN_2.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_2_CS94           CAN_2.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_2_ID94           CAN_2.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_2_B94            CAN_2.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_2_H94            CAN_2.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_2_W94            CAN_2.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_2_CS95           CAN_2.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_2_ID95           CAN_2.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_2_B95            CAN_2.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_2_H95            CAN_2.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_2_W95            CAN_2.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_2_RXIMR0         CAN_2.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR1         CAN_2.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR2         CAN_2.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR3         CAN_2.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR4         CAN_2.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR5         CAN_2.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR6         CAN_2.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR7         CAN_2.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR8         CAN_2.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR9         CAN_2.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_2_RXIMR10        CAN_2.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR11        CAN_2.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR12        CAN_2.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR13        CAN_2.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR14        CAN_2.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR15        CAN_2.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR16        CAN_2.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR17        CAN_2.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR18        CAN_2.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR19        CAN_2.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR20        CAN_2.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR21        CAN_2.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR22        CAN_2.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR23        CAN_2.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR24        CAN_2.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR25        CAN_2.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR26        CAN_2.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR27        CAN_2.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR28        CAN_2.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR29        CAN_2.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR30        CAN_2.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR31        CAN_2.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR32        CAN_2.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR33        CAN_2.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR34        CAN_2.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR35        CAN_2.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR36        CAN_2.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR37        CAN_2.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR38        CAN_2.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR39        CAN_2.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR40        CAN_2.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR41        CAN_2.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR42        CAN_2.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR43        CAN_2.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR44        CAN_2.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR45        CAN_2.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR46        CAN_2.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR47        CAN_2.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR48        CAN_2.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR49        CAN_2.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR50        CAN_2.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR51        CAN_2.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR52        CAN_2.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR53        CAN_2.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR54        CAN_2.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR55        CAN_2.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR56        CAN_2.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR57        CAN_2.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR58        CAN_2.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR59        CAN_2.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR60        CAN_2.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR61        CAN_2.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR62        CAN_2.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR63        CAN_2.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR64        CAN_2.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR65        CAN_2.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR66        CAN_2.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR67        CAN_2.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR68        CAN_2.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR69        CAN_2.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR70        CAN_2.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR71        CAN_2.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR72        CAN_2.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR73        CAN_2.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR74        CAN_2.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR75        CAN_2.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR76        CAN_2.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR77        CAN_2.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR78        CAN_2.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR79        CAN_2.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR80        CAN_2.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR81        CAN_2.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR82        CAN_2.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR83        CAN_2.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR84        CAN_2.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR85        CAN_2.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR86        CAN_2.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR87        CAN_2.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR88        CAN_2.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR89        CAN_2.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR90        CAN_2.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR91        CAN_2.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR92        CAN_2.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR93        CAN_2.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR94        CAN_2.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_2_RXIMR95        CAN_2.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_2_FDCTRL         CAN_2.FDCTRL.R                /* CAN FD Control Register */
#define CAN_2_FDCBT          CAN_2.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_2_FDCRC          CAN_2.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_3_MCR            CAN_3.MCR.R                   /* Module Configuration Register */
#define CAN_3_CTRL1          CAN_3.CTRL1.R                 /* Control 1 register */
#define CAN_3_TIMER          CAN_3.TIMER.R                 /* Free Running Timer */
#define CAN_3_RXMGMASK       CAN_3.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_3_RX14MASK       CAN_3.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_3_RX15MASK       CAN_3.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_3_ECR            CAN_3.ECR.R                   /* Error Counter */
#define CAN_3_ESR1           CAN_3.ESR1.R                  /* Error and Status 1 register */
#define CAN_3_IMASK2         CAN_3.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_3_IMASK1         CAN_3.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_3_IFLAG2         CAN_3.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_3_IFLAG1         CAN_3.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_3_CTRL2          CAN_3.CTRL2.R                 /* Control 2 register */
#define CAN_3_ESR2           CAN_3.ESR2.R                  /* Error and Status 2 register */
#define CAN_3_CRCR           CAN_3.CRCR.R                  /* CRC Register */
#define CAN_3_RXFGMASK       CAN_3.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_3_RXFIR          CAN_3.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_3_CS0            CAN_3.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_3_ID0            CAN_3.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_3_B0             CAN_3.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_3_H0             CAN_3.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_3_W0             CAN_3.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_3_CS1            CAN_3.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_3_ID1            CAN_3.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_3_B1             CAN_3.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_3_H1             CAN_3.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_3_W1             CAN_3.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_3_CS2            CAN_3.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_3_ID2            CAN_3.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_3_B2             CAN_3.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_3_H2             CAN_3.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_3_W2             CAN_3.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_3_CS3            CAN_3.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_3_ID3            CAN_3.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_3_B3             CAN_3.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_3_H3             CAN_3.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_3_W3             CAN_3.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_3_CS4            CAN_3.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_3_ID4            CAN_3.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_3_B4             CAN_3.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_3_H4             CAN_3.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_3_W4             CAN_3.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_3_CS5            CAN_3.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_3_ID5            CAN_3.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_3_B5             CAN_3.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_3_H5             CAN_3.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_3_W5             CAN_3.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_3_CS6            CAN_3.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_3_ID6            CAN_3.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_3_B6             CAN_3.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_3_H6             CAN_3.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_3_W6             CAN_3.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_3_CS7            CAN_3.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_3_ID7            CAN_3.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_3_B7             CAN_3.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_3_H7             CAN_3.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_3_W7             CAN_3.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_3_CS8            CAN_3.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_3_ID8            CAN_3.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_3_B8             CAN_3.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_3_H8             CAN_3.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_3_W8             CAN_3.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_3_CS9            CAN_3.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_3_ID9            CAN_3.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_3_B9             CAN_3.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_3_H9             CAN_3.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_3_W9             CAN_3.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_3_CS10           CAN_3.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_3_ID10           CAN_3.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_3_B10            CAN_3.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_3_H10            CAN_3.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_3_W10            CAN_3.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_3_CS11           CAN_3.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_3_ID11           CAN_3.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_3_B11            CAN_3.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_3_H11            CAN_3.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_3_W11            CAN_3.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_3_CS12           CAN_3.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_3_ID12           CAN_3.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_3_B12            CAN_3.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_3_H12            CAN_3.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_3_W12            CAN_3.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_3_CS13           CAN_3.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_3_ID13           CAN_3.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_3_B13            CAN_3.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_3_H13            CAN_3.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_3_W13            CAN_3.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_3_CS14           CAN_3.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_3_ID14           CAN_3.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_3_B14            CAN_3.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_3_H14            CAN_3.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_3_W14            CAN_3.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_3_CS15           CAN_3.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_3_ID15           CAN_3.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_3_B15            CAN_3.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_3_H15            CAN_3.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_3_W15            CAN_3.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_3_CS16           CAN_3.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_3_ID16           CAN_3.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_3_B16            CAN_3.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_3_H16            CAN_3.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_3_W16            CAN_3.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_3_CS17           CAN_3.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_3_ID17           CAN_3.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_3_B17            CAN_3.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_3_H17            CAN_3.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_3_W17            CAN_3.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_3_CS18           CAN_3.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_3_ID18           CAN_3.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_3_B18            CAN_3.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_3_H18            CAN_3.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_3_W18            CAN_3.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_3_CS19           CAN_3.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_3_ID19           CAN_3.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_3_B19            CAN_3.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_3_H19            CAN_3.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_3_W19            CAN_3.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_3_CS20           CAN_3.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_3_ID20           CAN_3.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_3_B20            CAN_3.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_3_H20            CAN_3.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_3_W20            CAN_3.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_3_CS21           CAN_3.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_3_ID21           CAN_3.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_3_B21            CAN_3.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_3_H21            CAN_3.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_3_W21            CAN_3.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_3_CS22           CAN_3.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_3_ID22           CAN_3.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_3_B22            CAN_3.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_3_H22            CAN_3.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_3_W22            CAN_3.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_3_CS23           CAN_3.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_3_ID23           CAN_3.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_3_B23            CAN_3.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_3_H23            CAN_3.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_3_W23            CAN_3.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_3_CS24           CAN_3.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_3_ID24           CAN_3.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_3_B24            CAN_3.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_3_H24            CAN_3.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_3_W24            CAN_3.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_3_CS25           CAN_3.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_3_ID25           CAN_3.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_3_B25            CAN_3.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_3_H25            CAN_3.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_3_W25            CAN_3.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_3_CS26           CAN_3.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_3_ID26           CAN_3.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_3_B26            CAN_3.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_3_H26            CAN_3.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_3_W26            CAN_3.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_3_CS27           CAN_3.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_3_ID27           CAN_3.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_3_B27            CAN_3.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_3_H27            CAN_3.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_3_W27            CAN_3.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_3_CS28           CAN_3.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_3_ID28           CAN_3.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_3_B28            CAN_3.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_3_H28            CAN_3.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_3_W28            CAN_3.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_3_CS29           CAN_3.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_3_ID29           CAN_3.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_3_B29            CAN_3.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_3_H29            CAN_3.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_3_W29            CAN_3.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_3_CS30           CAN_3.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_3_ID30           CAN_3.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_3_B30            CAN_3.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_3_H30            CAN_3.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_3_W30            CAN_3.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_3_CS31           CAN_3.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_3_ID31           CAN_3.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_3_B31            CAN_3.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_3_H31            CAN_3.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_3_W31            CAN_3.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_3_CS32           CAN_3.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_3_ID32           CAN_3.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_3_B32            CAN_3.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_3_H32            CAN_3.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_3_W32            CAN_3.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_3_CS33           CAN_3.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_3_ID33           CAN_3.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_3_B33            CAN_3.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_3_H33            CAN_3.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_3_W33            CAN_3.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_3_CS34           CAN_3.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_3_ID34           CAN_3.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_3_B34            CAN_3.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_3_H34            CAN_3.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_3_W34            CAN_3.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_3_CS35           CAN_3.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_3_ID35           CAN_3.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_3_B35            CAN_3.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_3_H35            CAN_3.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_3_W35            CAN_3.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_3_CS36           CAN_3.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_3_ID36           CAN_3.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_3_B36            CAN_3.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_3_H36            CAN_3.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_3_W36            CAN_3.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_3_CS37           CAN_3.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_3_ID37           CAN_3.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_3_B37            CAN_3.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_3_H37            CAN_3.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_3_W37            CAN_3.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_3_CS38           CAN_3.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_3_ID38           CAN_3.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_3_B38            CAN_3.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_3_H38            CAN_3.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_3_W38            CAN_3.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_3_CS39           CAN_3.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_3_ID39           CAN_3.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_3_B39            CAN_3.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_3_H39            CAN_3.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_3_W39            CAN_3.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_3_CS40           CAN_3.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_3_ID40           CAN_3.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_3_B40            CAN_3.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_3_H40            CAN_3.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_3_W40            CAN_3.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_3_CS41           CAN_3.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_3_ID41           CAN_3.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_3_B41            CAN_3.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_3_H41            CAN_3.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_3_W41            CAN_3.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_3_CS42           CAN_3.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_3_ID42           CAN_3.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_3_B42            CAN_3.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_3_H42            CAN_3.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_3_W42            CAN_3.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_3_CS43           CAN_3.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_3_ID43           CAN_3.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_3_B43            CAN_3.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_3_H43            CAN_3.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_3_W43            CAN_3.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_3_CS44           CAN_3.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_3_ID44           CAN_3.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_3_B44            CAN_3.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_3_H44            CAN_3.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_3_W44            CAN_3.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_3_CS45           CAN_3.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_3_ID45           CAN_3.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_3_B45            CAN_3.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_3_H45            CAN_3.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_3_W45            CAN_3.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_3_CS46           CAN_3.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_3_ID46           CAN_3.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_3_B46            CAN_3.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_3_H46            CAN_3.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_3_W46            CAN_3.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_3_CS47           CAN_3.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_3_ID47           CAN_3.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_3_B47            CAN_3.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_3_H47            CAN_3.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_3_W47            CAN_3.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_3_CS48           CAN_3.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_3_ID48           CAN_3.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_3_B48            CAN_3.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_3_H48            CAN_3.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_3_W48            CAN_3.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_3_CS49           CAN_3.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_3_ID49           CAN_3.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_3_B49            CAN_3.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_3_H49            CAN_3.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_3_W49            CAN_3.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_3_CS50           CAN_3.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_3_ID50           CAN_3.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_3_B50            CAN_3.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_3_H50            CAN_3.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_3_W50            CAN_3.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_3_CS51           CAN_3.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_3_ID51           CAN_3.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_3_B51            CAN_3.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_3_H51            CAN_3.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_3_W51            CAN_3.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_3_CS52           CAN_3.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_3_ID52           CAN_3.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_3_B52            CAN_3.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_3_H52            CAN_3.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_3_W52            CAN_3.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_3_CS53           CAN_3.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_3_ID53           CAN_3.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_3_B53            CAN_3.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_3_H53            CAN_3.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_3_W53            CAN_3.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_3_CS54           CAN_3.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_3_ID54           CAN_3.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_3_B54            CAN_3.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_3_H54            CAN_3.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_3_W54            CAN_3.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_3_CS55           CAN_3.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_3_ID55           CAN_3.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_3_B55            CAN_3.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_3_H55            CAN_3.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_3_W55            CAN_3.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_3_CS56           CAN_3.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_3_ID56           CAN_3.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_3_B56            CAN_3.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_3_H56            CAN_3.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_3_W56            CAN_3.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_3_CS57           CAN_3.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_3_ID57           CAN_3.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_3_B57            CAN_3.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_3_H57            CAN_3.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_3_W57            CAN_3.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_3_CS58           CAN_3.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_3_ID58           CAN_3.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_3_B58            CAN_3.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_3_H58            CAN_3.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_3_W58            CAN_3.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_3_CS59           CAN_3.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_3_ID59           CAN_3.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_3_B59            CAN_3.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_3_H59            CAN_3.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_3_W59            CAN_3.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_3_CS60           CAN_3.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_3_ID60           CAN_3.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_3_B60            CAN_3.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_3_H60            CAN_3.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_3_W60            CAN_3.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_3_CS61           CAN_3.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_3_ID61           CAN_3.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_3_B61            CAN_3.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_3_H61            CAN_3.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_3_W61            CAN_3.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_3_CS62           CAN_3.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_3_ID62           CAN_3.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_3_B62            CAN_3.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_3_H62            CAN_3.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_3_W62            CAN_3.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_3_CS63           CAN_3.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_3_ID63           CAN_3.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_3_B63            CAN_3.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_3_H63            CAN_3.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_3_W63            CAN_3.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_3_CS64           CAN_3.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_3_ID64           CAN_3.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_3_B64            CAN_3.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_3_H64            CAN_3.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_3_W64            CAN_3.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_3_CS65           CAN_3.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_3_ID65           CAN_3.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_3_B65            CAN_3.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_3_H65            CAN_3.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_3_W65            CAN_3.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_3_CS66           CAN_3.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_3_ID66           CAN_3.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_3_B66            CAN_3.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_3_H66            CAN_3.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_3_W66            CAN_3.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_3_CS67           CAN_3.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_3_ID67           CAN_3.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_3_B67            CAN_3.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_3_H67            CAN_3.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_3_W67            CAN_3.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_3_CS68           CAN_3.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_3_ID68           CAN_3.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_3_B68            CAN_3.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_3_H68            CAN_3.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_3_W68            CAN_3.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_3_CS69           CAN_3.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_3_ID69           CAN_3.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_3_B69            CAN_3.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_3_H69            CAN_3.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_3_W69            CAN_3.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_3_CS70           CAN_3.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_3_ID70           CAN_3.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_3_B70            CAN_3.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_3_H70            CAN_3.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_3_W70            CAN_3.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_3_CS71           CAN_3.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_3_ID71           CAN_3.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_3_B71            CAN_3.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_3_H71            CAN_3.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_3_W71            CAN_3.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_3_CS72           CAN_3.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_3_ID72           CAN_3.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_3_B72            CAN_3.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_3_H72            CAN_3.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_3_W72            CAN_3.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_3_CS73           CAN_3.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_3_ID73           CAN_3.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_3_B73            CAN_3.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_3_H73            CAN_3.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_3_W73            CAN_3.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_3_CS74           CAN_3.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_3_ID74           CAN_3.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_3_B74            CAN_3.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_3_H74            CAN_3.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_3_W74            CAN_3.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_3_CS75           CAN_3.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_3_ID75           CAN_3.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_3_B75            CAN_3.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_3_H75            CAN_3.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_3_W75            CAN_3.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_3_CS76           CAN_3.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_3_ID76           CAN_3.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_3_B76            CAN_3.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_3_H76            CAN_3.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_3_W76            CAN_3.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_3_CS77           CAN_3.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_3_ID77           CAN_3.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_3_B77            CAN_3.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_3_H77            CAN_3.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_3_W77            CAN_3.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_3_CS78           CAN_3.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_3_ID78           CAN_3.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_3_B78            CAN_3.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_3_H78            CAN_3.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_3_W78            CAN_3.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_3_CS79           CAN_3.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_3_ID79           CAN_3.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_3_B79            CAN_3.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_3_H79            CAN_3.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_3_W79            CAN_3.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_3_CS80           CAN_3.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_3_ID80           CAN_3.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_3_B80            CAN_3.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_3_H80            CAN_3.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_3_W80            CAN_3.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_3_CS81           CAN_3.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_3_ID81           CAN_3.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_3_B81            CAN_3.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_3_H81            CAN_3.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_3_W81            CAN_3.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_3_CS82           CAN_3.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_3_ID82           CAN_3.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_3_B82            CAN_3.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_3_H82            CAN_3.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_3_W82            CAN_3.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_3_CS83           CAN_3.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_3_ID83           CAN_3.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_3_B83            CAN_3.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_3_H83            CAN_3.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_3_W83            CAN_3.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_3_CS84           CAN_3.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_3_ID84           CAN_3.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_3_B84            CAN_3.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_3_H84            CAN_3.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_3_W84            CAN_3.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_3_CS85           CAN_3.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_3_ID85           CAN_3.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_3_B85            CAN_3.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_3_H85            CAN_3.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_3_W85            CAN_3.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_3_CS86           CAN_3.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_3_ID86           CAN_3.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_3_B86            CAN_3.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_3_H86            CAN_3.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_3_W86            CAN_3.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_3_CS87           CAN_3.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_3_ID87           CAN_3.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_3_B87            CAN_3.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_3_H87            CAN_3.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_3_W87            CAN_3.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_3_CS88           CAN_3.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_3_ID88           CAN_3.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_3_B88            CAN_3.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_3_H88            CAN_3.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_3_W88            CAN_3.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_3_CS89           CAN_3.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_3_ID89           CAN_3.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_3_B89            CAN_3.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_3_H89            CAN_3.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_3_W89            CAN_3.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_3_CS90           CAN_3.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_3_ID90           CAN_3.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_3_B90            CAN_3.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_3_H90            CAN_3.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_3_W90            CAN_3.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_3_CS91           CAN_3.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_3_ID91           CAN_3.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_3_B91            CAN_3.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_3_H91            CAN_3.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_3_W91            CAN_3.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_3_CS92           CAN_3.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_3_ID92           CAN_3.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_3_B92            CAN_3.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_3_H92            CAN_3.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_3_W92            CAN_3.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_3_CS93           CAN_3.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_3_ID93           CAN_3.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_3_B93            CAN_3.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_3_H93            CAN_3.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_3_W93            CAN_3.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_3_CS94           CAN_3.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_3_ID94           CAN_3.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_3_B94            CAN_3.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_3_H94            CAN_3.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_3_W94            CAN_3.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_3_CS95           CAN_3.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_3_ID95           CAN_3.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_3_B95            CAN_3.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_3_H95            CAN_3.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_3_W95            CAN_3.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_3_RXIMR0         CAN_3.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR1         CAN_3.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR2         CAN_3.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR3         CAN_3.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR4         CAN_3.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR5         CAN_3.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR6         CAN_3.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR7         CAN_3.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR8         CAN_3.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR9         CAN_3.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_3_RXIMR10        CAN_3.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR11        CAN_3.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR12        CAN_3.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR13        CAN_3.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR14        CAN_3.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR15        CAN_3.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR16        CAN_3.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR17        CAN_3.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR18        CAN_3.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR19        CAN_3.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR20        CAN_3.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR21        CAN_3.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR22        CAN_3.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR23        CAN_3.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR24        CAN_3.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR25        CAN_3.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR26        CAN_3.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR27        CAN_3.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR28        CAN_3.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR29        CAN_3.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR30        CAN_3.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR31        CAN_3.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR32        CAN_3.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR33        CAN_3.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR34        CAN_3.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR35        CAN_3.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR36        CAN_3.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR37        CAN_3.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR38        CAN_3.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR39        CAN_3.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR40        CAN_3.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR41        CAN_3.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR42        CAN_3.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR43        CAN_3.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR44        CAN_3.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR45        CAN_3.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR46        CAN_3.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR47        CAN_3.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR48        CAN_3.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR49        CAN_3.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR50        CAN_3.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR51        CAN_3.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR52        CAN_3.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR53        CAN_3.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR54        CAN_3.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR55        CAN_3.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR56        CAN_3.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR57        CAN_3.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR58        CAN_3.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR59        CAN_3.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR60        CAN_3.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR61        CAN_3.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR62        CAN_3.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR63        CAN_3.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR64        CAN_3.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR65        CAN_3.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR66        CAN_3.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR67        CAN_3.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR68        CAN_3.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR69        CAN_3.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR70        CAN_3.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR71        CAN_3.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR72        CAN_3.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR73        CAN_3.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR74        CAN_3.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR75        CAN_3.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR76        CAN_3.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR77        CAN_3.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR78        CAN_3.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR79        CAN_3.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR80        CAN_3.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR81        CAN_3.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR82        CAN_3.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR83        CAN_3.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR84        CAN_3.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR85        CAN_3.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR86        CAN_3.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR87        CAN_3.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR88        CAN_3.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR89        CAN_3.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR90        CAN_3.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR91        CAN_3.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR92        CAN_3.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR93        CAN_3.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR94        CAN_3.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_3_RXIMR95        CAN_3.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_3_FDCTRL         CAN_3.FDCTRL.R                /* CAN FD Control Register */
#define CAN_3_FDCBT          CAN_3.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_3_FDCRC          CAN_3.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_4_MCR            CAN_4.MCR.R                   /* Module Configuration Register */
#define CAN_4_CTRL1          CAN_4.CTRL1.R                 /* Control 1 register */
#define CAN_4_TIMER          CAN_4.TIMER.R                 /* Free Running Timer */
#define CAN_4_RXMGMASK       CAN_4.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_4_RX14MASK       CAN_4.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_4_RX15MASK       CAN_4.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_4_ECR            CAN_4.ECR.R                   /* Error Counter */
#define CAN_4_ESR1           CAN_4.ESR1.R                  /* Error and Status 1 register */
#define CAN_4_IMASK2         CAN_4.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_4_IMASK1         CAN_4.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_4_IFLAG2         CAN_4.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_4_IFLAG1         CAN_4.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_4_CTRL2          CAN_4.CTRL2.R                 /* Control 2 register */
#define CAN_4_ESR2           CAN_4.ESR2.R                  /* Error and Status 2 register */
#define CAN_4_CRCR           CAN_4.CRCR.R                  /* CRC Register */
#define CAN_4_RXFGMASK       CAN_4.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_4_RXFIR          CAN_4.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_4_CS0            CAN_4.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_4_ID0            CAN_4.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_4_B0             CAN_4.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_4_H0             CAN_4.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_4_W0             CAN_4.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_4_CS1            CAN_4.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_4_ID1            CAN_4.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_4_B1             CAN_4.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_4_H1             CAN_4.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_4_W1             CAN_4.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_4_CS2            CAN_4.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_4_ID2            CAN_4.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_4_B2             CAN_4.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_4_H2             CAN_4.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_4_W2             CAN_4.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_4_CS3            CAN_4.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_4_ID3            CAN_4.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_4_B3             CAN_4.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_4_H3             CAN_4.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_4_W3             CAN_4.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_4_CS4            CAN_4.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_4_ID4            CAN_4.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_4_B4             CAN_4.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_4_H4             CAN_4.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_4_W4             CAN_4.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_4_CS5            CAN_4.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_4_ID5            CAN_4.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_4_B5             CAN_4.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_4_H5             CAN_4.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_4_W5             CAN_4.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_4_CS6            CAN_4.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_4_ID6            CAN_4.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_4_B6             CAN_4.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_4_H6             CAN_4.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_4_W6             CAN_4.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_4_CS7            CAN_4.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_4_ID7            CAN_4.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_4_B7             CAN_4.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_4_H7             CAN_4.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_4_W7             CAN_4.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_4_CS8            CAN_4.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_4_ID8            CAN_4.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_4_B8             CAN_4.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_4_H8             CAN_4.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_4_W8             CAN_4.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_4_CS9            CAN_4.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_4_ID9            CAN_4.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_4_B9             CAN_4.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_4_H9             CAN_4.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_4_W9             CAN_4.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_4_CS10           CAN_4.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_4_ID10           CAN_4.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_4_B10            CAN_4.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_4_H10            CAN_4.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_4_W10            CAN_4.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_4_CS11           CAN_4.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_4_ID11           CAN_4.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_4_B11            CAN_4.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_4_H11            CAN_4.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_4_W11            CAN_4.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_4_CS12           CAN_4.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_4_ID12           CAN_4.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_4_B12            CAN_4.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_4_H12            CAN_4.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_4_W12            CAN_4.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_4_CS13           CAN_4.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_4_ID13           CAN_4.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_4_B13            CAN_4.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_4_H13            CAN_4.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_4_W13            CAN_4.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_4_CS14           CAN_4.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_4_ID14           CAN_4.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_4_B14            CAN_4.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_4_H14            CAN_4.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_4_W14            CAN_4.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_4_CS15           CAN_4.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_4_ID15           CAN_4.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_4_B15            CAN_4.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_4_H15            CAN_4.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_4_W15            CAN_4.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_4_CS16           CAN_4.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_4_ID16           CAN_4.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_4_B16            CAN_4.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_4_H16            CAN_4.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_4_W16            CAN_4.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_4_CS17           CAN_4.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_4_ID17           CAN_4.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_4_B17            CAN_4.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_4_H17            CAN_4.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_4_W17            CAN_4.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_4_CS18           CAN_4.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_4_ID18           CAN_4.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_4_B18            CAN_4.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_4_H18            CAN_4.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_4_W18            CAN_4.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_4_CS19           CAN_4.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_4_ID19           CAN_4.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_4_B19            CAN_4.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_4_H19            CAN_4.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_4_W19            CAN_4.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_4_CS20           CAN_4.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_4_ID20           CAN_4.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_4_B20            CAN_4.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_4_H20            CAN_4.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_4_W20            CAN_4.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_4_CS21           CAN_4.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_4_ID21           CAN_4.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_4_B21            CAN_4.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_4_H21            CAN_4.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_4_W21            CAN_4.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_4_CS22           CAN_4.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_4_ID22           CAN_4.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_4_B22            CAN_4.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_4_H22            CAN_4.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_4_W22            CAN_4.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_4_CS23           CAN_4.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_4_ID23           CAN_4.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_4_B23            CAN_4.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_4_H23            CAN_4.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_4_W23            CAN_4.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_4_CS24           CAN_4.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_4_ID24           CAN_4.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_4_B24            CAN_4.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_4_H24            CAN_4.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_4_W24            CAN_4.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_4_CS25           CAN_4.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_4_ID25           CAN_4.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_4_B25            CAN_4.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_4_H25            CAN_4.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_4_W25            CAN_4.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_4_CS26           CAN_4.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_4_ID26           CAN_4.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_4_B26            CAN_4.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_4_H26            CAN_4.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_4_W26            CAN_4.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_4_CS27           CAN_4.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_4_ID27           CAN_4.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_4_B27            CAN_4.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_4_H27            CAN_4.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_4_W27            CAN_4.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_4_CS28           CAN_4.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_4_ID28           CAN_4.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_4_B28            CAN_4.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_4_H28            CAN_4.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_4_W28            CAN_4.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_4_CS29           CAN_4.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_4_ID29           CAN_4.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_4_B29            CAN_4.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_4_H29            CAN_4.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_4_W29            CAN_4.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_4_CS30           CAN_4.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_4_ID30           CAN_4.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_4_B30            CAN_4.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_4_H30            CAN_4.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_4_W30            CAN_4.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_4_CS31           CAN_4.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_4_ID31           CAN_4.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_4_B31            CAN_4.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_4_H31            CAN_4.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_4_W31            CAN_4.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_4_CS32           CAN_4.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_4_ID32           CAN_4.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_4_B32            CAN_4.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_4_H32            CAN_4.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_4_W32            CAN_4.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_4_CS33           CAN_4.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_4_ID33           CAN_4.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_4_B33            CAN_4.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_4_H33            CAN_4.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_4_W33            CAN_4.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_4_CS34           CAN_4.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_4_ID34           CAN_4.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_4_B34            CAN_4.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_4_H34            CAN_4.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_4_W34            CAN_4.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_4_CS35           CAN_4.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_4_ID35           CAN_4.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_4_B35            CAN_4.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_4_H35            CAN_4.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_4_W35            CAN_4.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_4_CS36           CAN_4.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_4_ID36           CAN_4.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_4_B36            CAN_4.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_4_H36            CAN_4.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_4_W36            CAN_4.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_4_CS37           CAN_4.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_4_ID37           CAN_4.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_4_B37            CAN_4.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_4_H37            CAN_4.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_4_W37            CAN_4.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_4_CS38           CAN_4.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_4_ID38           CAN_4.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_4_B38            CAN_4.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_4_H38            CAN_4.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_4_W38            CAN_4.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_4_CS39           CAN_4.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_4_ID39           CAN_4.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_4_B39            CAN_4.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_4_H39            CAN_4.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_4_W39            CAN_4.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_4_CS40           CAN_4.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_4_ID40           CAN_4.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_4_B40            CAN_4.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_4_H40            CAN_4.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_4_W40            CAN_4.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_4_CS41           CAN_4.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_4_ID41           CAN_4.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_4_B41            CAN_4.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_4_H41            CAN_4.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_4_W41            CAN_4.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_4_CS42           CAN_4.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_4_ID42           CAN_4.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_4_B42            CAN_4.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_4_H42            CAN_4.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_4_W42            CAN_4.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_4_CS43           CAN_4.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_4_ID43           CAN_4.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_4_B43            CAN_4.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_4_H43            CAN_4.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_4_W43            CAN_4.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_4_CS44           CAN_4.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_4_ID44           CAN_4.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_4_B44            CAN_4.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_4_H44            CAN_4.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_4_W44            CAN_4.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_4_CS45           CAN_4.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_4_ID45           CAN_4.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_4_B45            CAN_4.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_4_H45            CAN_4.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_4_W45            CAN_4.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_4_CS46           CAN_4.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_4_ID46           CAN_4.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_4_B46            CAN_4.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_4_H46            CAN_4.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_4_W46            CAN_4.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_4_CS47           CAN_4.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_4_ID47           CAN_4.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_4_B47            CAN_4.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_4_H47            CAN_4.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_4_W47            CAN_4.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_4_CS48           CAN_4.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_4_ID48           CAN_4.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_4_B48            CAN_4.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_4_H48            CAN_4.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_4_W48            CAN_4.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_4_CS49           CAN_4.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_4_ID49           CAN_4.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_4_B49            CAN_4.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_4_H49            CAN_4.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_4_W49            CAN_4.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_4_CS50           CAN_4.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_4_ID50           CAN_4.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_4_B50            CAN_4.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_4_H50            CAN_4.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_4_W50            CAN_4.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_4_CS51           CAN_4.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_4_ID51           CAN_4.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_4_B51            CAN_4.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_4_H51            CAN_4.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_4_W51            CAN_4.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_4_CS52           CAN_4.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_4_ID52           CAN_4.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_4_B52            CAN_4.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_4_H52            CAN_4.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_4_W52            CAN_4.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_4_CS53           CAN_4.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_4_ID53           CAN_4.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_4_B53            CAN_4.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_4_H53            CAN_4.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_4_W53            CAN_4.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_4_CS54           CAN_4.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_4_ID54           CAN_4.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_4_B54            CAN_4.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_4_H54            CAN_4.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_4_W54            CAN_4.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_4_CS55           CAN_4.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_4_ID55           CAN_4.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_4_B55            CAN_4.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_4_H55            CAN_4.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_4_W55            CAN_4.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_4_CS56           CAN_4.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_4_ID56           CAN_4.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_4_B56            CAN_4.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_4_H56            CAN_4.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_4_W56            CAN_4.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_4_CS57           CAN_4.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_4_ID57           CAN_4.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_4_B57            CAN_4.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_4_H57            CAN_4.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_4_W57            CAN_4.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_4_CS58           CAN_4.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_4_ID58           CAN_4.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_4_B58            CAN_4.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_4_H58            CAN_4.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_4_W58            CAN_4.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_4_CS59           CAN_4.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_4_ID59           CAN_4.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_4_B59            CAN_4.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_4_H59            CAN_4.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_4_W59            CAN_4.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_4_CS60           CAN_4.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_4_ID60           CAN_4.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_4_B60            CAN_4.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_4_H60            CAN_4.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_4_W60            CAN_4.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_4_CS61           CAN_4.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_4_ID61           CAN_4.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_4_B61            CAN_4.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_4_H61            CAN_4.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_4_W61            CAN_4.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_4_CS62           CAN_4.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_4_ID62           CAN_4.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_4_B62            CAN_4.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_4_H62            CAN_4.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_4_W62            CAN_4.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_4_CS63           CAN_4.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_4_ID63           CAN_4.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_4_B63            CAN_4.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_4_H63            CAN_4.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_4_W63            CAN_4.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_4_CS64           CAN_4.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_4_ID64           CAN_4.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_4_B64            CAN_4.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_4_H64            CAN_4.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_4_W64            CAN_4.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_4_CS65           CAN_4.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_4_ID65           CAN_4.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_4_B65            CAN_4.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_4_H65            CAN_4.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_4_W65            CAN_4.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_4_CS66           CAN_4.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_4_ID66           CAN_4.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_4_B66            CAN_4.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_4_H66            CAN_4.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_4_W66            CAN_4.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_4_CS67           CAN_4.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_4_ID67           CAN_4.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_4_B67            CAN_4.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_4_H67            CAN_4.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_4_W67            CAN_4.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_4_CS68           CAN_4.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_4_ID68           CAN_4.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_4_B68            CAN_4.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_4_H68            CAN_4.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_4_W68            CAN_4.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_4_CS69           CAN_4.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_4_ID69           CAN_4.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_4_B69            CAN_4.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_4_H69            CAN_4.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_4_W69            CAN_4.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_4_CS70           CAN_4.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_4_ID70           CAN_4.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_4_B70            CAN_4.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_4_H70            CAN_4.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_4_W70            CAN_4.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_4_CS71           CAN_4.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_4_ID71           CAN_4.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_4_B71            CAN_4.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_4_H71            CAN_4.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_4_W71            CAN_4.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_4_CS72           CAN_4.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_4_ID72           CAN_4.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_4_B72            CAN_4.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_4_H72            CAN_4.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_4_W72            CAN_4.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_4_CS73           CAN_4.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_4_ID73           CAN_4.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_4_B73            CAN_4.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_4_H73            CAN_4.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_4_W73            CAN_4.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_4_CS74           CAN_4.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_4_ID74           CAN_4.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_4_B74            CAN_4.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_4_H74            CAN_4.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_4_W74            CAN_4.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_4_CS75           CAN_4.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_4_ID75           CAN_4.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_4_B75            CAN_4.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_4_H75            CAN_4.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_4_W75            CAN_4.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_4_CS76           CAN_4.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_4_ID76           CAN_4.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_4_B76            CAN_4.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_4_H76            CAN_4.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_4_W76            CAN_4.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_4_CS77           CAN_4.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_4_ID77           CAN_4.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_4_B77            CAN_4.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_4_H77            CAN_4.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_4_W77            CAN_4.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_4_CS78           CAN_4.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_4_ID78           CAN_4.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_4_B78            CAN_4.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_4_H78            CAN_4.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_4_W78            CAN_4.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_4_CS79           CAN_4.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_4_ID79           CAN_4.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_4_B79            CAN_4.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_4_H79            CAN_4.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_4_W79            CAN_4.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_4_CS80           CAN_4.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_4_ID80           CAN_4.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_4_B80            CAN_4.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_4_H80            CAN_4.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_4_W80            CAN_4.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_4_CS81           CAN_4.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_4_ID81           CAN_4.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_4_B81            CAN_4.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_4_H81            CAN_4.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_4_W81            CAN_4.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_4_CS82           CAN_4.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_4_ID82           CAN_4.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_4_B82            CAN_4.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_4_H82            CAN_4.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_4_W82            CAN_4.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_4_CS83           CAN_4.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_4_ID83           CAN_4.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_4_B83            CAN_4.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_4_H83            CAN_4.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_4_W83            CAN_4.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_4_CS84           CAN_4.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_4_ID84           CAN_4.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_4_B84            CAN_4.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_4_H84            CAN_4.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_4_W84            CAN_4.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_4_CS85           CAN_4.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_4_ID85           CAN_4.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_4_B85            CAN_4.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_4_H85            CAN_4.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_4_W85            CAN_4.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_4_CS86           CAN_4.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_4_ID86           CAN_4.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_4_B86            CAN_4.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_4_H86            CAN_4.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_4_W86            CAN_4.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_4_CS87           CAN_4.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_4_ID87           CAN_4.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_4_B87            CAN_4.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_4_H87            CAN_4.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_4_W87            CAN_4.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_4_CS88           CAN_4.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_4_ID88           CAN_4.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_4_B88            CAN_4.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_4_H88            CAN_4.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_4_W88            CAN_4.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_4_CS89           CAN_4.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_4_ID89           CAN_4.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_4_B89            CAN_4.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_4_H89            CAN_4.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_4_W89            CAN_4.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_4_CS90           CAN_4.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_4_ID90           CAN_4.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_4_B90            CAN_4.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_4_H90            CAN_4.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_4_W90            CAN_4.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_4_CS91           CAN_4.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_4_ID91           CAN_4.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_4_B91            CAN_4.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_4_H91            CAN_4.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_4_W91            CAN_4.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_4_CS92           CAN_4.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_4_ID92           CAN_4.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_4_B92            CAN_4.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_4_H92            CAN_4.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_4_W92            CAN_4.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_4_CS93           CAN_4.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_4_ID93           CAN_4.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_4_B93            CAN_4.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_4_H93            CAN_4.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_4_W93            CAN_4.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_4_CS94           CAN_4.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_4_ID94           CAN_4.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_4_B94            CAN_4.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_4_H94            CAN_4.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_4_W94            CAN_4.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_4_CS95           CAN_4.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_4_ID95           CAN_4.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_4_B95            CAN_4.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_4_H95            CAN_4.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_4_W95            CAN_4.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_4_RXIMR0         CAN_4.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR1         CAN_4.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR2         CAN_4.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR3         CAN_4.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR4         CAN_4.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR5         CAN_4.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR6         CAN_4.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR7         CAN_4.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR8         CAN_4.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR9         CAN_4.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_4_RXIMR10        CAN_4.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR11        CAN_4.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR12        CAN_4.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR13        CAN_4.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR14        CAN_4.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR15        CAN_4.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR16        CAN_4.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR17        CAN_4.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR18        CAN_4.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR19        CAN_4.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR20        CAN_4.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR21        CAN_4.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR22        CAN_4.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR23        CAN_4.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR24        CAN_4.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR25        CAN_4.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR26        CAN_4.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR27        CAN_4.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR28        CAN_4.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR29        CAN_4.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR30        CAN_4.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR31        CAN_4.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR32        CAN_4.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR33        CAN_4.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR34        CAN_4.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR35        CAN_4.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR36        CAN_4.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR37        CAN_4.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR38        CAN_4.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR39        CAN_4.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR40        CAN_4.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR41        CAN_4.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR42        CAN_4.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR43        CAN_4.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR44        CAN_4.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR45        CAN_4.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR46        CAN_4.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR47        CAN_4.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR48        CAN_4.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR49        CAN_4.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR50        CAN_4.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR51        CAN_4.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR52        CAN_4.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR53        CAN_4.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR54        CAN_4.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR55        CAN_4.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR56        CAN_4.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR57        CAN_4.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR58        CAN_4.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR59        CAN_4.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR60        CAN_4.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR61        CAN_4.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR62        CAN_4.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR63        CAN_4.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR64        CAN_4.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR65        CAN_4.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR66        CAN_4.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR67        CAN_4.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR68        CAN_4.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR69        CAN_4.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR70        CAN_4.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR71        CAN_4.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR72        CAN_4.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR73        CAN_4.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR74        CAN_4.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR75        CAN_4.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR76        CAN_4.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR77        CAN_4.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR78        CAN_4.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR79        CAN_4.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR80        CAN_4.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR81        CAN_4.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR82        CAN_4.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR83        CAN_4.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR84        CAN_4.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR85        CAN_4.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR86        CAN_4.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR87        CAN_4.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR88        CAN_4.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR89        CAN_4.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR90        CAN_4.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR91        CAN_4.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR92        CAN_4.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR93        CAN_4.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR94        CAN_4.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_4_RXIMR95        CAN_4.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_4_FDCTRL         CAN_4.FDCTRL.R                /* CAN FD Control Register */
#define CAN_4_FDCBT          CAN_4.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_4_FDCRC          CAN_4.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_5_MCR            CAN_5.MCR.R                   /* Module Configuration Register */
#define CAN_5_CTRL1          CAN_5.CTRL1.R                 /* Control 1 register */
#define CAN_5_TIMER          CAN_5.TIMER.R                 /* Free Running Timer */
#define CAN_5_RXMGMASK       CAN_5.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_5_RX14MASK       CAN_5.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_5_RX15MASK       CAN_5.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_5_ECR            CAN_5.ECR.R                   /* Error Counter */
#define CAN_5_ESR1           CAN_5.ESR1.R                  /* Error and Status 1 register */
#define CAN_5_IMASK2         CAN_5.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_5_IMASK1         CAN_5.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_5_IFLAG2         CAN_5.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_5_IFLAG1         CAN_5.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_5_CTRL2          CAN_5.CTRL2.R                 /* Control 2 register */
#define CAN_5_ESR2           CAN_5.ESR2.R                  /* Error and Status 2 register */
#define CAN_5_CRCR           CAN_5.CRCR.R                  /* CRC Register */
#define CAN_5_RXFGMASK       CAN_5.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_5_RXFIR          CAN_5.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_5_CS0            CAN_5.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_5_ID0            CAN_5.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_5_B0             CAN_5.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_5_H0             CAN_5.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_5_W0             CAN_5.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_5_CS1            CAN_5.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_5_ID1            CAN_5.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_5_B1             CAN_5.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_5_H1             CAN_5.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_5_W1             CAN_5.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_5_CS2            CAN_5.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_5_ID2            CAN_5.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_5_B2             CAN_5.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_5_H2             CAN_5.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_5_W2             CAN_5.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_5_CS3            CAN_5.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_5_ID3            CAN_5.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_5_B3             CAN_5.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_5_H3             CAN_5.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_5_W3             CAN_5.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_5_CS4            CAN_5.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_5_ID4            CAN_5.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_5_B4             CAN_5.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_5_H4             CAN_5.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_5_W4             CAN_5.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_5_CS5            CAN_5.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_5_ID5            CAN_5.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_5_B5             CAN_5.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_5_H5             CAN_5.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_5_W5             CAN_5.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_5_CS6            CAN_5.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_5_ID6            CAN_5.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_5_B6             CAN_5.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_5_H6             CAN_5.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_5_W6             CAN_5.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_5_CS7            CAN_5.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_5_ID7            CAN_5.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_5_B7             CAN_5.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_5_H7             CAN_5.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_5_W7             CAN_5.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_5_CS8            CAN_5.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_5_ID8            CAN_5.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_5_B8             CAN_5.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_5_H8             CAN_5.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_5_W8             CAN_5.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_5_CS9            CAN_5.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_5_ID9            CAN_5.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_5_B9             CAN_5.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_5_H9             CAN_5.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_5_W9             CAN_5.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_5_CS10           CAN_5.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_5_ID10           CAN_5.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_5_B10            CAN_5.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_5_H10            CAN_5.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_5_W10            CAN_5.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_5_CS11           CAN_5.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_5_ID11           CAN_5.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_5_B11            CAN_5.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_5_H11            CAN_5.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_5_W11            CAN_5.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_5_CS12           CAN_5.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_5_ID12           CAN_5.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_5_B12            CAN_5.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_5_H12            CAN_5.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_5_W12            CAN_5.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_5_CS13           CAN_5.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_5_ID13           CAN_5.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_5_B13            CAN_5.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_5_H13            CAN_5.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_5_W13            CAN_5.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_5_CS14           CAN_5.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_5_ID14           CAN_5.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_5_B14            CAN_5.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_5_H14            CAN_5.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_5_W14            CAN_5.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_5_CS15           CAN_5.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_5_ID15           CAN_5.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_5_B15            CAN_5.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_5_H15            CAN_5.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_5_W15            CAN_5.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_5_CS16           CAN_5.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_5_ID16           CAN_5.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_5_B16            CAN_5.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_5_H16            CAN_5.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_5_W16            CAN_5.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_5_CS17           CAN_5.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_5_ID17           CAN_5.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_5_B17            CAN_5.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_5_H17            CAN_5.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_5_W17            CAN_5.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_5_CS18           CAN_5.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_5_ID18           CAN_5.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_5_B18            CAN_5.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_5_H18            CAN_5.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_5_W18            CAN_5.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_5_CS19           CAN_5.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_5_ID19           CAN_5.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_5_B19            CAN_5.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_5_H19            CAN_5.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_5_W19            CAN_5.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_5_CS20           CAN_5.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_5_ID20           CAN_5.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_5_B20            CAN_5.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_5_H20            CAN_5.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_5_W20            CAN_5.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_5_CS21           CAN_5.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_5_ID21           CAN_5.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_5_B21            CAN_5.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_5_H21            CAN_5.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_5_W21            CAN_5.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_5_CS22           CAN_5.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_5_ID22           CAN_5.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_5_B22            CAN_5.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_5_H22            CAN_5.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_5_W22            CAN_5.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_5_CS23           CAN_5.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_5_ID23           CAN_5.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_5_B23            CAN_5.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_5_H23            CAN_5.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_5_W23            CAN_5.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_5_CS24           CAN_5.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_5_ID24           CAN_5.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_5_B24            CAN_5.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_5_H24            CAN_5.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_5_W24            CAN_5.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_5_CS25           CAN_5.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_5_ID25           CAN_5.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_5_B25            CAN_5.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_5_H25            CAN_5.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_5_W25            CAN_5.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_5_CS26           CAN_5.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_5_ID26           CAN_5.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_5_B26            CAN_5.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_5_H26            CAN_5.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_5_W26            CAN_5.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_5_CS27           CAN_5.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_5_ID27           CAN_5.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_5_B27            CAN_5.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_5_H27            CAN_5.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_5_W27            CAN_5.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_5_CS28           CAN_5.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_5_ID28           CAN_5.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_5_B28            CAN_5.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_5_H28            CAN_5.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_5_W28            CAN_5.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_5_CS29           CAN_5.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_5_ID29           CAN_5.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_5_B29            CAN_5.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_5_H29            CAN_5.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_5_W29            CAN_5.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_5_CS30           CAN_5.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_5_ID30           CAN_5.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_5_B30            CAN_5.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_5_H30            CAN_5.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_5_W30            CAN_5.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_5_CS31           CAN_5.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_5_ID31           CAN_5.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_5_B31            CAN_5.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_5_H31            CAN_5.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_5_W31            CAN_5.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_5_CS32           CAN_5.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_5_ID32           CAN_5.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_5_B32            CAN_5.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_5_H32            CAN_5.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_5_W32            CAN_5.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_5_CS33           CAN_5.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_5_ID33           CAN_5.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_5_B33            CAN_5.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_5_H33            CAN_5.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_5_W33            CAN_5.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_5_CS34           CAN_5.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_5_ID34           CAN_5.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_5_B34            CAN_5.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_5_H34            CAN_5.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_5_W34            CAN_5.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_5_CS35           CAN_5.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_5_ID35           CAN_5.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_5_B35            CAN_5.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_5_H35            CAN_5.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_5_W35            CAN_5.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_5_CS36           CAN_5.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_5_ID36           CAN_5.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_5_B36            CAN_5.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_5_H36            CAN_5.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_5_W36            CAN_5.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_5_CS37           CAN_5.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_5_ID37           CAN_5.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_5_B37            CAN_5.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_5_H37            CAN_5.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_5_W37            CAN_5.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_5_CS38           CAN_5.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_5_ID38           CAN_5.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_5_B38            CAN_5.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_5_H38            CAN_5.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_5_W38            CAN_5.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_5_CS39           CAN_5.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_5_ID39           CAN_5.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_5_B39            CAN_5.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_5_H39            CAN_5.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_5_W39            CAN_5.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_5_CS40           CAN_5.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_5_ID40           CAN_5.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_5_B40            CAN_5.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_5_H40            CAN_5.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_5_W40            CAN_5.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_5_CS41           CAN_5.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_5_ID41           CAN_5.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_5_B41            CAN_5.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_5_H41            CAN_5.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_5_W41            CAN_5.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_5_CS42           CAN_5.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_5_ID42           CAN_5.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_5_B42            CAN_5.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_5_H42            CAN_5.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_5_W42            CAN_5.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_5_CS43           CAN_5.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_5_ID43           CAN_5.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_5_B43            CAN_5.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_5_H43            CAN_5.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_5_W43            CAN_5.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_5_CS44           CAN_5.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_5_ID44           CAN_5.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_5_B44            CAN_5.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_5_H44            CAN_5.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_5_W44            CAN_5.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_5_CS45           CAN_5.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_5_ID45           CAN_5.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_5_B45            CAN_5.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_5_H45            CAN_5.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_5_W45            CAN_5.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_5_CS46           CAN_5.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_5_ID46           CAN_5.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_5_B46            CAN_5.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_5_H46            CAN_5.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_5_W46            CAN_5.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_5_CS47           CAN_5.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_5_ID47           CAN_5.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_5_B47            CAN_5.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_5_H47            CAN_5.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_5_W47            CAN_5.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_5_CS48           CAN_5.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_5_ID48           CAN_5.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_5_B48            CAN_5.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_5_H48            CAN_5.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_5_W48            CAN_5.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_5_CS49           CAN_5.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_5_ID49           CAN_5.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_5_B49            CAN_5.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_5_H49            CAN_5.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_5_W49            CAN_5.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_5_CS50           CAN_5.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_5_ID50           CAN_5.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_5_B50            CAN_5.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_5_H50            CAN_5.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_5_W50            CAN_5.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_5_CS51           CAN_5.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_5_ID51           CAN_5.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_5_B51            CAN_5.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_5_H51            CAN_5.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_5_W51            CAN_5.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_5_CS52           CAN_5.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_5_ID52           CAN_5.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_5_B52            CAN_5.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_5_H52            CAN_5.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_5_W52            CAN_5.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_5_CS53           CAN_5.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_5_ID53           CAN_5.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_5_B53            CAN_5.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_5_H53            CAN_5.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_5_W53            CAN_5.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_5_CS54           CAN_5.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_5_ID54           CAN_5.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_5_B54            CAN_5.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_5_H54            CAN_5.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_5_W54            CAN_5.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_5_CS55           CAN_5.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_5_ID55           CAN_5.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_5_B55            CAN_5.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_5_H55            CAN_5.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_5_W55            CAN_5.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_5_CS56           CAN_5.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_5_ID56           CAN_5.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_5_B56            CAN_5.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_5_H56            CAN_5.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_5_W56            CAN_5.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_5_CS57           CAN_5.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_5_ID57           CAN_5.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_5_B57            CAN_5.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_5_H57            CAN_5.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_5_W57            CAN_5.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_5_CS58           CAN_5.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_5_ID58           CAN_5.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_5_B58            CAN_5.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_5_H58            CAN_5.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_5_W58            CAN_5.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_5_CS59           CAN_5.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_5_ID59           CAN_5.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_5_B59            CAN_5.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_5_H59            CAN_5.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_5_W59            CAN_5.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_5_CS60           CAN_5.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_5_ID60           CAN_5.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_5_B60            CAN_5.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_5_H60            CAN_5.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_5_W60            CAN_5.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_5_CS61           CAN_5.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_5_ID61           CAN_5.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_5_B61            CAN_5.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_5_H61            CAN_5.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_5_W61            CAN_5.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_5_CS62           CAN_5.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_5_ID62           CAN_5.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_5_B62            CAN_5.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_5_H62            CAN_5.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_5_W62            CAN_5.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_5_CS63           CAN_5.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_5_ID63           CAN_5.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_5_B63            CAN_5.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_5_H63            CAN_5.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_5_W63            CAN_5.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_5_CS64           CAN_5.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_5_ID64           CAN_5.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_5_B64            CAN_5.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_5_H64            CAN_5.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_5_W64            CAN_5.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_5_CS65           CAN_5.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_5_ID65           CAN_5.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_5_B65            CAN_5.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_5_H65            CAN_5.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_5_W65            CAN_5.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_5_CS66           CAN_5.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_5_ID66           CAN_5.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_5_B66            CAN_5.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_5_H66            CAN_5.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_5_W66            CAN_5.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_5_CS67           CAN_5.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_5_ID67           CAN_5.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_5_B67            CAN_5.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_5_H67            CAN_5.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_5_W67            CAN_5.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_5_CS68           CAN_5.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_5_ID68           CAN_5.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_5_B68            CAN_5.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_5_H68            CAN_5.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_5_W68            CAN_5.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_5_CS69           CAN_5.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_5_ID69           CAN_5.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_5_B69            CAN_5.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_5_H69            CAN_5.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_5_W69            CAN_5.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_5_CS70           CAN_5.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_5_ID70           CAN_5.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_5_B70            CAN_5.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_5_H70            CAN_5.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_5_W70            CAN_5.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_5_CS71           CAN_5.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_5_ID71           CAN_5.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_5_B71            CAN_5.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_5_H71            CAN_5.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_5_W71            CAN_5.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_5_CS72           CAN_5.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_5_ID72           CAN_5.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_5_B72            CAN_5.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_5_H72            CAN_5.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_5_W72            CAN_5.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_5_CS73           CAN_5.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_5_ID73           CAN_5.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_5_B73            CAN_5.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_5_H73            CAN_5.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_5_W73            CAN_5.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_5_CS74           CAN_5.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_5_ID74           CAN_5.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_5_B74            CAN_5.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_5_H74            CAN_5.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_5_W74            CAN_5.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_5_CS75           CAN_5.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_5_ID75           CAN_5.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_5_B75            CAN_5.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_5_H75            CAN_5.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_5_W75            CAN_5.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_5_CS76           CAN_5.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_5_ID76           CAN_5.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_5_B76            CAN_5.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_5_H76            CAN_5.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_5_W76            CAN_5.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_5_CS77           CAN_5.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_5_ID77           CAN_5.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_5_B77            CAN_5.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_5_H77            CAN_5.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_5_W77            CAN_5.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_5_CS78           CAN_5.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_5_ID78           CAN_5.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_5_B78            CAN_5.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_5_H78            CAN_5.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_5_W78            CAN_5.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_5_CS79           CAN_5.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_5_ID79           CAN_5.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_5_B79            CAN_5.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_5_H79            CAN_5.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_5_W79            CAN_5.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_5_CS80           CAN_5.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_5_ID80           CAN_5.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_5_B80            CAN_5.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_5_H80            CAN_5.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_5_W80            CAN_5.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_5_CS81           CAN_5.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_5_ID81           CAN_5.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_5_B81            CAN_5.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_5_H81            CAN_5.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_5_W81            CAN_5.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_5_CS82           CAN_5.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_5_ID82           CAN_5.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_5_B82            CAN_5.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_5_H82            CAN_5.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_5_W82            CAN_5.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_5_CS83           CAN_5.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_5_ID83           CAN_5.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_5_B83            CAN_5.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_5_H83            CAN_5.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_5_W83            CAN_5.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_5_CS84           CAN_5.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_5_ID84           CAN_5.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_5_B84            CAN_5.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_5_H84            CAN_5.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_5_W84            CAN_5.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_5_CS85           CAN_5.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_5_ID85           CAN_5.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_5_B85            CAN_5.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_5_H85            CAN_5.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_5_W85            CAN_5.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_5_CS86           CAN_5.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_5_ID86           CAN_5.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_5_B86            CAN_5.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_5_H86            CAN_5.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_5_W86            CAN_5.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_5_CS87           CAN_5.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_5_ID87           CAN_5.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_5_B87            CAN_5.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_5_H87            CAN_5.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_5_W87            CAN_5.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_5_CS88           CAN_5.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_5_ID88           CAN_5.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_5_B88            CAN_5.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_5_H88            CAN_5.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_5_W88            CAN_5.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_5_CS89           CAN_5.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_5_ID89           CAN_5.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_5_B89            CAN_5.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_5_H89            CAN_5.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_5_W89            CAN_5.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_5_CS90           CAN_5.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_5_ID90           CAN_5.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_5_B90            CAN_5.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_5_H90            CAN_5.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_5_W90            CAN_5.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_5_CS91           CAN_5.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_5_ID91           CAN_5.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_5_B91            CAN_5.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_5_H91            CAN_5.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_5_W91            CAN_5.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_5_CS92           CAN_5.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_5_ID92           CAN_5.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_5_B92            CAN_5.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_5_H92            CAN_5.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_5_W92            CAN_5.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_5_CS93           CAN_5.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_5_ID93           CAN_5.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_5_B93            CAN_5.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_5_H93            CAN_5.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_5_W93            CAN_5.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_5_CS94           CAN_5.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_5_ID94           CAN_5.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_5_B94            CAN_5.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_5_H94            CAN_5.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_5_W94            CAN_5.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_5_CS95           CAN_5.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_5_ID95           CAN_5.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_5_B95            CAN_5.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_5_H95            CAN_5.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_5_W95            CAN_5.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_5_RXIMR0         CAN_5.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR1         CAN_5.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR2         CAN_5.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR3         CAN_5.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR4         CAN_5.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR5         CAN_5.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR6         CAN_5.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR7         CAN_5.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR8         CAN_5.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR9         CAN_5.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_5_RXIMR10        CAN_5.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR11        CAN_5.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR12        CAN_5.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR13        CAN_5.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR14        CAN_5.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR15        CAN_5.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR16        CAN_5.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR17        CAN_5.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR18        CAN_5.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR19        CAN_5.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR20        CAN_5.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR21        CAN_5.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR22        CAN_5.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR23        CAN_5.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR24        CAN_5.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR25        CAN_5.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR26        CAN_5.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR27        CAN_5.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR28        CAN_5.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR29        CAN_5.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR30        CAN_5.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR31        CAN_5.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR32        CAN_5.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR33        CAN_5.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR34        CAN_5.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR35        CAN_5.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR36        CAN_5.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR37        CAN_5.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR38        CAN_5.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR39        CAN_5.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR40        CAN_5.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR41        CAN_5.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR42        CAN_5.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR43        CAN_5.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR44        CAN_5.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR45        CAN_5.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR46        CAN_5.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR47        CAN_5.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR48        CAN_5.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR49        CAN_5.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR50        CAN_5.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR51        CAN_5.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR52        CAN_5.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR53        CAN_5.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR54        CAN_5.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR55        CAN_5.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR56        CAN_5.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR57        CAN_5.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR58        CAN_5.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR59        CAN_5.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR60        CAN_5.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR61        CAN_5.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR62        CAN_5.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR63        CAN_5.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR64        CAN_5.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR65        CAN_5.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR66        CAN_5.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR67        CAN_5.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR68        CAN_5.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR69        CAN_5.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR70        CAN_5.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR71        CAN_5.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR72        CAN_5.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR73        CAN_5.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR74        CAN_5.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR75        CAN_5.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR76        CAN_5.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR77        CAN_5.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR78        CAN_5.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR79        CAN_5.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR80        CAN_5.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR81        CAN_5.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR82        CAN_5.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR83        CAN_5.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR84        CAN_5.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR85        CAN_5.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR86        CAN_5.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR87        CAN_5.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR88        CAN_5.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR89        CAN_5.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR90        CAN_5.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR91        CAN_5.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR92        CAN_5.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR93        CAN_5.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR94        CAN_5.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_5_RXIMR95        CAN_5.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_5_FDCTRL         CAN_5.FDCTRL.R                /* CAN FD Control Register */
#define CAN_5_FDCBT          CAN_5.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_5_FDCRC          CAN_5.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_6_MCR            CAN_6.MCR.R                   /* Module Configuration Register */
#define CAN_6_CTRL1          CAN_6.CTRL1.R                 /* Control 1 register */
#define CAN_6_TIMER          CAN_6.TIMER.R                 /* Free Running Timer */
#define CAN_6_RXMGMASK       CAN_6.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_6_RX14MASK       CAN_6.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_6_RX15MASK       CAN_6.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_6_ECR            CAN_6.ECR.R                   /* Error Counter */
#define CAN_6_ESR1           CAN_6.ESR1.R                  /* Error and Status 1 register */
#define CAN_6_IMASK2         CAN_6.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_6_IMASK1         CAN_6.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_6_IFLAG2         CAN_6.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_6_IFLAG1         CAN_6.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_6_CTRL2          CAN_6.CTRL2.R                 /* Control 2 register */
#define CAN_6_ESR2           CAN_6.ESR2.R                  /* Error and Status 2 register */
#define CAN_6_CRCR           CAN_6.CRCR.R                  /* CRC Register */
#define CAN_6_RXFGMASK       CAN_6.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_6_RXFIR          CAN_6.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_6_CS0            CAN_6.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_6_ID0            CAN_6.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_6_B0             CAN_6.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_6_H0             CAN_6.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_6_W0             CAN_6.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_6_CS1            CAN_6.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_6_ID1            CAN_6.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_6_B1             CAN_6.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_6_H1             CAN_6.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_6_W1             CAN_6.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_6_CS2            CAN_6.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_6_ID2            CAN_6.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_6_B2             CAN_6.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_6_H2             CAN_6.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_6_W2             CAN_6.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_6_CS3            CAN_6.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_6_ID3            CAN_6.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_6_B3             CAN_6.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_6_H3             CAN_6.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_6_W3             CAN_6.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_6_CS4            CAN_6.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_6_ID4            CAN_6.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_6_B4             CAN_6.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_6_H4             CAN_6.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_6_W4             CAN_6.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_6_CS5            CAN_6.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_6_ID5            CAN_6.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_6_B5             CAN_6.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_6_H5             CAN_6.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_6_W5             CAN_6.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_6_CS6            CAN_6.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_6_ID6            CAN_6.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_6_B6             CAN_6.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_6_H6             CAN_6.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_6_W6             CAN_6.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_6_CS7            CAN_6.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_6_ID7            CAN_6.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_6_B7             CAN_6.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_6_H7             CAN_6.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_6_W7             CAN_6.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_6_CS8            CAN_6.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_6_ID8            CAN_6.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_6_B8             CAN_6.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_6_H8             CAN_6.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_6_W8             CAN_6.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_6_CS9            CAN_6.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_6_ID9            CAN_6.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_6_B9             CAN_6.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_6_H9             CAN_6.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_6_W9             CAN_6.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_6_CS10           CAN_6.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_6_ID10           CAN_6.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_6_B10            CAN_6.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_6_H10            CAN_6.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_6_W10            CAN_6.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_6_CS11           CAN_6.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_6_ID11           CAN_6.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_6_B11            CAN_6.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_6_H11            CAN_6.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_6_W11            CAN_6.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_6_CS12           CAN_6.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_6_ID12           CAN_6.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_6_B12            CAN_6.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_6_H12            CAN_6.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_6_W12            CAN_6.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_6_CS13           CAN_6.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_6_ID13           CAN_6.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_6_B13            CAN_6.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_6_H13            CAN_6.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_6_W13            CAN_6.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_6_CS14           CAN_6.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_6_ID14           CAN_6.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_6_B14            CAN_6.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_6_H14            CAN_6.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_6_W14            CAN_6.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_6_CS15           CAN_6.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_6_ID15           CAN_6.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_6_B15            CAN_6.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_6_H15            CAN_6.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_6_W15            CAN_6.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_6_CS16           CAN_6.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_6_ID16           CAN_6.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_6_B16            CAN_6.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_6_H16            CAN_6.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_6_W16            CAN_6.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_6_CS17           CAN_6.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_6_ID17           CAN_6.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_6_B17            CAN_6.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_6_H17            CAN_6.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_6_W17            CAN_6.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_6_CS18           CAN_6.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_6_ID18           CAN_6.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_6_B18            CAN_6.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_6_H18            CAN_6.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_6_W18            CAN_6.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_6_CS19           CAN_6.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_6_ID19           CAN_6.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_6_B19            CAN_6.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_6_H19            CAN_6.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_6_W19            CAN_6.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_6_CS20           CAN_6.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_6_ID20           CAN_6.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_6_B20            CAN_6.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_6_H20            CAN_6.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_6_W20            CAN_6.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_6_CS21           CAN_6.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_6_ID21           CAN_6.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_6_B21            CAN_6.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_6_H21            CAN_6.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_6_W21            CAN_6.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_6_CS22           CAN_6.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_6_ID22           CAN_6.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_6_B22            CAN_6.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_6_H22            CAN_6.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_6_W22            CAN_6.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_6_CS23           CAN_6.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_6_ID23           CAN_6.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_6_B23            CAN_6.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_6_H23            CAN_6.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_6_W23            CAN_6.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_6_CS24           CAN_6.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_6_ID24           CAN_6.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_6_B24            CAN_6.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_6_H24            CAN_6.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_6_W24            CAN_6.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_6_CS25           CAN_6.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_6_ID25           CAN_6.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_6_B25            CAN_6.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_6_H25            CAN_6.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_6_W25            CAN_6.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_6_CS26           CAN_6.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_6_ID26           CAN_6.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_6_B26            CAN_6.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_6_H26            CAN_6.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_6_W26            CAN_6.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_6_CS27           CAN_6.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_6_ID27           CAN_6.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_6_B27            CAN_6.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_6_H27            CAN_6.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_6_W27            CAN_6.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_6_CS28           CAN_6.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_6_ID28           CAN_6.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_6_B28            CAN_6.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_6_H28            CAN_6.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_6_W28            CAN_6.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_6_CS29           CAN_6.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_6_ID29           CAN_6.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_6_B29            CAN_6.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_6_H29            CAN_6.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_6_W29            CAN_6.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_6_CS30           CAN_6.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_6_ID30           CAN_6.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_6_B30            CAN_6.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_6_H30            CAN_6.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_6_W30            CAN_6.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_6_CS31           CAN_6.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_6_ID31           CAN_6.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_6_B31            CAN_6.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_6_H31            CAN_6.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_6_W31            CAN_6.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_6_CS32           CAN_6.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_6_ID32           CAN_6.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_6_B32            CAN_6.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_6_H32            CAN_6.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_6_W32            CAN_6.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_6_CS33           CAN_6.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_6_ID33           CAN_6.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_6_B33            CAN_6.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_6_H33            CAN_6.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_6_W33            CAN_6.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_6_CS34           CAN_6.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_6_ID34           CAN_6.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_6_B34            CAN_6.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_6_H34            CAN_6.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_6_W34            CAN_6.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_6_CS35           CAN_6.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_6_ID35           CAN_6.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_6_B35            CAN_6.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_6_H35            CAN_6.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_6_W35            CAN_6.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_6_CS36           CAN_6.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_6_ID36           CAN_6.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_6_B36            CAN_6.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_6_H36            CAN_6.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_6_W36            CAN_6.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_6_CS37           CAN_6.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_6_ID37           CAN_6.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_6_B37            CAN_6.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_6_H37            CAN_6.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_6_W37            CAN_6.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_6_CS38           CAN_6.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_6_ID38           CAN_6.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_6_B38            CAN_6.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_6_H38            CAN_6.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_6_W38            CAN_6.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_6_CS39           CAN_6.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_6_ID39           CAN_6.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_6_B39            CAN_6.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_6_H39            CAN_6.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_6_W39            CAN_6.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_6_CS40           CAN_6.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_6_ID40           CAN_6.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_6_B40            CAN_6.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_6_H40            CAN_6.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_6_W40            CAN_6.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_6_CS41           CAN_6.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_6_ID41           CAN_6.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_6_B41            CAN_6.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_6_H41            CAN_6.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_6_W41            CAN_6.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_6_CS42           CAN_6.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_6_ID42           CAN_6.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_6_B42            CAN_6.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_6_H42            CAN_6.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_6_W42            CAN_6.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_6_CS43           CAN_6.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_6_ID43           CAN_6.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_6_B43            CAN_6.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_6_H43            CAN_6.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_6_W43            CAN_6.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_6_CS44           CAN_6.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_6_ID44           CAN_6.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_6_B44            CAN_6.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_6_H44            CAN_6.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_6_W44            CAN_6.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_6_CS45           CAN_6.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_6_ID45           CAN_6.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_6_B45            CAN_6.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_6_H45            CAN_6.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_6_W45            CAN_6.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_6_CS46           CAN_6.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_6_ID46           CAN_6.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_6_B46            CAN_6.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_6_H46            CAN_6.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_6_W46            CAN_6.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_6_CS47           CAN_6.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_6_ID47           CAN_6.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_6_B47            CAN_6.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_6_H47            CAN_6.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_6_W47            CAN_6.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_6_CS48           CAN_6.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_6_ID48           CAN_6.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_6_B48            CAN_6.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_6_H48            CAN_6.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_6_W48            CAN_6.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_6_CS49           CAN_6.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_6_ID49           CAN_6.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_6_B49            CAN_6.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_6_H49            CAN_6.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_6_W49            CAN_6.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_6_CS50           CAN_6.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_6_ID50           CAN_6.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_6_B50            CAN_6.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_6_H50            CAN_6.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_6_W50            CAN_6.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_6_CS51           CAN_6.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_6_ID51           CAN_6.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_6_B51            CAN_6.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_6_H51            CAN_6.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_6_W51            CAN_6.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_6_CS52           CAN_6.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_6_ID52           CAN_6.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_6_B52            CAN_6.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_6_H52            CAN_6.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_6_W52            CAN_6.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_6_CS53           CAN_6.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_6_ID53           CAN_6.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_6_B53            CAN_6.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_6_H53            CAN_6.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_6_W53            CAN_6.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_6_CS54           CAN_6.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_6_ID54           CAN_6.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_6_B54            CAN_6.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_6_H54            CAN_6.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_6_W54            CAN_6.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_6_CS55           CAN_6.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_6_ID55           CAN_6.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_6_B55            CAN_6.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_6_H55            CAN_6.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_6_W55            CAN_6.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_6_CS56           CAN_6.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_6_ID56           CAN_6.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_6_B56            CAN_6.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_6_H56            CAN_6.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_6_W56            CAN_6.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_6_CS57           CAN_6.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_6_ID57           CAN_6.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_6_B57            CAN_6.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_6_H57            CAN_6.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_6_W57            CAN_6.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_6_CS58           CAN_6.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_6_ID58           CAN_6.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_6_B58            CAN_6.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_6_H58            CAN_6.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_6_W58            CAN_6.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_6_CS59           CAN_6.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_6_ID59           CAN_6.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_6_B59            CAN_6.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_6_H59            CAN_6.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_6_W59            CAN_6.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_6_CS60           CAN_6.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_6_ID60           CAN_6.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_6_B60            CAN_6.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_6_H60            CAN_6.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_6_W60            CAN_6.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_6_CS61           CAN_6.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_6_ID61           CAN_6.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_6_B61            CAN_6.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_6_H61            CAN_6.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_6_W61            CAN_6.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_6_CS62           CAN_6.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_6_ID62           CAN_6.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_6_B62            CAN_6.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_6_H62            CAN_6.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_6_W62            CAN_6.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_6_CS63           CAN_6.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_6_ID63           CAN_6.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_6_B63            CAN_6.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_6_H63            CAN_6.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_6_W63            CAN_6.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_6_CS64           CAN_6.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_6_ID64           CAN_6.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_6_B64            CAN_6.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_6_H64            CAN_6.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_6_W64            CAN_6.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_6_CS65           CAN_6.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_6_ID65           CAN_6.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_6_B65            CAN_6.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_6_H65            CAN_6.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_6_W65            CAN_6.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_6_CS66           CAN_6.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_6_ID66           CAN_6.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_6_B66            CAN_6.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_6_H66            CAN_6.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_6_W66            CAN_6.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_6_CS67           CAN_6.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_6_ID67           CAN_6.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_6_B67            CAN_6.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_6_H67            CAN_6.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_6_W67            CAN_6.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_6_CS68           CAN_6.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_6_ID68           CAN_6.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_6_B68            CAN_6.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_6_H68            CAN_6.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_6_W68            CAN_6.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_6_CS69           CAN_6.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_6_ID69           CAN_6.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_6_B69            CAN_6.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_6_H69            CAN_6.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_6_W69            CAN_6.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_6_CS70           CAN_6.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_6_ID70           CAN_6.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_6_B70            CAN_6.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_6_H70            CAN_6.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_6_W70            CAN_6.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_6_CS71           CAN_6.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_6_ID71           CAN_6.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_6_B71            CAN_6.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_6_H71            CAN_6.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_6_W71            CAN_6.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_6_CS72           CAN_6.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_6_ID72           CAN_6.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_6_B72            CAN_6.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_6_H72            CAN_6.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_6_W72            CAN_6.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_6_CS73           CAN_6.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_6_ID73           CAN_6.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_6_B73            CAN_6.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_6_H73            CAN_6.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_6_W73            CAN_6.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_6_CS74           CAN_6.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_6_ID74           CAN_6.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_6_B74            CAN_6.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_6_H74            CAN_6.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_6_W74            CAN_6.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_6_CS75           CAN_6.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_6_ID75           CAN_6.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_6_B75            CAN_6.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_6_H75            CAN_6.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_6_W75            CAN_6.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_6_CS76           CAN_6.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_6_ID76           CAN_6.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_6_B76            CAN_6.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_6_H76            CAN_6.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_6_W76            CAN_6.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_6_CS77           CAN_6.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_6_ID77           CAN_6.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_6_B77            CAN_6.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_6_H77            CAN_6.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_6_W77            CAN_6.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_6_CS78           CAN_6.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_6_ID78           CAN_6.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_6_B78            CAN_6.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_6_H78            CAN_6.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_6_W78            CAN_6.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_6_CS79           CAN_6.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_6_ID79           CAN_6.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_6_B79            CAN_6.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_6_H79            CAN_6.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_6_W79            CAN_6.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_6_CS80           CAN_6.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_6_ID80           CAN_6.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_6_B80            CAN_6.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_6_H80            CAN_6.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_6_W80            CAN_6.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_6_CS81           CAN_6.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_6_ID81           CAN_6.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_6_B81            CAN_6.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_6_H81            CAN_6.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_6_W81            CAN_6.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_6_CS82           CAN_6.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_6_ID82           CAN_6.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_6_B82            CAN_6.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_6_H82            CAN_6.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_6_W82            CAN_6.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_6_CS83           CAN_6.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_6_ID83           CAN_6.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_6_B83            CAN_6.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_6_H83            CAN_6.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_6_W83            CAN_6.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_6_CS84           CAN_6.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_6_ID84           CAN_6.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_6_B84            CAN_6.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_6_H84            CAN_6.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_6_W84            CAN_6.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_6_CS85           CAN_6.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_6_ID85           CAN_6.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_6_B85            CAN_6.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_6_H85            CAN_6.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_6_W85            CAN_6.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_6_CS86           CAN_6.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_6_ID86           CAN_6.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_6_B86            CAN_6.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_6_H86            CAN_6.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_6_W86            CAN_6.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_6_CS87           CAN_6.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_6_ID87           CAN_6.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_6_B87            CAN_6.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_6_H87            CAN_6.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_6_W87            CAN_6.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_6_CS88           CAN_6.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_6_ID88           CAN_6.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_6_B88            CAN_6.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_6_H88            CAN_6.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_6_W88            CAN_6.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_6_CS89           CAN_6.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_6_ID89           CAN_6.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_6_B89            CAN_6.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_6_H89            CAN_6.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_6_W89            CAN_6.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_6_CS90           CAN_6.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_6_ID90           CAN_6.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_6_B90            CAN_6.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_6_H90            CAN_6.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_6_W90            CAN_6.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_6_CS91           CAN_6.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_6_ID91           CAN_6.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_6_B91            CAN_6.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_6_H91            CAN_6.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_6_W91            CAN_6.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_6_CS92           CAN_6.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_6_ID92           CAN_6.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_6_B92            CAN_6.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_6_H92            CAN_6.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_6_W92            CAN_6.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_6_CS93           CAN_6.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_6_ID93           CAN_6.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_6_B93            CAN_6.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_6_H93            CAN_6.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_6_W93            CAN_6.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_6_CS94           CAN_6.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_6_ID94           CAN_6.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_6_B94            CAN_6.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_6_H94            CAN_6.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_6_W94            CAN_6.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_6_CS95           CAN_6.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_6_ID95           CAN_6.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_6_B95            CAN_6.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_6_H95            CAN_6.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_6_W95            CAN_6.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_6_RXIMR0         CAN_6.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR1         CAN_6.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR2         CAN_6.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR3         CAN_6.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR4         CAN_6.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR5         CAN_6.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR6         CAN_6.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR7         CAN_6.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR8         CAN_6.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR9         CAN_6.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_6_RXIMR10        CAN_6.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR11        CAN_6.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR12        CAN_6.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR13        CAN_6.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR14        CAN_6.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR15        CAN_6.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR16        CAN_6.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR17        CAN_6.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR18        CAN_6.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR19        CAN_6.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR20        CAN_6.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR21        CAN_6.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR22        CAN_6.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR23        CAN_6.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR24        CAN_6.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR25        CAN_6.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR26        CAN_6.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR27        CAN_6.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR28        CAN_6.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR29        CAN_6.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR30        CAN_6.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR31        CAN_6.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR32        CAN_6.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR33        CAN_6.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR34        CAN_6.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR35        CAN_6.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR36        CAN_6.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR37        CAN_6.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR38        CAN_6.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR39        CAN_6.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR40        CAN_6.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR41        CAN_6.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR42        CAN_6.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR43        CAN_6.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR44        CAN_6.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR45        CAN_6.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR46        CAN_6.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR47        CAN_6.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR48        CAN_6.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR49        CAN_6.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR50        CAN_6.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR51        CAN_6.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR52        CAN_6.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR53        CAN_6.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR54        CAN_6.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR55        CAN_6.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR56        CAN_6.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR57        CAN_6.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR58        CAN_6.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR59        CAN_6.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR60        CAN_6.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR61        CAN_6.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR62        CAN_6.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR63        CAN_6.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR64        CAN_6.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR65        CAN_6.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR66        CAN_6.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR67        CAN_6.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR68        CAN_6.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR69        CAN_6.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR70        CAN_6.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR71        CAN_6.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR72        CAN_6.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR73        CAN_6.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR74        CAN_6.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR75        CAN_6.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR76        CAN_6.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR77        CAN_6.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR78        CAN_6.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR79        CAN_6.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR80        CAN_6.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR81        CAN_6.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR82        CAN_6.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR83        CAN_6.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR84        CAN_6.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR85        CAN_6.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR86        CAN_6.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR87        CAN_6.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR88        CAN_6.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR89        CAN_6.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR90        CAN_6.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR91        CAN_6.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR92        CAN_6.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR93        CAN_6.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR94        CAN_6.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_6_RXIMR95        CAN_6.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_6_FDCTRL         CAN_6.FDCTRL.R                /* CAN FD Control Register */
#define CAN_6_FDCBT          CAN_6.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_6_FDCRC          CAN_6.FDCRC.R                 /* CAN FD CRC Register */

/* CAN */
#define CAN_7_MCR            CAN_7.MCR.R                   /* Module Configuration Register */
#define CAN_7_CTRL1          CAN_7.CTRL1.R                 /* Control 1 register */
#define CAN_7_TIMER          CAN_7.TIMER.R                 /* Free Running Timer */
#define CAN_7_RXMGMASK       CAN_7.RXMGMASK.R              /* Rx Mailboxes Global Mask Register */
#define CAN_7_RX14MASK       CAN_7.RX14MASK.R              /* Rx 14 Mask register */
#define CAN_7_RX15MASK       CAN_7.RX15MASK.R              /* Rx 15 Mask register */
#define CAN_7_ECR            CAN_7.ECR.R                   /* Error Counter */
#define CAN_7_ESR1           CAN_7.ESR1.R                  /* Error and Status 1 register */
#define CAN_7_IMASK2         CAN_7.IMASK2.R                /* Interrupt Masks 2 register */
#define CAN_7_IMASK1         CAN_7.IMASK1.R                /* Interrupt Masks 1 register */
#define CAN_7_IFLAG2         CAN_7.IFLAG2.R                /* Interrupt Flags 2 register */
#define CAN_7_IFLAG1         CAN_7.IFLAG1.R                /* Interrupt Flags 1 register */
#define CAN_7_CTRL2          CAN_7.CTRL2.R                 /* Control 2 register */
#define CAN_7_ESR2           CAN_7.ESR2.R                  /* Error and Status 2 register */
#define CAN_7_CRCR           CAN_7.CRCR.R                  /* CRC Register */
#define CAN_7_RXFGMASK       CAN_7.RXFGMASK.R              /* Rx FIFO Global Mask register */
#define CAN_7_RXFIR          CAN_7.RXFIR.R                 /* Rx FIFO Information Register */
#define CAN_7_CS0            CAN_7.MB[0].CS.R             /* Message Buffer 0 CS Register */
#define CAN_7_ID0            CAN_7.MB[0].ID.R             /* Message Buffer 0 ID Register */
#define CAN_7_B0             CAN_7.MB[0].DATA.B           /* Message Buffer 0 B Register */
#define CAN_7_H0             CAN_7.MB[0].DATA.H           /* Message Buffer 0 H Register */
#define CAN_7_W0             CAN_7.MB[0].DATA.W           /* Message Buffer 0 W Register */
#define CAN_7_CS1            CAN_7.MB[1].CS.R             /* Message Buffer 1 CS Register */
#define CAN_7_ID1            CAN_7.MB[1].ID.R             /* Message Buffer 1 ID Register */
#define CAN_7_B1             CAN_7.MB[1].DATA.B           /* Message Buffer 1 B Register */
#define CAN_7_H1             CAN_7.MB[1].DATA.H           /* Message Buffer 1 H Register */
#define CAN_7_W1             CAN_7.MB[1].DATA.W           /* Message Buffer 1 W Register */
#define CAN_7_CS2            CAN_7.MB[2].CS.R             /* Message Buffer 2 CS Register */
#define CAN_7_ID2            CAN_7.MB[2].ID.R             /* Message Buffer 2 ID Register */
#define CAN_7_B2             CAN_7.MB[2].DATA.B           /* Message Buffer 2 B Register */
#define CAN_7_H2             CAN_7.MB[2].DATA.H           /* Message Buffer 2 H Register */
#define CAN_7_W2             CAN_7.MB[2].DATA.W           /* Message Buffer 2 W Register */
#define CAN_7_CS3            CAN_7.MB[3].CS.R             /* Message Buffer 3 CS Register */
#define CAN_7_ID3            CAN_7.MB[3].ID.R             /* Message Buffer 3 ID Register */
#define CAN_7_B3             CAN_7.MB[3].DATA.B           /* Message Buffer 3 B Register */
#define CAN_7_H3             CAN_7.MB[3].DATA.H           /* Message Buffer 3 H Register */
#define CAN_7_W3             CAN_7.MB[3].DATA.W           /* Message Buffer 3 W Register */
#define CAN_7_CS4            CAN_7.MB[4].CS.R             /* Message Buffer 4 CS Register */
#define CAN_7_ID4            CAN_7.MB[4].ID.R             /* Message Buffer 4 ID Register */
#define CAN_7_B4             CAN_7.MB[4].DATA.B           /* Message Buffer 4 B Register */
#define CAN_7_H4             CAN_7.MB[4].DATA.H           /* Message Buffer 4 H Register */
#define CAN_7_W4             CAN_7.MB[4].DATA.W           /* Message Buffer 4 W Register */
#define CAN_7_CS5            CAN_7.MB[5].CS.R             /* Message Buffer 5 CS Register */
#define CAN_7_ID5            CAN_7.MB[5].ID.R             /* Message Buffer 5 ID Register */
#define CAN_7_B5             CAN_7.MB[5].DATA.B           /* Message Buffer 5 B Register */
#define CAN_7_H5             CAN_7.MB[5].DATA.H           /* Message Buffer 5 H Register */
#define CAN_7_W5             CAN_7.MB[5].DATA.W           /* Message Buffer 5 W Register */
#define CAN_7_CS6            CAN_7.MB[6].CS.R             /* Message Buffer 6 CS Register */
#define CAN_7_ID6            CAN_7.MB[6].ID.R             /* Message Buffer 6 ID Register */
#define CAN_7_B6             CAN_7.MB[6].DATA.B           /* Message Buffer 6 B Register */
#define CAN_7_H6             CAN_7.MB[6].DATA.H           /* Message Buffer 6 H Register */
#define CAN_7_W6             CAN_7.MB[6].DATA.W           /* Message Buffer 6 W Register */
#define CAN_7_CS7            CAN_7.MB[7].CS.R             /* Message Buffer 7 CS Register */
#define CAN_7_ID7            CAN_7.MB[7].ID.R             /* Message Buffer 7 ID Register */
#define CAN_7_B7             CAN_7.MB[7].DATA.B           /* Message Buffer 7 B Register */
#define CAN_7_H7             CAN_7.MB[7].DATA.H           /* Message Buffer 7 H Register */
#define CAN_7_W7             CAN_7.MB[7].DATA.W           /* Message Buffer 7 W Register */
#define CAN_7_CS8            CAN_7.MB[8].CS.R             /* Message Buffer 8 CS Register */
#define CAN_7_ID8            CAN_7.MB[8].ID.R             /* Message Buffer 8 ID Register */
#define CAN_7_B8             CAN_7.MB[8].DATA.B           /* Message Buffer 8 B Register */
#define CAN_7_H8             CAN_7.MB[8].DATA.H           /* Message Buffer 8 H Register */
#define CAN_7_W8             CAN_7.MB[8].DATA.W           /* Message Buffer 8 W Register */
#define CAN_7_CS9            CAN_7.MB[9].CS.R             /* Message Buffer 9 CS Register */
#define CAN_7_ID9            CAN_7.MB[9].ID.R             /* Message Buffer 9 ID Register */
#define CAN_7_B9             CAN_7.MB[9].DATA.B           /* Message Buffer 9 B Register */
#define CAN_7_H9             CAN_7.MB[9].DATA.H           /* Message Buffer 9 H Register */
#define CAN_7_W9             CAN_7.MB[9].DATA.W           /* Message Buffer 9 W Register */
#define CAN_7_CS10           CAN_7.MB[10].CS.R             /* Message Buffer 10 CS Register */
#define CAN_7_ID10           CAN_7.MB[10].ID.R             /* Message Buffer 10 ID Register */
#define CAN_7_B10            CAN_7.MB[10].DATA.B           /* Message Buffer 10 B Register */
#define CAN_7_H10            CAN_7.MB[10].DATA.H           /* Message Buffer 10 H Register */
#define CAN_7_W10            CAN_7.MB[10].DATA.W           /* Message Buffer 10 W Register */
#define CAN_7_CS11           CAN_7.MB[11].CS.R             /* Message Buffer 11 CS Register */
#define CAN_7_ID11           CAN_7.MB[11].ID.R             /* Message Buffer 11 ID Register */
#define CAN_7_B11            CAN_7.MB[11].DATA.B           /* Message Buffer 11 B Register */
#define CAN_7_H11            CAN_7.MB[11].DATA.H           /* Message Buffer 11 H Register */
#define CAN_7_W11            CAN_7.MB[11].DATA.W           /* Message Buffer 11 W Register */
#define CAN_7_CS12           CAN_7.MB[12].CS.R             /* Message Buffer 12 CS Register */
#define CAN_7_ID12           CAN_7.MB[12].ID.R             /* Message Buffer 12 ID Register */
#define CAN_7_B12            CAN_7.MB[12].DATA.B           /* Message Buffer 12 B Register */
#define CAN_7_H12            CAN_7.MB[12].DATA.H           /* Message Buffer 12 H Register */
#define CAN_7_W12            CAN_7.MB[12].DATA.W           /* Message Buffer 12 W Register */
#define CAN_7_CS13           CAN_7.MB[13].CS.R             /* Message Buffer 13 CS Register */
#define CAN_7_ID13           CAN_7.MB[13].ID.R             /* Message Buffer 13 ID Register */
#define CAN_7_B13            CAN_7.MB[13].DATA.B           /* Message Buffer 13 B Register */
#define CAN_7_H13            CAN_7.MB[13].DATA.H           /* Message Buffer 13 H Register */
#define CAN_7_W13            CAN_7.MB[13].DATA.W           /* Message Buffer 13 W Register */
#define CAN_7_CS14           CAN_7.MB[14].CS.R             /* Message Buffer 14 CS Register */
#define CAN_7_ID14           CAN_7.MB[14].ID.R             /* Message Buffer 14 ID Register */
#define CAN_7_B14            CAN_7.MB[14].DATA.B           /* Message Buffer 14 B Register */
#define CAN_7_H14            CAN_7.MB[14].DATA.H           /* Message Buffer 14 H Register */
#define CAN_7_W14            CAN_7.MB[14].DATA.W           /* Message Buffer 14 W Register */
#define CAN_7_CS15           CAN_7.MB[15].CS.R             /* Message Buffer 15 CS Register */
#define CAN_7_ID15           CAN_7.MB[15].ID.R             /* Message Buffer 15 ID Register */
#define CAN_7_B15            CAN_7.MB[15].DATA.B           /* Message Buffer 15 B Register */
#define CAN_7_H15            CAN_7.MB[15].DATA.H           /* Message Buffer 15 H Register */
#define CAN_7_W15            CAN_7.MB[15].DATA.W           /* Message Buffer 15 W Register */
#define CAN_7_CS16           CAN_7.MB[16].CS.R             /* Message Buffer 16 CS Register */
#define CAN_7_ID16           CAN_7.MB[16].ID.R             /* Message Buffer 16 ID Register */
#define CAN_7_B16            CAN_7.MB[16].DATA.B           /* Message Buffer 16 B Register */
#define CAN_7_H16            CAN_7.MB[16].DATA.H           /* Message Buffer 16 H Register */
#define CAN_7_W16            CAN_7.MB[16].DATA.W           /* Message Buffer 16 W Register */
#define CAN_7_CS17           CAN_7.MB[17].CS.R             /* Message Buffer 17 CS Register */
#define CAN_7_ID17           CAN_7.MB[17].ID.R             /* Message Buffer 17 ID Register */
#define CAN_7_B17            CAN_7.MB[17].DATA.B           /* Message Buffer 17 B Register */
#define CAN_7_H17            CAN_7.MB[17].DATA.H           /* Message Buffer 17 H Register */
#define CAN_7_W17            CAN_7.MB[17].DATA.W           /* Message Buffer 17 W Register */
#define CAN_7_CS18           CAN_7.MB[18].CS.R             /* Message Buffer 18 CS Register */
#define CAN_7_ID18           CAN_7.MB[18].ID.R             /* Message Buffer 18 ID Register */
#define CAN_7_B18            CAN_7.MB[18].DATA.B           /* Message Buffer 18 B Register */
#define CAN_7_H18            CAN_7.MB[18].DATA.H           /* Message Buffer 18 H Register */
#define CAN_7_W18            CAN_7.MB[18].DATA.W           /* Message Buffer 18 W Register */
#define CAN_7_CS19           CAN_7.MB[19].CS.R             /* Message Buffer 19 CS Register */
#define CAN_7_ID19           CAN_7.MB[19].ID.R             /* Message Buffer 19 ID Register */
#define CAN_7_B19            CAN_7.MB[19].DATA.B           /* Message Buffer 19 B Register */
#define CAN_7_H19            CAN_7.MB[19].DATA.H           /* Message Buffer 19 H Register */
#define CAN_7_W19            CAN_7.MB[19].DATA.W           /* Message Buffer 19 W Register */
#define CAN_7_CS20           CAN_7.MB[20].CS.R             /* Message Buffer 20 CS Register */
#define CAN_7_ID20           CAN_7.MB[20].ID.R             /* Message Buffer 20 ID Register */
#define CAN_7_B20            CAN_7.MB[20].DATA.B           /* Message Buffer 20 B Register */
#define CAN_7_H20            CAN_7.MB[20].DATA.H           /* Message Buffer 20 H Register */
#define CAN_7_W20            CAN_7.MB[20].DATA.W           /* Message Buffer 20 W Register */
#define CAN_7_CS21           CAN_7.MB[21].CS.R             /* Message Buffer 21 CS Register */
#define CAN_7_ID21           CAN_7.MB[21].ID.R             /* Message Buffer 21 ID Register */
#define CAN_7_B21            CAN_7.MB[21].DATA.B           /* Message Buffer 21 B Register */
#define CAN_7_H21            CAN_7.MB[21].DATA.H           /* Message Buffer 21 H Register */
#define CAN_7_W21            CAN_7.MB[21].DATA.W           /* Message Buffer 21 W Register */
#define CAN_7_CS22           CAN_7.MB[22].CS.R             /* Message Buffer 22 CS Register */
#define CAN_7_ID22           CAN_7.MB[22].ID.R             /* Message Buffer 22 ID Register */
#define CAN_7_B22            CAN_7.MB[22].DATA.B           /* Message Buffer 22 B Register */
#define CAN_7_H22            CAN_7.MB[22].DATA.H           /* Message Buffer 22 H Register */
#define CAN_7_W22            CAN_7.MB[22].DATA.W           /* Message Buffer 22 W Register */
#define CAN_7_CS23           CAN_7.MB[23].CS.R             /* Message Buffer 23 CS Register */
#define CAN_7_ID23           CAN_7.MB[23].ID.R             /* Message Buffer 23 ID Register */
#define CAN_7_B23            CAN_7.MB[23].DATA.B           /* Message Buffer 23 B Register */
#define CAN_7_H23            CAN_7.MB[23].DATA.H           /* Message Buffer 23 H Register */
#define CAN_7_W23            CAN_7.MB[23].DATA.W           /* Message Buffer 23 W Register */
#define CAN_7_CS24           CAN_7.MB[24].CS.R             /* Message Buffer 24 CS Register */
#define CAN_7_ID24           CAN_7.MB[24].ID.R             /* Message Buffer 24 ID Register */
#define CAN_7_B24            CAN_7.MB[24].DATA.B           /* Message Buffer 24 B Register */
#define CAN_7_H24            CAN_7.MB[24].DATA.H           /* Message Buffer 24 H Register */
#define CAN_7_W24            CAN_7.MB[24].DATA.W           /* Message Buffer 24 W Register */
#define CAN_7_CS25           CAN_7.MB[25].CS.R             /* Message Buffer 25 CS Register */
#define CAN_7_ID25           CAN_7.MB[25].ID.R             /* Message Buffer 25 ID Register */
#define CAN_7_B25            CAN_7.MB[25].DATA.B           /* Message Buffer 25 B Register */
#define CAN_7_H25            CAN_7.MB[25].DATA.H           /* Message Buffer 25 H Register */
#define CAN_7_W25            CAN_7.MB[25].DATA.W           /* Message Buffer 25 W Register */
#define CAN_7_CS26           CAN_7.MB[26].CS.R             /* Message Buffer 26 CS Register */
#define CAN_7_ID26           CAN_7.MB[26].ID.R             /* Message Buffer 26 ID Register */
#define CAN_7_B26            CAN_7.MB[26].DATA.B           /* Message Buffer 26 B Register */
#define CAN_7_H26            CAN_7.MB[26].DATA.H           /* Message Buffer 26 H Register */
#define CAN_7_W26            CAN_7.MB[26].DATA.W           /* Message Buffer 26 W Register */
#define CAN_7_CS27           CAN_7.MB[27].CS.R             /* Message Buffer 27 CS Register */
#define CAN_7_ID27           CAN_7.MB[27].ID.R             /* Message Buffer 27 ID Register */
#define CAN_7_B27            CAN_7.MB[27].DATA.B           /* Message Buffer 27 B Register */
#define CAN_7_H27            CAN_7.MB[27].DATA.H           /* Message Buffer 27 H Register */
#define CAN_7_W27            CAN_7.MB[27].DATA.W           /* Message Buffer 27 W Register */
#define CAN_7_CS28           CAN_7.MB[28].CS.R             /* Message Buffer 28 CS Register */
#define CAN_7_ID28           CAN_7.MB[28].ID.R             /* Message Buffer 28 ID Register */
#define CAN_7_B28            CAN_7.MB[28].DATA.B           /* Message Buffer 28 B Register */
#define CAN_7_H28            CAN_7.MB[28].DATA.H           /* Message Buffer 28 H Register */
#define CAN_7_W28            CAN_7.MB[28].DATA.W           /* Message Buffer 28 W Register */
#define CAN_7_CS29           CAN_7.MB[29].CS.R             /* Message Buffer 29 CS Register */
#define CAN_7_ID29           CAN_7.MB[29].ID.R             /* Message Buffer 29 ID Register */
#define CAN_7_B29            CAN_7.MB[29].DATA.B           /* Message Buffer 29 B Register */
#define CAN_7_H29            CAN_7.MB[29].DATA.H           /* Message Buffer 29 H Register */
#define CAN_7_W29            CAN_7.MB[29].DATA.W           /* Message Buffer 29 W Register */
#define CAN_7_CS30           CAN_7.MB[30].CS.R             /* Message Buffer 30 CS Register */
#define CAN_7_ID30           CAN_7.MB[30].ID.R             /* Message Buffer 30 ID Register */
#define CAN_7_B30            CAN_7.MB[30].DATA.B           /* Message Buffer 30 B Register */
#define CAN_7_H30            CAN_7.MB[30].DATA.H           /* Message Buffer 30 H Register */
#define CAN_7_W30            CAN_7.MB[30].DATA.W           /* Message Buffer 30 W Register */
#define CAN_7_CS31           CAN_7.MB[31].CS.R             /* Message Buffer 31 CS Register */
#define CAN_7_ID31           CAN_7.MB[31].ID.R             /* Message Buffer 31 ID Register */
#define CAN_7_B31            CAN_7.MB[31].DATA.B           /* Message Buffer 31 B Register */
#define CAN_7_H31            CAN_7.MB[31].DATA.H           /* Message Buffer 31 H Register */
#define CAN_7_W31            CAN_7.MB[31].DATA.W           /* Message Buffer 31 W Register */
#define CAN_7_CS32           CAN_7.MB[32].CS.R             /* Message Buffer 32 CS Register */
#define CAN_7_ID32           CAN_7.MB[32].ID.R             /* Message Buffer 32 ID Register */
#define CAN_7_B32            CAN_7.MB[32].DATA.B           /* Message Buffer 32 B Register */
#define CAN_7_H32            CAN_7.MB[32].DATA.H           /* Message Buffer 32 H Register */
#define CAN_7_W32            CAN_7.MB[32].DATA.W           /* Message Buffer 32 W Register */
#define CAN_7_CS33           CAN_7.MB[33].CS.R             /* Message Buffer 33 CS Register */
#define CAN_7_ID33           CAN_7.MB[33].ID.R             /* Message Buffer 33 ID Register */
#define CAN_7_B33            CAN_7.MB[33].DATA.B           /* Message Buffer 33 B Register */
#define CAN_7_H33            CAN_7.MB[33].DATA.H           /* Message Buffer 33 H Register */
#define CAN_7_W33            CAN_7.MB[33].DATA.W           /* Message Buffer 33 W Register */
#define CAN_7_CS34           CAN_7.MB[34].CS.R             /* Message Buffer 34 CS Register */
#define CAN_7_ID34           CAN_7.MB[34].ID.R             /* Message Buffer 34 ID Register */
#define CAN_7_B34            CAN_7.MB[34].DATA.B           /* Message Buffer 34 B Register */
#define CAN_7_H34            CAN_7.MB[34].DATA.H           /* Message Buffer 34 H Register */
#define CAN_7_W34            CAN_7.MB[34].DATA.W           /* Message Buffer 34 W Register */
#define CAN_7_CS35           CAN_7.MB[35].CS.R             /* Message Buffer 35 CS Register */
#define CAN_7_ID35           CAN_7.MB[35].ID.R             /* Message Buffer 35 ID Register */
#define CAN_7_B35            CAN_7.MB[35].DATA.B           /* Message Buffer 35 B Register */
#define CAN_7_H35            CAN_7.MB[35].DATA.H           /* Message Buffer 35 H Register */
#define CAN_7_W35            CAN_7.MB[35].DATA.W           /* Message Buffer 35 W Register */
#define CAN_7_CS36           CAN_7.MB[36].CS.R             /* Message Buffer 36 CS Register */
#define CAN_7_ID36           CAN_7.MB[36].ID.R             /* Message Buffer 36 ID Register */
#define CAN_7_B36            CAN_7.MB[36].DATA.B           /* Message Buffer 36 B Register */
#define CAN_7_H36            CAN_7.MB[36].DATA.H           /* Message Buffer 36 H Register */
#define CAN_7_W36            CAN_7.MB[36].DATA.W           /* Message Buffer 36 W Register */
#define CAN_7_CS37           CAN_7.MB[37].CS.R             /* Message Buffer 37 CS Register */
#define CAN_7_ID37           CAN_7.MB[37].ID.R             /* Message Buffer 37 ID Register */
#define CAN_7_B37            CAN_7.MB[37].DATA.B           /* Message Buffer 37 B Register */
#define CAN_7_H37            CAN_7.MB[37].DATA.H           /* Message Buffer 37 H Register */
#define CAN_7_W37            CAN_7.MB[37].DATA.W           /* Message Buffer 37 W Register */
#define CAN_7_CS38           CAN_7.MB[38].CS.R             /* Message Buffer 38 CS Register */
#define CAN_7_ID38           CAN_7.MB[38].ID.R             /* Message Buffer 38 ID Register */
#define CAN_7_B38            CAN_7.MB[38].DATA.B           /* Message Buffer 38 B Register */
#define CAN_7_H38            CAN_7.MB[38].DATA.H           /* Message Buffer 38 H Register */
#define CAN_7_W38            CAN_7.MB[38].DATA.W           /* Message Buffer 38 W Register */
#define CAN_7_CS39           CAN_7.MB[39].CS.R             /* Message Buffer 39 CS Register */
#define CAN_7_ID39           CAN_7.MB[39].ID.R             /* Message Buffer 39 ID Register */
#define CAN_7_B39            CAN_7.MB[39].DATA.B           /* Message Buffer 39 B Register */
#define CAN_7_H39            CAN_7.MB[39].DATA.H           /* Message Buffer 39 H Register */
#define CAN_7_W39            CAN_7.MB[39].DATA.W           /* Message Buffer 39 W Register */
#define CAN_7_CS40           CAN_7.MB[40].CS.R             /* Message Buffer 40 CS Register */
#define CAN_7_ID40           CAN_7.MB[40].ID.R             /* Message Buffer 40 ID Register */
#define CAN_7_B40            CAN_7.MB[40].DATA.B           /* Message Buffer 40 B Register */
#define CAN_7_H40            CAN_7.MB[40].DATA.H           /* Message Buffer 40 H Register */
#define CAN_7_W40            CAN_7.MB[40].DATA.W           /* Message Buffer 40 W Register */
#define CAN_7_CS41           CAN_7.MB[41].CS.R             /* Message Buffer 41 CS Register */
#define CAN_7_ID41           CAN_7.MB[41].ID.R             /* Message Buffer 41 ID Register */
#define CAN_7_B41            CAN_7.MB[41].DATA.B           /* Message Buffer 41 B Register */
#define CAN_7_H41            CAN_7.MB[41].DATA.H           /* Message Buffer 41 H Register */
#define CAN_7_W41            CAN_7.MB[41].DATA.W           /* Message Buffer 41 W Register */
#define CAN_7_CS42           CAN_7.MB[42].CS.R             /* Message Buffer 42 CS Register */
#define CAN_7_ID42           CAN_7.MB[42].ID.R             /* Message Buffer 42 ID Register */
#define CAN_7_B42            CAN_7.MB[42].DATA.B           /* Message Buffer 42 B Register */
#define CAN_7_H42            CAN_7.MB[42].DATA.H           /* Message Buffer 42 H Register */
#define CAN_7_W42            CAN_7.MB[42].DATA.W           /* Message Buffer 42 W Register */
#define CAN_7_CS43           CAN_7.MB[43].CS.R             /* Message Buffer 43 CS Register */
#define CAN_7_ID43           CAN_7.MB[43].ID.R             /* Message Buffer 43 ID Register */
#define CAN_7_B43            CAN_7.MB[43].DATA.B           /* Message Buffer 43 B Register */
#define CAN_7_H43            CAN_7.MB[43].DATA.H           /* Message Buffer 43 H Register */
#define CAN_7_W43            CAN_7.MB[43].DATA.W           /* Message Buffer 43 W Register */
#define CAN_7_CS44           CAN_7.MB[44].CS.R             /* Message Buffer 44 CS Register */
#define CAN_7_ID44           CAN_7.MB[44].ID.R             /* Message Buffer 44 ID Register */
#define CAN_7_B44            CAN_7.MB[44].DATA.B           /* Message Buffer 44 B Register */
#define CAN_7_H44            CAN_7.MB[44].DATA.H           /* Message Buffer 44 H Register */
#define CAN_7_W44            CAN_7.MB[44].DATA.W           /* Message Buffer 44 W Register */
#define CAN_7_CS45           CAN_7.MB[45].CS.R             /* Message Buffer 45 CS Register */
#define CAN_7_ID45           CAN_7.MB[45].ID.R             /* Message Buffer 45 ID Register */
#define CAN_7_B45            CAN_7.MB[45].DATA.B           /* Message Buffer 45 B Register */
#define CAN_7_H45            CAN_7.MB[45].DATA.H           /* Message Buffer 45 H Register */
#define CAN_7_W45            CAN_7.MB[45].DATA.W           /* Message Buffer 45 W Register */
#define CAN_7_CS46           CAN_7.MB[46].CS.R             /* Message Buffer 46 CS Register */
#define CAN_7_ID46           CAN_7.MB[46].ID.R             /* Message Buffer 46 ID Register */
#define CAN_7_B46            CAN_7.MB[46].DATA.B           /* Message Buffer 46 B Register */
#define CAN_7_H46            CAN_7.MB[46].DATA.H           /* Message Buffer 46 H Register */
#define CAN_7_W46            CAN_7.MB[46].DATA.W           /* Message Buffer 46 W Register */
#define CAN_7_CS47           CAN_7.MB[47].CS.R             /* Message Buffer 47 CS Register */
#define CAN_7_ID47           CAN_7.MB[47].ID.R             /* Message Buffer 47 ID Register */
#define CAN_7_B47            CAN_7.MB[47].DATA.B           /* Message Buffer 47 B Register */
#define CAN_7_H47            CAN_7.MB[47].DATA.H           /* Message Buffer 47 H Register */
#define CAN_7_W47            CAN_7.MB[47].DATA.W           /* Message Buffer 47 W Register */
#define CAN_7_CS48           CAN_7.MB[48].CS.R             /* Message Buffer 48 CS Register */
#define CAN_7_ID48           CAN_7.MB[48].ID.R             /* Message Buffer 48 ID Register */
#define CAN_7_B48            CAN_7.MB[48].DATA.B           /* Message Buffer 48 B Register */
#define CAN_7_H48            CAN_7.MB[48].DATA.H           /* Message Buffer 48 H Register */
#define CAN_7_W48            CAN_7.MB[48].DATA.W           /* Message Buffer 48 W Register */
#define CAN_7_CS49           CAN_7.MB[49].CS.R             /* Message Buffer 49 CS Register */
#define CAN_7_ID49           CAN_7.MB[49].ID.R             /* Message Buffer 49 ID Register */
#define CAN_7_B49            CAN_7.MB[49].DATA.B           /* Message Buffer 49 B Register */
#define CAN_7_H49            CAN_7.MB[49].DATA.H           /* Message Buffer 49 H Register */
#define CAN_7_W49            CAN_7.MB[49].DATA.W           /* Message Buffer 49 W Register */
#define CAN_7_CS50           CAN_7.MB[50].CS.R             /* Message Buffer 50 CS Register */
#define CAN_7_ID50           CAN_7.MB[50].ID.R             /* Message Buffer 50 ID Register */
#define CAN_7_B50            CAN_7.MB[50].DATA.B           /* Message Buffer 50 B Register */
#define CAN_7_H50            CAN_7.MB[50].DATA.H           /* Message Buffer 50 H Register */
#define CAN_7_W50            CAN_7.MB[50].DATA.W           /* Message Buffer 50 W Register */
#define CAN_7_CS51           CAN_7.MB[51].CS.R             /* Message Buffer 51 CS Register */
#define CAN_7_ID51           CAN_7.MB[51].ID.R             /* Message Buffer 51 ID Register */
#define CAN_7_B51            CAN_7.MB[51].DATA.B           /* Message Buffer 51 B Register */
#define CAN_7_H51            CAN_7.MB[51].DATA.H           /* Message Buffer 51 H Register */
#define CAN_7_W51            CAN_7.MB[51].DATA.W           /* Message Buffer 51 W Register */
#define CAN_7_CS52           CAN_7.MB[52].CS.R             /* Message Buffer 52 CS Register */
#define CAN_7_ID52           CAN_7.MB[52].ID.R             /* Message Buffer 52 ID Register */
#define CAN_7_B52            CAN_7.MB[52].DATA.B           /* Message Buffer 52 B Register */
#define CAN_7_H52            CAN_7.MB[52].DATA.H           /* Message Buffer 52 H Register */
#define CAN_7_W52            CAN_7.MB[52].DATA.W           /* Message Buffer 52 W Register */
#define CAN_7_CS53           CAN_7.MB[53].CS.R             /* Message Buffer 53 CS Register */
#define CAN_7_ID53           CAN_7.MB[53].ID.R             /* Message Buffer 53 ID Register */
#define CAN_7_B53            CAN_7.MB[53].DATA.B           /* Message Buffer 53 B Register */
#define CAN_7_H53            CAN_7.MB[53].DATA.H           /* Message Buffer 53 H Register */
#define CAN_7_W53            CAN_7.MB[53].DATA.W           /* Message Buffer 53 W Register */
#define CAN_7_CS54           CAN_7.MB[54].CS.R             /* Message Buffer 54 CS Register */
#define CAN_7_ID54           CAN_7.MB[54].ID.R             /* Message Buffer 54 ID Register */
#define CAN_7_B54            CAN_7.MB[54].DATA.B           /* Message Buffer 54 B Register */
#define CAN_7_H54            CAN_7.MB[54].DATA.H           /* Message Buffer 54 H Register */
#define CAN_7_W54            CAN_7.MB[54].DATA.W           /* Message Buffer 54 W Register */
#define CAN_7_CS55           CAN_7.MB[55].CS.R             /* Message Buffer 55 CS Register */
#define CAN_7_ID55           CAN_7.MB[55].ID.R             /* Message Buffer 55 ID Register */
#define CAN_7_B55            CAN_7.MB[55].DATA.B           /* Message Buffer 55 B Register */
#define CAN_7_H55            CAN_7.MB[55].DATA.H           /* Message Buffer 55 H Register */
#define CAN_7_W55            CAN_7.MB[55].DATA.W           /* Message Buffer 55 W Register */
#define CAN_7_CS56           CAN_7.MB[56].CS.R             /* Message Buffer 56 CS Register */
#define CAN_7_ID56           CAN_7.MB[56].ID.R             /* Message Buffer 56 ID Register */
#define CAN_7_B56            CAN_7.MB[56].DATA.B           /* Message Buffer 56 B Register */
#define CAN_7_H56            CAN_7.MB[56].DATA.H           /* Message Buffer 56 H Register */
#define CAN_7_W56            CAN_7.MB[56].DATA.W           /* Message Buffer 56 W Register */
#define CAN_7_CS57           CAN_7.MB[57].CS.R             /* Message Buffer 57 CS Register */
#define CAN_7_ID57           CAN_7.MB[57].ID.R             /* Message Buffer 57 ID Register */
#define CAN_7_B57            CAN_7.MB[57].DATA.B           /* Message Buffer 57 B Register */
#define CAN_7_H57            CAN_7.MB[57].DATA.H           /* Message Buffer 57 H Register */
#define CAN_7_W57            CAN_7.MB[57].DATA.W           /* Message Buffer 57 W Register */
#define CAN_7_CS58           CAN_7.MB[58].CS.R             /* Message Buffer 58 CS Register */
#define CAN_7_ID58           CAN_7.MB[58].ID.R             /* Message Buffer 58 ID Register */
#define CAN_7_B58            CAN_7.MB[58].DATA.B           /* Message Buffer 58 B Register */
#define CAN_7_H58            CAN_7.MB[58].DATA.H           /* Message Buffer 58 H Register */
#define CAN_7_W58            CAN_7.MB[58].DATA.W           /* Message Buffer 58 W Register */
#define CAN_7_CS59           CAN_7.MB[59].CS.R             /* Message Buffer 59 CS Register */
#define CAN_7_ID59           CAN_7.MB[59].ID.R             /* Message Buffer 59 ID Register */
#define CAN_7_B59            CAN_7.MB[59].DATA.B           /* Message Buffer 59 B Register */
#define CAN_7_H59            CAN_7.MB[59].DATA.H           /* Message Buffer 59 H Register */
#define CAN_7_W59            CAN_7.MB[59].DATA.W           /* Message Buffer 59 W Register */
#define CAN_7_CS60           CAN_7.MB[60].CS.R             /* Message Buffer 60 CS Register */
#define CAN_7_ID60           CAN_7.MB[60].ID.R             /* Message Buffer 60 ID Register */
#define CAN_7_B60            CAN_7.MB[60].DATA.B           /* Message Buffer 60 B Register */
#define CAN_7_H60            CAN_7.MB[60].DATA.H           /* Message Buffer 60 H Register */
#define CAN_7_W60            CAN_7.MB[60].DATA.W           /* Message Buffer 60 W Register */
#define CAN_7_CS61           CAN_7.MB[61].CS.R             /* Message Buffer 61 CS Register */
#define CAN_7_ID61           CAN_7.MB[61].ID.R             /* Message Buffer 61 ID Register */
#define CAN_7_B61            CAN_7.MB[61].DATA.B           /* Message Buffer 61 B Register */
#define CAN_7_H61            CAN_7.MB[61].DATA.H           /* Message Buffer 61 H Register */
#define CAN_7_W61            CAN_7.MB[61].DATA.W           /* Message Buffer 61 W Register */
#define CAN_7_CS62           CAN_7.MB[62].CS.R             /* Message Buffer 62 CS Register */
#define CAN_7_ID62           CAN_7.MB[62].ID.R             /* Message Buffer 62 ID Register */
#define CAN_7_B62            CAN_7.MB[62].DATA.B           /* Message Buffer 62 B Register */
#define CAN_7_H62            CAN_7.MB[62].DATA.H           /* Message Buffer 62 H Register */
#define CAN_7_W62            CAN_7.MB[62].DATA.W           /* Message Buffer 62 W Register */
#define CAN_7_CS63           CAN_7.MB[63].CS.R             /* Message Buffer 63 CS Register */
#define CAN_7_ID63           CAN_7.MB[63].ID.R             /* Message Buffer 63 ID Register */
#define CAN_7_B63            CAN_7.MB[63].DATA.B           /* Message Buffer 63 B Register */
#define CAN_7_H63            CAN_7.MB[63].DATA.H           /* Message Buffer 63 H Register */
#define CAN_7_W63            CAN_7.MB[63].DATA.W           /* Message Buffer 63 W Register */
#define CAN_7_CS64           CAN_7.MB[64].CS.R             /* Message Buffer 64 CS Register */
#define CAN_7_ID64           CAN_7.MB[64].ID.R             /* Message Buffer 64 ID Register */
#define CAN_7_B64            CAN_7.MB[64].DATA.B           /* Message Buffer 64 B Register */
#define CAN_7_H64            CAN_7.MB[64].DATA.H           /* Message Buffer 64 H Register */
#define CAN_7_W64            CAN_7.MB[64].DATA.W           /* Message Buffer 64 W Register */
#define CAN_7_CS65           CAN_7.MB[65].CS.R             /* Message Buffer 65 CS Register */
#define CAN_7_ID65           CAN_7.MB[65].ID.R             /* Message Buffer 65 ID Register */
#define CAN_7_B65            CAN_7.MB[65].DATA.B           /* Message Buffer 65 B Register */
#define CAN_7_H65            CAN_7.MB[65].DATA.H           /* Message Buffer 65 H Register */
#define CAN_7_W65            CAN_7.MB[65].DATA.W           /* Message Buffer 65 W Register */
#define CAN_7_CS66           CAN_7.MB[66].CS.R             /* Message Buffer 66 CS Register */
#define CAN_7_ID66           CAN_7.MB[66].ID.R             /* Message Buffer 66 ID Register */
#define CAN_7_B66            CAN_7.MB[66].DATA.B           /* Message Buffer 66 B Register */
#define CAN_7_H66            CAN_7.MB[66].DATA.H           /* Message Buffer 66 H Register */
#define CAN_7_W66            CAN_7.MB[66].DATA.W           /* Message Buffer 66 W Register */
#define CAN_7_CS67           CAN_7.MB[67].CS.R             /* Message Buffer 67 CS Register */
#define CAN_7_ID67           CAN_7.MB[67].ID.R             /* Message Buffer 67 ID Register */
#define CAN_7_B67            CAN_7.MB[67].DATA.B           /* Message Buffer 67 B Register */
#define CAN_7_H67            CAN_7.MB[67].DATA.H           /* Message Buffer 67 H Register */
#define CAN_7_W67            CAN_7.MB[67].DATA.W           /* Message Buffer 67 W Register */
#define CAN_7_CS68           CAN_7.MB[68].CS.R             /* Message Buffer 68 CS Register */
#define CAN_7_ID68           CAN_7.MB[68].ID.R             /* Message Buffer 68 ID Register */
#define CAN_7_B68            CAN_7.MB[68].DATA.B           /* Message Buffer 68 B Register */
#define CAN_7_H68            CAN_7.MB[68].DATA.H           /* Message Buffer 68 H Register */
#define CAN_7_W68            CAN_7.MB[68].DATA.W           /* Message Buffer 68 W Register */
#define CAN_7_CS69           CAN_7.MB[69].CS.R             /* Message Buffer 69 CS Register */
#define CAN_7_ID69           CAN_7.MB[69].ID.R             /* Message Buffer 69 ID Register */
#define CAN_7_B69            CAN_7.MB[69].DATA.B           /* Message Buffer 69 B Register */
#define CAN_7_H69            CAN_7.MB[69].DATA.H           /* Message Buffer 69 H Register */
#define CAN_7_W69            CAN_7.MB[69].DATA.W           /* Message Buffer 69 W Register */
#define CAN_7_CS70           CAN_7.MB[70].CS.R             /* Message Buffer 70 CS Register */
#define CAN_7_ID70           CAN_7.MB[70].ID.R             /* Message Buffer 70 ID Register */
#define CAN_7_B70            CAN_7.MB[70].DATA.B           /* Message Buffer 70 B Register */
#define CAN_7_H70            CAN_7.MB[70].DATA.H           /* Message Buffer 70 H Register */
#define CAN_7_W70            CAN_7.MB[70].DATA.W           /* Message Buffer 70 W Register */
#define CAN_7_CS71           CAN_7.MB[71].CS.R             /* Message Buffer 71 CS Register */
#define CAN_7_ID71           CAN_7.MB[71].ID.R             /* Message Buffer 71 ID Register */
#define CAN_7_B71            CAN_7.MB[71].DATA.B           /* Message Buffer 71 B Register */
#define CAN_7_H71            CAN_7.MB[71].DATA.H           /* Message Buffer 71 H Register */
#define CAN_7_W71            CAN_7.MB[71].DATA.W           /* Message Buffer 71 W Register */
#define CAN_7_CS72           CAN_7.MB[72].CS.R             /* Message Buffer 72 CS Register */
#define CAN_7_ID72           CAN_7.MB[72].ID.R             /* Message Buffer 72 ID Register */
#define CAN_7_B72            CAN_7.MB[72].DATA.B           /* Message Buffer 72 B Register */
#define CAN_7_H72            CAN_7.MB[72].DATA.H           /* Message Buffer 72 H Register */
#define CAN_7_W72            CAN_7.MB[72].DATA.W           /* Message Buffer 72 W Register */
#define CAN_7_CS73           CAN_7.MB[73].CS.R             /* Message Buffer 73 CS Register */
#define CAN_7_ID73           CAN_7.MB[73].ID.R             /* Message Buffer 73 ID Register */
#define CAN_7_B73            CAN_7.MB[73].DATA.B           /* Message Buffer 73 B Register */
#define CAN_7_H73            CAN_7.MB[73].DATA.H           /* Message Buffer 73 H Register */
#define CAN_7_W73            CAN_7.MB[73].DATA.W           /* Message Buffer 73 W Register */
#define CAN_7_CS74           CAN_7.MB[74].CS.R             /* Message Buffer 74 CS Register */
#define CAN_7_ID74           CAN_7.MB[74].ID.R             /* Message Buffer 74 ID Register */
#define CAN_7_B74            CAN_7.MB[74].DATA.B           /* Message Buffer 74 B Register */
#define CAN_7_H74            CAN_7.MB[74].DATA.H           /* Message Buffer 74 H Register */
#define CAN_7_W74            CAN_7.MB[74].DATA.W           /* Message Buffer 74 W Register */
#define CAN_7_CS75           CAN_7.MB[75].CS.R             /* Message Buffer 75 CS Register */
#define CAN_7_ID75           CAN_7.MB[75].ID.R             /* Message Buffer 75 ID Register */
#define CAN_7_B75            CAN_7.MB[75].DATA.B           /* Message Buffer 75 B Register */
#define CAN_7_H75            CAN_7.MB[75].DATA.H           /* Message Buffer 75 H Register */
#define CAN_7_W75            CAN_7.MB[75].DATA.W           /* Message Buffer 75 W Register */
#define CAN_7_CS76           CAN_7.MB[76].CS.R             /* Message Buffer 76 CS Register */
#define CAN_7_ID76           CAN_7.MB[76].ID.R             /* Message Buffer 76 ID Register */
#define CAN_7_B76            CAN_7.MB[76].DATA.B           /* Message Buffer 76 B Register */
#define CAN_7_H76            CAN_7.MB[76].DATA.H           /* Message Buffer 76 H Register */
#define CAN_7_W76            CAN_7.MB[76].DATA.W           /* Message Buffer 76 W Register */
#define CAN_7_CS77           CAN_7.MB[77].CS.R             /* Message Buffer 77 CS Register */
#define CAN_7_ID77           CAN_7.MB[77].ID.R             /* Message Buffer 77 ID Register */
#define CAN_7_B77            CAN_7.MB[77].DATA.B           /* Message Buffer 77 B Register */
#define CAN_7_H77            CAN_7.MB[77].DATA.H           /* Message Buffer 77 H Register */
#define CAN_7_W77            CAN_7.MB[77].DATA.W           /* Message Buffer 77 W Register */
#define CAN_7_CS78           CAN_7.MB[78].CS.R             /* Message Buffer 78 CS Register */
#define CAN_7_ID78           CAN_7.MB[78].ID.R             /* Message Buffer 78 ID Register */
#define CAN_7_B78            CAN_7.MB[78].DATA.B           /* Message Buffer 78 B Register */
#define CAN_7_H78            CAN_7.MB[78].DATA.H           /* Message Buffer 78 H Register */
#define CAN_7_W78            CAN_7.MB[78].DATA.W           /* Message Buffer 78 W Register */
#define CAN_7_CS79           CAN_7.MB[79].CS.R             /* Message Buffer 79 CS Register */
#define CAN_7_ID79           CAN_7.MB[79].ID.R             /* Message Buffer 79 ID Register */
#define CAN_7_B79            CAN_7.MB[79].DATA.B           /* Message Buffer 79 B Register */
#define CAN_7_H79            CAN_7.MB[79].DATA.H           /* Message Buffer 79 H Register */
#define CAN_7_W79            CAN_7.MB[79].DATA.W           /* Message Buffer 79 W Register */
#define CAN_7_CS80           CAN_7.MB[80].CS.R             /* Message Buffer 80 CS Register */
#define CAN_7_ID80           CAN_7.MB[80].ID.R             /* Message Buffer 80 ID Register */
#define CAN_7_B80            CAN_7.MB[80].DATA.B           /* Message Buffer 80 B Register */
#define CAN_7_H80            CAN_7.MB[80].DATA.H           /* Message Buffer 80 H Register */
#define CAN_7_W80            CAN_7.MB[80].DATA.W           /* Message Buffer 80 W Register */
#define CAN_7_CS81           CAN_7.MB[81].CS.R             /* Message Buffer 81 CS Register */
#define CAN_7_ID81           CAN_7.MB[81].ID.R             /* Message Buffer 81 ID Register */
#define CAN_7_B81            CAN_7.MB[81].DATA.B           /* Message Buffer 81 B Register */
#define CAN_7_H81            CAN_7.MB[81].DATA.H           /* Message Buffer 81 H Register */
#define CAN_7_W81            CAN_7.MB[81].DATA.W           /* Message Buffer 81 W Register */
#define CAN_7_CS82           CAN_7.MB[82].CS.R             /* Message Buffer 82 CS Register */
#define CAN_7_ID82           CAN_7.MB[82].ID.R             /* Message Buffer 82 ID Register */
#define CAN_7_B82            CAN_7.MB[82].DATA.B           /* Message Buffer 82 B Register */
#define CAN_7_H82            CAN_7.MB[82].DATA.H           /* Message Buffer 82 H Register */
#define CAN_7_W82            CAN_7.MB[82].DATA.W           /* Message Buffer 82 W Register */
#define CAN_7_CS83           CAN_7.MB[83].CS.R             /* Message Buffer 83 CS Register */
#define CAN_7_ID83           CAN_7.MB[83].ID.R             /* Message Buffer 83 ID Register */
#define CAN_7_B83            CAN_7.MB[83].DATA.B           /* Message Buffer 83 B Register */
#define CAN_7_H83            CAN_7.MB[83].DATA.H           /* Message Buffer 83 H Register */
#define CAN_7_W83            CAN_7.MB[83].DATA.W           /* Message Buffer 83 W Register */
#define CAN_7_CS84           CAN_7.MB[84].CS.R             /* Message Buffer 84 CS Register */
#define CAN_7_ID84           CAN_7.MB[84].ID.R             /* Message Buffer 84 ID Register */
#define CAN_7_B84            CAN_7.MB[84].DATA.B           /* Message Buffer 84 B Register */
#define CAN_7_H84            CAN_7.MB[84].DATA.H           /* Message Buffer 84 H Register */
#define CAN_7_W84            CAN_7.MB[84].DATA.W           /* Message Buffer 84 W Register */
#define CAN_7_CS85           CAN_7.MB[85].CS.R             /* Message Buffer 85 CS Register */
#define CAN_7_ID85           CAN_7.MB[85].ID.R             /* Message Buffer 85 ID Register */
#define CAN_7_B85            CAN_7.MB[85].DATA.B           /* Message Buffer 85 B Register */
#define CAN_7_H85            CAN_7.MB[85].DATA.H           /* Message Buffer 85 H Register */
#define CAN_7_W85            CAN_7.MB[85].DATA.W           /* Message Buffer 85 W Register */
#define CAN_7_CS86           CAN_7.MB[86].CS.R             /* Message Buffer 86 CS Register */
#define CAN_7_ID86           CAN_7.MB[86].ID.R             /* Message Buffer 86 ID Register */
#define CAN_7_B86            CAN_7.MB[86].DATA.B           /* Message Buffer 86 B Register */
#define CAN_7_H86            CAN_7.MB[86].DATA.H           /* Message Buffer 86 H Register */
#define CAN_7_W86            CAN_7.MB[86].DATA.W           /* Message Buffer 86 W Register */
#define CAN_7_CS87           CAN_7.MB[87].CS.R             /* Message Buffer 87 CS Register */
#define CAN_7_ID87           CAN_7.MB[87].ID.R             /* Message Buffer 87 ID Register */
#define CAN_7_B87            CAN_7.MB[87].DATA.B           /* Message Buffer 87 B Register */
#define CAN_7_H87            CAN_7.MB[87].DATA.H           /* Message Buffer 87 H Register */
#define CAN_7_W87            CAN_7.MB[87].DATA.W           /* Message Buffer 87 W Register */
#define CAN_7_CS88           CAN_7.MB[88].CS.R             /* Message Buffer 88 CS Register */
#define CAN_7_ID88           CAN_7.MB[88].ID.R             /* Message Buffer 88 ID Register */
#define CAN_7_B88            CAN_7.MB[88].DATA.B           /* Message Buffer 88 B Register */
#define CAN_7_H88            CAN_7.MB[88].DATA.H           /* Message Buffer 88 H Register */
#define CAN_7_W88            CAN_7.MB[88].DATA.W           /* Message Buffer 88 W Register */
#define CAN_7_CS89           CAN_7.MB[89].CS.R             /* Message Buffer 89 CS Register */
#define CAN_7_ID89           CAN_7.MB[89].ID.R             /* Message Buffer 89 ID Register */
#define CAN_7_B89            CAN_7.MB[89].DATA.B           /* Message Buffer 89 B Register */
#define CAN_7_H89            CAN_7.MB[89].DATA.H           /* Message Buffer 89 H Register */
#define CAN_7_W89            CAN_7.MB[89].DATA.W           /* Message Buffer 89 W Register */
#define CAN_7_CS90           CAN_7.MB[90].CS.R             /* Message Buffer 90 CS Register */
#define CAN_7_ID90           CAN_7.MB[90].ID.R             /* Message Buffer 90 ID Register */
#define CAN_7_B90            CAN_7.MB[90].DATA.B           /* Message Buffer 90 B Register */
#define CAN_7_H90            CAN_7.MB[90].DATA.H           /* Message Buffer 90 H Register */
#define CAN_7_W90            CAN_7.MB[90].DATA.W           /* Message Buffer 90 W Register */
#define CAN_7_CS91           CAN_7.MB[91].CS.R             /* Message Buffer 91 CS Register */
#define CAN_7_ID91           CAN_7.MB[91].ID.R             /* Message Buffer 91 ID Register */
#define CAN_7_B91            CAN_7.MB[91].DATA.B           /* Message Buffer 91 B Register */
#define CAN_7_H91            CAN_7.MB[91].DATA.H           /* Message Buffer 91 H Register */
#define CAN_7_W91            CAN_7.MB[91].DATA.W           /* Message Buffer 91 W Register */
#define CAN_7_CS92           CAN_7.MB[92].CS.R             /* Message Buffer 92 CS Register */
#define CAN_7_ID92           CAN_7.MB[92].ID.R             /* Message Buffer 92 ID Register */
#define CAN_7_B92            CAN_7.MB[92].DATA.B           /* Message Buffer 92 B Register */
#define CAN_7_H92            CAN_7.MB[92].DATA.H           /* Message Buffer 92 H Register */
#define CAN_7_W92            CAN_7.MB[92].DATA.W           /* Message Buffer 92 W Register */
#define CAN_7_CS93           CAN_7.MB[93].CS.R             /* Message Buffer 93 CS Register */
#define CAN_7_ID93           CAN_7.MB[93].ID.R             /* Message Buffer 93 ID Register */
#define CAN_7_B93            CAN_7.MB[93].DATA.B           /* Message Buffer 93 B Register */
#define CAN_7_H93            CAN_7.MB[93].DATA.H           /* Message Buffer 93 H Register */
#define CAN_7_W93            CAN_7.MB[93].DATA.W           /* Message Buffer 93 W Register */
#define CAN_7_CS94           CAN_7.MB[94].CS.R             /* Message Buffer 94 CS Register */
#define CAN_7_ID94           CAN_7.MB[94].ID.R             /* Message Buffer 94 ID Register */
#define CAN_7_B94            CAN_7.MB[94].DATA.B           /* Message Buffer 94 B Register */
#define CAN_7_H94            CAN_7.MB[94].DATA.H           /* Message Buffer 94 H Register */
#define CAN_7_W94            CAN_7.MB[94].DATA.W           /* Message Buffer 94 W Register */
#define CAN_7_CS95           CAN_7.MB[95].CS.R             /* Message Buffer 95 CS Register */
#define CAN_7_ID95           CAN_7.MB[95].ID.R             /* Message Buffer 95 ID Register */
#define CAN_7_B95            CAN_7.MB[95].DATA.B           /* Message Buffer 95 B Register */
#define CAN_7_H95            CAN_7.MB[95].DATA.H           /* Message Buffer 95 H Register */
#define CAN_7_W95            CAN_7.MB[95].DATA.W           /* Message Buffer 95 W Register */
#define CAN_7_RXIMR0         CAN_7.RXIMR[0].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR1         CAN_7.RXIMR[1].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR2         CAN_7.RXIMR[2].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR3         CAN_7.RXIMR[3].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR4         CAN_7.RXIMR[4].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR5         CAN_7.RXIMR[5].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR6         CAN_7.RXIMR[6].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR7         CAN_7.RXIMR[7].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR8         CAN_7.RXIMR[8].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR9         CAN_7.RXIMR[9].R              /* Rx Individual Mask Registers */
#define CAN_7_RXIMR10        CAN_7.RXIMR[10].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR11        CAN_7.RXIMR[11].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR12        CAN_7.RXIMR[12].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR13        CAN_7.RXIMR[13].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR14        CAN_7.RXIMR[14].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR15        CAN_7.RXIMR[15].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR16        CAN_7.RXIMR[16].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR17        CAN_7.RXIMR[17].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR18        CAN_7.RXIMR[18].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR19        CAN_7.RXIMR[19].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR20        CAN_7.RXIMR[20].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR21        CAN_7.RXIMR[21].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR22        CAN_7.RXIMR[22].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR23        CAN_7.RXIMR[23].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR24        CAN_7.RXIMR[24].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR25        CAN_7.RXIMR[25].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR26        CAN_7.RXIMR[26].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR27        CAN_7.RXIMR[27].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR28        CAN_7.RXIMR[28].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR29        CAN_7.RXIMR[29].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR30        CAN_7.RXIMR[30].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR31        CAN_7.RXIMR[31].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR32        CAN_7.RXIMR[32].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR33        CAN_7.RXIMR[33].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR34        CAN_7.RXIMR[34].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR35        CAN_7.RXIMR[35].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR36        CAN_7.RXIMR[36].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR37        CAN_7.RXIMR[37].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR38        CAN_7.RXIMR[38].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR39        CAN_7.RXIMR[39].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR40        CAN_7.RXIMR[40].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR41        CAN_7.RXIMR[41].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR42        CAN_7.RXIMR[42].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR43        CAN_7.RXIMR[43].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR44        CAN_7.RXIMR[44].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR45        CAN_7.RXIMR[45].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR46        CAN_7.RXIMR[46].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR47        CAN_7.RXIMR[47].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR48        CAN_7.RXIMR[48].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR49        CAN_7.RXIMR[49].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR50        CAN_7.RXIMR[50].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR51        CAN_7.RXIMR[51].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR52        CAN_7.RXIMR[52].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR53        CAN_7.RXIMR[53].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR54        CAN_7.RXIMR[54].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR55        CAN_7.RXIMR[55].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR56        CAN_7.RXIMR[56].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR57        CAN_7.RXIMR[57].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR58        CAN_7.RXIMR[58].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR59        CAN_7.RXIMR[59].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR60        CAN_7.RXIMR[60].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR61        CAN_7.RXIMR[61].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR62        CAN_7.RXIMR[62].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR63        CAN_7.RXIMR[63].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR64        CAN_7.RXIMR[64].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR65        CAN_7.RXIMR[65].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR66        CAN_7.RXIMR[66].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR67        CAN_7.RXIMR[67].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR68        CAN_7.RXIMR[68].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR69        CAN_7.RXIMR[69].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR70        CAN_7.RXIMR[70].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR71        CAN_7.RXIMR[71].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR72        CAN_7.RXIMR[72].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR73        CAN_7.RXIMR[73].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR74        CAN_7.RXIMR[74].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR75        CAN_7.RXIMR[75].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR76        CAN_7.RXIMR[76].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR77        CAN_7.RXIMR[77].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR78        CAN_7.RXIMR[78].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR79        CAN_7.RXIMR[79].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR80        CAN_7.RXIMR[80].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR81        CAN_7.RXIMR[81].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR82        CAN_7.RXIMR[82].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR83        CAN_7.RXIMR[83].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR84        CAN_7.RXIMR[84].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR85        CAN_7.RXIMR[85].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR86        CAN_7.RXIMR[86].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR87        CAN_7.RXIMR[87].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR88        CAN_7.RXIMR[88].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR89        CAN_7.RXIMR[89].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR90        CAN_7.RXIMR[90].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR91        CAN_7.RXIMR[91].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR92        CAN_7.RXIMR[92].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR93        CAN_7.RXIMR[93].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR94        CAN_7.RXIMR[94].R             /* Rx Individual Mask Registers */
#define CAN_7_RXIMR95        CAN_7.RXIMR[95].R             /* Rx Individual Mask Registers */
#define CAN_7_FDCTRL         CAN_7.FDCTRL.R                /* CAN FD Control Register */
#define CAN_7_FDCBT          CAN_7.FDCBT.R                 /* CAN FD Bit Timing Register */
#define CAN_7_FDCRC          CAN_7.FDCRC.R                 /* CAN FD CRC Register */


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

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_DEFINES_2_H_ */
