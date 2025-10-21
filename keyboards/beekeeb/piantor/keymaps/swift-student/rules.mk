# QMK Features (Vial disabled)
# Converted from Vial configuration to native QMK

# Disable Vial/VIA
VIA_ENABLE  = no
VIAL_ENABLE = no

# Enable QMK features needed for the keymap
MOUSEKEY_ENABLE = yes       # Mouse key support (from Vial settings 9-17)
COMBO_ENABLE = no           # Combo disabled (no combos configured in Vial)
KEY_OVERRIDE_ENABLE = no    # Key override disabled (no overrides in Vial)
TAP_DANCE_ENABLE = no       # Tap dance disabled (no tap dances in Vial)
COMMAND_ENABLE = no         # Disable command to save space
DEFERRED_EXEC_ENABLE = yes  # Required for bilateral combinations (home row mods)

# Optional: Enable if needed
CONSOLE_ENABLE = no
RGBLIGHT_ENABLE = no        # RGB lighting not supported on this board
