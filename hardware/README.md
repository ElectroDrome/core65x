# Core65X – Hardware Module Overview

> Overview of all hardware modules in the Core65X system.  
> Modules are grouped by function. Linked schematics refer to `.png` previews.

---

### 🔖 Module Status Legend

| Symbol | Status        | Meaning                              |
|--------|---------------|--------------------------------------|
| 🟢     | Active         | Schematic PNG available and linked   |
| 🟡     | In Progress    | Module exists, schematic pending     |
| 🔴     | Planned        | Module not yet implemented           |

---

## 🧠 Mainboard Modules

| Status | Module Name            | Schematic                                                     | Features                                           |
|--------|------------------------|----------------------------------------------------------------|----------------------------------------------------|
| 🟢     | Power Supply            | [power_supply.png](mainboard/modules/power_supply.png)         | 5 V fixed (7805), 3.3 V LM317, status LED          |
| 🟡     | Clock Generator         | clockgen.png                                                  | Crystal, divider chain, 1–8 MHz output             |
| 🔴     | Core Logic              | —                                                              | Core65X CPU, glue logic, reset, decoding           |
| 🔴     | Bus Matrix / Ports      | —                                                              | 573/245 logic, CTRL multiplexing                   |
| 🔴     | Memory Module           | —                                                              | ROM, RAM, optional banking                         |
| 🔴     | Debug Header            | —                                                              | Testpoints, jumper config, /RD tap                 |

---

## 🔌 Add-on Boards – Interfaces

| Status | Module Name             | Schematic                      | Features                                      |
|--------|-------------------------|--------------------------------|-----------------------------------------------|
| 🔴     | Userport Quad           | —                              | 4× 8-bit I/O, I²C-controlled                   |
| 🔴     | Bus Tap Debug Probe     | —                              | Passive bus snoop (A/D/CTRL)                  |
| 🔴     | I²C Expander            | —                              | PCF8574 or MCP23017 GPIO breakout             |
| 🔴     | SPI Flash Adapter       | —                              | 8 MB NOR Flash, memory-mapped via /CS         |
| 🔴     | UART Bridge             | —                              | MAX232 + DB9 for serial debug I/O             |

---

## 🧪 Add-on Boards – Sensors

| Status | Module Name             | Schematic                      | Features                                      |
|--------|-------------------------|--------------------------------|-----------------------------------------------|
| 🔴     | Temperature Sensor       | —                              | LM75, I²C, interrupt-capable                   |
| 🔴     | Analog Mux Input         | —                              | 8 analog channels via 4051                    |
| 🔴     | Light Sensor Board       | —                              | Phototransistors with adjustable threshold    |
| 🔴     | Analog-Trigger Logic     | —                              | Window comparator, hysteresis option          |

---

## ⚙️ Add-on Boards – Actuators / Displays

| Status | Module Name             | Schematic                      | Features                                      |
|--------|-------------------------|--------------------------------|-----------------------------------------------|
| 🔴     | LED Nibblebar           | —                              | 8 LEDs in 2×4 grid (Silkscreen grouped)       |
| 🔴     | Relay Driver Board      | —                              | 2-channel NPN w/ flyback & opto-isolation     |
| 🔴     | 7-Segment Display       | —                              | 2-digit, decoded via 4511                     |
| 🔴     | RGB Matrix Driver       | —                              | Shift-register driven 8×8 matrix              |
| 🔴     | DAC Output Module       | —                              | R2R DAC, optional PWM-to-analog filter        |

---

## 🔋 Add-on Boards – Power

| Status | Module Name             | Schematic                               | Features                                      |
|--------|-------------------------|------------------------------------------|-----------------------------------------------|
| 🟢     | Dual Linear Supply       | [power_duallinear.png](power/power_duallinear.png) | 5 V + 3.3 V, screw terminals, LED            |
| 🔴     | Power Distribution Node  | —                                       | Fused outputs, header rail                    |
| 🔴     | USB-C Power Module       | —                                       | PD trigger or buck controller                 |
| 🔴     | Soft-Start Controller    | —                                       | Delayed enable, switch debounce               |

---

## 📘 Notes

- Only 🟢 Active modules are linked via `.png` schematic preview.
- Status is updated manually; `.sch` source files may follow later.
- Feature descriptions can evolve into per-module `README.md` files.
