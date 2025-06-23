menu_root:
    .byte "1", <menu_sys>, "System"
    .byte "2", <menu_io>,  "I/O"
    .byte "3", <menu_dbg>, "Debug"
    .byte 0               ; Ende

menu_sys:
    .byte "A", 0, "Version"
    .byte "B", 0, "Reset"
    .byte 0

menu_io:
    .byte "A", 0, "LCD-Test"
    .byte "B", 0, "Keypad-Test"
    .byte 0

menu_dbg:
    .byte "A", 0, "Memory-Dump"
    .byte "B", 0, "IRQ-Status"
    .byte 0