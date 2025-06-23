.segment "CODE"

init_cpu:
    SEI
    CLD
    LDX #$FF
    TXS
    RTS