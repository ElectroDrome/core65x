  .include "lcd_sysx40.inc"

scroll_row = 0
scroll_textlen = 64

start:
  jsr lcd_init
  lda #<welcome_msg
  sta ptr_lo
  lda #>welcome_msg
  sta ptr_hi
  jsr lcd_scroll_bounce_40

welcome_msg:
  .byte "   *** SYSX v1.0 – Willkommen auf dem 40x4-Bootscreen! ***   ", 0