/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 27, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================
static char const * const sys_ports_none_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/******************************************************************************
  Function:
    SYS_PORTS_Initialize(void)

  Summary:
    Initializes Ports System Service

  Description:
    This function initializes different port pins/channels to the desired state.
    It also remaps the pins to the desired specific function.

  Remarks:
    None.
*/
void SYS_PORTS_Initialize(void)
{
	/* for each port, ... */
	/* PORT A Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_A);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_A, SYS_PORT_A_CNPD);

	/* PORT B Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_B);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_B, SYS_PORT_B_CNPD);

	/* PORT C Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_C);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_C, SYS_PORT_C_CNPD);

	/* PORT D Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_D);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_D, SYS_PORT_D_CNPD);

	/* PORT E Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_E);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_E, SYS_PORT_E_CNPD);

	/* PORT F Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_F);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_F, SYS_PORT_F_CNPD);

	/* PORT G Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_G);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_G, SYS_PORT_G_CNPD);

	/* PORT H Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_H);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_H, SYS_PORT_H_CNPD);

	/* PORT J Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_J);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_J, SYS_PORT_J_CNPD);

	/* PORT K Initialization */
//	PLIB_PORTS_OpenDrainEnable(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_ODC);
//	PLIB_PORTS_Write(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_LAT);
//	PLIB_PORTS_DirectionOutputSet(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_TRIS ^ 0xFFFF);
//	PLIB_PORTS_ChangeNoticePerPortTurnOn(PORTS_ID_0, PORT_CHANNEL_K);
//	PLIB_PORTS_ChannelModeSelect(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_ANSEL ^ 0xFFFF, PORTS_PIN_MODE_DIGITAL);
//	PLIB_PORTS_ChannelChangeNoticeEnable(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_CNEN);
//	PLIB_PORTS_ChannelChangeNoticePullUpEnable(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_CNPU);
//	PLIB_PORTS_ChannelChangeNoticePullDownEnable(PORTS_ID_0, PORT_CHANNEL_K, SYS_PORT_K_CNPD);

	/* PPS Input Remapping */

	/* PPS Output Remapping */

}
