// Copyright 22 ScatteredDrifter / fabiansta

#pragma once

#include "config_common.h"

/* --- USB Device properties --- */
#define VENDOR_ID 0xEE00
#define PRODUCT_ID 0xEE05
#define DEVICE_VER 0x0001
#define MANUFACTURER ScatteredDrifter
#define PRODUCT BullISO

/* --- Matrix definition --- */
#define MATRIX_ROWS 4 
#define MATRIX_COLS 12

/* --- Matrix assignment --- */ 
#define MATRIX_COL_PINS \
    { GP15, GP14, GP13, GP12, GP11, GP3, GP0, GP20, GP21, GP22, GP23, GP24 }
#define MATRIX_ROW_PINS \
    { GP17, GP16, GP1, GP2 }


/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT
// reducing chattering, set to 0 if not necessary 
#define DEBOUNCE 5 
#define DIODE_DIRECTION COL2ROW


//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN GP25
