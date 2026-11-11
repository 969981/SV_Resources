# SV 4.0.0 — native GameVersion global consumers (Run 42929409872)

**Status: cross-version static consumer chain verified; runtime readback and edition-index object provenance still unresolved.**

## Evidence and method

- Isolated [Ghidra 12.2 xref workflow Run #42929409872](https://github.com/969981/SV_Resources/actions/runs/42929409872): both Scarlet/Violet jobs **SUCCESS**; only existing SHA-verified native projects were restored using `-noanalysis`.
- Scarlet [artifact 13815611737](https://github.com/969981/SV_Resources/actions/runs/42929409872/artifacts/13815611737), SHA-256 `2c1e3951720093cd691bd884f4ca2cd0506cb00d4304d007b376d1f6ac27344d`.
- Violet [artifact 13815228583](https://github.com/969981/SV_Resources/actions/runs/42929409872/artifacts/13815228583), SHA-256 `c7c8a1e9d1780610becf477f99632c2bf489c6798c73fc19c9b90eaffb21a6d9`.
- Each ZIP includes `state_xrefs.tsv` and `pointer_origins.tsv`; both versions have 2,636 exported references across the selected targets (several huge pointer globals capped at 500 entries per target).
- **All addresses here are Ghidra VAs** (image base `0x00100000`); a direct `main+offset` mapping has not yet been validated.

## Confirmed global: `DAT_048420A8`

There are exactly **8 direct READ xrefs + 1 direct WRITE xref**, at the same locations and with the same types in both editions.

| Operation | Instruction | Containing function | Recovered role |
|---|---|---|---|
| WRITE | `0159BA24` | `0159B96C` | initializes Scarlet 0x32 / Violet 0x33 |
| READ | `0168D1B4` | `0168D1B0` | simple 32-bit value getter |
| READ | `00A612B0` | `00A60BF4` | chooses `versionA` or `versionB` data |
| READ | `01FA8950` and `01FA89B4` | `01FA86D4` | filters `raidEnemyInfo.romVer` by edition |
| READ | `00A2C3AC` | `00A2BD98` | `SET_STATE_TITLE_ROMVER_A/B` title key |
| READ | `017D25A4` | `017D2474` | passed to `FUN_01B3C408(3, gameVersion)` |
| READ | `017AA45C` | `017A9D84` | writes low byte into a small local record |
| READ | `025E50D0` | no recognized function | calling context still unresolved |

Scarlet and Violet TSVs have matching target/from/type/function rows; only the context around the two previously verified changed instructions differs.

### Independent semantic corroboration from published C

1. [`FUN_00A60BF4`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00a60bf4.c) reads `versionA`, `versionB`, and selects by `DAT_048420A8 == 0x32` (otherwise versionB) before processing `gridParam`.
2. [`FUN_01FA86D4`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01fa86d4.c) reads `raidEnemyInfo` / `romVer`: `romVer == 1` requires `DAT_048420A8 == 0x32`; `romVer == 2` requires `DAT_048420A8 == 0x33`. A zero `romVer` bypasses this particular version-check block.
3. [`FUN_00A2BD98`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00a2bd98.c) selects `SET_STATE_TITLE_ROMVER_A` versus `_B`.
4. [`FUN_0168D1B0`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0168d1b0.c) returns `DAT_048420A8` verbatim.
5. External [PKHeX GameVersion](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Game/Enums/GameVersion.cs) and [pkNX GameVersion](https://github.com/kwsch/pkNX/blob/master/pkNX.Structures/GameVersion.cs) agree: Scarlet `SL=50`, Violet `VL=51`.

**Classification:** `DAT_048420A8` is a **high-confidence game version ID global (static code + business-field corroboration)**. It is used for actual resource edition filtering, not just startup labeling. Guest memory readback and native C++ type are still unverified.

## Separate two-value edition-index path

`FUN_0159B96C` also calls `FUN_0159BA2C(object, 0 /*Scarlet*/ or 1 /*Violet*/)`, independently of writing the global 50/51 ID. Decompiled [`FUN_0159BA2C`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0159ba2c.c) writes `object+0x28 = 1`, `object+0x2C = editionIndex`, and propagates `editionIndex` to a separate resolved object `+0xB0BC` with `+0xB0B8 = 1`. These are **static observed stores**, not yet verified object identities. [`FUN_017DCD80`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/017dcd80.c) returns `&DAT_0485A098`, before indirect vtable calls in the initialization routine.

A different [`FUN_0168D1C0`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0168d1c0.c) reads `+0x2C` from a singleton reached via `PTR_DAT_047D8A00` and is used near the game ID byte in `FUN_017A9D84`. **Do not equate the two +0x2C offsets without proving pointer aliasing.**

## Upstream indirect origin correction

Of the three prior inbound references to `FUN_0159B96C`:
- `03E2E01C` belongs to `.eh_frame_hdr` (FDE index metadata), **not** a business caller.
- `0408B1F8` belongs to `.eh_frame` (unwind metadata), **not** a business caller.
- `04540058` is a genuine `.data` 64-bit pointer storing `0159B96C`; its registration or dispatch consumer has not yet been identified.

**Next:** inspect data/pointer references to `04540058`; recover object ownership and readers of `+0x2C/+0xB0BC`; compare the branch taken when `raidEnemyInfo.romVer` is absent/out-of-range; and perform controlled offline guest readback. Do not label this a save/persistence pathway.

## Integrity

No original ELF, Ghidra project, published C file, or `master` content was rewritten by this investigation.
