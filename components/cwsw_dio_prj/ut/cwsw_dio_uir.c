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

int 
CVICALLBACK cbOnBtn (
	int panel, int control, int event,
	void *callbackData, 
	int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			break;
	}
	return 0;
}
