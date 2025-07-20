# 🚦 Signal Deck – LED ROAD Diagnostic Module

The Signal Deck is a modular LED matrix designed for real-time system diagnostics, status indication, and register visualization. It features 32 common cathode LEDs grouped into 4 bytes, each with independent input headers and optional SPI control via 74HC595 shift registers.

---

## ⚙️ Features

- 🧩 4× 8-bit LED zones (Byte 0–3)
- 🔌 Modular input headers (J8–J11) for direct signal mapping
- 🔄 Optional SPI control via 74HC595 (daisy-chained or standalone)
- 🎚️ DIP-switch configurable modes (e.g. debug, status, animation)
- 🌈 Color-coded LED groups (red, yellow, green, orange)
- 🧠 Ideal for register display, flag indicators, bus monitoring

---

## 📐 Layout Overview

| Byte | LED Range | Connector | Resistor Network | Suggested Use        |
|------|-----------|-----------|------------------|----------------------|
| Byte 0 | LED 0–7   | J8        | RN1              | CPU Flags / Status   |
| Byte 1 | LED 8–15  | J9        | RN2              | Register A/X/Y/SP    |
| Byte 2 | LED 16–23 | J10       | RN3              | Bankbits / Memory Map|
| Byte 3 | LED 24–31 | J11       | RN4              | IRQ/NMI/Control Flow |

---

## 🔧 Operating Modes

| Mode       | Description                            |
|------------|----------------------------------------|
| SPI        | Controlled via 74HC595 shift registers |
| Direct     | Inputs driven by CPU/VIA/bus signals   |
| Debug      | Shows register contents or flags       |
| Status     | Indicates system state or IO activity  |
| Animation  | Visual effects for boot or heartbeat   |

---