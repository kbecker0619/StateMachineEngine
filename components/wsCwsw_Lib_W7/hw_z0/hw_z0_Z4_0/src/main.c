/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "projcfg.h"
#include "derivative.h" /* include peripheral declarations */

#include "cwsw_lib.h"

extern void xcptn_xmpl(void);

int main(void)
{
	volatile int counter = 0;

	(void)Init(Cwsw_Lib);		// Cwsw_Lib__Init()
	xcptn_xmpl ();              /* Configure and Enable Interrupts */

	/* Loop forever */
	for(;;) {
	   	counter++;
	}
}
