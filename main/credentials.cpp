/* Credentials definition */
#include "credentials.h"

#ifndef USE_OTAA
#error "Only OTAA is supported for Helium!"
#endif

/* 
This is where you define the three key values that map your Device to the Helium Console.
All three values must match between the code and the Console.

There are two general ways to go about this:
1) Let the Console pick random values for one or all of them, and copy them here in the code.
-or-
2) Define them here in the code, and then copy them to the Console to match these values.

When the Mapper boots, it will show all three values in the Monitor console, like this:

DevEUI (msb): AABBCCDDEEFEFF
APPEUI (msb): 6081F9BF908E2EA0
APPKEY (msb): CF4B3E8F8FCB779C8E1CAEE311712AE5

This format is suitable for copying from Terminal/Monitor and pasting directly into the console as-is.

If you want to take the random Console values for a new device, and use them here, be sure to select:
   Device EUI: lsb
   App EUI:    lsb
   App Key:    msb
in the Console, then click the arrows to expand the values with comma separators, then paste them below.
*/

// Note: If all values are zero, the DevEUI will be generated automatically based on the device macaddr [Recommended!]
uint8_t DEVEUI[8] = {
    /* lsb */ 0, 0, 0, 0, 0, 0, 0, 0
    }; 

// This value is commonly shared between many devices of the same type or server.
const uint8_t PROGMEM APPEUI[8] = {
    /* lsb */0x5E, 0xAF,0x50,0x94, 0xE5, 0xF9, 0x81, 0x60
    };  

// The key shown here is the Semtech default key.  You should probably change it to a lesser-known (random) value
const uint8_t PROGMEM APPKEY[16] = {
    0x71, 0x4D ,0xD9 ,0x64 ,0xE9 ,0xA8 ,0xB1 ,0x48 ,0xAA ,0x6B,0x0E ,0x3D ,0x7B ,0x73 ,0xE4, 0xAA

    }; 
