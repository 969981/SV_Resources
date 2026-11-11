# SV 4.0.0 — virtual-slot provenance and edition object identity (Run #42932764556)

> Updated 2026-11-11. **Static Ghidra evidence only.** Source Ghidra address base is `0x00100000`; quoted addresses are Ghidra VAs and **not verified guest `main+RVA` offsets**. No existing ELF, native Ghidra database, decompiled C or `master` source was overwritten.

## Source and artifacts

- [Run #42932764556](https://github.com/969981/SV_Resources/actions/runs/42932764556): both `scarlet_main` and `violet_main` jobs completed successfully using restored, SHA-checked Ghidra 12.2 projects with `-noanalysis`.
- [Scarlet Artifact 13815949511](https://github.com/969981/SV_Resources/actions/runs/42932764556/artifacts/13815949511), ZIP SHA-256 `bd5e42b08c4d3c0611918ed97008d7896d203b0b927a3771a89fadf7d013a4ca`.
- [Violet Artifact 13817332294](https://github.com/969981/SV_Resources/actions/runs/42932764556/artifacts/13817332294), ZIP SHA-256 `4687b4363103661142b649bc803d6135066c18276f6a3f24fd93e094ef2f419d`.
- Both archives locally verified and compared. Four TSV datasets per version: `table.tsv` (97 pointer slots), `roots.tsv` (7 singleton-related globals), `refs.tsv` (1624 xrefs), `fields.tsv` (473 instruction candidates).
- `table.tsv`, `roots.tsv`, `fields.tsv` are exact cross-version matches. `refs.tsv` differs only in context of the already-known `w1=0/1` immediate at `0159B9C8`.

## A. `0x04540058` is a virtual function slot (index 17)

The 8-byte slot at Ghidra `04540058` contains `0159B96C`. Nearby `.data` has an Itanium-style function pointer table. Explicit **constructor** [FUN_0175D004](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0175d004.c) sets `*param_1 = &DAT_0453FFD0`; **destructor** [FUN_01DAD39C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01dad39c.c) likewise installs `&DAT_0453FFD0` in object vptr during destruction.

The delta `0x04540058 - 0x0453FFD0 = 0x88`, therefore this function is **vtable[17]** (zero-based, 8-byte entries) for at least one object using that vtable. `refs.tsv` contains explicit references to the table address point from `0175D020` (constructor) and `01DAD3B0` (destructor).

**Not yet verified:** a concrete `ldr [vptr+0x88] → blr` invocation with the same object's provenance, its caller timing/lifecycle, and a live guest hit. There is no direct code xref to the individual slot `04540058`, expected for vtable-mediated dynamic dispatch.

## B. 0x30-byte edition object A

The `PTR_DAT_047D8B20` relocation slot points at `.bss` storage `0x04835100` (initially zero). The [FUN_012B3900](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/012b3900.c) factory requests `0x30` bytes (8-byte alignment), zero-initializes and sets `+0x2C=0`. [FUN_012AE314](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/012ae314.c) obtains that object and installs it via [FUN_012AF1C8](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/012af1c8.c) (pointer replacement/destruction).

[FUN_0159BA2C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0159ba2c.c) writes `object_A+0x28=1` and `object_A+0x2C=0/1`. Confirmed reader [FUN_01F8331C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01f8331c.c) returns `*(u32 *)(object_A+0x2C)`; [FUN_00EEBC24](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00eebc24.c) branches on that field, setting its local `local_58` to `0x3E6` or `999` before constructing/reading an encrypted data object. These numbers are not a verified name for the edition structure. Class/RTTI name remains unknown.

## C. Large singleton object B

`PTR_DAT_047D4E00` points to `.bss` pointer storage `0x04834F40` (initially zero); it is guarded/initialized on demand via `FUN_00100190(PTR_LAB_047D4E10, PTR_DAT_047D4E00, ...)`.

In [FUN_0159BA2C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0159ba2c.c), the edition `0/1` is propagated to `object_B+0xB0BC`, with `object_B+0xB0B8=1`. `PTR_DAT_047D4E00` has 488 source xrefs, 208 distinct recognized functions in the earlier full xref index. A **bounded scan** of functions reached through seven related global roots found 473 candidate immediate offsets (430 `#0x28`, 42 `#0x2c`, one `#0xb0b8` in `FUN_0159BA2C`); there was **no direct `#0xb0bc` instruction hit**. This is **not proof of absence of readers** because large offsets may be constructed via registers or accessed in other code not captured by the scoped root-xref scan. `+0xB0BC` object identity and consumers remain **UNRESOLVED**.

## Next evidence gate

- Search instruction streams for vtable-offset `+0x88` indirect call candidates, then validate that the receiver vptr truly resolves to `0453FFD0` (not just any 0x88 offset). Existing constructor/destructor provide a concrete class anchor.
- Recover all materializations of `0xB0B8/0xB0BC`, then analyze register SSA/def-use and reads on the **same singleton B**.
- For stronger conclusions, instrument one offline guest call: compare `vptr`, `object_A+0x2C`, `object_B+0xB0B8/B0BC`, and function hit with cross-version inputs. Do not claim persistence or native class name without evidence.

Related: [full instruction candidate workflow](https://github.com/969981/SV_Resources/actions/workflows/sv-ghidra-12.2-indirect-candidates.yml). A queued or running Action must not be treated as a completed result.
