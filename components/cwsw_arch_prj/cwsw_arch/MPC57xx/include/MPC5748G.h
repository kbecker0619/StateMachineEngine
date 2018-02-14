/**************************************************************************
 * FILE NAME: MPC5748G.h                     COPYRIGHT (c) Freescale 2014 *
 * REVISION:  4.0.00                                  All Rights Reserved *
 *                                                                        *
 * DESCRIPTION:                                                           *
 * This file contains all of the register and bit field definitions for   *
 * the MPC5748G.                                                          *
 *========================================================================*
 * UPDATE HISTORY                                                         *
 * REV      AUTHOR      DATE       DESCRIPTION OF CHANGE                  *
 * ---   -----------  ---------    ---------------------                  *
 * 0.1.0      P.A.      24-SEP-12     -First release.                     *
 *                                                                        *
 * 0.1.1      P.A.      25-SEP-12     -TCD registers were set in the same *
 *                                    way than other MCUs as McKinley and *
 *                                    Panther.                            *
 *                                    -USB modules were added.            *
 *                                                                        *
 * 0.2.0      M.D.      06-MAY-13     -First release with new generation  *
 *                                    method.                             *
 *                                    -Does not include BCTU & EMIOS      *
 *                                                                        *
 * 0.3.0      M.D.      14-MAY-13     -Corrected size of CAN message      *
 *                                    buffer. Added eMIOS module.         *
 *                                                                        *
 * 0.3.1      M.D.      15-MAY-13     -Added BCTU, eMIOS200 modules       *
 *                                                                        *
 * 1.0.0      M.D.      16-MAY-13     -Expanded registers for bit access  *
 *                                     In BCTU: SFTRGR1, SFTRGR2, SFTRGR3 *
 *                                     In FCCU: NCF_CFG, NCFS_CFG, NCF_S, *
 *                                     NCF_E, NCF_TOE, IRQ_ALARM_EN,      *
 *                                     NMI_EN, and EOUT_SIG_EN            *
 *                                    -Updated MC_RGM module              *
 *                                                                        *
 * 1.0.1      M.D.      30-MAY-13     -Added SPI                          *
 *                                                                        *
 * 1.0.2      M.D.      27-JUN-13     -Changed GPDO & GPDI array sizes    *
 *                                     from 511 to 512                    *
 *                                                                        *
 * 1.0.3      M.D.      16-AUG-13     -Regenerated with updated generation*
 *                                     program and now SFTRG1,2,3 in BCTU *
 *                                     and NCF_CFG, NCFS_CFG, NCF_S, NCF_E*
 *                                     NCF_TOE, IRQ_ALARM_EN, NMI_EN,     *
 *                                     EOUT_SIG_EN in FCCU have correct   *
 *                                     names for bit positions.           *
 *                                                                        *
 * 2.1.0      M.D.      25-SEP-13     -Regenerated from RDP 2.1           *
 *                                                                        *
 * 2.1.1      M.D.      26-SEP-13     -Corrected endian of registers      *
 *                                                                        *
 * 2.1.2      M.D.      30-SEP-13     -Regenerated with updated ADC       *
 *                                                                        *
 * 2.1.3      M.D.      02-OCT-13     -Corrected some macro definitions:  *
 *                                     ADC, BCTU, ENET, MC_ME             *
 *                                                                        *
 * 2.1.4      M.D.      10-OCT-13     -Regenerated with updates to MEMU_0,*
 *                                     PIT, SPI, and CAN_0(start address) *
 *                                                                        *
 * 2.1.5      M.D.      18-OCT-13     -Removed old SPI_0 macros           *
 *                                                                        *
 * 2.1.6      M.D.      31-OCT-13     -Updated base address for eMIOS_UC  *
 *                                                                        *
 * 2.1.7      M.D.      20-DEC-13     -Removed '_' from macros referencing*
 *                                     LISTCHR array in BCTU incorrectly  *
 *                                                                        *
 * 2.1.8      M.D.      11-FEB-14     -Changed bitfield from PPC to PPCA  *
 *                                     in UHST and UOTG modules HCSPARAMS *
 *                                     registers                          *
 *                                                                        *
 * 2.1.9      M.D.      12-FEB-14     -Corrected macro definitions for    *
 *                                     SIUL2.GPDO and SIUL2.GPDI          *
 *                                                                        *
 * 2.1.10     M.D.      18-FEB-14     -Corrected macro definition for     *
 *                                     SIUL2.GPDI                         *
 *                                                                        *
 * 2.1.11     M.D.      25-FEB-14     -Added STCU2.INT_FLG register       *
 *                                                                        *
 * 2.1.12     M.D.      26-FEB-14     -Added STCU2_INT_FLG macro          *
 *                                                                        *
 * 2.1.13     M.D.      11-MAR-14     -replaced DMA with eDMA in module   *
 *                                     address declaration                *
 *                                                                        *
 * 3.0.00     M.D.      15-MAY-14     -regenerated from RDP/RM rev3       *
 *                                                                        *
 * 4.0.00     M.D.      10-JUL-14     -regenerated from RDP/RM rev4       *
 * 4.0.01     A.I.      3-OCT-14      -Manual changes                     *
 *                                                                        *
 *========================================================================*
 * COPYRIGHT:                                                             *
 *  Freescale Semiconductor, INC. All Rights Reserved. You are hereby     *
 *  granted a copyright license to use, modify, and distribute the        *
 *  SOFTWARE so long as this entire notice is retained without alteration *
 *  in any modified and/or redistributed versions, and that such modified *
 *  versions are clearly identified as such. No licenses are granted by   *
 *  implication, estoppel or otherwise under any patentsor trademarks     *
 *  of Freescale Semiconductor, Inc. This software is provided on an      *
 *  "AS IS" basis and without warranty.                                   *
 *                                                                        *
 *  To the maximum extent permitted by applicable law, Freescale          *
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,    *
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A      *
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH REGARD  *
 *  TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF) AND ANY     *
 *  ACCOMPANYING WRITTEN MATERIALS.                                       *
 *                                                                        *
 *  To the maximum extent permitted by applicable law, IN NO EVENT        *
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER    *
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,  *
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER         *
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.  *
 *                                                                        *
 *  Freescale Semiconductor assumes no responsibility for the             *
 *  maintenance and support of this software                              *
 *                                                                        *
 **************************************************************************/
/*>>>>>>> NOTE! this file is auto-generated please do not edit it! <<<<<<<*/

/**************************************************************************
 * Example register & bit field write:                                    *
 *                                                                        *
 *  <MODULE>.<REGISTER>.B.<BIT> = 1;                                      *
 *  <MODULE>.<REGISTER>.R       = 0x10000000;                             *
 *                                                                        *
 **************************************************************************/

#ifndef _MPC5748G_H_
#define _MPC5748G_H_

#include "typedefs.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif
#ifdef __ghs__
#pragma ghs nowarning 618
#endif


#include "MPC5748G_types_1.h"
#include "MPC5748G_types_2.h"
#include "MPC5748G_types_3.h"
#include "MPC5748G_types_4.h"
#include "MPC5748G_defines_1.h"
#include "MPC5748G_defines_2.h"
#include "MPC5748G_defines_3.h"


