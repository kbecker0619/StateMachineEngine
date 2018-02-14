/** @file MPC5748G_types_2.h
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

#ifndef CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_2_H_
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_2_H_

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
#define CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_2_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* ============================================================================
   =============================== Module: ENET ===============================
   ============================================================================ */

struct ENET_tag {
  uint8_t ENET_reserved0[4];
  union {                              /* Interrupt Event Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t BABR:1;                /* Babbling Receive Error */
      vuint32_t BABT:1;                /* Babbling Transmit Error */
      vuint32_t GRA:1;                 /* Graceful Stop Complete */
      vuint32_t TXF:1;                 /* Transmit Frame Interrupt */
      vuint32_t TXB:1;                 /* Transmit Buffer Interrupt */
      vuint32_t RXF:1;                 /* Receive Frame Interrupt */
      vuint32_t RXB:1;                 /* Receive Buffer Interrupt */
      vuint32_t MII:1;                 /* MII Interrupt. */
      vuint32_t EBERR:1;               /* Ethernet Bus Error */
      vuint32_t LC:1;                  /* Late Collision */
      vuint32_t RL:1;                  /* Collision Retry Limit */
      vuint32_t UN:1;                  /* Transmit FIFO Underrun */
      vuint32_t PLR:1;                 /* Payload Receive Error */
      vuint32_t WAKEUP:1;              /* Node Wakeup Request Indication */
      vuint32_t TS_AVAIL:1;            /* Transmit Timestamp Available */
      vuint32_t TS_TIMER:1;            /* Timestamp Timer */
      vuint32_t RXFLUSH_2:1;
      vuint32_t RXFLUSH_1:1;
      vuint32_t RXFLUSH_0:1;
      vuint32_t  :1;
      vuint32_t PARSERR:1;
      vuint32_t PARSRF:1;
      vuint32_t  :1;
      vuint32_t TXF2:1;                /* Transmit frame interrupt, class 2 */
      vuint32_t TXB2:1;                /* Transmit buffer interrupt, class 2 */
      vuint32_t RXF2:1;                /* Receive frame interrupt, class 2 */
      vuint32_t RXB2:1;                /* Receive buffer interrupt, class 2 */
      vuint32_t TXF1:1;                /* Transmit frame interrupt, class 1 */
      vuint32_t TXB1:1;                /* Transmit buffer interrupt, class 1 */
      vuint32_t RXF1:1;                /* Receive frame interrupt, class 1 */
      vuint32_t RXB1:1;                /* Receive buffer interrupt, class 1 */
    } B;
  } EIR;

  union {                              /* Interrupt Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t BABR:1;                /* BABR Interrupt Mask */
      vuint32_t BABT:1;                /* BABT Interrupt Mask */
      vuint32_t GRA:1;                 /* GRA Interrupt Mask */
      vuint32_t TXF:1;                 /* TXF Interrupt Mask */
      vuint32_t TXB:1;                 /* TXB Interrupt Mask */
      vuint32_t RXF:1;                 /* RXF Interrupt Mask */
      vuint32_t RXB:1;                 /* RXB Interrupt Mask */
      vuint32_t MII:1;                 /* MII Interrupt Mask */
      vuint32_t EBERR:1;               /* EBERR Interrupt Mask */
      vuint32_t LC:1;                  /* LC Interrupt Mask */
      vuint32_t RL:1;                  /* RL Interrupt Mask */
      vuint32_t UN:1;                  /* UN Interrupt Mask */
      vuint32_t PLR:1;                 /* PLR Interrupt Mask */
      vuint32_t WAKEUP:1;              /* WAKEUP Interrupt Mask */
      vuint32_t TS_AVAIL:1;            /* TS_AVAIL Interrupt Mask */
      vuint32_t TS_TIMER:1;            /* TS_TIMER Interrupt Mask */
      vuint32_t RXFLUSH_2:1;
      vuint32_t RXFLUSH_1:1;
      vuint32_t RXFLUSH_0:1;
      vuint32_t  :1;
      vuint32_t PARSERR:1;
      vuint32_t PARSRF:1;
      vuint32_t  :1;
      vuint32_t TXF2:1;                /* Transmit frame interrupt, class 2 */
      vuint32_t TXB2:1;                /* Transmit buffer interrupt, class 2 */
      vuint32_t RXF2:1;                /* Receive frame interrupt, class 2 */
      vuint32_t RXB2:1;                /* Receive buffer interrupt, class 2 */
      vuint32_t TXF1:1;                /* Transmit frame interrupt, class 1 */
      vuint32_t TXB1:1;                /* Transmit buffer interrupt, class 1 */
      vuint32_t RXF1:1;                /* Receive frame interrupt, class 1 */
      vuint32_t RXB1:1;                /* Receive buffer interrupt, class 1 */
    } B;
  } EIMR;

  uint8_t ENET_reserved1[4];
  union {                              /* Receive Descriptor Active Register - Ring 0 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t RDAR:1;                /* Receive Descriptor Active */
      vuint32_t  :24;
    } B;
  } RDAR;

  union {                              /* Transmit Descriptor Active Register - Ring 0 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t TDAR:1;                /* Transmit Descriptor Active */
      vuint32_t  :24;
    } B;
  } TDAR;

  uint8_t ENET_reserved2[12];
  union {                              /* Ethernet Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t SVLANDBL:1;            /* S-VLAN double tag */
      vuint32_t VLANUSE2ND:1;          /* VLAN use second tag */
      vuint32_t SVLANEN:1;             /* S-VLAN enable */
      vuint32_t DBSWP:1;               /* Descriptor Byte Swapping Enable */
      vuint32_t  :1;
      vuint32_t DBGEN:1;               /* Debug Enable */
      vuint32_t  :1;
      vuint32_t EN1588:1;              /* EN1588 Enable */
      vuint32_t SLEEP:1;               /* Sleep Mode Enable */
      vuint32_t MAGICEN:1;             /* Magic Packet Detection Enable */
      vuint32_t ETHEREN:1;             /* Ethernet Enable */
      vuint32_t RESET:1;               /* Ethernet MAC Reset */
    } B;
  } ECR;

  uint8_t ENET_reserved3[24];
  union {                              /* MII Management Frame Register */
    vuint32_t R;
    struct {
      vuint32_t ST:2;                  /* Start Of Frame Delimiter */
      vuint32_t OP:2;                  /* Operation Code */
      vuint32_t PA:5;                  /* PHY Address */
      vuint32_t RA:5;                  /* Register Address */
      vuint32_t TA:2;                  /* Turn Around */
      vuint32_t DATA:16;               /* Management Frame Data */
    } B;
  } MMFR;

  union {                              /* MII Speed Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t HOLDTIME:3;            /* Hold time On MDIO Output */
      vuint32_t DIS_PRE:1;             /* Disable Preamble */
      vuint32_t MII_SPEED:6;           /* MII Speed */
      vuint32_t  :1;
    } B;
  } MSCR;

  uint8_t ENET_reserved4[28];
  union {                              /* MIB Control Register */
    vuint32_t R;
    struct {
      vuint32_t MIB_DIS:1;             /* Disable MIB Logic */
      vuint32_t MIB_IDLE:1;            /* MIB Idle */
      vuint32_t MIB_CLEAR:1;           /* MIB Clear */
      vuint32_t  :29;
    } B;
  } MIBC;

  uint8_t ENET_reserved5[28];
  union {                              /* Receive Control Register */
    vuint32_t R;
    struct {
      vuint32_t GRS:1;                 /* Graceful Receive Stopped */
      vuint32_t NLC:1;                 /* Payload Length Check Disable */
      vuint32_t MAX_FL:14;             /* Maximum Frame Length */
      vuint32_t CFEN:1;                /* MAC Control Frame Enable */
      vuint32_t CRCFWD:1;              /* Terminate/Forward Received CRC */
      vuint32_t PAUFWD:1;              /* Terminate/Forward Pause Frames */
      vuint32_t PADEN:1;               /* Enable Frame Padding Remove On Receive */
      vuint32_t  :2;
      vuint32_t RMII_10T:1;
      vuint32_t RMII_MODE:1;           /* RMII Mode Enable */
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t FCE:1;                 /* Flow Control Enable */
      vuint32_t BC_REJ:1;              /* Broadcast Frame Reject */
      vuint32_t PROM:1;                /* Promiscuous Mode */
      vuint32_t MII_MODE:1;            /* Media Independent Interface Mode */
      vuint32_t DRT:1;                 /* Disable Receive On Transmit */
      vuint32_t LOOP:1;                /* Internal Loopback */
    } B;
  } RCR;

  uint8_t ENET_reserved6[60];
  union {                              /* Transmit Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t  :1;
      vuint32_t CRCFWD:1;              /* Forward Frame From Application With CRC */
      vuint32_t ADDINS:1;              /* Set MAC Address On Transmit */
      vuint32_t ADDSEL:3;              /* Source MAC Address Select On Transmit */
      vuint32_t RFC_PAUSE:1;           /* Receive Frame Control Pause */
      vuint32_t TFC_PAUSE:1;           /* Transmit Frame Control Pause */
      vuint32_t FDEN:1;                /* Full-Duplex Enable */
      vuint32_t  :1;
      vuint32_t GTS:1;                 /* Graceful Transmit Stop */
    } B;
  } TCR;

  uint8_t ENET_reserved7[28];
  union {                              /* Physical Address Lower Register */
    vuint32_t R;
    struct {
      vuint32_t PADDR1:32;             /* Pause Address */
    } B;
  } PALR;

  union {                              /* Physical Address Upper Register */
    vuint32_t R;
    struct {
      vuint32_t PADDR2:16;
      vuint32_t TYPE:16;               /* Type Field In PAUSE Frames */
    } B;
  } PAUR;

  union {                              /* Opcode/Pause Duration Register */
    vuint32_t R;
    struct {
      vuint32_t OPCODE:16;             /* Opcode Field In PAUSE Frames */
      vuint32_t PAUSE_DUR:16;          /* Pause Duration */
    } B;
  } OPD;

  union {                              /* Transmit Interrupt Coalescing Register */
    vuint32_t R;
    struct {
      vuint32_t ICEN:1;                /* Interrupt Coalescing Enable */
      vuint32_t ICCS:1;                /* Interrupt Coalescing Timer Clock Source Select */
      vuint32_t  :2;                   /* This field must be set to 0. */
      vuint32_t ICFT:8;                /* Interrupt coalescing frame count threshold */
      vuint32_t  :4;                   /* This field must be set to 0. */
      vuint32_t ICTT:16;               /* Interrupt coalescing timer threshold */
    } B;
  } TXIC[3];

  uint8_t ENET_reserved8[4];
  union {                              /* Receive Interrupt Coalescing Register */
    vuint32_t R;
    struct {
      vuint32_t ICEN:1;                /* Interrupt Coalescing Enable */
      vuint32_t ICCS:1;                /* Interrupt Coalescing Timer Clock Source Select */
      vuint32_t  :2;                   /* This field must be set to 0. */
      vuint32_t ICFT:8;                /* Interrupt coalescing frame count threshold */
      vuint32_t  :4;                   /* This field must be set to 0. */
      vuint32_t ICTT:16;               /* Interrupt coalescing timer threshold */
    } B;
  } RXIC[3];

  uint8_t ENET_reserved9[12];
  union {                              /* Descriptor Individual Upper Address Register */
    vuint32_t R;
    struct {
      vuint32_t IADDR1:32;
    } B;
  } IAUR;

  union {                              /* Descriptor Individual Lower Address Register */
    vuint32_t R;
    struct {
      vuint32_t IADDR2:32;
    } B;
  } IALR;

  union {                              /* Descriptor Group Upper Address Register */
    vuint32_t R;
    struct {
      vuint32_t GADDR1:32;
    } B;
  } GAUR;

  union {                              /* Descriptor Group Lower Address Register */
    vuint32_t R;
    struct {
      vuint32_t GADDR2:32;
    } B;
  } GALR;

  uint8_t ENET_reserved10[28];
  union {                              /* Transmit FIFO Watermark Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t STRFWD:1;              /* Store And Forward Enable */
      vuint32_t  :2;
      vuint32_t TFWR:6;                /* Transmit FIFO Write */
    } B;
  } TFWR;

  uint8_t ENET_reserved11[24];
  union {                              /* Receive Descriptor Ring 1 Start Register */
    vuint32_t R;
    struct {
      vuint32_t R_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } RDSR1;

  union {                              /* Transmit Buffer Descriptor Ring 1 Start Register */
    vuint32_t R;
    struct {
      vuint32_t X_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } TDSR1;

  union {                              /* Maximum Receive Buffer Size Register - Ring 1 */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t R_BUF_SIZE:10;
      vuint32_t  :4;
    } B;
  } MRBR1;

  union {                              /* Receive Descriptor Ring 2 Start Register */
    vuint32_t R;
    struct {
      vuint32_t R_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } RDSR2;

  union {                              /* Transmit Buffer Descriptor Ring 2 Start Register */
    vuint32_t R;
    struct {
      vuint32_t X_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } TDSR2;

  union {                              /* Maximum Receive Buffer Size Register - Ring 2 */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t R_BUF_SIZE:10;
      vuint32_t  :4;
    } B;
  } MRBR2;

  uint8_t ENET_reserved12[8];
  union {                              /* Receive Descriptor Ring 0 Start Register */
    vuint32_t R;
    struct {
      vuint32_t R_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } RDSR;

  union {                              /* Transmit Buffer Descriptor Ring 0 Start Register */
    vuint32_t R;
    struct {
      vuint32_t X_DES_START:29;
      vuint32_t  :1;
      vuint32_t  :2;
    } B;
  } TDSR;

  union {                              /* Maximum Receive Buffer Size Register - Ring 0 */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t R_BUF_SIZE:10;
      vuint32_t  :4;
    } B;
  } MRBR;

  uint8_t ENET_reserved13[4];
  union {                              /* Receive FIFO Section Full Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t RX_SECTION_FULL:8;     /* Value Of Receive FIFO Section Full Threshold */
    } B;
  } RSFL;

  union {                              /* Receive FIFO Section Empty Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t STAT_SECTION_EMPTY:5;  /* RX Status FIFO Section Empty Threshold */
      vuint32_t  :8;
      vuint32_t RX_SECTION_EMPTY:8;    /* Value Of The Receive FIFO Section Empty Threshold */
    } B;
  } RSEM;

  union {                              /* Receive FIFO Almost Empty Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t RX_ALMOST_EMPTY:8;     /* Value Of The Receive FIFO Almost Empty Threshold */
    } B;
  } RAEM;

  union {                              /* Receive FIFO Almost Full Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t RX_ALMOST_FULL:8;      /* Value Of The Receive FIFO Almost Full Threshold */
    } B;
  } RAFL;

  union {                              /* Transmit FIFO Section Empty Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t TX_SECTION_EMPTY:8;    /* Value Of The Transmit FIFO Section Empty Threshold */
    } B;
  } TSEM;

  union {                              /* Transmit FIFO Almost Empty Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t TX_ALMOST_EMPTY:8;     /* Value of Transmit FIFO Almost Empty Threshold */
    } B;
  } TAEM;

  union {                              /* Transmit FIFO Almost Full Threshold */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t TX_ALMOST_FULL:8;      /* Value Of The Transmit FIFO Almost Full Threshold */
    } B;
  } TAFL;

  union {                              /* Transmit Inter-Packet Gap */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t IPG:5;                 /* Transmit Inter-Packet Gap */
    } B;
  } TIPG;

  union {                              /* Frame Truncation Length */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t TRUNC_FL:14;           /* Frame Truncation Length */
    } B;
  } FTRL;

  uint8_t ENET_reserved14[12];
  union {                              /* Transmit Accelerator Function Configuration */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t PROCHK:1;
      vuint32_t IPCHK:1;
      vuint32_t  :2;
      vuint32_t SHIFT16:1;             /* TX FIFO Shift-16 */
    } B;
  } TACC;

  union {                              /* Receive Accelerator Function Configuration */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t SHIFT16:1;             /* RX FIFO Shift-16 */
      vuint32_t LINEDIS:1;             /* Enable Discard Of Frames With MAC Layer Errors */
      vuint32_t  :3;
      vuint32_t PRODIS:1;              /* Enable Discard Of Frames With Wrong Protocol Checksum */
      vuint32_t IPDIS:1;               /* Enable Discard Of Frames With Wrong IPv4 Header Checksum */
      vuint32_t PADREM:1;              /* Enable Padding Removal For Short IP Frames */
    } B;
  } RACC;

  union {                              /* Receive Classification Match Register for Class n */
    vuint32_t R;
    struct {
      vuint32_t  :15;
      vuint32_t MATCHEN:1;             /* Match Enable */
      vuint32_t  :1;
      vuint32_t CMP3:3;                /* Compare 3 */
      vuint32_t  :1;
      vuint32_t CMP2:3;                /* Compare 2 */
      vuint32_t  :1;
      vuint32_t CMP1:3;                /* Compare 1 */
      vuint32_t  :1;
      vuint32_t CMP0:3;                /* Compare 0 */
    } B;
  } RCMR[2];

  uint8_t ENET_reserved15[8];
  union {                              /* DMA Class Based Configuration */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t  :6;
      vuint32_t CALC_NOIPG:1;          /* Calculate no IPG */
      vuint32_t DMA_CLASS_EN:1;        /* DMA class enable */
      vuint32_t IDLE_SLOPE:16;         /* Idle slope */
    } B;
  } DMACFG[2];

  union {                              /* Receive Descriptor Active Register - Ring 1 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t RDAR:1;                /* Receive Descriptor Active */
      vuint32_t  :24;
    } B;
  } RDAR1;

  union {                              /* Transmit Descriptor Active Register - Ring 1 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t TDAR:1;                /* Transmit Descriptor Active */
      vuint32_t  :24;
    } B;
  } TDAR1;

  union {                              /* Receive Descriptor Active Register - Ring 2 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t RDAR:1;                /* Receive Descriptor Active */
      vuint32_t  :24;
    } B;
  } RDAR2;

  union {                              /* Transmit Descriptor Active Register - Ring 2 */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t TDAR:1;                /* Transmit Descriptor Active */
      vuint32_t  :24;
    } B;
  } TDAR2;

  union {                              /* QOS Scheme */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t RX_FLUSH2:1;           /* RX Flush Ring 2 */
      vuint32_t RX_FLUSH1:1;           /* RX Flush Ring 1 */
      vuint32_t RX_FLUSH0:1;           /* RX Flush Ring 0 */
      vuint32_t TX_SCHEME:3;           /* TX scheme configuration */
    } B;
  } QOS;

  uint8_t ENET_reserved16[16];
  union {                              /* Tx Packet Count Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_PACKETS;

  union {                              /* Tx Broadcast Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Broadcast packets */
    } B;
  } RMON_T_BC_PKT;

  union {                              /* Tx Multicast Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Multicast packets */
    } B;
  } RMON_T_MC_PKT;

  union {                              /* Tx Packets with CRC/Align Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packets with CRC/align error */
    } B;
  } RMON_T_CRC_ALIGN;

  union {                              /* Tx Packets Less Than Bytes and Good CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_UNDERSIZE;

  union {                              /* Tx Packets GT MAX_FL bytes and Good CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_OVERSIZE;

  union {                              /* Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_FRAG;

  union {                              /* Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_JAB;

  union {                              /* Tx Collision Count Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_COL;

  union {                              /* Tx 64-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P64;

  union {                              /* Tx 65- to 127-byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P65TO127;

  union {                              /* Tx 128- to 255-byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P128TO255;

  union {                              /* Tx 256- to 511-byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P256TO511;

  union {                              /* Tx 512- to 1023-byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P512TO1023;

  union {                              /* Tx 1024- to 2047-byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P1024TO2047;

  union {                              /* Tx Packets Greater Than 2048 Bytes Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TXPKTS:16;             /* Packet count */
    } B;
  } RMON_T_P_GTE2048;

  union {                              /* Tx Octets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t TXOCTS:32;             /* Octet count */
    } B;
  } RMON_T_OCTETS;

  uint8_t ENET_reserved17[4];
  union {                              /* Frames Transmitted OK Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_FRAME_OK;

  union {                              /* Frames Transmitted with Single Collision Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_1COL;

  union {                              /* Frames Transmitted with Multiple Collisions Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_MCOL;

  union {                              /* Frames Transmitted after Deferral Delay Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_DEF;

  union {                              /* Frames Transmitted with Late Collision Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_LCOL;

  union {                              /* Frames Transmitted with Excessive Collisions Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_EXCOL;

  union {                              /* Frames Transmitted with Tx FIFO Underrun Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_MACERR;

  union {                              /* Frames Transmitted with Carrier Sense Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_CSERR;

  uint8_t ENET_reserved18[4];
  union {                              /* Flow Control Pause Frames Transmitted Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_T_FDXFC;

  union {                              /* Octet Count for Frames Transmitted w/o Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Octet count */
    } B;
  } IEEE_T_OCTETS_OK;

  uint8_t ENET_reserved19[12];
  union {                              /* Rx Packet Count Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_PACKETS;

  union {                              /* Rx Broadcast Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_BC_PKT;

  union {                              /* Rx Multicast Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_MC_PKT;

  union {                              /* Rx Packets with CRC/Align Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_CRC_ALIGN;

  union {                              /* Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_UNDERSIZE;

  union {                              /* Rx Packets Greater Than MAX_FL and Good CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_OVERSIZE;

  union {                              /* Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_FRAG;

  union {                              /* Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_JAB;

  uint8_t ENET_reserved20[4];
  union {                              /* Rx 64-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P64;

  union {                              /* Rx 65- to 127-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P65TO127;

  union {                              /* Rx 128- to 255-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P128TO255;

  union {                              /* Rx 256- to 511-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P256TO511;

  union {                              /* Rx 512- to 1023-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P512TO1023;

  union {                              /* Rx 1024- to 2047-Byte Packets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P1024TO2047;

  union {                              /* Rx Packets Greater than 2048 Bytes Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Packet count */
    } B;
  } RMON_R_P_GTE2048;

  union {                              /* Rx Octets Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Octet count */
    } B;
  } RMON_R_OCTETS;

  union {                              /* Frames not Counted Correctly Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_R_DROP;

  union {                              /* Frames Received OK Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_R_FRAME_OK;

  union {                              /* Frames Received with CRC Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_R_CRC;

  union {                              /* Frames Received with Alignment Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Frame count */
    } B;
  } IEEE_R_ALIGN;

  union {                              /* Receive FIFO Overflow Count Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Count */
    } B;
  } IEEE_R_MACERR;

  union {                              /* Flow Control Pause Frames Received Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t COUNT:16;              /* Pause frame count */
    } B;
  } IEEE_R_FDXFC;

  union {                              /* Octet Count for Frames Received without Error Statistic Register */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Octet count */
    } B;
  } IEEE_R_OCTETS_OK;

  uint8_t ENET_reserved21[284];
  union {                              /* Adjustable Timer Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t SLAVE:1;               /* Enable Timer Slave Mode */
      vuint32_t  :1;
      vuint32_t CAPTURE:1;             /* Capture Timer Value */
      vuint32_t  :1;
      vuint32_t RESTART:1;             /* Reset Timer */
      vuint32_t  :1;
      vuint32_t PINPER:1;
      vuint32_t  :2;
      vuint32_t PEREN:1;               /* Enable Periodical Event */
      vuint32_t OFFRST:1;              /* Reset Timer On Offset Event */
      vuint32_t OFFEN:1;               /* Enable One-Shot Offset Event */
      vuint32_t  :1;
      vuint32_t EN:1;                  /* Enable Timer */
    } B;
  } ATCR;

  union {                              /* Timer Value Register */
    vuint32_t R;
    struct {
      vuint32_t ATIME:32;
    } B;
  } ATVR;

  union {                              /* Timer Offset Register */
    vuint32_t R;
    struct {
      vuint32_t OFFSET:32;
    } B;
  } ATOFF;

  union {                              /* Timer Period Register */
    vuint32_t R;
    struct {
      vuint32_t PERIOD:32;
    } B;
  } ATPER;

  union {                              /* Timer Correction Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t COR:31;                /* Correction Counter Wrap-Around Value */
    } B;
  } ATCOR;

  union {                              /* Time-Stamping Clock Period Register */
    vuint32_t R;
    struct {
      vuint32_t  :17;
      vuint32_t INC_CORR:7;            /* Correction Increment Value */
      vuint32_t  :1;
      vuint32_t INC:7;                 /* Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds */
    } B;
  } ATINC;

  union {                              /* Timestamp of Last Transmitted Frame */
    vuint32_t R;
    struct {
      vuint32_t TIMESTAMP:32;
    } B;
  } ATSTMP;

  uint8_t ENET_reserved22[356];
  union {                              /* Pattern Match Data Register */
    vuint32_t R;
    struct {
      vuint32_t MATCHDATA:32;          /* Match Data */
    } B;
  } MDATA;

  union {                              /* Match Entry Mask Register */
    vuint32_t R;
    struct {
      vuint32_t MATCHMASK:32;          /* Match Mask */
    } B;
  } MMASK;

  union {                              /* Match Entry Rules Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t AF:1;                  /* Accept Frame */
      vuint32_t RF:1;                  /* Reject Frame */
      vuint32_t IM:1;                  /* Invert Match */
      vuint32_t  :5;
      vuint32_t OK_INDEX:8;
      vuint32_t  :8;
      vuint32_t FRMOFF:6;              /* Frame Offset */
      vuint32_t  :2;
    } B;
  } MCONFIG;

  union {                              /* Match Entry Read/Write Command Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t RD:1;                  /* Entry Read Command */
      vuint32_t WR:1;                  /* Entry write command */
      vuint32_t ENTRYADD:8;            /* Entry Address */
    } B;
  } MENTRYRW;

  union {                              /* Receive Parser Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t MAXINDEX:8;            /* Maximum Index */
      vuint32_t  :3;
      vuint32_t PRSRSCLR:1;            /* Clear Parser Statistics Counter */
      vuint32_t  :2;
      vuint32_t INVBYTORD:1;           /* Inverse Frame Byte Order */
      vuint32_t ENPARSER:1;            /* Enable Receive Parser */
    } B;
  } RXPCTL;

  union {                              /* Maximum Frame Offset */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t MXFRMOFF:6;            /* Max. Frame Offset */
    } B;
  } MAXFRMOFF;

  union {                              /* Receive Parser Status */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t RXPRSDN:1;             /* Receive Parser Done */
      vuint32_t  :2;
      vuint32_t INVMAXIDX:1;           /* Invalid Value of MAXINDEX */
      vuint32_t PRSENDERR:1;           /* Parser End Error */
      vuint32_t FMOFFERR:1;            /* Maximum Frame Offset Error */
      vuint32_t NOMTCERR:1;            /* No Match Error */
      vuint32_t TBLDPTERR:1;           /* Table Depth Error */
      vuint32_t MXINDERR:1;            /* Maximum Index Error */
    } B;
  } RXPARST;

  uint8_t ENET_reserved23[4];
  union {                              /* Parser Discard Count */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PARSDSCD;

  union {                              /* Parser Accept Count 0 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSACPT0;

  union {                              /* Parser Reject Count 0 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSRJCT0;

  union {                              /* Parser Accept Count 1 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSACPT1;

  union {                              /* Parser Reject Count 1 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSRJCT1;

  union {                              /* Parser Accept Count 2 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSACPT2;

  union {                              /* Parser Reject Count 2 */
    vuint32_t R;
    struct {
      vuint32_t COUNT:32;              /* Count */
    } B;
  } PRSRJCT2;

  uint8_t ENET_reserved24[72];
  union {                              /* Timer Global Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t TF3:1;                 /* Copy Of Timer Flag For Channel 3 */
      vuint32_t TF2:1;                 /* Copy Of Timer Flag For Channel 2 */
      vuint32_t TF1:1;                 /* Copy Of Timer Flag For Channel 1 */
      vuint32_t TF0:1;                 /* Copy Of Timer Flag For Channel 0 */
    } B;
  } TGSR;

  struct {
    union {                            /* Timer Control Status Register */
      vuint32_t R;
      struct {
        vuint32_t  :24;
        vuint32_t TF:1;                /* Timer Flag */
        vuint32_t TIE:1;               /* Timer Interrupt Enable */
        vuint32_t TMODE:4;             /* Timer Mode */
        vuint32_t  :1;
        vuint32_t TDRE:1;              /* Timer DMA Request Enable */
      } B;
    } TCSR;
    union {                            /* Timer Compare Capture Register */
      vuint32_t R;
      struct {
        vuint32_t TCC:32;              /* Timer Capture Compare */
      } B;
    } TCCR;
  } TIMER[4];
};


