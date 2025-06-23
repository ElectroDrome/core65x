# 🧠 6502-Compatible CPU Reference Catalog

A **comprehensive, technical, and lovingly retro** catalog of over 120 CPUs, SoCs, clones, softcores and emulators based on the **MOS Technology 6502 architecture**, spanning nearly five decades of computing history.  

This project collects and compares processors from pioneers like **MOS**, **WDC**, and **Rockwell**, as well as lesser-known or embedded clones from **Sunplus**, **Ricoh**, **UMC**, **Mitsubishi**, and more — including systems used in **Commodore, Nintendo, Atari**, and various embedded devices.

From the original NMOS 6502 launched in 1975 to modern drop-in FPGA replacements running at 100 MHz, this catalog is a celebration of 8-bit ingenuity—meticulously compiled and standardized for researchers, retrocomputing fans, hardware hackers, and emulator authors.

---

## ✨ Features

- 📚 **120+ Entries**: Covers every known 6502 variant—official, unofficial, embedded, or virtual.
- ⚙️ **Technical Specs**: Unified fields including opcodes, timing, RAM, signals, and relative performance.
- 🕹️ **Retro Focus**: Includes NES, Apple-1, KIM-1, Commodore 64, VTech Laser, and others.
- 🔧 **Softcores & Emulators**: From `T65` to `verilog-6502`, including Py65 and browser-based emus.
- 📦 **Format**: Single flat Markdown table—portable, parsable, and GitHub-friendly.

## 📐 Table Schema

The following fields are used:

| Field             | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| Manufacturer      | Chip designer or project author                                             |
| Model             | Model name or identifier                                                    |
| Year              | Year of release or publication                                              |
| Architecture      | Process, logic family, ISA variant (NMOS, CMOS, 65816, virtual, etc.)       |
| Clock (MHz)       | Nominal or typical clock rate                                               |
| RAM               | On-chip RAM (if any), or `external`                                         |
| I/O Ports         | Integrated or mapped peripherals                                            |
| Signals           | Supported hardware signal lines (IRQ, RDY, SYNC, SO, VDA/VPA...)            |
| Opcodes           | Approximate instruction set count, e.g. `212 (65C02)`                       |
| MIPS              | Estimated millions of instructions per second                              |
| Cycles/Instr.     | Typical number of cycles per instruction                                    |
| Rel. Performance  | Relative to baseline MOS 6502 at 1 MHz (`1.0×`)                              |
| Profile           | Use case: `Retro`, `Embedded`, `MCU`, `SoC`, `Emulator`, `FPGA`, `Replica`  |
| Notable Features  | Key traits: bus compatibility, removed BCD, extra opcodes, etc.             |


---

## 🎯 Use Cases

