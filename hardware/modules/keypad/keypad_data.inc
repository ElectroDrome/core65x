; Bitfelder: 6 Byte für 48 Tasten

key_now:     .res 6     ; aktueller Zustand
key_prev:    .res 6     ; Zustand im letzten Frame
key_edge:    .res 6     ; Flanke: Taste wurde neu gedrückt
key_hold:    .res 6     ; dauerhaft gedrückt (optional)
debounce:    .res 6     ; Zähler für Stabilität (0–3)