/* ============================================================================
   =============================== Module: FCCU ===============================
   ============================================================================ */

struct FCCU_tag {
  union {                              /* Control Register */
    vuint32_t R;
    struct {
      vuint32_t FILTER_BYPASS:1;
      vuint32_t FILTER_WIDTH:2;
      vuint32_t  :19;
      vuint32_t DEBUG:1;
      vuint32_t  :1;
      vuint32_t OPS:2;
      vuint32_t  :1;
      vuint32_t OPR:5;
    } B;
  } CTRL;

  union {                              /* CTRL Key Register */
    vuint32_t R;
    struct {
      vuint32_t CTRLK:32;
    } B;
  } CTRLK;

  union {                              /* Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t TGL:7;                 /* EOUT Toggling Time */
      vuint32_t FCCU_SET_AFTER_RESET:1;
      vuint32_t FCCU_SET_CLEAR:2;
      vuint32_t  :2;
      vuint32_t  :4;
      vuint32_t  :1;
      vuint32_t FOME:2;                /* Fault Output Mode Extension */
      vuint32_t OD:1;
      vuint32_t CM:1;
      vuint32_t SM:1;
      vuint32_t PS:1;
      vuint32_t FOM:3;
      vuint32_t  :6;
    } B;
  } CFG;

  uint8_t FCCU_reserved0[16];
  union {                              /* NCF Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t NCFC31:1;
      vuint32_t NCFC30:1;
      vuint32_t NCFC29:1;
      vuint32_t NCFC28:1;
      vuint32_t NCFC27:1;
      vuint32_t NCFC26:1;
      vuint32_t NCFC25:1;
      vuint32_t NCFC24:1;
      vuint32_t NCFC23:1;
      vuint32_t NCFC22:1;
      vuint32_t NCFC21:1;
      vuint32_t NCFC20:1;
      vuint32_t NCFC19:1;
      vuint32_t NCFC18:1;
      vuint32_t NCFC17:1;
      vuint32_t NCFC16:1;
      vuint32_t NCFC15:1;
      vuint32_t NCFC14:1;
      vuint32_t NCFC13:1;
      vuint32_t NCFC12:1;
      vuint32_t NCFC11:1;
      vuint32_t NCFC10:1;
      vuint32_t NCFC9:1;
      vuint32_t NCFC8:1;
      vuint32_t NCFC7:1;
      vuint32_t NCFC6:1;
      vuint32_t NCFC5:1;
      vuint32_t NCFC4:1;
      vuint32_t NCFC3:1;
      vuint32_t NCFC2:1;
      vuint32_t NCFC1:1;
      vuint32_t NCFC0:1;
    } B;
  } NCF_CFG[3];

  uint8_t FCCU_reserved1[36];
  union {                              /* NCFS Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t NCFSC31:1;
      vuint32_t NCFSC30:1;
      vuint32_t NCFSC29:1;
      vuint32_t NCFSC28:1;
      vuint32_t NCFSC27:1;
      vuint32_t NCFSC26:1;
      vuint32_t NCFSC25:1;
      vuint32_t NCFSC24:1;
      vuint32_t NCFSC23:1;
      vuint32_t NCFSC22:1;
      vuint32_t NCFSC21:1;
      vuint32_t NCFSC20:1;
      vuint32_t NCFSC19:1;
      vuint32_t NCFSC18:1;
      vuint32_t NCFSC17:1;
      vuint32_t NCFSC16:1;
      vuint32_t NCFSC15:1;
      vuint32_t NCFSC14:1;
      vuint32_t NCFSC13:1;
      vuint32_t NCFSC12:1;
      vuint32_t NCFSC11:1;
      vuint32_t NCFSC10:1;
      vuint32_t NCFSC9:1;
      vuint32_t NCFSC8:1;
      vuint32_t NCFSC7:1;
      vuint32_t NCFSC6:1;
      vuint32_t NCFSC5:1;
      vuint32_t NCFSC4:1;
      vuint32_t NCFSC3:1;
      vuint32_t NCFSC2:1;
      vuint32_t NCFSC1:1;
      vuint32_t NCFSC0:1;
    } B;
  } NCFS_CFG[5];

  uint8_t FCCU_reserved2[32];
  union {                              /* NCF Status Register */
    vuint32_t R;
    struct {
      vuint32_t NCFS31:1;
      vuint32_t NCFS30:1;
      vuint32_t NCFS29:1;
      vuint32_t NCFS28:1;
      vuint32_t NCFS27:1;
      vuint32_t NCFS26:1;
      vuint32_t NCFS25:1;
      vuint32_t NCFS24:1;
      vuint32_t NCFS23:1;
      vuint32_t NCFS22:1;
      vuint32_t NCFS21:1;
      vuint32_t NCFS20:1;
      vuint32_t NCFS19:1;
      vuint32_t NCFS18:1;
      vuint32_t NCFS17:1;
      vuint32_t NCFS16:1;
      vuint32_t NCFS15:1;
      vuint32_t NCFS14:1;
      vuint32_t NCFS13:1;
      vuint32_t NCFS12:1;
      vuint32_t NCFS11:1;
      vuint32_t NCFS10:1;
      vuint32_t NCFS9:1;
      vuint32_t NCFS8:1;
      vuint32_t NCFS7:1;
      vuint32_t NCFS6:1;
      vuint32_t NCFS5:1;
      vuint32_t NCFS4:1;
      vuint32_t NCFS3:1;
      vuint32_t NCFS2:1;
      vuint32_t NCFS1:1;
      vuint32_t NCFS0:1;
    } B;
  } NCF_S[3];

  uint8_t FCCU_reserved3[4];
  union {                              /* NCF Key Register */
    vuint32_t R;
    struct {
      vuint32_t NCFK:32;
    } B;
  } NCFK;

  union {                              /* NCF Enable Register */
    vuint32_t R;
    struct {
      vuint32_t NCFE31:1;
      vuint32_t NCFE30:1;
      vuint32_t NCFE29:1;
      vuint32_t NCFE28:1;
      vuint32_t NCFE27:1;
      vuint32_t NCFE26:1;
      vuint32_t NCFE25:1;
      vuint32_t NCFE24:1;
      vuint32_t NCFE23:1;
      vuint32_t NCFE22:1;
      vuint32_t NCFE21:1;
      vuint32_t NCFE20:1;
      vuint32_t NCFE19:1;
      vuint32_t NCFE18:1;
      vuint32_t NCFE17:1;
      vuint32_t NCFE16:1;
      vuint32_t NCFE15:1;
      vuint32_t NCFE14:1;
      vuint32_t NCFE13:1;
      vuint32_t NCFE12:1;
      vuint32_t NCFE11:1;
      vuint32_t NCFE10:1;
      vuint32_t NCFE9:1;
      vuint32_t NCFE8:1;
      vuint32_t NCFE7:1;
      vuint32_t NCFE6:1;
      vuint32_t NCFE5:1;
      vuint32_t NCFE4:1;
      vuint32_t NCFE3:1;
      vuint32_t NCFE2:1;
      vuint32_t NCFE1:1;
      vuint32_t NCFE0:1;
    } B;
  } NCF_E[3];

  uint8_t FCCU_reserved4[4];
  union {                              /* NCF Time-out Enable Register */
    vuint32_t R;
    struct {
      vuint32_t NCFTOE31:1;
      vuint32_t NCFTOE30:1;
      vuint32_t NCFTOE29:1;
      vuint32_t NCFTOE28:1;
      vuint32_t NCFTOE27:1;
      vuint32_t NCFTOE26:1;
      vuint32_t NCFTOE25:1;
      vuint32_t NCFTOE24:1;
      vuint32_t NCFTOE23:1;
      vuint32_t NCFTOE22:1;
      vuint32_t NCFTOE21:1;
      vuint32_t NCFTOE20:1;
      vuint32_t NCFTOE19:1;
      vuint32_t NCFTOE18:1;
      vuint32_t NCFTOE17:1;
      vuint32_t NCFTOE16:1;
      vuint32_t NCFTOE15:1;
      vuint32_t NCFTOE14:1;
      vuint32_t NCFTOE13:1;
      vuint32_t NCFTOE12:1;
      vuint32_t NCFTOE11:1;
      vuint32_t NCFTOE10:1;
      vuint32_t NCFTOE9:1;
      vuint32_t NCFTOE8:1;
      vuint32_t NCFTOE7:1;
      vuint32_t NCFTOE6:1;
      vuint32_t NCFTOE5:1;
      vuint32_t NCFTOE4:1;
      vuint32_t NCFTOE3:1;
      vuint32_t NCFTOE2:1;
      vuint32_t NCFTOE1:1;
      vuint32_t NCFTOE0:1;
    } B;
  } NCF_TOE[3];

  uint8_t FCCU_reserved5[4];
  union {                              /* NCF Time-out Register */
    vuint32_t R;
    struct {
      vuint32_t TO:32;
    } B;
  } NCF_TO;

  union {                              /* CFG Timeout Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t TO:3;
    } B;
  } CFG_TO;

  union {                              /* IO Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t EIN1:1;
      vuint32_t EIN0:1;
      vuint32_t  :2;
      vuint32_t EOUTX:2;
    } B;
  } EINOUT;

  union {                              /* Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t PhysicErrorPin:2;
      vuint32_t ESTAT:1;
      vuint32_t STATUS:3;
    } B;
  } STAT;

  union {                              /* NA Freeze Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t NAFS:8;
    } B;
  } N2AF_STATUS;

  union {                              /* AF Freeze Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t AF_SRC:2;
      vuint32_t AFFS:8;
    } B;
  } A2FF_STATUS;

  union {                              /* NF Freeze Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t NF_SRC:2;
      vuint32_t NFFS:8;
    } B;
  } N2FF_STATUS;

  union {                              /* FA Freeze Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t FAFS:9;
    } B;
  } F2A_STATUS;

  uint8_t FCCU_reserved6[8];
  union {                              /* NCF Fake Register */
    vuint32_t R;
    struct {
      vuint32_t  :25;
      vuint32_t FNCFC:7;
    } B;
  } NCFF;

  union {                              /* IRQ Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t DMA_REQ:1;
      vuint32_t IRQ_EOUT:1;
      vuint32_t NMI_STAT:1;
      vuint32_t ALRM_STAT:1;
      vuint32_t CFG_TO_STAT:1;
    } B;
  } IRQ_STAT;

  union {                              /* IRQ Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t IRQ_EOUT_EN:1;
      vuint32_t  :2;
      vuint32_t CFG_TO_IEN:1;
    } B;
  } IRQ_EN;

  union {                              /* XTMR Register */
    vuint32_t R;
    struct {
      vuint32_t XTMR:32;
    } B;
  } XTMR;

  union {                              /* MCS Register */
    vuint32_t R;
    struct {
      vuint32_t VL3:1;
      vuint32_t FS3:1;
      vuint32_t  :2;
      vuint32_t MCS3:4;
      vuint32_t VL2:1;
      vuint32_t FS2:1;
      vuint32_t  :2;
      vuint32_t MCS2:4;
      vuint32_t VL1:1;
      vuint32_t FS1:1;
      vuint32_t  :2;
      vuint32_t MCS1:4;
      vuint32_t VL0:1;
      vuint32_t FS0:1;
      vuint32_t  :2;
      vuint32_t MCS0:4;
    } B;
  } MCS;

  union {                              /* Transient Lock Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t TRANSKEY:9;
    } B;
  } TRANS_LOCK;

  union {                              /* Permanent Lock Register */
    vuint32_t R;
    struct {
      vuint32_t  :23;
      vuint32_t PERMNTKEY:9;
    } B;
  } PERMNT_LOCK;

  union {                              /* Delta T Register */
    vuint32_t R;
    struct {
      vuint32_t  :2;
      vuint32_t T_TRG:14;              /* IRQ DMA trigger time */
      vuint32_t  :2;
      vuint32_t DELTA_T:14;
    } B;
  } DELTA_T;

  union {                              /* IRQ Alarm Enable Register */
    vuint32_t R;
    struct {
      vuint32_t IRQEN31:1;
      vuint32_t IRQEN30:1;
      vuint32_t IRQEN29:1;
      vuint32_t IRQEN28:1;
      vuint32_t IRQEN27:1;
      vuint32_t IRQEN26:1;
      vuint32_t IRQEN25:1;
      vuint32_t IRQEN24:1;
      vuint32_t IRQEN23:1;
      vuint32_t IRQEN22:1;
      vuint32_t IRQEN21:1;
      vuint32_t IRQEN20:1;
      vuint32_t IRQEN19:1;
      vuint32_t IRQEN18:1;
      vuint32_t IRQEN17:1;
      vuint32_t IRQEN16:1;
      vuint32_t IRQEN15:1;
      vuint32_t IRQEN14:1;
      vuint32_t IRQEN13:1;
      vuint32_t IRQEN12:1;
      vuint32_t IRQEN11:1;
      vuint32_t IRQEN10:1;
      vuint32_t IRQEN9:1;
      vuint32_t IRQEN8:1;
      vuint32_t IRQEN7:1;
      vuint32_t IRQEN6:1;
      vuint32_t IRQEN5:1;
      vuint32_t IRQEN4:1;
      vuint32_t IRQEN3:1;
      vuint32_t IRQEN2:1;
      vuint32_t IRQEN1:1;
      vuint32_t IRQEN0:1;
    } B;
  } IRQ_ALARM_EN[3];

  uint8_t FCCU_reserved7[4];
  union {                              /* NMI Enable Register */
    vuint32_t R;
    struct {
      vuint32_t NMIEN31:1;
      vuint32_t NMIEN30:1;
      vuint32_t NMIEN29:1;
      vuint32_t NMIEN28:1;
      vuint32_t NMIEN27:1;
      vuint32_t NMIEN26:1;
      vuint32_t NMIEN25:1;
      vuint32_t NMIEN24:1;
      vuint32_t NMIEN23:1;
      vuint32_t NMIEN22:1;
      vuint32_t NMIEN21:1;
      vuint32_t NMIEN20:1;
      vuint32_t NMIEN19:1;
      vuint32_t NMIEN18:1;
      vuint32_t NMIEN17:1;
      vuint32_t NMIEN16:1;
      vuint32_t NMIEN15:1;
      vuint32_t NMIEN14:1;
      vuint32_t NMIEN13:1;
      vuint32_t NMIEN12:1;
      vuint32_t NMIEN11:1;
      vuint32_t NMIEN10:1;
      vuint32_t NMIEN9:1;
      vuint32_t NMIEN8:1;
      vuint32_t NMIEN7:1;
      vuint32_t NMIEN6:1;
      vuint32_t NMIEN5:1;
      vuint32_t NMIEN4:1;
      vuint32_t NMIEN3:1;
      vuint32_t NMIEN2:1;
      vuint32_t NMIEN1:1;
      vuint32_t NMIEN0:1;
    } B;
  } NMI_EN[3];

  uint8_t FCCU_reserved8[4];
  union {                              /* EOUT Signaling Enable Register */
    vuint32_t R;
    struct {
      vuint32_t EOUTEN31:1;
      vuint32_t EOUTEN30:1;
      vuint32_t EOUTEN29:1;
      vuint32_t EOUTEN28:1;
      vuint32_t EOUTEN27:1;
      vuint32_t EOUTEN26:1;
      vuint32_t EOUTEN25:1;
      vuint32_t EOUTEN24:1;
      vuint32_t EOUTEN23:1;
      vuint32_t EOUTEN22:1;
      vuint32_t EOUTEN21:1;
      vuint32_t EOUTEN20:1;
      vuint32_t EOUTEN19:1;
      vuint32_t EOUTEN18:1;
      vuint32_t EOUTEN17:1;
      vuint32_t EOUTEN16:1;
      vuint32_t EOUTEN15:1;
      vuint32_t EOUTEN14:1;
      vuint32_t EOUTEN13:1;
      vuint32_t EOUTEN12:1;
      vuint32_t EOUTEN11:1;
      vuint32_t EOUTEN10:1;
      vuint32_t EOUTEN9:1;
      vuint32_t EOUTEN8:1;
      vuint32_t EOUTEN7:1;
      vuint32_t EOUTEN6:1;
      vuint32_t EOUTEN5:1;
      vuint32_t EOUTEN4:1;
      vuint32_t EOUTEN3:1;
      vuint32_t EOUTEN2:1;
      vuint32_t EOUTEN1:1;
      vuint32_t EOUTEN0:1;
    } B;
  } EOUT_SIG_EN[3];
};


