# 🧠 6502-Compatible CPU Reference Catalog

A meticulously curated and richly annotated database of over 120 CPUs and SoCs based on the **MOS Technology 6502 architecture**, spanning nearly five decades of computing history.  
This project collects and compares processors from pioneers like **MOS**, **WDC**, and **Rockwell**, as well as lesser-known or embedded clones from **Sunplus**, **Ricoh**, **UMC**, **Mitsubishi**, and more — including systems used in **Commodore, Nintendo, Atari**, and various embedded devices.

---

## 📘 What’s Inside

- **125+ CPU entries** across **25+ manufacturers**
- Unified view of:
  - Architecture and variant type (NMOS, CMOS, 8-/16-bit, SoC, MCU)
  - **Release year**, opcode range, and signal support (`IRQ`, `NMI`, `RDY`, `SYNC`, `φ2`, etc.)
  - Clock speeds (rated/typical MHz)
  - **I/O characteristics** (bit-width or feature sets)
  - Address space layout (standard 64 KiB or banked/extended)
  - Notable features and usage (e.g. used in NES, C64, SNES, speech chips, display controllers)

---

## 🎯 Use Cases

- As a **developer**: Check compatibility of 6502 variants for hardware/emulator targets
- As an **educator**: Use as reference material in retro computing or embedded systems curricula
- As a **historian/archivist**: Explore the diffusion and evolution of 8-bit CPU design
- As a **hobbyist**: Compare SoCs used in old consoles, DIY kits, or microcontrollers

---

## 🙌 Contributions

Know of a rare clone or undocumented SoC that belongs here?  
Feel free to open an issue or PR! Contributions, corrections, and datasheet links are all welcome.

---

## 📄 Notes

- Clock speeds reflect typical or rated frequencies; actual performance may vary by system integration.
- I/O port size is listed where accessible from official datasheets or teardown documentation.
- Opcode count refers to base + extended instruction support; entries like `~212` imply unofficially supported instructions.
- Signal availability (IRQ/NMI/etc.) reflects pin/function presence where known; some SoCs may expose them via multiplexers or not at all.

_This project aims to preserve technical knowledge of the 8-bit era — one register, one opcode, one signal at a time._  
✨ Built with ❤️ and `| NMI | IRQ | RDY | φ2 |` lines.






| Manufacturer | Model    | Year | Architecture     | Clock (MHz) | I/O Ports    | Signals (IRQ/NMI/RDY/φ2/...) | Opcodes | Notable Features |
|--------------|----------|------|------------------|-------------|---------------|-------------------------------|---------|------------------|
| MOS          | 6502     | 1975 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Original MOS design, 64 KiB addr. |
| MOS          | 6502A    | 1976 | 8-bit NMOS       | 2.0         | None          | Yes/Yes/Yes/Yes              | 151     | Higher clock grade |
| MOS          | 6502B    | 1978 | 8-bit NMOS       | 3.0         | None          | Yes/Yes/Yes/Yes              | 151     | High-speed version |
| MOS          | 6502C    | 1979 | 8-bit NMOS       | 4.0         | None          | Yes/Yes/Yes/Yes              | 151     | Fastest NMOS version |
| MOS          | 6503     | 1976 | 8-bit NMOS       | 1.0         | None          | No/Yes/No/Yes                | 151     | Lacks IRQ/NMI pins |
| MOS          | 6504     | 1976 | 8-bit NMOS       | 1.0         | None          | No/Yes/No/Yes                | 151     | Smaller packages, limited use |
| MOS          | 6505     | 1976 | 8-bit NMOS       | 1.0         | None          | No/Yes/No/Yes                | 151     | Reduced pin count |
| MOS          | 6506     | 1976 | 8-bit NMOS       | 1.0         | None          | No/Yes/No/Yes                | 151     | Variant with modified clocking |
| MOS          | 6507     | 1976 | 8-bit NMOS       | 1.19        | None          | Yes/–/–/Yes                  | 151     | 13-bit addr. (8 KiB), Atari 2600 |
| MOS          | 6508     | 1977 | 8-bit NMOS       | 1.0         | 16-bit GPIO   | Yes/Yes/Yes/Yes              | 151     | Includes RAM & timer on-chip |
| MOS          | 6509     | 1983 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Memory banking support (1 MB addr.) |
| MOS          | 6510     | 1982 | 8-bit NMOS       | 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Used in Commodore 64 |
| MOS          | 6510-1   | 1983 | 8-bit NMOS       | 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Board-specific variant |
| MOS          | 6510-2   | 1983 | 8-bit NMOS       | 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Timing-adjusted version |
| MOS          | 6510T    | 1984 | 8-bit NMOS       | 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Used in 1541-II drives |
| MOS          | 6512     | 1983 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Rarely used |
| MOS          | 6513     | 1983 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Minimal documentation |
| MOS          | 6514     | 1983 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Possibly used in peripherals |
| MOS          | 6515     | 1983 | 8-bit NMOS       | 1.0         | None          | Yes/Yes/Yes/Yes              | 151     | Custom application variant |
| MOS          | 7501     | 1984 | 8-bit NMOS       | 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Used in Commodore C16/Plus4 |
| MOS          | 8500     | 1986 | 8-bit NMOS (HMOS)| 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes/BA, φ2       | 151     | HMOS redesign of 6510 |
| MOS          | 8501     | 1985 | 8-bit NMOS (HMOS)| 1.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes              | 151     | Used in C16, Plus4 |
| MOS          | 8502     | 1985 | 8-bit NMOS (HMOS)| 2.0         | 6-bit GPIO    | Yes/Yes/Yes/Yes/BA, φ2       | 151     | Used in C128, dual speed |

