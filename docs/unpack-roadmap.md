# SV 4.0.0 — reproducible unpack / conversion roadmap

Status as of 2026-11-05: **M0 and M1 confirmed; M2 in progress**. Native TRPFD was parsed and indexed (408,641 file records in 23,589 packs). The complete 8,016,551,536-byte TRPFS was restored and SHA-256 checked in a Windows Actions runner. First two packs were actually extracted: 574 / 408,641 virtual files published, no extraction failures. Full M2 is not complete.

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
tools/                              # six vendored trees, including gftool/NxMiddleware
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
| Switch-Toolbox | https://github.com/KillzXGaming/Switch-Toolbox | General supported Switch models, textures, formats | Inspect support per file before converting |
| SCVI_Extract | https://github.com/psthrn42/SCVI_Extract | Legacy Python comparison | Full 10-file upstream source snapshot (not a submodule); not selected as default extractor |

`scripts/Sync-SV-Tools.ps1` verifies all six vendored trees, including gftool and NxMiddleware, without submodule operations. The vendored `tools/SCVI_Extract/` tree matches upstream commit `0d4f817d0756257cd5ec1c8a680ae201e8b4eec5` exactly (tree `33d0fd99e9a0787054b72b0593457161e2453bfa`). Building/running GUI tools is **not** implied by checkout. Do not commit unrelated third-party sources, Oodle DLLs, ROM keys or redistributed game files by default.

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

**Added:** `scripts/Prepare-SV-Trinity.ps1` verifies and restores only `arc/data.trpfd` / `arc/data.trpfs` outside this repo (M1), builds the hash cache from pinned PokeDocs using `scripts/Build-SV-GFPAKHashCache.py`, and optionally copies a *user-supplied local* Oodle DLL to ignored `tools/_local/`. `scripts/Run-SV-TrinityDump.ps1` invokes `tools/SV.TrinityDump` (.NET 10 + vendored gftool `GFTool.Core`) to enumerate and extract files. Output is strictly `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`. `_index/export.jsonl` records each output hash, source pack name/offset, error, and status for resume.

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

### Optional hash-cache artifact (without adding large PokeDocs lists to Git)

The [Build SV GFPAK hash cache workflow](https://github.com/969981/SV_Resources/actions/workflows/build-sv-hashcache.yml) checks out pinned PokeDocs and regenerates a BinaryWriter-compatible `GFPAKHashCache.bin` from **both** `hashes_inside_fd.txt` and `hashes_inside_trpak.txt`. Its downloadable Actions artifact includes the binary and a count/SHA-256 JSON report, retained for 7 days. Download it from the successful run's Artifacts, unzip the `bin` into `tools/_local/GFPAKHashCache.bin`, and pass `-SkipHashBuild` to the preparation script. The private Oodle DLL is *not* included. This cache is derived from public hash metadata, not the game itself.

## Five upstream tools pinned under tools/ (2026-11-05)

All six upstream tools are complete vendored source trees; gftool and NxMiddleware are fully materialized and no `.gitmodules` is needed. Do not replace or delete the vendored PokeDocs files. After a `git pull`, `scripts/Sync-SV-Tools.ps1 -VerifyOnly` can verify all source pins. The existing M2 .NET CLI project references `tools/gftool/GFTool.Core`; Hashlist generation reads `tools/PokeDocs`. See [tools README](../tools/README.md). The owner-uploaded `scripts/deps/oo2core_8_win64.dll` is used as local input and copied to ignored `tools/_local/` when no explicit DLL path is supplied. Its licensing and public repository visibility require separate attention.

## Real extraction evidence — 2026-11-05

- Original `data.trpfd` verified: SHA-256 `AFF6097D82C828019B4B4B417D23765024DAFE5BFE923528899930B3C9534FB6`, size 20,266,112 bytes.
- Real [TRPFD descriptor export](../Unpack/4.0.0/romfs/arc/data.trpfd/_index/descriptor_summary.json) recorded 408,641 active file references, 23,589 packs, 407,647 matched names and 994 unknown names. [M1 descriptor workflow](https://github.com/969981/SV_Resources/actions/runs/41974987235) succeeded; [commit](https://github.com/969981/SV_Resources/commit/93d51793ebe7b1ac08f21b2615310b8fe8ff01b4).
- Real [M2 workflow](https://github.com/969981/SV_Resources/actions/runs/41975541037) successfully restored the full `data.trpfs` from 83 7z volumes and revalidated its size/SHA-256, then extracted **2 native TRPAK packs (574 files, 1,711,444 output bytes; 574 OK, 0 FAILED)**. [M2 extracted virtual files](../Unpack/4.0.0/romfs/arc/data.trpfs/virtual/) and [SHA-256 evidence JSONL](../Unpack/4.0.0/romfs/arc/data.trpfs/_index/export.jsonl) were committed in [5f16c4f](https://github.com/969981/SV_Resources/commit/5f16c4f4f9ef660cf86954e81f88c69076e81daa).
- Remaining before all files are extracted: **23,587 packs, 408,067 active file references** (subject to missing/collision/path-format handling in future batches). One of the 574 exported files had an unknown PokeDocs path and is stored under `virtual/_unknown/2DA826151D9EA7DD.bin`, not given an invented name.

### Continuing via GitHub Actions

Use [SV M2 — extract Trinity virtual files into Unpack](https://github.com/969981/SV_Resources/actions/workflows/sv-m2-virtual-extract.yml), choose *Run workflow*, set `start_pack=2` and `max_packs=200` for the next bounded batch (fewer for a smaller test). Each ephemeral hosted runner must restore the full 83-volume TRPFS and validate SHA-256. This is not an automatic all-23k upload. Preserve source and output hashes, monitor GitHub repository size, rights, and individual Git blob limits. 