/* ============================================================================
   =============================== Module: FIRC ===============================
   ============================================================================ */

struct FIRC_tag {
  union {                              /* Control register */
    vuint32_t R;
    struct {
      vuint32_t  :10;
      vuint32_t FIRCTRIM:6;
      vuint32_t  :3;
      vuint32_t FIRCDIV:5;             /* The FIRC Divider bits select the clock divider factor. */
      vuint32_t  :3;
      vuint32_t FIRCS:1;               /* Describes the FIRC clock status. */
      vuint32_t  :3;
      vuint32_t  :1;
    } B;
  } CTL;
};


/* ============================================================================
   =============================== Module: FR =================================
   ============================================================================ */

struct FR_tag {
  union {                              /* Module Version Register */
    vuint16_t R;
    struct {
      vuint16_t CHIVER:8;
      vuint16_t PEVER:8;
    } B;
  } MVR;

  union {                              /* Module Configuration Register */
    vuint16_t R;
    struct {
      vuint16_t MEN:1;
      vuint16_t SBFF:1;                /* System Bus Failure Freeze */
      vuint16_t SCM:1;
      vuint16_t CHB:1;
      vuint16_t CHA:1;
      vuint16_t SFFE:1;
      vuint16_t ECCE:1;
      vuint16_t  :1;                   /* Reserved bit, will not be changed. Application must not write any value different from the reset value. */
      vuint16_t FUM:1;
      vuint16_t FAM:1;
      vuint16_t  :1;
      vuint16_t CLKSEL:1;
      vuint16_t BITRATE:3;
      vuint16_t  :1;
    } B;
  } MCR;

  union {                              /* System Memory Base Address High Register */
    vuint16_t R;
    struct {
      vuint16_t SMBA:16;               /* System Memory Base Address high. This is the value of the system memory base address for the individual message buffers and sync frame table. This is the value of the system memory base address for the receive FIFO if the FIFO address mode bit FR_MCR[FAM] is set to 1. It is defines as a byte address. */
    } B;
  } SYMBADHR;

  union {                              /* System Memory Base Address Low Register */
    vuint16_t R;
    struct {
      vuint16_t SMBA:12;
      vuint16_t  :4;
    } B;
  } SYMBADLR;

  union {                              /* Strobe Signal Control Register */
    vuint16_t R;
    struct {
      vuint16_t WMD:1;
      vuint16_t  :3;
      vuint16_t SEL:4;
      vuint16_t  :3;
      vuint16_t ENB:1;
      vuint16_t  :2;
      vuint16_t STBPSEL:2;
    } B;
  } STBSCR;