/* SIUL2 */
#define SIUL2_MIDR1          SIUL2.MIDR1.R                 /* SIUL2 MCU ID Register #1 */
#define SIUL2_MIDR2          SIUL2.MIDR2.R                 /* SIUL2 MCU ID Register #2 */
#define SIUL2_ISR0           SIUL2.ISR0.R                  /* SIUL2 Interrupt Status Flag Register0 */
#define SIUL2_IRER0          SIUL2.IRER0.R                 /* SIUL2 Interrupt Request Enable Register0 */
#define SIUL2_IRSR0          SIUL2.IRSR0.R                 /* SIUL2 Interrupt Request Select Register0 */
#define SIUL2_IREER0         SIUL2.IREER0.R                /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
#define SIUL2_IFEER0         SIUL2.IFEER0.R                /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
#define SIUL2_IFER0          SIUL2.IFER0.R                 /* SIUL2 Interrupt Filter Enable Register 0 */
#define SIUL2_IFMCR0         SIUL2.IFMCR[0].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR1         SIUL2.IFMCR[1].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR2         SIUL2.IFMCR[2].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR3         SIUL2.IFMCR[3].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR4         SIUL2.IFMCR[4].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR5         SIUL2.IFMCR[5].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR6         SIUL2.IFMCR[6].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR7         SIUL2.IFMCR[7].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR8         SIUL2.IFMCR[8].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR9         SIUL2.IFMCR[9].R              /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR10        SIUL2.IFMCR[10].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR11        SIUL2.IFMCR[11].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR12        SIUL2.IFMCR[12].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR13        SIUL2.IFMCR[13].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR14        SIUL2.IFMCR[14].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR15        SIUL2.IFMCR[15].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR16        SIUL2.IFMCR[16].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR17        SIUL2.IFMCR[17].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR18        SIUL2.IFMCR[18].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR19        SIUL2.IFMCR[19].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR20        SIUL2.IFMCR[20].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR21        SIUL2.IFMCR[21].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR22        SIUL2.IFMCR[22].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR23        SIUL2.IFMCR[23].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR24        SIUL2.IFMCR[24].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR25        SIUL2.IFMCR[25].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR26        SIUL2.IFMCR[26].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR27        SIUL2.IFMCR[27].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR28        SIUL2.IFMCR[28].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR29        SIUL2.IFMCR[29].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR30        SIUL2.IFMCR[30].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFMCR31        SIUL2.IFMCR[31].R             /* SIUL2 Interrupt Filter Maximum Counter Register */
#define SIUL2_IFCPR          SIUL2.IFCPR.R                 /* SIUL2 Interrupt Filter Clock Prescaler Register */
#define SIUL2_MSCR0          SIUL2.MSCR[0].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR1          SIUL2.MSCR[1].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR2          SIUL2.MSCR[2].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR3          SIUL2.MSCR[3].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR4          SIUL2.MSCR[4].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR5          SIUL2.MSCR[5].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR6          SIUL2.MSCR[6].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR7          SIUL2.MSCR[7].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR8          SIUL2.MSCR[8].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR9          SIUL2.MSCR[9].R               /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR10         SIUL2.MSCR[10].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR11         SIUL2.MSCR[11].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR12         SIUL2.MSCR[12].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR13         SIUL2.MSCR[13].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR14         SIUL2.MSCR[14].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR15         SIUL2.MSCR[15].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR16         SIUL2.MSCR[16].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR17         SIUL2.MSCR[17].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR18         SIUL2.MSCR[18].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR19         SIUL2.MSCR[19].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR20         SIUL2.MSCR[20].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR21         SIUL2.MSCR[21].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR22         SIUL2.MSCR[22].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR23         SIUL2.MSCR[23].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR24         SIUL2.MSCR[24].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR25         SIUL2.MSCR[25].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR26         SIUL2.MSCR[26].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR27         SIUL2.MSCR[27].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR28         SIUL2.MSCR[28].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR29         SIUL2.MSCR[29].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR30         SIUL2.MSCR[30].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR31         SIUL2.MSCR[31].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR32         SIUL2.MSCR[32].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR33         SIUL2.MSCR[33].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR34         SIUL2.MSCR[34].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR35         SIUL2.MSCR[35].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR36         SIUL2.MSCR[36].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR37         SIUL2.MSCR[37].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR38         SIUL2.MSCR[38].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR39         SIUL2.MSCR[39].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR40         SIUL2.MSCR[40].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR41         SIUL2.MSCR[41].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR42         SIUL2.MSCR[42].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR43         SIUL2.MSCR[43].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR44         SIUL2.MSCR[44].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR45         SIUL2.MSCR[45].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR46         SIUL2.MSCR[46].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR47         SIUL2.MSCR[47].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR48         SIUL2.MSCR[48].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR49         SIUL2.MSCR[49].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR50         SIUL2.MSCR[50].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR51         SIUL2.MSCR[51].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR52         SIUL2.MSCR[52].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR53         SIUL2.MSCR[53].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR54         SIUL2.MSCR[54].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR55         SIUL2.MSCR[55].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR56         SIUL2.MSCR[56].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR57         SIUL2.MSCR[57].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR58         SIUL2.MSCR[58].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR59         SIUL2.MSCR[59].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR60         SIUL2.MSCR[60].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR61         SIUL2.MSCR[61].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR62         SIUL2.MSCR[62].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR63         SIUL2.MSCR[63].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR64         SIUL2.MSCR[64].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR65         SIUL2.MSCR[65].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR66         SIUL2.MSCR[66].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR67         SIUL2.MSCR[67].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR68         SIUL2.MSCR[68].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR69         SIUL2.MSCR[69].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR70         SIUL2.MSCR[70].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR71         SIUL2.MSCR[71].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR72         SIUL2.MSCR[72].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR73         SIUL2.MSCR[73].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR74         SIUL2.MSCR[74].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR75         SIUL2.MSCR[75].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR76         SIUL2.MSCR[76].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR77         SIUL2.MSCR[77].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR78         SIUL2.MSCR[78].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR79         SIUL2.MSCR[79].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR80         SIUL2.MSCR[80].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR81         SIUL2.MSCR[81].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR82         SIUL2.MSCR[82].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR83         SIUL2.MSCR[83].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR84         SIUL2.MSCR[84].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR85         SIUL2.MSCR[85].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR86         SIUL2.MSCR[86].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR87         SIUL2.MSCR[87].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR88         SIUL2.MSCR[88].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR89         SIUL2.MSCR[89].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR90         SIUL2.MSCR[90].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR91         SIUL2.MSCR[91].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR92         SIUL2.MSCR[92].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR93         SIUL2.MSCR[93].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR94         SIUL2.MSCR[94].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR95         SIUL2.MSCR[95].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR96         SIUL2.MSCR[96].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR97         SIUL2.MSCR[97].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR98         SIUL2.MSCR[98].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR99         SIUL2.MSCR[99].R              /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR100        SIUL2.MSCR[100].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR101        SIUL2.MSCR[101].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR102        SIUL2.MSCR[102].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR103        SIUL2.MSCR[103].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR104        SIUL2.MSCR[104].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR105        SIUL2.MSCR[105].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR106        SIUL2.MSCR[106].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR107        SIUL2.MSCR[107].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR108        SIUL2.MSCR[108].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR109        SIUL2.MSCR[109].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR110        SIUL2.MSCR[110].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR111        SIUL2.MSCR[111].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR112        SIUL2.MSCR[112].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR113        SIUL2.MSCR[113].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR114        SIUL2.MSCR[114].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR115        SIUL2.MSCR[115].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR116        SIUL2.MSCR[116].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR117        SIUL2.MSCR[117].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR118        SIUL2.MSCR[118].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR119        SIUL2.MSCR[119].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR120        SIUL2.MSCR[120].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR121        SIUL2.MSCR[121].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR122        SIUL2.MSCR[122].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR123        SIUL2.MSCR[123].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR124        SIUL2.MSCR[124].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR125        SIUL2.MSCR[125].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR126        SIUL2.MSCR[126].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR127        SIUL2.MSCR[127].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR128        SIUL2.MSCR[128].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR129        SIUL2.MSCR[129].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR130        SIUL2.MSCR[130].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR131        SIUL2.MSCR[131].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR132        SIUL2.MSCR[132].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR133        SIUL2.MSCR[133].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR134        SIUL2.MSCR[134].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR135        SIUL2.MSCR[135].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR136        SIUL2.MSCR[136].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR137        SIUL2.MSCR[137].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR138        SIUL2.MSCR[138].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR139        SIUL2.MSCR[139].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR140        SIUL2.MSCR[140].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR141        SIUL2.MSCR[141].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR142        SIUL2.MSCR[142].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR143        SIUL2.MSCR[143].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR144        SIUL2.MSCR[144].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR145        SIUL2.MSCR[145].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR146        SIUL2.MSCR[146].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR147        SIUL2.MSCR[147].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR148        SIUL2.MSCR[148].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR149        SIUL2.MSCR[149].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR150        SIUL2.MSCR[150].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR151        SIUL2.MSCR[151].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR152        SIUL2.MSCR[152].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR153        SIUL2.MSCR[153].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR154        SIUL2.MSCR[154].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR155        SIUL2.MSCR[155].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR156        SIUL2.MSCR[156].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR157        SIUL2.MSCR[157].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR158        SIUL2.MSCR[158].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR159        SIUL2.MSCR[159].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR160        SIUL2.MSCR[160].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR161        SIUL2.MSCR[161].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR162        SIUL2.MSCR[162].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR163        SIUL2.MSCR[163].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR164        SIUL2.MSCR[164].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR165        SIUL2.MSCR[165].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR166        SIUL2.MSCR[166].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR167        SIUL2.MSCR[167].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR168        SIUL2.MSCR[168].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR169        SIUL2.MSCR[169].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR170        SIUL2.MSCR[170].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR171        SIUL2.MSCR[171].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR172        SIUL2.MSCR[172].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR173        SIUL2.MSCR[173].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR174        SIUL2.MSCR[174].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR175        SIUL2.MSCR[175].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR176        SIUL2.MSCR[176].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR177        SIUL2.MSCR[177].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR178        SIUL2.MSCR[178].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR179        SIUL2.MSCR[179].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR180        SIUL2.MSCR[180].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR181        SIUL2.MSCR[181].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR182        SIUL2.MSCR[182].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR183        SIUL2.MSCR[183].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR184        SIUL2.MSCR[184].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR185        SIUL2.MSCR[185].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR186        SIUL2.MSCR[186].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR187        SIUL2.MSCR[187].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR188        SIUL2.MSCR[188].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR189        SIUL2.MSCR[189].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR190        SIUL2.MSCR[190].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR191        SIUL2.MSCR[191].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR192        SIUL2.MSCR[192].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR193        SIUL2.MSCR[193].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR194        SIUL2.MSCR[194].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR195        SIUL2.MSCR[195].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR196        SIUL2.MSCR[196].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR197        SIUL2.MSCR[197].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR198        SIUL2.MSCR[198].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR199        SIUL2.MSCR[199].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR200        SIUL2.MSCR[200].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR201        SIUL2.MSCR[201].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR202        SIUL2.MSCR[202].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR203        SIUL2.MSCR[203].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR204        SIUL2.MSCR[204].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR205        SIUL2.MSCR[205].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR206        SIUL2.MSCR[206].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR207        SIUL2.MSCR[207].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR208        SIUL2.MSCR[208].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR209        SIUL2.MSCR[209].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR210        SIUL2.MSCR[210].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR211        SIUL2.MSCR[211].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR212        SIUL2.MSCR[212].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR213        SIUL2.MSCR[213].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR214        SIUL2.MSCR[214].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR215        SIUL2.MSCR[215].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR216        SIUL2.MSCR[216].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR217        SIUL2.MSCR[217].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR218        SIUL2.MSCR[218].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR219        SIUL2.MSCR[219].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR220        SIUL2.MSCR[220].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR221        SIUL2.MSCR[221].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR222        SIUL2.MSCR[222].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR223        SIUL2.MSCR[223].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR224        SIUL2.MSCR[224].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR225        SIUL2.MSCR[225].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR226        SIUL2.MSCR[226].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR227        SIUL2.MSCR[227].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR228        SIUL2.MSCR[228].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR229        SIUL2.MSCR[229].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR230        SIUL2.MSCR[230].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR231        SIUL2.MSCR[231].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR232        SIUL2.MSCR[232].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR233        SIUL2.MSCR[233].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR234        SIUL2.MSCR[234].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR235        SIUL2.MSCR[235].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR236        SIUL2.MSCR[236].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR237        SIUL2.MSCR[237].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR238        SIUL2.MSCR[238].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR239        SIUL2.MSCR[239].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR240        SIUL2.MSCR[240].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR241        SIUL2.MSCR[241].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR242        SIUL2.MSCR[242].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR243        SIUL2.MSCR[243].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR244        SIUL2.MSCR[244].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR245        SIUL2.MSCR[245].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR246        SIUL2.MSCR[246].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR247        SIUL2.MSCR[247].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR248        SIUL2.MSCR[248].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR249        SIUL2.MSCR[249].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR250        SIUL2.MSCR[250].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR251        SIUL2.MSCR[251].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR252        SIUL2.MSCR[252].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR253        SIUL2.MSCR[253].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR254        SIUL2.MSCR[254].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR255        SIUL2.MSCR[255].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR256        SIUL2.MSCR[256].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR257        SIUL2.MSCR[257].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR258        SIUL2.MSCR[258].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR259        SIUL2.MSCR[259].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR260        SIUL2.MSCR[260].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR261        SIUL2.MSCR[261].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR262        SIUL2.MSCR[262].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_MSCR263        SIUL2.MSCR[263].R             /* SIUL2 Multiplexed Signal Configuration Register */
#define SIUL2_IMCR0          SIUL2.IMCR[0].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR1          SIUL2.IMCR[1].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR2          SIUL2.IMCR[2].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR3          SIUL2.IMCR[3].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR4          SIUL2.IMCR[4].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR5          SIUL2.IMCR[5].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR6          SIUL2.IMCR[6].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR7          SIUL2.IMCR[7].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR8          SIUL2.IMCR[8].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR9          SIUL2.IMCR[9].R               /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR10         SIUL2.IMCR[10].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR11         SIUL2.IMCR[11].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR12         SIUL2.IMCR[12].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR13         SIUL2.IMCR[13].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR14         SIUL2.IMCR[14].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR15         SIUL2.IMCR[15].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR16         SIUL2.IMCR[16].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR17         SIUL2.IMCR[17].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR18         SIUL2.IMCR[18].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR19         SIUL2.IMCR[19].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR20         SIUL2.IMCR[20].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR21         SIUL2.IMCR[21].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR22         SIUL2.IMCR[22].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR23         SIUL2.IMCR[23].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR24         SIUL2.IMCR[24].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR25         SIUL2.IMCR[25].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR26         SIUL2.IMCR[26].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR27         SIUL2.IMCR[27].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR28         SIUL2.IMCR[28].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR29         SIUL2.IMCR[29].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR30         SIUL2.IMCR[30].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR31         SIUL2.IMCR[31].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR32         SIUL2.IMCR[32].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR33         SIUL2.IMCR[33].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR34         SIUL2.IMCR[34].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR35         SIUL2.IMCR[35].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR36         SIUL2.IMCR[36].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR37         SIUL2.IMCR[37].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR38         SIUL2.IMCR[38].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR39         SIUL2.IMCR[39].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR40         SIUL2.IMCR[40].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR41         SIUL2.IMCR[41].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR42         SIUL2.IMCR[42].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR43         SIUL2.IMCR[43].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR44         SIUL2.IMCR[44].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR45         SIUL2.IMCR[45].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR46         SIUL2.IMCR[46].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR47         SIUL2.IMCR[47].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR48         SIUL2.IMCR[48].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR49         SIUL2.IMCR[49].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR50         SIUL2.IMCR[50].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR51         SIUL2.IMCR[51].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR52         SIUL2.IMCR[52].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR53         SIUL2.IMCR[53].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR54         SIUL2.IMCR[54].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR55         SIUL2.IMCR[55].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR56         SIUL2.IMCR[56].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR57         SIUL2.IMCR[57].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR58         SIUL2.IMCR[58].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR59         SIUL2.IMCR[59].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR60         SIUL2.IMCR[60].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR61         SIUL2.IMCR[61].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR62         SIUL2.IMCR[62].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR63         SIUL2.IMCR[63].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR64         SIUL2.IMCR[64].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR65         SIUL2.IMCR[65].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR66         SIUL2.IMCR[66].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR67         SIUL2.IMCR[67].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR68         SIUL2.IMCR[68].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR69         SIUL2.IMCR[69].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR70         SIUL2.IMCR[70].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR71         SIUL2.IMCR[71].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR72         SIUL2.IMCR[72].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR73         SIUL2.IMCR[73].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR74         SIUL2.IMCR[74].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR75         SIUL2.IMCR[75].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR76         SIUL2.IMCR[76].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR77         SIUL2.IMCR[77].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR78         SIUL2.IMCR[78].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR79         SIUL2.IMCR[79].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR80         SIUL2.IMCR[80].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR81         SIUL2.IMCR[81].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR82         SIUL2.IMCR[82].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR83         SIUL2.IMCR[83].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR84         SIUL2.IMCR[84].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR85         SIUL2.IMCR[85].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR86         SIUL2.IMCR[86].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR87         SIUL2.IMCR[87].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR88         SIUL2.IMCR[88].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR89         SIUL2.IMCR[89].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR90         SIUL2.IMCR[90].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR91         SIUL2.IMCR[91].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR92         SIUL2.IMCR[92].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR93         SIUL2.IMCR[93].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR94         SIUL2.IMCR[94].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR95         SIUL2.IMCR[95].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR96         SIUL2.IMCR[96].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR97         SIUL2.IMCR[97].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR98         SIUL2.IMCR[98].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR99         SIUL2.IMCR[99].R              /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR100        SIUL2.IMCR[100].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR101        SIUL2.IMCR[101].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR102        SIUL2.IMCR[102].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR103        SIUL2.IMCR[103].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR104        SIUL2.IMCR[104].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR105        SIUL2.IMCR[105].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR106        SIUL2.IMCR[106].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR107        SIUL2.IMCR[107].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR108        SIUL2.IMCR[108].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR109        SIUL2.IMCR[109].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR110        SIUL2.IMCR[110].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR111        SIUL2.IMCR[111].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR112        SIUL2.IMCR[112].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR113        SIUL2.IMCR[113].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR114        SIUL2.IMCR[114].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR115        SIUL2.IMCR[115].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR116        SIUL2.IMCR[116].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR117        SIUL2.IMCR[117].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR118        SIUL2.IMCR[118].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR119        SIUL2.IMCR[119].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR120        SIUL2.IMCR[120].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR121        SIUL2.IMCR[121].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR122        SIUL2.IMCR[122].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR123        SIUL2.IMCR[123].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR124        SIUL2.IMCR[124].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR125        SIUL2.IMCR[125].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR126        SIUL2.IMCR[126].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR127        SIUL2.IMCR[127].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR128        SIUL2.IMCR[128].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR129        SIUL2.IMCR[129].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR130        SIUL2.IMCR[130].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR131        SIUL2.IMCR[131].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR132        SIUL2.IMCR[132].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR133        SIUL2.IMCR[133].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR134        SIUL2.IMCR[134].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR135        SIUL2.IMCR[135].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR136        SIUL2.IMCR[136].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR137        SIUL2.IMCR[137].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR138        SIUL2.IMCR[138].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR139        SIUL2.IMCR[139].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR140        SIUL2.IMCR[140].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR141        SIUL2.IMCR[141].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR142        SIUL2.IMCR[142].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR143        SIUL2.IMCR[143].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR144        SIUL2.IMCR[144].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR145        SIUL2.IMCR[145].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR146        SIUL2.IMCR[146].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR147        SIUL2.IMCR[147].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR148        SIUL2.IMCR[148].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR149        SIUL2.IMCR[149].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR150        SIUL2.IMCR[150].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR151        SIUL2.IMCR[151].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR152        SIUL2.IMCR[152].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR153        SIUL2.IMCR[153].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR154        SIUL2.IMCR[154].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR155        SIUL2.IMCR[155].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR156        SIUL2.IMCR[156].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR157        SIUL2.IMCR[157].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR158        SIUL2.IMCR[158].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR159        SIUL2.IMCR[159].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR160        SIUL2.IMCR[160].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR161        SIUL2.IMCR[161].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR162        SIUL2.IMCR[162].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR163        SIUL2.IMCR[163].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR164        SIUL2.IMCR[164].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR165        SIUL2.IMCR[165].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR166        SIUL2.IMCR[166].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR167        SIUL2.IMCR[167].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR168        SIUL2.IMCR[168].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR169        SIUL2.IMCR[169].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR170        SIUL2.IMCR[170].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR171        SIUL2.IMCR[171].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR172        SIUL2.IMCR[172].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR173        SIUL2.IMCR[173].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR174        SIUL2.IMCR[174].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR175        SIUL2.IMCR[175].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR176        SIUL2.IMCR[176].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR177        SIUL2.IMCR[177].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR178        SIUL2.IMCR[178].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR179        SIUL2.IMCR[179].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR180        SIUL2.IMCR[180].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR181        SIUL2.IMCR[181].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR182        SIUL2.IMCR[182].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR183        SIUL2.IMCR[183].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR184        SIUL2.IMCR[184].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR185        SIUL2.IMCR[185].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR186        SIUL2.IMCR[186].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR187        SIUL2.IMCR[187].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR188        SIUL2.IMCR[188].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR189        SIUL2.IMCR[189].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR190        SIUL2.IMCR[190].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR191        SIUL2.IMCR[191].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR192        SIUL2.IMCR[192].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR193        SIUL2.IMCR[193].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR194        SIUL2.IMCR[194].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR195        SIUL2.IMCR[195].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR196        SIUL2.IMCR[196].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR197        SIUL2.IMCR[197].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR198        SIUL2.IMCR[198].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR199        SIUL2.IMCR[199].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR200        SIUL2.IMCR[200].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR201        SIUL2.IMCR[201].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR202        SIUL2.IMCR[202].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR203        SIUL2.IMCR[203].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR204        SIUL2.IMCR[204].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR205        SIUL2.IMCR[205].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR206        SIUL2.IMCR[206].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR207        SIUL2.IMCR[207].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR208        SIUL2.IMCR[208].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR209        SIUL2.IMCR[209].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR210        SIUL2.IMCR[210].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR211        SIUL2.IMCR[211].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR212        SIUL2.IMCR[212].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR213        SIUL2.IMCR[213].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR214        SIUL2.IMCR[214].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR215        SIUL2.IMCR[215].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR216        SIUL2.IMCR[216].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR217        SIUL2.IMCR[217].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR218        SIUL2.IMCR[218].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR219        SIUL2.IMCR[219].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR220        SIUL2.IMCR[220].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR221        SIUL2.IMCR[221].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR222        SIUL2.IMCR[222].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR223        SIUL2.IMCR[223].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR224        SIUL2.IMCR[224].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR225        SIUL2.IMCR[225].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR226        SIUL2.IMCR[226].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR227        SIUL2.IMCR[227].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR228        SIUL2.IMCR[228].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR229        SIUL2.IMCR[229].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR230        SIUL2.IMCR[230].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR231        SIUL2.IMCR[231].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR232        SIUL2.IMCR[232].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR233        SIUL2.IMCR[233].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR234        SIUL2.IMCR[234].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR235        SIUL2.IMCR[235].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR236        SIUL2.IMCR[236].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR237        SIUL2.IMCR[237].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR238        SIUL2.IMCR[238].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR239        SIUL2.IMCR[239].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR240        SIUL2.IMCR[240].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR241        SIUL2.IMCR[241].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR242        SIUL2.IMCR[242].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR243        SIUL2.IMCR[243].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR244        SIUL2.IMCR[244].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR245        SIUL2.IMCR[245].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR246        SIUL2.IMCR[246].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR247        SIUL2.IMCR[247].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR248        SIUL2.IMCR[248].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR249        SIUL2.IMCR[249].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR250        SIUL2.IMCR[250].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR251        SIUL2.IMCR[251].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR252        SIUL2.IMCR[252].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR253        SIUL2.IMCR[253].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR254        SIUL2.IMCR[254].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR255        SIUL2.IMCR[255].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR256        SIUL2.IMCR[256].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR257        SIUL2.IMCR[257].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR258        SIUL2.IMCR[258].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR259        SIUL2.IMCR[259].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR260        SIUL2.IMCR[260].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR261        SIUL2.IMCR[261].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR262        SIUL2.IMCR[262].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR263        SIUL2.IMCR[263].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR264        SIUL2.IMCR[264].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR265        SIUL2.IMCR[265].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR266        SIUL2.IMCR[266].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR267        SIUL2.IMCR[267].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR268        SIUL2.IMCR[268].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR269        SIUL2.IMCR[269].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR270        SIUL2.IMCR[270].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR271        SIUL2.IMCR[271].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR272        SIUL2.IMCR[272].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR273        SIUL2.IMCR[273].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR274        SIUL2.IMCR[274].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR275        SIUL2.IMCR[275].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR276        SIUL2.IMCR[276].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR277        SIUL2.IMCR[277].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR278        SIUL2.IMCR[278].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR279        SIUL2.IMCR[279].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR280        SIUL2.IMCR[280].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR281        SIUL2.IMCR[281].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR282        SIUL2.IMCR[282].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR283        SIUL2.IMCR[283].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR284        SIUL2.IMCR[284].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR285        SIUL2.IMCR[285].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR286        SIUL2.IMCR[286].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR287        SIUL2.IMCR[287].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR288        SIUL2.IMCR[288].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR289        SIUL2.IMCR[289].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR290        SIUL2.IMCR[290].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR291        SIUL2.IMCR[291].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR292        SIUL2.IMCR[292].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR293        SIUL2.IMCR[293].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR294        SIUL2.IMCR[294].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR295        SIUL2.IMCR[295].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR296        SIUL2.IMCR[296].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR297        SIUL2.IMCR[297].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR298        SIUL2.IMCR[298].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR299        SIUL2.IMCR[299].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR300        SIUL2.IMCR[300].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR301        SIUL2.IMCR[301].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR302        SIUL2.IMCR[302].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR303        SIUL2.IMCR[303].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR304        SIUL2.IMCR[304].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR305        SIUL2.IMCR[305].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR306        SIUL2.IMCR[306].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR307        SIUL2.IMCR[307].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR308        SIUL2.IMCR[308].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR309        SIUL2.IMCR[309].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR310        SIUL2.IMCR[310].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR311        SIUL2.IMCR[311].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR312        SIUL2.IMCR[312].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR313        SIUL2.IMCR[313].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR314        SIUL2.IMCR[314].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR315        SIUL2.IMCR[315].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR316        SIUL2.IMCR[316].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR317        SIUL2.IMCR[317].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR318        SIUL2.IMCR[318].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR319        SIUL2.IMCR[319].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR320        SIUL2.IMCR[320].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR321        SIUL2.IMCR[321].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR322        SIUL2.IMCR[322].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR323        SIUL2.IMCR[323].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR324        SIUL2.IMCR[324].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR325        SIUL2.IMCR[325].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR326        SIUL2.IMCR[326].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR327        SIUL2.IMCR[327].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR328        SIUL2.IMCR[328].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR329        SIUL2.IMCR[329].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR330        SIUL2.IMCR[330].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR331        SIUL2.IMCR[331].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR332        SIUL2.IMCR[332].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR333        SIUL2.IMCR[333].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR334        SIUL2.IMCR[334].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR335        SIUL2.IMCR[335].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR336        SIUL2.IMCR[336].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR337        SIUL2.IMCR[337].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR338        SIUL2.IMCR[338].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR339        SIUL2.IMCR[339].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR340        SIUL2.IMCR[340].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR341        SIUL2.IMCR[341].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR342        SIUL2.IMCR[342].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR343        SIUL2.IMCR[343].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR344        SIUL2.IMCR[344].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR345        SIUL2.IMCR[345].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR346        SIUL2.IMCR[346].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR347        SIUL2.IMCR[347].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR348        SIUL2.IMCR[348].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR349        SIUL2.IMCR[349].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR350        SIUL2.IMCR[350].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR351        SIUL2.IMCR[351].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR352        SIUL2.IMCR[352].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR353        SIUL2.IMCR[353].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR354        SIUL2.IMCR[354].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR355        SIUL2.IMCR[355].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR356        SIUL2.IMCR[356].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR357        SIUL2.IMCR[357].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR358        SIUL2.IMCR[358].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR359        SIUL2.IMCR[359].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR360        SIUL2.IMCR[360].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR361        SIUL2.IMCR[361].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR362        SIUL2.IMCR[362].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR363        SIUL2.IMCR[363].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR364        SIUL2.IMCR[364].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR365        SIUL2.IMCR[365].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR366        SIUL2.IMCR[366].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR367        SIUL2.IMCR[367].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR368        SIUL2.IMCR[368].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR369        SIUL2.IMCR[369].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR370        SIUL2.IMCR[370].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR371        SIUL2.IMCR[371].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR372        SIUL2.IMCR[372].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR373        SIUL2.IMCR[373].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR374        SIUL2.IMCR[374].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR375        SIUL2.IMCR[375].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR376        SIUL2.IMCR[376].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR377        SIUL2.IMCR[377].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR378        SIUL2.IMCR[378].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR379        SIUL2.IMCR[379].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR380        SIUL2.IMCR[380].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR381        SIUL2.IMCR[381].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR382        SIUL2.IMCR[382].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR383        SIUL2.IMCR[383].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR384        SIUL2.IMCR[384].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR385        SIUL2.IMCR[385].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR386        SIUL2.IMCR[386].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR387        SIUL2.IMCR[387].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR388        SIUL2.IMCR[388].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR389        SIUL2.IMCR[389].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR390        SIUL2.IMCR[390].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR391        SIUL2.IMCR[391].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR392        SIUL2.IMCR[392].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR393        SIUL2.IMCR[393].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR394        SIUL2.IMCR[394].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR395        SIUL2.IMCR[395].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR396        SIUL2.IMCR[396].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR397        SIUL2.IMCR[397].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR398        SIUL2.IMCR[398].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR399        SIUL2.IMCR[399].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR400        SIUL2.IMCR[400].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR401        SIUL2.IMCR[401].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR402        SIUL2.IMCR[402].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR403        SIUL2.IMCR[403].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR404        SIUL2.IMCR[404].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR405        SIUL2.IMCR[405].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR406        SIUL2.IMCR[406].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR407        SIUL2.IMCR[407].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR408        SIUL2.IMCR[408].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR409        SIUL2.IMCR[409].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR410        SIUL2.IMCR[410].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR411        SIUL2.IMCR[411].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR412        SIUL2.IMCR[412].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR413        SIUL2.IMCR[413].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR414        SIUL2.IMCR[414].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR415        SIUL2.IMCR[415].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR416        SIUL2.IMCR[416].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR417        SIUL2.IMCR[417].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR418        SIUL2.IMCR[418].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR419        SIUL2.IMCR[419].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR420        SIUL2.IMCR[420].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR421        SIUL2.IMCR[421].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR422        SIUL2.IMCR[422].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR423        SIUL2.IMCR[423].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR424        SIUL2.IMCR[424].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR425        SIUL2.IMCR[425].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR426        SIUL2.IMCR[426].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR427        SIUL2.IMCR[427].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR428        SIUL2.IMCR[428].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR429        SIUL2.IMCR[429].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR430        SIUL2.IMCR[430].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR431        SIUL2.IMCR[431].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR432        SIUL2.IMCR[432].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR433        SIUL2.IMCR[433].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR434        SIUL2.IMCR[434].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR435        SIUL2.IMCR[435].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR436        SIUL2.IMCR[436].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR437        SIUL2.IMCR[437].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR438        SIUL2.IMCR[438].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR439        SIUL2.IMCR[439].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR440        SIUL2.IMCR[440].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR441        SIUL2.IMCR[441].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR442        SIUL2.IMCR[442].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR443        SIUL2.IMCR[443].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR444        SIUL2.IMCR[444].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR445        SIUL2.IMCR[445].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR446        SIUL2.IMCR[446].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR447        SIUL2.IMCR[447].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR448        SIUL2.IMCR[448].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR449        SIUL2.IMCR[449].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR450        SIUL2.IMCR[450].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR451        SIUL2.IMCR[451].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR452        SIUL2.IMCR[452].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR453        SIUL2.IMCR[453].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR454        SIUL2.IMCR[454].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR455        SIUL2.IMCR[455].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR456        SIUL2.IMCR[456].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR457        SIUL2.IMCR[457].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR458        SIUL2.IMCR[458].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR459        SIUL2.IMCR[459].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR460        SIUL2.IMCR[460].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR461        SIUL2.IMCR[461].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR462        SIUL2.IMCR[462].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR463        SIUL2.IMCR[463].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR464        SIUL2.IMCR[464].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR465        SIUL2.IMCR[465].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR466        SIUL2.IMCR[466].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR467        SIUL2.IMCR[467].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR468        SIUL2.IMCR[468].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR469        SIUL2.IMCR[469].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR470        SIUL2.IMCR[470].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR471        SIUL2.IMCR[471].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR472        SIUL2.IMCR[472].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR473        SIUL2.IMCR[473].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR474        SIUL2.IMCR[474].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR475        SIUL2.IMCR[475].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR476        SIUL2.IMCR[476].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR477        SIUL2.IMCR[477].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR478        SIUL2.IMCR[478].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR479        SIUL2.IMCR[479].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR480        SIUL2.IMCR[480].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR481        SIUL2.IMCR[481].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR482        SIUL2.IMCR[482].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR483        SIUL2.IMCR[483].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR484        SIUL2.IMCR[484].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR485        SIUL2.IMCR[485].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR486        SIUL2.IMCR[486].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR487        SIUL2.IMCR[487].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR488        SIUL2.IMCR[488].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR489        SIUL2.IMCR[489].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR490        SIUL2.IMCR[490].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR491        SIUL2.IMCR[491].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR492        SIUL2.IMCR[492].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR493        SIUL2.IMCR[493].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR494        SIUL2.IMCR[494].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR495        SIUL2.IMCR[495].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR496        SIUL2.IMCR[496].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR497        SIUL2.IMCR[497].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR498        SIUL2.IMCR[498].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR499        SIUL2.IMCR[499].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR500        SIUL2.IMCR[500].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR501        SIUL2.IMCR[501].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR502        SIUL2.IMCR[502].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR503        SIUL2.IMCR[503].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR504        SIUL2.IMCR[504].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR505        SIUL2.IMCR[505].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR506        SIUL2.IMCR[506].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR507        SIUL2.IMCR[507].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR508        SIUL2.IMCR[508].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR509        SIUL2.IMCR[509].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR510        SIUL2.IMCR[510].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_IMCR511        SIUL2.IMCR[511].R             /* SIUL2 Input Multiplexed Signal Configuration Register */
#define SIUL2_GPDO0          SIUL2.GPDO[0].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO1          SIUL2.GPDO[1].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO2          SIUL2.GPDO[2].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO3          SIUL2.GPDO[3].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO4          SIUL2.GPDO[4].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO5          SIUL2.GPDO[5].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO6          SIUL2.GPDO[6].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO7          SIUL2.GPDO[7].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO8          SIUL2.GPDO[8].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO9          SIUL2.GPDO[9].R               /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO10         SIUL2.GPDO[10].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO11         SIUL2.GPDO[11].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO12         SIUL2.GPDO[12].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO13         SIUL2.GPDO[13].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO14         SIUL2.GPDO[14].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO15         SIUL2.GPDO[15].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO16         SIUL2.GPDO[16].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO17         SIUL2.GPDO[17].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO18         SIUL2.GPDO[18].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO19         SIUL2.GPDO[19].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO20         SIUL2.GPDO[20].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO21         SIUL2.GPDO[21].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO22         SIUL2.GPDO[22].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO23         SIUL2.GPDO[23].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO24         SIUL2.GPDO[24].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO25         SIUL2.GPDO[25].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO26         SIUL2.GPDO[26].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO27         SIUL2.GPDO[27].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO28         SIUL2.GPDO[28].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO29         SIUL2.GPDO[29].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO30         SIUL2.GPDO[30].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO31         SIUL2.GPDO[31].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO32         SIUL2.GPDO[32].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO33         SIUL2.GPDO[33].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO34         SIUL2.GPDO[34].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO35         SIUL2.GPDO[35].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO36         SIUL2.GPDO[36].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO37         SIUL2.GPDO[37].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO38         SIUL2.GPDO[38].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO39         SIUL2.GPDO[39].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO40         SIUL2.GPDO[40].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO41         SIUL2.GPDO[41].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO42         SIUL2.GPDO[42].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO43         SIUL2.GPDO[43].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO44         SIUL2.GPDO[44].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO45         SIUL2.GPDO[45].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO46         SIUL2.GPDO[46].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO47         SIUL2.GPDO[47].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO48         SIUL2.GPDO[48].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO49         SIUL2.GPDO[49].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO50         SIUL2.GPDO[50].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO51         SIUL2.GPDO[51].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO52         SIUL2.GPDO[52].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO53         SIUL2.GPDO[53].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO54         SIUL2.GPDO[54].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO55         SIUL2.GPDO[55].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO56         SIUL2.GPDO[56].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO57         SIUL2.GPDO[57].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO58         SIUL2.GPDO[58].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO59         SIUL2.GPDO[59].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO60         SIUL2.GPDO[60].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO61         SIUL2.GPDO[61].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO62         SIUL2.GPDO[62].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO63         SIUL2.GPDO[63].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO64         SIUL2.GPDO[64].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO65         SIUL2.GPDO[65].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO66         SIUL2.GPDO[66].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO67         SIUL2.GPDO[67].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO68         SIUL2.GPDO[68].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO69         SIUL2.GPDO[69].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO70         SIUL2.GPDO[70].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO71         SIUL2.GPDO[71].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO72         SIUL2.GPDO[72].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO73         SIUL2.GPDO[73].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO74         SIUL2.GPDO[74].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO75         SIUL2.GPDO[75].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO76         SIUL2.GPDO[76].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO77         SIUL2.GPDO[77].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO78         SIUL2.GPDO[78].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO79         SIUL2.GPDO[79].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO80         SIUL2.GPDO[80].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO81         SIUL2.GPDO[81].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO82         SIUL2.GPDO[82].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO83         SIUL2.GPDO[83].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO84         SIUL2.GPDO[84].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO85         SIUL2.GPDO[85].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO86         SIUL2.GPDO[86].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO87         SIUL2.GPDO[87].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO88         SIUL2.GPDO[88].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO89         SIUL2.GPDO[89].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO90         SIUL2.GPDO[90].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO91         SIUL2.GPDO[91].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO92         SIUL2.GPDO[92].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO93         SIUL2.GPDO[93].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO94         SIUL2.GPDO[94].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO95         SIUL2.GPDO[95].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO96         SIUL2.GPDO[96].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO97         SIUL2.GPDO[97].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO98         SIUL2.GPDO[98].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO99         SIUL2.GPDO[99].R              /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO100        SIUL2.GPDO[100].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO101        SIUL2.GPDO[101].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO102        SIUL2.GPDO[102].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO103        SIUL2.GPDO[103].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO104        SIUL2.GPDO[104].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO105        SIUL2.GPDO[105].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO106        SIUL2.GPDO[106].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO107        SIUL2.GPDO[107].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO108        SIUL2.GPDO[108].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO109        SIUL2.GPDO[109].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO110        SIUL2.GPDO[110].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO111        SIUL2.GPDO[111].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO112        SIUL2.GPDO[112].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO113        SIUL2.GPDO[113].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO114        SIUL2.GPDO[114].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO115        SIUL2.GPDO[115].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO116        SIUL2.GPDO[116].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO117        SIUL2.GPDO[117].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO118        SIUL2.GPDO[118].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO119        SIUL2.GPDO[119].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO120        SIUL2.GPDO[120].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO121        SIUL2.GPDO[121].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO122        SIUL2.GPDO[122].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO123        SIUL2.GPDO[123].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO124        SIUL2.GPDO[124].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO125        SIUL2.GPDO[125].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO126        SIUL2.GPDO[126].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO127        SIUL2.GPDO[127].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO128        SIUL2.GPDO[128].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO129        SIUL2.GPDO[129].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO130        SIUL2.GPDO[130].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO131        SIUL2.GPDO[131].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO132        SIUL2.GPDO[132].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO133        SIUL2.GPDO[133].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO134        SIUL2.GPDO[134].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO135        SIUL2.GPDO[135].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO136        SIUL2.GPDO[136].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO137        SIUL2.GPDO[137].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO138        SIUL2.GPDO[138].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO139        SIUL2.GPDO[139].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO140        SIUL2.GPDO[130].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO141        SIUL2.GPDO[141].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO142        SIUL2.GPDO[142].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO143        SIUL2.GPDO[143].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO144        SIUL2.GPDO[144].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO145        SIUL2.GPDO[145].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO146        SIUL2.GPDO[146].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO147        SIUL2.GPDO[147].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO148        SIUL2.GPDO[148].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO149        SIUL2.GPDO[149].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO150        SIUL2.GPDO[150].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO151        SIUL2.GPDO[151].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO152        SIUL2.GPDO[152].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO153        SIUL2.GPDO[153].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO154        SIUL2.GPDO[154].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO155        SIUL2.GPDO[155].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO156        SIUL2.GPDO[156].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO157        SIUL2.GPDO[157].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO158        SIUL2.GPDO[158].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO159        SIUL2.GPDO[159].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO160        SIUL2.GPDO[160].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO161        SIUL2.GPDO[161].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO162        SIUL2.GPDO[162].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO163        SIUL2.GPDO[163].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO164        SIUL2.GPDO[164].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO165        SIUL2.GPDO[165].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO166        SIUL2.GPDO[166].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO167        SIUL2.GPDO[167].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO168        SIUL2.GPDO[168].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO169        SIUL2.GPDO[169].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO170        SIUL2.GPDO[170].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO171        SIUL2.GPDO[171].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO172        SIUL2.GPDO[172].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO173        SIUL2.GPDO[173].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO174        SIUL2.GPDO[174].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO175        SIUL2.GPDO[175].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO176        SIUL2.GPDO[176].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO177        SIUL2.GPDO[177].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO178        SIUL2.GPDO[178].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO179        SIUL2.GPDO[179].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO180        SIUL2.GPDO[180].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO181        SIUL2.GPDO[181].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO182        SIUL2.GPDO[182].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO183        SIUL2.GPDO[183].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO184        SIUL2.GPDO[184].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO185        SIUL2.GPDO[185].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO186        SIUL2.GPDO[186].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO187        SIUL2.GPDO[187].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO188        SIUL2.GPDO[188].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO189        SIUL2.GPDO[189].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO190        SIUL2.GPDO[190].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO191        SIUL2.GPDO[191].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO192        SIUL2.GPDO[192].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO193        SIUL2.GPDO[193].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO194        SIUL2.GPDO[194].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO195        SIUL2.GPDO[195].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO196        SIUL2.GPDO[196].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO197        SIUL2.GPDO[197].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO198        SIUL2.GPDO[198].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO199        SIUL2.GPDO[199].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO200        SIUL2.GPDO[200].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO201        SIUL2.GPDO[201].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO202        SIUL2.GPDO[202].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO203        SIUL2.GPDO[203].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO204        SIUL2.GPDO[204].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO205        SIUL2.GPDO[205].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO206        SIUL2.GPDO[206].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO207        SIUL2.GPDO[207].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO208        SIUL2.GPDO[208].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO209        SIUL2.GPDO[209].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO210        SIUL2.GPDO[210].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO211        SIUL2.GPDO[211].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO212        SIUL2.GPDO[212].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO213        SIUL2.GPDO[213].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO214        SIUL2.GPDO[214].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO215        SIUL2.GPDO[215].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO216        SIUL2.GPDO[216].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO217        SIUL2.GPDO[217].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO218        SIUL2.GPDO[218].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO219        SIUL2.GPDO[219].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO220        SIUL2.GPDO[220].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO221        SIUL2.GPDO[221].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO222        SIUL2.GPDO[222].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO223        SIUL2.GPDO[223].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO224        SIUL2.GPDO[224].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO225        SIUL2.GPDO[225].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO226        SIUL2.GPDO[226].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO227        SIUL2.GPDO[227].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO228        SIUL2.GPDO[228].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO229        SIUL2.GPDO[229].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO230        SIUL2.GPDO[230].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO231        SIUL2.GPDO[231].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO232        SIUL2.GPDO[232].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO233        SIUL2.GPDO[233].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO234        SIUL2.GPDO[234].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO235        SIUL2.GPDO[235].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO236        SIUL2.GPDO[236].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO237        SIUL2.GPDO[237].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO238        SIUL2.GPDO[238].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO239        SIUL2.GPDO[239].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO240        SIUL2.GPDO[230].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO241        SIUL2.GPDO[241].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO242        SIUL2.GPDO[242].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO243        SIUL2.GPDO[243].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO244        SIUL2.GPDO[244].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO245        SIUL2.GPDO[245].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO246        SIUL2.GPDO[246].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO247        SIUL2.GPDO[247].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO248        SIUL2.GPDO[248].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO249        SIUL2.GPDO[249].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO250        SIUL2.GPDO[250].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO251        SIUL2.GPDO[251].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO252        SIUL2.GPDO[252].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO253        SIUL2.GPDO[253].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO254        SIUL2.GPDO[254].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO255        SIUL2.GPDO[255].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO256        SIUL2.GPDO[256].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO257        SIUL2.GPDO[257].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO258        SIUL2.GPDO[258].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO259        SIUL2.GPDO[259].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO260        SIUL2.GPDO[260].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO261        SIUL2.GPDO[261].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO262        SIUL2.GPDO[262].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDO263        SIUL2.GPDO[263].R             /* SIUL2 GPIO Pad Data Output Register */
#define SIUL2_GPDI0          SIUL2.GPDI[0].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI1          SIUL2.GPDI[1].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI2          SIUL2.GPDI[2].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI3          SIUL2.GPDI[3].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI4          SIUL2.GPDI[4].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI5          SIUL2.GPDI[5].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI6          SIUL2.GPDI[6].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI7          SIUL2.GPDI[7].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI8          SIUL2.GPDI[8].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI9          SIUL2.GPDI[9].R               /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI10         SIUL2.GPDI[10].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI11         SIUL2.GPDI[11].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI12         SIUL2.GPDI[12].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI13         SIUL2.GPDI[13].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI14         SIUL2.GPDI[14].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI15         SIUL2.GPDI[15].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI16         SIUL2.GPDI[16].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI17         SIUL2.GPDI[17].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI18         SIUL2.GPDI[18].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI19         SIUL2.GPDI[19].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI20         SIUL2.GPDI[20].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI21         SIUL2.GPDI[21].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI22         SIUL2.GPDI[22].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI23         SIUL2.GPDI[23].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI24         SIUL2.GPDI[24].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI25         SIUL2.GPDI[25].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI26         SIUL2.GPDI[26].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI27         SIUL2.GPDI[27].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI28         SIUL2.GPDI[28].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI29         SIUL2.GPDI[29].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI30         SIUL2.GPDI[30].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI31         SIUL2.GPDI[31].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI32         SIUL2.GPDI[32].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI33         SIUL2.GPDI[33].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI34         SIUL2.GPDI[34].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI35         SIUL2.GPDI[35].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI36         SIUL2.GPDI[36].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI37         SIUL2.GPDI[37].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI38         SIUL2.GPDI[38].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI39         SIUL2.GPDI[39].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI40         SIUL2.GPDI[40].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI41         SIUL2.GPDI[41].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI42         SIUL2.GPDI[42].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI43         SIUL2.GPDI[43].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI44         SIUL2.GPDI[44].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI45         SIUL2.GPDI[45].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI46         SIUL2.GPDI[46].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI47         SIUL2.GPDI[47].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI48         SIUL2.GPDI[48].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI49         SIUL2.GPDI[49].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI50         SIUL2.GPDI[50].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI51         SIUL2.GPDI[51].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI52         SIUL2.GPDI[52].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI53         SIUL2.GPDI[53].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI54         SIUL2.GPDI[54].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI55         SIUL2.GPDI[55].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI56         SIUL2.GPDI[56].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI57         SIUL2.GPDI[57].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI58         SIUL2.GPDI[58].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI59         SIUL2.GPDI[59].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI60         SIUL2.GPDI[60].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI61         SIUL2.GPDI[61].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI62         SIUL2.GPDI[62].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI63         SIUL2.GPDI[63].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI64         SIUL2.GPDI[64].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI65         SIUL2.GPDI[65].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI66         SIUL2.GPDI[66].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI67         SIUL2.GPDI[67].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI68         SIUL2.GPDI[68].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI69         SIUL2.GPDI[69].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI70         SIUL2.GPDI[70].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI71         SIUL2.GPDI[71].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI72         SIUL2.GPDI[72].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI73         SIUL2.GPDI[73].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI74         SIUL2.GPDI[74].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI75         SIUL2.GPDI[75].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI76         SIUL2.GPDI[76].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI77         SIUL2.GPDI[77].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI78         SIUL2.GPDI[78].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI79         SIUL2.GPDI[79].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI80         SIUL2.GPDI[80].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI81         SIUL2.GPDI[81].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI82         SIUL2.GPDI[82].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI83         SIUL2.GPDI[83].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI84         SIUL2.GPDI[84].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI85         SIUL2.GPDI[85].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI86         SIUL2.GPDI[86].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI87         SIUL2.GPDI[87].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI88         SIUL2.GPDI[88].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI89         SIUL2.GPDI[89].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI90         SIUL2.GPDI[90].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI91         SIUL2.GPDI[91].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI92         SIUL2.GPDI[92].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI93         SIUL2.GPDI[93].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI94         SIUL2.GPDI[94].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI95         SIUL2.GPDI[95].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI96         SIUL2.GPDI[96].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI97         SIUL2.GPDI[97].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI98         SIUL2.GPDI[98].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI99         SIUL2.GPDI[99].R              /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI100        SIUL2.GPDI[100].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI101        SIUL2.GPDI[101].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI102        SIUL2.GPDI[102].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI103        SIUL2.GPDI[103].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI104        SIUL2.GPDI[104].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI105        SIUL2.GPDI[105].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI106        SIUL2.GPDI[106].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI107        SIUL2.GPDI[107].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI108        SIUL2.GPDI[108].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI109        SIUL2.GPDI[109].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI110        SIUL2.GPDI[110].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI111        SIUL2.GPDI[111].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI112        SIUL2.GPDI[112].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI113        SIUL2.GPDI[113].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI114        SIUL2.GPDI[114].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI115        SIUL2.GPDI[115].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI116        SIUL2.GPDI[116].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI117        SIUL2.GPDI[117].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI118        SIUL2.GPDI[118].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI119        SIUL2.GPDI[119].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI120        SIUL2.GPDI[120].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI121        SIUL2.GPDI[121].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI122        SIUL2.GPDI[122].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI123        SIUL2.GPDI[123].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI124        SIUL2.GPDI[124].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI125        SIUL2.GPDI[125].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI126        SIUL2.GPDI[126].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI127        SIUL2.GPDI[127].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI128        SIUL2.GPDI[128].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI129        SIUL2.GPDI[129].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI130        SIUL2.GPDI[130].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI131        SIUL2.GPDI[131].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI132        SIUL2.GPDI[132].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI133        SIUL2.GPDI[133].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI134        SIUL2.GPDI[134].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI135        SIUL2.GPDI[135].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI136        SIUL2.GPDI[136].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI137        SIUL2.GPDI[137].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI138        SIUL2.GPDI[138].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI139        SIUL2.GPDI[139].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI140        SIUL2.GPDI[130].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI141        SIUL2.GPDI[141].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI142        SIUL2.GPDI[142].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI143        SIUL2.GPDI[143].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI144        SIUL2.GPDI[144].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI145        SIUL2.GPDI[145].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI146        SIUL2.GPDI[146].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI147        SIUL2.GPDI[147].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI148        SIUL2.GPDI[148].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI149        SIUL2.GPDI[149].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI150        SIUL2.GPDI[150].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI151        SIUL2.GPDI[151].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI152        SIUL2.GPDI[152].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI153        SIUL2.GPDI[153].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI154        SIUL2.GPDI[154].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI155        SIUL2.GPDI[155].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI156        SIUL2.GPDI[156].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI157        SIUL2.GPDI[157].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI158        SIUL2.GPDI[158].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI159        SIUL2.GPDI[159].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI160        SIUL2.GPDI[160].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI161        SIUL2.GPDI[161].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI162        SIUL2.GPDI[162].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI163        SIUL2.GPDI[163].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI164        SIUL2.GPDI[164].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI165        SIUL2.GPDI[165].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI166        SIUL2.GPDI[166].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI167        SIUL2.GPDI[167].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI168        SIUL2.GPDI[168].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI169        SIUL2.GPDI[169].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI170        SIUL2.GPDI[170].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI171        SIUL2.GPDI[171].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI172        SIUL2.GPDI[172].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI173        SIUL2.GPDI[173].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI174        SIUL2.GPDI[174].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI175        SIUL2.GPDI[175].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI176        SIUL2.GPDI[176].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI177        SIUL2.GPDI[177].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI178        SIUL2.GPDI[178].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI179        SIUL2.GPDI[179].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI180        SIUL2.GPDI[180].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI181        SIUL2.GPDI[181].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI182        SIUL2.GPDI[182].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI183        SIUL2.GPDI[183].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI184        SIUL2.GPDI[184].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI185        SIUL2.GPDI[185].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI186        SIUL2.GPDI[186].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI187        SIUL2.GPDI[187].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI188        SIUL2.GPDI[188].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI189        SIUL2.GPDI[189].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI190        SIUL2.GPDI[190].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI191        SIUL2.GPDI[191].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI192        SIUL2.GPDI[192].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI193        SIUL2.GPDI[193].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI194        SIUL2.GPDI[194].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI195        SIUL2.GPDI[195].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI196        SIUL2.GPDI[196].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI197        SIUL2.GPDI[197].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI198        SIUL2.GPDI[198].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI199        SIUL2.GPDI[199].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI200        SIUL2.GPDI[200].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI201        SIUL2.GPDI[201].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI202        SIUL2.GPDI[202].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI203        SIUL2.GPDI[203].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI204        SIUL2.GPDI[204].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI205        SIUL2.GPDI[205].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI206        SIUL2.GPDI[206].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI207        SIUL2.GPDI[207].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI208        SIUL2.GPDI[208].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI209        SIUL2.GPDI[209].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI210        SIUL2.GPDI[210].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI211        SIUL2.GPDI[211].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI212        SIUL2.GPDI[212].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI213        SIUL2.GPDI[213].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI214        SIUL2.GPDI[214].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI215        SIUL2.GPDI[215].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI216        SIUL2.GPDI[216].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI217        SIUL2.GPDI[217].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI218        SIUL2.GPDI[218].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI219        SIUL2.GPDI[219].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI220        SIUL2.GPDI[220].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI221        SIUL2.GPDI[221].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI222        SIUL2.GPDI[222].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI223        SIUL2.GPDI[223].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI224        SIUL2.GPDI[224].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI225        SIUL2.GPDI[225].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI226        SIUL2.GPDI[226].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI227        SIUL2.GPDI[227].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI228        SIUL2.GPDI[228].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI229        SIUL2.GPDI[229].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI230        SIUL2.GPDI[230].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI231        SIUL2.GPDI[231].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI232        SIUL2.GPDI[232].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI233        SIUL2.GPDI[233].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI234        SIUL2.GPDI[234].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI235        SIUL2.GPDI[235].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI236        SIUL2.GPDI[236].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI237        SIUL2.GPDI[237].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI238        SIUL2.GPDI[238].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI239        SIUL2.GPDI[239].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI240        SIUL2.GPDI[230].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI241        SIUL2.GPDI[241].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI242        SIUL2.GPDI[242].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI243        SIUL2.GPDI[243].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI244        SIUL2.GPDI[244].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI245        SIUL2.GPDI[245].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI246        SIUL2.GPDI[246].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI247        SIUL2.GPDI[247].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI248        SIUL2.GPDI[248].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI249        SIUL2.GPDI[249].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI250        SIUL2.GPDI[250].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI251        SIUL2.GPDI[251].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI252        SIUL2.GPDI[252].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI253        SIUL2.GPDI[253].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI254        SIUL2.GPDI[254].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI255        SIUL2.GPDI[255].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI256        SIUL2.GPDI[256].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI257        SIUL2.GPDI[257].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI258        SIUL2.GPDI[258].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI259        SIUL2.GPDI[259].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI260        SIUL2.GPDI[260].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI261        SIUL2.GPDI[261].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI262        SIUL2.GPDI[262].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_GPDI263        SIUL2.GPDI[263].R             /* SIUL2 GPIO Pad Data Input Register */
#define SIUL2_PGPDO0         SIUL2.PGPDO[0].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO1         SIUL2.PGPDO[1].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO2         SIUL2.PGPDO[2].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO3         SIUL2.PGPDO[3].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO4         SIUL2.PGPDO[4].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO5         SIUL2.PGPDO[5].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO6         SIUL2.PGPDO[6].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO7         SIUL2.PGPDO[7].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO8         SIUL2.PGPDO[8].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO9         SIUL2.PGPDO[9].R              /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO10        SIUL2.PGPDO[10].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO11        SIUL2.PGPDO[11].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO12        SIUL2.PGPDO[12].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO13        SIUL2.PGPDO[13].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO14        SIUL2.PGPDO[14].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO15        SIUL2.PGPDO[15].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO16        SIUL2.PGPDO[16].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO17        SIUL2.PGPDO[17].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO18        SIUL2.PGPDO[18].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO19        SIUL2.PGPDO[19].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO20        SIUL2.PGPDO[20].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO21        SIUL2.PGPDO[21].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO22        SIUL2.PGPDO[22].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO23        SIUL2.PGPDO[23].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO24        SIUL2.PGPDO[24].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO25        SIUL2.PGPDO[25].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO26        SIUL2.PGPDO[26].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO27        SIUL2.PGPDO[27].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO28        SIUL2.PGPDO[28].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO29        SIUL2.PGPDO[29].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO30        SIUL2.PGPDO[30].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDO31        SIUL2.PGPDO[31].R             /* SIUL2 Parallel GPIO Pad Data Out Register */
#define SIUL2_PGPDI0         SIUL2.PGPDI[0].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI1         SIUL2.PGPDI[1].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI2         SIUL2.PGPDI[2].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI3         SIUL2.PGPDI[3].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI4         SIUL2.PGPDI[4].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI5         SIUL2.PGPDI[5].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI6         SIUL2.PGPDI[6].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI7         SIUL2.PGPDI[7].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI8         SIUL2.PGPDI[8].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI9         SIUL2.PGPDI[9].R              /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI10        SIUL2.PGPDI[10].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI11        SIUL2.PGPDI[11].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI12        SIUL2.PGPDI[12].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI13        SIUL2.PGPDI[13].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI14        SIUL2.PGPDI[14].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI15        SIUL2.PGPDI[15].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI16        SIUL2.PGPDI[16].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI17        SIUL2.PGPDI[17].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI18        SIUL2.PGPDI[18].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI19        SIUL2.PGPDI[19].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI20        SIUL2.PGPDI[20].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI21        SIUL2.PGPDI[21].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI22        SIUL2.PGPDI[22].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI23        SIUL2.PGPDI[23].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI24        SIUL2.PGPDI[24].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI25        SIUL2.PGPDI[25].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI26        SIUL2.PGPDI[26].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI27        SIUL2.PGPDI[27].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI28        SIUL2.PGPDI[28].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI29        SIUL2.PGPDI[29].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI30        SIUL2.PGPDI[30].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_PGPDI31        SIUL2.PGPDI[31].R             /* SIUL2 Parallel GPIO Pad Data In Register */
#define SIUL2_MPGPDO0        SIUL2.MPGPDO[0].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO1        SIUL2.MPGPDO[1].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO2        SIUL2.MPGPDO[2].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO3        SIUL2.MPGPDO[3].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO4        SIUL2.MPGPDO[4].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO5        SIUL2.MPGPDO[5].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO6        SIUL2.MPGPDO[6].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO7        SIUL2.MPGPDO[7].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO8        SIUL2.MPGPDO[8].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO9        SIUL2.MPGPDO[9].R             /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO10       SIUL2.MPGPDO[10].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO11       SIUL2.MPGPDO[11].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO12       SIUL2.MPGPDO[12].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO13       SIUL2.MPGPDO[13].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO14       SIUL2.MPGPDO[14].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO15       SIUL2.MPGPDO[15].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO16       SIUL2.MPGPDO[16].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO17       SIUL2.MPGPDO[17].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO18       SIUL2.MPGPDO[18].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO19       SIUL2.MPGPDO[19].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO20       SIUL2.MPGPDO[20].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO21       SIUL2.MPGPDO[21].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO22       SIUL2.MPGPDO[22].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO23       SIUL2.MPGPDO[23].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO24       SIUL2.MPGPDO[24].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO25       SIUL2.MPGPDO[25].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO26       SIUL2.MPGPDO[26].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO27       SIUL2.MPGPDO[27].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO28       SIUL2.MPGPDO[28].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO29       SIUL2.MPGPDO[29].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO30       SIUL2.MPGPDO[30].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
#define SIUL2_MPGPDO31       SIUL2.MPGPDO[31].R            /* SIUL2 Masked Parallel GPIO Pad Data Out Register */

