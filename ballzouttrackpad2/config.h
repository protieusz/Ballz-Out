// Copyright 2024 ProtieusKeebs
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

/*******************************************/
/***** Trackpad code by Daraku-Neko start *****/
/*******************************************/

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 2
#    define COMBO_TERM 200
#endif

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_UP_DOWN

#define I2C1_SDA_PIN        GP10
#define I2C1_SCL_PIN        GP11

/* Haptic feedback */
#define DRV2605L_FB_ERM_LRA 0
#define DRV2605L_FB_BRAKEFACTOR 3 // For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7
#define DRV2605L_FB_LOOPGAIN 1 // For  Low:0, Medium:1, High:2, Very High:3
/* Motor settings */
#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_PEAK 5
#define DRV2605L_V_RMS 2.0
#define DRV2605L_F_LRA 205 /* resonance freq */

#define DRV2605L_DEFAULT_MODE 0
#define DRV2605L_GREETING  DRV2605L_EFFECT_750_MS_ALERT_100

#define EECONFIG_USER_DATA_SIZE 6
