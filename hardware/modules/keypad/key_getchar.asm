.proc key_getchar
    LDX #0
.next:
    LDA key_edge,X
    BEQ .skip
    ; Flanke entdeckt → löschen & umwandeln
    LDA #0
    STA key_edge,X
    LDA #X
    JSR translate_keycode_ascii
    RTS
.skip:
    INX
    CPX #48
    BNE .next
    LDA #$00          ; keine Taste gedrückt
    RTS
.endproc