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

## R18 Run #2 original-artifact static semantic audit (2026-11-11)

Evidence: [run #42849134281](https://github.com/969981/SV_Resources/actions/runs/42849134281), artifact IDs `13781846670` (Scarlet) and `13781437064` (Violet), inspected as ZIPs rather than inferring success from CI alone. Each `r18.txt` has 2,183 lines. A complete line-by-line comparison shows **only the `GAME=` header differs**.

### Verified by the decompiled original code

- `main+0xB41A10`: receives the Lua state and index 1. Reads the `TValue` for that index, checks tags, and obtains an object-related pointer (including a collectable-object path). Exact higher-level object type remains unconfirmed.
- `main+0xB92DF0`: receives Lua state, index 2, and nullable conversion-status pointer. Direct integer-tag case loads the scalar value; other cases call `main+0x13FFB0` for conversion. The wrapper saves the lower 32 bits to stack.
- `main+0x278B0`: original C-function pre-call path. For masked `TValue` tag `0x16` the function pointer is directly in the `TValue`; for `0x26` it is read at `*(TValue.value.pointer + 0x18)`. This is **static evidence for a CClosure function-pointer offset**, not runtime confirmation of the entire CClosure layout.
- `main+0x1959E40`: after helper 2 it executes `MOV X1,X0`; its direct call path prepares `X0` as the object-related pointer and executes `BLR X8` at `main+0x1959EF8`. The slow path at `main+0x1959FB4` also restores the scalar with `LDR W1,[X3]` prior to its indirect call. Two native argument-register **inputs** are justified by assembly, although C++ `this`, signedness, return type and actual indirect-call target are not yet proven.
- The native binding wrapper clears `W0` before return, so the Lua C callback reports 0 results. Do not confuse this with the indirect C++ function's return value.
- The static 64-bit little-endian contents of the slot at `main+0x46DDF30` are `0x00FF4890`. Ghidra reports a READ reference at program address `0x01A59E94`. This is an **initial static target candidate**, not an independently observed guest target.

### Observer correction

At `main+0x42088`, the SELF handler has not yet assigned this instruction's source addresses to `X23/X24`. Previous logs of `tvalue(X23)` and `tvalue(X24)` at that breakpoint were therefore potentially stale and should **not** be considered verified operands. The observer now derives SELF source B from `X26 + B*16`, key C from the VM register/constant-table base depending on K, and checks the destination slot against A. It also logs CALL's A-derived function-slot check and the candidate CClosure `f` pointer bytes at +0x18 without assuming the offset is runtime-validated.

### Workflow limitation and next action

The original run's `headless.log` explicitly reports `ANALYZING all memory and code` after `-import`. Thus the earlier workflow **did in fact perform whole-ELF auto-analysis** even though its post-script extracted only targeted functions. The existing R18 results are valid, but this is not the desired incremental architecture. The workflow is now manual-only to avoid accidental repeated runs on code edits. Future static passes should restore an existing R17 Ghidra project and operate on a bounded target list rather than re-importing and auto-analyzing both ELFs.

### Outstanding evidence gates

1. Decompile/verify the static pointed-to function at the `0x00FF4890` candidate and inspect its incoming X0/W1 use, call graph, and side effects.
2. Correlate actual guest `CALL` function-slot tag/closure bytes, native wrapper entry, helper returns, slot load and `BLR` in **one** invocation using the local observer.
3. Verify loader slide, static-slot relocation, actual runtime X8 target, argument signedness/enum and any return-value side effects.
4. Build per-invocation memory SSA: object provenance, aliases, writes, downstream consumption and cross-call lifetime.
5. Keep PR Draft, and do not promote unobserved guest claims to verified.

## R18 follow-up: static default call target recovered from the published R17 corpus

The raw 8 bytes at the wrapper's function-pointer slot were `90 48 FF 00 00 00 00 00`. Using Ghidra's 0x100000 image base, the program address `0x00FF4890` corresponds to the existing, already-published decompilation, with **no new ELF analysis needed**:

- [Scarlet `00ff4890.c`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00ff4890.c)
- [Violet `00ff4890.c`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/violet_main/ghidra12.2/c/00ff4890.c)

Both recovered bodies agree apart from the provenance header:

```c
void FUN_00ff4890(long object, uint mode);
```

Static dataflow and effects:
- `mode` is selected by a switch. Mode 0 clears `*(u16*)(object+0x244)`; for nonzero modes a bucket code OR 1 is written there. The observed buckets include 0x000, 0x100, 0x200 ... 0xA00, depending on mode.
- `object+0x58` and `object+0x59` are state bytes, updated as needed. The mode 0 branch can write the 16-bit value 0xA00 to `object+0x58`.
- When the state changes, a conditional call uses the pointer at `object+0x48`, then a virtual call uses the object at `object+0x38` with vtable slot `+0x20`.
- The pointer array between `object+0x178` and `object+0x180` is traversed in 8-byte elements, potentially writing `child+0x1FC`. Its value depends on `object+0x244` and `object+0x2A0`.

This resolves the **default static C++ target's two parameter types at decompiler level (object pointer, u32)** and its directly visible memory side effects. It does not prove that the runtime function-pointer slot still contains this target, that the function is always reached, or that there are no additional effects inside its callees.

Important contrast with [R17 binding analysis](https://github.com/969981/SV_Resources/blob/master/docs/research/sv400-haxe-r17-native-registration-guest-call.md): upstream `CE35B3EB3.f558733FC(interval:UInt, part_interval:UInt):Void` declares two explicit UInt arguments, while the original Lua CALL provides receiver + one explicit argument, and the statically resolved native target takes object + one u32. This strengthens the **extern arity mismatch** finding; it does not justify using the upstream declaration as the original game's ABI without guest object-identity confirmation.

The local GDB observer additionally records bounded pre-/post-BLR samples of the statically identified object fields and up to four linked children, associated by a thread-local pending BLR stack. These samples are **not** full memory SSA, not exhaustive alias analysis, and may be irrelevant if X8 dynamically points elsewhere. No guest run has yet been conducted.

## R18 guest single-invocation closure gate (observer v2)

**This phase is prepared, NOT runtime verified.** No attached GDB session or guest memory was available in the GitHub connector. Do not say that the callback or target executed in the game until an offline guest log contains an actual matching complete invocation.

### Critical address distinction

The initial static code pointer is printed as **Ghidra program address** `0x00FF4890` because the R17 Ghidra database has image base `0x00100000`. Its ELF/main **RVA** is `0x00EF4890`. With an actual page-aligned loaded main NSO base `BASE`, the expected executable target PC is **`BASE + 0xEF4890`**. Do not compare runtime X8 directly against unrelocated `0x00FF4890`, or add `0xFF4890` to BASE.

The native wrapper RVA is `0x1959E40`. The function pointer slot RVA is `0x46DDF30`. Compare these as BASE-relative addresses in the same guest.

### Dynamic witness chain

1. Read the actual function TValue for `CALL A3 B3 C1`, and resolve tag `0x16` (direct native function) or tag `0x26` (candidate CClosure object, function pointer at `+0x18`). **Emit CALL only if the resulting native pointer is `BASE + 0x1959E40`**, avoiding stale/unrelated B=3 events.
2. Enter the wrapper on the same GDB thread and with the same `lua_State*`; keep the CALL sequence as the invocation ID rather than pairing solely by the Lua-state address.
3. From the captured second TValue (receiver), derive its light-userdata value or full-userdata payload and compare to the return of `0xB41A10` (helper index 1). Read the payload's first pointer and its state byte, and compare the selected holder path to final BLR X0. This establishes pointer **provenance**, not a C++ RTTI class name.
4. Record scalar helper index 2 `W0`, loaded global slot address and its value, and actual X8/X0/W1 at BLR.
5. Catch the CPU at `BASE + 0xEF4890` with `LR = BASE + caller_return_RVA` and the same X0/W1. The direct wrapper BLR is `0x1959EF8` (return `0x1959EFC`); the state-3 slow helper may BLR at `0x195A050` (return `0x195A054`). **Merely seeing X8 contain the candidate address is not proof that CPU executed its code.**
6. Match the return and wrapper `0x1959F0C` returning `W0=0` (zero Lua results). Compare bounded pre/post field snapshots `+0x58`, `+0x59`, `+0x244`, `+0x2A0` and first four linked `child+0x1FC`. These are observational samples, not an exhaustive Memory SSA or proof of actual object C++ type.

### Local offline guest run

Only an operator with GDB access to the **actual offline game guest** can complete the next gate:

```gdb
info inferiors
show architecture
p/x $pc
set $main = 0xACTUAL_LOADED_MAIN_NSO_BASE
set $r18_game = 0
set pagination off
set logging file r18-local-private-gdb.log
set logging enabled on
source scripts/SV400_Lua_R18_Binding_Observer_ReadOnly.py
continue
```

Use `$r18_game = 1` for Violet. Replace `ACTUAL_LOADED_MAIN_NSO_BASE` with the **real verified** loaded base. The observer refuses to arm unless the pre-checked code words and method-name literal match. Let the game naturally execute the target setup call; do not patch game logic or seed synthetic events into the live log.

When a single invocation has occurred, terminate GDB logging locally. Use the offline checker:

```bash
python3 scripts/Verify-SV-R18-GuestCall.py \
  --log r18-local-private-gdb.log --out r18-evaluation.json --require-complete
```

Result categories:
- `NO_GUEST_EVENTS` / `NO_TARGET_CALL`: no useful evidence for this invocation.
- `INCOMPLETE_OR_MISMATCH`: a stage is missing, mismatched or out of order. Look at the checker reasons; do not call it a success.
- `INVALID_TRACE`: broken sequence/session/hash claims or observer diagnostics.
- `SELF_REPORTED_COMPLETE_NOT_INDEPENDENTLY_ATTESTED`: one consistent recorded guest event chain; still **not independent identity/attestation**.
- `SYNTHETIC_FIXTURE_ONLY`: complete-looking unit fixtures, never real runtime evidence.

`--require-complete` returns exit code 2 on incomplete traces. The checker output is pointer-free; the original GDB log can contain guest memory and raw pointers and should remain private. Software breakpoints alter code/timing, and a missing hit (especially with a narrow opcode or function-pointer filter) does **not** prove the code path does not exist.

### CI: syntax and synthetic negative tests only

`.github/workflows/slr-r18-guest-trace-check.yml` runs Python syntax compilation of the observer and verifier plus synthetic positive/negative unit tests. It downloads neither ELF nor Ghidra and never connects to a guest. Treat `success` as **tooling preparation validated**, not guest evidence.

The PR remains Draft. Full C++ object class identity, native side effects inside callees, and complete Memory SSA require more evidence than this sampled execution path.