/* SMPU */
#define SMPU_0_CES0          SMPU_0.CES0.R                 /* Control/Error Status Register 0 */
#define SMPU_0_CES1          SMPU_0.CES1.R                 /* Control/Error Status Register 1 */
#define SMPU_0_ERR_ADR0      SMPU_0.ERROR[0].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL0     SMPU_0.ERROR[0].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL0     SMPU_0.ERROR[0].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR1      SMPU_0.ERROR[1].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL1     SMPU_0.ERROR[1].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL1     SMPU_0.ERROR[1].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR2      SMPU_0.ERROR[2].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL2     SMPU_0.ERROR[2].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL2     SMPU_0.ERROR[2].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR3      SMPU_0.ERROR[3].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL3     SMPU_0.ERROR[3].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL3     SMPU_0.ERROR[3].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR4      SMPU_0.ERROR[4].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL4     SMPU_0.ERROR[4].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL4     SMPU_0.ERROR[4].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR5      SMPU_0.ERROR[5].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL5     SMPU_0.ERROR[5].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL5     SMPU_0.ERROR[5].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR6      SMPU_0.ERROR[6].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL6     SMPU_0.ERROR[6].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL6     SMPU_0.ERROR[6].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR7      SMPU_0.ERROR[7].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL7     SMPU_0.ERROR[7].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL7     SMPU_0.ERROR[7].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR8      SMPU_0.ERROR[8].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL8     SMPU_0.ERROR[8].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL8     SMPU_0.ERROR[8].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR9      SMPU_0.ERROR[9].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL9     SMPU_0.ERROR[9].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL9     SMPU_0.ERROR[9].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR10     SMPU_0.ERROR[10].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL10    SMPU_0.ERROR[10].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL10    SMPU_0.ERROR[10].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR11     SMPU_0.ERROR[11].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL11    SMPU_0.ERROR[11].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL11    SMPU_0.ERROR[11].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR12     SMPU_0.ERROR[12].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL12    SMPU_0.ERROR[12].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL12    SMPU_0.ERROR[12].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR13     SMPU_0.ERROR[13].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL13    SMPU_0.ERROR[13].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL13    SMPU_0.ERROR[13].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR14     SMPU_0.ERROR[14].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL14    SMPU_0.ERROR[14].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL14    SMPU_0.ERROR[14].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_ERR_ADR15     SMPU_0.ERROR[15].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_0_ERR_ADTL15    SMPU_0.ERROR[15].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_0_ERR_ACDL15    SMPU_0.ERROR[15].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_0_RGD0_WRD0     SMPU_0.RGD[0].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD0_WRD1     SMPU_0.RGD[0].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_0W2_F0     SMPU_0.RGD[0].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_0W2_F1     SMPU_0.RGD[0].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD0_WRD3     SMPU_0.RGD[0].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD0_WRD4     SMPU_0.RGD[0].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD0_WRD5     SMPU_0.RGD[0].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD1_WRD0     SMPU_0.RGD[1].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD1_WRD1     SMPU_0.RGD[1].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_1W2_F0     SMPU_0.RGD[1].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_1W2_F1     SMPU_0.RGD[1].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD1_WRD3     SMPU_0.RGD[1].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD1_WRD4     SMPU_0.RGD[1].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD1_WRD5     SMPU_0.RGD[1].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD2_WRD0     SMPU_0.RGD[2].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD2_WRD1     SMPU_0.RGD[2].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_2W2_F0     SMPU_0.RGD[2].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_2W2_F1     SMPU_0.RGD[2].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD2_WRD3     SMPU_0.RGD[2].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD2_WRD4     SMPU_0.RGD[2].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD2_WRD5     SMPU_0.RGD[2].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD3_WRD0     SMPU_0.RGD[3].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD3_WRD1     SMPU_0.RGD[3].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_3W2_F0     SMPU_0.RGD[3].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_3W2_F1     SMPU_0.RGD[3].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD3_WRD3     SMPU_0.RGD[3].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD3_WRD4     SMPU_0.RGD[3].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD3_WRD5     SMPU_0.RGD[3].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD4_WRD0     SMPU_0.RGD[4].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD4_WRD1     SMPU_0.RGD[4].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_4W2_F0     SMPU_0.RGD[4].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_4W2_F1     SMPU_0.RGD[4].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD4_WRD3     SMPU_0.RGD[4].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD4_WRD4     SMPU_0.RGD[4].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD4_WRD5     SMPU_0.RGD[4].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD5_WRD0     SMPU_0.RGD[5].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD5_WRD1     SMPU_0.RGD[5].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_5W2_F0     SMPU_0.RGD[5].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_5W2_F1     SMPU_0.RGD[5].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD5_WRD3     SMPU_0.RGD[5].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD5_WRD4     SMPU_0.RGD[5].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD5_WRD5     SMPU_0.RGD[5].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD6_WRD0     SMPU_0.RGD[6].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD6_WRD1     SMPU_0.RGD[6].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_6W2_F0     SMPU_0.RGD[6].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_6W2_F1     SMPU_0.RGD[6].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD6_WRD3     SMPU_0.RGD[6].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD6_WRD4     SMPU_0.RGD[6].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD6_WRD5     SMPU_0.RGD[6].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD7_WRD0     SMPU_0.RGD[7].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD7_WRD1     SMPU_0.RGD[7].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_7W2_F0     SMPU_0.RGD[7].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_7W2_F1     SMPU_0.RGD[7].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD7_WRD3     SMPU_0.RGD[7].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD7_WRD4     SMPU_0.RGD[7].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD7_WRD5     SMPU_0.RGD[7].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD8_WRD0     SMPU_0.RGD[8].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD8_WRD1     SMPU_0.RGD[8].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_8W2_F0     SMPU_0.RGD[8].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_8W2_F1     SMPU_0.RGD[8].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD8_WRD3     SMPU_0.RGD[8].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD8_WRD4     SMPU_0.RGD[8].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD8_WRD5     SMPU_0.RGD[8].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD9_WRD0     SMPU_0.RGD[9].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD9_WRD1     SMPU_0.RGD[9].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_9W2_F0     SMPU_0.RGD[9].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_9W2_F1     SMPU_0.RGD[9].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD9_WRD3     SMPU_0.RGD[9].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD9_WRD4     SMPU_0.RGD[9].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD9_WRD5     SMPU_0.RGD[9].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD10_WRD0    SMPU_0.RGD[10].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD10_WRD1    SMPU_0.RGD[10].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_10W2_F0    SMPU_0.RGD[10].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_10W2_F1    SMPU_0.RGD[10].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD10_WRD3    SMPU_0.RGD[10].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD10_WRD4    SMPU_0.RGD[10].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD10_WRD5    SMPU_0.RGD[10].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD11_WRD0    SMPU_0.RGD[11].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD11_WRD1    SMPU_0.RGD[11].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_11W2_F0    SMPU_0.RGD[11].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_11W2_F1    SMPU_0.RGD[11].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD11_WRD3    SMPU_0.RGD[11].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD11_WRD4    SMPU_0.RGD[11].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD11_WRD5    SMPU_0.RGD[11].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD12_WRD0    SMPU_0.RGD[12].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD12_WRD1    SMPU_0.RGD[12].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_12W2_F0    SMPU_0.RGD[12].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_12W2_F1    SMPU_0.RGD[12].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD12_WRD3    SMPU_0.RGD[12].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD12_WRD4    SMPU_0.RGD[12].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD12_WRD5    SMPU_0.RGD[12].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD13_WRD0    SMPU_0.RGD[13].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD13_WRD1    SMPU_0.RGD[13].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_13W2_F0    SMPU_0.RGD[13].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_13W2_F1    SMPU_0.RGD[13].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD13_WRD3    SMPU_0.RGD[13].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD13_WRD4    SMPU_0.RGD[13].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD13_WRD5    SMPU_0.RGD[13].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD14_WRD0    SMPU_0.RGD[14].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD14_WRD1    SMPU_0.RGD[14].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_14W2_F0    SMPU_0.RGD[14].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_14W2_F1    SMPU_0.RGD[14].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD14_WRD3    SMPU_0.RGD[14].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD14_WRD4    SMPU_0.RGD[14].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD14_WRD5    SMPU_0.RGD[14].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_0_RGD15_WRD0    SMPU_0.RGD[15].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_0_RGD15_WRD1    SMPU_0.RGD[15].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_0_RD_15W2_F0    SMPU_0.RGD[15].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_0_RD_15W2_F1    SMPU_0.RGD[15].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_0_RGD15_WRD3    SMPU_0.RGD[15].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_0_RGD15_WRD4    SMPU_0.RGD[15].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_0_RGD15_WRD5    SMPU_0.RGD[15].WORD5.R        /* Region Descriptor n, Word 5 */

