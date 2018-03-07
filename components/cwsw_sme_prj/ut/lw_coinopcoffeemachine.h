/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2017. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                           1
#define  PANEL_btnInsertCoin             2       /* callback function: cbOnCoinInserted */
#define  PANEL_QUITBUTTON                3       /* callback function: QuitCallback */
#define  PANEL_indTIMELEFT               4
#define  PANEL_tmrTIMERTIC               5       /* callback function: cbOnTimerTic */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */ 

int  CVICALLBACK cbOnCoinInserted(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cbOnTimerTic(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK QuitCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
