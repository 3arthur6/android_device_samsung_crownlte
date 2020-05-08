#ifndef _SAMSUNG_DTBH_H_
#define _SAMSUNG_DTBH_H_

/*
 * This is an example of how this header should look like.
 * You need to extract the values for your target manually.
 */

#define DTB_MAX 100

#define DTBH_MAGIC	"DTBH"
#define DTBH_VERSION	2
#define DTBH_PLATFORM	"android"
#define DTBH_SUBTYPE	"samsung"

/* Hardcoded entry */

#define DTBH_PAGE_SIZE_DEF	2048
#define DTBH_PLATFORM_CODE	0x50a6
#define DTBH_SUBTYPE_CODE	0x217584da


/* DTBH_MAGIC + DTBH_VERSION + DTB counts */

#define DT_HEADER_PHYS_SIZE 12

/*
 * keep the eight uint32_t entries first in this struct so we can memcpy them to the file
 */
#define DT_ENTRY_PHYS_SIZE (sizeof(uint32_t) * 8)

#endif // _SAMSUNG_DTBH_H_
