Under development! Coming soon...

---

splash_text:
  .byte "  *** SYSX v1.0 ***  ", 0
status_text:
  .byte " Initializing system ", 0
ready_text:
  .byte "     Ready to go!     ", 0
 
 ...
 
 splashscreen:
  jsr lcd_init         ; Display initieren (siehe unten)
  lcd_goto 0, 0
  lda #<splash_text
  sta ptr
  lda #>splash_text
  sta ptr+1
  lcd_string_timed ptr ; Zeile 1

  lcd_goto 1, 0
  lda #<status_text
  sta ptr
  lda #>status_text
  sta ptr+1
  lcd_string_timed ptr

  jsr delay_long       ; z. B. 1 Sekunde Pause

  lcd_cmd $01          ; Display clear
  lcd_goto 0, 0

  lda #<ready_text
  sta ptr
  lda #>ready_text
  sta ptr+1
  lcd_string ptr

  rts
  
  ...
  
 lcd_init:
  lcd_cmd $38    ; 8-bit, 2 lines, 5x8 font
  lcd_cmd $0C    ; Display ON, cursor OFF
  lcd_cmd $06    ; Entry mode: increment
  lcd_cmd $01    ; Clear display
  jsr delay_short
  rts
  
 ...

delay_long:
  ldx #50      ; ca. 1 Sekunde bei 1 MHz
.loop1:
  jsr delay_short
  dex
  bne .loop1
  rts

delay_short:
  ldx #100
.d1:ldy #255
.d2:dey
    bne .d2
  dex
  bne .d1
  rts
  
---


 Makro: lcd_scroll – scrollt Text durch eine Zeile
Voraussetzungen:
- ptr → zeigt auf den Null-terminierten Text
- Text ist länger als 16 Zeichen
- Zeile = 0 oder 1

; Eingabe:
;   ptr     = Textadresse
;   line    = 0 oder 1
;   delay   = Anzahl Durchläufe je Frame

lcd_scroll:
  ; Textlänge berechnen (optional, hier hart z. B. 32)
  ldx #0
.loop:
  lda (ptr),y
  beq .done
  inx
  iny
  bne .loop
.done:
  stx text_len

  ldx #0        ; Startindex

.scroll_loop:
  ; Textfenster auf LCD anzeigen (16 Zeichen ab ptr+X)
  ldy #0
.nextchar:
  lda ptr_lo
  clc
  adc x
  sta temp
  lda ptr_hi
  adc #0
  sta temp+1

  lda (temp),y
  beq .blank     ; Falls zu kurz → Leerzeichen
  bne .print
.blank:
  lda #' '
.print:
  ; LCD-Ausgabe
  jsr lcd_goto   ; Zeile/Spalte setzen
  ; → z. B. lcd_goto line, y
  jsr lcd_data

  iny
  cpy #16
  bne .nextchar

  jsr delay_scroll   ; Framepause

  inx
  cpx text_len
  bne .scroll_loop

  rts
  
  ...
  
   Makro: delay_scroll – anpassbare Verzögerung
  
  
; Einfache Warteschleife – z. B. 200 ms pro Schritt
delay_scroll:
  ldx delay_value
.loop1:
  ldy #255
.loop2:
  dey
  bne .loop2
  dex
  bne .loop1
  rts

...




  