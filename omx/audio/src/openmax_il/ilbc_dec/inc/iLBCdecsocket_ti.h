
/*
 * Copyright (C) Texas Instruments - http://www.ti.com/
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
/* =============================================================================
*             Texas Instruments OMAP(TM) Platform Software
*  (c) Copyright Texas Instruments, Incorporated.  All Rights Reserved.
*
*  Use of this software is controlled by the terms and conditions found
*  in the license agreement under which this software has been supplied.
* ============================================================================ */
/**
* @file iLBCdecsocket_ti.h
*
* This is an header file for an audio iLBC decoder that is fully
* compliant with the OMX Audio specification.
* This the file is used internally by the component
* in its code and it contains UUID of iLBC decoder socket node.
*
* @path  $(CSLPATH)\OMAPSW_MPU\linux\audio\src\openmax_il\iLBC_dec\inc\
*
* @rev 1.0
*/
/* --------------------------------------------------------------------------- */

#ifndef iLBCDECSOCKET_TI_H
#define iLBCDECSOCKET_TI_H
/* ======================================================================= */
/** iLBCDECSOCKET_TI_UUID: This struct contains the UUID of iLBC decoder socket
 * node on DSP.
*/
/* ==================================================================== */
struct DSP_UUID iLBCDECSOCKET_TI_UUID = {
	0x39408590, 0x7437, 0x4603, 0x85, 0x33, {
	0x5e, 0xb7, 0xd6, 0x52, 0x3c, 0x66
    }
};/**/
#endif /* iLBCDECSOCKET_TI_H */

