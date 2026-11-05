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

## Lua 方法定义证据（跨版本）

- [C 类与 F 方法源码结构索引](sv-lua-hash-context.md) — 18,948 条旧版原始定义，795 个未命名 C 类的文件定位；不冒充 SV 4.0.0 原生语义证据。

## ZA Lua symbols

- [ZA Lua C/E/F/S 空映射恢复](za-lua-hash-recovery.md) — 70 个 Hash 行精确匹配（69 种名称），完整候选 TSV、merged TXT、测试与 CI；上游 PokeDocs 不变。

## SV TREVT / TRPRE 原生事件与资源哈希

- [SV 4.0.0 原生关联证据：事件状态、FNV 哈希算法与 Prefetch 36 个名称恢复](sv-event-prefetch-native-links.md) — 17,714/17,760 个路径哈希关系可验证，保留剩余 46 个未知键和条件运行时语义的证据边界。
