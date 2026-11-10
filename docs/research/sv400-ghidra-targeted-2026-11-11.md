# SV 4.0.0 targeted Ghidra 12.2 — verified recovery, 2026-11-11

**Scope:** GitHub Actions [Run 42850219666](https://github.com/969981/SV_Resources/actions/runs/42850219666) (#3), input commit `e55d62ce0e0d5e4b7f6da42275f5ed808d8f0169`, separate branch `ghidra/sv400-semantic-recovery`. Both matrix jobs succeeded after SHA-256 verification of reconstructed native Ghidra projects; `-noanalysis` avoided whole-program analysis. Original `master`, ELF, databases and C files remain untouched.

Source baseline: [Run 42778907746](https://github.com/969981/SV_Resources/actions/runs/42778907746). ELF SHA-256: Scarlet `53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f`; Violet `84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30`.

Evidence ZIPs (downloaded and locally SHA-256 verified):
- [Scarlet artifact 13780532350](https://github.com/969981/SV_Resources/actions/runs/42850219666/artifacts/13780532350): `e8aff0b36fbe3a8502b6a83013d0ee539db8be389c02a4ef83270de6f3d62076`.
- [Violet artifact 13781172210](https://github.com/969981/SV_Resources/actions/runs/42850219666/artifacts/13781172210): `0604437d1f63c88de12369eaeb46ad00adba0a7ee75e0d87e47cd7d973fce663`.

These ZIPs contain per-target `.json` (instructions, bytes, CFG, callers/callees), `.asm.txt`, successful `.c`, `summary.json`, logs and restore records. Artifacts have 30-day retention and have **not** been published as Git files.

**Address-space caveat:** Ghidra reported `image_base=0x00100000`. Addresses in this report are exported **Ghidra addresses**, not yet independently confirmed as `main+RVA`. Do not transplant them directly into guest tooling; verify the segment/load-base mapping first.

## Target results (Run #3)

| Ghidra address | Scarlet | Violet | Observation |
|---|---|---|---|
| `00141150` | FAILED | FAILED | Bad instruction count / P-code constructor resolution (including `03BD8930`) |
| `00832990` | **OK** | FAILED | Violet decompiler process died on retry, despite earlier successful full-run C |
| `00CE3120` | **OK** | **OK** | Generated C byte-identical: SHA-256 `a5bd823acb433ff06bd447f1c7b1c70ea691a5d1e1cb590cbe37ca7f1c492bcc` |
| `0137F998` | FAILED | FAILED | 82,860 instructions; 180-second timeout per attempt |
| `028BFCE0` | FAILED | FAILED | 82,072 instructions; response buffer size exceeded |
| `03194648` | FAILED | FAILED | Duplicate VariablePiece |
| `0159B96C` | **OK** | **OK** | Actual changed machine instructions |

Of the **10 original failure records**, two Scarlet-only records recovered, eight are still unresolved in this targeted rerun; Violet `00832990` has *retry instability*, not newly proven distinct code. The first six targets have identical per-function instruction byte SHA-256 and exported CFG in both games.

## Isolated static semantic delta: `0159B96C`

Both games: **47 instructions, 188 bytes, 5 CFG blocks, 6 edges**, matching CFG and callee addresses. Exactly **two differing AArch64 instruction encodings**:

| Ghidra address | Scarlet | Violet |
|---|---|---|
| `0159B9C8` | `e1031f2a` / `mov w1,wzr` | `21008052` / `mov w1,#1` |
| `0159B9D4` | `40068052` / `mov w0,#0x32` | `60068052` / `mov w0,#0x33` |

The first value reaches `bl 0159BA2C`. Published [`FUN_0159BA2C` C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0159ba2c.c) indicates writing `param_1+0x2C` and propagating to another resolved object's `+0xB0BC`, with `+0x28` and `+0xB0B8` set to 1. The second value reaches `str w0,[x8,#0xA8]` at `0159BA24`, resolved by Ghidra as global `048420A8`. This establishes **local static semantic difference**, not confirmed business meaning or live-memory readback.

Instruction-stream SHA-256: Scarlet `102780ce855a11e7c4ae11b0d666089f6ba4841744dabb3e4516411fbd3271bb`, Violet `505844217f5e2389d64bfb3888427fef2a2a9a105afd7760dec95444b3661019`.

Incoming references to `0159B96C`: `03E2E01C` (INDIRECTION), `0408B1F8` (DATA), `04540058` (DATA), identical across versions. No directly resolved function caller in this export.

## Bounded classification / next steps

- `00832990`, `00CE3120`: **IDENTICAL function bytes; difference is decompilation coverage/stability**.
- `0159B96C`: **SEMANTIC (static local immediates)**; not STRUCTURAL.
- `00141150`, `0137F998`, `028BFCE0`, `03194648`: **IDENTICAL bytes / UNRESOLVED decompilation**. Keep binary comparison and reconstruction status as separate dimensions.
- `RELOCATED` and `COMPILER_OR_EXPORT_ONLY`: not demonstrated by these targeted exports.

Next: extract **all readers/writers of `048420A8`**; investigate the three indirect/data references, `FUN_0159BA2C` callers and object provenance; verify AArch64 address mapping; diagnose P-code and VariablePiece failures separately; inspect giant-function boundaries and response limits before raising decompiler timeouts. No guest testing, complete consumer-chain verification, or original published C overwrite was performed.