  uint8_t FR_reserved0[2];
  union {                              /* Message Buffer Data Size Register */
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t MBSEG2DS:7;
      vuint16_t  :1;
      vuint16_t MBSEG1DS:7;
    } B;
  } MBDSR;

  union {                              /* Message Buffer Segment Size and Utilization Register */
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t LAST_MB_SEG1:7;
      vuint16_t  :1;
      vuint16_t LAST_MB_UTIL:7;
    } B;
  } MBSSUTR;

  union {                              /* PE DRAM Access Register */
    vuint16_t R;
    struct {
      vuint16_t INST:4;
      vuint16_t ADDR:11;
      vuint16_t DAD:1;
    } B;
  } PEDRAR;

  union {                              /* PE DRAM Data Register */
    vuint16_t R;
    struct {
      vuint16_t DATA:16;
    } B;
  } PEDRDR;

  union {                              /* Protocol Operation Control Register */
    vuint16_t R;
    struct {
      vuint16_t WME:1;
      vuint16_t  :3;
      vuint16_t EOC_AP:2;
      vuint16_t ERC_AP:2;
      vuint16_t BSY_WMC:1;
      vuint16_t  :3;
      vuint16_t POCCMD:4;
    } B;
  } POCR;

  union {                              /* Global Interrupt Flag and Enable Register */
    vuint16_t R;
    struct {
      vuint16_t MIF:1;
      vuint16_t PRIF:1;
      vuint16_t CHIF:1;
      vuint16_t WUPIF:1;
      vuint16_t FAFBIF:1;
      vuint16_t FAFAIF:1;
      vuint16_t RBIF:1;
      vuint16_t TBIF:1;
      vuint16_t MIE:1;
      vuint16_t PRIE:1;
      vuint16_t CHIE:1;
      vuint16_t WUPIE:1;
      vuint16_t FAFBIE:1;
      vuint16_t FAFAIE:1;
      vuint16_t RBIE:1;
      vuint16_t TBIE:1;
    } B;
  } GIFER;

  union {                              /* Protocol Interrupt Flag Register 0 */
    vuint16_t R;
    struct {
      vuint16_t FATL_IF:1;
      vuint16_t INTL_IF:1;
      vuint16_t ILCF_IF:1;
      vuint16_t CSA_IF:1;
      vuint16_t MRC_IF:1;
      vuint16_t MOC_IF:1;
      vuint16_t CCL_IF:1;
      vuint16_t MXS_IF:1;
      vuint16_t MTX_IF:1;
      vuint16_t LTXB_IF:1;
      vuint16_t LTXA_IF:1;
      vuint16_t TBVB_IF:1;
      vuint16_t TBVA_IF:1;
      vuint16_t TI2_IF:1;
      vuint16_t TI1_IF:1;
      vuint16_t CYS_IF:1;
    } B;
  } PIFR0;

  union {                              /* Protocol Interrupt Flag Register 1 */
    vuint16_t R;
    struct {
      vuint16_t EMC_IF:1;
      vuint16_t IPC_IF:1;
      vuint16_t PECF_IF:1;
      vuint16_t PSC_IF:1;
      vuint16_t SSI3_IF:1;
      vuint16_t SSI2_IF:1;
      vuint16_t SSI1_IF:1;
      vuint16_t SSI0_IF:1;
      vuint16_t  :2;
      vuint16_t EVT_IF:1;
      vuint16_t ODT_IF:1;
      vuint16_t  :4;
    } B;
  } PIFR1;

  union {                              /* Protocol Interrupt Enable Register 0 */
    vuint16_t R;
    struct {
      vuint16_t FATL_IE:1;
      vuint16_t INTL_IE:1;
      vuint16_t ILCF_IE:1;
      vuint16_t CSA_IE:1;
      vuint16_t MRC_IE:1;
      vuint16_t MOC_IE:1;
      vuint16_t CCL_IE:1;
      vuint16_t MXS_IE:1;
      vuint16_t MTX_IE:1;
      vuint16_t LTXB_IE:1;
      vuint16_t LTXA_IE:1;
      vuint16_t TBVB_IE:1;
      vuint16_t TBVA_IE:1;
      vuint16_t TI2_IE:1;
      vuint16_t TI1_IE:1;
      vuint16_t CYS_IE:1;
    } B;
  } PIER0;

  union {                              /* Protocol Interrupt Enable Register 1 */
    vuint16_t R;
    struct {
      vuint16_t EMC_IE:1;
      vuint16_t IPC_IE:1;
      vuint16_t PECF_IE:1;
      vuint16_t PSC_IE:1;
      vuint16_t SSI3_IE:1;
      vuint16_t SSI2_IE:1;
      vuint16_t SSI1_IE:1;
      vuint16_t SSI0_IE:1;
      vuint16_t  :2;
      vuint16_t EVT_IE:1;
      vuint16_t ODT_IE:1;
      vuint16_t  :4;
    } B;
  } PIER1;

  union {                              /* CHI Error Flag Register */
    vuint16_t R;
    struct {
      vuint16_t FRLB_EF:1;
      vuint16_t FRLA_EF:1;
      vuint16_t PCMI_EF:1;
      vuint16_t FOVB_EF:1;
      vuint16_t FOVA_EF:1;
      vuint16_t MBS_EF:1;
      vuint16_t MBU_EF:1;
      vuint16_t LCK_EF:1;
      vuint16_t  :1;
      vuint16_t SBCF_EF:1;
      vuint16_t FID_EF:1;
      vuint16_t DPL_EF:1;
      vuint16_t SPL_EF:1;
      vuint16_t NML_EF:1;
      vuint16_t NMF_EF:1;
      vuint16_t ILSA_EF:1;
    } B;
  } CHIERFR;

  union {                              /* Message Buffer Interrupt Vector Register */
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t TBIVEC:7;
      vuint16_t  :1;
      vuint16_t RBIVEC:7;
    } B;
  } MBIVEC;

  union {                              /* Channel A Status Error Counter Register */
    vuint16_t R;
    struct {
      vuint16_t CHAERSCNT:16;
    } B;
  } CASERCR;

  union {                              /* Channel B Status Error Counter Register */
    vuint16_t R;
    struct {
      vuint16_t CHBERSCNT:16;
    } B;
  } CBSERCR;

  union {                              /* Protocol Status Register 0 */
    vuint16_t R;
    struct {
      vuint16_t ERRMODE:2;
      vuint16_t SLOTMODE:2;
      vuint16_t  :1;
      vuint16_t PROTSTATE:3;
      vuint16_t STARTUPSTATE:4;
      vuint16_t  :1;
      vuint16_t WAKEUPSTATUS:3;
    } B;
  } PSR0;

  union {                              /* Protocol Status Register 1 */
    vuint16_t R;
    struct {
      vuint16_t CSAA:1;
      vuint16_t CSP:1;
      vuint16_t  :1;
      vuint16_t REMCSAT:5;
      vuint16_t CPN:1;
      vuint16_t HHR:1;
      vuint16_t FRZ:1;
      vuint16_t APTAC:5;
    } B;
  } PSR1;

  union {                              /* Protocol Status Register 2 */
    vuint16_t R;
    struct {
      vuint16_t NBVB:1;
      vuint16_t NSEB:1;
      vuint16_t STCB:1;
      vuint16_t SBVB:1;
      vuint16_t SSEB:1;
      vuint16_t MTB:1;
      vuint16_t NBVA:1;
      vuint16_t NSEA:1;
      vuint16_t STCA:1;
      vuint16_t SBVA:1;
      vuint16_t SSEA:1;
      vuint16_t MTA:1;
      vuint16_t CKCORFCNT:4;
    } B;
  } PSR2;

  union {                              /* Protocol Status Register 3 */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t WUB:1;
      vuint16_t ABVB:1;
      vuint16_t AACB:1;
      vuint16_t ACEB:1;
      vuint16_t ASEB:1;
      vuint16_t AVFB:1;
      vuint16_t  :2;
      vuint16_t WUA:1;
      vuint16_t ABVA:1;
      vuint16_t AACA:1;
      vuint16_t ACEA:1;
      vuint16_t ASEA:1;
      vuint16_t AVFA:1;
    } B;
  } PSR3;

  union {                              /* Macrotick Counter Register */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t MTCT:14;
    } B;
  } MTCTR;

  union {                              /* Cycle Counter Register */
    vuint16_t R;
    struct {
      vuint16_t  :10;
      vuint16_t CYCCNT:6;
    } B;
  } CYCTR;

  union {                              /* Slot Counter Channel A Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t SLOTCNTA:11;
    } B;
  } SLTCTAR;

  union {                              /* Slot Counter Channel B Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t SLOTCNTB:11;
    } B;
  } SLTCTBR;

  union {                              /* Rate Correction Value Register */
    vuint16_t R;
    struct {
      vuint16_t RATECORR:16;
    } B;
  } RTCORVR;

  union {                              /* Offset Correction Value Register */
    vuint16_t R;
    struct {
      vuint16_t OFFSETCORR:16;
    } B;
  } OFCORVR;

  union {                              /* Combined Interrupt Flag Register */
    vuint16_t R;
    struct {
      vuint16_t  :8;
      vuint16_t MIF:1;
      vuint16_t PRIF:1;
      vuint16_t CHIF:1;
      vuint16_t WUPIF:1;
      vuint16_t FAFBIF:1;
      vuint16_t FAFAIF:1;
      vuint16_t RBIF:1;
      vuint16_t TBIF:1;
    } B;
  } CIFR;

  union {                              /* System Memory Access Time-Out Register */
    vuint16_t R;
    struct {
      vuint16_t  :8;
      vuint16_t TIMEOUT:8;
    } B;
  } SYMATOR;

  union {                              /* Sync Frame Counter Register */
    vuint16_t R;
    struct {
      vuint16_t SFEVB:4;
      vuint16_t SFEVA:4;
      vuint16_t SFODB:4;
      vuint16_t SFODA:4;
    } B;
  } SFCNTR;

  union {                              /* Sync Frame Table Offset Register */
    vuint16_t R;
    struct {
      vuint16_t SFT_OFFSET:15;
      vuint16_t  :1;
    } B;
  } SFTOR;

  union {                              /* Sync Frame Table Configuration, Control, Status Register */
    vuint16_t R;
    struct {
      vuint16_t ELKT:1;
      vuint16_t OLKT:1;
      vuint16_t CYCNUM:6;
      vuint16_t ELKS:1;
      vuint16_t OLKS:1;
      vuint16_t EVAL:1;
      vuint16_t OVAL:1;
      vuint16_t  :1;
      vuint16_t OPT:1;
      vuint16_t SDVEN:1;
      vuint16_t SIDEN:1;
    } B;
  } SFTCCSR;

  union {                              /* Sync Frame ID Rejection Filter Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t SYNFRID:10;
    } B;
  } SFIDRFR;

  union {                              /* Sync Frame ID Acceptance Filter Value Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t FVAL:10;
    } B;
  } SFIDAFVR;

  union {                              /* Sync Frame ID Acceptance Filter Mask Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t FMSK:10;
    } B;
  } SFIDAFMR;

  union {                              /* Network Management Vector Register */
    vuint16_t R;
    struct {
      vuint16_t NMVP:16;
    } B;
  } NMVR[6];

  union {                              /* Network Management Vector Length Register */
    vuint16_t R;
    struct {
      vuint16_t  :12;
      vuint16_t NMVL:4;
    } B;
  } NMVLR;

  union {                              /* Timer Configuration and Control Register */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t T2_CFG:1;
      vuint16_t T2_REP:1;
      vuint16_t  :1;
      vuint16_t T2SP:1;
      vuint16_t T2TR:1;
      vuint16_t T2ST:1;
      vuint16_t  :3;
      vuint16_t T1_REP:1;
      vuint16_t  :1;
      vuint16_t T1SP:1;
      vuint16_t T1TR:1;
      vuint16_t T1ST:1;
    } B;
  } TICCR;

  union {                              /* Timer 1 Cycle Set Register */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t T1_CYC_VAL:6;
      vuint16_t  :2;
      vuint16_t T1_CYC_MSK:6;
    } B;
  } TI1CYSR;

  union {                              /* Timer 1 Macrotick Offset Register */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t T1_MTOFFSET:14;
    } B;
  } TI1MTOR;

  union {
    union {                            /* Timer 2 Configuration Register 0 (Absolute Timer Configuration) */
      vuint16_t R;
      struct {
        vuint16_t  :2;
        vuint16_t T2CYCVAL:6;          /* Timer T2 Cycle Filter Mask */
        vuint16_t  :2;
        vuint16_t T2CYCMSK:6;          /* Timer T2 Cycle Filter Mask */
      } B;
    } ABS;
    union {                            /* Timer 2 Configuration Register 0 (Relative Timer Configuration) */
      vuint16_t R;
      struct {
        vuint16_t T2MTCNT:16;          /* Timer T2 Macrotick High Word */
      } B;
    } REL;
  } TI2CR0;

  union {
    union {                            /* Timer 2 Configuration Register 1 (Absolute Timer Configuration) */
      vuint16_t R;
      struct {
        vuint16_t  :2;
        vuint16_t T2MOFF:14;           /* Timer T2 Macrotick Offset */
      } B;
    } ABS;
    union {                            /* Timer 2 Configuration Register 1 (Relative Timer Configuration) */
      vuint16_t R;
      struct {
        vuint16_t T2MTCNT:16;
      } B;
    } REL;
  } TI2CR1;

  union {                              /* Slot Status Selection Register */
    vuint16_t R;
    struct {
      vuint16_t WMD:1;
      vuint16_t  :1;
      vuint16_t SEL:2;
      vuint16_t  :1;
      vuint16_t SLOTNUMBER:11;
    } B;
  } SSSR;

  union {                              /* Slot Status Counter Condition Register */
    vuint16_t R;
    struct {
      vuint16_t WMD:1;
      vuint16_t  :1;
      vuint16_t SEL:2;
      vuint16_t  :1;
      vuint16_t CNTCFG:2;
      vuint16_t MCY:1;
      vuint16_t VFR:1;
      vuint16_t SYF:1;
      vuint16_t NUF:1;
      vuint16_t SUF:1;
      vuint16_t STATUSMASK:4;
    } B;
  } SSCCR;

  union {                              /* Slot Status Register */
    vuint16_t R;
    struct {
      vuint16_t VFB:1;
      vuint16_t SYB:1;
      vuint16_t NFB:1;
      vuint16_t SUB:1;
      vuint16_t SEB:1;
      vuint16_t CEB:1;
      vuint16_t BVB:1;
      vuint16_t TCB:1;
      vuint16_t VFA:1;
      vuint16_t SYA:1;
      vuint16_t NFA:1;
      vuint16_t SUA:1;
      vuint16_t SEA:1;
      vuint16_t CEA:1;
      vuint16_t BVA:1;
      vuint16_t TCA:1;
    } B;
  } SSR[8];

  union {                              /* Slot Status Counter Register */
    vuint16_t R;
    struct {
      vuint16_t SLOTSTATUSCNT:16;
    } B;
  } SSCR[4];

  union {                              /* MTS A Configuration Register */
    vuint16_t R;
    struct {
      vuint16_t MTE:1;
      vuint16_t  :1;
      vuint16_t CYCCNTMSK:6;
      vuint16_t  :2;
      vuint16_t CYCCNTVAL:6;
    } B;
  } MTSACFR;

  union {                              /* MTS B Configuration Register */
    vuint16_t R;
    struct {
      vuint16_t MTE:1;
      vuint16_t  :1;
      vuint16_t CYCCNTMSK:6;
      vuint16_t  :2;
      vuint16_t CYCCNTVAL:6;
    } B;
  } MTSBCFR;

  union {                              /* Receive Shadow Buffer Index Register */
    vuint16_t R;
    struct {
      vuint16_t WMD:1;
      vuint16_t  :1;
      vuint16_t SEL:2;
      vuint16_t  :4;
      vuint16_t RSBIDX:8;              /* RSBIDXA1/RSBIDXA2/RSBIDXB1/RSBIDXB2- Receive Shadow Buffer Index */
    } B;
  } RSBIR;

  union {                              /* Receive FIFO Watermark and Selection Register */
    vuint16_t R;
    struct {
      vuint16_t WM:8;                  /* WMA/WMB - Watermark */
      vuint16_t  :7;
      vuint16_t SEL:1;
    } B;
  } RFWMSR;

  union {                              /* Receive FIFO Start Index Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t SIDX:10;               /* SIDXA/SIDXB - Start Index */
    } B;
  } RFSIR;

  union {                              /* Receive FIFO Depth and Size Register */
    vuint16_t R;
    struct {
      vuint16_t FIFO_DEPTH:8;          /* FIFO_DEPTHA/FIFO_DEPTHB - FIFO Depth */
      vuint16_t  :1;
      vuint16_t ENTRY_SIZE:7;          /* ENTRY_SIZEA/ENTRY_SIZEB - Entry Size */
    } B;
  } RFDSR;

  union {                              /* Receive FIFO A Read Index Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t RDIDX:10;
    } B;
  } RFARIR;

  union {                              /* Receive FIFO B Read Index Register */
    vuint16_t R;
    struct {
      vuint16_t  :6;
      vuint16_t RDIDX:10;
    } B;
  } RFBRIR;

  union {                              /* Receive FIFO Message ID Acceptance Filter Value Register */
    vuint16_t R;
    struct {
      vuint16_t MIDAFVAL:16;           /* MIDAFVALA/MIDAFVALB - Message ID Acceptance Filter Value */
    } B;
  } RFMIDAFVR;

  union {                              /* Receive FIFO Message ID Acceptance Filter Mask Register */
    vuint16_t R;
    struct {
      vuint16_t MIDAFMSK:16;           /* MIDAFMSKA/MIDAFMSKB - Message ID Acceptance Filter Mask */
    } B;
  } RFMIDAFMR;

  union {                              /* Receive FIFO Frame ID Rejection Filter Value Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t FIDRFVAL:11;           /* FIDRFVALA/FIDRFVALB - Frame ID Rejection Filter Value */
    } B;
  } RFFIDRFVR;

  union {                              /* Receive FIFO Frame ID Rejection Filter Mask Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t FIDRFMSK:11;
    } B;
  } RFFIDRFMR;

  union {                              /* Receive FIFO Range Filter Configuration Register */
    vuint16_t R;
    struct {
      vuint16_t WMD:1;
      vuint16_t IBD:1;
      vuint16_t SEL:2;
      vuint16_t  :1;
      vuint16_t SID:11;                /* Slot ID */
    } B;
  } RFRFCFR;

  union {                              /* Receive FIFO Range Filter Control Register */
    vuint16_t R;
    struct {
      vuint16_t  :4;
      vuint16_t F3MD:1;
      vuint16_t F2MD:1;
      vuint16_t F1MD:1;
      vuint16_t F0MD:1;
      vuint16_t  :4;
      vuint16_t F3EN:1;
      vuint16_t F2EN:1;
      vuint16_t F1EN:1;
      vuint16_t F0EN:1;
    } B;
  } RFRFCTR;

  union {                              /* Last Dynamic Transmit Slot Channel A Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t LDYNTXSLOTA:11;
    } B;
  } LDTXSLAR;

  union {                              /* Last Dynamic Transmit Slot Channel B Register */
    vuint16_t R;
    struct {
      vuint16_t  :5;
      vuint16_t LDYNTXSLOTB:11;
    } B;
  } LDTXSLBR;

  union {                              /* Protocol Configuration Register 0 */
    vuint16_t R;
    struct {
      vuint16_t action_point_offset:6;
      vuint16_t static_slot_length:10;
    } B;
  } PCR0;

  union {                              /* Protocol Configuration Register 1 */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t macro_after_first_static_slot:14;
    } B;
  } PCR1;

  union {                              /* Protocol Configuration Register 2 */
    vuint16_t R;
    struct {
      vuint16_t minislot_after_action_point:6;
      vuint16_t number_of_static_slots:10; /* gNumberOfStaticSlots */
    } B;
  } PCR2;

  union {                              /* Protocol Configuration Register 3 */
    vuint16_t R;
    struct {
      vuint16_t wakeup_symbol_rx_low:6;
      vuint16_t minislot_action_point_offset:5;
      vuint16_t coldstart_attempts:5;
    } B;
  } PCR3;

  union {                              /* Protocol Configuration Register 4 */
    vuint16_t R;
    struct {
      vuint16_t cas_rx_low_max:7;
      vuint16_t wakeup_symbol_rx_window:9;
    } B;
  } PCR4;

  union {                              /* Protocol Configuration Register 5 */
    vuint16_t R;
    struct {
      vuint16_t tss_transmitter:4;
      vuint16_t wakeup_symbol_tx_low:6;
      vuint16_t wakeup_symbol_rx_idle:6;
    } B;
  } PCR5;

  union {                              /* Protocol Configuration Register 6 */
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t symbol_window_after_action_point:8;
      vuint16_t macro_initial_offset_a:7;
    } B;
  } PCR6;

  union {                              /* Protocol Configuration Register 7 */
    vuint16_t R;
    struct {
      vuint16_t decoding_correction_b:9;
      vuint16_t micro_per_macro_nom_half:7;
    } B;
  } PCR7;

  union {                              /* Protocol Configuration Register 8 */
    vuint16_t R;
    struct {
      vuint16_t max_without_clock_correction_fatal:4;
      vuint16_t max_without_clock_correction_passive:4;
      vuint16_t wakeup_symbol_tx_idle:8;
    } B;
  } PCR8;

  union {                              /* Protocol Configuration Register 9 */
    vuint16_t R;
    struct {
      vuint16_t minislot_exists:1;
      vuint16_t symbol_window_exists:1;
      vuint16_t offset_correction_out:14;
    } B;
  } PCR9;

  union {                              /* Protocol Configuration Register 10 */
    vuint16_t R;
    struct {
      vuint16_t single_slot_enabled:1;
      vuint16_t wakeup_channel:1;
      vuint16_t macro_per_cycle:14;
    } B;
  } PCR10;

  union {                              /* Protocol Configuration Register 11 */
    vuint16_t R;
    struct {
      vuint16_t key_slot_used_for_startup:1;
      vuint16_t key_slot_used_for_sync:1;
      vuint16_t offset_correction_start:14;
    } B;
  } PCR11;

  union {                              /* Protocol Configuration Register 12 */
    vuint16_t R;
    struct {
      vuint16_t allow_passive_to_active:5;
      vuint16_t key_slot_header_crc:11;
    } B;
  } PCR12;

  union {                              /* Protocol Configuration Register 13 */
    vuint16_t R;
    struct {
      vuint16_t first_minislot_action_point_offset:6;
      vuint16_t static_slot_after_action_point:10;
    } B;
  } PCR13;

  union {                              /* Protocol Configuration Register 14 */
    vuint16_t R;
    struct {
      vuint16_t rate_correction_out:11;
      vuint16_t listen_timeout:5;
    } B;
  } PCR14;

  union {                              /* Protocol Configuration Register 15 */
    vuint16_t R;
    struct {
      vuint16_t listen_timeout:16;
    } B;
  } PCR15;

  union {                              /* Protocol Configuration Register 16 */
    vuint16_t R;
    struct {
      vuint16_t macro_initial_offset_b:7;
      vuint16_t noise_listen_timeout:9;
    } B;
  } PCR16;

  union {                              /* Protocol Configuration Register 17 */
    vuint16_t R;
    struct {
      vuint16_t noise_listen_timeout:16;
    } B;
  } PCR17;

  union {                              /* Protocol Configuration Register 18 */
    vuint16_t R;
    struct {
      vuint16_t wakeup_pattern:6;
      vuint16_t key_slot_id:10;
    } B;
  } PCR18;

  union {                              /* Protocol Configuration Register 19 */
    vuint16_t R;
    struct {
      vuint16_t decoding_correction_a:9;
      vuint16_t payload_length_static:7;
    } B;
  } PCR19;

  union {                              /* Protocol Configuration Register 20 */
    vuint16_t R;
    struct {
      vuint16_t micro_initial_offset_b:8;
      vuint16_t micro_initial_offset_a:8;
    } B;
  } PCR20;

  union {                              /* Protocol Configuration Register 21 */
    vuint16_t R;
    struct {
      vuint16_t extern_rate_correction:3;
      vuint16_t latest_tx:13;
    } B;
  } PCR21;

  union {                              /* Protocol Configuration Register 22 */
    vuint16_t R;
    struct {
      vuint16_t  :1;                   /* Reserved bit, will not be changed. Application must not write any value different from the reset value. */
      vuint16_t comp_accepted_startup_range_a:11;
      vuint16_t micro_per_cycle:4;
    } B;
  } PCR22;

  union {                              /* Protocol Configuration Register 23 */
    vuint16_t R;
    struct {
      vuint16_t micro_per_cycle:16;
    } B;
  } PCR23;

  union {                              /* Protocol Configuration Register 24 */
    vuint16_t R;
    struct {
      vuint16_t cluster_drift_damping:5;
      vuint16_t max_payload_length_dynamic:7;
      vuint16_t micro_per_cycle_min:4;
    } B;
  } PCR24;

  union {                              /* Protocol Configuration Register 25 */
    vuint16_t R;
    struct {
      vuint16_t micro_per_cycle_min:16;
    } B;
  } PCR25;

  union {                              /* Protocol Configuration Register 26 */
    vuint16_t R;
    struct {
      vuint16_t allow_halt_due_to_clock:1;
      vuint16_t comp_accepted_startup_range_b:11;
      vuint16_t micro_per_cycle_max:4;
    } B;
  } PCR26;

  union {                              /* Protocol Configuration Register 27 */
    vuint16_t R;
    struct {
      vuint16_t micro_per_cycle_max:16;
    } B;
  } PCR27;

  union {                              /* Protocol Configuration Register 28 */
    vuint16_t R;
    struct {
      vuint16_t dynamic_slot_idle_phase:2;
      vuint16_t macro_after_offset_correction:14;
    } B;
  } PCR28;

  union {                              /* Protocol Configuration Register 29 */
    vuint16_t R;
    struct {
      vuint16_t extern_offset_correction:3;
      vuint16_t minislots_max:13;
    } B;
  } PCR29;

  union {                              /* Protocol Configuration Register 30 */
    vuint16_t R;
    struct {
      vuint16_t  :12;
      vuint16_t sync_node_max:4;
    } B;
  } PCR30;

  union {                              /* StopWatch Count Register */
    vuint16_t R;
    struct {
      vuint16_t STPW:16;               /* StopWatch Count Register */
    } B;
  } STPWR;

  uint8_t FR_reserved1[2];
  union {                              /* Protocol Event Output Enable and StopWatch Control Register */
    vuint16_t R;
    struct {
      vuint16_t  :7;
      vuint16_t STPW_EN:1;             /* Stopwatch count Enable */
      vuint16_t  :5;
      vuint16_t TIM2_EE:1;
      vuint16_t TIM1_EE:1;
      vuint16_t CYC_EE:1;
    } B;
  } PEOER;

  uint8_t FR_reserved2[2];
  union {                              /* Receive FIFO Start Data Offset Register */
    vuint16_t R;
    struct {
      vuint16_t SDO:16;                /* SDOA/SDOB - Start Data Field Offset */
    } B;
  } RFSDOR;

  union {                              /* Receive FIFO System Memory Base Address High Register */
    vuint16_t R;
    struct {
      vuint16_t SMBA:16;
    } B;
  } RFSYMBADHR;

  union {                              /* Receive FIFO System Memory Base Address Low Register */
    vuint16_t R;
    struct {
      vuint16_t SMBA:12;
      vuint16_t  :4;
    } B;
  } RFSYMBADLR;

  union {                              /* Receive FIFO Periodic Timer Register */
    vuint16_t R;
    struct {
      vuint16_t  :2;
      vuint16_t PTD:14;
    } B;
  } RFPTR;

  union {                              /* Receive FIFO Fill Level and POP Count Register */
    vuint16_t R;
    struct {
      vuint16_t FLB_or_PCB:8;
      vuint16_t FLA_or_PCA:8;
    } B;
  } RFFLPCR;

  union {                              /* ECC Error Interrupt Flag and Enable Register */
    vuint16_t R;
    struct {
      vuint16_t LRNE_OF:1;
      vuint16_t LRCE_OF:1;
      vuint16_t DRNE_OF:1;
      vuint16_t DRCE_OF:1;
      vuint16_t LRNE_IF:1;
      vuint16_t LRCE_IF:1;
      vuint16_t DRNE_IF:1;
      vuint16_t DRCE_IF:1;
      vuint16_t  :4;
      vuint16_t LRNE_IE:1;
      vuint16_t LRCE_IE:1;
      vuint16_t DRNE_IE:1;
      vuint16_t DRCE_IE:1;
    } B;
  } EEIFER;

  union {                              /* ECC Error Report and Injection Control Register */
    vuint16_t R;
    struct {
      vuint16_t BSY:1;
      vuint16_t  :5;
      vuint16_t ERS:2;
      vuint16_t  :3;
      vuint16_t ERM:1;
      vuint16_t  :2;
      vuint16_t EIM:1;
      vuint16_t EIE:1;
    } B;
  } EERICR;

  union {                              /* ECC Error Report Address Register */
    vuint16_t R;
    struct {
      vuint16_t MID:1;
      vuint16_t BANK:3;
      vuint16_t ADDR:12;
    } B;
  } EERAR;

  union {                              /* ECC Error Report Data Register */
    vuint16_t R;
    struct {
      vuint16_t DATA:16;
    } B;
  } EERDR;

  union {                              /* ECC Error Report Code Register */
    vuint16_t R;
    struct {
      vuint16_t  :11;
      vuint16_t CODE:5;
    } B;
  } EERCR;

  union {                              /* ECC Error Injection Address Register */
    vuint16_t R;
    struct {
      vuint16_t MID:1;
      vuint16_t BANK:3;
      vuint16_t ADDR:12;
    } B;
  } EEIAR;

  union {                              /* ECC Error Injection Data Register */
    vuint16_t R;
    struct {
      vuint16_t DATA:16;
    } B;
  } EEIDR;

  union {                              /* ECC Error Injection Code Register */
    vuint16_t R;
    struct {
      vuint16_t  :11;
      vuint16_t CODE:5;
    } B;
  } EEICR;

  uint8_t FR_reserved3[1792];
  struct {
    union {                            /* Message Buffer Configuration, Control, Status Register */
      vuint16_t R;
      struct {
        vuint16_t  :3;
        vuint16_t MTD:1;
        vuint16_t CMT:1;
        vuint16_t EDT:1;
        vuint16_t LCKT:1;
        vuint16_t MBIE:1;
        vuint16_t  :3;
        vuint16_t DUP:1;
        vuint16_t DVAL:1;
        vuint16_t EDS:1;
        vuint16_t LCKS:1;
        vuint16_t MBIF:1;
      } B;
    } CCSR;
    union {                            /* Message Buffer Cycle Counter Filter Register */
      vuint16_t R;
      struct {
        vuint16_t MTM:1;
        vuint16_t CHA:1;
        vuint16_t CHB:1;
        vuint16_t CCFE:1;
        vuint16_t CCFMSK:6;
        vuint16_t CCFVAL:6;
      } B;
    } CCFR;
    union {                            /* Message Buffer Frame ID Register */
      vuint16_t R;
      struct {
        vuint16_t  :5;
        vuint16_t FID:11;
      } B;
    } FIDR;
    union {                            /* Message Buffer Index Register */
      vuint16_t R;
      struct {
        vuint16_t  :8;
        vuint16_t MBIDX:8;
      } B;
    } IDXR;
  } MB[128];

  uint8_t FR_reserved4[1024];
  union {                              /* Message Buffer Data Field Offset Register */
    vuint16_t R;
    struct {
      vuint16_t MBDO:16;
    } B;
  } MBDOR[132];

  union {                              /* LRAM ECC Error Test Register */
    vuint16_t R;
    struct {
      vuint16_t LEETD:16;
    } B;
  } LEETR[6];
};