/* SMPU */
#define SMPU_1_CES0          SMPU_1.CES0.R                 /* Control/Error Status Register 0 */
#define SMPU_1_CES1          SMPU_1.CES1.R                 /* Control/Error Status Register 1 */
#define SMPU_1_ERR_ADR0      SMPU_1.ERROR[0].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL0     SMPU_1.ERROR[0].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL0     SMPU_1.ERROR[0].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR1      SMPU_1.ERROR[1].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL1     SMPU_1.ERROR[1].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL1     SMPU_1.ERROR[1].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR2      SMPU_1.ERROR[2].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL2     SMPU_1.ERROR[2].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL2     SMPU_1.ERROR[2].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR3      SMPU_1.ERROR[3].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL3     SMPU_1.ERROR[3].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL3     SMPU_1.ERROR[3].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR4      SMPU_1.ERROR[4].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL4     SMPU_1.ERROR[4].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL4     SMPU_1.ERROR[4].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR5      SMPU_1.ERROR[5].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL5     SMPU_1.ERROR[5].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL5     SMPU_1.ERROR[5].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR6      SMPU_1.ERROR[6].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL6     SMPU_1.ERROR[6].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL6     SMPU_1.ERROR[6].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR7      SMPU_1.ERROR[7].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL7     SMPU_1.ERROR[7].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL7     SMPU_1.ERROR[7].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR8      SMPU_1.ERROR[8].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL8     SMPU_1.ERROR[8].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL8     SMPU_1.ERROR[8].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR9      SMPU_1.ERROR[9].ADR.R         /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL9     SMPU_1.ERROR[9].ADTL.R        /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL9     SMPU_1.ERROR[9].ACDL.R        /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR10     SMPU_1.ERROR[10].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL10    SMPU_1.ERROR[10].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL10    SMPU_1.ERROR[10].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR11     SMPU_1.ERROR[11].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL11    SMPU_1.ERROR[11].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL11    SMPU_1.ERROR[11].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR12     SMPU_1.ERROR[12].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL12    SMPU_1.ERROR[12].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL12    SMPU_1.ERROR[12].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR13     SMPU_1.ERROR[13].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL13    SMPU_1.ERROR[13].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL13    SMPU_1.ERROR[13].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR14     SMPU_1.ERROR[14].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL14    SMPU_1.ERROR[14].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL14    SMPU_1.ERROR[14].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_ERR_ADR15     SMPU_1.ERROR[15].ADR.R        /* Error Address Register, Bus Master */
#define SMPU_1_ERR_ADTL15    SMPU_1.ERROR[15].ADTL.R       /* Error Attribute Detail Register, Bus Master */
#define SMPU_1_ERR_ACDL15    SMPU_1.ERROR[15].ACDL.R       /* Error Attribute Control Detail Register, Bus Master */
#define SMPU_1_RGD0_WRD0     SMPU_1.RGD[0].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD0_WRD1     SMPU_1.RGD[0].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_0W2_F0     SMPU_1.RGD[0].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_0W2_F1     SMPU_1.RGD[0].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD0_WRD3     SMPU_1.RGD[0].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD0_WRD4     SMPU_1.RGD[0].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD0_WRD5     SMPU_1.RGD[0].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD1_WRD0     SMPU_1.RGD[1].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD1_WRD1     SMPU_1.RGD[1].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_1W2_F0     SMPU_1.RGD[1].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_1W2_F1     SMPU_1.RGD[1].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD1_WRD3     SMPU_1.RGD[1].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD1_WRD4     SMPU_1.RGD[1].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD1_WRD5     SMPU_1.RGD[1].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD2_WRD0     SMPU_1.RGD[2].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD2_WRD1     SMPU_1.RGD[2].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_2W2_F0     SMPU_1.RGD[2].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_2W2_F1     SMPU_1.RGD[2].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD2_WRD3     SMPU_1.RGD[2].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD2_WRD4     SMPU_1.RGD[2].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD2_WRD5     SMPU_1.RGD[2].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD3_WRD0     SMPU_1.RGD[3].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD3_WRD1     SMPU_1.RGD[3].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_3W2_F0     SMPU_1.RGD[3].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_3W2_F1     SMPU_1.RGD[3].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD3_WRD3     SMPU_1.RGD[3].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD3_WRD4     SMPU_1.RGD[3].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD3_WRD5     SMPU_1.RGD[3].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD4_WRD0     SMPU_1.RGD[4].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD4_WRD1     SMPU_1.RGD[4].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_4W2_F0     SMPU_1.RGD[4].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_4W2_F1     SMPU_1.RGD[4].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD4_WRD3     SMPU_1.RGD[4].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD4_WRD4     SMPU_1.RGD[4].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD4_WRD5     SMPU_1.RGD[4].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD5_WRD0     SMPU_1.RGD[5].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD5_WRD1     SMPU_1.RGD[5].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_5W2_F0     SMPU_1.RGD[5].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_5W2_F1     SMPU_1.RGD[5].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD5_WRD3     SMPU_1.RGD[5].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD5_WRD4     SMPU_1.RGD[5].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD5_WRD5     SMPU_1.RGD[5].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD6_WRD0     SMPU_1.RGD[6].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD6_WRD1     SMPU_1.RGD[6].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_6W2_F0     SMPU_1.RGD[6].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_6W2_F1     SMPU_1.RGD[6].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD6_WRD3     SMPU_1.RGD[6].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD6_WRD4     SMPU_1.RGD[6].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD6_WRD5     SMPU_1.RGD[6].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD7_WRD0     SMPU_1.RGD[7].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD7_WRD1     SMPU_1.RGD[7].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_7W2_F0     SMPU_1.RGD[7].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_7W2_F1     SMPU_1.RGD[7].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD7_WRD3     SMPU_1.RGD[7].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD7_WRD4     SMPU_1.RGD[7].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD7_WRD5     SMPU_1.RGD[7].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD8_WRD0     SMPU_1.RGD[8].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD8_WRD1     SMPU_1.RGD[8].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_8W2_F0     SMPU_1.RGD[8].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_8W2_F1     SMPU_1.RGD[8].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD8_WRD3     SMPU_1.RGD[8].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD8_WRD4     SMPU_1.RGD[8].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD8_WRD5     SMPU_1.RGD[8].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD9_WRD0     SMPU_1.RGD[9].WORD0.R         /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD9_WRD1     SMPU_1.RGD[9].WORD1.R         /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_9W2_F0     SMPU_1.RGD[9].WORD2.FMT0.R    /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_9W2_F1     SMPU_1.RGD[9].WORD2.FMT1.R    /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD9_WRD3     SMPU_1.RGD[9].WORD3.R         /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD9_WRD4     SMPU_1.RGD[9].WORD4.R         /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD9_WRD5     SMPU_1.RGD[9].WORD5.R         /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD10_WRD0    SMPU_1.RGD[10].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD10_WRD1    SMPU_1.RGD[10].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_10W2_F0    SMPU_1.RGD[10].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_10W2_F1    SMPU_1.RGD[10].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD10_WRD3    SMPU_1.RGD[10].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD10_WRD4    SMPU_1.RGD[10].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD10_WRD5    SMPU_1.RGD[10].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD11_WRD0    SMPU_1.RGD[11].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD11_WRD1    SMPU_1.RGD[11].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_11W2_F0    SMPU_1.RGD[11].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_11W2_F1    SMPU_1.RGD[11].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD11_WRD3    SMPU_1.RGD[11].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD11_WRD4    SMPU_1.RGD[11].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD11_WRD5    SMPU_1.RGD[11].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD12_WRD0    SMPU_1.RGD[12].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD12_WRD1    SMPU_1.RGD[12].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_12W2_F0    SMPU_1.RGD[12].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_12W2_F1    SMPU_1.RGD[12].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD12_WRD3    SMPU_1.RGD[12].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD12_WRD4    SMPU_1.RGD[12].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD12_WRD5    SMPU_1.RGD[12].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD13_WRD0    SMPU_1.RGD[13].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD13_WRD1    SMPU_1.RGD[13].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_13W2_F0    SMPU_1.RGD[13].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_13W2_F1    SMPU_1.RGD[13].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD13_WRD3    SMPU_1.RGD[13].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD13_WRD4    SMPU_1.RGD[13].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD13_WRD5    SMPU_1.RGD[13].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD14_WRD0    SMPU_1.RGD[14].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD14_WRD1    SMPU_1.RGD[14].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_14W2_F0    SMPU_1.RGD[14].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_14W2_F1    SMPU_1.RGD[14].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD14_WRD3    SMPU_1.RGD[14].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD14_WRD4    SMPU_1.RGD[14].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD14_WRD5    SMPU_1.RGD[14].WORD5.R        /* Region Descriptor n, Word 5 */
#define SMPU_1_RGD15_WRD0    SMPU_1.RGD[15].WORD0.R        /* Region Descriptor n, Word 0 */
#define SMPU_1_RGD15_WRD1    SMPU_1.RGD[15].WORD1.R        /* Region Descriptor n, Word 1 */
#define SMPU_1_RD_15W2_F0    SMPU_1.RGD[15].WORD2.FMT0.R   /* Region Descriptor n, Word 2 Format 0 */
#define SMPU_1_RD_15W2_F1    SMPU_1.RGD[15].WORD2.FMT1.R   /* Region Descriptor n, Word 2 Format 1 */
#define SMPU_1_RGD15_WRD3    SMPU_1.RGD[15].WORD3.R        /* Region Descriptor n, Word 3 */
#define SMPU_1_RGD15_WRD4    SMPU_1.RGD[15].WORD4.R        /* Region Descriptor n, Word 4 */
#define SMPU_1_RGD15_WRD5    SMPU_1.RGD[15].WORD5.R        /* Region Descriptor n, Word 5 */

