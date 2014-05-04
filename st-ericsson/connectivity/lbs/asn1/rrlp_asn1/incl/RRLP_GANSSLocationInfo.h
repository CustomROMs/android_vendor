/*
 * RRLP_GANSSLocationInfo.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP_Components"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRLP_GANSSLocationInfo_H_
#define	_RRLP_GANSSLocationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRLP_GANSSTODm.h"
#include <NativeInteger.h>
#include "RRLP_GANSSTODUncertainty.h"
#include "RRLP_FixType.h"
#include "RRLP_PositionData.h"
#include "RRLP_Ext-GeographicalInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRLP_ReferenceFrame;

/* RRLP_GANSSLocationInfo */
typedef struct RRLP_GANSSLocationInfo {
	struct RRLP_ReferenceFrame	*referenceFrame	/* OPTIONAL */;
	RRLP_GANSSTODm_t	*ganssTODm	/* OPTIONAL */;
	long	*ganssTODFrac	/* OPTIONAL */;
	RRLP_GANSSTODUncertainty_t	*ganssTODUncertainty	/* OPTIONAL */;
	long	*ganssTimeID	/* OPTIONAL */;
	RRLP_FixType_t	 fixType;
	RRLP_PositionData_t	 posData;
	long	*stationaryIndication	/* OPTIONAL */;
	RRLP_Ext_GeographicalInformation_t	 posEstimate;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRLP_GANSSLocationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRLP_GANSSLocationInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRLP_ReferenceFrame.h"

#endif	/* _RRLP_GANSSLocationInfo_H_ */
