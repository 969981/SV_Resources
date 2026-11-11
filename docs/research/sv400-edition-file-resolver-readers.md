# SV400 4.0.0 — edition-dependent file resolver (static)

**New finding from Run #42933763803 (Scarlet complete):** the full instruction scan of **13,617,357** Ghidra instructions identified `FUN_00E55738`, which **reads both** `param_2+0xB0B8` and `param_2+0xB0BC`. See [published C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00e55738.c).

Simplified original decompilation semantics:
```cpp
if (*(char *)(param_2 + 0xB0B8) != 0) {
    char *ext = strrchr(filename, '.');
    if (ext != nullptr) {
        uint16_t edition_char = (uint8_t)(*(char *)(param_2 + 0xB0BC) + '0');
        FUN_00E5587C(..., &edition_char, &ext);
        FUN_00E55910(...);
    }
}
```
The `+0xB0B8` field **gates filename-version adjustment**; `+0xB0BC` is an **edition index** `0/1` converted to ASCII `'0'/'1'`. This supplies the previously missing static reader-side business behavior for the two fields written by [FUN_0159BA2C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0159ba2c.c). **Remaining caveat:** proving that the `param_2` of `FUN_00E55738` in live execution aliases the singleton obtained via `PTR_DAT_047D4E00` requires caller argument provenance / runtime readback.

The whole-instruction scan yielded **5** instruction-text matches of `#0xB0B8/#0xB0BC`: two real small-immediate accesses (`00E55754`, `0159BAD0`) and three `MOVK` matches shifted to 16 or 48 bits (not evidence of field access). These distinguish field logic from coincidental 16-bit subwords in other constants.

**Vtable:** Ghidra `04540058` is `vtable[17]` at `DAT_0453FFD0 + 0x88`, proven by [FUN_0175D004](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0175d004.c) constructor and [FUN_01DAD39C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01dad39c.c) destructor assigning the same vptr. A scan found **14,669** generic load/add references to `#0x88`; these **cannot** identify the true dynamic dispatcher without receiver pointer-type linkage.

**Edition object A:** [FUN_012B3900](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/012b3900.c) allocates a 0x30-byte object with `+0x2C=0`, [FUN_012AE314](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/012ae314.c) installs it via `FUN_012AF1C8`, and [FUN_01F8331C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01f8331c.c) reads `+0x2C`. Dynamic object identity remains unverified.

This research uses original published Ghidra artifacts and read-only new Actions; original ELF, Ghidra DB and `master` were not modified. All addresses above are Ghidra VAs with image_base 0x00100000.


## Resolved filename suffix (further two-function proof)

[RUN #42933763803](https://github.com/969981/SV_Resources/actions/runs/42933763803) completed successfully **in both versions**; their `indirect_candidates.tsv` outputs are byte-identical, including 13,617,357 decoded instructions and the five literal-offset matches.

[Native FUN_00E5587C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00e5587c.c) explicitly starts a suffix with `'_' `, appends the one-character edition digit, then appends the original extension from `strrchr(path,'.')`. [Native FUN_00E55910](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00e55910.c) extracts the original filename stem and resolves paths using the constructed suffix.

For a compatible resource name `resource.ext`, the edition-specific candidates are therefore `resource_0.ext` (Scarlet) and `resource_1.ext` (Violet). This applies **when the version-variant path branch is enabled**; it does not prove that all resources have two files or that wild encounter tables necessarily use this suffix system.

The `FUN_00E55738` `param_2` pointer alias to the `PTR_DAT_047D4E00` singleton must still be proven from caller arguments. A separate [direct-callers workflow](https://github.com/969981/SV_Resources/actions/workflows/sv-ghidra-12.2-direct-callers.yml) will provide source callsites; do not treat a running job as complete.


## Closure of singleton B → resolver callsites (Run #42934628024, Scarlet)

Direct caller export revealed **five** call instructions to `FUN_00E55738`. Four containing functions were recovered in C:

- [`FUN_00E54378`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00e54378.c)
- [`FUN_011798B4`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/011798b4.c)
- [`FUN_014903F8`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/014903f8.c)
- [`FUN_0175E858`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0175e858.c)

All four explicitly pass `*(void **)PTR_DAT_047D4E00` as the *logical edition object argument* to `FUN_00E55738` after the singleton guard. The fifth call at Ghidra `0x021A47FC`, although not in a recognized function, has direct AArch64 provenance: `ldr x8,[root+0xE00] → ldr x0,[x8] → bl FUN_00E55738`. The callee uses a hidden aggregate-result pointer in **X8**; its logical `param_2` is X0, and its third logical parameter is X1. Do not treat the first Ghidra C parameter as X0 without this ABI distinction.

This closes the **static same-instance chain** from `PTR_DAT_047D4E00` to `+0xB0B8/+0xB0BC` readers and `_0/_1` resource suffix resolution. Dynamic guest call/return and persistence remain unverified.

`FUN_0175CEF0` separately allocates a **0x380-byte** object and invokes `FUN_0175D004`, which installs virtual table `DAT_0453FFD0`. The edition-setting method `FUN_0159B96C` occupies slot `vtable[17]`. An actual `vptr+0x88` caller for this specific object (not generic offset matches) is still unresolved.