/* SPI */
#define SPI_0_MCR            SPI_0.MCR.R                   /* Module Configuration Register */
#define SPI_0_TCR            SPI_0.TCR.R                   /* Transfer Count Register */
#define SPI_0_CTAR0          SPI_0.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR1          SPI_0.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR2          SPI_0.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR3          SPI_0.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR4          SPI_0.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR5          SPI_0.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_0_CTAR0_SLAVE    SPI_0.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_0_CTAR1_SLAVE    SPI_0.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_0_SR             SPI_0.SR.R                    /* Status Register */
#define SPI_0_RSER           SPI_0.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_0_PUSHR          SPI_0.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_0_PUSHR_SLAVE    SPI_0.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_0_POPR           SPI_0.POPR.R                  /* POP RX FIFO Register */
#define SPI_0_TXFR0          SPI_0.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_0_TXFR1          SPI_0.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_0_TXFR2          SPI_0.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_0_TXFR3          SPI_0.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_0_RXFR0          SPI_0.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_0_RXFR1          SPI_0.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_0_RXFR2          SPI_0.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_0_RXFR3          SPI_0.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_0_CTARE0         SPI_0.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_CTARE1         SPI_0.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_CTARE2         SPI_0.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_CTARE3         SPI_0.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_CTARE4         SPI_0.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_CTARE5         SPI_0.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_0_SREX           SPI_0.SREX.R                  /* Status Register Extended */
#define SPI_0_TRIG           SPI_0.TRIG.R                  /* Trigger Register */

/* SPI */
#define SPI_1_MCR            SPI_1.MCR.R                   /* Module Configuration Register */
#define SPI_1_TCR            SPI_1.TCR.R                   /* Transfer Count Register */
#define SPI_1_CTAR0          SPI_1.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR1          SPI_1.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR2          SPI_1.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR3          SPI_1.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR4          SPI_1.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR5          SPI_1.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_1_CTAR0_SLAVE    SPI_1.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_1_CTAR1_SLAVE    SPI_1.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_1_SR             SPI_1.SR.R                    /* Status Register */
#define SPI_1_RSER           SPI_1.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_1_PUSHR          SPI_1.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_1_PUSHR_SLAVE    SPI_1.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_1_POPR           SPI_1.POPR.R                  /* POP RX FIFO Register */
#define SPI_1_TXFR0          SPI_1.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_1_TXFR1          SPI_1.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_1_TXFR2          SPI_1.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_1_TXFR3          SPI_1.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_1_RXFR0          SPI_1.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_1_RXFR1          SPI_1.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_1_RXFR2          SPI_1.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_1_RXFR3          SPI_1.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_1_CTARE0         SPI_1.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_CTARE1         SPI_1.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_CTARE2         SPI_1.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_CTARE3         SPI_1.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_CTARE4         SPI_1.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_CTARE5         SPI_1.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_1_SREX           SPI_1.SREX.R                  /* Status Register Extended */
#define SPI_1_TRIG           SPI_1.TRIG.R                  /* Trigger Register */

/* SPI */
#define SPI_2_MCR            SPI_2.MCR.R                   /* Module Configuration Register */
#define SPI_2_TCR            SPI_2.TCR.R                   /* Transfer Count Register */
#define SPI_2_CTAR0          SPI_2.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR1          SPI_2.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR2          SPI_2.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR3          SPI_2.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR4          SPI_2.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR5          SPI_2.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_2_CTAR0_SLAVE    SPI_2.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_2_CTAR1_SLAVE    SPI_2.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_2_SR             SPI_2.SR.R                    /* Status Register */
#define SPI_2_RSER           SPI_2.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_2_PUSHR          SPI_2.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_2_PUSHR_SLAVE    SPI_2.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_2_POPR           SPI_2.POPR.R                  /* POP RX FIFO Register */
#define SPI_2_TXFR0          SPI_2.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_2_TXFR1          SPI_2.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_2_TXFR2          SPI_2.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_2_TXFR3          SPI_2.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_2_RXFR0          SPI_2.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_2_RXFR1          SPI_2.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_2_RXFR2          SPI_2.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_2_RXFR3          SPI_2.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_2_CTARE0         SPI_2.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_CTARE1         SPI_2.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_CTARE2         SPI_2.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_CTARE3         SPI_2.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_CTARE4         SPI_2.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_CTARE5         SPI_2.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_2_SREX           SPI_2.SREX.R                  /* Status Register Extended */
#define SPI_2_TRIG           SPI_2.TRIG.R                  /* Trigger Register */

/* SPI */
#define SPI_3_MCR            SPI_3.MCR.R                   /* Module Configuration Register */
#define SPI_3_TCR            SPI_3.TCR.R                   /* Transfer Count Register */
#define SPI_3_CTAR0          SPI_3.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR1          SPI_3.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR2          SPI_3.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR3          SPI_3.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR4          SPI_3.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR5          SPI_3.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_3_CTAR0_SLAVE    SPI_3.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_3_CTAR1_SLAVE    SPI_3.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_3_SR             SPI_3.SR.R                    /* Status Register */
#define SPI_3_RSER           SPI_3.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_3_PUSHR          SPI_3.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_3_PUSHR_SLAVE    SPI_3.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_3_POPR           SPI_3.POPR.R                  /* POP RX FIFO Register */
#define SPI_3_TXFR0          SPI_3.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_3_TXFR1          SPI_3.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_3_TXFR2          SPI_3.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_3_TXFR3          SPI_3.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_3_RXFR0          SPI_3.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_3_RXFR1          SPI_3.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_3_RXFR2          SPI_3.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_3_RXFR3          SPI_3.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_3_CTARE0         SPI_3.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_CTARE1         SPI_3.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_CTARE2         SPI_3.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_CTARE3         SPI_3.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_CTARE4         SPI_3.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_CTARE5         SPI_3.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_3_SREX           SPI_3.SREX.R                  /* Status Register Extended */
#define SPI_3_TRIG           SPI_3.TRIG.R                  /* Trigger Register */

/* SPI */
#define SPI_4_MCR            SPI_4.MCR.R                   /* Module Configuration Register */
#define SPI_4_TCR            SPI_4.TCR.R                   /* Transfer Count Register */
#define SPI_4_CTAR0          SPI_4.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR1          SPI_4.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR2          SPI_4.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR3          SPI_4.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR4          SPI_4.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR5          SPI_4.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_4_CTAR0_SLAVE    SPI_4.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_4_CTAR1_SLAVE    SPI_4.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_4_SR             SPI_4.SR.R                    /* Status Register */
#define SPI_4_RSER           SPI_4.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_4_PUSHR          SPI_4.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_4_PUSHR_SLAVE    SPI_4.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_4_POPR           SPI_4.POPR.R                  /* POP RX FIFO Register */
#define SPI_4_TXFR0          SPI_4.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_4_TXFR1          SPI_4.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_4_TXFR2          SPI_4.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_4_TXFR3          SPI_4.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_4_RXFR0          SPI_4.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_4_RXFR1          SPI_4.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_4_RXFR2          SPI_4.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_4_RXFR3          SPI_4.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_4_CTARE0         SPI_4.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_CTARE1         SPI_4.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_CTARE2         SPI_4.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_CTARE3         SPI_4.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_CTARE4         SPI_4.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_CTARE5         SPI_4.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_4_SREX           SPI_4.SREX.R                  /* Status Register Extended */
#define SPI_4_TRIG           SPI_4.TRIG.R                  /* Trigger Register */

/* SPI */
#define SPI_5_MCR            SPI_5.MCR.R                   /* Module Configuration Register */
#define SPI_5_TCR            SPI_5.TCR.R                   /* Transfer Count Register */
#define SPI_5_CTAR0          SPI_5.MODE.CTAR[0].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR1          SPI_5.MODE.CTAR[1].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR2          SPI_5.MODE.CTAR[2].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR3          SPI_5.MODE.CTAR[3].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR4          SPI_5.MODE.CTAR[4].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR5          SPI_5.MODE.CTAR[5].R          /* Clock and Transfer Attributes Register (In Master Mode) */
#define SPI_5_CTAR0_SLAVE    SPI_5.MODE.CTAR_SLAVE[0].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_5_CTAR1_SLAVE    SPI_5.MODE.CTAR_SLAVE[1].R    /* Clock and Transfer Attributes Register (In Slave Mode) */
#define SPI_5_SR             SPI_5.SR.R                    /* Status Register */
#define SPI_5_RSER           SPI_5.RSER.R                  /* DMA/Interrupt Request Select and Enable Register */
#define SPI_5_PUSHR          SPI_5.PUSHR.PUSHR.R           /* PUSH TX FIFO Register In Master Mode */
#define SPI_5_PUSHR_SLAVE    SPI_5.PUSHR.PUSHR_SLAVE.R     /* PUSH TX FIFO Register In Slave Mode */
#define SPI_5_POPR           SPI_5.POPR.R                  /* POP RX FIFO Register */
#define SPI_5_TXFR0          SPI_5.TXFR[0].R               /* Transmit FIFO Registers */
#define SPI_5_TXFR1          SPI_5.TXFR[1].R               /* Transmit FIFO Registers */
#define SPI_5_TXFR2          SPI_5.TXFR[2].R               /* Transmit FIFO Registers */
#define SPI_5_TXFR3          SPI_5.TXFR[3].R               /* Transmit FIFO Registers */
#define SPI_5_RXFR0          SPI_5.RXFR[0].R               /* Receive FIFO Registers */
#define SPI_5_RXFR1          SPI_5.RXFR[1].R               /* Receive FIFO Registers */
#define SPI_5_RXFR2          SPI_5.RXFR[2].R               /* Receive FIFO Registers */
#define SPI_5_RXFR3          SPI_5.RXFR[3].R               /* Receive FIFO Registers */
#define SPI_5_CTARE0         SPI_5.CTARE[0].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_CTARE1         SPI_5.CTARE[1].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_CTARE2         SPI_5.CTARE[2].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_CTARE3         SPI_5.CTARE[3].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_CTARE4         SPI_5.CTARE[4].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_CTARE5         SPI_5.CTARE[5].R              /* Clock and Transfer Attributes Register Extended */
#define SPI_5_SREX           SPI_5.SREX.R                  /* Status Register Extended */
#define SPI_5_TRIG           SPI_5.TRIG.R                  /* Trigger Register */

/* SSCM */
#define SSCM_STATUS          SSCM.STATUS.R                 /* SSCM System Status */
#define SSCM_MEMCONFIG       SSCM.MEMCONFIG.R              /* SSCM System Memory and ID Register */
#define SSCM_DEBUGPORT       SSCM.DEBUGPORT.R              /* SSCM Debug Status Port Register */
#define SSCM_UOPS            SSCM.UOPS.R                   /* SSCM HSM and User Option Status Register */
#define SSCM_PSA             SSCM.PSA.R                    /* Processor Start Address Register */
#define SSCM_HSA             SSCM.HSA.R                    /* SSCM HSM Start Address Register */
#define SSCM_LCSTAT          SSCM.LCSTAT.R                 /* Life Cycle Status Register */

