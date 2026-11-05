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
- `Sync-SV-Tools.ps1`: verify all six complete vendored source trees, including gftool/NxMiddleware, under `tools/` without downloads; `-IncludeLegacy` is a backward-compatible no-op. This does not build or run tools.

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
- `Run-SV-TrinityDump.ps1`: run the `tools/SV.TrinityDump/` net10.0 CLI linked to pinned gftool Core. `-DryRun` enumerates descriptors; `-MaxPacks 2` smoke test; omit for full extraction. `_index/export.jsonl` is append-only for resumability.

See exact commands in [M1/M2 execution guide](../docs/unpack-roadmap.md#m1m2-local-execution--implementation-status-2026-11-05). Do not upload your private DLL to this public repository.

## Six fully vendored upstream tools under tools/

`Sync-SV-Tools.ps1` validates all six local source trees using the pinned Git tree SHAs. The nested `tools/gftool/NxMiddleware` files are already tracked normally. The operation is read-only and requires no submodule commands or downloads. `-VerifyOnly` and `-IncludeLegacy` remain accepted for backward compatibility.

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

## SV Lua C/F 旧版源码索引

`Index-SV-Lua-CallGraph.py` 通过固定提交 `Martmists-GH/SV-Script-RE@1f843bd...` 扫描 `decompiled/` 与原始 `split/`，构建 C→F 定义、未知 C 类上下文和未知 F 所有者表。**该旧版语料不是 4.0.0 原生代码**，不覆写原始 PokeDocs 或此前 48 条候选。

`python scripts/Index-SV-Lua-CallGraph.py --external <checkout>`；使用 `--verify-only` 检查可重现性。自动化：[`index-sv-lua-context.yml`](../.github/workflows/index-sv-lua-context.yml)，文档：[C/F 证据链](../docs/research/sv-lua-hash-context.md)。

## ZA Lua Hash C/E/F/S 独立候选补全

`Recover-ZA-Lua-Hashes.py` 验证 69 个唯一字符串的完整 FNV-1a-64 Hash；其中一个名称同时命中 F 和 S 两表，共恢复 70 行。原始 PokeDocs 文件不修改，结果在 `tools/PokeDocs-Supplement/ZA/Hashlists/Lua/`。

```powershell
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 70
py -3 -m unittest discover -s tests -p test_za_lua_hash_recovery.py -v
```

研究文档：[ZA Lua Hash 恢复](../docs/research/za-lua-hash-recovery.md)。

## SV 事件引用与 Prefetch 原生路径哈希研究（2026-11-05）

- `Analyze-SV-EventPrefetch-Links.py`：从已核对的 4.0.0 TRPFD 索引逐值验证两个 TRPRE 数组，导出 746 条 TREVT 关系边、NSO 字符串地址和候选 ADRP+ADD 引用。
- `Investigate-SV-EventPrefetch-Gaps.py`：输出 82 个不在 TRPFD 的值、资源分类、真实 NSO ARM64 调用点反汇编；需 `capstone==5.0.6`。
- `Recover-SV-Prefetch-Missing.py`：从固定 PokeDocs 原始哈希表恢复 36 条经过 SV 原生 FNV-1a 变体验证的路径，46 条仍 UNKNOWN。

自动验证与按明细提交：`.github/workflows/analyze-sv-event-prefetch-links.yml`；研究记录：[SV 原生事件与哈希证据](../docs/research/sv-event-prefetch-native-links.md)。

## ZA Lua 第二轮（S/F 原始空行补全及 Haxe 重建交叉核验）

- `Recover-ZA-Lua-Hashes.py`：578 条 Hash 匹配与非破坏式合并；原文件在 `tools/PokeDocs` 保持不变。
- `Verify-ZA-Lua-Sources.py`：检查 `source-evidence.tsv`、原始 1-based 行号、第三方固定版本的 `@:hashAbi` 及 Git Blob SHA，并生成/验证 `source-line-index.tsv`、`source-audit.json`。
- [详细 Obsidian 研究文档](../docs/research/za-lua-hash-recovery.md)。

```powershell
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 578
py -3 .\scripts\Verify-ZA-Lua-Sources.py --verify-only --reconstruction-root .research/ZAScripts
py -3 -m unittest discover -s tests -p test_za_lua_source_evidence.py -v
```

## ZA Lua 第三轮（611 条精确 Hash）

恢复记录存于 `tools/PokeDocs-Supplement/ZA/Hashlists/Lua/`，重建源版本固定为 `Reisyukaku/ZAScripts@c7bc243ac4d28356dff9f06b6723330ea92247d5`。执行：

```powershell
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 611
py -3 .\scripts\Verify-ZA-Lua-Sources.py --verify-only --reconstruction-root .research/ZAScripts
py -3 .\scripts\Verify-ZA-Lua-Sources.py --scan-reconstruction --reconstruction-root .research/ZAScripts
```

## SV 4.0.0 原生 Lua：整文件分析脚本

- `Analyze-SV-Lua54.py`：直接解析完整 Lua 5.4 `main.blua` / `main_dynamic.blua`，生成基础 C→F 赋值索引；完整原始文件不拆分。
- `Continue-SV-Lua54.py`：读取基础索引 + 完整原生文件和 PokeDocs C/F/S Hashlist，生成 281 条静态 S 闭包、213 条 C 注册、4 个新 F 候选、7 条自身实例字段写入以及增强 F Hashlist。
- `Build-SV-Lua-Native-Overlay.py`：只基于公开 PokeDocs TXT 和独立候选 TSV 的纯离线再现，生成完整 F 增强版并逐条核对 FNV-1a-64。
- [原生整文件研究文档](../docs/research/sv-lua-native-4.0.0-followup.md) · [源代码研究工作流](../.github/workflows/sv-lua-native-evidence.yml)（从已验证的 Actions Artifact 使用整份源文件，不把大文件提交到仓库）。

仅发布派生的 TSV/JSON，输入原始文件只读；单靠 Hash 命中不视为原生源码命名最终确认。
