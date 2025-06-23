.proc key_getchar
    LDX #0
@scan:
    LDA key_edge,X
    BEQ @next
    ; Taste erkannt – Flanke löschen
    LDA #0
    STA key_edge,X
    TXA                     ; Tastencode in A
    JSR translate_keycode_ascii
    RTS                     ; ASCII-Zeichen in A
@next:
    INX
    CPX #48
    BNE @scan
    LDA #0                  ; keine Taste gedrückt
    RTS
.endproc