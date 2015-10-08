/*
 * $ Copyright Broadcom Corporation $
 */

/** @file
 *
 * Proximity Server Sample Application (GATT Server database definitions)
 *
 */
#include "wiced.h"

#ifdef __cplusplus
extern "C" {
#endif

#define		UUID_SERVCLASS_PROVISION		0xE0,0x96,0x10,0xA7,0xF5,0xD0,0x60,0xB0,0xD2,0x48,0xFB,0xDF,0x00,0x00,0xBB,0xAA
#define		GATT_UUID_PROVISION_SSID		0xE0,0x96,0x10,0xA7,0xF5,0xD0,0x60,0xB0,0xD2,0x48,0xFB,0xDF,0x01,0x00,0xBB,0xAA
#define		GATT_UUID_PROVISION_SECURITY	0xE0,0x96,0x10,0xA7,0xF5,0xD0,0x60,0xB0,0xD2,0x48,0xFB,0xDF,0x02,0x00,0xBB,0xAA
#define		GATT_UUID_PROVISION_PASSWORD	0xE0,0x96,0x10,0xA7,0xF5,0xD0,0x60,0xB0,0xD2,0x48,0xFB,0xDF,0x03,0x00,0xBB,0xAA
#define		GATT_UUID_PROVISION_ACTION		0xE0,0x96,0x10,0xA7,0xF5,0xD0,0x60,0xB0,0xD2,0x48,0xFB,0xDF,0x04,0x00,0xBB,0xAA


enum {
    // ***** Primary service 'Generic Attribute'
    HDLS_GENERIC_ATTRIBUTE      =  0x0100,
    HDLC_GENERIC_ATTRIBUTE_SERVICE_CHANGED,
    HDLC_GENERIC_ATTRIBUTE_SERVICE_CHANGED_VALUE,

    // ***** Primary service 'Generic Access'
    HDLS_GENERIC_ACCESS,
    HDLC_GENERIC_ACCESS_DEVICE_NAME,
    HDLC_GENERIC_ACCESS_DEVICE_NAME_VALUE,
    HDLC_GENERIC_ACCESS_APPEARANCE,
    HDLC_GENERIC_ACCESS_APPEARANCE_VALUE,


    // ***** Primary service 'Provision'
    HDLS_PROVISION,
    HDLC_PROVISION_SSID,
	HDLC_PROVISION_SSID_VALUE,

	HDLC_PROVISION_SECURITY,
	HDLC_PROVISION_SECURITY_VALUE,

	HDLC_PROVISION_PASSWORD,
	HDLC_PROVISION_PASSWORD_VALUE,

	HDLC_PROVISION_ACTION,
	HDLC_PROVISION_ACTION_VALUE,
};


extern const uint8_t  gatt_db[];
extern const uint16_t gatt_db_size;

#ifdef __cplusplus
}
#endif
