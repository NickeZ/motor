/*
FILENAME...	drvMCDC2805.h
USAGE... This file contains driver "include" information that is specific to
	Intelligent Motion Systems, Inc. MCDC2805(I/IE) and MDrive controllers.

Version:	$Revision: 1.1 $
Modified By:	$Author: rivers $
Last Modified:	$Date: 2005-11-04 20:40:44 $
*/

/*
 *      Original Author: Ron Sluiter
 *      Date: 02/10/2000
 *
 *      Experimental Physics and Industrial Control System (EPICS)
 *
 *      Copyright 1991, the Regents of the University of California,
 *      and the University of Chicago Board of Governors.
 *
 *      This software was produced under  U.S. Government contracts:
 *      (W-7405-ENG-36) at the Los Alamos National Laboratory,
 *      and (W-31-109-ENG-38) at Argonne National Laboratory.
 *
 *      Initial development by:
 *              The Controls and Automation Group (AT-8)
 *              Ground Test Accelerator
 *              Accelerator Technology Division
 *              Los Alamos National Laboratory
 *
 *      Co-developed with
 *              The Controls and Computing Group
 *              Accelerator Systems Division
 *              Advanced Photon Source
 *              Argonne National Laboratory
 *
 *
 *
 * Modification Log:
 * -----------------
 * .01	02/10/2000 rls copied from drvMM4000.h
 * .02  07/01/2004 rls Converted from MPF to asyn.
 * .03  03/18/2005 rls Added MDrive input configuration structure.
 */

#ifndef	INCdrvMCDC2805h
#define	INCdrvMCDC2805h 1

#include "motordrvCom.h"
#include "asynDriver.h"
#include "asynOctetSyncIO.h"

#define COMM_TIMEOUT 2 /* Timeout in seconds */

/* MCDC-2805 specific data is stored in this structure. */
struct MCDC2805controller
{
    asynUser *pasynUser;  	/* For RS-232 */
    char asyn_port[80];     	/* asyn port name */
    int num_motors;             /* Number of MCDC-2805 modules on this serial port */
    CommStatus status;		/* Controller communication status. */
};

/* Function prototypes. */
extern RTN_STATUS MCDC2805Config(int, const char *);
extern RTN_STATUS MCDC2805Config(int, const char *);

#endif	/* INCdrvMCDC2805h */
