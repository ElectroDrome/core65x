.proc show_menu
    ; A enthält Adresse eines Menüs
    STA menu_ptr

@redraw:
    JSR lcd_clear
    LDX #0
@loop:
    LDY #0
@copy:
    LDA (menu_ptr),Y
    BEQ @done
    JSR lcd_gotoxy        ; z. B. Zeile = X, Spalte = 0
    JSR lcd_puts          ; Zeile ausgeben: Taste + Text
    INX
    ; nächsten Eintrag
    INC menu_ptr
    JMP @loop
@done:
    JSR key_wait
    ; A enthält gedrückte Taste
    ; Springe in Untermenü / Funktion
    RTS
.endproc