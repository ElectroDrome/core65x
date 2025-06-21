.include "lcd_vars.inc"
.include "lcd_sysx40.inc"
.include "lcd_extras.inc"

; -----------------------------------------------
; Teststart
; -----------------------------------------------

start:
  jsr lcd_init

  ; Zeile 0 – Horizontale Balkenanzeige (Wert = 28)
  lda #0
  sta row
  lda #28
  sta val
  jsr lcd_bargraph_h

  ; Zeile 1 – Vertikale Balkenanzeige (Wert = 3) auf Spalte 10
  lda #1
  sta row
  lda #3
  sta val
  lda #10
  sta col
  jsr lcd_bargraph_v

  ; Zeile 2 – Binäranzeige: 10101100
  lda #2
  sta row
  lda #$AC
  jsr lcd_goto_40x4
  lda #$AC
  jsr lcd_binbyte

  ; Zeile 3 – Speicher-Debug: Wert an $00A0
  lda #3
  sta row
  lda #$A0
  sta ptr_lo
  lda #$00
  sta ptr_hi
  jsr lcd_debug_word

  rts