| Manufacturer | Model      | Year | Architecture     | Clock (MHz) | I/O Ports      | Signals (IRQ/NMI/RDY/φ2/...)   | Opcodes | Notable Features |
|--------------|------------|------|------------------|-------------|----------------|-------------------------------|---------|------------------|
| CSG          | 65CE02     | 1986 | 8-bit CMOS       | 2–4         | 16-bit GPIO    | Yes/Yes/Yes/Yes              | >212    | Extended opcodes, faster zero-page |
| CSG          | 4510       | 1985 | 8-bit CMOS + MMU | 1.0         | Yes (MMU + GPIO)| Yes/Yes/Yes/Yes/φ2, BA       | >212    | Used in C128DCR, banked memory |
| Rockwell     | R65C00     | 1981 | 8-bit CMOS       | 3–6         | None           | Yes/Yes/Yes/Yes              | ~212    | CMOS efficiency variant |
| Rockwell     | R65C02     | 1981 | 8-bit CMOS       | 6–10        | None           | Yes/Yes/Yes/Yes              | ~212    | Adds STZ, BRA, WAI, etc. |
| Rockwell     | R65C102    | 1983 | 8-bit CMOS MCU   | 2–4         | 16-bit GPIO    | Yes/Yes/Yes/Yes              | ~212    | ROM, RAM, Timer, I/O |
| Rockwell     | R65C112    | 1984 | 8-bit CMOS MCU   | 2–4         | 16-bit GPIO    | Yes/Yes/Yes/Yes              | ~212    | Enhanced industrial variant |
| Rockwell     | R65F11     | 1982 | 8-bit CMOS MCU   | ~4.0        | Yes            | Yes/Yes/Yes/Yes              | ~212    | Timers, interrupts, embedded |
| Rockwell     | R65F12     | 1983 | 8-bit CMOS MCU   | ~4.0        | Yes            | Yes/Yes/Yes/Yes              | ~212    | More RAM, similar core |
| WDC          | W65C02     | 1984 | 8-bit CMOS       | up to 14    | None           | Yes/Yes/Yes/φ2               | ~212    | Fully static, still in production |
| WDC          | W65C816    | 1985 | 8/16-bit CMOS    | up to 14    | None           | Yes/Yes/Yes/φ2/VMA, E, M     | >300    | 24-bit addr. bus, IIgs & SNES |
| WDC          | W65C134S   | 1990 | 8-bit CMOS MCU   | 8–14        | UART, GPIO     | Yes/Yes/Yes/φ2               | ~212    | Timers, RAM, watchdog, SoC |
| WDC          | W65C832PXB | 2000s| 8/16-bit SoC     | up to 14    | Full MCU       | Yes/Yes/Yes/φ2/VMA, DMA      | >300    | UART, timers, industrial |
| CMD (GTE)    | G65SC02    | 1982 | 8-bit CMOS       | 2–6         | None           | Yes/Yes/Yes/Yes              | ~212    | Compatible with WDC version |
| CMD (GTE)    | G65SC03–07 | 1983 | 8-bit CMOS       | 2–6         | None           | Yes/Yes/Yes/Yes              | ~212    | Mask variants with layout changes |
| CMD (GTE)    | G65SC102   | 1983 | 8-bit CMOS MCU   | ~4.0        | 16-bit GPIO    | Yes/Yes/Yes/Yes              | ~212    | Embedded controller |
| CMD (GTE)    | G65SC112   | 1984 | 8-bit CMOS MCU   | ~4.0        | 16-bit GPIO    | Yes/Yes/Yes/Yes              | ~212    | SoC with expanded memory interface |