- As a **developer**: Check compatibility of 6502 variants for hardware/emulator targets
- As a **emulator author**: opcode coverage, cycle accuracy
- As a **FPGA dev**:  opcode count, signal compatibility
- As an **educator**: Use as reference material in retro computing or embedded systems curricula and evolution of microprocessor architecture
- As a **historian/archivist**: Explore the diffusion and evolution of 8-bit CPU design
- As a **hobbyist**: Compare SoCs used in old consoles, DIY kits, or microcontrollers
- As a **Retro fan**: console and home computer heritage
- As a **Builder**: drop-in replacement cores and SBCs

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
| Ricoh        | RP2A03   | 1983 | 8-bit NMOS        | 1.79        | None           | IRQ/–/–/φ2                      | ~150    | NES CPU w/ APU, no BRK |
| Ricoh        | RP2A07   | 1985 | 8-bit NMOS        | 1.66        | None           | IRQ/–/–/φ2                      | ~150    | PAL NES CPU |
| Ricoh        | 5A22     | 1990 | 16-bit CMOS (SoC) | 3.58        | DMA, timers     | IRQ/NMI/φ2/VMA/BE               | >300    | SNES CPU w/ math & DMA |
| Hudson       | Hu6280   | 1987 | 8-bit CMOS + MMU  | 7.2         | Timer, GPIO     | IRQ/NMI/CLK/SYNC                | ~212    | PC Engine, paging MMU |
| Nintendo     | SA1      | 1995 | 16-bit CMOS SoC   | up to 10    | RAM, DMA        | IRQ/NMI/φ2/SYNC                 | >300    | SNES cart coprocessor |
| UMC          | UM6502   | 1983 | 8-bit NMOS        | 1.0–2.0     | None           | IRQ/NMI/RDY/SYNC                | 151     | MOS-compatible |
| UMC          | UM6507   | 1983 | 8-bit NMOS        | 1.19        | None           | IRQ/–/–/SYNC                    | 151     | Atari clone, 8 KiB addressable |
| UMC          | UM6512   | 1983 | 8-bit NMOS        | 1.0–2.0     | None           | IRQ/NMI/RDY/SYNC                | 151     | Fully compatible variant |
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
| Yamaha       | YM-2002     | ?      | 8-bit custom        | ?           | Unknown           | Unknown                          | ?       | Possibly audio-focused 6502-based controller |
| Sitronix     | ST2205U     | ~2006  | 8-bit CMOS SoC      | 6–12        | 8–16-bit GPIO     | Yes/Yes/–/–/CLK                  | ~212    | MP3 SoC with LCD, flash, USB |
| Renesas      | 740 Series  | ~1998  | 8-bit CMOS MCU      | ?           | GPIO, I²C         | Yes/Yes/–/–/–                    | ~212    | Japan-only embedded controller |
| Renesas      | 38000       | ~2000  | 8/16-bit CMOS MCU   | ?           | Multiport MCU     | Yes/Yes/–/–/–                    | >212    | Enhanced MCU family (extended address + bus) |
| Novatek      | NT6868A     | ~2010  | 8-bit CMOS SoC      | ?           | Display I/O       | ?/?/?/–/–                        | ~212    | TFT timing controller (TCON), LCD SoC |
| KMT          | SM360       | ~2004  | 8-bit CMOS SoC      | ~6.0        | 8-bit GPIO        | ?/?/–/–/CLK                      | ~212    | Branded as CM360, used in handheld games |
| Minsk (USSR) | 1869ВМ1     | ~1984  | 8-bit NMOS clone    | ?           | Unknown           | Unknown                          | ~151    | Possible Soviet clone of 6502, rare |
| Atari        | C014806     | ~1983  | 8-bit NMOS (custom) | ~1.0        | Unknown           | ?/?/?/Yes/φ2                     | ~151    | Internal Atari chip, presumed 6502 core |
| NCR          | 81489       | ?      | 8-bit CMOS SoC      | ?           | Unknown           | Unknown                          | ?       | Rare custom SoC, documentation scarce |
| Sunplus      | 65R02-8QFP   | ~2003  | 8-bit CMOS SoC      | 6.0         | GPIO + LCD lines   | Yes/Yes/–/–                      | ~212    | Masked version, QFP pkg, used in handhelds |
| Sunplus      | SPC series   | 2000s  | 8-bit CMOS SoC      | 6.0–12.0     | Audio, LCD, Flash  | Varies                          | ~212    | SPC81A, SPC660, etc. for speech/toy apps |
| CMD (GTE)    | G65SC03      | 1983   | 8-bit CMOS          | 2.0         | None               | Yes/Yes/Yes/Yes                  | ~212    | Mask-shrunk variant |
| CMD (GTE)    | G65SC04      | 1983   | 8-bit CMOS          | 2.0         | None               | Yes/Yes/Yes/Yes                  | ~212    | Internal-only model |
| Rockwell     | R65/11EB     | ~1980  | 8-bit NMOS hybrid   | 1.0         | ?                  | ?/?/?/?                         | ?       | Experimental controller/mixed function |
| Rockwell     | R65C02/21    | 1984   | 8-bit CMOS          | 10.0        | None               | Yes/Yes/Yes/Yes                  | ~212    | Military/industrial temp range |
| WDC          | W65C802      | 1984   | 8/16-bit CMOS       | 14.0        | None               | Yes/Yes/Yes/φ2                  | >212    | Transitional CPU to W65C816 |
| WDC          | W65C816GPMCU | 1990s  | 8/16-bit CMOS       | up to 14     | MCU interface       | Yes/Yes/Yes/φ2/VMA              | >300    | Embedded variant of 65C816 core |