/* ============================================================================
   =============================== Module: FXOSC ==============================
   ============================================================================ */

struct FXOSC_tag {
  union {                              /* FXOSC Control Register */
    vuint32_t R;
    struct {
      vuint32_t OSCBYP:1;
      vuint32_t  :2;
      vuint32_t  :5;
      vuint32_t EOCV:8;                /* End of Count Value */
      vuint32_t M_OSC:1;               /* Crystal oscillator clock interrupt mask */
      vuint32_t  :2;
      vuint32_t OSCDIV:5;
      vuint32_t I_OSC:1;
      vuint32_t  :5;
      vuint32_t  :1;
      vuint32_t  :1;
    } B;
  } CTL;
};


/* ============================================================================
   =============================== Module: GPR ================================
   ============================================================================ */

struct GPR_tag {
  union {                              /* GPR Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t EXTREGC:1;             /* This bit enables the external regulator control multiplexed function on PG[6] */
      vuint32_t DEST_ESC_CTRL2:1;      /* Enables the escalation of destructive reset source: SWT0 reset request. This bit will be reset on POR. */
      vuint32_t DEST_ESC_CTRL1:1;      /* Enables the escalation of destructive reset source: functional reset escalation. This bit will be reset on POR. */
      vuint32_t DEST_ESC_CTRL0:1;      /* Enables the escalation of destructive reset source: SSCM secured reset. This bit will be reset on POR. */
      vuint32_t  :5;
      vuint32_t CMP2_STDBY:1;
      vuint32_t CMP1_STDBY:1;
      vuint32_t CMP0_STDBY:1;
      vuint32_t CLKOUT1_STDBY:1;
      vuint32_t LPU_STOP_ACK_BYPASS:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t RTC_SXOSC_FREE_RUNNING:1; /* Enables seamless RTC operation across functional and destructive reset in the specific case when RTC is running on SXOSC. This Bit should be set after SXOSC is enabled by the software. */
      vuint32_t CMP_ACT_SAM:1;         /* Actual sample to the CMP */
      vuint32_t CMP_SAMP_SEL:1;        /* Sample select to the CMP */
      vuint32_t USDHC_BS:2;            /* uSDHC byte_swapper: Swaps the AHB write/read data at the boundary of uSDHC master */
      vuint32_t MLB_BS:2;              /* MLB byte swapper: Swaps the AHB write/read data at the boundary of MLB master */
      vuint32_t FR_BS:2;               /* FlexRay byte swapper: Swaps the AHB write/read data at the boundary of FlexRay master */
      vuint32_t ENET_TX_BS:2;          /* ENET TX byte swapper: Swaps the AHB write/read data at the TX boundary of ENET master */
      vuint32_t ENET_RX_BS:2;          /* ENET RX byte swapper: Swaps the AHB write/read data at the RX boundary of ENET master */
    } B;
  } CTL;

  union {                              /* GPR Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t FLASH_LP_ACK:1;        /* FLASH low power acknowledge status */
      vuint32_t  :8;
      vuint32_t  :1;
      vuint32_t  :1;
    } B;
  } STAT;

  uint8_t GPR_reserved0[8];
  union {                              /* GPR Control Register1 */
    vuint32_t R;
    struct {
      vuint32_t  :8;
      vuint32_t IVPR:24;               /* Interrupt Vector Prefix Register Programming */
    } B;
  } CTL1;
};


