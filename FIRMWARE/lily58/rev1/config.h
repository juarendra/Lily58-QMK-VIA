#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW


#define TAPPING_TERM 100
#define DEBOUNCE 5

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION

#define SPLIT_WPM_ENABLE

#define USE_SERIAL_PD2
#define SPLIT_USB_DETECT

#define SOFT_SERIAL_PIN D2
