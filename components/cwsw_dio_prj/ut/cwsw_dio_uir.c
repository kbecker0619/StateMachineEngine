
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

extern void Csws_Dio_Ut__Task(void);

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
		case EVENT_IDLE:
			Task(Csws_Dio_Ut);
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

	UNUSED(panel);
	UNUSED(callbackData);
	UNUSED(eventData1);
	UNUSED(eventData2);
	switch (event)
	{
		case EVENT_COMMIT:
			ev.evId = control;
			(void)GetCtrlVal(panelHandle, control, &ev.evInt);
			PostEvent(evButtonCommit, ev);

			break;
	}
	return 0;
}


#include "cwsw_bsp.h"
int
CVICALLBACK cbTaskTimer (int panel, int control, int event, void *callbackData, int eventData1, int eventData2)
{
	if(Get(Cwsw_Bsp, Initialized))
	{
		// for debugging purposes only
		(void)SuspendTimerCallbacks();

		switch (event)
		{
			case EVENT_TIMER_TICK:
				Task(Csws_Dio_Ut);
				break;
		}

		(void)ResumeTimerCallbacks();
	}
	return 0;
}


int
CVICALLBACK cbPanel (int panel, int event, void *callbackData, int eventData1, int eventData2)
{
	static volatile int a = 0;
	switch (event)
	{
		case EVENT_GOT_FOCUS:
			break;

		case EVENT_LOST_FOCUS:
			break;

		case EVENT_CLOSE:
			break;

		case EVENT_IDLE:
			a = !a;
			break;
		case EVENT_NONE:
			a = !a + 1;
			break;

		default:
			break;
	}
	return 0;
}


void
BoardPanel__Set_PanelHandle(int val)
{

}

/* This LUT converts from whatever indexes are used by the application, to the
 * panel controls used by our LW output panel.
 */
static int ledlut[] = { PANEL_LED1, PANEL_LED2, PANEL_LED3, 3, 4, PANEL_USBVBUS, 6, 7 };

void lwWriteVirtualPin(int bitPos, int value)
{
	if(panelHandle)
	{
		SetCtrlVal(panelHandle, ledlut[bitPos], value);
	}
}

void lwUserLedSet(int whichled, int value)
{
	lwWriteVirtualPin(whichled, value);
}

bool lwReadVirtualPin(int channel, int bitPos)
{
	int val = 0;
	switch(channel)
	{
	case PORT_CHANNEL_B:
		switch(bitPos)
		{
		case PORTS_BIT_POS_0:	// LED 1
		case PORTS_BIT_POS_1:	// LED 2
		case PORTS_BIT_POS_2:	// LED 3
			GetCtrlVal(panelHandle, ledlut[bitPos], &val);
			break;

		default:
			break;
		}
		break;

	default:
		break;
	}
	return !!val;
}
