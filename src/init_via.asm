.segment "CODE"

init_via:
    LDA #%11111111
    STA VIA_DDRB
    STA VIA_DDRA
    LDA #$00
    STA VIA_ORB
    STA VIA_ORA
    RTS