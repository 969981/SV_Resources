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

## GitHub issue tracking

M0 is a repository preparation milestone, **completed** by commits [358b3bdd](https://github.com/969981/SV_Resources/commit/358b3bdd25b28874c2ce5f7b0adb43f3c88a6f69) and [f2c4691](https://github.com/969981/SV_Resources/commit/f2c4691ce3e0cd1e6f2f3f68beef3a576fdf9185).

- [M1 — 恢复并校验原始 Trinity 容器](https://github.com/969981/SV_Resources/issues/1)
- [M2 — gftool 提取虚拟文件系统](https://github.com/969981/SV_Resources/issues/2)
- [M3 — TRPAK / 内层格式解析](https://github.com/969981/SV_Resources/issues/3)
- [M4 — FlatBuffers 与 pkNX 对账](https://github.com/969981/SV_Resources/issues/4)
- [M5 — 图片、文本、模型与音频加工](https://github.com/969981/SV_Resources/issues/5)
- [M6 — ExeFS 分析](https://github.com/969981/SV_Resources/issues/6)
- [M7 — 双版本与原生 ID 交叉证据](https://github.com/969981/SV_Resources/issues/7)
- [M8 — 增量发布、Obsidian 与回归测试](https://github.com/969981/SV_Resources/issues/8)

Synthetic planner tests: [GitHub Actions](https://github.com/969981/SV_Resources/actions/workflows/validate-unpack-plan.yml). This validates script behavior on generated fixtures only, **not actual TRPFS extraction**.

## M1/M2 local execution — implementation status (2026-11-05)

**Repository evidence:** `docs/verification/violet_4.0.0_romfs_verification.json` recorded Full mode with 326/326 checks passed, 0 failures, source comparison enabled, before this M2 pipeline was introduced. This proves the archived originals were previously verified; it does **not** mean restored contiguous files or the new gftool-based extractor have been run.

**Added:** `scripts/Prepare-SV-Trinity.ps1` verifies and restores only `arc/data.trpfd` / `arc/data.trpfs` outside this repo (M1), builds the hash cache from pinned PokeDocs using `scripts/Build-SV-GFPAKHashCache.py`, and optionally copies a *user-supplied local* Oodle DLL to ignored `tools/_local/`. `scripts/Run-SV-TrinityDump.ps1` invokes `tools/SV.TrinityDump` (.NET 8 + pinned gftool `GFTool.Core`) to enumerate and extract files. Output is strictly `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`. `_index/export.jsonl` records each output hash, source pack name/offset, error, and status for resume.

```powershell
# Once on your own Windows computer, under the cloned repository:
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1

# Save your privately supplied oo2core_8_win64.dll somewhere you control.
# Example work path OUTSIDE the repository (enough free disk space required):
$work = 'E:\Test\SV_Work\4.0.0\romfs'
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Prepare-SV-Trinity.ps1 `
  -Workspace $work -OodleDllPath 'D:\Private\oo2core_8_win64.dll' -WithTrpakHashes

# Parse descriptors / count expected packs without extracting:
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Run-SV-TrinityDump.ps1 `
  -Workspace $work -DryRun

# Smoke-test two packs first; then run without MaxPacks for full extraction:
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Run-SV-TrinityDump.ps1 `
  -Workspace $work -MaxPacks 2
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Run-SV-TrinityDump.ps1 `
  -Workspace $work
```

Both scripts are designed to fail closed: refuse source output overlap, missing SHA, invalid paths, stale files or failed decompression, and never overwrite an existing unverified virtual file. Unrecognized name hashes are written under `virtual/_unknown/<16-hex-hash>.bin` and stay unknown. M2 is **implemented but not marked verified** until tested on a Windows host against the real container and audited report. No external executables, copyrighted Oodle DLL or hash-cache binary is committed.

Tool reference: gftool currently exposes a Windows Forms Explorer, not a ready CLI batch dump. The local batch exporter uses the same `GFTool.Core` structures/decoder rather than automating UI clicking.
