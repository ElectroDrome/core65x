; ================================
; SYSX LCD Makros für 40×4 Display
; ================================

; Zeilen-Startadressen (HD44780)
row_base_40x4:
  .byte $00, $40, $14, $54

; ------------------------
; LCD-Grundfunktionen
; ------------------------

lcd_cmd:
  ; erwartet Befehl in A
  ; RS=0, RW=0
  ; via LCD-Decoder senden
  rts

lcd_data:
  ; erwartet Datenbyte in A
  ; RS=1, RW=0
  ; via LCD-Decoder senden
  rts

lcd_init:
  lcd_cmd $38    ; 8-bit, 2/4 lines
  lcd_cmd $0C    ; display on, cursor off
  lcd_cmd $06    ; increment cursor
  lcd_cmd $01    ; clear display
  rts

lcd_clear:
  lcd_cmd $01
  rts

; ------------------------
; Cursorpositionierung 40x4
; ------------------------

lcd_goto_40x4:
  tay
  txa
  clc
  adc row_base_40x4,y
  ora #%10000000
  jsr lcd_cmd
  rts

; ------------------------
; Zeichenketten
; ------------------------

lcd_string_40:
  lda row
  ldx col
  jsr lcd_goto_40x4
  ldy #0
.loop:
  lda (ptr), y
  beq .done
  jsr lcd_data
  iny
  cpy #40
  bne .loop
.done:
  rts

lcd_center_40:
  ldy #0
.lenloop:
  lda (ptr), y
  beq .lenready
  iny
  cpy #40
  bne .lenloop
.lenready:
  tya
  lsr
  eor #$FF
  sec
  adc #20
  tax
  lda row
  jsr lcd_goto_40x4
  ldy #0
.drawloop:
  lda (ptr), y
  beq .done
  jsr lcd_data
  iny
  cpy #40
  bne .drawloop
.done:
  rts

; ------------------------
; Laufschrift Bounce
; ------------------------

lcd_scroll_bounce_40:
  lda #0
  sta scroll_offset
  lda #1
  sta scroll_dir
.scroll_loop:
  ldx scroll_offset
  ldy #0
.nextchar:
  lda ptr_lo
  clc
  adc x
  sta temp
  lda ptr_hi
  adc #0
  sta temp+1
  lda (temp), y
  beq .blank
  bra .print
.blank:
  lda #' '
.print:
  tya
  tax
  lda scroll_row
  jsr lcd_goto_40x4
  lda (temp), y
  jsr lcd_data
  iny
  inx
  cpy #40
  bne .nextchar
  jsr delay_scroll
  lda scroll_dir
  clc
  adc scroll_offset
  sta scroll_offset
  cmp #(scroll_textlen - 40)
  bne .no_flip1
  lda #-1
  sta scroll_dir
.no_flip1:
  cmp #0
  bne .scroll_loop
  lda #1
  sta scroll_dir
  bra .scroll_loop

; ------------------------
; Verzögerung
; ------------------------

delay_scroll:
  ldx #15
.loop1: ldy #255
.loop2: dey
  bne .loop2
  dex
  bne .loop1
  rts