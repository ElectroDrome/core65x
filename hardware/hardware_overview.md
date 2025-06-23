# 🧠 65C02 Plug & Play – Hardware Overview

_Stand: 2025-06-22_  
_Version: LCD & Keypad BIOS-Core mit reduziertem GPIO-Bedarf_

---

## 💾 CPU & Speicher

| Komponente     | Typ            | Verbindung                                       |
|----------------|----------------|--------------------------------------------------|
| CPU            | W65C02S        | A0–A15, D0–D7, /RES, /IRQ  
| RAM            | AS6C4008 (512 KB) | A0–A14 direkt, A15–A19 via 74HCT273  
| Flash-ROM      | SST39SF040 (512 KB) | A0–A13 direkt, A14–A20 via 74HCT273  
| Bankregister   | 74HCT273       | Bankumschaltung via $7FFE  
| Pico Shared-RAM| RAM-Bank 15    | Bereich $7000–$7FFF für Pico ↔ CPU  

---

## 🖥️ Anzeige & Bedienung

### LCD (40×4 HD44780)

| Pin         | Steuerung              |
|-------------|------------------------|
| D4–D7       | VIA1-PA0–PA3  
| RS          | VIA1-PB0  
| EN1/EN2     | via 74HCT138 oder 595  

### Keypad (12×4 Matrix)

| Funktion    | Ansteuerung                        |
|-------------|------------------------------------|
| Spalten 0–11| 2× 74HC595 (Q0–Q11), seriell via VIA2-PB0–PB2  
| Zeilen 0–3  | SN74LS148 (I0–I3), Ausgabe A0–A2 → VIA2-PA0–PA2  

→ benötigt nur **6 GPIOs** für vollständige Matrixsteuerung

---

## 📡 I/O & Module

| Adresse    | Baustein         | Zweck                         |
|------------|------------------|-------------------------------|
| $6000–$600F| VIA1             | LCD, Piezo, LEDs  
| $6010–$601F| VIA2             | Keypad, SPI-CS, Soft-I/O  
| $6020+     | Logik oder Decoder | Enable-Leitungen (LCD/SPI)  
| $6040      | 74HCT165         | Gameport  
| $6050+     | Pico-virtuelle Register | I²C, SPI, 1-Wire, Sensoren  

---

## 🔌 Kommunikation

| Kanal           | Typ         | Bemerkung                      |
|-----------------|-------------|--------------------------------|
| ACIA (W65C51)   | RS-232      | über MAX232  
| Pico via USB    | Terminal    | Dateiübertragung, Steuerung  
| Terminalwahl    | BIOS        | `terminal mode pico/max232`  

---

## 🔧 Module & Erweiterungen

| Modul        | Status             | Erkennung              |
|--------------|--------------------|-------------------------|
| Gamepad      | aktivierbar        | DIP + 74HCT165  
| MCP23017     | optional, I²C      | EEPROM-gesteuert  
| SPI-Modul    | manuell / über CS  | 595-Auswahlleitung  
| Sensoren     | I²C / 1-Wire       | DS18B20, BME280 etc.  

---

## 📘 BIOS-Kernfunktionen (Keypad & LCD)

- `keypad_scan`: über 2× 74HC595 (COL) + SN74LS148 (ROW)  
- `keypad_getchar`: liest Taste & ASCII-Tabelle  
- `lcd_status`, `lcd_set_lineX`: Menüanzeige & Status  
- Menüsteuerung ohne Terminal möglich  
- EEPROM-Menü, Texteditor, Modulübersicht, Tastentest

---

## 📎 GPIO-Zusammenfassung (minimal)

| Funktion      | Pins         |
|---------------|--------------|
| 74HC595        | 3            |
| SN74LS148      | 3            |
| Gesamt         | **6 GPIOs**  |

---

## 📁 Dateivorschlag

```text
/Projekte/65C02-BIOS/
├── hardware_overview.md
├── bios_menu.asm
├── keypad_scan_sn148_595.asm
├── keymap_12x4.inc
├── lcd_driver.asm
└── docs/
    └── system_block_diagram.svg
	