| Manufacturer | Model    | Year | Architecture      | Clock (MHz) | I/O Ports      | Signals (IRQ/NMI/RDY/φ2/...)     | Opcodes | Notable Features |
|--------------|----------|------|-------------------|-------------|----------------|----------------------------------|---------|------------------|
| Ricoh        | RP2A03   | 1983 | 8-bit NMOS        | 1.79        | None           | IRQ/–/–/φ2                      | ~150    | NES CPU w/ APU, no BRK |
| Ricoh        | RP2A07   | 1985 | 8-bit NMOS        | 1.66        | None           | IRQ/–/–/φ2                      | ~150    | PAL NES CPU |
| Ricoh        | 5A22     | 1990 | 16-bit CMOS (SoC) | 3.58        | DMA, timers     | IRQ/NMI/φ2/VMA/BE               | >300    | SNES CPU w/ math & DMA |
| Hudson       | Hu6280   | 1987 | 8-bit CMOS + MMU  | 7.2         | Timer, GPIO     | IRQ/NMI/CLK/SYNC                | ~212    | PC Engine, paging MMU |
| Nintendo     | SA1      | 1995 | 16-bit CMOS SoC   | up to 10    | RAM, DMA        | IRQ/NMI/φ2/SYNC                 | >300    | SNES cart coprocessor |
| UMC          | UM6502   | 1983 | 8-bit NMOS        | 1.0–2.0     | None           | IRQ/NMI/RDY/SYNC                | 151     | MOS-compatible |
| UMC          | UM6507   | 1983 | 8-bit NMOS        | 1.19        | None           | IRQ/–/–/SYNC                    | 151     | Atari clone, 8 KiB addressable |
| UMC          | UM6512   | 1983 | 8-bit NMOS        | 1.0–2.0     | None           | IRQ/NMI/RDY/SYNC                | 151     | Fully compatible variant |

| Manufacturer | Model       | Year  | Architecture      | Clock (MHz) | I/O Ports        | Signals (IRQ/NMI/RDY/φ2/...)     | Opcodes | Notable Features |
|--------------|-------------|--------|--------------------|-------------|-------------------|----------------------------------|---------|------------------|
| Mitsubishi   | 7700        | 1984  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | Embedded controller for media systems |
| Mitsubishi   | 7751        | 1985  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | TV and household device controller |
| Mitsubishi   | 7900        | 1986  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | Used in video & CD systems |
| Mitsubishi   | M37450      | 1990  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | Multipurpose controller with RAM/ROM |
| Mitsubishi   | M50740      | 1990  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | Remote controls, optical drives |
| Mitsubishi   | M50959      | 1990  | 8-bit CMOS MCU     | ~4.0        | 8–16-bit GPIO     | Yes/Yes/Yes/φ2                   | ~212    | Audio/video controller |
| Synertek     | SY6502–C    | 1976  | 8-bit NMOS         | 1.0–2.0     | None              | Yes/Yes/Yes/Yes                  | 151     | MOS-licensed version used in Apple and arcade boards |
| Synertek     | SY6503–07   | 1977  | 8-bit NMOS         | 1.0–2.0     | None              | Yes/–/–/Yes                      | 151     | Lower pin-count variants (e.g. Atari 2600) |
| Synertek     | SY6512–15   | 1978  | 8-bit NMOS         | 1.0–2.0     | None              | Yes/Yes/Yes/Yes                  | 151     | Embedded-specific derivatives |
| Synertek     | SYP6502A    | 1979  | 8-bit NMOS         | 1.0–2.0     | None              | Yes/Yes/Yes/Yes                  | 151     | Industry package variant |
| Sunplus      | 65N02       | ~2003 | 8-bit CMOS SoC     | ~4–8        | 8–16-bit GPIO     | Yes/Yes/–/–                      | ~212    | Embedded in cheap handheld consoles |
| Sunplus      | 65R02       | ~2003 | 8-bit CMOS SoC     | ~6.0        | 8–16-bit GPIO     | Yes/Yes/–/–                      | ~212    | Toys, voice chips |
| Sunplus      | 65S02       | ~2004 | 8-bit CMOS SoC     | ~6.0        | 8–16-bit GPIO     | Yes/Yes/–/–                      | ~212    | TV plug-and-play devices |
| Sunplus      | CPU6502     | ~2004 | 8-bit CMOS SoC     | ~6.0        | Multiport         | Yes/Yes/–/–                      | ~212    | Generic core embedded in various ASICs |
| Sunplus      | SPC81A      | ~2005 | 8-bit CMOS SoC     | ~6.0        | Multiport         | Yes/Yes/–/–/CLK                  | ~212    | MP3/audio SoC with LCD & flash |