/* ============================================================================
   =============================== Module: I2C ================================
   ============================================================================ */

struct I2C_tag {
  union {                              /* I2C Bus Address Register */
    vuint8_t R;
    struct {
      vuint8_t ADR:7;
      vuint8_t  :1;
    } B;
  } IBAD;

  union {                              /* I2C Bus Frequency Divider Register */
    vuint8_t R;
    struct {
      vuint8_t IBC:8;
    } B;
  } IBFD;

  union {                              /* I2C Bus Control Register */
    vuint8_t R;
    struct {
      vuint8_t MDIS:1;
      vuint8_t IBIE:1;
      vuint8_t MSSL:1;
      vuint8_t TXRX:1;
      vuint8_t NOACK:1;
      vuint8_t RSTA:1;
      vuint8_t DMAEN:1;
      vuint8_t  :1;
    } B;
  } IBCR;

  union {                              /* I2C Bus Status Register */
    vuint8_t R;
    struct {
      vuint8_t TCF:1;
      vuint8_t IAAS:1;
      vuint8_t IBB:1;
      vuint8_t IBAL:1;
      vuint8_t  :1;
      vuint8_t SRW:1;
      vuint8_t IBIF:1;
      vuint8_t RXAK:1;
    } B;
  } IBSR;

  union {                              /* I2C Bus Data I/O Register */
    vuint8_t R;
    struct {
      vuint8_t DATA:8;
    } B;
  } IBDR;

  union {                              /* I2C Bus Interrupt Config Register */
    vuint8_t R;
    struct {
      vuint8_t BIIE:1;
      vuint8_t  :7;
    } B;
  } IBIC;

  union {                              /* I2C Bus Debug Register */
    vuint8_t R;
    struct {
      vuint8_t  :5;
      vuint8_t BYTE_RX:1;
      vuint8_t IPG_DEBUG_HALTED:1;
      vuint8_t IPG_DEBUG_EN:1;
    } B;
  } IBDBG;
};


/* ============================================================================
   =============================== Module: I2S ================================
   ============================================================================ */

struct I2S_tag {
  union {                              /* SAI Transmit Control Register */
    vuint32_t R;
    struct {
      vuint32_t TE:1;                  /* Transmitter Enable */
      vuint32_t STOPE:1;               /* Stop Enable */
      vuint32_t DBGE:1;                /* Debug Enable */
      vuint32_t BCE:1;                 /* Bit Clock Enable */
      vuint32_t  :2;
      vuint32_t FR:1;                  /* FIFO Reset */
      vuint32_t SR:1;                  /* Software Reset */
      vuint32_t  :3;
      vuint32_t WSF:1;                 /* Word Start Flag */
      vuint32_t SEF:1;                 /* Sync Error Flag */
      vuint32_t FEF:1;                 /* FIFO Error Flag */
      vuint32_t FWF:1;                 /* FIFO Warning Flag */
      vuint32_t FRF:1;                 /* FIFO Request Flag */
      vuint32_t  :3;
      vuint32_t WSIE:1;                /* Word Start Interrupt Enable */
      vuint32_t SEIE:1;                /* Sync Error Interrupt Enable */
      vuint32_t FEIE:1;                /* FIFO Error Interrupt Enable */
      vuint32_t FWIE:1;                /* FIFO Warning Interrupt Enable */
      vuint32_t FRIE:1;                /* FIFO Request Interrupt Enable */
      vuint32_t  :3;
      vuint32_t  :3;
      vuint32_t FWDE:1;                /* FIFO Warning DMA Enable */
      vuint32_t FRDE:1;                /* FIFO Request DMA Enable */
    } B;
  } TCSR;

  union {                              /* SAI Transmit Configuration 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t TFW:3;                 /* Transmit FIFO Watermark */
    } B;
  } TCR1;

  union {                              /* SAI Transmit Configuration 2 Register */
    vuint32_t R;
    struct {
      vuint32_t SYNC:2;                /* Synchronous Mode */
      vuint32_t BCS:1;                 /* Bit Clock Swap */
      vuint32_t BCI:1;                 /* Bit Clock Input */
      vuint32_t MSEL:2;                /* MCLK Select */
      vuint32_t BCP:1;                 /* Bit Clock Polarity */
      vuint32_t BCD:1;                 /* Bit Clock Direction */
      vuint32_t  :16;
      vuint32_t DIV:8;                 /* Bit Clock Divide */
    } B;
  } TCR2;

  union {                              /* SAI Transmit Configuration 3 Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t CFR:4;                 /* Channel FIFO Reset */
      vuint32_t  :4;
      vuint32_t TCE:4;                 /* Transmit Channel Enable */
      vuint32_t  :12;
      vuint32_t WDFL:4;                /* Word Flag Configuration */
    } B;
  } TCR3;

  union {                              /* SAI Transmit Configuration 4 Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t FCONT:1;               /* FIFO Continue on Error */
      vuint32_t FCOMB:2;               /* FIFO Combine Mode */
      vuint32_t FPACK:2;               /* FIFO Packing Mode */
      vuint32_t  :4;
      vuint32_t FRSZ:4;                /* Frame size */
      vuint32_t  :3;
      vuint32_t SYWD:5;                /* Sync Width */
      vuint32_t  :3;
      vuint32_t MF:1;                  /* MSB First */
      vuint32_t FSE:1;                 /* Frame Sync Early */
      vuint32_t ONDEM:1;               /* On Demand Mode */
      vuint32_t FSP:1;                 /* Frame Sync Polarity */
      vuint32_t FSD:1;                 /* Frame Sync Direction */
    } B;
  } TCR4;

  union {                              /* SAI Transmit Configuration 5 Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t WNW:5;                 /* Word N Width */
      vuint32_t  :3;
      vuint32_t W0W:5;                 /* Word 0 Width */
      vuint32_t  :3;
      vuint32_t FBT:5;                 /* First Bit Shifted */
      vuint32_t  :8;
    } B;
  } TCR5;

  uint8_t I2S_reserved0[8];
  union {                              /* SAI Transmit Data Register */
    vuint32_t R;
    struct {
      vuint32_t TDR:32;                /* Transmit Data Register */
    } B;
  } TDR[4];

  uint8_t I2S_reserved1[16];
  union {                              /* SAI Transmit FIFO Register */
    vuint32_t R;
    struct {
      vuint32_t WCP:1;                 /* Write Channel Pointer */
      vuint32_t  :11;
      vuint32_t WFP:4;                 /* Write FIFO Pointer */
      vuint32_t  :12;
      vuint32_t RFP:4;                 /* Read FIFO Pointer */
    } B;
  } TFR[4];

  uint8_t I2S_reserved2[16];
  union {                              /* SAI Transmit Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TWM:16;                /* Transmit Word Mask */
    } B;
  } TMR;

  uint8_t I2S_reserved3[28];
  union {                              /* SAI Receive Control Register */
    vuint32_t R;
    struct {
      vuint32_t RE:1;                  /* Receiver Enable */
      vuint32_t STOPE:1;               /* Stop Enable */
      vuint32_t DBGE:1;                /* Debug Enable */
      vuint32_t BCE:1;                 /* Bit Clock Enable */
      vuint32_t  :2;
      vuint32_t FR:1;                  /* FIFO Reset */
      vuint32_t SR:1;                  /* Software Reset */
      vuint32_t  :3;
      vuint32_t WSF:1;                 /* Word Start Flag */
      vuint32_t SEF:1;                 /* Sync Error Flag */
      vuint32_t FEF:1;                 /* FIFO Error Flag */
      vuint32_t FWF:1;                 /* FIFO Warning Flag */
      vuint32_t FRF:1;                 /* FIFO Request Flag */
      vuint32_t  :3;
      vuint32_t WSIE:1;                /* Word Start Interrupt Enable */
      vuint32_t SEIE:1;                /* Sync Error Interrupt Enable */
      vuint32_t FEIE:1;                /* FIFO Error Interrupt Enable */
      vuint32_t FWIE:1;                /* FIFO Warning Interrupt Enable */
      vuint32_t FRIE:1;                /* FIFO Request Interrupt Enable */
      vuint32_t  :3;
      vuint32_t  :3;
      vuint32_t FWDE:1;                /* FIFO Warning DMA Enable */
      vuint32_t FRDE:1;                /* FIFO Request DMA Enable */
    } B;
  } RCSR;

  union {                              /* SAI Receive Configuration 1 Register */
    vuint32_t R;
    struct {
      vuint32_t  :29;
      vuint32_t RFW:3;                 /* Receive FIFO Watermark */
    } B;
  } RCR1;

  union {                              /* SAI Receive Configuration 2 Register */
    vuint32_t R;
    struct {
      vuint32_t SYNC:2;                /* Synchronous Mode */
      vuint32_t BCS:1;                 /* Bit Clock Swap */
      vuint32_t BCI:1;                 /* Bit Clock Input */
      vuint32_t MSEL:2;                /* MCLK Select */
      vuint32_t BCP:1;                 /* Bit Clock Polarity */
      vuint32_t BCD:1;                 /* Bit Clock Direction */
      vuint32_t  :16;
      vuint32_t DIV:8;                 /* Bit Clock Divide */
    } B;
  } RCR2;

  union {                              /* SAI Receive Configuration 3 Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t CFR:4;                 /* Channel FIFO Reset */
      vuint32_t  :4;
      vuint32_t RCE:4;                 /* Receive Channel Enable */
      vuint32_t  :12;
      vuint32_t WDFL:4;                /* Word Flag Configuration */
    } B;
  } RCR3;

  union {                              /* SAI Receive Configuration 4 Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t FCONT:1;               /* FIFO Continue on Error */
      vuint32_t FCOMB:2;               /* FIFO Combine Mode */
      vuint32_t FPACK:2;               /* FIFO Packing Mode */
      vuint32_t  :4;
      vuint32_t FRSZ:4;                /* Frame Size */
      vuint32_t  :3;
      vuint32_t SYWD:5;                /* Sync Width */
      vuint32_t  :3;
      vuint32_t MF:1;                  /* MSB First */
      vuint32_t FSE:1;                 /* Frame Sync Early */
      vuint32_t ONDEM:1;               /* On Demand Mode */
      vuint32_t FSP:1;                 /* Frame Sync Polarity */
      vuint32_t FSD:1;                 /* Frame Sync Direction */
    } B;
  } RCR4;

  union {                              /* SAI Receive Configuration 5 Register */
    vuint32_t R;
    struct {
      vuint32_t  :3;
      vuint32_t WNW:5;                 /* Word N Width */
      vuint32_t  :3;
      vuint32_t W0W:5;                 /* Word 0 Width */
      vuint32_t  :3;
      vuint32_t FBT:5;                 /* First Bit Shifted */
      vuint32_t  :8;
    } B;
  } RCR5;

  uint8_t I2S_reserved4[8];
  union {                              /* SAI Receive Data Register */
    vuint32_t R;
    struct {
      vuint32_t RDR:32;                /* Receive Data Register */
    } B;
  } RDR[4];

  uint8_t I2S_reserved5[16];
  union {                              /* SAI Receive FIFO Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t WFP:4;                 /* Write FIFO Pointer */
      vuint32_t RCP:1;                 /* Receive Channel Pointer */
      vuint32_t  :11;
      vuint32_t RFP:4;                 /* Read FIFO Pointer */
    } B;
  } RFR[4];

  uint8_t I2S_reserved6[16];
  union {                              /* SAI Receive Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t RWM:16;                /* Receive Word Mask */
    } B;
  } RMR;

  uint8_t I2S_reserved7[28];
  union {                              /* SAI MCLK Control Register */
    vuint32_t R;
    struct {
      vuint32_t DUF:1;                 /* Divider Update Flag */
      vuint32_t MOE:1;                 /* MCLK Output Enable */
      vuint32_t  :4;
      vuint32_t MICS:2;                /* MCLK Input Clock Select */
      vuint32_t  :24;
    } B;
  } MCR;

  union {                              /* SAI MCLK Divide Register */
    vuint32_t R;
    struct {
      vuint32_t  :11;
      vuint32_t FRACT:9;               /* MCLK Fraction */
      vuint32_t DIVIDE:12;             /* MCLK Divide */
    } B;
  } MDR;
};


/* ============================================================================
   =============================== Module: INTC ===============================
   ============================================================================ */

