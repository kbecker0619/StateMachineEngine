/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2018. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/


#ifdef __cplusplus
	extern "C" {
#endif

	 /* Panels and Controls: */

#define  PANEL                           1
#define  PANEL_BTN_QUIT                  2       /* callback function: cbOnBtnQuit */
#define  PANEL_BTN_3                     3       /* callback function: cbOnBtn */
#define  PANEL_BTN_2                     4       /* callback function: cbOnBtn */
#define  PANEL_BTN_1                     5       /* callback function: cbOnBtn */
#define  PANEL_LED3                      6
#define  PANEL_LED2                      7
#define  PANEL_LED1                      8
#define  PANEL_USBVBUS                   9

/** Target symbol for Set(BoardPanel, Resource, Value) interface */
#define BoardPanel__Set(res, val)		BoardPanel__Set_ ## res(val)

extern void BoardPanel__Set_PanelHandle(int val);


	 /* Menu Bars, Menus, and Menu Items: */

		  /* (no menu bars in the resource file) */


	 /* Callback Prototypes: */

int  CVICALLBACK cbOnBtn(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cbOnBtnQuit(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cbPanel(int panel, int event, void *callbackData, int eventData1, int eventData2);

extern void lwWriteVirtualPin(int bitPos, int value);
extern void lwUserLedSet(int whichled, int value);
extern bool lwReadVirtualPin(int channel, int bitPos);


#ifdef __cplusplus
	}
#endif
