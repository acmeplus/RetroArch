/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 *  Copyright (C) 2012 - Michael Lelli
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GX_INPUT_H
#define _GX_INPUT_H

enum
{
   GX_GC_A                 = 1ULL << 0,
   GX_GC_B                 = 1ULL << 1,
   GX_GC_X                 = 1ULL << 2,
   GX_GC_Y                 = 1ULL << 3,
   GX_GC_START             = 1ULL << 4,
   GX_GC_Z_TRIGGER         = 1ULL << 5,
   GX_GC_L_TRIGGER         = 1ULL << 6,
   GX_GC_R_TRIGGER         = 1ULL << 7,
   GX_GC_UP                = 1ULL << 8,
   GX_GC_DOWN              = 1ULL << 9,
   GX_GC_LEFT              = 1ULL << 10,
   GX_GC_RIGHT             = 1ULL << 11,
   GX_GC_LSTICK_UP         = 1ULL << 12,
   GX_GC_LSTICK_DOWN       = 1ULL << 13,
   GX_GC_LSTICK_LEFT       = 1ULL << 14,
   GX_GC_LSTICK_RIGHT      = 1ULL << 15,
   GX_GC_RSTICK_UP         = 1ULL << 16,
   GX_GC_RSTICK_DOWN       = 1ULL << 17,
   GX_GC_RSTICK_LEFT       = 1ULL << 18,
   GX_GC_RSTICK_RIGHT      = 1ULL << 19,
#ifdef HW_RVL
   GX_CLASSIC_A            = 1ULL << 20,
   GX_CLASSIC_B            = 1ULL << 21,
   GX_CLASSIC_X            = 1ULL << 22,
   GX_CLASSIC_Y            = 1ULL << 23,
   GX_CLASSIC_PLUS         = 1ULL << 24,
   GX_CLASSIC_MINUS        = 1ULL << 25,
   GX_CLASSIC_HOME         = 1ULL << 26,
   GX_CLASSIC_L_TRIGGER    = 1ULL << 27,
   GX_CLASSIC_R_TRIGGER    = 1ULL << 28,
   GX_CLASSIC_ZL_TRIGGER   = 1ULL << 29,
   GX_CLASSIC_ZR_TRIGGER   = 1ULL << 30,
   GX_CLASSIC_UP           = 1ULL << 31,
   GX_CLASSIC_DOWN         = 1ULL << 32,
   GX_CLASSIC_LEFT         = 1ULL << 33,
   GX_CLASSIC_RIGHT        = 1ULL << 34,
   GX_CLASSIC_LSTICK_UP    = 1ULL << 35,
   GX_CLASSIC_LSTICK_DOWN  = 1ULL << 36,
   GX_CLASSIC_LSTICK_LEFT  = 1ULL << 37,
   GX_CLASSIC_LSTICK_RIGHT = 1ULL << 38,
   GX_CLASSIC_RSTICK_UP    = 1ULL << 39,
   GX_CLASSIC_RSTICK_DOWN  = 1ULL << 40,
   GX_CLASSIC_RSTICK_LEFT  = 1ULL << 41,
   GX_CLASSIC_RSTICK_RIGHT = 1ULL << 42,
   GX_WIIMOTE_A            = 1ULL << 43,
   GX_WIIMOTE_B            = 1ULL << 44,
   GX_WIIMOTE_1            = 1ULL << 45,
   GX_WIIMOTE_2            = 1ULL << 46,
   GX_WIIMOTE_PLUS         = 1ULL << 47,
   GX_WIIMOTE_MINUS        = 1ULL << 48,
   GX_WIIMOTE_HOME         = 1ULL << 49,
   GX_WIIMOTE_UP           = 1ULL << 50,
   GX_WIIMOTE_DOWN         = 1ULL << 51,
   GX_WIIMOTE_LEFT         = 1ULL << 52,
   GX_WIIMOTE_RIGHT        = 1ULL << 53,
   GX_NUNCHUK_Z            = 1ULL << 54,
   GX_NUNCHUK_C            = 1ULL << 55,
   GX_NUNCHUK_UP           = 1ULL << 56,
   GX_NUNCHUK_DOWN         = 1ULL << 57,
   GX_NUNCHUK_LEFT         = 1ULL << 58,
   GX_NUNCHUK_RIGHT        = 1ULL << 59,
#endif
};

