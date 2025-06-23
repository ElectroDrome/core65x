.proc translate_keycode_ascii
    TAX
    LDA key_ascii_table,X
    RTS
.endproc