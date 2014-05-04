/*
 * SUPL_ULP_StatusCode.c
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: david.gowers@stericsson.com for ST-Ericsson.
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
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#include <asn_internal.h>

#include "SUPL_ULP_StatusCode.h"

int
StatusCode_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    /* Replace with underlying type checker */
    td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
    return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
StatusCode_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
    td->free_struct    = asn_DEF_ENUMERATED.free_struct;
    td->print_struct   = asn_DEF_ENUMERATED.print_struct;
    td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
    td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
    td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
    td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
    td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
    td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
    if(!td->per_constraints)
        td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
    td->elements       = asn_DEF_ENUMERATED.elements;
    td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;    // Defined explicitly */
}

void
StatusCode_free(asn_TYPE_descriptor_t *td,
        void *struct_ptr, int contents_only) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    td->free_struct(td, struct_ptr, contents_only);
}

int
StatusCode_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
        int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
StatusCode_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
        void **structure, const void *bufptr, size_t size, int tag_mode) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
StatusCode_encode_der(asn_TYPE_descriptor_t *td,
        void *structure, int tag_mode, ber_tlv_tag_t tag,
        asn_app_consume_bytes_f *cb, void *app_key) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
StatusCode_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
        void **structure, const char *opt_mname, const void *bufptr, size_t size) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
StatusCode_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
        int ilevel, enum xer_encoder_flags_e flags,
        asn_app_consume_bytes_f *cb, void *app_key) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
StatusCode_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
        asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
StatusCode_encode_uper(asn_TYPE_descriptor_t *td,
        asn_per_constraints_t *constraints,
        void *structure, asn_per_outp_t *per_out) {
    StatusCode_1_inherit_TYPE_descriptor(td);
    return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_StatusCode_constr_1 = {
    { APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  19 }    /* (0..19,...) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_StatusCode_value2enum_1[] = {
    { 0,    11,    "unspecified" },
    { 1,    13,    "systemFailure" },
    { 2,    17,    "unexpectedMessage" },
    { 3,    13,    "protocolError" },
    { 4,    11,    "dataMissing" },
    { 5,    19,    "unexpectedDataValue" },
    { 6,    16,    "posMethodFailure" },
    { 7,    17,    "posMethodMismatch" },
    { 8,    19,    "posProtocolMismatch" },
    { 9,    21,    "targetSETnotReachable" },
    { 10,    19,    "versionNotSupported" },
    { 11,    16,    "resourceShortage" },
    { 12,    16,    "invalidSessionId" },
    { 13,    24,    "nonProxyModeNotSupported" },
    { 14,    21,    "proxyModeNotSupported" },
    { 15,    23,    "positioningNotPermitted" },
    { 16,    14,    "authNetFailure" },
    { 17,    19,    "authSuplinitFailure" },
    { 100,    19,    "consentDeniedByUser" },
    { 101,    20,    "consentGrantedByUser" },
    { 18,    32,    "ver2-incompatibleProtectionLevel" },
    { 19,    24,    "ver2-serviceNotSupported" },
    { 20,    25,    "ver2-insufficientInterval" },
    { 21,    19,    "ver2-noSUPLCoverage" },
    { 102,    19,    "ver2-sessionStopped" }
    /* This list is extensible */
};
static unsigned int asn_MAP_StatusCode_enum2value_1[] = {
    16,    /* authNetFailure(16) */
    17,    /* authSuplinitFailure(17) */
    18,    /* consentDeniedByUser(100) */
    19,    /* consentGrantedByUser(101) */
    4,    /* dataMissing(4) */
    12,    /* invalidSessionId(12) */
    13,    /* nonProxyModeNotSupported(13) */
    6,    /* posMethodFailure(6) */
    7,    /* posMethodMismatch(7) */
    8,    /* posProtocolMismatch(8) */
    15,    /* positioningNotPermitted(15) */
    3,    /* protocolError(3) */
    14,    /* proxyModeNotSupported(14) */
    11,    /* resourceShortage(11) */
    1,    /* systemFailure(1) */
    9,    /* targetSETnotReachable(9) */
    5,    /* unexpectedDataValue(5) */
    2,    /* unexpectedMessage(2) */
    0,    /* unspecified(0) */
    20,    /* ver2-incompatibleProtectionLevel(18) */
    22,    /* ver2-insufficientInterval(20) */
    23,    /* ver2-noSUPLCoverage(21) */
    21,    /* ver2-serviceNotSupported(19) */
    24,    /* ver2-sessionStopped(102) */
    10    /* versionNotSupported(10) */
    /* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_StatusCode_specs_1 = {
    asn_MAP_StatusCode_value2enum_1,    /* "tag" => N; sorted by tag */
    asn_MAP_StatusCode_enum2value_1,    /* N => "tag"; sorted by N */
    25,    /* Number of elements in the maps */
    21,    /* Extensions before this member */
    1,    /* Strict enumeration */
    0,    /* Native long size */
    0
};
static ber_tlv_tag_t asn_DEF_StatusCode_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_StatusCode = {
    "StatusCode",
    "StatusCode",
    StatusCode_free,
    StatusCode_print,
    StatusCode_constraint,
    StatusCode_decode_ber,
    StatusCode_encode_der,
    StatusCode_decode_xer,
    StatusCode_encode_xer,
    StatusCode_decode_uper,
    StatusCode_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_StatusCode_tags_1,
    sizeof(asn_DEF_StatusCode_tags_1)
        /sizeof(asn_DEF_StatusCode_tags_1[0]), /* 1 */
    asn_DEF_StatusCode_tags_1,    /* Same as above */
    sizeof(asn_DEF_StatusCode_tags_1)
        /sizeof(asn_DEF_StatusCode_tags_1[0]), /* 1 */
    &asn_PER_type_StatusCode_constr_1,
    0, 0,    /* Defined elsewhere */
    &asn_SPC_StatusCode_specs_1    /* Additional specs */
};