struct INTC_tag {
  union {                              /* INTC Block Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :19;
      vuint32_t HVEN3:1;
      vuint32_t  :3;
      vuint32_t HVEN2:1;
      vuint32_t  :3;
      vuint32_t HVEN1:1;
      vuint32_t  :3;
      vuint32_t HVEN0:1;
    } B;
  } BCR;

  union {                              /* INTC Master Protection Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t ID:2;
      vuint32_t  :3;
      vuint32_t MPROT:1;
    } B;
  } MPROT;

  uint8_t INTC_reserved0[8];
  union {                              /* INTC Current Priority Register for Processor n */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t PRI:4;
    } B;
  } CPR[3];

  uint8_t INTC_reserved1[4];
  union {                              /* INTC Interrupt Acknowledge Register for Processor n */
    vuint32_t R;
    struct {
      vuint32_t VTBA:20;
      vuint32_t INTVEC:10;
      vuint32_t  :2;
    } B;
  } IACKR[3];

  uint8_t INTC_reserved2[4];
  union {                              /* INTC End Of Interrupt Register for Processor n */
    vuint32_t R;
    struct {
      vuint32_t EOI:32;
    } B;
  } EOIR[3];

  uint8_t INTC_reserved3[4];
  union {                              /* INTC Software Set/Clear Interrupt Register */
    vuint8_t R;
    struct {
      vuint8_t  :6;
      vuint8_t SET:1;
      vuint8_t CLR:1;
    } B;
  } SSCIR[24];

  uint8_t INTC_reserved4[8];
  union {                              /* INTC Priority Select Register */
    vuint16_t R;
    struct {
      vuint16_t PRC_SELN:4;
      vuint16_t  :3;
      vuint16_t SWTN:1;
      vuint16_t  :4;
      vuint16_t PRIN:4;
    } B;
  } PSR[1024];
};


/* ============================================================================
   =============================== Module: JDC ================================
   ============================================================================ */

struct JDC_tag {
  union {                              /* Module Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :15;
      vuint32_t JIN_IEN:1;
      vuint32_t  :15;
      vuint32_t JOUT_IEN:1;
    } B;
  } MCR;

  union {                              /* Module Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :13;
      vuint32_t JIN_RDY:1;
      vuint32_t  :1;
      vuint32_t JIN_INT:1;
      vuint32_t  :13;
      vuint32_t JOUT_RDY:1;
      vuint32_t  :1;
      vuint32_t JOUT_INT:1;
    } B;
  } MSR;

  union {                              /* JTAG Output Data Register */
    vuint32_t R;
    struct {
      vuint32_t Data:32;
    } B;
  } JOUT_IPS;

  union {                              /* JTAG Input Data Register */
    vuint32_t R;
    struct {
      vuint32_t Data:32;
    } B;
  } JIN_IPS;
};


/* ============================================================================
   =============================== Module: LINFlexD ===========================
   ============================================================================ */

struct LINFlexD_tag {
  union {                              /* LIN Control Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CCD:1;
      vuint32_t CFD:1;
      vuint32_t LASE:1;
      vuint32_t AUTOWU:1;
      vuint32_t MBL:4;
      vuint32_t BF:1;
      vuint32_t  :1;
      vuint32_t LBKM:1;
      vuint32_t MME:1;
      vuint32_t SSBL:1;
      vuint32_t RBLM:1;
      vuint32_t SLEEP:1;
      vuint32_t INIT:1;
    } B;
  } LINCR1;

  union {                              /* LIN Interrupt enable register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SZIE:1;
      vuint32_t OCIE:1;
      vuint32_t BEIE:1;
      vuint32_t CEIE:1;
      vuint32_t HEIE:1;
      vuint32_t  :2;
      vuint32_t FEIE:1;
      vuint32_t BOIE:1;
      vuint32_t LSIE:1;
      vuint32_t WUIE:1;
      vuint32_t DBFIE:1;
      vuint32_t DBEIETOIE:1;
      vuint32_t DRIE:1;
      vuint32_t DTIE:1;
      vuint32_t HRIE:1;
    } B;
  } LINIER;

  union {                              /* LIN Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t AUTOSYNC_COMP:1;
      vuint32_t RDC:3;
      vuint32_t LINS:4;                /* LIN state */
      vuint32_t  :2;
      vuint32_t RMB:1;
      vuint32_t DRBNE:1;
      vuint32_t RXbusy:1;
      vuint32_t RDI:1;
      vuint32_t WUF:1;
      vuint32_t DBFF:1;
      vuint32_t DBEF:1;
      vuint32_t DRF:1;
      vuint32_t DTF:1;
      vuint32_t HRF:1;
    } B;
  } LINSR;

  union {                              /* LIN Error Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SZF:1;
      vuint32_t OCF:1;
      vuint32_t BEF:1;
      vuint32_t CEF:1;
      vuint32_t SFEF:1;
      vuint32_t SDEF:1;
      vuint32_t IDPEF:1;
      vuint32_t FEF:1;
      vuint32_t BOF:1;
      vuint32_t  :6;
      vuint32_t NF:1;
    } B;
  } LINESR;

  union {                              /* UART Mode Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t  :8;
      vuint32_t NEF:3;
      vuint32_t DTU_PCETX:1;           /* Disable Timeout in UART mode */
      vuint32_t SBUR:2;
      vuint32_t WLS:1;
      vuint32_t TDFL_TFC:3;
      vuint32_t RDFL_RFC:3;
      vuint32_t RFBM:1;
      vuint32_t TFBM:1;
      vuint32_t WL1:1;
      vuint32_t PC1:1;
      vuint32_t RxEn:1;
      vuint32_t TxEn:1;
      vuint32_t PC0:1;
      vuint32_t PCE:1;
      vuint32_t WL0:1;
      vuint32_t UART:1;
    } B;
  } UARTCR;

  union {                              /* UART Mode Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t SZF:1;
      vuint32_t OCF:1;
      vuint32_t PE:4;
      vuint32_t RMB:1;
      vuint32_t FEF:1;
      vuint32_t BOF:1;
      vuint32_t RDI:1;
      vuint32_t WUF:1;
      vuint32_t RFNE:1;
      vuint32_t TO:1;
      vuint32_t DRFRFE:1;
      vuint32_t DTFTFF:1;
      vuint32_t NF:1;
    } B;
  } UARTSR;

  union {                              /* LIN Time-Out Control Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :21;
      vuint32_t MODE:1;
      vuint32_t IOT:1;
      vuint32_t TOCE:1;
      vuint32_t CNT:8;
    } B;
  } LINTCSR;

  union {                              /* LIN Output Compare Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t OC2:8;
      vuint32_t OC1:8;
    } B;
  } LINOCR;

  union {                              /* LIN Time-Out Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t RTO:4;
      vuint32_t  :1;
      vuint32_t HTO:7;
    } B;
  } LINTOCR;

  union {                              /* LIN Fractional Baud Rate Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t FBR:4;
    } B;
  } LINFBRR;

  union {                              /* LIN Integer Baud Rate Register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t IBR:20;
    } B;
  } LINIBRR;

  union {                              /* LIN Checksum Field Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t CF:8;
    } B;
  } LINCFR;

  union {                              /* LIN Control Register 2 */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t TBDE:1;
      vuint32_t IOBE:1;
      vuint32_t IOPE:1;
      vuint32_t WURQ:1;
      vuint32_t DDRQ:1;
      vuint32_t DTRQ:1;
      vuint32_t ABRQ:1;
      vuint32_t HTRQ:1;
      vuint32_t  :8;
    } B;
  } LINCR2;

  union {                              /* Buffer Identifier Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DFL:6;
      vuint32_t DIR:1;
      vuint32_t CCS:1;
      vuint32_t  :2;
      vuint32_t ID:6;
    } B;
  } BIDR;

  union {                              /* Buffer Data Register Least Significant */
    vuint32_t R;
    struct {
      vuint32_t DATA3:8;
      vuint32_t DATA2:8;
      vuint32_t DATA1:8;
      vuint32_t DATA0:8;
    } B;
  } BDRL;

  union {                              /* Buffer Data Register Most Significant */
    vuint32_t R;
    struct {
      vuint32_t DATA7:8;
      vuint32_t DATA6:8;
      vuint32_t DATA5:8;
      vuint32_t DATA4:8;
    } B;
  } BDRM;

  union {                              /* Identifier Filter Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t FACT:16;
    } B;
  } IFER;

  union {                              /* Identifier Filter Match Index */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t IFMI:5;
    } B;
  } IFMI;

  union {                              /* Identifier Filter Mode Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t IFM:8;
    } B;
  } IFMR;

  union {                              /* Identifier Filter Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DFL:6;                 /* Data Field Length */
      vuint32_t DIR:1;                 /* Direction */
      vuint32_t CCS:1;                 /* Classic Checksum */
      vuint32_t  :2;
      vuint32_t ID:6;                  /* Identifier */
    } B;
  } IFCR[16];

  union {                              /* Global Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t TDFBM:1;
      vuint32_t RDFBM:1;
      vuint32_t TDLIS:1;
      vuint32_t RDLIS:1;
      vuint32_t STOP:1;
      vuint32_t SR:1;
    } B;
  } GCR;

  union {                              /* UART Preset Timeout Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t PTO:12;
    } B;
  } UARTPTO;

  union {                              /* UART Current Timeout Register */
    vuint32_t R;
    struct {
      vuint32_t  :20;
      vuint32_t CTO:12;
    } B;
  } UARTCTO;

  union {                              /* DMA Tx Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DTE:16;
    } B;
  } DMATXE;

  union {                              /* DMA Rx Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t DRE:16;
    } B;
  } DMARXE;
};


/* ============================================================================
   =============================== Module: LPU ================================
   ============================================================================ */

struct LPU_tag {
  union {                              /* LPU Mode Control Register */
    vuint32_t R;
    struct {
      vuint32_t TARGET_MODE:4;         /* Target Chip Mode */
      vuint32_t  :12;
      vuint32_t KEY:16;                /* This field provides the key to change the target mode. Any write access to the register with a value different from the keys is always ignored. Read access will always return the inverted key */
    } B;
  } MCTL;

  union {                              /* LPU Run Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :15;
      vuint32_t CAN0_CONT:1;           /* CAN0 continuous operation across LPU modes. CAN CHI frequency will switch from FS80 to LPU_SYS_CLK which will require reconfiguration thus inhibiting continuous operation across LPU modes. */
      vuint32_t  :7;
      vuint32_t DIRECT_DRUN:1;         /* Transition to DRUN on LPU_STANDBY exit */
      vuint32_t SYS_CLK_SEL:1;         /* System clock selection in LPU RUN mode */
      vuint32_t LPU_SLEEP:1;           /* Core sleep request during LPU RUN */
      vuint32_t  :1;
      vuint32_t SXOSC_ON:1;            /* SXOSC control during LPU_RUN */
      vuint32_t SIRC_ON:1;             /* SIRC control during LPU_RUN */
      vuint32_t  :1;
      vuint32_t FXOSC_ON:1;            /* FXOSC control during LPU_RUN */
      vuint32_t FIRC_ON:1;             /* FIRC oscillator control during LPU_RUN */
    } B;
  } RUN_CF;

  union {                              /* LPU Stop Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t SXOSC_ON:1;            /* SXOSC control during LPU_STOP */
      vuint32_t SIRC_ON:1;             /* SIRC control during LPU_STOP */
      vuint32_t  :1;
      vuint32_t FXOSC_ON:1;            /* FXOSC control during LPU_STOP */
      vuint32_t FIRC_ON:1;             /* FIRC oscillator control during LPU_STOP */
    } B;
  } STOP_CF;

  union {                              /* LPU Standby Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :27;
      vuint32_t SXOSC_ON:1;            /* SXOSC control during LPU_STANDBY */
      vuint32_t SIRC_ON:1;             /* SIRC control during LPU_STANDBY */
      vuint32_t  :1;
      vuint32_t FXOSC_ON:1;            /* FXOSC clock source control during LPU_STANDBY */
      vuint32_t FIRC_ON:1;             /* FIRC oscillator control during LPU_STANDBY */
    } B;
  } STANDBY_CF;

  union {                              /* LPU Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :10;
      vuint32_t PD2_PWR_STAT:1;        /* Ensures the main domain (power domain 2) is power gated completely. */
      vuint32_t SXOSC_STAT:1;          /* SXOSC clock source status */
      vuint32_t SIRC_STAT:1;           /* SIRC clock status */
      vuint32_t  :1;
      vuint32_t FXOSC_STAT:1;          /* FXOSC clock source status */
      vuint32_t FIRC_STAT:1;           /* FIRC clock status */
      vuint32_t CLK1_STOP:1;           /* FXOSC clock status during LPU mode */
      vuint32_t CLK0_STOP:1;           /* FIRC status during LPU mode */
      vuint32_t  :8;
      vuint32_t MTRANS:1;              /* LPU mode transition */
      vuint32_t  :1;
      vuint32_t CURRENT_MODE:4;        /* Current mode of the chip */
    } B;
  } SR;

  union {                              /* LPU Interrupt control register */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t LPU_MRIG_E:1;          /* LPU mode request ignored interrupt enable */
      vuint32_t LPU_NEM_E:1;           /* LPU non-exist mode interrupt enable */
      vuint32_t LPU_MRI_E:1;           /* LPU mode request illegal interrupt enable */
      vuint32_t LPU_MTI_E:1;           /* LPU mode transition illegal interrupt enable */
      vuint32_t  :12;
      vuint32_t LPU_MRIG:1;            /* LPU mode request ignored */
      vuint32_t LPU_NEM:1;             /* LPU non-exist mode interrupt */
      vuint32_t LPU_MRI:1;             /* LPU mode request illegal interrupt */
      vuint32_t LPU_MTI:1;             /* LPU mode transition illegal interrupt */
    } B;
  } ICR;

  union {                              /* Module Disable */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t eMIOS_2:1;
      vuint32_t CMP_2:1;
      vuint32_t CMP_1:1;
      vuint32_t CMP_0:1;
      vuint32_t MEMU_1:1;
      vuint32_t BCTU:1;
      vuint32_t CAN0:1;
      vuint32_t LIN_0:1;
      vuint32_t DSPI_3:1;
      vuint32_t ADC_0:1;
    } B;
  } MDIS;
};


/* ============================================================================
   =============================== Module: MC_CGM =============================
   ============================================================================ */

