# SV 4.0.0 — Scarlet/Violet Ghidra 12.2 full ELF research

## Source identity

| Version | Source | Derived ELF SHA-256 |
|---|---|---|
| Scarlet | `4.0.0/0/scarlet_main` | `53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f` |
| Violet | `4.0.0/0/violet_main` | `84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30` |

The SHA-256 checks apply to the already committed `Unpack/4.0.0/exefs/<name>/<name>.elf`, not just the NSO. Workflow: `.github/workflows/sv-ghidra-12.2-full.yml`. Native tool: official **Ghidra 12.2** and **JDK 25**; release archive hash `2c2cd776db3c1f6a097ba418922378ac3649cadd5e844a6f5f088ae628a7be67`.

## Analysis evidence

Each game has its own editable Ghidra `.gpr` + `.rep` database. Headless import/auto-analysis is supplemented with code-range-validated `.eh_frame` FDE hints where available. Iteration exports every **Ghidra-discovered** function and attempts a C decompilation for each, retaining `OK`, `FAILED`, or `EXCEPTION` statuses in both SQLite and `decompiled_index.csv`. Also exported: memory blocks, every analyzed instruction with bytes, defined data, references and symbols. This is **Ghidra-generated C pseudocode**, not original Nintendo source.

## Committed layout

`Unpack/4.0.0/exefs/{scarlet_main,violet_main}/ghidra12.2/`:

- `project/SV400.gpr` and `project/SV400.rep/`: original editable Ghidra native project; `project_parts/` contains byte-exact shards of oversized internal files.
- `database/*.partNNNN.bin`: **raw, losslessly reconstructable SQLite byte chunks**, each at most 45 MiB, protected by SHA-256 and byte length.
- `ndjson/events.partNNNN.ndjson`: plain NDJSON records; no JSON line crosses a boundary. Each part is independently line-parseable.
- `c/<function-address>.c`: a separate Ghidra C output for every successful decompilation. Failures remain indexed rather than being silently discarded.
- `parts_manifest.json`, `sv400_ghidra_manifest.json`, `decompiled_index.csv`, `fde_recovery.csv`: checksums, analysis counts and recovery audit.

The cross-version address-aligned function comparison is in `docs/research/sv400-ghidra-diff/`. A matching entry address is a **CANDIDATE** correspondence, not proof of identical function semantics.

## Byte-exact reconstruction

```bash
python3 tools/ghidra/sv/sv400_restore_split.py \
  --source Unpack/4.0.0/exefs/scarlet_main/ghidra12.2 \
  --out /tmp/sv-scarlet-restored
```

The restore script validates every part SHA-256 and the final aggregate SHA-256, runs `PRAGMA integrity_check`, and recreates split native project files. Open `/tmp/sv-scarlet-restored/project/SV400.gpr` in Ghidra 12.2. Run separately for Violet.

## Limitations

The exporter exhausts Ghidra's discovered function set **after** optional FDE recovery, but neither FDE nor Ghidra auto-analysis can prove every possible machine-code function is recovered. A decompilation failure is documented as failure, not replaced with guessed code. A successful analysis does not establish runtime/UI behavior. Outputs must pass original ELF hash, full-summary, manifest, native-project existence, and reconstruction checks before being labeled published.
