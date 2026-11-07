// Offsets derived from the verified Spotify 9.1.92 export windows.
#pragma once
#include <stdint.h>
static const uintptr_t SAPExportOwnerDescriptorOffset=0x120;
static const uintptr_t SAPExportUnsealCallerReturnOffset=0x4d10eec;
static const uintptr_t SAPExportCacheKeyBodyOffset=0x2f2cfe8;
static const uint8_t SAPExportCacheKeyBody[]={0x00,0x8c,0xc0,0x3d,0xe0,0x03,0x80,0x3d,0x08,0x40,0x42,0xb9,0xe8,0x13,0x00,0xb9,0x20,0x00,0xc0,0x3d};
static const uintptr_t SAPCacheStorageOwnerReturnA=0xa197a18;
static const uintptr_t SAPCacheStorageOwnerReturnB=0xa197a24;
static const uintptr_t SAPExportMediaContextOffset=0x3032f54;
