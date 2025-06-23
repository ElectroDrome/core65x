.segment "VECTORS"

    .word nmi_stub     ; NMI
    .word reset_handler
    .word irq_stub     ; IRQ

nmi_stub: RTS
irq_stub: RTS