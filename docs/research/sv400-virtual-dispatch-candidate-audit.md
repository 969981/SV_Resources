# SV 4.0.0 — dispatcher candidate reduction and live guest breakpoint gate

**State:** Dispatch target found in vtable; no real guest PC/LR/X0 observation yet. Do not classify any candidate as `DYNAMIC_VERIFIED`.

## Static narrowing from Run #42933763803

Both game versions' saved Ghidra 12.2 export contains **13,617,357 instructions** and **14,669** generic `ldr/add [...,#0x88]` candidates. After filtering for a *loaded x-register at +0x88* followed immediately, or after one intervening instruction, by `blr` of the **same register**, or an adjacent `br`:

| Pattern | Both Scarlet and Violet |
|---|---:|
| `ldr xN,[xM,#0x88] ; blr xN` | 496 |
| `ldr xN,[xM,#0x88] ; one instruction ; blr xN` | 77 |
| `ldr xN,[xM,#0x88] ; br xN` | 19 |
| **Total syntactic candidates** | **592** |

The filtered rows (instruction Ghidra address, detected containing function, instruction context, pattern) are **exactly identical** between Scarlet and Violet. They span 230 recognized function-entry addresses; 211 instruction candidates are in unrecognized function ranges. **None proves that `xM` is the vptr of the class whose constructor installs `DAT_0453FFD0`.** Many unrelated object vtables have a `+0x88` slot.

## Anchor confirmed independently

- `DAT_0453FFD0` vtable at Ghidra `0x0453FFD0`, `vtable[17]=FUN_0159B96C` at `0x04540058`.
- `FUN_0175CEF0` allocates `0x380` bytes, calls `FUN_0175D004` constructor. `FUN_01DAD39C` installs the same class vtable while destroying.
- Native `FUN_0159B96C` entry code bytes `fd7bbfa9 fd030091 03050994`; Scarlet version data immediates `e1031f2a / 40068052`, Violet `21008052 / 60068052`. Store+ret at `entry+0xB8`: `00a900b9 c0035fd6`.
- Native game-version fields and resource suffix readers separately proven; consult [edition file resolver report](sv400-edition-file-resolver-readers.md).

## Actual guest run / evidence

Use [`sv400_virtual_dispatch_trace.py`](../../scripts/guest/sv400_virtual_dispatch_trace.py) and the [guest protocol](sv400-virtual-dispatch-guest-protocol.md). This script:
1. Refuses wrong architecture, build or machine-code bytes before arming any breakpoints.
2. Records actual `PC`, `LR`, `LR-4` opcode, `X0/X1/X8`, caller register if `BLR`, `X0`'s potential vptr+0x88, and constructor-entry/return identity with vtable check.
3. Reads 0/1 and 50/51 fields only after validating the corresponding `.data` → `.bss` relocation roots.
4. Writes JSONL evidence locally, without writing edition state to guest memory.

The [smoke-validation Actions #42936902849](https://github.com/969981/SV_Resources/actions/runs/42936902849) passed Python 3.12 syntax and **4 mocked-GDB tests**. **This is not an actual guest run**.

## Remaining gate

Open a guest AArch64 debug session for Scarlet and Violet 4.0.0 and capture at least one paired `class_constructor_return` + `target_entry` with identical object pointer, a verified call instruction `LR-4` decoding to `BLR` targeting `FUN_0159B96C`, and a `post_global_write` record proving both edition fields and the version ID. If `LR-4` is not a call (thunk/tail branch), walk the LR chain / branch target rather than claiming a caller.

All addresses in static reports are **Ghidra VAs** at image base `0x00100000`; dynamic scripts require the **absolute guest PC** checked against exact instruction bytes.
