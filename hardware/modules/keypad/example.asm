.proc key_getchar
    LDX #0
    .loop:
        LDA key_edge,X
        BEQ .next
        ; Taste erkannt
        LDA #0
        STA key_edge,X        ; Flanke löschen
        LDA #X                ; Taste 0–47
        JSR translate_to_ascii
        RTS
    .next:
        INX
        CPX #6
        BNE .loop
    LDA #$00                  ; keine Taste
    RTS
.endproc