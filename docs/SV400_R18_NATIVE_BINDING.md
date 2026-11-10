# SV 4.0.0 R18 — Native Lua Binding Recovery

R18 separates two evidence tracks:

1. **Static original-ELF analysis:** targeted Ghidra 12.2 decompilation for the native wrapper, its two stack-reader helpers, the CALL pre-call candidate, the registration callback, and the VM SELF / CALL / CLOSURE handler blocks.
2. **Local guest observation:** an opt-in read-only GDB observer. It is not run by GitHub Actions and does not claim a guest connection.

## Static baseline

Use the latest R17 native relocation artifact, not the earlier run-6 artifact:

- [R17 run 10](https://github.com/969981/SV_Resources/actions/runs/42783081432)
- [R17 run 9](https://github.com/969981/SV_Resources/actions/runs/42782892492)

The run-10 report identifies the same seven relocated VM handler RVAs in Scarlet and Violet:

| Handler | Opcode | RVA |
|---|---:|---:|
| GETI | 13 | 0x41890 |
| GETFIELD | 14 | 0x41998 |
| SETFIELD | 18 | 0x41E68 |
| SELF | 20 | 0x42088 |
| TEST | 66 | 0x4475C |
| CALL | 68 | 0x4487C |
| CLOSURE | 79 | 0x453FC |

The native method-table code candidate is main+0x1959E40. The two direct helper calls are main+0xB41A10 and main+0xB92DF0. The indirect-call slot is statically addressed through main+0x46DDF30 in the observed wrapper instruction sequence.

These are static addresses and code/data relationships. They do not prove that a live Lua CClosure contains the candidate function pointer.

## R18 Ghidra workflow

The R18 Ghidra workflow checks the exact Scarlet/Violet ELF SHA-256 values, imports each original AArch64 ELF into hash-pinned Ghidra 12.2, and runs SV400R18BindingTrace.java.

The output records function discovery, signatures, decompiler C pseudocode where available, bounded assembly windows, and references/bytes for the global function-pointer slot. VM handler blocks are disassembled without assuming that each handler is a standalone C++ function.

## Local AArch64 guest observer

Only run this after connecting GDB to the offline guest and confirming that the selected inferior is the intended game process.

    info inferiors
    show architecture
    p/x $pc

Set the actual loaded main NSO base and edition:

    set $main = 0xACTUAL_LOADED_MAIN_NSO_BASE
    set $r18_game = 0
    set pagination off
    set logging file r18-local-private-gdb.log
    set logging enabled on
    source scripts/SV400_Lua_R18_Binding_Observer_ReadOnly.py
    continue

Use $r18_game = 0 for Scarlet and 1 for Violet.

The observer checks original instruction words and the f558733FC literal before installing breakpoints. It records:

- SELF handler candidate TValue locations in X23/X24.
- CALL handler events with opcode 68 and B=3, including the function TValue and the next two TValue slots.
- The wrapper entry and the most recent CALL event with the same Lua-state pointer.
- Both helper call boundaries and their raw return registers.
- The global slot address computed from the ADRP/LDR pair and the loaded X8 target candidate.
- X0/X1 at BLR X8 and X0 immediately after the indirect call.

The script deliberately does not decode a CClosure field offset, TValue tag, C++ type, or return type. It emits raw candidate bytes for offline correlation. Its software breakpoints affect timing; this is not a timing-neutral trace.

Keep pointer-containing logs local until reviewed and sanitized. GitHub Actions cannot read the user's local emulator/Switch guest memory. Synthetic Actions tests must never be presented as runtime evidence.

## R18 acceptance gates

- Both original ELFs pass exact SHA checks.
- Ghidra reports the target function/body and decompilation status separately; a missing decompilation is not a successful semantic recovery.
- The two helper functions are identified from their actual machine code and call sites, not guessed from their addresses.
- The global slot's relocation/data status is reported without inventing an indirect target.
- The guest trace must correlate CALL's Lua-state pointer with the native wrapper entry and preserve one call instance across helper returns and BLR.
- CClosure layout, native parameter types, native return type, and Memory SSA remain unresolved until independently supported by the guest trace and static dataflow.
