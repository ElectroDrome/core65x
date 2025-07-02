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
| 🟢     | Clock Generator     | [clockgen.png](mainboard/modules/clockgen.png)                 | Crystal-based, optional divider              |
| 🟢     | Bus Matrix / Ports  | [busmatrix.png](mainboard/modules/busmatrix.png)               | 573/245 logic, port muxing                   |
| 🟢     | Core Logic          | [core_logic.png](mainboard/modules/core_logic.png)             | Core65X + glue logic                         |
| 🔴     | Memory Module       | _(planned)_                                                   | ROM/RAM/Bank switching support               |
| 🟡     | Debug Header        | _(in progress)_                                               | Signals breakout, testpoints                 |

---

## 🔌 Add-on Boards – Interfaces

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🟢     | Userport Quad           | [userport_quad.png](interfaces/userport_quad.png)            | 4× 8-bit I/O, I²C controlled                |
| 🟢     | Bus Tap Probe           | [bus_tap_debug.png](interfaces/bus_tap_debug.png)            | Passive bus snooping (A/D/CTRL)            |
| 🔴     | I²C Expander            | _(planned)_                                                  | PCF8574 or MCP23017 for GPIO extension     |

---

## 🧪 Add-on Boards – Sensors

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🟢     | Temperature Sensor       | [temp_lm75.png](sensors/temp_lm75.png)                       | LM75, I²C, address-configurable             |
| 🟢     | Analog Mux Input         | [analog_mux8.png](sensors/analog_mux8.png)                   | 8-channel analog via 4051                   |
| 🔴     | Light Sensor Board       | _(planned)_                                                  | Phototransistor array                      |

---

## ⚙️ Add-on Boards – Actuators / Displays

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🟢     | LED Nibblebar           | [led_nibblebar.png](actors/led_nibblebar.png)               | 8 LEDs, grouped as 2×4 for hex readability |
| 🟢     | Relay Driver Board      | [relay_output.png](actors/relay_output.png)                 | 2× NPN + flyback diode                     |
| 🟡     | 7-Segment Display        | _(in progress)_                                             | 2-digit, BCD decoding planned              |

---

## 🔋 Add-on Boards – Power

| Status | Module Name             | Schematic                                                   | Features                                   |
|--------|-------------------------|--------------------------------------------------------------|--------------------------------------------|
| 🟢     | Dual Linear Supply       | [power_duallinear.png](power/power_duallinear.png)           | 5 V + 3.3 V, discrete LDOs + filtering      |
| 🟢     | Power Distributor Node   | [power_distribution.png](power/power_distribution.png)       | Fused output rails + status LEDs           |
| 🔴     | USB-C Supply Module      | _(planned)_                                                  | PD trigger or buck controller              |

---

## 📘 Notes

- Only 🟢 active modules include schematic previews (`.png`).
- In progress (🟡) and planned (🔴) modules are placeholders with brief descriptions.
- For more detail, check per-module documentation or the `/docs/` folder.
