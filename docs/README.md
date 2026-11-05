# Technical documentation index

All permanent technical documentation belongs in `docs/`, not at the repository root.

- [Repository layout and naming](repository-layout.md)
- [Resource provenance and verification](resource-provenance.md)
- [Research notebook index](research/README.md)
- [Technical-note template](research/TECHNICAL_NOTE_TEMPLATE.md)

## What to document
For every investigation, preserve version, Scarlet/Violet distinction, exact input file, size, SHA-256, file magic, byte offsets, methods, reproduced commands and output checks. Attach parsed schemas or scripts by relative path. Distinguish confirmed native evidence from hypotheses.

For future work create `docs/research/<topic>.md` (e.g. `trinity-trpfd-trpfs.md`, `events-trevt.md`, `exe-main-diff.md`). Add the link to `docs/research/README.md`. Generated CSV/SQLite indexes should be explicitly named and documented; never put multi-gigabyte data under docs.

## RomFS transfer

- [Violet 4.0.0 RomFS transfer, verification, and recovery](romfs-transfer.md)

## Unpack and conversion

- [SV 4.0.0 pipeline and milestones](unpack-roadmap.md)
- [SV Trinity M2 多进程全量解包与安全续跑](research/sv-m2-parallel-extraction.md) — Pack 级进程并行、单线程 Git 发布和自动检查点安全边界。
- [SV 4.0.0 非 Trinity 解包：Wwise、NSO、Bink 与状态证据](research/sv-nontrinity-unpack.md) — 实际输出、7z 恢复、可重入批处理和未支持格式。

- [Derived output directory contract](../Unpack/README.md)
- [Upstream tools and pinned source revisions](../tools/README.md)

## PokeDocs / GFPAK 缓存（Obsidian）

- [GFPAK HashCache 知识库索引](hashcache/README.md) — 支持 Obsidian Wikilink。
- [来源与 TXT/BIN 二进制格式](hashcache/format-and-sources.md)
- [SV/ZA 构建步骤与 GitHub Actions](hashcache/build-and-workflows.md)
- [来源校验、测试与故障排查](hashcache/verification.md)

## SV Lua Hash 恢复（Obsidian）

- [SV Lua C/E/F/S 未命名 Hash 补全](research/sv-lua-hash-recovery.md) — 48 条 FNV-1a-64 精确候选、证据与剩余 UNKNOWN 追踪。
- [独立补充列表与 merged TXT](../tools/PokeDocs-Supplement/SV/Hashlists/Lua/) — 源 PokeDocs 文件保持不变。

## Lua C/F 证据链

- [Lua C→F 旧版源码结构与 4.0.0 验证边界](research/sv-lua-hash-context.md) — 逐条源码赋值、父类关联和未知类上下文。

## ZA Lua Hash 恢复（Obsidian）

- [ZA Lua C/E/F/S 空白 Hash 补全](research/za-lua-hash-recovery.md) — 70 条完整 Hash 精确候选，原未知 773→703，独立补充表与脚本。

## ZA Lua 第二轮（Obsidian）

- [ZA Lua Hash/固定源码和原始行号对照](research/za-lua-hash-recovery.md) — 578 条合并候选、566 条具名重建证据、完整 1-based 原始行号索引及可复核命令。

- [ZA Lua 第三轮补全与原始行号](research/za-lua-hash-recovery.md) — 611 条 Hash 候选（599 条第三方 Haxe 注解证据），仍未知 162 条。

## SV Lua 原生 4.0.0 名称恢复后续

- [直接分析整份 BLUA：C 类静态闭包、注册关系和 F 回调补全](research/sv-lua-native-4.0.0-followup.md) — 4 个新增 F、281 条 C→S 赋值与来源证据；原始 PokeDocs 不变。

## ZA Lua 第四阶段

- [剩余 116 个 S 的第三方调用图、原始行号及只读原生二进制扫描流程](research/za-lua-native-evidence-gap.md) — 258 条引用，未更改已有 611 条 Hash 补全。

## SV Lua 第四轮原生 C/F/S 研究

- [整文件 4.0.0：7 个 C 注册、12 个 F 回调、12 个新 S](research/sv-lua-native-4.0.0-phase4.md) — 严格分离 Hash 精确命中、方法定义、字节码字段引用与未出现的符号。
