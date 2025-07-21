# A-Bus & D-Bus LED Visualization Modules

---

## 📘 Overview

These two modules provide a hardware-based visual monitor for the core address and data buses (`A0–A15` and `D0–D7`) of the Core65X mainboard. Each module uses HCT buffer ICs to drive LEDs that indicate active signals on the bus lines.

Both modules follow a unified layout and wiring style to ensure system-wide consistency, readability, and user-controlled LED behavior via DIP switches and gated ground logic (`SWGM`, `SWGA`).

---

## ✨ Features

- 🔰 **Buffered LED output** for A-Bus (`A0–A15`) and D-Bus (`D0–D7`) using `74HCT244`
- 🔌 **Unidirectional signal driving**, eliminating the need for bidirectional bus logic
- 💡 **Low-power LED display** via standardized `1 kΩ` series resistors
- 🎚️ **LED ground control via DIP switches** → SWGM (mainboard) or SWGA (addonboard)
- 🎨 **Color-coded bus visualization**:  
  - A-Bus → Orange 🔶  
  - D-Bus → Green 🔷  
- 🧩 Modular design compatible with other Maschinenzeit debug modules

---

## 📐 Schematic Summary

### 🔶 Address Bus Visualization

- ICs: `2× 74HCT244`  
- Inputs: `A0–A15` → Buffer A-side  
- Outputs: Y0–Y15 → LED array  
- Resistors: `1 kΩ` per LED  
- Ground: Routed via `SWGM` and DIP switch

### 🔷 Data Bus Visualization

- IC: `1× 74HCT244`  
- Inputs: `D0–D7` → Buffer A-side  
- Outputs: Y0–Y7 → LED array  
- Resistors: `1 kΩ` per LED  
- Ground: Routed via `SWGM` and DIP switch

---

## 🧰 Bill of Materials (BOM)

| Qty | Component Type   | Value          | Description                            |
|-----|------------------|----------------|----------------------------------------|
| 3   | 74HCT244         | —              | Octal buffer, 2 for A-Bus, 1 for D-Bus |
| 24  | LED (THT/SMD)    | Orange / Green | Bus line visualization                 |
| 3   | Resistor Network | 1 kΩ           | Series resistor per LED (standardized) |
| —   | Routing to SWGM  | —              | GND control via gate on mainboard      |

---

## 🎛️ Color-Coding Convention

| Bus             | LED Color          | Meaning                        |
|-----------------|--------------------|--------------------------------|
| A-Bus           | Orange 🟠          | Address structure, memory path |
| D-Bus           | Green  🟢          | Data flow, active signal value |
| Control Signals | Red 🔴 / Yellow 🟡 | Read/Write, Clock, OE, IRQ     |

> Consistent color logic enhances user readability and module identification.

---

## 🧠 Learning Objectives

- Understand bus logic separation and visual monitoring  
- Practice low-level logic buffer usage and LED current control  
- Explore modular ground gating via SWGM/SWGA with DIP-switch logic  
- Reflect system signal states via standardized visual grammar  

---
