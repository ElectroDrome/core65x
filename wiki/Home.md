# 📘 core65x – Wiki Home

Welcome to the `Core65X` knowledge base! This is where you'll find all technical specs, schematics, ideas, logs, and design decisions around your 8-bit retro system.

---

## 🧩 System Highlights

`core65x` is a modular 6502-based homebrew computer with:

- 512 KiB Flash ROM (with DIP & software-based banking)
- 512 KiB RAM (with banked memory window)
- VGA, audio, and GPIO output
- A compact monitor ROM with debugging tools
- Fully documented Markdown wiki for reference and expansion
.......

---

## 🔗 Table of Contents

### 🔧 Hardware Design
- [`hardware/your_board.md`](hardware/your_board.md) – The Mainboard
- [`hardware/components/`](hardware/components/) – Clock, Power, IO chips
- [`hardware/memory/`](hardware/memory/) – RAM/ROM banking, EEPROM in Flash
- [`hardware/storage/`](hardware/storage/) – SD, Flash & other storage ideas

### 🧩 Interfaces & Peripherals
- [`hardware/interfaces/input/`](hardware/interfaces/input/) – Keyboard, GPIO, Keypads
- [`hardware/interfaces/output/`](hardware/interfaces/output/) – VGA, Audio, LED/LCD displays
- [`hardware/interfaces/debug/`](hardware/interfaces/debug/) – Serial, I²C, Expansion bus

### 📐 Logic & Schematics
- [`schematics/overview.md`](schematics/overview.md) – Logic blocks & address decoding
- [`hardware/components/dip_and_jumpers.md`](hardware/components/dip_and_jumpers.md)

### 📚 Reference
- [`reference/signals.md`](reference/signals.md)
- [`reference/opcode_matrix.md`](reference/opcode_matrix.md)
- [`reference/links.md`](reference/links.md)

---

## ✅ Final Checks
- [`final_checks.md`](../final_checks.md)

---

> 💡 Got ideas or want to extend a module? Every folder is your lab.  
> Start with `components/audio_output.md`, `memory/map_strategies.md` or `storage/file_formats.md`.

Happy hacking, experimenting and rewiring!  
🧠💾📘
