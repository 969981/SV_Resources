# Research notebook

Store subsystem-focused notes here. Start from [the technical note template](TECHNICAL_NOTE_TEMPLATE.md) and link completed and in-progress notes in this index.

Initial proposed topics (not claims of completion):
- `scarlet-violet-exefs-diff.md` — main/NPDM Build IDs and instruction-level differences
- `trinity-container-index.md` — TRPFD/TRPFS/ONEPACK index and extraction verification
- `trevt-prefetch-format.md` — event and prefetch binary structures
- `resource-file-identification.md` — resource hashes, file magic and parser coverage

Keep evidence statuses visible. Do not present planned work as completed.

## Lua symbols (SV 4.0.0 / PokeDocs)

- [SV Lua C/E/F/S Hash 空映射恢复](sv-lua-hash-recovery.md) — 48 条 FNV-1a-64 精确 Hash 候选；保留原始文件、独立 merged TXT、可重复脚本和验证工作流。证据等级：`HASH_EXACT_CANDIDATE`，非原生运行时语义确证。
