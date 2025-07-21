# 🔋 Dual Voltage Supply (5 V & 3.3 V)

This module provides regulated +5 V and +3.3 V rails for `Core65X` mainboard and peripherals. It uses two TO-220 regulators and delivers stable linear power for mixed analog/digital environments.

![power_supply](power_supply_schematics.png)

---

## ⚙️ Features

- ✅ +5 V fixed output (78S05 or similar)
- ✅ +3.3 V adjustable via LM317 (preset using R1/R2 resistors)
- ✅ Input voltage: 7–12 V DC
- ✅ Fully linear, quiet — ideal for mixed analog/digital systems
- ✅ Compact layout, modular interface
- ✅ TO-220 footprint with heatsink option
- ✅ Supports 5 V logic cores and 3.3 V peripherals simultaneously

---

## 🔧 Technical Overview

| Parameter          | Value                                       |
|--------------------|---------------------------------------------|
| Input Voltage      | 7 V to 12 V DC                              |
| Output 1           | +5 V via fixed regulator (L78S05CV-2A)      |
| Output 2           | +3.3 V via LM317T-1.5A adjustable regulator |
| Max Output Current | 5 V: up to 2 A · 3.3 V: up to 1.5 A         |
| Regulation Type    | Linear                                      |
| Cooling            | Heatsink recommended for >500 mA load       |
| Mounting           | Through-hole · TO-220 packages              |
| Output Connectors  | Screw terminals / pin headers               |
| Provides           | System-wide +5 V and +3.3 V rails           |
| Upstream Supply    | Barrel jack or external DC input            |
| Downstream Loads   | All logic, MCU, DAC, memory, displays…      |

---

## 📐 LM317 Output Voltage Formula

The LM317 regulates its output based on two resistors:

Formula: Vout = 1.25V * (1 + R2/R1)

R1 = 240 Ω\
R2 = ?

3.3V = 1.25V * (1 + R2/240)

R2/240 = 3.3V / 1.25V - 1\
R2/240 = 2.64 - 1\
R2/240 = 1.64

R2 = 1.64 * 240\
R2 ≈ 393.6 Ω

Vout = 1.25V * (1 + R2/R1)\
Vout = 1.25V * (1 + 393.6/240)\
Vout = 1.25V * (1 + 1.64)\
Vout = 1.25V * 2.64\
Vout ≈ 3.30V

R2 = 392 + 1.6 = 393.6 Ω

Resistors R1a1 (240 Ohm), R2a1 (392 Ohm), R2a2 (1.6 Ohm): E96 series, Metall, 1% Tolerance

---

## 📊 Test Results

| Setup               | 5 V Output | 3.3 V Output |
|---------------------|------------|--------------|
| Single PCB Test     | 5.079 V    | 3.314 V      |
| Core65X PCB         | pending    | pending      |

---

## 📦 Bill of Materials (BOM)

| Qty | Component Type      | Value            | Description                 |
|-----|---------------------|------------------|-----------------------------|
| 2   | LED Resistor        | 1k Ohm           | Carbon, E24, 250 mW, 5%     |
| 1   | Voltage Regulator   | L78S05CV         | Fixed +5 V, 2 A             |
| 1   | Voltage Regulator   | LM317T           | Adjustable +3.3 V, 1.5?A    |
| 1   | Capacitor (Elko)    | 220 uF / 35 V    | Axial                       |
| 1   | Capacitor (Elko)    | 47 uF / 35 V     | Axial                       |
| 1   | Capacitor (Elko)    | 10 uF / 35 V     | Axial                       |
| 1   | LED 5 V Indicator   | Green LED 3.3 V  | 3 mm                        |
| 1   | LED 3.3V Indicator  | Yellow LED 3.3 V | 3 mm                        |
| 1   | Diode               | 1N5400           | 50 V, 3 A, axial            |
| 1   | Adjust Resistor R1  | 240 Ohm          | Metal film, E96, 250 mW, 1% |
| 1   | Adjust Resistor R2a | 392 Ohm          | Metal film, E96, 250 mW, 1% |
| 1   | Adjust Resistor R2b | 1.6 Ohm          | Metal film, E96, 250 mW, 1% |
| 1   | Output Header       | +5 V             | Pin Header 2x05             |
| 1   | Output Header       | +3.3 V           | Pin Header 2x05             |
| 1   | Output Header       | GND              | Pin Header 2x05             |
| 1   | Terminal Block      | +7-12 V Input    | 2-pin screw terminal        |
| 1   | Header              | +7-12 V Input    | Pin Header 1x02             |

---
