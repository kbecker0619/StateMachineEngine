/** @file
 *	@brief	Clock services for CWSW.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Sep 1, 2016
 *	Author: Kevin L. Becker
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
#include "cwsw_clock.h"


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

static char const * const cwsw_clock_RevString = "$Revision: 09052016 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI)
/*	when run on MinGW within Windows, the clock tick is #defined to be the same as the system
 *	clock() function.
 */

#else
/**	Clock tic.
 *	In this UT environment, the sole purpose for this function is to allow the
 *	project to build when you're doing a test build in the Debug build target
 *	from within Eclipse.
 *
 *	In a real live system, it would return the number of milliseconds since a
 *	system reset.
 */
tCwswClockTics Cwsw__Clock(void)
{
	static tCwswClockTics count = 0;
	return ++count;
}

#endif

uint16_t Cwsw_Clock__Init(void)
{
	UNUSED(cwsw_clock_RevString);
	cwsw_assert(Get(Cwsw_Lib, Initialized));
	if( (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI) )
	{
		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dbg_printf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, cwsw_clock_RevString, __FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}
	initialized = true;
	return 0;
}

bool Cwsw_Clock__Get_Initialized(void)
{
	return initialized;
}

// ====	COMPONENT DOCUMENTATION ============================================= {
#if defined(IN_DOXY)				/* { */
/**	\page Clock_Head Reusable Component : Clock Services Support
 *	@tableofcontents
 * 		@subpage Clock_Introduction \n
 * 		@subpage Clock_Design \n
 * 		@subpage Clock_Integration \n
 * 		@subpage Clock_srs \n
 */

/**	\page Clock_Introduction					Introduction to the Clock Services reusable component
 *	@tableofcontents
 *	This chapter briefly describes the design and implementation of the Clock
 *	Services reusable component member of the CWSW library.
 *
 *	This chapter also briefly describes the integration of this feature into the
 *	larger code base of the user software project.
 *
 *	The intended audience of this document is any software engineer who uses the
 *	CWSW library and wants to add support for the clock services provided here.
 *
 *
 *	@section Clock_directory_layout				Directory Layout
 *	As is true with most CWSW components, the main API is published at the root
 *	of the component folder. The primary implementation file is located in a
 *	"src" folder inside the component folder, and any supplemental files are
 *	located in appropriate folders that are not exposed to the project as a whole.
 *
 *
 *
 *	@section Clock_related_docs					Applicable Documents
 *	TBD
 *
 *	@section Clock_terms						Terms, Acronyms, Abbreviations
 *	TBD
 */

/**	\page Clock_Design							Clock Services Subsystem Design
 *	@tableofcontents
 *		@subpage Clock_Responsibilities \n
 *		@subpage Clock_Constraints \n
 *		@subpage Clock_Interactions \n
 *		@subpage Clock_Composition \n
 *		@subpage Clock_Resources \n
 *		@subpage Clock_Interfaces \n
 *		@subpage Clock_Main_Obj_Diag \n
 *		@subpage Clock_Dsm \n
 */

	/**	@page Clock_Responsibilities			Component Responsibilities
	 *	@tableofcontents
	 * 	The Clock Services component provides basic clock services as might be
	 * 	required for a small embedded system.
	 * 	-	On architectures that suport it, there is a timer interrupt that
	 * 		forms the basis of all of the provided services; where timer interrupts
	 * 		are not feasible, there is a small function that must be called as
	 * 		quickly as possible.
	 *	-	Time measurement is provided.
	 *	-	TBD
	 */

	/**	@page Clock_Constraints					Constraints Imposed Upon Component
	 *	@tableofcontents
	 *	-	For best results, the board + architecture should provide a hardware
	 *		clock with interrupt capabilities; this is used to form the basis of
	 *		the serivces provided here. The default configuration is to have a
	 *		1-ms tic rate.
	 */

	/**	\page Clock_Resources      			  	Resources
	 *	@tableofcontents
	 *	TBD
	 */

