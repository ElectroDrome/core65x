.include "lcd_vars.inc"
.include "lcd_sysx40.inc"
.include "lcd_extras.inc"

; -----------------------------------------------
; Laufende Zähler für Demo-Zwecke
; -----------------------------------------------
frame:   .byte 0
val:     .byte 0
h:       .byte $12     ; z. B. 12:34:56 (BCD)
m:       .byte $34
s:       .byte $56

; Beispieltext für Blinkdemo
blink_txt:
  .byte ">>> Achtung: Batterie schwach <<<", 0

; -----------------------------------------------
; Teststart
; -----------------------------------------------
start:
  jsr lcd_init

.loop:
  ; Zeile 0 – Spinner (animierte Ladeanzeige)
  lda #0
  sta row
  lda #0
  sta col
  jsr lcd_spinner

  ; Zeile 1 – Uhrzeit (BCD) anzeigen
  lda #1
  sta row
  lda #2
  sta col
  jsr lcd_clock_hms

  ; Zeile 2 – Blinkende Warnung
  lda #2
  sta row
  lda #<blink_txt
  sta ptr_lo
  lda #>blink_txt
  sta ptr_hi
  lda #2
  sta val     ; blinkt 2×
  jsr lcd_flash_line

  ; Zeile 3 – Bargraph-Wert inkrementieren (Loop)
  lda #3
  sta row
  inc val
  lda val
  cmp #41
  bne .skip
  lda #0
  sta val
.skip:
  jsr lcd_bargraph_h

  ; Framezähler für Spinner hochzählen
  inc frame

  jsr delay_scroll
  jmp .loop