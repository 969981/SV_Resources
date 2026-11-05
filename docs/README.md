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