/**	@page Clock_Integration						Integrating the Reusable Component
 *	@tableofcontents
 *	To add the CWSW Clock Services component to your project, follow these steps.
 *
 *	@Note Author's note: These steps are generic for all IDEs; however, the
 *	specific details (e.g., screen shots) are oriented toward IDEs based on
 *	Eclipse, such as NXP S32DS; ARM DS-5; or TI's Code Composer.
 *	While I have implemented these steps in Microchip's MPLAB v4.x, the steps
 *	are so close that I didn't feel IDE-specific instructions were required.
 *
 *	Integration Steps:
 *	-# [Share the Source](#cs_source_share)
 *	-# [Add Dependencies](#cs_add_depends)
 *	-# [Update Includes paths](#cs_update_includes)
 *	-# [Configuration](#cs_comp_configuration)
 *	-# [Update Initialization Code](#cs_init_code)
 *	-# Optional APIs.
 */

	/**	@page Clock_Integration
	 *	@section cs_source_share				Share the Source
	 *	Designed to be a reusable component, the CWSW Clock Services component is
	 *	organized into a reusable section, and requires additional project-
	 *	specific configuration items in the project.
	 *
	 *	The component layout in your workspace looks like this:
	 *	@code{.sh}

		cwsw_Clock_prj/
		├── cwsw_Clock Services
		│   ├── none
		│   └── pic32mz_efm_sk
		├── doc
		│   └── images
		└── ut

	 *	@endcode
	 *	@note This component is presently under construction; as support is added
	 *	for additional project Clock Servicess, the exact form of the directory tree
	 *	shown above may change.
	 *	@note Some features have been omitted for clarity.
	 *
	 *	The <code>cwsw_Clock_prj</code> directory is the home to the various
	 *	project-management files (such as the Doxygen configuration, the Eclipse
	 *	project files, etc.), and is the parent for the component.
	 *
	 *	The <code>ut</code> directory is the source for the developer workspace
	 *	for this reusable component, and illustrates how to configure the
	 *	component is client projects.
	 *
	 *	The <code>doc</code> directory holds relevant design information not
	 *	included in this Doxygen format.
	 *
	 *	The <code>cwsw_Clock Services</code> directory is the sharable and reusable portion
	 *	of the component.\n
	 *	The design intent is for this folder to be shared into your project's
	 *	directory structure.
	 *	-	@b Preferred: If your code management system can share folders
	 *		(e.g., PVCS / Dimensions, MKS), this might be a good solution; else,
	 *	-	@b Symlinks: filesystem symlinks are supported by GIT, with
	 *		appropriate configuration options set properly.
	 *	-	Example:\n
	 *	Given the following workspace directory structure:
	 *	@code{.sh}

	 	(workspace)
		├── components
		│   ├── cwsw_arch_prj
		│   ├── cwsw_Clock_prj
		│   └── cwsw_lib_prj
		└── cwsw_example_prj
		    ├── appl_swc
		    ├── cfg
		    ├── drivers
		    ├── libs
		    ├── os
		    ├── rte
		    └── services

	 *	@endcode
	 *	Execute the following. @note This example is given using Cygwin; the same
	 *	command line verbatim would be done in Git Bash.\n
	 *	Also, 7-Zip and many other methods exist in Windows to create symbolic links.
	 *
	 *	@code{.sh}

		$ cd cwsw_example_proj/drivers/
		$ ln -s ../../components/cwsw_Clock_prj/cwsw_arc cwsw_Clock Services
		$ git add cwsw_Clock Services

		$ tree ../.. -dL 3
		(workspace)
		├── components
		│   ├── cwsw_arch_prj
		│   ├── cwsw_Clock_prj
		│   │   └── cwsw_Clock Services
		│   └── cwsw_lib_prj
		└── cwsw_example_prj
		    ├── appl_swc
		    ├── cfg
		    ├── drivers
		    │   └── cwsw_Clock Services -> ../../components/cwsw_Clock_prj/cwsw_Clock Services
		    ├── libs
		    ├── os
		    ├── rte
		    └── services

	 *	@endcode
	 *	@note The placement above, in the <code> drivers </code> folder, is
	 *	only a suggestion. Wherever you locate it, if you are using filesystem
	 *	symlinks, it is important to use relative symlinks to maintain
	 *	portability from one dev system to another. <em>(If you are using a
	 *	sharing mechanism from your source versioning system, use the most
	 *	appropriate linking or referencing mechanism is appropriate.)</em>
	 *	\n \n
	 */

	/**	@page Clock_Integration
	 *	@section cs_add_depends					Add Component Dependencies
	 *
	 *	The <code>cwsw_Clock Services</code> component has the following dependencies
	 *	to other cwsw components:
	 *	-	<code>cwsw_lib</code>. To integrate this component, refer to the
	 *		integration instructions [here](@ref Lib_Integration).
	 *	-	<code>cwsw_arch</code>. To integrate this component, refer to the
	 *		integration instructions [here](@ref Arch_Integration).
	 *
	 *	Here is one example of how to do this, using the Cygwin command line:
	 *	@code

		$ cd cwsw_example_proj/drivers
		$ ln -s ../../components/cwsw_arch_prj/cwsw_arch cwsw_arch
		$ cd ../libs/
		$ ln -s ../../components/cwsw_lib_prj/cwsw_lib cwsw_lib

		$ tree ../.. -dL 3
		(workspace)
		├── components
		│   ├── cwsw_arch_prj
		│   │   └── cwsw_arch
		│   ├── cwsw_Clock_prj
		│   │   └── cwsw_Clock Services
		│   └── cwsw_lib_prj
		│       └── cwsw_lib
		└── cwsw_example_proj
		    ├── appl_swc
		    ├── cfg
		    ├── drivers
		    │   ├── cwsw_arch -> ../../components/cwsw_arch_prj/cwsw_arch
		    │   └── cwsw_Clock Services -> ../../components/cwsw_Clock_prj/cwsw_Clock Services
		    ├── libs
		    │   └── cwsw_lib -> ../../components/cwsw_lib_prj/cwsw_lib
		    ├── os
		    ├── rte
		    └── services

	 *	@endcode
	 *
	 *	\n \n
	 */

	/**	@page Clock_Integration
	 *	@section cs_update_includes				Update Includes paths
	 *	@subsection cs_update_includes_paths	Include Paths
	 *	Update your build system to add the relative paths to the selected
	 *	architecture folder in the <code>cwsw_Clock Services</code> folder. @b Note this
	 *	is different than in most other CWSW components; this path is one level
	 *	"deeper."
	 *
	 *	To clarify what you're looking for, here is the annotation for each of
	 *	the files in the <code> arch </code> project.
	 *	@note The design intent, is for all references within the project, to be
	 *	relative to the project itself. Portability is greatly reduced when the
	 *	project refers to fully qualified pathnames, or those outside of the
	 *	project tree itself.
	 *
	 *	@code{.sh}

		$ tree cwsw_Clock_prj/ -dL 2
		cwsw_Clock_prj/
		├── cwsw_Clock Services			<<== target for symlink into your project
		│   ├── none				<<== point your includes path to one and only one of the Clock Services ...
		│   └── pic32mz_efm_sk		<<== folders, and exclude the rest within your build section
		├── doc
		└── ut

	 *	@endcode
	 *	@note Some elements of the tree above have been excluded for clarity.
	 *
	 *	To illustrate how this might be done in an Eclipse-based project, see
	 *	the following screen capture: \n
	 *	@image html doc/images/eclipse_add_includes_path.png			"Example Includes Path"
	 *	\n
	 *
	 *	@subsection cs_exclude_undesireables		Exclude Undesired Clock Servicess
	 *	Because (at least a portion of) the API that faces "upwards" must be
	 *	the same across all supported architectures, multiple definitions of
	 *	those API functions will exist unless those modules are excluded from
	 *	your build.
	 *
	 *	In Eclipse and IDEs derived from it, the easiest way to do this is to
	 *	specifically exclude a folder from the Project Properties dialog. Here
	 *	is an example: \n
	 *	@image html doc/images/eclipse_exclude_folder_from_build.png	"Exclude Directory Item from Build"
	 *	This same "exclude" checkbox appears in multiple places in the project
	 *	properties dialog.
	 *
	 *	In makefile-based projects, simply omit reference to the undesired
	 *	Clock Services folders.
	 *	\n \n
	 */

	/**	@page Clock_Integration
	 *	@section cs_comp_configuration			Configure the Reusable Component and its dependencies
	 *	In some or the supported architectures, no configuration beyond what
	 *	has already been described is necessary. In some others, additional
	 *	items may need to be configured.
	 *
	 *	If the configurations are configured via preprocessor defines, there are two
	 *	easy methods of accomplishing this:
	 *	+ command-line defines
	 *	+ preprocessor defines in the file "projcfg.h"
	 */

	/**	@page Clock_Integration					Integrating the Reusable Component
	 *	@section cs_init_code					Update application's initialization code
	 *	At the time of this writing, none of the supported Clock Servicess require any
	 *	secondary initialization (e.g., initialization calls made after the
	 *	scheduler is started).
	 *
	 *	While not strictly required, it is recommended that the CWSW Library is
	 *	initialized first; following this, the Architecture component can be
	 *	initialized, followed by the Clock Services component.
	 *
	 *	One of the APIs introduced is an abstraction intended to give the same signature to all
	 *	CWSW modules: <code>Init(Component)</code>. This is optional, but when used, looks like
	 *	this:
	 *	@code{.c}

	 	void main(void)
	 	{
	 		(void)Init(Cwsw_Lib);
	 		(void)Init(Cwsw_Arch);
	 		(void)Init(Cwsw_Board);
	 		... more initialization

	 		... main code follows ...
	 	}

	 *	@endcode
	 *	\n \n
	 */


/**	\page Clock_srs							Clock Software Requirements
 *	@tableofcontents
 *	TBD. Might be delineated in an external document.
 */

#endif								/* } */
// ==== /COMPONENT DOCUMENTATION ============================================ }
