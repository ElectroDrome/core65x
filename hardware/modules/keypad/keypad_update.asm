.proc keypad_update
    ; 1. Aktuelle Tastenmatrix in key_now (6 B) scannen
    JSR keypad_matrix_scan   ; Liefert 6 Byte → key_now

    LDX #0
.update_loop:
    ; Bitweise Debounce prüfen
    LDA key_now,X
    EOR key_prev,X           ; Änderungen maskieren
    TAX                      ; TEMP = Änderung
    LDA debounce,X           ; Hole aktuellen Zähler
    BEQ .instabil
    INC debounce,X           ; Erhöhe Stabilität
    CMP #3
    BNE .done
    ; Flanke akzeptieren
    LDA key_now,X
    AND key_prev,X
    CMP #0
    BNE .done                ; war gehalten
    ORA key_edge,X           ; Setze Flanke
    STA key_edge,X
    JMP .done
.instabil:
    ; Änderung → Zähler resetten
    LDA #0
    STA debounce,X
.done:
    ; Speichere Zustand für nächsten Lauf
    LDA key_now,X
    STA key_prev,X

    INX
    CPX #6
    BNE .update_loop
    RTS
.endproc