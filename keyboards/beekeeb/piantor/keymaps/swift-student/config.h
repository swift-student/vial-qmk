// QMK Configuration (converted from Vial settings)
// Based on May2025.vil configuration

/* Layer Configuration */
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

/* Tapping Configuration */
#define TAPPING_TERM 260  // From Vial setting 7
#define PERMISSIVE_HOLD  // From Vial setting 8 (tapping=2)
// Note: Permissive Hold is ON, Tapping Force Hold is OFF, Retro Tapping is OFF

/* Home Row Mods */
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 280
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 500
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 130

/* Combo Configuration */
#define COMBO_TERM 50  // From Vial setting 2

/* One Shot Key Configuration */
#define ONESHOT_TAP_TOGGLE 5  // From Vial setting 5
#define ONESHOT_TIMEOUT 5000  // From Vial setting 6

/* Tap Delays */
#define TAP_CODE_DELAY 0  // From Vial setting 18
#define TAP_HOLD_CAPS_DELAY 80  // From Vial setting 19

/* Tapping Toggle */
#define TAPPING_TOGGLE 5  // From Vial setting 20

/* Mouse Key Configuration */
#define MOUSEKEY_DELAY 10  // From Vial setting 9
#define MOUSEKEY_INTERVAL 20  // From Vial setting 10
#define MOUSEKEY_MOVE_DELTA 8  // From Vial setting 11
#define MOUSEKEY_MAX_SPEED 10  // From Vial setting 12
#define MOUSEKEY_TIME_TO_MAX 30  // From Vial setting 13
#define MOUSEKEY_WHEEL_DELAY 10  // From Vial setting 14
#define MOUSEKEY_WHEEL_INTERVAL 80  // From Vial setting 15
#define MOUSEKEY_WHEEL_MAX_SPEED 8  // From Vial setting 16
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40  // From Vial setting 17

/* Auto Shift Configuration (disabled in Vial) */
// Auto shift is disabled (setting 3 = 0)
// #define AUTO_SHIFT_TIMEOUT 175  // From Vial setting 4 (not used since auto shift is off)