| Manufacturer | Model     | Year | Architecture           | Clock (MHz) | RAM         | I/O Ports                                      | Signals                        | Opcodes        | MIPS  | Cycles/Instr. | Performance    | Profil     | Notable Features                      |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| aholme.co.uk          | Verilog6502 |2012| Verilog, 6502      |10| extern       | 6502 bus                         | IRQ, NMI, RDY, φ2, SYNC, SO     | 151 (6502)     | 4.3   | 2–7            | 10.0× (6502)    | FPGA   | Phase-accurate, netlist-derived from Visual6502 |
| Apple        | SWEET16   |1977| Virtual, SWEET16       | —           | —           | emulated via 6502                              | —                               | 56 (Sweet16)   | —     | —              | —              | Virtual    | 16-bit VM by Steve Wozniak              |
| Apple          | Apple-1     |1976| NMOS, 6502             |1| 4 KiB std.   | Keyboard, video out, cassette                  | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Retro       | Woz-designed, BASIC in ROM optional          |
| Arlet Ottens | Arlet6502 |2010| Verilog, 6502          |25| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 10.7  | 2–7            | 25.0× (6502)    | FPGA       | Minimalistic, cycle-accurate          |
| Arlet Ottens          | Arlet6502   |2010| Verilog, 6502      |25| extern       | 6502 bus                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 10.7  | 2–7            | 25.0× (6502)    | FPGA   | Minimalist, cycle-accurate, open source          |
| Ben Eater    | BE6502      |2019| Breadboard, 6502       |1| extern     | LEDs, switches, serial                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Educational| Minimal discrete 6502 computer            |
| Ben Eater        | Breadboard   |2018| NMOS, W65C02          |1| 32 KiB RAM  | LEDs, switches, LCD, serial                    | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Educational| Modular breadboard computer                  |
| Ben Eater        | Breadboard   |2018| W65C02               |1| 32 KiB      | LEDs, switches, LCD, serial                    | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Educational| Modular breadboard computer                  |
| Briel Computers| Replica 1   |2003| NMOS, 6502             |1| 32 KiB       | PS/2, VGA/serial, SD card                      | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Replica     | Apple-1 clone with modern I/O                |
| Briel Computers  | Replica 1    |2003| NMOS, 6502           |1| 32 KiB      | PS/2, VGA, SD card, USB                        | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Replica     | Apple-1 clone with modern interfaces         |
| C64 DTV      | DTV 6502  |2004| CMOS, 6502             |32| 128 KiB int.| A/V, USB, GPIO, memory-mapped                  | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 13.7  | 2–7            | 32.0× (6502)    | SoC        | Enhanced 6502 in C64 joystick           |
| Chambers     | 6502.ts   |2020| TypeScript, 6502       | —           | —           | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | Emulator   | Browser-based emulator                |
| Corsham Tech     | KIM Clone    |2017| NMOS, 6502            |1| 5 KiB RAM   | Serial, keypad, LED, SD card                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Replica     | KIM-1 compatible with modern I/O             |
| Corsham Tech     | KIM Clone    |2017| NMOS, 6502           |1| 5 KiB       | Serial, keypad, LED, SD card                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Replica     | KIM-1 compatible with modern I/O             |
| CSG          |4510|1986| CMOS, 65CE02           |2| 2 KiB int.  | 2× Timer, 2× UART, I/O mapped                  | IRQ, NMI, RDY, φ2, SYNC, SO     | 256 (65CE02)   | 0.86  | 2–6            | 2.0× (6502)     | SoC        | Used in Commodore C65                   |
| CSG          |7501|1984| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | Variant for Plus/4                      |
| CSG          |8501|1986| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | Revised 7501                            |
| CSG          |8502|1986| NMOS, 6502             |2| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Home       | Used in Commodore 128                   |
| CSG          | 65CE02    |1986| CMOS, 65CE02           |2| extern      | extern (6502 bus), VDA, VPA, SO                | IRQ, NMI, RDY, φ2, SYNC, SO     | 256 (65CE02)   | 0.86  | 2–6            | 2.0× (6502)     | Embedded   | Extended 6502 with new opcodes          |
| e-basteln.de          | 65F02       |2022| FPGA, 65C02        |100| 64 KiB int.  | DIP-40, 6502 bus-compatible      | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 42.9  | 2–6            | 100.0× (6502)   | FPGA   | Drop-in replacement, DIP form factor         |
| Electronics-Lab | 65C02 FPGA |2023| FPGA, 65C02           |100| intern     | 6502 bus-compatible                            | IRQ, NMI, RDY, φ2, SYNC         | 212 (65C02)    | 42.9  | 2–6            | 100.0× (6502)   | FPGA       | Pin-compatible upgrade for legacy systems |
| GoldStar     | GM65C02     |1986| CMOS, 65C02            |1| extern     | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 0.43  | 2–6            | 1.0× (65C02)    | Embedded   | 65C02-compatible chip from GoldStar       |
| GTE          | G65SC02   |1986| CMOS, 65C02            |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 0.43  | 2–6            | 1.0× (65C02)    | Embedded   | Static core, low power                 |
| GTE          | G65SC802  |1986| CMOS, 65816            |1| extern      | extern (65816 bus)                             | IRQ, NMI, RDY, φ2, SYNC, VDA, VPA, VP, ML | 92 (65816)     | 0.43  | 2–8            | 1.0× (65816)    | Embedded   | 16-bit extension of 6502               |
| GTE          | G65SC816  |1986| CMOS, 65816            |1| extern      | extern (65816 bus)                             | IRQ, NMI, RDY, φ2, SYNC, VDA, VPA, VP, ML | 92 (65816)     | 0.43  | 2–8            | 1.0× (65816)    | Embedded   | Enhanced 65816 core                    |
| Hans Otten     | KIM-1 Sim   |2019| Lazarus, 6502 emulated | —           | emulated     | TTY, LED emulation, debugger                   | emulated                        | 151 (6502)     | —     | —              | —              | Emulator    | KIM-1 simulator with debugger & profiler     |
| HobbyPCB         | 6502 SBC PCB |2020| NMOS, 6502            |1| 32+32 KiB   | Serial, expansion header                       | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | SBC        | Bare PCB for DIY 6502 computer               |
| Jürgen Mülle | 65F02       |2022| FPGA, 65C02            |100| 64 KiB int.| Memory-mapped I/O, DIP switch config           | IRQ, NMI, RDY, φ2, SYNC         | 212 (65C02)    | 42.9  | 2–6            | 100.0× (6502)   | FPGA       | Accelerator for chess computers, Apple II |
| K. Dormann   | verilog-6502 |2015| Verilog, 6502        |50| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 151 (6502)     | 21.4  | 2–7            | 50.0× (6502)    | FPGA       | Verified against full test suite      |
| Klaus Dormann       | verilog-6502 |2015| Verilog, 6502         |50| extern      | 6502 bus                         | IRQ, NMI, RDY, φ2, SYNC, SO     | 151 (6502)     | 21.4  | 2–7            | 50.0× (6502)    | FPGA   | Verified via functional test suite       |
| MEGA65 Team         | M65C02       |2021| Verilog, 65C02+       |40| 128 KiB int.| VIC-IV, DMA, SD, audio, USB      | IRQ, NMI, RDY, φ2, SYNC, VDA/VPA|212| 17.1  | 2–6            | 40.0× (6502)    | SoC    | Enhanced 65C02 core in MEGA65            |
| Mike Chambers  | 6502.ts     |2020| TypeScript, 6502       | —           | emulated     | Web-based I/O                                  | emulated                        | 151 (6502)     | —     | —              | —              | Emulator    | Browser emulator with KIM-1/Apple-1 modes    |
| Mike Kohn            | m6502       |2015| Verilog, 6502      | —           | —            | 6502 bus                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | FPGA   | Replaced by W65C832 core                     |
| Mike Willegal  | Mimeo 1     |2010| NMOS, 6502             |1| 4–32 KiB     | Apple-1 compatible                             | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Replica     | Exact Apple-1 PCB replica                    |
| Miliox       | mt6502    |2023| C++, 6502              | —           | —           | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | Emulator   | Modular C++ 6502 core                 |
| MOS          |6502|1975| NMOS, 6502             |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Retro      | Original MOS design, 64 KiB addr.       |
| MOS          |6503|1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | No address bus                          |
| MOS          |6504|1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | 13-bit address bus                      |
| MOS          |6505|1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| MOS          |6506|1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| MOS          |6507|1975| NMOS, 6502             |1| extern      | Atari I/O (reduced address bus)                | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Console    | 13-bit address bus                      |
| MOS          |6508|1975| NMOS, 6502             |1| 128 B int.  | 16× GPIO, Timer, I/O mapped                    | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | RAM + I/O on-chip                       |
| MOS          |6509|1977| NMOS, 6502             |1| 256 B int.  | Banked I/O, memory-mapped                      | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | 1 MB address space                      |
| MOS          |6510|1982| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | I/O + address lines on-chip             |
| MOS          |7501|1984| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | Early 8501 variant                     |
| MOS          |8500|1986| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | HMOS version of 6510                   |
| MOS          |8501|1986| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | 6510 variant for C16/Plus/4            |
| MOS          |8502|1986| NMOS, 6502             |2| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Home       | 6510 variant, 2 MHz                    |
| MOS          | 6502A     |1978| NMOS, 6502             |2| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Retro      | Higher clock grade                      |
| MOS          | 6502B     |1980| NMOS, 6502             |3| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 1.29  | 2–7            | 3.0× (6502)     | Retro      | Higher clock grade                      |
| MOS          | 6502T     |1982| NMOS, 6502             |1| extern      | system-specific, memory-mapped                 | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Console    | Trimmed die for C64GS cartridge CPU     |
| MOS          | 6510T     |1983| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | 6510 variant for C64GS                 |
| MOS          | 7501R1    |1984| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | Revised 7501                           |
| MOS          | 7501T     |1984| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | 7501 variant for C16/Plus/4            |
| MOS          | 8501R1    |1986| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | Revised 8501                           |
| MOS          | 8501T     |1986| NMOS, 6502             |1| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Home       | 8501 variant for C16/Plus/4            |
| MOS          | 8502R1    |1986| NMOS, 6502             |2| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Home       | Revised 8502                           |
| MOS          | 8502T     |1986| NMOS, 6502             |2| extern      | 6× GPIO, memory-mapped                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Home       | 8502 variant for C128                  |
| MOS| KIM-1        |1976| NMOS, 6502           |1| 1 KiB int.  | Hex keypad, 6× 7-seg LED, TTY, cassette        | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | SBC        | First 6502 SBC with 6530 I/O + ROM           |
| NCR          | 65C02       |1985| CMOS, 65C02            |1| extern     | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 0.43  | 2–6            | 1.0× (65C02)    | Embedded   | CMOS variant by NCR                       |
| OpenCores    | T65       |2001| Verilog, 6502          |14| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 151 (6502)     | 6.00  | 2–7            | 14.0× (6502)    | FPGA       | Popular 6502 softcore                 |
| Oscarv         | KIM Uno     |2015| AVR, 6502 emulated     | —           | emulated     | Hex keypad, 7-seg LED, serial                  | emulated                        | 151 (6502)     | —     | —              | —              | Replica     | Arduino-based KIM-1 + Apple-1 + calculator   |
| py65         | py65       |2014| Python, 6502           | —           | —          | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | Emulator   | Educational emulator in Python            |
| RC6502 Project   | RC6502       |2019| NMOS, 6502            |1| modular     | Backplane, serial, video, keyboard             | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | SBC        | Modular 6502 system with Eurocard bus        |
| redcode      |6502|1999| C, 6502                | —           | —           | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | Emulator   | Portable ANSI C emulator              |
| Replica One  | R1 Plus     |2005| NMOS, 6502             |1| extern     | Serial, PS/2, video                            | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | RetroKit   | Apple I clone with enhancements           |
| Ricoh        | 2A03      |1983| NMOS, 6502             | 1.79        | extern      | APU, PPU interface, memory-mapped              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.77  | 2–7            | 1.8× (6502)     | Console    | NES CPU, no BCD, with audio             |
| Ricoh        | 2A07      |1984| NMOS, 6502             | 1.66        | extern      | APU, PPU interface, memory-mapped              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.71  | 2–7            | 1.6× (6502)     | Console    | PAL NES CPU, no BCD, with audio         |
| Ricoh        | RP2A03E     |1985| NMOS, 6502             | 1.79        | extern     | APU, PPU interface                             | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.77  | 2–7            | 1.8× (6502)     | Console    | Variant with modified audio logic         |
| Rob Finch    | FT6502    |2018| Verilog, 65C02         |100| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 42.9  | 2–6            | 100.0× (6502)   | FPGA       | Pipelined 65C02 softcore              |
| Rockwell     | R6502     |1975| NMOS, 6502             |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Retro      | Second-source 6502                     |
| Rockwell     | R6502-13  |1980| NMOS, 6502             | 1.3         | extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.56  | 2–7            | 1.3× (6502)     | Retro      | Higher clock grade                      |
| Rockwell     | R6503     |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | No address bus                          |
| Rockwell     | R6504     |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | 13-bit address bus                      |
| Rockwell     | R6505     |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| Rockwell     | R6506     |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| Rockwell     | R6507     |1975| NMOS, 6502             |1| extern      | Atari I/O (reduced address bus)                | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Console    | 13-bit address bus                      |
| Rockwell     | R6511Q    |1980| NMOS, 6502             |1| 128 B int.  | 16× GPIO, Timer, memory-mapped                 | IRQ, NMI, RDY, φ2, SYNC, TSC    | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | Timer + on-chip I/O                     |
| rust6502     | rust6502    |2022| Rust, 6502             | —           | —          | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | Emulator   | 6502 emulator core in Rust               |
| Sanyo        | LC6502    |1980| NMOS, 6502             |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | OEM variant                             |
| SBC-6502         | SBC-6502     |2021| CMOS, W65C02         |14| 32 KiB      | Serial, GPIO, expansion                        | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 6.00  | 2–7            | 14.0× (6502)    | SBC        | Compact modern 6502 board                    |
| Seiko Epson  | SED6502     |1983| NMOS, 6502             |1| extern     | LCD controller interface                       | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | With integrated LCD controller            |
| Synertek     | SY6502    |1975| NMOS, 6502             |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Retro      | Second-source 6502                     |
| Synertek     | SY6502A   |1978| NMOS, 6502             |2| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.86  | 2–7            | 2.0× (6502)     | Retro      | Higher clock grade                      |
| Synertek     | SY6502B   |1980| NMOS, 6502             |3| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 1.29  | 2–7            | 3.0× (6502)     | Retro      | Higher clock grade                      |
| Synertek     | SY6503    |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | No address bus                          |
| Synertek     | SY6504    |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | 13-bit address bus                      |
| Synertek     | SY6505    |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| Synertek     | SY6506    |1975| NMOS, 6502             |1| extern      | —                                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   |                                          |
| Synertek     | SY6507    |1975| NMOS, 6502             |1| extern      | Atari I/O (reduced address bus)                | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Console    | 13-bit address bus                      |
| Toshiya Takeda      | FPGA-6502    |2020| Verilog, 6502         |25| extern      | 6502 bus                         | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 10.7  | 2–7            | 25.0× (6502)    | FPGA   | Cycle-accurate, publicly documented core |
| UMC          | UM6502    |1984| NMOS, 6502             |1| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | 6502 clone by UMC                       |
| UMC          | UM6502C     |1985| CMOS, 6502             |1| extern     | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | Embedded   | CMOS version of UM6502                    |
| UTP Malaysia | FPGA6502    |2004| VHDL, 6502             | —           | —          | emulated I/O                                   | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | —     | —              | —              | FPGA       | Academic project, functional emulator |
| WDC          | W65C02S   |1984| CMOS, 65C02            |14| extern      | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 6.00  | 2–6            | 14.0× (6502)    | Embedded   | Static core, industrial temp range     |
| WDC          | W65C134S  |1990| CMOS, 65C02, MCU       |8| 4 KiB int.  | 56× GPIO, 4× Timer, UART, SPI, ADC, IRQ, NMI   | IRQ, NMI, RDY, φ2, SYNC, SO     | 212 (65C02)    | 3.43  | 2–6            | 8.0× (65C02)     | MCU        | Full-featured 8-bit microcontroller     |
| WDC          | W65C265S  |1990| CMOS, 65816, MCU       |8| 8 KiB int.  | 56× GPIO, 4× Timer, UART, SPI, ADC, IRQ, NMI   | IRQ, NMI, RDY, φ2, SYNC, VDA, VPA, VP, ML | 92 (65816)     | 3.43  | 2–8            | 8.0× (65816)     | MCU        | 16-bit MCU with peripherals            |
| WDC          | W65C802     |1985| CMOS, 65816 hybrid     |14| extern     | extern (65816 bus)                             | IRQ, NMI, RDY, φ2, SYNC, VDA, VPA, VP, ML | 92 (65816)     | 6.00  | 2–8            | 14.0× (65816)    | Embedded   | Internally 16-bit, 8-bit bus              |
| WDC          | W65C816S  |1985| CMOS, 65816            |14| extern      | extern (65816 bus)                             | IRQ, NMI, RDY, φ2, SYNC, VDA, VPA, VP, ML | 92 (65816)     | 6.00  | 2–8            | 14.0× (65816)    | Embedded   | 16-bit extension of 6502               |
| Wichit Sirichote | 6502 Kit     |2005| CMOS, 65SC02         |1| 32 KiB RAM  | HEX keypad, 7-seg LED, RS232, LCD              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 0.43  | 2–7            | 1.0× (6502)     | SBC Kit    | Educational kit with monitor ROM             |
| Xark         | T6502      |2005| VHDL, 6502             |12| extern     | extern (6502 bus)                              | IRQ, NMI, RDY, φ2, SYNC         | 151 (6502)     | 5.14  | 2–7            | 12.0× (6502)    | FPGA       | 6502 core in VHDL                         |
