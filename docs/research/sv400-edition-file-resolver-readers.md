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
