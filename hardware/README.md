# Core65X – Hardware Module Overview

> Functional overview of all hardware modules in the Core65X system.  
> Modules are grouped by category. Active ones include schematic previews.

---

### 🔖 Module Status Legend

| Symbol | Status        | Meaning                              |
|--------|---------------|--------------------------------------|
| 🟢     | Active         | Schematic PNG available and linked   |
| 🟡     | In Progress    | Module exists, PNG pending           |
| 🔴     | Planned        | Module not yet implemented           |

---

## 🧠 Mainboard Modules

| Status | Module Name        | Schematic                                                     | Features                                     |
|--------|--------------------|---------------------------------------------------------------|----------------------------------------------|
| 🟢     | Power Supply        | [power_supply.png](mainboard/modules/power_supply.png)         | 5 V fixed (7805), 3.3 V adjustable (LM317), LED |
| 🟡     | Clock Generator     | _(in progress)_                                                | Crystal-based, optional divider              |
| 🟡     | Bus Matrix / Ports  | _(in progress)_                                                | 573/245 logic, port muxing                   |
| 🟡     | Core Logic          | _(in progress)_                                                | Core65X + glue logic                         |
| 🟡     | Memory Module       | _(in progress)_                                                   | ROM/RAM/Bank switching support               |
| 🟡     | Debug Header        | _(in progress)_                                               | Signals breakout, testpoints                 |
| 🟡     | Storage Module       | _(in progress)_                                                   | EEPROM, SD-Card, USB mass media                |

---

## 🔌 Add-on Boards – Interfaces

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🔴     | Userport Quad           | _(planned)_                                                  | 4× 8-bit I/O, I²C controlled                |
| 🔴     | Bus Tap Probe           | _(planned)_                                                  | Passive bus snooping (A/D/CTRL)            |
| 🔴     | I²C Expander            | _(planned)_                                                  | 2x MCP23017     |

| 🔴     | SPI Expander            | _(planned)_                                                  | 2x MCP23S17     |

---

## 🧪 Add-on Boards – Sensors

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🔴 | Temperature Sensor       | _(planned)_                                                   | LM75, I²C, address-configurable             |
| 🔴 | Analog Mux Input         | _(planned)_                                                  | 8-channel analog via 4051                   |
| 🔴 | Light Sensor Module       | _(planned)_                                                  | Phototransistor array                      |

---

## ⚙️ Add-on Boards – Actuators / Displays

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🔴     | LED Nibblebar           | _(planned)_              | 8 LEDs, grouped as 2×4 for hex readability |
| 🔴     | Relay Driver Module      | _(planned)_)                 | 2× NPN + flyback diode                     |
| 🔴     | 7-Segment Display        | _(planned)_                                           | 2-digit, BCD decoding planned              |

---

## 🔋 Add-on Boards – Power

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🔴     | Dual Linear Supply       | _(planned)_          | 5 V + 3.3 V, discrete LDOs + filtering      |
| 🔴     | Power Distributor Node   | _(planned)_       | Fused output rails + status LEDs           |
| 🔴     | USB-C Supply Module      | _(planned)_                                                  | PD trigger or buck controller              |

---

## 📘 Notes

- Only 🟢 active modules include schematic previews (`.png`).
- In progress (🟡) and planned (🔴) modules are placeholders with brief descriptions.
- For more detail, check per-module documentation or the `/docs/` folder.
