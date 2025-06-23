.segment "VECTORS_RAM"

lcd_putc_vector:   .word lcd_putc_stub
keypad_vector:     .word keypad_stub
via_irq_vector:    .word via_irq_stub