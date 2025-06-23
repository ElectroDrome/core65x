; Erwartet: Tastencode in A (0–47)
; Gibt zurück: ASCII-Zeichen in A

.proc translate_keycode_ascii
    TAX                         ; Tastencode als Index
    LDA key_ascii_table,X       ; Lade ASCII-Wert
    RTS
.endproc