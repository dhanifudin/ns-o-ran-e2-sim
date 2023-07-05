/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v01.00.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_GlobalKPMnode_gNB_ID_H_
#define	_GlobalKPMnode_gNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GlobalgNB-ID.h"
#include "GNB-CU-UP-ID.h"
#include "GNB-DU-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalKPMnode-gNB-ID */
typedef struct GlobalKPMnode_gNB_ID {
	GlobalgNB_ID_t	 global_gNB_ID;
	GNB_CU_UP_ID_t	*gNB_CU_UP_ID;	/* OPTIONAL */
	GNB_DU_ID_t	*gNB_DU_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalKPMnode_gNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalKPMnode_gNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalKPMnode_gNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalKPMnode_gNB_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalKPMnode_gNB_ID_H_ */
#include "asn_internal.h"