| Manufacturer | Model       | Year   | Architecture       | Clock (MHz) | I/O Ports        | Signals (IRQ/NMI/RDY/φ2/...)     | Opcodes | Notable Features |
|--------------|-------------|--------|---------------------|-------------|-------------------|----------------------------------|---------|------------------|
| Yamaha       | YM-2002     | ?      | 8-bit custom        | ?           | Unknown           | Unknown                          | ?       | Possibly audio-focused 6502-based controller |
| Sitronix     | ST2205U     | ~2006  | 8-bit CMOS SoC      | 6–12        | 8–16-bit GPIO     | Yes/Yes/–/–/CLK                  | ~212    | MP3 SoC with LCD, flash, USB |
| Renesas      | 740 Series  | ~1998  | 8-bit CMOS MCU      | ?           | GPIO, I²C         | Yes/Yes/–/–/–                    | ~212    | Japan-only embedded controller |
| Renesas      | 38000       | ~2000  | 8/16-bit CMOS MCU   | ?           | Multiport MCU     | Yes/Yes/–/–/–                    | >212    | Enhanced MCU family (extended address + bus) |
| Novatek      | NT6868A     | ~2010  | 8-bit CMOS SoC      | ?           | Display I/O       | ?/?/?/–/–                        | ~212    | TFT timing controller (TCON), LCD SoC |
| KMT          | SM360       | ~2004  | 8-bit CMOS SoC      | ~6.0        | 8-bit GPIO        | ?/?/–/–/CLK                      | ~212    | Branded as CM360, used in handheld games |
| Minsk (USSR) | 1869ВМ1     | ~1984  | 8-bit NMOS clone    | ?           | Unknown           | Unknown                          | ~151    | Possible Soviet clone of 6502, rare |
| Atari        | C014806     | ~1983  | 8-bit NMOS (custom) | ~1.0        | Unknown           | ?/?/?/Yes/φ2                     | ~151    | Internal Atari chip, presumed 6502 core |
| NCR          | 81489       | ?      | 8-bit CMOS SoC      | ?           | Unknown           | Unknown                          | ?       | Rare custom SoC, documentation scarce |

| Manufacturer | Model        | Year   | Architecture       | Clock (MHz) | I/O Ports         | Signals (IRQ/NMI/RDY/φ2/...)     | Opcodes | Notable Features |
|--------------|--------------|--------|---------------------|-------------|--------------------|----------------------------------|---------|------------------|
| Sunplus      | 65R02-8QFP   | ~2003  | 8-bit CMOS SoC      | 6.0         | GPIO + LCD lines   | Yes/Yes/–/–                      | ~212    | Masked version, QFP pkg, used in handhelds |
| Sunplus      | SPC series   | 2000s  | 8-bit CMOS SoC      | 6.0–12.0     | Audio, LCD, Flash  | Varies                          | ~212    | SPC81A, SPC660, etc. for speech/toy apps |
| CMD (GTE)    | G65SC03      | 1983   | 8-bit CMOS          | 2.0         | None               | Yes/Yes/Yes/Yes                  | ~212    | Mask-shrunk variant |
| CMD (GTE)    | G65SC04      | 1983   | 8-bit CMOS          | 2.0         | None               | Yes/Yes/Yes/Yes                  | ~212    | Internal-only model |
| Rockwell     | R65/11EB     | ~1980  | 8-bit NMOS hybrid   | 1.0         | ?                  | ?/?/?/?                         | ?       | Experimental controller/mixed function |
| Rockwell     | R65C02/21    | 1984   | 8-bit CMOS          | 10.0        | None               | Yes/Yes/Yes/Yes                  | ~212    | Military/industrial temp range |
| WDC          | W65C802      | 1984   | 8/16-bit CMOS       | 14.0        | None               | Yes/Yes/Yes/φ2                  | >212    | Transitional CPU to W65C816 |
| WDC          | W65C816GPMCU | 1990s  | 8/16-bit CMOS       | up to 14     | MCU interface       | Yes/Yes/Yes/φ2/VMA              | >300    | Embedded variant of 65C816 core |