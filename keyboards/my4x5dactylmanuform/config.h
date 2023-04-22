// Copyright 2023 Andrew Combs (@Andrew Combs)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// #define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define SERIAL_USART_TX_PIN GP28 // Can't be defined in info.json b/c RP2040 doesn't support soft_serial_pin, and info.json doesn't allow usart_tx_pin
// #define PAL_USE_CALLBACKS TRUE // Doesn't work? https://www.reddit.com/r/olkb/comments/12f2ywv/split_keyboard_with_stm32f401ccu6/