/* STCU2 */
#define STCU2_RUN            STCU2.RUN.R                   /* STCU2 Run Register */
#define STCU2_RUNSW          STCU2.RUNSW.R                 /* STCU2 Run Software Register */
#define STCU2_SKC            STCU2.SKC.R                   /* STCU2 SK Code Register */
#define STCU2_CFG            STCU2.CFG.R                   /* STCU2 Configuration Register */
#define STCU2_WDG            STCU2.WDG.R                   /* STCU2 Watchdog Register Granularity */
#define STCU2_INT_FLG        STCU2.INT_FLG.R               /* STCU2 Interrupt Flag Register */
#define STCU2_ERR_STAT       STCU2.ERR_STAT.R              /* STCU2 Error Register */
#define STCU2_ERR_FM         STCU2.ERR_FM.R                /* STCU2 Error FM Register */
#define STCU2_LBS            STCU2.LBS.R                   /* STCU2 Off-Line LBIST Status Register */
#define STCU2_LBE            STCU2.LBE.R                   /* STCU2 Off-Line LBIST End Flag Register */
#define STCU2_LBSSW          STCU2.LBSSW.R                 /* STCU2 On-Line LBIST Status Register */
#define STCU2_LBESW          STCU2.LBESW.R                 /* STCU2 On-Line LBIST End Flag Register */
#define STCU2_LBUFM          STCU2.LBUFM.R                 /* STCU2 LBIST Unrecoverable FM Register */
#define STCU2_MBSL           STCU2.MBSL.R                  /* STCU2 Off-Line MBIST Status Low Register */
#define STCU2_MBSM           STCU2.MBSM.R                  /* STCU2 Off-Line MBIST Status Medium Register */
#define STCU2_MBSH           STCU2.MBSH.R                  /* STCU2 Off-Line MBIST Status High Register */
#define STCU2_MBEL           STCU2.MBEL.R                  /* STCU2 Off-Line MBIST End Flag Low Register */
#define STCU2_MBEM           STCU2.MBEM.R                  /* STCU2 Off-Line MBIST End Flag Medium Register */
#define STCU2_MBEH           STCU2.MBEH.R                  /* STCU2 Off-Line MBIST End Flag High Register */
#define STCU2_MBSLSW         STCU2.MBSLSW.R                /* STCU2 On-Line MBIST Status Low Register */
#define STCU2_MBSMSW         STCU2.MBSMSW.R                /* STCU2 On-Line MBIST Status Medium Register */
#define STCU2_MBSHSW         STCU2.MBSHSW.R                /* STCU2 On-Line MBIST Status High Register */
#define STCU2_MBELSW         STCU2.MBELSW.R                /* STCU2 On-Line MBIST End Flag Low Register */
#define STCU2_MBEMSW         STCU2.MBEMSW.R                /* STCU2 On-Line MBIST End Flag Medium Register */
#define STCU2_MBEHSW         STCU2.MBEHSW.R                /* STCU2 On-Line MBIST End Flag High Register */
#define STCU2_MBUFML         STCU2.MBUFML.R                /* STCU2 MBIST Unrecoverable FM Low Register */
#define STCU2_MBUFMM         STCU2.MBUFMM.R                /* STCU2 MBIST Unrecoverable FM Medium Register */
#define STCU2_MBUFMH         STCU2.MBUFMH.R                /* STCU2 MBIST Unrecoverable FM High Register */
#define STCU2_LB_CTRL0       STCU2.LB[0].CTRL.R            /* STCU2 LBIST Control Register */
#define STCU2_LB_PCS0        STCU2.LB[0].PCS.R             /* STCU2 LBIST PC Stop Register */
#define STCU2_LB_PRPGL0      STCU2.LB[0].PRPGL.R           /* STCU2 LBIST PRPG Low Register */
#define STCU2_LB_PRPGH0      STCU2.LB[0].PRPGH.R           /* STCU2 LBIST PRPG High Register */
#define STCU2_LB_MISREL0     STCU2.LB[0].MISREL.R          /* STCU2 Off-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREH0     STCU2.LB[0].MISREH.R          /* STCU2 Off-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRL0     STCU2.LB[0].MISRRL.R          /* STCU2 Off-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRH0     STCU2.LB[0].MISRRH.R          /* STCU2 Off-Line LBIST MISR Read High Register */
#define STCU2_LB_MISRELSW0   STCU2.LB[0].MISRELSW.R        /* STCU2 On-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREHSW0   STCU2.LB[0].MISREHSW.R        /* STCU2 On-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRLSW0   STCU2.LB[0].MISRRLSW.R        /* STCU2 On-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRHSW0   STCU2.LB[0].MISRRHSW.R        /* STCU2 On-Line LBIST MISR Read High Register */
#define STCU2_LB_CTRL1       STCU2.LB[1].CTRL.R            /* STCU2 LBIST Control Register */
#define STCU2_LB_PCS1        STCU2.LB[1].PCS.R             /* STCU2 LBIST PC Stop Register */
#define STCU2_LB_PRPGL1      STCU2.LB[1].PRPGL.R           /* STCU2 LBIST PRPG Low Register */
#define STCU2_LB_PRPGH1      STCU2.LB[1].PRPGH.R           /* STCU2 LBIST PRPG High Register */
#define STCU2_LB_MISREL1     STCU2.LB[1].MISREL.R          /* STCU2 Off-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREH1     STCU2.LB[1].MISREH.R          /* STCU2 Off-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRL1     STCU2.LB[1].MISRRL.R          /* STCU2 Off-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRH1     STCU2.LB[1].MISRRH.R          /* STCU2 Off-Line LBIST MISR Read High Register */
#define STCU2_LB_MISRELSW1   STCU2.LB[1].MISRELSW.R        /* STCU2 On-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREHSW1   STCU2.LB[1].MISREHSW.R        /* STCU2 On-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRLSW1   STCU2.LB[1].MISRRLSW.R        /* STCU2 On-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRHSW1   STCU2.LB[1].MISRRHSW.R        /* STCU2 On-Line LBIST MISR Read High Register */
#define STCU2_LB_CTRL2       STCU2.LB[2].CTRL.R            /* STCU2 LBIST Control Register */
#define STCU2_LB_PCS2        STCU2.LB[2].PCS.R             /* STCU2 LBIST PC Stop Register */
#define STCU2_LB_PRPGL2      STCU2.LB[2].PRPGL.R           /* STCU2 LBIST PRPG Low Register */
#define STCU2_LB_PRPGH2      STCU2.LB[2].PRPGH.R           /* STCU2 LBIST PRPG High Register */
#define STCU2_LB_MISREL2     STCU2.LB[2].MISREL.R          /* STCU2 Off-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREH2     STCU2.LB[2].MISREH.R          /* STCU2 Off-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRL2     STCU2.LB[2].MISRRL.R          /* STCU2 Off-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRH2     STCU2.LB[2].MISRRH.R          /* STCU2 Off-Line LBIST MISR Read High Register */
#define STCU2_LB_MISRELSW2   STCU2.LB[2].MISRELSW.R        /* STCU2 On-Line LBIST MISR Expected Low Register */
#define STCU2_LB_MISREHSW2   STCU2.LB[2].MISREHSW.R        /* STCU2 On-Line LBIST MISR Expected High Register */
#define STCU2_LB_MISRRLSW2   STCU2.LB[2].MISRRLSW.R        /* STCU2 On-Line LBIST MISR Read Low Register */
#define STCU2_LB_MISRRHSW2   STCU2.LB[2].MISRRHSW.R        /* STCU2 On-Line LBIST MISR Read High Register */
#define STCU2_MB_CTRL0       STCU2.MB_CTRL[0].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL1       STCU2.MB_CTRL[1].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL2       STCU2.MB_CTRL[2].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL3       STCU2.MB_CTRL[3].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL4       STCU2.MB_CTRL[4].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL5       STCU2.MB_CTRL[5].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL6       STCU2.MB_CTRL[6].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL7       STCU2.MB_CTRL[7].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL8       STCU2.MB_CTRL[8].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL9       STCU2.MB_CTRL[9].R            /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL10      STCU2.MB_CTRL[10].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL11      STCU2.MB_CTRL[11].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL12      STCU2.MB_CTRL[12].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL13      STCU2.MB_CTRL[13].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL14      STCU2.MB_CTRL[14].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL15      STCU2.MB_CTRL[15].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL16      STCU2.MB_CTRL[16].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL17      STCU2.MB_CTRL[17].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL18      STCU2.MB_CTRL[18].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL19      STCU2.MB_CTRL[19].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL20      STCU2.MB_CTRL[20].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL21      STCU2.MB_CTRL[21].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL22      STCU2.MB_CTRL[22].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL23      STCU2.MB_CTRL[23].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL24      STCU2.MB_CTRL[24].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL25      STCU2.MB_CTRL[25].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL26      STCU2.MB_CTRL[26].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL27      STCU2.MB_CTRL[27].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL28      STCU2.MB_CTRL[28].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL29      STCU2.MB_CTRL[29].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL30      STCU2.MB_CTRL[30].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL31      STCU2.MB_CTRL[31].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL32      STCU2.MB_CTRL[32].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL33      STCU2.MB_CTRL[33].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL34      STCU2.MB_CTRL[34].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL35      STCU2.MB_CTRL[35].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL36      STCU2.MB_CTRL[36].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL37      STCU2.MB_CTRL[37].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL38      STCU2.MB_CTRL[38].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL39      STCU2.MB_CTRL[39].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL40      STCU2.MB_CTRL[40].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL41      STCU2.MB_CTRL[41].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL42      STCU2.MB_CTRL[42].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL43      STCU2.MB_CTRL[43].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL44      STCU2.MB_CTRL[44].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL45      STCU2.MB_CTRL[45].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL46      STCU2.MB_CTRL[46].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL47      STCU2.MB_CTRL[47].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL48      STCU2.MB_CTRL[48].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL49      STCU2.MB_CTRL[49].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL50      STCU2.MB_CTRL[50].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL51      STCU2.MB_CTRL[51].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL52      STCU2.MB_CTRL[52].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL53      STCU2.MB_CTRL[53].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL54      STCU2.MB_CTRL[54].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL55      STCU2.MB_CTRL[55].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL56      STCU2.MB_CTRL[56].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL57      STCU2.MB_CTRL[57].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL58      STCU2.MB_CTRL[58].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL59      STCU2.MB_CTRL[59].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL60      STCU2.MB_CTRL[60].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL61      STCU2.MB_CTRL[61].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL62      STCU2.MB_CTRL[62].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL63      STCU2.MB_CTRL[63].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL64      STCU2.MB_CTRL[64].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL65      STCU2.MB_CTRL[65].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL66      STCU2.MB_CTRL[66].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL67      STCU2.MB_CTRL[67].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL68      STCU2.MB_CTRL[68].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL69      STCU2.MB_CTRL[69].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL70      STCU2.MB_CTRL[70].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL71      STCU2.MB_CTRL[71].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL72      STCU2.MB_CTRL[72].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL73      STCU2.MB_CTRL[73].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL74      STCU2.MB_CTRL[74].R           /* STCU2 MBIST Control Register */
#define STCU2_MB_CTRL75      STCU2.MB_CTRL[75].R           /* STCU2 MBIST Control Register */

/* STM */
#define STM_0_CR             STM_0.CR.R                    /* STM Control Register */
#define STM_0_CNT            STM_0.CNT.R                   /* STM Count Register */
#define STM_0_CCR0           STM_0.CHANNEL[0].CCR.R        /* STM Channel Control Register */
#define STM_0_CIR0           STM_0.CHANNEL[0].CIR.R        /* STM Channel Interrupt Register */
#define STM_0_CMP0           STM_0.CHANNEL[0].CMP.R        /* STM Channel Compare Register */
#define STM_0_CCR1           STM_0.CHANNEL[1].CCR.R        /* STM Channel Control Register */
#define STM_0_CIR1           STM_0.CHANNEL[1].CIR.R        /* STM Channel Interrupt Register */
#define STM_0_CMP1           STM_0.CHANNEL[1].CMP.R        /* STM Channel Compare Register */
#define STM_0_CCR2           STM_0.CHANNEL[2].CCR.R        /* STM Channel Control Register */
#define STM_0_CIR2           STM_0.CHANNEL[2].CIR.R        /* STM Channel Interrupt Register */
#define STM_0_CMP2           STM_0.CHANNEL[2].CMP.R        /* STM Channel Compare Register */
#define STM_0_CCR3           STM_0.CHANNEL[3].CCR.R        /* STM Channel Control Register */
#define STM_0_CIR3           STM_0.CHANNEL[3].CIR.R        /* STM Channel Interrupt Register */
#define STM_0_CMP3           STM_0.CHANNEL[3].CMP.R        /* STM Channel Compare Register */

/* STM */
#define STM_1_CR             STM_1.CR.R                    /* STM Control Register */
#define STM_1_CNT            STM_1.CNT.R                   /* STM Count Register */
#define STM_1_CCR0           STM_1.CHANNEL[0].CCR.R        /* STM Channel Control Register */
#define STM_1_CIR0           STM_1.CHANNEL[0].CIR.R        /* STM Channel Interrupt Register */
#define STM_1_CMP0           STM_1.CHANNEL[0].CMP.R        /* STM Channel Compare Register */
#define STM_1_CCR1           STM_1.CHANNEL[1].CCR.R        /* STM Channel Control Register */
#define STM_1_CIR1           STM_1.CHANNEL[1].CIR.R        /* STM Channel Interrupt Register */
#define STM_1_CMP1           STM_1.CHANNEL[1].CMP.R        /* STM Channel Compare Register */
#define STM_1_CCR2           STM_1.CHANNEL[2].CCR.R        /* STM Channel Control Register */
#define STM_1_CIR2           STM_1.CHANNEL[2].CIR.R        /* STM Channel Interrupt Register */
#define STM_1_CMP2           STM_1.CHANNEL[2].CMP.R        /* STM Channel Compare Register */
#define STM_1_CCR3           STM_1.CHANNEL[3].CCR.R        /* STM Channel Control Register */
#define STM_1_CIR3           STM_1.CHANNEL[3].CIR.R        /* STM Channel Interrupt Register */
#define STM_1_CMP3           STM_1.CHANNEL[3].CMP.R        /* STM Channel Compare Register */

/* STM */
#define STM_2_CR             STM_2.CR.R                    /* STM Control Register */
#define STM_2_CNT            STM_2.CNT.R                   /* STM Count Register */
#define STM_2_CCR0           STM_2.CHANNEL[0].CCR.R        /* STM Channel Control Register */
#define STM_2_CIR0           STM_2.CHANNEL[0].CIR.R        /* STM Channel Interrupt Register */
#define STM_2_CMP0           STM_2.CHANNEL[0].CMP.R        /* STM Channel Compare Register */
#define STM_2_CCR1           STM_2.CHANNEL[1].CCR.R        /* STM Channel Control Register */
#define STM_2_CIR1           STM_2.CHANNEL[1].CIR.R        /* STM Channel Interrupt Register */
#define STM_2_CMP1           STM_2.CHANNEL[1].CMP.R        /* STM Channel Compare Register */
#define STM_2_CCR2           STM_2.CHANNEL[2].CCR.R        /* STM Channel Control Register */
#define STM_2_CIR2           STM_2.CHANNEL[2].CIR.R        /* STM Channel Interrupt Register */
#define STM_2_CMP2           STM_2.CHANNEL[2].CMP.R        /* STM Channel Compare Register */
#define STM_2_CCR3           STM_2.CHANNEL[3].CCR.R        /* STM Channel Control Register */
#define STM_2_CIR3           STM_2.CHANNEL[3].CIR.R        /* STM Channel Interrupt Register */
#define STM_2_CMP3           STM_2.CHANNEL[3].CMP.R        /* STM Channel Compare Register */

/* SWT */
#define SWT_0_CR             SWT_0.CR.R                    /* SWT Control Register */
#define SWT_0_IR             SWT_0.IR.R                    /* SWT Interrupt Register */
#define SWT_0_TO             SWT_0.TO.R                    /* SWT Time-out Register */
#define SWT_0_WN             SWT_0.WN.R                    /* SWT Window Register */
#define SWT_0_SR             SWT_0.SR.R                    /* SWT Service Register */
#define SWT_0_CO             SWT_0.CO.R                    /* SWT Counter Output Register */
#define SWT_0_SK             SWT_0.SK.R                    /* SWT Service Key Register */

/* SWT */
#define SWT_1_CR             SWT_1.CR.R                    /* SWT Control Register */
#define SWT_1_IR             SWT_1.IR.R                    /* SWT Interrupt Register */
#define SWT_1_TO             SWT_1.TO.R                    /* SWT Time-out Register */
#define SWT_1_WN             SWT_1.WN.R                    /* SWT Window Register */
#define SWT_1_SR             SWT_1.SR.R                    /* SWT Service Register */
#define SWT_1_CO             SWT_1.CO.R                    /* SWT Counter Output Register */
#define SWT_1_SK             SWT_1.SK.R                    /* SWT Service Key Register */

/* SWT */
#define SWT_2_CR             SWT_2.CR.R                    /* SWT Control Register */
#define SWT_2_IR             SWT_2.IR.R                    /* SWT Interrupt Register */
#define SWT_2_TO             SWT_2.TO.R                    /* SWT Time-out Register */
#define SWT_2_WN             SWT_2.WN.R                    /* SWT Window Register */
#define SWT_2_SR             SWT_2.SR.R                    /* SWT Service Register */
#define SWT_2_CO             SWT_2.CO.R                    /* SWT Counter Output Register */
#define SWT_2_SK             SWT_2.SK.R                    /* SWT Service Key Register */

/* SXOSC */
#define SXOSC_CTL            SXOSC.CTL.R                   /*  */

/* TDM */
#define TDM_TDRSR            TDM.TDRSR.R                   /* TDR Status Register */
#define TDM_LFPAR            TDM.LFPAR.R                   /* Last Flash Programmed Address Register */
#define TDM_DBA              TDM.DBA.R                     /* Diary Base Address */

/* UHST */
#define UHST_ID              UHST.ID.R                     /* Identification Register */
#define UHST_GNLHW           UHST.GNLHW.R                  /* General Hardware Parameters Register */
#define UHST_HSTHWP          UHST.HSTHWP.R                 /* Host Hardware Parameters Register */
#define UHST_TXBFP           UHST.TXBFP.R                  /* Transmit Buffer Hardware Parameters Register */
#define UHST_RXBFP           UHST.RXBFP.R                  /* Receive Buffer Hardware Parameters Register */
#define UHST_GPT0LD          UHST.GPT[0].LD.R              /* General Purpose Timer n Load Register */
#define UHST_GPT0CTL         UHST.GPT[0].CTL.R             /* General Purpose Timer n Control Register */
#define UHST_GPT1LD          UHST.GPT[1].LD.R              /* General Purpose Timer n Load Register */
#define UHST_GPT1CTL         UHST.GPT[1].CTL.R             /* General Purpose Timer n Control Register */
#define UHST_SBUSCFG         UHST.SBUSCFG.R                /* System Bus Interface Configuration Register */
#define UHST_CAPLENGTH       UHST.CAPLENGTH.R              /* Capability Register Length */
#define UHST_HCIVERSION      UHST.HCIVERSION.R             /* Host Controller Interface Version and Capability Registers Length Register */
#define UHST_HCSPARAMS       UHST.HCSPARAMS.R              /* Host Controller Structural Parameters Register */
#define UHST_HCCPARAMS       UHST.HCCPARAMS.R              /* Host Controller Capability Parameters Register */
#define UHST_USBCMD          UHST.USBCMD.R                 /* USB Command Register */
#define UHST_USBSTS          UHST.USBSTS.R                 /* USB Status Register */
#define UHST_USBINTR         UHST.USBINTR.R                /* USB Interrupt Enable Register */
#define UHST_FRINDEX         UHST.FRINDEX.R                /* Frame Index Register */
#define UHST_PERIODICLISTBASE UHST.PERIODICLISTBASE.R      /* Periodic Frame List Base Address Register */
#define UHST_ASYNCLISTADDR   UHST.ASYNCLISTADDR.R          /* Current Asynchronous List Address Register */
#define UHST_BRSTSIZE        UHST.BRSTSIZE.R               /* Master Interface Data Burst Size Register */
#define UHST_TXTFLTNG        UHST.TXTFLTNG.R               /* Transmit FIFO Tuning Control Register */
#define UHST_ULPIVWPT        UHST.ULPIVWPT.R               /* ULPI Register Access */
#define UHST_CONFIGFLAG      UHST.CONFIGFLAG.R             /* Configure Flag Register */
#define UHST_PORTSC1         UHST.PORTSC1.R                /* Port Status and Control Registers */
#define UHST_USBMODE         UHST.USBMODE.R                /* USB Mode Register */

/* UHSTNC */
#define UHSTNC_CR            UHSTNC.CR.R                   /* Control register */
#define UHSTNC_ENDNMODE      UHSTNC.ENDNMODE.R             /* USB Endian Mode Select */
#define UHSTNC_ENDNMSEL      UHSTNC.ENDNMSEL.R             /* USB Endian Select */

/* UOTG */
#define UOTG_ID              UOTG.ID.R                     /* Identification register */
#define UOTG_GNLHW           UOTG.GNLHW.R                  /* Hardware General */
#define UOTG_HSTHWP          UOTG.HSTHWP.R                 /* Host Hardware Parameters */
#define UOTG_DEVHWP          UOTG.DEVHWP.R                 /* Device Hardware Parameters */
#define UOTG_TXBFP           UOTG.TXBFP.R                  /* TX Buffer Hardware Parameters */
#define UOTG_RXBFP           UOTG.RXBFP.R                  /* RX Buffer Hardware Parameters */
#define UOTG_GPT0LD          UOTG.GPT[0].LD.R              /* General Purpose Timer Load */
#define UOTG_GPT0CL          UOTG.GPT[0].CL.R              /* General Purpose Timer Controller */
#define UOTG_GPT1LD          UOTG.GPT[1].LD.R              /* General Purpose Timer Load */
#define UOTG_GPT1CL          UOTG.GPT[1].CL.R              /* General Purpose Timer Controller */
#define UOTG_SBUSCFG         UOTG.SBUSCFG.R                /* System Bus Configuration */
#define UOTG_CAPLENGTH       UOTG.CAPLENGTH.R              /* Capability Register Length */
#define UOTG_HCIVERSION      UOTG.HCIVERSION.R             /* Host Controller Interface Version */
#define UOTG_HCSPARAMS       UOTG.HCSPARAMS.R              /* Host Controller Structural Parameters */
#define UOTG_HCCPARAMS       UOTG.HCCPARAMS.R              /* Host Controller Capability Parameters */
#define UOTG_DCIFVER         UOTG.DCIFVER.R                /* Device Controller Interface Version */
#define UOTG_DCCAPPAR        UOTG.DCCAPPAR.R               /* Device Controller Capability Parameters */
#define UOTG_USBCMD          UOTG.USBCMD.R                 /* USB Command Register */
#define UOTG_USBSTS          UOTG.USBSTS.R                 /* USB Status Register */
#define UOTG_USBINTR         UOTG.USBINTR.R                /* Interrupt Enable Register */
#define UOTG_FRINDEX         UOTG.FRINDEX.R                /* USB Frame Index */
#define UOTG_DEVADR          UOTG.ADDRESS1.DEVADR.R        /* Device Address */
#define UOTG_PERIODICLISTBASE UOTG.ADDRESS1.PERIODICLISTBASE.R /* Frame List Base Address */
#define UOTG_ASYNCLISTADDR   UOTG.ADDRESS2.ASYNCLISTADDR.R /* Next Asynch. Address */
#define UOTG_ENDPLADR        UOTG.ADDRESS2.ENDPLADR.R      /* Endpoint List Address */
#define UOTG_BRSTSIZE        UOTG.BRSTSIZE.R               /* Programmable Burst Size */
#define UOTG_TXTFLTNG        UOTG.TXTFLTNG.R               /* TX FIFO Fill Tuning */
#define UOTG_ICUSBEN         UOTG.ICUSBEN.R                /* IC_USB enable and voltage negotiation */
#define UOTG_ULPIVWPT        UOTG.ULPIVWPT.R               /* ULPI Register Access */
#define UOTG_ENDPNAK         UOTG.ENDPNAK.R                /* Endpoint NAK */
#define UOTG_ENDPNAKE        UOTG.ENDPNAKE.R               /* Endpoint NAK Enable */
#define UOTG_CONFIGFLAG      UOTG.CONFIGFLAG.R             /* Configure Flag Register */
#define UOTG_PORTSC1         UOTG.PORTSC1.R                /* Port Status and Control */
#define UOTG_OTGSC           UOTG.OTGSC.R                  /* On-The-Go Status Control */
#define UOTG_USBDMODE        UOTG.USBDMODE.R               /* USB Device Mode */
#define UOTG_ENPSTPST        UOTG.ENPSTPST.R               /* Endpoint Setup Status */
#define UOTG_ENDPINT         UOTG.ENDPINT.R                /* Endpoint Initialization */
#define UOTG_ENDPDINT        UOTG.ENDPDINT.R               /* Endpoint De-Initialize */
#define UOTG_ENDPST          UOTG.ENDPST.R                 /* Endpoint Status */
#define UOTG_ENPCPLT         UOTG.ENPCPLT.R                /* Endpoint Complete */
#define UOTG_ENDPTC0         UOTG.ENDPTC0.R                /* Endpoint Control 0 */
#define UOTG_ENDPTC1         UOTG.ENDPTC[0].R              /* Endpoint Control */
#define UOTG_ENDPTC2         UOTG.ENDPTC[1].R              /* Endpoint Control */
#define UOTG_ENDPTC3         UOTG.ENDPTC[2].R              /* Endpoint Control */
#define UOTG_ENDPTC4         UOTG.ENDPTC[3].R              /* Endpoint Control */

