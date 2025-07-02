# Core65X – Hardware Module Overview

> Overview of all hardware modules in the Core65X ecosystem. Organized by system structure and function.  
> Click on schematics to view PNG previews.

---

### 🔖 Module Status Legend

| Symbol | Status        | Meaning                              |
|--------|---------------|--------------------------------------|
| 🟢     | Active         | Schematic PNG is available           |
| 🟡     | In Progress    | Module exists, schematic pending     |
| 🔴     | Planned        | Module planned, not yet implemented  |


---

## 🧠 Mainboard Modules

|    | Module Name        | Schematic                                                  | Features                                     |
|----|--------------------|------------------------------------------------------------|----------------------------------------------|
| 🟢| Power Supply       | [`power_supply.png`](mainboard/modules/power_supply.png)   | 5 V fixed (7805), 3.3 V adjustable (LM317), LED status |
| 🟡 | Clock Generator    | [`clockgen.png`](mainboard/modules/clockgen.png)           | Crystal + clock divider for system clock     |
| 🟡 | Bus Matrix / Ports | [`busmatrix.png`](mainboard/modules/busmatrix.png)         | 573/245 buffers, port multiplexing           |
| 🟡 | Core Logic         | [`core_logic.png`](mainboard/modules/core_logic.png)       | Core65X + basic control logic                |

---

## 🔌 Add-on Boards – Interfaces

|    | Module Name             | Schematic                                                      | Features                                |
|----|-------------------------|------------------------------------------------------------------|-----------------------------------------|
| 🟡 | Userport (4× GPIO)      | [`userport_quad.png`](interfaces/userport_quad.png)             | 4 ports à 8 Bit, direction control via I²C |
| 🟡 | Bus Tap / Debug Probe   | [`bus_tap_debug.png`](interfaces/bus_tap_debug.png)             | Passive tap for A/D bus + CTRL signals  |

---

## 🧪 Add-on Boards – Sensors

|   | Module Name             | Schematic                                                      | Features                                |
|----|-------------------------|------------------------------------------------------------------|-----------------------------------------|
| 🟡 | Temperature Sensor      | [`temp_lm75.png`](sensors/temp_lm75.png)                        | LM75, I²C, interrupt-capable             |
| 🟡 | Analog Matrix Input     | [`analog_mux8.png`](sensors/analog_mux8.png)                    | 8-channel analog input via 4051 mux      |

---

## ⚙️ Add-on Boards – Actuators / Displays

|   | Module Name             | Schematic                                                      | Features                                |
|----|-------------------------|------------------------------------------------------------------|-----------------------------------------|
| 🟡 | LED Nibblebar          | [`led_nibblebar.png`](actors/led_nibblebar.png)                | 8 LEDs, grouped in 2×4 (visual hex)     |
| 🟡 | Relay Driver Board      | [`relay_output.png`](actors/relay_output.png)                   | 2× NPN driver, flyback diode protection |

---

## 🔋 Add-on Boards – Power

|   | Module Name             | Schematic                                                      | Features                                |
|----|-------------------------|------------------------------------------------------------------|-----------------------------------------|
| 🟡 | Dual Linear Supply      | [`power_duallinear.png`](power/power_duallinear.png)            | 5 V + 3.3 V rails, screw terminals, LED |
| 🟡 | Power Distribution Node | [`power_distribution.png`](power/power_distribution.png)        | Fused rails, per-pin supply breakout    |

---

## 📁 Notes

- All schematics currently provided as `.png`. KiCad source files (`.sch`) may be added later.
- Features column is brief; more details can be found in module-specific `.md` files.
- Want to contribute? Add your module under the correct category and link the schematic PNG.

---

Shall we wrap this into an actual file for you now (with real GitHub-relative paths)  
or start generating matching `.md` stubs per module next?

Just say the word – and your hardware universe gets its wiki spine 😎📘🚀