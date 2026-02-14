/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x1E, 0x5F, 0xE2, 0x2F, 0x31, 0x0A, 0xAA, 0x47}

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 2 }
#endif

// For via/vial only
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define VIAL_TAP_DANCE_ENTRIES 16

// Center EC11 rotary encoder (Elite-C extra pins D5/F1 -> GP18/GP24 on svlinky)
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B
#ifdef FP_CONVERT_TO_SVLINKY
#define ENCODERS_PAD_A { GP18 }
#define ENCODERS_PAD_B { GP24 }
#else
#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { F1 }
#endif
#define ENCODER_RESOLUTION 2
