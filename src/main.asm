.include "hardware.inc"
.include "vector_table.inc"
.include "stubs.inc"

.segment "RESET"
reset_handler:
    JSR cpu_init
    JSR via_init
    JMP main_loop

main_loop:
    JMP main_loop  ; Endlosschleife für Tests