enum wii_device_id
{
   GX_DEVICE_GC_ID_JOYPAD_A = 0,
   GX_DEVICE_GC_ID_JOYPAD_B,
   GX_DEVICE_GC_ID_JOYPAD_X,
   GX_DEVICE_GC_ID_JOYPAD_Y,
   GX_DEVICE_GC_ID_JOYPAD_UP,
   GX_DEVICE_GC_ID_JOYPAD_DOWN,
   GX_DEVICE_GC_ID_JOYPAD_LEFT,
   GX_DEVICE_GC_ID_JOYPAD_RIGHT,
   GX_DEVICE_GC_ID_JOYPAD_Z_TRIGGER,
   GX_DEVICE_GC_ID_JOYPAD_START,
   GX_DEVICE_GC_ID_JOYPAD_L_TRIGGER,
   GX_DEVICE_GC_ID_JOYPAD_R_TRIGGER,
   GX_DEVICE_GC_ID_LSTICK_LEFT,
   GX_DEVICE_GC_ID_LSTICK_RIGHT,
   GX_DEVICE_GC_ID_LSTICK_UP,
   GX_DEVICE_GC_ID_LSTICK_DOWN,
   GX_DEVICE_GC_ID_LSTICK_LEFT_DPAD,
   GX_DEVICE_GC_ID_LSTICK_RIGHT_DPAD,
   GX_DEVICE_GC_ID_LSTICK_UP_DPAD,
   GX_DEVICE_GC_ID_LSTICK_DOWN_DPAD,
   GX_DEVICE_GC_ID_RSTICK_LEFT,
   GX_DEVICE_GC_ID_RSTICK_RIGHT,
   GX_DEVICE_GC_ID_RSTICK_UP,
   GX_DEVICE_GC_ID_RSTICK_DOWN,
   GX_DEVICE_GC_ID_RSTICK_LEFT_DPAD,
   GX_DEVICE_GC_ID_RSTICK_RIGHT_DPAD,
   GX_DEVICE_GC_ID_RSTICK_UP_DPAD,
   GX_DEVICE_GC_ID_RSTICK_DOWN_DPAD,

#ifdef HW_RVL
   // CLASSIC CONTROLLER
   GX_DEVICE_CLASSIC_ID_JOYPAD_A,
   GX_DEVICE_CLASSIC_ID_JOYPAD_B,
   GX_DEVICE_CLASSIC_ID_JOYPAD_X,
   GX_DEVICE_CLASSIC_ID_JOYPAD_Y,
   GX_DEVICE_CLASSIC_ID_JOYPAD_UP,
   GX_DEVICE_CLASSIC_ID_JOYPAD_DOWN,
   GX_DEVICE_CLASSIC_ID_JOYPAD_LEFT,
   GX_DEVICE_CLASSIC_ID_JOYPAD_RIGHT,
   GX_DEVICE_CLASSIC_ID_JOYPAD_PLUS,
   GX_DEVICE_CLASSIC_ID_JOYPAD_MINUS,
   GX_DEVICE_CLASSIC_ID_JOYPAD_HOME,
   GX_DEVICE_CLASSIC_ID_JOYPAD_L_TRIGGER,
   GX_DEVICE_CLASSIC_ID_JOYPAD_R_TRIGGER,
   GX_DEVICE_CLASSIC_ID_JOYPAD_ZL_TRIGGER,
   GX_DEVICE_CLASSIC_ID_JOYPAD_ZR_TRIGGER,
   GX_DEVICE_CLASSIC_ID_LSTICK_LEFT,
   GX_DEVICE_CLASSIC_ID_LSTICK_RIGHT,
   GX_DEVICE_CLASSIC_ID_LSTICK_UP,
   GX_DEVICE_CLASSIC_ID_LSTICK_DOWN,
   GX_DEVICE_CLASSIC_ID_LSTICK_LEFT_DPAD,
   GX_DEVICE_CLASSIC_ID_LSTICK_RIGHT_DPAD,
   GX_DEVICE_CLASSIC_ID_LSTICK_UP_DPAD,
   GX_DEVICE_CLASSIC_ID_LSTICK_DOWN_DPAD,
   GX_DEVICE_CLASSIC_ID_RSTICK_LEFT,
   GX_DEVICE_CLASSIC_ID_RSTICK_RIGHT,
   GX_DEVICE_CLASSIC_ID_RSTICK_UP,
   GX_DEVICE_CLASSIC_ID_RSTICK_DOWN,
   GX_DEVICE_CLASSIC_ID_RSTICK_LEFT_DPAD,
   GX_DEVICE_CLASSIC_ID_RSTICK_RIGHT_DPAD,
   GX_DEVICE_CLASSIC_ID_RSTICK_UP_DPAD,
   GX_DEVICE_CLASSIC_ID_RSTICK_DOWN_DPAD,

   // WIIMOTE (PLUS OPTIONAL NUNCHUK)
   GX_DEVICE_WIIMOTE_ID_JOYPAD_A,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_B,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_1,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_2,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_UP,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_DOWN,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_LEFT,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_RIGHT,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_PLUS,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_MINUS,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_HOME,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_Z,
   GX_DEVICE_WIIMOTE_ID_JOYPAD_C,
   GX_DEVICE_WIIMOTE_ID_LSTICK_LEFT,
   GX_DEVICE_WIIMOTE_ID_LSTICK_RIGHT,
   GX_DEVICE_WIIMOTE_ID_LSTICK_UP,
   GX_DEVICE_WIIMOTE_ID_LSTICK_DOWN,
   GX_DEVICE_WIIMOTE_ID_LSTICK_LEFT_DPAD,
   GX_DEVICE_WIIMOTE_ID_LSTICK_RIGHT_DPAD,
   GX_DEVICE_WIIMOTE_ID_LSTICK_UP_DPAD,
   GX_DEVICE_WIIMOTE_ID_LSTICK_DOWN_DPAD,
#endif

   RARCH_LAST_PLATFORM_KEY
};

enum
{
   GX_DEVICE_GAMECUBE = 0,
#ifdef HW_RVL
   GX_DEVICE_WIIMOTE,
   GX_DEVICE_NUNCHUK,
   GX_DEVICE_CLASSIC,
#endif

   RARCH_DEVICE_LAST
};

#endif
