# SV 4.0.0 — live guest proof of the edition vtable call

This is **an instrumentation protocol**, not a completed runtime capture. Source: [`sv400_virtual_dispatch_trace.py`](../../scripts/guest/sv400_virtual_dispatch_trace.py). It does not patch version state, save files, or call game functions. GDB breakpoints may transiently interrupt execution. Use an offline guest.

## Requirements

- A paused **Switch guest AArch64** GDB target, exposing guest `X0/X1/X8/PC/X30`, guest memory reads, and guest code breakpoints. Attaching an x86-64 host-process GDB session to a JIT emulator is **not** equivalent.
- The original Scarlet/Violet **4.0.0** build, not a patch or a different revision.
- The **absolute runtime guest PC** of `FUN_0159B96C`; do **not** assume the Ghidra virtual address `0x0159B96C` is a direct `main+RVA`. The Ghidra project has `image_base=0x00100000`. Its nominal difference `0x0149B96C` is a hypothesis until the live instruction bytes match.
- Python-enabled GDB; local write access for the log.

## Commands

```gdb
(gdb) target remote <guest-target-host>:<guest-target-port>
(gdb) info registers pc x0 x1 x8 x30
(gdb) source scripts/guest/sv400_virtual_dispatch_trace.py
(gdb) sv400-trace-arm 0x<ABSOLUTE_GUEST_FUN_0159B96C_PC> sv400_trace.jsonl 20
(gdb) continue
# Exercise guest startup/restart path that triggers the edition initialization.
(gdb) interrupt
(gdb) sv400-trace-off
```

The script **refuses** the wrong CPU architecture, an unmatched first 12 instruction bytes, a wrong Scarlet/Violet immediate pair, or an unmatched global store/RET pair. It infers the slide only after those checks, and checks `.data` → `.bss` pointer relocation on every sample before reading edition fields.

## Signals collected

- `class_constructor_entry`: `FUN_0175D004` entry `X0`, then a temporary caller-return breakpoint; `class_constructor_return` checks that the constructed object actually holds `vptr == relocated(DAT_0453FFD0)` and `vptr[17] == FUN_0159B96C`.
- `target_entry`: `PC`, `LR`, `X0`, `X1`, `X8`; `LR-4` decoded as `BLR Xn` or direct `BL` when possible. Checks the branch register target and the candidate `X0` vptr slot **without assuming X0 is `this`**.
- `edition_helper_entry`: `FUN_0159BA2C` parameters `X0` (object A), `X1` (edition index 0/1) and previous `objectA+0x2C`.
- `post_global_write`: at the `RET` following the game version global store, reads `objectA+0x28/+0x2C`, `objectB+0xB0B8/+0xB0BC`, and the global 50/51 **only if** corresponding static relocation roots match in guest memory. Failed/absent mappings remain explicit, not interpreted as verified fields.

## Minimum evidence to upgrade status to `DYNAMIC_VERIFIED`

1. Verified 4.0.0 guest AArch64 code prefix, discriminant immediates, and matched global store/RET.
2. A real `target_entry` hit with `caller.type=BLR`, `caller.matches_target=true`, and a mapped `LR-4` callsite. Tail calls, trampolines, and overwritten LR are `UNRESOLVED` until individually traced.
3. At least one `class_constructor_return` with `vtable_and_slot_verified=true`. Linking the same object address to an entry `X0` is strong evidence only if the `target_entry` records `x0_constructor_return_vtable_verified=true` and its vptr also matches.
4. Post-write memory: valid singleton relocation checks; `objectA+0x2C == objectB+0xB0BC == edition 0/1`; both enable flags are 1 and global game version is 50/51. Reproduce in **both** game editions.
5. Commit a redacted evidence summary (module version, addresses relative to known main mapping, registers and hashes). Raw memory pointers and logs should remain local unless deliberately sanitized.

**Do not claim that `LR`, `X0`, or any singleton field was observed until an actual guest JSONL trace exists.** The script cannot attach to an emulator by itself, and the CI lint job is not a substitute for guest execution.
