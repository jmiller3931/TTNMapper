/*
 * ttn_secrets.h - Store your keys here!
 *
 */

// Application EUI
// This EUI must be in little-endian format, so least-significant-byte
// first. When copying an EUI from ttnctl output, this means to reverse
// the bytes. For TTN issued EUIs the last bytes should be 0xD5, 0xB3,
// 0x70.
#define SECRET_APP_EUI { 0x87, 0xF1, 0x00, 0xD0, 0x7E, 0xD5, 0xB3, 0x70 }

// Device EUI
// This should also be in little endian format, see above.
// The Adafruit Feather / RFM95 does not have a unique id. To ensure uniqueness
// generate the Device EUI in the TTN console
#define SECRET_DEV_EUI { 0x7D, 0x2E, 0x37, 0x9B, 0xA7, 0x6A, 0x24, 0x00 }

// App key
// This key should be in big endian format (or, since it is not really a
// number but a block of memory, endianness does not really apply). In
// practice, a key taken from the TTN console can be copied as-is.
#define SECRET_APP_KEY { 0xED, 0xFA, 0xE4, 0xE6, 0xE2, 0x89, 0xEB, 0x74, 0xCF, 0x41, 0xA5, 0x3F, 0xA6, 0xD1, 0xA5, 0xF7 }

