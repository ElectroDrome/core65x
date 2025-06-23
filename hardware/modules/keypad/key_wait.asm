.proc key_wait
@loop:
    JSR keypad_update       ; Debounce + Flankenerkennung
    JSR key_getchar         ; Gibt ASCII oder 0
    CMP #$00
    BEQ @loop
    RTS                     ; A = gültige ASCII-Taste
.endproc