/* UOTGNC */
#define UOTGNC_CR            UOTGNC.CR.R                   /* Control register */
#define UOTGNC_ENDNMODE      UOTGNC.ENDNMODE.R             /* USB Endian Mode Select */
#define UOTGNC_ENDNMSEL      UOTGNC.ENDNMSEL.R             /* USB endian select */

/* WKPU */
#define WKPU_NSR             WKPU.NSR.R                    /* NMI Status Flag Register */
#define WKPU_NCR             WKPU.NCR.R                    /* NMI Configuration Register */
#define WKPU_WISR            WKPU.WISR.R                   /* Wakeup/Interrupt Status Flag Register */
#define WKPU_IRER            WKPU.IRER.R                   /* Interrupt Request Enable Register */
#define WKPU_WRER            WKPU.WRER.R                   /* Wakeup Request Enable Register */
#define WKPU_WIREER          WKPU.WIREER.R                 /* Wakeup/Interrupt Rising-Edge Event Enable Register */
#define WKPU_WIFEER          WKPU.WIFEER.R                 /* Wakeup/Interrupt Falling-Edge Event Enable Register */
#define WKPU_WIFER           WKPU.WIFER.R                  /* Wakeup/Interrupt Filter Enable Register */
#define WKPU_WIPUER          WKPU.WIPUER.R                 /* Wakeup/Interrupt Pullup Enable Register */

/* eMIOS */
#define eMIOS_0_MCR          eMIOS_0.MCR.R                 /* eMIOS Module Configuration Register */
#define eMIOS_0_GFLAG        eMIOS_0.GFLAG.R               /* eMIOS Global FLAG Register */
#define eMIOS_0_OUDIS        eMIOS_0.OUDIS.R               /* eMIOS Output Update Disable register */
#define eMIOS_0_UCDIS        eMIOS_0.UCDIS.R               /* eMIOS Disable Channel register */

/* eMIOS */
#define eMIOS_1_MCR          eMIOS_1.MCR.R                 /* eMIOS Module Configuration Register */
#define eMIOS_1_GFLAG        eMIOS_1.GFLAG.R               /* eMIOS Global FLAG Register */
#define eMIOS_1_OUDIS        eMIOS_1.OUDIS.R               /* eMIOS Output Update Disable register */
#define eMIOS_1_UCDIS        eMIOS_1.UCDIS.R               /* eMIOS Disable Channel register */

/* eMIOS */
#define eMIOS_2_MCR          eMIOS_2.MCR.R                 /* eMIOS Module Configuration Register */
#define eMIOS_2_GFLAG        eMIOS_2.GFLAG.R               /* eMIOS Global FLAG Register */
#define eMIOS_2_OUDIS        eMIOS_2.OUDIS.R               /* eMIOS Output Update Disable register */
#define eMIOS_2_UCDIS        eMIOS_2.UCDIS.R               /* eMIOS Disable Channel register */

/* eMIOS */
#define eMIOS_UC_0_eMIOS_0_A0 eMIOS_UC_0.UC[0].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B0 eMIOS_UC_0.UC[0].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT0 eMIOS_UC_0.UC[0].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C0 eMIOS_UC_0.UC[0].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S0 eMIOS_UC_0.UC[0].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA0 eMIOS_UC_0.UC[0].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_0 eMIOS_UC_0.UC[0].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A1 eMIOS_UC_0.UC[1].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B1 eMIOS_UC_0.UC[1].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT1 eMIOS_UC_0.UC[1].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C1 eMIOS_UC_0.UC[1].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S1 eMIOS_UC_0.UC[1].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA1 eMIOS_UC_0.UC[1].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_1 eMIOS_UC_0.UC[1].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A2 eMIOS_UC_0.UC[2].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B2 eMIOS_UC_0.UC[2].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT2 eMIOS_UC_0.UC[2].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C2 eMIOS_UC_0.UC[2].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S2 eMIOS_UC_0.UC[2].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA2 eMIOS_UC_0.UC[2].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_2 eMIOS_UC_0.UC[2].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A3 eMIOS_UC_0.UC[3].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B3 eMIOS_UC_0.UC[3].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT3 eMIOS_UC_0.UC[3].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C3 eMIOS_UC_0.UC[3].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S3 eMIOS_UC_0.UC[3].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA3 eMIOS_UC_0.UC[3].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_3 eMIOS_UC_0.UC[3].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A4 eMIOS_UC_0.UC[4].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B4 eMIOS_UC_0.UC[4].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT4 eMIOS_UC_0.UC[4].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C4 eMIOS_UC_0.UC[4].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S4 eMIOS_UC_0.UC[4].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA4 eMIOS_UC_0.UC[4].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_4 eMIOS_UC_0.UC[4].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A5 eMIOS_UC_0.UC[5].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B5 eMIOS_UC_0.UC[5].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT5 eMIOS_UC_0.UC[5].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C5 eMIOS_UC_0.UC[5].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S5 eMIOS_UC_0.UC[5].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA5 eMIOS_UC_0.UC[5].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_5 eMIOS_UC_0.UC[5].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A6 eMIOS_UC_0.UC[6].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B6 eMIOS_UC_0.UC[6].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT6 eMIOS_UC_0.UC[6].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C6 eMIOS_UC_0.UC[6].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S6 eMIOS_UC_0.UC[6].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA6 eMIOS_UC_0.UC[6].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_6 eMIOS_UC_0.UC[6].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A7 eMIOS_UC_0.UC[7].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B7 eMIOS_UC_0.UC[7].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT7 eMIOS_UC_0.UC[7].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C7 eMIOS_UC_0.UC[7].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S7 eMIOS_UC_0.UC[7].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA7 eMIOS_UC_0.UC[7].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_7 eMIOS_UC_0.UC[7].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A8 eMIOS_UC_0.UC[8].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B8 eMIOS_UC_0.UC[8].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT8 eMIOS_UC_0.UC[8].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C8 eMIOS_UC_0.UC[8].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S8 eMIOS_UC_0.UC[8].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA8 eMIOS_UC_0.UC[8].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_8 eMIOS_UC_0.UC[8].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A9 eMIOS_UC_0.UC[9].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B9 eMIOS_UC_0.UC[9].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT9 eMIOS_UC_0.UC[9].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C9 eMIOS_UC_0.UC[9].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S9 eMIOS_UC_0.UC[9].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA9 eMIOS_UC_0.UC[9].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_9 eMIOS_UC_0.UC[9].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A10 eMIOS_UC_0.UC[10].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B10 eMIOS_UC_0.UC[10].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT10 eMIOS_UC_0.UC[10].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C10 eMIOS_UC_0.UC[10].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S10 eMIOS_UC_0.UC[10].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA10 eMIOS_UC_0.UC[10].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_10 eMIOS_UC_0.UC[10].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A11 eMIOS_UC_0.UC[11].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B11 eMIOS_UC_0.UC[11].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT11 eMIOS_UC_0.UC[11].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C11 eMIOS_UC_0.UC[11].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S11 eMIOS_UC_0.UC[11].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA11 eMIOS_UC_0.UC[11].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_11 eMIOS_UC_0.UC[11].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A12 eMIOS_UC_0.UC[12].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B12 eMIOS_UC_0.UC[12].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT12 eMIOS_UC_0.UC[12].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C12 eMIOS_UC_0.UC[12].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S12 eMIOS_UC_0.UC[12].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA12 eMIOS_UC_0.UC[12].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_12 eMIOS_UC_0.UC[12].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A13 eMIOS_UC_0.UC[13].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B13 eMIOS_UC_0.UC[13].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT13 eMIOS_UC_0.UC[13].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C13 eMIOS_UC_0.UC[13].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S13 eMIOS_UC_0.UC[13].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA13 eMIOS_UC_0.UC[13].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_13 eMIOS_UC_0.UC[13].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A14 eMIOS_UC_0.UC[14].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B14 eMIOS_UC_0.UC[14].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT14 eMIOS_UC_0.UC[14].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C14 eMIOS_UC_0.UC[14].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S14 eMIOS_UC_0.UC[14].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA14 eMIOS_UC_0.UC[14].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_14 eMIOS_UC_0.UC[14].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A15 eMIOS_UC_0.UC[15].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B15 eMIOS_UC_0.UC[15].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT15 eMIOS_UC_0.UC[15].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C15 eMIOS_UC_0.UC[15].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S15 eMIOS_UC_0.UC[15].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA15 eMIOS_UC_0.UC[15].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_15 eMIOS_UC_0.UC[15].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A16 eMIOS_UC_0.UC[16].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B16 eMIOS_UC_0.UC[16].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT16 eMIOS_UC_0.UC[16].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C16 eMIOS_UC_0.UC[16].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S16 eMIOS_UC_0.UC[16].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA16 eMIOS_UC_0.UC[16].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_16 eMIOS_UC_0.UC[16].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A17 eMIOS_UC_0.UC[17].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B17 eMIOS_UC_0.UC[17].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT17 eMIOS_UC_0.UC[17].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C17 eMIOS_UC_0.UC[17].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S17 eMIOS_UC_0.UC[17].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA17 eMIOS_UC_0.UC[17].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_17 eMIOS_UC_0.UC[17].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A18 eMIOS_UC_0.UC[18].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B18 eMIOS_UC_0.UC[18].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT18 eMIOS_UC_0.UC[18].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C18 eMIOS_UC_0.UC[18].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S18 eMIOS_UC_0.UC[18].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA18 eMIOS_UC_0.UC[18].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_18 eMIOS_UC_0.UC[18].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A19 eMIOS_UC_0.UC[19].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B19 eMIOS_UC_0.UC[19].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT19 eMIOS_UC_0.UC[19].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C19 eMIOS_UC_0.UC[19].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S19 eMIOS_UC_0.UC[19].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA19 eMIOS_UC_0.UC[19].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_19 eMIOS_UC_0.UC[19].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A20 eMIOS_UC_0.UC[20].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B20 eMIOS_UC_0.UC[20].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT20 eMIOS_UC_0.UC[20].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C20 eMIOS_UC_0.UC[20].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S20 eMIOS_UC_0.UC[20].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA20 eMIOS_UC_0.UC[20].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_20 eMIOS_UC_0.UC[20].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A21 eMIOS_UC_0.UC[21].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B21 eMIOS_UC_0.UC[21].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT21 eMIOS_UC_0.UC[21].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C21 eMIOS_UC_0.UC[21].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S21 eMIOS_UC_0.UC[21].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA21 eMIOS_UC_0.UC[21].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_21 eMIOS_UC_0.UC[21].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A22 eMIOS_UC_0.UC[22].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B22 eMIOS_UC_0.UC[22].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT22 eMIOS_UC_0.UC[22].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C22 eMIOS_UC_0.UC[22].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S22 eMIOS_UC_0.UC[22].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA22 eMIOS_UC_0.UC[22].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_22 eMIOS_UC_0.UC[22].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A23 eMIOS_UC_0.UC[23].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B23 eMIOS_UC_0.UC[23].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT23 eMIOS_UC_0.UC[23].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C23 eMIOS_UC_0.UC[23].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S23 eMIOS_UC_0.UC[23].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA23 eMIOS_UC_0.UC[23].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_23 eMIOS_UC_0.UC[23].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A24 eMIOS_UC_0.UC[24].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B24 eMIOS_UC_0.UC[24].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT24 eMIOS_UC_0.UC[24].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C24 eMIOS_UC_0.UC[24].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S24 eMIOS_UC_0.UC[24].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA24 eMIOS_UC_0.UC[24].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_24 eMIOS_UC_0.UC[24].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A25 eMIOS_UC_0.UC[25].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B25 eMIOS_UC_0.UC[25].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT25 eMIOS_UC_0.UC[25].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C25 eMIOS_UC_0.UC[25].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S25 eMIOS_UC_0.UC[25].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA25 eMIOS_UC_0.UC[25].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_25 eMIOS_UC_0.UC[25].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A26 eMIOS_UC_0.UC[26].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B26 eMIOS_UC_0.UC[26].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT26 eMIOS_UC_0.UC[26].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C26 eMIOS_UC_0.UC[26].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S26 eMIOS_UC_0.UC[26].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA26 eMIOS_UC_0.UC[26].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_26 eMIOS_UC_0.UC[26].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A27 eMIOS_UC_0.UC[27].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B27 eMIOS_UC_0.UC[27].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT27 eMIOS_UC_0.UC[27].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C27 eMIOS_UC_0.UC[27].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S27 eMIOS_UC_0.UC[27].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA27 eMIOS_UC_0.UC[27].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_27 eMIOS_UC_0.UC[27].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A28 eMIOS_UC_0.UC[28].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B28 eMIOS_UC_0.UC[28].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT28 eMIOS_UC_0.UC[28].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C28 eMIOS_UC_0.UC[28].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S28 eMIOS_UC_0.UC[28].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA28 eMIOS_UC_0.UC[28].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_28 eMIOS_UC_0.UC[28].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A29 eMIOS_UC_0.UC[29].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B29 eMIOS_UC_0.UC[29].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT29 eMIOS_UC_0.UC[29].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C29 eMIOS_UC_0.UC[29].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S29 eMIOS_UC_0.UC[29].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA29 eMIOS_UC_0.UC[29].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_29 eMIOS_UC_0.UC[29].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A30 eMIOS_UC_0.UC[30].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B30 eMIOS_UC_0.UC[30].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT30 eMIOS_UC_0.UC[30].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C30 eMIOS_UC_0.UC[30].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S30 eMIOS_UC_0.UC[30].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA30 eMIOS_UC_0.UC[30].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_30 eMIOS_UC_0.UC[30].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_0_eMIOS_0_A31 eMIOS_UC_0.UC[31].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_0_eMIOS_0_B31 eMIOS_UC_0.UC[31].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_0_eMIOS_0_CNT31 eMIOS_UC_0.UC[31].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_0_eMIOS_0_C31 eMIOS_UC_0.UC[31].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_0_eMIOS_0_S31 eMIOS_UC_0.UC[31].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_0_eMIOS_0_ALTA31 eMIOS_UC_0.UC[31].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_0_eMIOS_0_C2_31 eMIOS_UC_0.UC[31].C2.R    /* eMIOS UC Control 2 register n */

/* eMIOS */
#define eMIOS_UC_1_eMIOS_1_A0 eMIOS_UC_1.UC[0].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B0 eMIOS_UC_1.UC[0].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT0 eMIOS_UC_1.UC[0].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C0 eMIOS_UC_1.UC[0].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S0 eMIOS_UC_1.UC[0].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA0 eMIOS_UC_1.UC[0].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_0 eMIOS_UC_1.UC[0].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A1 eMIOS_UC_1.UC[1].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B1 eMIOS_UC_1.UC[1].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT1 eMIOS_UC_1.UC[1].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C1 eMIOS_UC_1.UC[1].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S1 eMIOS_UC_1.UC[1].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA1 eMIOS_UC_1.UC[1].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_1 eMIOS_UC_1.UC[1].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A2 eMIOS_UC_1.UC[2].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B2 eMIOS_UC_1.UC[2].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT2 eMIOS_UC_1.UC[2].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C2 eMIOS_UC_1.UC[2].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S2 eMIOS_UC_1.UC[2].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA2 eMIOS_UC_1.UC[2].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_2 eMIOS_UC_1.UC[2].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A3 eMIOS_UC_1.UC[3].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B3 eMIOS_UC_1.UC[3].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT3 eMIOS_UC_1.UC[3].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C3 eMIOS_UC_1.UC[3].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S3 eMIOS_UC_1.UC[3].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA3 eMIOS_UC_1.UC[3].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_3 eMIOS_UC_1.UC[3].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A4 eMIOS_UC_1.UC[4].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B4 eMIOS_UC_1.UC[4].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT4 eMIOS_UC_1.UC[4].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C4 eMIOS_UC_1.UC[4].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S4 eMIOS_UC_1.UC[4].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA4 eMIOS_UC_1.UC[4].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_4 eMIOS_UC_1.UC[4].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A5 eMIOS_UC_1.UC[5].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B5 eMIOS_UC_1.UC[5].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT5 eMIOS_UC_1.UC[5].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C5 eMIOS_UC_1.UC[5].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S5 eMIOS_UC_1.UC[5].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA5 eMIOS_UC_1.UC[5].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_5 eMIOS_UC_1.UC[5].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A6 eMIOS_UC_1.UC[6].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B6 eMIOS_UC_1.UC[6].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT6 eMIOS_UC_1.UC[6].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C6 eMIOS_UC_1.UC[6].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S6 eMIOS_UC_1.UC[6].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA6 eMIOS_UC_1.UC[6].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_6 eMIOS_UC_1.UC[6].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A7 eMIOS_UC_1.UC[7].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B7 eMIOS_UC_1.UC[7].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT7 eMIOS_UC_1.UC[7].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C7 eMIOS_UC_1.UC[7].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S7 eMIOS_UC_1.UC[7].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA7 eMIOS_UC_1.UC[7].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_7 eMIOS_UC_1.UC[7].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A8 eMIOS_UC_1.UC[8].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B8 eMIOS_UC_1.UC[8].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT8 eMIOS_UC_1.UC[8].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C8 eMIOS_UC_1.UC[8].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S8 eMIOS_UC_1.UC[8].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA8 eMIOS_UC_1.UC[8].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_8 eMIOS_UC_1.UC[8].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A9 eMIOS_UC_1.UC[9].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B9 eMIOS_UC_1.UC[9].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT9 eMIOS_UC_1.UC[9].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C9 eMIOS_UC_1.UC[9].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S9 eMIOS_UC_1.UC[9].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA9 eMIOS_UC_1.UC[9].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_9 eMIOS_UC_1.UC[9].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A10 eMIOS_UC_1.UC[10].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B10 eMIOS_UC_1.UC[10].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT10 eMIOS_UC_1.UC[10].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C10 eMIOS_UC_1.UC[10].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S10 eMIOS_UC_1.UC[10].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA10 eMIOS_UC_1.UC[10].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_10 eMIOS_UC_1.UC[10].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A11 eMIOS_UC_1.UC[11].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B11 eMIOS_UC_1.UC[11].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT11 eMIOS_UC_1.UC[11].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C11 eMIOS_UC_1.UC[11].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S11 eMIOS_UC_1.UC[11].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA11 eMIOS_UC_1.UC[11].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_11 eMIOS_UC_1.UC[11].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A12 eMIOS_UC_1.UC[12].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B12 eMIOS_UC_1.UC[12].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT12 eMIOS_UC_1.UC[12].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C12 eMIOS_UC_1.UC[12].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S12 eMIOS_UC_1.UC[12].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA12 eMIOS_UC_1.UC[12].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_12 eMIOS_UC_1.UC[12].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A13 eMIOS_UC_1.UC[13].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B13 eMIOS_UC_1.UC[13].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT13 eMIOS_UC_1.UC[13].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C13 eMIOS_UC_1.UC[13].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S13 eMIOS_UC_1.UC[13].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA13 eMIOS_UC_1.UC[13].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_13 eMIOS_UC_1.UC[13].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A14 eMIOS_UC_1.UC[14].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B14 eMIOS_UC_1.UC[14].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT14 eMIOS_UC_1.UC[14].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C14 eMIOS_UC_1.UC[14].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S14 eMIOS_UC_1.UC[14].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA14 eMIOS_UC_1.UC[14].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_14 eMIOS_UC_1.UC[14].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A15 eMIOS_UC_1.UC[15].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B15 eMIOS_UC_1.UC[15].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT15 eMIOS_UC_1.UC[15].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C15 eMIOS_UC_1.UC[15].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S15 eMIOS_UC_1.UC[15].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA15 eMIOS_UC_1.UC[15].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_15 eMIOS_UC_1.UC[15].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A16 eMIOS_UC_1.UC[16].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B16 eMIOS_UC_1.UC[16].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT16 eMIOS_UC_1.UC[16].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C16 eMIOS_UC_1.UC[16].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S16 eMIOS_UC_1.UC[16].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA16 eMIOS_UC_1.UC[16].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_16 eMIOS_UC_1.UC[16].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A17 eMIOS_UC_1.UC[17].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B17 eMIOS_UC_1.UC[17].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT17 eMIOS_UC_1.UC[17].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C17 eMIOS_UC_1.UC[17].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S17 eMIOS_UC_1.UC[17].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA17 eMIOS_UC_1.UC[17].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_17 eMIOS_UC_1.UC[17].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A18 eMIOS_UC_1.UC[18].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B18 eMIOS_UC_1.UC[18].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT18 eMIOS_UC_1.UC[18].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C18 eMIOS_UC_1.UC[18].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S18 eMIOS_UC_1.UC[18].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA18 eMIOS_UC_1.UC[18].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_18 eMIOS_UC_1.UC[18].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A19 eMIOS_UC_1.UC[19].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B19 eMIOS_UC_1.UC[19].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT19 eMIOS_UC_1.UC[19].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C19 eMIOS_UC_1.UC[19].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S19 eMIOS_UC_1.UC[19].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA19 eMIOS_UC_1.UC[19].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_19 eMIOS_UC_1.UC[19].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A20 eMIOS_UC_1.UC[20].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B20 eMIOS_UC_1.UC[20].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT20 eMIOS_UC_1.UC[20].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C20 eMIOS_UC_1.UC[20].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S20 eMIOS_UC_1.UC[20].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA20 eMIOS_UC_1.UC[20].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_20 eMIOS_UC_1.UC[20].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A21 eMIOS_UC_1.UC[21].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B21 eMIOS_UC_1.UC[21].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT21 eMIOS_UC_1.UC[21].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C21 eMIOS_UC_1.UC[21].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S21 eMIOS_UC_1.UC[21].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA21 eMIOS_UC_1.UC[21].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_21 eMIOS_UC_1.UC[21].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A22 eMIOS_UC_1.UC[22].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B22 eMIOS_UC_1.UC[22].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT22 eMIOS_UC_1.UC[22].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C22 eMIOS_UC_1.UC[22].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S22 eMIOS_UC_1.UC[22].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA22 eMIOS_UC_1.UC[22].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_22 eMIOS_UC_1.UC[22].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A23 eMIOS_UC_1.UC[23].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B23 eMIOS_UC_1.UC[23].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT23 eMIOS_UC_1.UC[23].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C23 eMIOS_UC_1.UC[23].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S23 eMIOS_UC_1.UC[23].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA23 eMIOS_UC_1.UC[23].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_23 eMIOS_UC_1.UC[23].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A24 eMIOS_UC_1.UC[24].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B24 eMIOS_UC_1.UC[24].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT24 eMIOS_UC_1.UC[24].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C24 eMIOS_UC_1.UC[24].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S24 eMIOS_UC_1.UC[24].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA24 eMIOS_UC_1.UC[24].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_24 eMIOS_UC_1.UC[24].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A25 eMIOS_UC_1.UC[25].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B25 eMIOS_UC_1.UC[25].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT25 eMIOS_UC_1.UC[25].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C25 eMIOS_UC_1.UC[25].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S25 eMIOS_UC_1.UC[25].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA25 eMIOS_UC_1.UC[25].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_25 eMIOS_UC_1.UC[25].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A26 eMIOS_UC_1.UC[26].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B26 eMIOS_UC_1.UC[26].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT26 eMIOS_UC_1.UC[26].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C26 eMIOS_UC_1.UC[26].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S26 eMIOS_UC_1.UC[26].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA26 eMIOS_UC_1.UC[26].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_26 eMIOS_UC_1.UC[26].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A27 eMIOS_UC_1.UC[27].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B27 eMIOS_UC_1.UC[27].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT27 eMIOS_UC_1.UC[27].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C27 eMIOS_UC_1.UC[27].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S27 eMIOS_UC_1.UC[27].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA27 eMIOS_UC_1.UC[27].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_27 eMIOS_UC_1.UC[27].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A28 eMIOS_UC_1.UC[28].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B28 eMIOS_UC_1.UC[28].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT28 eMIOS_UC_1.UC[28].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C28 eMIOS_UC_1.UC[28].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S28 eMIOS_UC_1.UC[28].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA28 eMIOS_UC_1.UC[28].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_28 eMIOS_UC_1.UC[28].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A29 eMIOS_UC_1.UC[29].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B29 eMIOS_UC_1.UC[29].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT29 eMIOS_UC_1.UC[29].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C29 eMIOS_UC_1.UC[29].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S29 eMIOS_UC_1.UC[29].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA29 eMIOS_UC_1.UC[29].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_29 eMIOS_UC_1.UC[29].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A30 eMIOS_UC_1.UC[30].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B30 eMIOS_UC_1.UC[30].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT30 eMIOS_UC_1.UC[30].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C30 eMIOS_UC_1.UC[30].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S30 eMIOS_UC_1.UC[30].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA30 eMIOS_UC_1.UC[30].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_30 eMIOS_UC_1.UC[30].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_1_eMIOS_1_A31 eMIOS_UC_1.UC[31].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_1_eMIOS_1_B31 eMIOS_UC_1.UC[31].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_1_eMIOS_1_CNT31 eMIOS_UC_1.UC[31].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_1_eMIOS_1_C31 eMIOS_UC_1.UC[31].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_1_eMIOS_1_S31 eMIOS_UC_1.UC[31].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_1_eMIOS_1_ALTA31 eMIOS_UC_1.UC[31].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_1_eMIOS_1_C2_31 eMIOS_UC_1.UC[31].C2.R    /* eMIOS UC Control 2 register n */

