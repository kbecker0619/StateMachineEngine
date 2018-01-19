/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2018. All Rights Reserved.          */
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
#define  PANEL_BTN_QUIT                  2       /* callback function: cbOnBtnQuit */
#define  PANEL_BTN_3                     3       /* callback function: cbOnBtn */
#define  PANEL_BTN_2                     4       /* callback function: cbOnBtn */
#define  PANEL_BTN_1                     5       /* callback function: cbOnBtn */
#define  PANEL_LED3                      6
#define  PANEL_LED2                      7
#define  PANEL_LED1                      8


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */ 

int  CVICALLBACK cbOnBtn(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cbOnBtnQuit(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
