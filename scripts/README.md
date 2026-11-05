# Scripts and executable tooling

Place maintained PowerShell/Python tools here. Do not put scripts directly under `4.0.0/`, `docs/` or the repository root.

## RomFS transfer tools (added by the task-package bootstrap)
- `Sync-SV-Violet-RomFS.ps1`: read-only source transfer, >90 MiB 7z volumes, per-file SHA-256, explicit 600 MiB Git batch commits and pushes.
- `Verify-SV-Violet-RomFS.ps1`: full manifest, archive and optional source-hash checks.
- `Restore-SV-Violet-RomFS.ps1`: restore to a separate directory, never over the Git archive.
- `Check-RepoLayout.ps1`: lightweight repository layout validation.

Windows example:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1 -DryRun
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Verify-SV-Violet-RomFS.ps1 -DeepArchiveTest -CompareSource
```

Source defaults to the owner's `X:\ROMS\Nintendo Switch\Pokemon\Pokemon Violet\4.0.0\..._NCA\1`. Destination defaults to `E:\Test\SV_Resources\4.0.0\1`. 7-Zip defaults to `D:\Tool\7-Zip\7z.exe`.

For every new script, document required tooling, inputs, outputs, safe default behavior, command examples, supported versions and related evidence in `docs/`. Never hardcode secrets. Keep temporary data outside tracked directories.

## Shared helper and synthetic validation

`SV-RomFS.Transfer.psm1` contains the shared hashing, 7-Zip, manifest, and Git safety helpers. `Test-Transfer-Synthetic.ps1` uses generated files and a temporary local bare remote; it never pushes to the configured GitHub repository.

Run the synthetic test and repository layout check with:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\tests\Test-Transfer-Synthetic.ps1
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Check-RepoLayout.ps1
```

Use `-NoPush` to complete local verification and commits while a remote is unavailable; a later normal run retries pending pushes. Use `-MaxFilesPerRun N` for a bounded checkpoint run. Parameterize `-ArchiveThresholdBytes`, `-VolumeSize`, and `-BatchTargetBytes` for synthetic transfer tests.

## SV extraction planning and external tool source

- `Plan-SV-Unpack.py`: generate `Unpack/4.0.0/_index/unpack_plan.json` and, optionally, empty per-file output directories from the exact existing manifest. It **does not extract any resources**. Use `--dry-run` first, then `--create-directories`; `--force` is required to overwrite a prior plan.
- `Sync-SV-Tools.ps1`: initialize/verify the remaining gftool submodule and verify four complete vendored source trees under `tools/`; `-IncludeLegacy` is a backward-compatible no-op. This does not build or run tools.

```powershell
python .\scripts\Plan-SV-Unpack.py --repo . --dry-run
python .\scripts\Plan-SV-Unpack.py --repo . --create-directories
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
python -m unittest discover -s tests -p test_plan_sv_unpack.py
```

Task tracker: [SV unpack roadmap and issues](../docs/unpack-roadmap.md). M0 planning tests passed on GitHub Actions; actual TRPFS extraction remains M1/M2 pending.

## M1 + M2: Trinity local batch extraction

- `Prepare-SV-Trinity.ps1`: restore/verify `arc/data.trpfd` and `data.trpfs` to outside-repo workdir; regenerate hash cache from PokeDocs; optionally stage a user-provided Oodle DLL privately.
- `Build-SV-GFPAKHashCache.py`: deterministic Python writer for the .NET BinaryWriter cache format; accepts multiple `--hashlist` files and writes ignored `tools/_local/GFPAKHashCache.bin`.
- `Run-SV-TrinityDump.ps1`: run the `tools/SV.TrinityDump/` net8.0 CLI linked to pinned gftool Core. `-DryRun` enumerates descriptors; `-MaxPacks 2` smoke test; omit for full extraction. `_index/export.jsonl` is append-only for resumability.

See exact commands in [M1/M2 execution guide](../docs/unpack-roadmap.md#m1m2-local-execution--implementation-status-2026-11-05). Do not upload your private DLL to this public repository.

## Five upstream tools under tools/ (one submodule, four vendored trees)

`Sync-SV-Tools.ps1` initializes/verifies only `tools/gftool` as a submodule and verifies four full vendored trees (`tools/PokeDocs`, `tools/SCVI_Extract`, `tools/pkNX`, `tools/Switch-Toolbox`) by exact Git tree SHA. Run `git submodule update --init --recursive` after pulling only for gftool. `-VerifyOnly` validates pinned sources without downloads; `-IncludeLegacy` remains a no-op for backward compatibility.

`Prepare-SV-Trinity.ps1` can automatically take the **existing** `scripts/deps/oo2core_8_win64.dll` as runtime input if `-OodleDllPath` is omitted. It stages a copy under ignored `tools/_local/` while leaving `scripts/deps` unchanged.

## PokeDocs TXT → GFPAKHashCache.bin（SV / ZA）

- `Build-SV-GFPAKHashCache.py`：底层转换器；单目标 BIN，可传多个 `--hashlist`，保留旧调用兼容性。
- `Build-PokeDocs-HashCaches.py`：SV/ZA 双游戏独立生成、逐条二进制验证、来源 SHA-256 和 `provenance.json`；不访问网络，也不依赖 ROM。

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --overwrite
py -3 .\scripts\Build-PokeDocs-HashCaches.py --verify-only
py -3 .\scripts\Build-PokeDocs-HashCaches.py --game ZA --overwrite
py -3 -m unittest discover -s tests -p "test_*.py" -v
```

原始 PokeDocs **完整实体快照**在 `tools/PokeDocs/`，不是 submodule。CI 中完整镜像、生成及提交的 YAML 位于 `.github/workflows/vendor-pokedocs.yml`；单 SV Artifact 工作流是 `build-sv-hashcache.yml`。Obsidian 技术说明：[docs/hashcache/README.md](../docs/hashcache/README.md)。

## SV Lua Hash 空行补全

`Recover-SV-Lua-Hashes.py`：使用固定源 `tools/PokeDocs/SV/Hashlists/Lua`，对已知名称进行数字替换、道馆类别替换及首字母大小写变化，再用 **完整 FNV-1a-64** 匹配未命名目标。产物包括 `recovered.tsv`、每种 C/E/F/S 的 `*.merged.txt` 和 `recovery-report.json`，写入独立 `tools/PokeDocs-Supplement/SV/Hashlists/Lua/`，原始 PokeDocs 不会被覆盖。

```powershell
py -3 .\scripts\Recover-SV-Lua-Hashes.py --min-recovered 48
py -3 .\scripts\Recover-SV-Lua-Hashes.py --verify-only --min-recovered 48
py -3 -m unittest discover -s tests -p "test_sv_lua_hash_recovery.py" -v
```

GitHub Actions：[recover-sv-lua-hashes.yml](../.github/workflows/recover-sv-lua-hashes.yml)；Obsidian 技术文档：[sv-lua-hash-recovery.md](../docs/research/sv-lua-hash-recovery.md)。

## Event TREVT / Prefetch TRPRE native unpack

`Unpack-SV-EventPrefetch.py` parses the three Violet 4.0.0 files directly as FlatBuffers, with exact source SHA-256 checks, CSV/JSON output, and provenance. Verify published results: `py -3 scripts/Unpack-SV-EventPrefetch.py --repo . --verify-only`. Regenerate: add `--overwrite`. See [TREVT/TRPRE research](../docs/research/trevt-prefetch-format.md).