/* eMIOS */
#define eMIOS_UC_2_eMIOS_2_A0 eMIOS_UC_2.UC[0].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B0 eMIOS_UC_2.UC[0].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT0 eMIOS_UC_2.UC[0].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C0 eMIOS_UC_2.UC[0].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S0 eMIOS_UC_2.UC[0].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA0 eMIOS_UC_2.UC[0].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_0 eMIOS_UC_2.UC[0].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A1 eMIOS_UC_2.UC[1].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B1 eMIOS_UC_2.UC[1].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT1 eMIOS_UC_2.UC[1].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C1 eMIOS_UC_2.UC[1].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S1 eMIOS_UC_2.UC[1].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA1 eMIOS_UC_2.UC[1].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_1 eMIOS_UC_2.UC[1].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A2 eMIOS_UC_2.UC[2].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B2 eMIOS_UC_2.UC[2].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT2 eMIOS_UC_2.UC[2].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C2 eMIOS_UC_2.UC[2].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S2 eMIOS_UC_2.UC[2].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA2 eMIOS_UC_2.UC[2].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_2 eMIOS_UC_2.UC[2].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A3 eMIOS_UC_2.UC[3].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B3 eMIOS_UC_2.UC[3].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT3 eMIOS_UC_2.UC[3].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C3 eMIOS_UC_2.UC[3].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S3 eMIOS_UC_2.UC[3].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA3 eMIOS_UC_2.UC[3].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_3 eMIOS_UC_2.UC[3].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A4 eMIOS_UC_2.UC[4].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B4 eMIOS_UC_2.UC[4].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT4 eMIOS_UC_2.UC[4].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C4 eMIOS_UC_2.UC[4].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S4 eMIOS_UC_2.UC[4].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA4 eMIOS_UC_2.UC[4].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_4 eMIOS_UC_2.UC[4].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A5 eMIOS_UC_2.UC[5].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B5 eMIOS_UC_2.UC[5].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT5 eMIOS_UC_2.UC[5].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C5 eMIOS_UC_2.UC[5].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S5 eMIOS_UC_2.UC[5].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA5 eMIOS_UC_2.UC[5].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_5 eMIOS_UC_2.UC[5].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A6 eMIOS_UC_2.UC[6].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B6 eMIOS_UC_2.UC[6].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT6 eMIOS_UC_2.UC[6].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C6 eMIOS_UC_2.UC[6].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S6 eMIOS_UC_2.UC[6].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA6 eMIOS_UC_2.UC[6].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_6 eMIOS_UC_2.UC[6].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A7 eMIOS_UC_2.UC[7].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B7 eMIOS_UC_2.UC[7].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT7 eMIOS_UC_2.UC[7].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C7 eMIOS_UC_2.UC[7].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S7 eMIOS_UC_2.UC[7].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA7 eMIOS_UC_2.UC[7].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_7 eMIOS_UC_2.UC[7].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A8 eMIOS_UC_2.UC[8].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B8 eMIOS_UC_2.UC[8].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT8 eMIOS_UC_2.UC[8].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C8 eMIOS_UC_2.UC[8].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S8 eMIOS_UC_2.UC[8].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA8 eMIOS_UC_2.UC[8].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_8 eMIOS_UC_2.UC[8].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A9 eMIOS_UC_2.UC[9].A.R         /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B9 eMIOS_UC_2.UC[9].B.R         /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT9 eMIOS_UC_2.UC[9].CNT.R     /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C9 eMIOS_UC_2.UC[9].C.R         /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S9 eMIOS_UC_2.UC[9].S.R         /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA9 eMIOS_UC_2.UC[9].ALTA.R   /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_9 eMIOS_UC_2.UC[9].C2.R      /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A10 eMIOS_UC_2.UC[10].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B10 eMIOS_UC_2.UC[10].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT10 eMIOS_UC_2.UC[10].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C10 eMIOS_UC_2.UC[10].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S10 eMIOS_UC_2.UC[10].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA10 eMIOS_UC_2.UC[10].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_10 eMIOS_UC_2.UC[10].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A11 eMIOS_UC_2.UC[11].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B11 eMIOS_UC_2.UC[11].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT11 eMIOS_UC_2.UC[11].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C11 eMIOS_UC_2.UC[11].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S11 eMIOS_UC_2.UC[11].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA11 eMIOS_UC_2.UC[11].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_11 eMIOS_UC_2.UC[11].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A12 eMIOS_UC_2.UC[12].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B12 eMIOS_UC_2.UC[12].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT12 eMIOS_UC_2.UC[12].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C12 eMIOS_UC_2.UC[12].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S12 eMIOS_UC_2.UC[12].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA12 eMIOS_UC_2.UC[12].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_12 eMIOS_UC_2.UC[12].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A13 eMIOS_UC_2.UC[13].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B13 eMIOS_UC_2.UC[13].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT13 eMIOS_UC_2.UC[13].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C13 eMIOS_UC_2.UC[13].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S13 eMIOS_UC_2.UC[13].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA13 eMIOS_UC_2.UC[13].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_13 eMIOS_UC_2.UC[13].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A14 eMIOS_UC_2.UC[14].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B14 eMIOS_UC_2.UC[14].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT14 eMIOS_UC_2.UC[14].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C14 eMIOS_UC_2.UC[14].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S14 eMIOS_UC_2.UC[14].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA14 eMIOS_UC_2.UC[14].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_14 eMIOS_UC_2.UC[14].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A15 eMIOS_UC_2.UC[15].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B15 eMIOS_UC_2.UC[15].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT15 eMIOS_UC_2.UC[15].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C15 eMIOS_UC_2.UC[15].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S15 eMIOS_UC_2.UC[15].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA15 eMIOS_UC_2.UC[15].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_15 eMIOS_UC_2.UC[15].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A16 eMIOS_UC_2.UC[16].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B16 eMIOS_UC_2.UC[16].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT16 eMIOS_UC_2.UC[16].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C16 eMIOS_UC_2.UC[16].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S16 eMIOS_UC_2.UC[16].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA16 eMIOS_UC_2.UC[16].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_16 eMIOS_UC_2.UC[16].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A17 eMIOS_UC_2.UC[17].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B17 eMIOS_UC_2.UC[17].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT17 eMIOS_UC_2.UC[17].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C17 eMIOS_UC_2.UC[17].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S17 eMIOS_UC_2.UC[17].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA17 eMIOS_UC_2.UC[17].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_17 eMIOS_UC_2.UC[17].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A18 eMIOS_UC_2.UC[18].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B18 eMIOS_UC_2.UC[18].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT18 eMIOS_UC_2.UC[18].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C18 eMIOS_UC_2.UC[18].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S18 eMIOS_UC_2.UC[18].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA18 eMIOS_UC_2.UC[18].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_18 eMIOS_UC_2.UC[18].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A19 eMIOS_UC_2.UC[19].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B19 eMIOS_UC_2.UC[19].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT19 eMIOS_UC_2.UC[19].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C19 eMIOS_UC_2.UC[19].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S19 eMIOS_UC_2.UC[19].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA19 eMIOS_UC_2.UC[19].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_19 eMIOS_UC_2.UC[19].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A20 eMIOS_UC_2.UC[20].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B20 eMIOS_UC_2.UC[20].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT20 eMIOS_UC_2.UC[20].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C20 eMIOS_UC_2.UC[20].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S20 eMIOS_UC_2.UC[20].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA20 eMIOS_UC_2.UC[20].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_20 eMIOS_UC_2.UC[20].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A21 eMIOS_UC_2.UC[21].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B21 eMIOS_UC_2.UC[21].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT21 eMIOS_UC_2.UC[21].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C21 eMIOS_UC_2.UC[21].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S21 eMIOS_UC_2.UC[21].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA21 eMIOS_UC_2.UC[21].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_21 eMIOS_UC_2.UC[21].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A22 eMIOS_UC_2.UC[22].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B22 eMIOS_UC_2.UC[22].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT22 eMIOS_UC_2.UC[22].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C22 eMIOS_UC_2.UC[22].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S22 eMIOS_UC_2.UC[22].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA22 eMIOS_UC_2.UC[22].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_22 eMIOS_UC_2.UC[22].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A23 eMIOS_UC_2.UC[23].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B23 eMIOS_UC_2.UC[23].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT23 eMIOS_UC_2.UC[23].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C23 eMIOS_UC_2.UC[23].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S23 eMIOS_UC_2.UC[23].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA23 eMIOS_UC_2.UC[23].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_23 eMIOS_UC_2.UC[23].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A24 eMIOS_UC_2.UC[24].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B24 eMIOS_UC_2.UC[24].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT24 eMIOS_UC_2.UC[24].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C24 eMIOS_UC_2.UC[24].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S24 eMIOS_UC_2.UC[24].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA24 eMIOS_UC_2.UC[24].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_24 eMIOS_UC_2.UC[24].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A25 eMIOS_UC_2.UC[25].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B25 eMIOS_UC_2.UC[25].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT25 eMIOS_UC_2.UC[25].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C25 eMIOS_UC_2.UC[25].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S25 eMIOS_UC_2.UC[25].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA25 eMIOS_UC_2.UC[25].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_25 eMIOS_UC_2.UC[25].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A26 eMIOS_UC_2.UC[26].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B26 eMIOS_UC_2.UC[26].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT26 eMIOS_UC_2.UC[26].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C26 eMIOS_UC_2.UC[26].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S26 eMIOS_UC_2.UC[26].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA26 eMIOS_UC_2.UC[26].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_26 eMIOS_UC_2.UC[26].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A27 eMIOS_UC_2.UC[27].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B27 eMIOS_UC_2.UC[27].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT27 eMIOS_UC_2.UC[27].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C27 eMIOS_UC_2.UC[27].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S27 eMIOS_UC_2.UC[27].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA27 eMIOS_UC_2.UC[27].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_27 eMIOS_UC_2.UC[27].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A28 eMIOS_UC_2.UC[28].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B28 eMIOS_UC_2.UC[28].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT28 eMIOS_UC_2.UC[28].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C28 eMIOS_UC_2.UC[28].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S28 eMIOS_UC_2.UC[28].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA28 eMIOS_UC_2.UC[28].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_28 eMIOS_UC_2.UC[28].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A29 eMIOS_UC_2.UC[29].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B29 eMIOS_UC_2.UC[29].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT29 eMIOS_UC_2.UC[29].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C29 eMIOS_UC_2.UC[29].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S29 eMIOS_UC_2.UC[29].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA29 eMIOS_UC_2.UC[29].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_29 eMIOS_UC_2.UC[29].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A30 eMIOS_UC_2.UC[30].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B30 eMIOS_UC_2.UC[30].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT30 eMIOS_UC_2.UC[30].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C30 eMIOS_UC_2.UC[30].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S30 eMIOS_UC_2.UC[30].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA30 eMIOS_UC_2.UC[30].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_30 eMIOS_UC_2.UC[30].C2.R    /* eMIOS UC Control 2 register n */
#define eMIOS_UC_2_eMIOS_2_A31 eMIOS_UC_2.UC[31].A.R       /* eMIOS UC A register n */
#define eMIOS_UC_2_eMIOS_2_B31 eMIOS_UC_2.UC[31].B.R       /* eMIOS UC B register n */
#define eMIOS_UC_2_eMIOS_2_CNT31 eMIOS_UC_2.UC[31].CNT.R   /* eMIOS CNT register n */
#define eMIOS_UC_2_eMIOS_2_C31 eMIOS_UC_2.UC[31].C.R       /* eMIOS UC Control register n */
#define eMIOS_UC_2_eMIOS_2_S31 eMIOS_UC_2.UC[31].S.R       /* eMIOS UC Status register n */
#define eMIOS_UC_2_eMIOS_2_ALTA31 eMIOS_UC_2.UC[31].ALTA.R /* eMIOS Alternate Address register n */
#define eMIOS_UC_2_eMIOS_2_C2_31 eMIOS_UC_2.UC[31].C2.R    /* eMIOS UC Control 2 register n */

/* uSDHC */
#define uSDHC_DS_ADDR        uSDHC.DS_ADDR.R               /* DMA System Address */
#define uSDHC_BLK_ATT        uSDHC.BLK_ATT.R               /* Block Attributes */
#define uSDHC_CMD_ARG        uSDHC.CMD_ARG.R               /* Command Argument */
#define uSDHC_CMD_XFR_TYP    uSDHC.CMD_XFR_TYP.R           /* Command Transfer Type */
#define uSDHC_CMD_RSP0       uSDHC.CMD_RSP0.R              /* Command Response0 */
#define uSDHC_CMD_RSP1       uSDHC.CMD_RSP1.R              /* Command Response1 */
#define uSDHC_CMD_RSP2       uSDHC.CMD_RSP2.R              /* Command Response2 */
#define uSDHC_CMD_RSP3       uSDHC.CMD_RSP3.R              /* Command Response3 */
#define uSDHC_DATA_BUFF_ACC_PORT uSDHC.DATA_BUFF_ACC_PORT.R /* Data Buffer Access Port */
#define uSDHC_PRES_STATE     uSDHC.PRES_STATE.R            /* Present State */
#define uSDHC_PROT_CTRL      uSDHC.PROT_CTRL.R             /* Protocol Control */
#define uSDHC_SYS_CTRL       uSDHC.SYS_CTRL.R              /* System Control */
#define uSDHC_INT_STATUS     uSDHC.INT_STATUS.R            /* Interrupt Status */
#define uSDHC_INT_STATUS_EN  uSDHC.INT_STATUS_EN.R         /* Interrupt Status Enable */
#define uSDHC_INT_SIGNAL_EN  uSDHC.INT_SIGNAL_EN.R         /* Interrupt Signal Enable */
#define uSDHC_AUTOCMD12_ERR_STATUS uSDHC.AUTOCMD12_ERR_STATUS.R /* Auto CMD12 Error Status */
#define uSDHC_HOST_CTRL_CAP  uSDHC.HOST_CTRL_CAP.R         /* Host Controller Capabilities */
#define uSDHC_WTMK_LVL       uSDHC.WTMK_LVL.R              /* Watermark Level */
#define uSDHC_MIX_CTRL       uSDHC.MIX_CTRL.R              /* Mixer Control */
#define uSDHC_FORCE_EVENT    uSDHC.FORCE_EVENT.R           /* Force Event */
#define uSDHC_ADMA_ERR_STATUS uSDHC.ADMA_ERR_STATUS.R      /* ADMA Error Status Register */
#define uSDHC_ADMA_SYS_ADDR  uSDHC.ADMA_SYS_ADDR.R         /* ADMA System Address */
#define uSDHC_VEND_SPEC      uSDHC.VEND_SPEC.R             /* Vendor Specific Register */
#define uSDHC_VEND_SPEC2     uSDHC.VEND_SPEC2.R            /* Vendor Specific 2 Register */
#define uSDHC_HOST_CTRL_VER  uSDHC.HOST_CTRL_VER.R         /* Host Controller Version */

#ifdef __MWERKS__
#pragma pop
#endif
#ifdef __ghs__
#pragma ghs endnowarning
#endif
#ifdef  __cplusplus
}
#endif
#endif /* ifdef _MPC5748G_H */
