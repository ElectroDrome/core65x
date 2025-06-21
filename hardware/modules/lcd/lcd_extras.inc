; ============================================
; lcd_extras.inc – Erweiterte Anzeige- & Effekt-Makros
; Für SYSX LCD 40x4-System
; ============================================

; Benötigt:
; - lcd_goto_40x4
; - lcd_data
; - lcd_string_40
; - ptr_lo, ptr_hi, val, row, col, temp, frame

; ------------------------------
; Horizontale Balkenanzeige (0–40)
; ------------------------------
lcd_bargraph_h:
  ldx #0
  lda row
  jsr lcd_goto_40x4
.loop:
  cpx val
  bcs .space
  lda #'■'
  bra .draw
.space:
  lda #' '
.draw:
  jsr lcd_data
  inx
  cpx #40
  bne .loop
  rts

; ------------------------------
; Vertikaler Balken (VU-Meter-Stil)
; ------------------------------
lcd_bargraph_v:
  ldx #0
.loop:
  cpx #4
  beq .done
  lda col
  pha
  txa
  eor #$03       ; von unten nach oben
  tax
  lda col
  jsr lcd_goto_40x4
  pla
  cpx val
  bcs .space
  lda #'■'
  bra .out
.space:
  lda #' '
.out:
  jsr lcd_data
  inx
  bra .loop
.done:
  rts

; ------------------------------
; BCD-Zeit anzeigen: HH:MM:SS
; (mit h, m, s in BCD)
; ------------------------------
lcd_clock_hms:
  lda row
  ldx col
  jsr lcd_goto_40x4
  lda h
  jsr print_bcd
  lda #':'
  jsr lcd_data
  lda m
  jsr print_bcd
  lda #':'
  jsr lcd_data
  lda s
  jsr print_bcd
  rts

; Hilfsfunktion für BCD-Wert
print_bcd:
  pha
  and #%11110000
  lsr
  lsr
  lsr
  lsr
  ora #'0'
  jsr lcd_data
  pla
  and #%00001111
  ora #'0'
  jsr lcd_data
  rts

; ------------------------------
; Binärwert anzeigen: 8 Bit
; ------------------------------
lcd_binbyte:
  ldx #8
.loop:
  asl a
  bcs .one
  lda #'0'
  bra .print
.one:
  lda #'1'
.print:
  jsr lcd_data
  dex
  bne .loop
  rts

; ------------------------------
; Spinner (Drehanimation)
; ------------------------------
lcd_spinner:
  lda frame
  and #%00000011
  tay
  lda row
  ldx col
  jsr lcd_goto_40x4
  lda spinner_chars,y
  jsr lcd_data
  rts

spinner_chars:
  .byte '|', '/', '-', '\\'

; ------------------------------
; Blinkende Zeile n-mal anzeigen
; ------------------------------
lcd_flash_line:
  ldx val       ; Anzahl Blinks
.loop:
  lda row
  ldx #0
  jsr lcd_goto_40x4
  jsr lcd_string_40
  jsr delay_scroll
  jsr lcd_clear_line
  jsr delay_scroll
  dex
  bne .loop
  rts

; ------------------------------
; Debug: 16-Bit-Wert aus Speicheradresse anzeigen
; ptr_lo / ptr_hi → Adresse
; Zeile = row
; ------------------------------
lcd_debug_word:
  lda row
  ldx #0
  jsr lcd_goto_40x4

  ; Adresse anzeigen
  lda ptr_hi
  jsr print_hex
  lda ptr_lo
  jsr print_hex
  lda #'='
  jsr lcd_data

  ; 16-bit-Wert lesen
  ldy #0
  lda (ptr_lo), y
  sta temp
  iny
  lda (ptr_lo), y
  sta temp+1

  lda temp+1
  jsr print_hex
  lda temp
  jsr print_hex
  rts

; 8-Bit-Hex-Ausgabe (z. B. $3F)
print_hex:
  pha
  and #%11110000
  lsr
  lsr
  lsr
  lsr
  ora #'0'
  jsr lcd_data
  pla
  and #%00001111
  ora #'0'
  jsr lcd_data
  rts