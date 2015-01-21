/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformation_H_
#define	_SystemInformation_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/SystemInformation-r8-IEs.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>
#include <liblte/rrc/asn/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation__criticalExtensions_PR {
	SystemInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	SystemInformation__criticalExtensions_PR_systemInformation_r8,
	SystemInformation__criticalExtensions_PR_criticalExtensionsFuture
} SystemInformation__criticalExtensions_PR;

/* SystemInformation */
typedef struct SystemInformation {
	struct SystemInformation__criticalExtensions {
		SystemInformation__criticalExtensions_PR present;
		union SystemInformation__criticalExtensions_u {
			SystemInformation_r8_IEs_t	 systemInformation_r8;
			struct SystemInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_H_ */
#include <liblte/rrc/asn/asn_internal.h>