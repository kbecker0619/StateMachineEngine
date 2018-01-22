
#include "projcfg.h"

#include "cwsw_lib.h"

#include <cvirte.h>
#include <cwsw_dio_uir.h>
#include <userint.h>


int panelHandle;

#if 0    /* formerly excluded lines */
int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "cwsw_dio.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}
#endif   /* formerly excluded lines */

int
CVICALLBACK cbOnBtnQuit (
	int panel, int control, int event,
	void *callbackData,
	int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

/** Handle LW switch events, pass them on the CWSW lib as if they were physical switch events from
 * the starter kit board.
 */
#include "cwsw_eventsim.h"
int
CVICALLBACK cbOnBtn (
	int panel, int control, int event,
	void *callbackData,
	int eventData1, int eventData2)
{
	tEventPayload ev = {0};
	static int val = 0;
	UNUSED(panel);
	UNUSED(callbackData);
	UNUSED(eventData1);
	UNUSED(eventData2);
	switch (event)
	{
	//	case EVENT_LEFT_CLICK:
		case EVENT_COMMIT:
	//	case EVENT_VAL_CHANGED:
	//	case EVENT_LEFT_CLICK_UP:	// this version of LW doesn't have mouse-up eventgs, so that'll change our desired behavior
			val = !val;
			ev.evId = control;
			ev.evInt = event;
			PostEvent(evButtonCommit, ev);

			break;
	}
	return 0;
}


void
BoardPanel__Set_PanelHandle(int val)
{

}
void lwWriteVirtualPin(int bitPos, int value)
{
	/* This LUT converts from whatever indexes are used by the application, to the
	 * panel controls used by our LW output panel.
	 */
	int ledlut[] = { PANEL_LED1, PANEL_LED2, PANEL_LED3, 3, 4, PANEL_USBVBUS, 6, 7 };
	if(panelHandle)
	{
		SetCtrlVal(panelHandle, ledlut[bitPos], value);
	}
}

void lwUserLedSet(int whichled, int value)
{
	lwWriteVirtualPin(whichled, value);
}

