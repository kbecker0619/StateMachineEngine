/** @file
 *	@brief	Clock System Service feature variant implementations.
 *
 *	Description:
 *	This file implements the functions that differ based on different devices
 *	and various implementations of the same feature.
 *
 *
 *	@note	This file is an as-needed COPY of the file created by Microchip's Harmony Configurator,
 *	v2.04, and/or the tool-created support files (e.g., Peripheral Libs) supplied as part of the
 *	MHC eco system. We have NO intention of stealing code or technology, or of claiming undue
 *	credit. This file is here ONLY during the buildup of support for the PIC32 MZ2048 EFM 144
 *	Starter Kit, what we call the "MZ EZ" board. Eventually, I hope to link directly to Harmony's
 *	code, in a way that allows different target architectures
 *
 *	Anyway, because this is a copy of code generated by a tool owned by Microchip, there is
 *	attribution here but no copyright notice.
 *
 *
 *	Original:
 *	Created on: Dec 26, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef ARCH_PIC32MZ2048EFM_FRAMEWORK_SYSTEM_CLK_SRC_SYS_CLK_VARIANT_MAPPING_H_
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_SYSTEM_CLK_SRC_SYS_CLK_VARIANT_MAPPING_H_

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
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_SYSTEM_CLK_SRC_SYS_CLK_VARIANT_MAPPING_H__REVSTRING "$Revision: 0123 $"

/* Macro: REFERENCE_BUSES_MAX

  Summary:
    This is to avoid build error for the devices which does not have
    Reference clock module.

  Description:
    This is to avoid build error for the devices which does not have
    Reference clock module. If the reference clock module exists, the condition
    will fail because this macro will be defined in the template file.
*/

#ifndef REFERENCE_BUSES_MAX
    #define REFERENCE_BUSES_MAX     1
#endif

/* Macro: USB_BUSES_MAX

  Summary:
    This is to avoid build error for the devices which does not have
    USB clock module( or it is not accessible through software).

  Description:
    This is to avoid build error for the devices which does not have
    USB clock module( or it is not accessible through software). If the reference
    clock module exists, the condition will fail because this macro will be
    defined in the template file.
*/

#ifndef USB_BUSES_MAX
    #define USB_BUSES_MAX       1
#endif

/* Macro: CLK_REFERENCE_DIVISOR_MAX

  Summary:
    This is to avoid build error for the devices which does not have
    Reference clock module.

  Description:
    This is to avoid build error for the devices which does not have
    Reference clock module. If the reference clock module exists, the condition
    will fail because this macro will be defined in the template file.
*/

#ifndef CLK_REFERENCE_DIVISOR_MAX
    #define CLK_REFERENCE_DIVISOR_MAX   65535
#endif

/* Macro: CLK_REFERENCE_TRIM_MAX

  Summary:
    This is to avoid build error for the devices which does not have
    Reference clock module.

  Description:
    This is to avoid build error for the devices which does not have
    Reference clock module. If the reference clock module exists, the condition
    will fail because this macro will be defined in the template file.
*/

#ifndef CLK_REFERENCE_TRIM_MAX
    #define CLK_REFERENCE_TRIM_MAX   511
#endif

/* Macro: SYS_CLOCK_USB_CLOCK

  Summary:
    This is to avoid build error for the devices which has a configurable USB
    clock.

  Description:
     This is to avoid build error for the devices which has a configurable USB
    clock.
*/

#ifndef SYS_CLK_UPLL_BEFORE_DIV2_FREQ
    #define SYS_CLK_UPLL_BEFORE_DIV2_FREQ     0
#endif

/* Macro: SYS_CLK_CONFIG_EXTERNAL_CLOCK

  Summary:
    This is to avoid build error for the applications which does not use the
    external clock input.

  Description:
    This is to avoid build error for the applications which does not use the
    external clock input. If the application want to use the External clock
    input he must define this macro with the value of the external clock input
    provided.
*/

#ifndef SYS_CLK_CONFIG_EXTERNAL_CLOCK
    #define SYS_CLK_CONFIG_EXTERNAL_CLOCK       0
#endif

/* Macro: SYS_CLK_BusNumberGet(x)

  Summary:
    This is to select bus number 1 to for devices which does not have
    multiple buses.

  Description:
     This is to select bus number 1 to for devices which does not have
    multiple buses.

*/
#if ( PERIPHERAL_BUSES_MAX > 1 )

    #define SYS_CLK_BusNumberGet(x)                     x

#else

    #define SYS_CLK_BusNumberGet(x)       		0

#endif


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* ARCH_PIC32MZ2048EFM_FRAMEWORK_SYSTEM_CLK_SRC_SYS_CLK_VARIANT_MAPPING_H_ */
