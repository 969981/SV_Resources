# SV 4.0.0 — reproducible unpack / conversion roadmap

Status as of 2026-11-05: **M0 repository scaffolding and planning tools only**. The presence of directories does not mean the large Trinity archive has been extracted.

## Source coverage confirmed from the current repository

- Original ExeFS: `4.0.0/0/`, including Scarlet and Violet program variants.
- Original Violet RomFS: `4.0.0/1/` with `arc/data.trpfd` and `arc/data.trpfs`.
- `violet_4.0.0_romfs_transfer_manifest.json` describes 30 original RomFS files, 6 using 7z volumes, represented by 127 source/copy/volume artifacts in Git.
- Existing recovery: `scripts/Restore-SV-Violet-RomFS.ps1`; never point its output into the original `4.0.0/1` tree.

## Directory contract

```text
4.0.0/0/                                     # ORIGINAL ExeFS, immutable
4.0.0/1/                                     # ORIGINAL RomFS, immutable; some 90 MiB volumes
Unpack/4.0.0/exefs/<original-filename>/      # transformed ExeFS data
Unpack/4.0.0/romfs/<source-parent>/<file>/    # transformed RomFS data
Unpack/4.0.0/romfs/arc/data.trpfs/
    virtual/<virtual original path>           # gftool-extracted raw virtual files
    parsed/<virtual original path>/<file>/    # nested unpack / records
    converted/<virtual original path>/<file>/ # PNG, JSON, CSV etc.
Unpack/4.0.0/_index/                          # task/status/provenance manifests
tools/_external/                              # ignored, pinned upstream tool checkouts
```

Preserve original path case, extension and variant. Avoid path traversal and collisions. Add `_provenance.json` or a central JSONL record with input hash, archive entry offset where available, output hash, tool SHA, command, and validation evidence.

## Task breakdown and exit criteria

| Task | Work | Acceptance gate |
| --- | --- | --- |
| M0 | Layout, tool registry, pinned checkouts, planning manifest generator, tests | Planning script generates accurate per-file output paths; no upstream binaries copied |
| M1 | Verify 7z volume sets and restore the original `data.trpfs` outside Git; validate `data.trpfd` | Restored byte count and SHA-256 match source manifest |
| M2 | gftool Trinity File Explorer / library extracts TRPFS virtual files; import PokeDocs hashes | Exhaustive indexed hash/offset/path inventory, output hashes, unresolved hashes explicitly listed |
| M3 | Nested `TRPAK` and other per-file structures; classify file magic, export each to its own filename directory | Each parser has synthetic test, counts, boundary checks, and sample round-trip |
| M4 | PokeDocs FlatBuffers schemas; export structured JSON, CSV, SQLite; pkNX cross-check | Schema/tool SHA recorded; IDs/field semantics independently validated |
| M5 | Conversion: images/texture → PNG, models → inspectable exports, localized strings → UTF-8 tables, audio inventory | Preview/validation samples and original offsets retained; undecoded entries stay UNKNOWN |
| M6 | ExeFS: NSO sections, build IDs, Scarlet-Violet differences, script references | Program variant, symbol/offset mapping and binary source evidence present |
| M7 | Scarlet/Violet shared resource + code differences, links among species, items, scripts, events and text | No inferred foreign key promoted without native reference |
| M8 | Published indexes, release-sized verified batches, Obsidian cross-links, reproducible CI tests | All generated artifacts have source/tool/sha; no >100 MB Git blobs |

**Order:** M0 → M1 → M2 → M3 → M4/M5, independently M6; then M7 → M8. Prioritize `arc/data.trpfs` because it contains the virtual filesystem. WWise `.bnk/.pck`, `.trevt`, `.trpre`, `.trmdd` and `.bk2` need separate format-aware adapters rather than being treated as TRPFS archives.

## Tool integration

| Tool | Upstream | Role | Notes |
| --- | --- | --- | --- |
| PokeDocs | https://github.com/pkZukan/PokeDocs | `SV/Hashlists`, `SV/Flatbuffers` | Reference data; hash hit alone is not verified field semantics |
| gftool | https://github.com/pkZukan/gftool | TrinityFileExplorer + GFTool.Core | Main TRPFS/TRPFD extraction; current Explorer requires GFPAKHashCache.bin and oo2core_8_win64.dll |
| pkNX | https://github.com/kwsch/pkNX | SV 4.0.0 data export, cross-check | SV: dump only, not editing; Windows/.NET 10 |
| SCVI_Extract | https://github.com/psthrn42/SCVI_Extract | Legacy Python comparison | Upstream directs users to gftool; enable separately, do not use by default |

`scripts/Sync-SV-Tools.ps1` pins the source revisions into an ignored `tools/_external` folder. Building/running GUI tools is **not** implied by checkout. Do not commit external source trees, Oodle DLLs, ROM keys or redistributed game files by default.

## Reproducible commands (Windows, repo root)

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Verify-SV-Violet-RomFS.ps1 -Mode Full
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Restore-SV-Violet-RomFS.ps1 -OutputDirectory E:\Temp\SV-RomFS -RelativePath arc\data.trpfs
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
python .\scripts\Plan-SV-Unpack.py --repo . --dry-run
python .\scripts\Plan-SV-Unpack.py --repo . --create-directories
python -m unittest discover -s tests -p "test_plan_sv_unpack.py"
```

The restore and planner are distinct: the planner **does not extract containers**. M2 requires an actual validated gftool extraction adapter and real local source bytes. Do not represent those later steps as completed.

## Evidence levels

`CONFIRMED` = native bytes/tool/offset/hash reproduce; `CANDIDATE` = partial relationship; `UNKNOWN` = no grounded mapping; `REJECTED` = disproven with evidence. Keep unknown path hashes without forcing names. Coordinate additions with [provenance policy](resource-provenance.md).
