; ================================
; SYSX LCD – Header für 40x4 Makros
; ================================

; --- Konfigurierbare Konstanten ---
SCROLL_DELAY   = 15      ; Frame-Pause bei Laufschrift
SCROLL_TEXTLEN = 64      ; max. Textlänge bei Bounce
LCD_WIDTH      = 40
LCD_HEIGHT     = 4

; --- Adresskonstanten für Zeilen ---
LCD_ROW0 = $00
LCD_ROW1 = $40
LCD_ROW2 = $14
LCD_ROW3 = $54

; --- Zero Page Variablen (Vorschlag) ---
ptr_lo          = $00    ; Zeiger Low-Byte
ptr_hi          = $01    ; Zeiger High-Byte
temp            = $02    ; temporär für Adressrechnung
scroll_ptr_lo   = $03
scroll_ptr_hi   = $04
scroll_row      = $05
scroll_offset   = $06
scroll_dir      = $07
val             = $08    ; z. B. für Fortschrittsbalken

; --- Symbolzeichen ---
SYM_ARROW       = '>'     ; z. B. Menü-Pfeil
SYM_BLOCK       = $FF     ; Vollblock-Balken
SYM_EMPTY       = ' '     ; Leerzeichen