struct MC_CGM_tag {
  uint8_t MC_CGM_reserved0[384];
  union {                              /* Clockout 1 Select Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t SELCTL:4;              /* CLKOUT1 Source Select */
      vuint32_t  :24;
    } B;
  } CLKOUT1_SC;

  uint8_t MC_CGM_reserved[4];

  union {                              /* CLKOUT1_DC Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;                  /* CLKOUT1_DC enable */
      vuint32_t  :4;
      vuint32_t DIV:11;                 /* Divider */
      vuint32_t  :16;
    } B;
  } CLKOUT1_DC;

  uint8_t MC_CGM_reserved1[52];
  union {                              /* Auxiliary Clock 5 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC5_SC;

  union {                              /* Auxiliary Clock 5 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELSTAT:1;
      vuint32_t  :24;
    } B;
  } AC5_SS;

  uint8_t MC_CGM_reserved2[56];
  union {                              /* System Clock Divider 6 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :12;
      vuint32_t DIV:3;                 /* Divider */
      vuint32_t  :16;
    } B;
  } SC_DC6;

  uint8_t MC_CGM_reserved3[60];
  union {                              /* Auxiliary Clock 7 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC7_SC;

  union {                              /* Auxiliary Clock 7 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC7_SS;

  uint8_t MC_CGM_reserved4[56];
  union {                              /* Auxiliary Clock 8 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC8_SC;

  union {                              /* Auxiliary Clock 8 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC8_SS;

  uint8_t MC_CGM_reserved5[56];
  union {                              /* Auxiliary Clock 9 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC9_SC;

  union {                              /* Auxiliary Clock 9 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC9_SS;

  uint8_t MC_CGM_reserved6[1080];
  union {                              /* PCS Switch Duration Register */
    vuint8_t R;
    struct {
      vuint8_t SDUR:8;
    } B;
  } PCS_SDUR;

  uint8_t MC_CGM_reserved7[3];
  union {                              /* PCS Divider Change Register 1 */
    vuint32_t R;
    struct {
      vuint32_t INIT:16;
      vuint32_t  :8;
      vuint32_t RATE:8;
    } B;
  } PCS_DIVC1;

  union {                              /* PCS Divider End Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t DIVE:20;
    } B;
  } PCS_DIVE1;

  union {                              /* PCS Divider Start Register 1 */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t DIVS:20;
    } B;
  } PCS_DIVS1;

  union {                              /* PCS Divider Change Register 2 */
    vuint32_t R;
    struct {
      vuint32_t INIT:16;
      vuint32_t  :8;
      vuint32_t RATE:8;
    } B;
  } PCS_DIVC2;

  union {                              /* PCS Divider End Register 2 */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t DIVE:20;
    } B;
  } PCS_DIVE2;

  union {                              /* PCS Divider Start Register 2 */
    vuint32_t R;
    struct {
      vuint32_t  :12;
      vuint32_t DIVS:20;
    } B;
  } PCS_DIVS2;

  uint8_t MC_CGM_reserved8[176];
  union {                              /* Divider Update Abort Register */
    vuint32_t R;
    struct {
      vuint32_t  :31;
      vuint32_t DIV_UPD_ABRTD:1;
    } B;
  } DIV_UPD_ABRTD;

  union {                              /* System Clock Divider Ratio Change Register */
    vuint32_t R;
    struct {
      vuint32_t  :30;
      vuint32_t HALT_ABORT_DIS:1;
      vuint32_t SYS_DIV_RATIO_CHNG:1;
    } B;
  } SC_DIV_RC;

  union {                              /* Divider Update Type Register */
    vuint32_t R;
    struct {
      vuint32_t SYS_UPD_TYPE:1;        /* System Clock Divider Update Type */
      vuint32_t  :24;
      vuint32_t AUX_UPD_TYPE:1;        /* Auxiliary Clock Divider Update Type */
      vuint32_t  :6;
    } B;
  } DIV_UPD_TYPE;

  union {                              /* Divider Update Trigger Register */
    vuint32_t R;
    struct {
      vuint32_t DIV_UPD_TRIGGER:32;
    } B;
  } DIV_UPD_TRIG;

  union {                              /* Divider Update Status Register */
    vuint32_t R;
    struct {
      vuint32_t SYS_UPD_STAT:1;        /* System Clock Divider Update Status */
      vuint32_t  :24;
      vuint32_t AUX_UPD_STAT:1;        /* Auxiliary Clock Divider Status Type */
      vuint32_t  :6;
    } B;
  } DIV_UPD_STAT;

  uint8_t MC_CGM_reserved9[4];
  union {                              /* System Clock Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t SELSTAT:4;
      vuint32_t  :4;
      vuint32_t SWTRG:3;
      vuint32_t SWIP:1;
      vuint32_t  :16;
    } B;
  } SC_SS;

  union {                              /* System Clock Divider 0 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :12;
      vuint32_t DIV:3;
      vuint32_t  :16;
    } B;
  } SC_DC0;

  union {                              /* System Clock Divider 1 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :12;
      vuint32_t DIV:3;
      vuint32_t  :16;
    } B;
  } SC_DC1;

  union {                              /* System Clock Divider 2 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :11;
      vuint32_t DIV:4;
      vuint32_t  :16;
    } B;
  } SC_DC2;

  union {                              /* System Clock Divider 3 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :13;
      vuint32_t DIV:2;
      vuint32_t  :16;
    } B;
  } SC_DC3;

  union {                              /* System Clock Divider 4 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :13;
      vuint32_t DIV:2;
      vuint32_t  :16;
    } B;
  } SC_DC4;

  union {                              /* System Clock Divider 5 Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :12;
      vuint32_t DIV:3;
      vuint32_t  :16;
    } B;
  } SC_DC5;

  uint8_t MC_CGM_reserved10[64];
  union {                              /* Auxiliary Clock 2 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELSTAT:1;
      vuint32_t  :24;
    } B;
  } AC2_SC;

  union {                              /* Auxiliary Clock 2 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELSTAT:1;
      vuint32_t  :24;
    } B;
  } AC2_SS;

  uint8_t MC_CGM_reserved12[24];
  union {                              /* Auxiliary Clock 3 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC3_SC;

  union {                              /* Auxiliary Clock 3 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELSTAT:1;
      vuint32_t  :24;
    } B;
  } AC3_SS;

  uint8_t MC_CGM_reserved13[24];
  union {                              /* Auxiliary Clock 4 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELCTL:1;
      vuint32_t  :24;
    } B;
  } AC4_SC;

  union {                              /* Auxiliary Clock 4 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :7;
      vuint32_t SELSTAT:1;
      vuint32_t  :24;
    } B;
  } AC4_SS;

  uint8_t MC_CGM_reserved14[56];
  union {                              /* Auxiliary Clock 6 Select Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t SELCTL:4;
      vuint32_t  :24;
    } B;
  } AC6_SC;

  union {                              /* Auxiliary Clock 6 Select Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :4;
      vuint32_t SELSTAT:4;
      vuint32_t  :24;
    } B;
  } AC6_SS;

  union {                              /* Aux Clock 6 Divider Configuration 0 for CLKOUT_0 */
    vuint32_t R;
    struct {
      vuint32_t DE:1;
      vuint32_t  :10;
      vuint32_t DIV:5;
      vuint32_t  :16;
    } B;
  } AC6_DC0;
};


/* ============================================================================
   =============================== Module: MC_ME ==============================
   ============================================================================ */

struct MC_ME_tag {
  union {                              /* Global Status Register */
    vuint32_t R;
    struct {
      vuint32_t S_CURRENT_MODE:4;
      vuint32_t S_MTRANS:1;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t S_PDO:1;
      vuint32_t  :2;
      vuint32_t S_MVR:1;
      vuint32_t  :2;
      vuint32_t S_FLA:2;
      vuint32_t  :7;
      vuint32_t S_SXOSC:1;             /* 32 KHz external oscillator status */
      vuint32_t S_SIRCON:1;            /* 128 KHz internal RC oscillator status */
      vuint32_t S_PLLON:1;             /* PLL status */
      vuint32_t S_FXOSC:1;             /* 8-40 MHz crystal oscillator status */
      vuint32_t S_FIRCON:1;
      vuint32_t S_SYSCLK:4;
    } B;
  } GS;

  union {                              /* Mode Control Register */
    vuint32_t R;
    struct {
      vuint32_t TARGET_MODE:4;         /* Target chip mode */
      vuint32_t  :12;
      vuint32_t KEY:16;
    } B;
  } MCTL;

  union {                              /* Mode Enable Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t RESET_DEST:1;
      vuint32_t  :1;
      vuint32_t STANDBY0:1;            /* STANDBY0 mode enable */
      vuint32_t  :2;
      vuint32_t STOP0:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t RUN3:1;
      vuint32_t RUN2:1;
      vuint32_t RUN1:1;
      vuint32_t RUN0:1;
      vuint32_t DRUN:1;
      vuint32_t SAFE:1;
      vuint32_t  :1;
      vuint32_t RESET_FUNC:1;
    } B;
  } ME;

  union {                              /* Interrupt Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t I_ICONF_CC:1;
      vuint32_t  :1;
      vuint32_t I_ICONF:1;
      vuint32_t I_IMODE:1;
      vuint32_t I_SAFE:1;
      vuint32_t I_MTC:1;
    } B;
  } IS;

  union {                              /* Interrupt Mask Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t M_ICONF_CC:1;
      vuint32_t  :1;
      vuint32_t M_ICONF:1;
      vuint32_t M_IMODE:1;
      vuint32_t M_SAFE:1;
      vuint32_t M_MTC:1;
    } B;
  } IM;

  union {                              /* Invalid Mode Transition Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :26;
      vuint32_t S_MRIG:1;
      vuint32_t S_MTI:1;
      vuint32_t S_MRI:1;
      vuint32_t S_DMA:1;
      vuint32_t S_NMA:1;
      vuint32_t S_SEA:1;
    } B;
  } IMTS;

  union {                              /* Debug Mode Transition Status Register */
    vuint32_t R;
    struct {
      vuint32_t PREVIOUS_MODE:4;
      vuint32_t  :4;
      vuint32_t MPH_BUSY:1;
      vuint32_t  :2;
      vuint32_t PMC_PROG:1;
      vuint32_t DBG_MODE:1;
      vuint32_t CCKL_PROG:1;
      vuint32_t PCS_PROG:1;
      vuint32_t SMR:1;
      vuint32_t CDP_PRPH_0_255:1;      /* Clock Disable Process Pending status for Peripherals 0…255 */
      vuint32_t VREG_CSRC_SC:1;
      vuint32_t CSRC_CSRC_SC:1;
      vuint32_t IRC_SC:1;
      vuint32_t SCSRC_SC:1;
      vuint32_t SYSCLK_SW:1;
      vuint32_t  :1;
      vuint32_t FLASH_SC:1;
      vuint32_t  :4;
      vuint32_t CDP_PRPH_96_127:1;
      vuint32_t CDP_PRPH_64_95:1;
      vuint32_t CDP_PRPH_32_63:1;
      vuint32_t CDP_PRPH_0_31:1;
    } B;
  } DMTS;

  uint8_t MC_ME_reserved0[4];
  union {                              /* RESET Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32Khz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } RESET_MC;

  uint8_t MC_ME_reserved1[4];
  union {                              /* SAFE Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32Khz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } SAFE_MC;

  union {                              /* DRUN Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32Khz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } DRUN_MC;

  union {                              /* RUN0 Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32 KHz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } RUN_MC[4];

  uint8_t MC_ME_reserved2[8];
  union {                              /* STOP0 Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32 KHz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } STOP_MC;

  uint8_t MC_ME_reserved3[8];
  union {                              /* STANDBY0 Mode Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t PWRLVL:3;
      vuint32_t  :4;
      vuint32_t PDO:1;
      vuint32_t  :2;
      vuint32_t MVRON:1;
      vuint32_t  :2;
      vuint32_t FLAON:2;
      vuint32_t  :7;
      vuint32_t SXOSCON:1;             /* 32 KHz external oscillator control */
      vuint32_t SIRCON:1;
      vuint32_t PLLON:1;
      vuint32_t FXOSCON:1;
      vuint32_t FIRCON:1;
      vuint32_t SYSCLK:4;
    } B;
  } STANDBY_MC;

  uint8_t MC_ME_reserved4[8];
  union {                              /* Peripheral Status Register 0 */
    vuint32_t R;
    struct {
      vuint32_t S_IIC_1:1;
      vuint32_t S_IIC_0:1;
      vuint32_t  :1;
      vuint32_t S_FlexRay:1;           /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. */
      vuint32_t  :2;
      vuint32_t S_ADC_1:1;             /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active. */
      vuint32_t S_ADC_0:1;             /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :1;
      vuint32_t S_ACMP_2:1;            /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_ACMP_1:1;            /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_ACMP_0:1;            /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :4;
      vuint32_t S_ENET:1;              /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :2;
      vuint32_t S_SAI_2:1;             /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_SAI_1:1;             /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active. */
      vuint32_t S_SAI_0:1;             /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :2;
      vuint32_t S_SDHC:1;              /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_MLB:1;               /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_USB_SPH:1;           /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t S_USBOTG:1;
      vuint32_t S_eMIOS_2:1;           /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. */
      vuint32_t S_eMIOS_1:1;           /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. */
      vuint32_t S_eMIOS_0:1;           /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. */
      vuint32_t S_BCTU:1;              /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
    } B;
  } PS0;

  union {                              /* Peripheral Status Register 1 */
    vuint32_t R;
    struct {
      vuint32_t S_LIN:14;              /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :6;
      vuint32_t S_DSPI:4;              /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
      vuint32_t  :6;
      vuint32_t S_IIC:2;               /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. 0: Peripheral is frozen 1: Peripheral is active */
    } B;
  } PS1;

  union {                              /* Peripheral Status Register 2 */
    vuint32_t R;
    struct {
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t S_WKPU:1;
      vuint32_t S_LPU_CTL:1;
      vuint32_t S_PIT_RTI_0:1;
      vuint32_t S_DMAMUX:1;            /* Peripheral status - These bits specify the current status of each peripheral which is controlled by the MC_ME. */
      vuint32_t  :5;
      vuint32_t S_CRC:1;
      vuint32_t S_MEMU_0:1;
      vuint32_t S_JDC:1;
      vuint32_t S_TDM:1;
      vuint32_t  :1;
      vuint32_t  :2;
      vuint32_t S_FLEXCAN:8;
      vuint32_t  :2;
      vuint32_t S_LIN:4;
    } B;
  } PS2;

  union {                              /* Peripheral Status Register 3 */
    vuint32_t R;
    struct {
      vuint32_t  :22;
      vuint32_t S_MEMU_1:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t S_RTC_API:1;
      vuint32_t S_SPI:6;
    } B;
  } PS3;

  uint8_t MC_ME_reserved5[16];
  union {                              /* Run Peripheral Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :24;
      vuint32_t RUN3:1;
      vuint32_t RUN2:1;
      vuint32_t RUN1:1;
      vuint32_t RUN0:1;
      vuint32_t DRUN:1;
      vuint32_t SAFE:1;
      vuint32_t  :1;
      vuint32_t RESET:1;
    } B;
  } RUN_PC[8];

  union {                              /* Low-Power Peripheral Configuration Register */
    vuint32_t R;
    struct {
      vuint32_t  :18;
      vuint32_t STANDBY0:1;            /* Peripheral control during STANDBY0 */
      vuint32_t  :2;
      vuint32_t STOP0:1;
      vuint32_t  :1;
      vuint32_t  :1;
      vuint32_t  :8;
    } B;
  } LP_PC[8];

    /* Note on PCTL registers: There are only some PCTL implemented         */
    /*  In order to make the PCTL easily addressable, these are defined     */
    /*  as an array (ie ME.PCTL[x].R). This means you have to be careful    */
    /*  when addressing these registers in order not to access a PCTL that  */
    /*  is not implemented. Following are available: 0-7, 10-12, 15, 20-25, */
    /*  28, 30-33, 40-43, 50-67, 70-77, 80-84, 90-91, 93-94, 96-102, 104    */

  union {                              /* BCTU Peripheral Control Register */
    vuint8_t R;
    struct {
      vuint8_t  :1;
      vuint8_t DBG_F:1;
      vuint8_t LP_CFG:3;
      vuint8_t RUN_CFG:3;
    } B;
  } PCTL[104];

  uint8_t MC_ME_reserved6[152];
  union {                              /* Core Status Register */
    vuint32_t R;
    struct {
      vuint32_t  :28;
      vuint32_t S_CORE3:1;             /* Core3 Status */
      vuint32_t S_CORE2:1;             /* Core2 Status */
      vuint32_t S_CORE1:1;
      vuint32_t  :1;
    } B;
  } CS;

  union {
    vuint16_t R;
    struct {
      vuint16_t  :1;
      vuint16_t STANDBY0:2;
      vuint16_t  :2;
      vuint16_t STOP0:1;
      vuint16_t  :1;
      vuint16_t  :1;
      vuint16_t RUN3:1;
      vuint16_t RUN2:1;
      vuint16_t RUN1:1;
      vuint16_t RUN0:1;
      vuint16_t DRUN:1;
      vuint16_t SAFE:1;
      vuint16_t  :1;
      vuint16_t RESET:1;
    } B;
  } CCTL[4];

  uint8_t MC_ME_reserved7[20];
  union {
    vuint32_t R;
    struct {
      vuint32_t ADDR:30;
      vuint32_t  :1;
      vuint32_t RMC:1;                 /* Reset on Mode Change */
    } B;
  } CADDR[4];
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

#endif /* CWSW_ARCH_MPC57XX_INCLUDE_MPC5748G_TYPES_2_H_ */
