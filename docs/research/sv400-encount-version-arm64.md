# SV 4.0.0 EncountPokeData.Version → native ARM64 branch

**Status: STATIC_TRIAGE_READY; NATIVE_VERSION_BRANCH_NOT_YET_CONFIRMED.**

## Reused evidence (do not rerun full Ghidra)

- Existing Ghidra 12.2 data: `Unpack/4.0.0/exefs/{scarlet_main,violet_main}/ghidra12.2/database`. Original large SQLite has a lossless manifest containing SHA-256 for each shard and the concatenated database. This work restores **only SQLite** to a temporary path.
- Game-executable identity and hashes: `docs/research/sv400-ghidra-12.2.md`. Never edit the ELF, .gpr, .rep, or already published C.
- Source schema: `tools/pkNX/FlatBuffers/SV/World/Schemas/EncountPokeDataArray.fbs`: field #28 is `Version:VersionTable`; `VersionTable.fbs` defines bools `A` and `B`. The FlatBuffers *vtable field entry* offset is `4 + 2*28 = 0x3c`, not an invariant native data pointer offset. Nested `A` and `B` vtable offsets are `0x4` and `0x6`.
- Exporter: `LocationStorage.IsAbleToSpawnAt()` explicitly assumes version can be ignored for union sessions. That is an **exporter choice**, not native runtime proof.
- Existing PKHeX: `Encounters9.Slots` loads a single `GameVersion.SV` wild template set. That does not prove the native game ignores source version.

## Original source VersionTable audit

Values were decoded from three already committed original FlatBuffers binaries, not inferred from final species lists:

| Original source | Rows | A+B | Only A | Only B |
|---|---:|---:|---:|---:|
| Paldea `pokedata_array.bin` | 449 | 403 | 23 | 23 |
| Kitakami `pokedata_su1_array.bin` | 252 | 240 | 6 | 6 |
| Terarium `pokedata_su2_array.bin` | 254 | 246 | 4 | 4 |
| Total | **955** | **889** | **33** | **33** |

Original *criteria* counts are not final PKL slot counts.

## Run the targeted read-only candidate search

```bash
python3 tests/test_sv400_encount_version.py
python3 scripts/Trace-SV400-EncountVersion.py \
 --source Unpack/4.0.0/exefs/scarlet_main/ghidra12.2 \
 --top 100 --out /tmp/scarlet_main.json
python3 scripts/Trace-SV400-EncountVersion.py \
 --source Unpack/4.0.0/exefs/violet_main/ghidra12.2 \
 --top 100 --out /tmp/violet_main.json
```

The scanner validates all 59 or corresponding SQLite shards, reconstructs only the original SQLite, checks the original ELF hash against SQLite metadata, and uses the existing instruction/refs/decompilation indexes. It searches `LDRH` / offset `#0x3c` and related immediate patterns, scores nearby `LDRSW`, `SUB`, inner field `LDRH`, `LDRB`, conditional branches and available string refs; emits top original disassembly, Ghidra decompiler excerpts and call references.

**Scoring is not proof.** Many other FlatBuffers tables can have a field at the same vtable offset. Compiler optimization can factor the lookup into helper calls. A function address should not be renamed based on this heuristic alone.

The PR workflow `.github/workflows/sv400-encount-version-branch.yml` runs the synthetic test and each of the two existing SQLite candidates separately, uploads reports, and produces a same-RVA comparison; no new full Ghidra analysis. The workflow does not automatically commit a generated game database or write source data.

## Promotion criteria (static candidate → native branch)

1. Prove the candidate object's provenance to `EncountPokeData`; identify a **real** field-28 vtable lookup (not an unrelated field 28).
2. Follow the VersionTable pointer and A/B booleans; capture exact AArch64 RVA, instruction bytes, containing function, CFG and callers.
3. Identify game-version context loaded for predicate: **local game version**, multiplayer host version, visitor version, or other selection rule.
4. Trace the allow/deny path to the actual spawn candidate and RNG roll; note which branch is taken for A-only/B-only records.
5. Compare both game versions on consistent original RVA provenance, then use *read-only* runtime observations of opposite-version encounters (including union sessions) to validate behavior.

Unverified items retain `CANDIDATE` or `NOT_OBSERVED` status. Never infer that all version restrictions are absent just because the PKL is a unified file.
