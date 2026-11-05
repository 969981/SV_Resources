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

## ZA Lua 第二轮可复核证据

- [ZA Lua 完整 Hash 与原始行号/重建源码证据](za-lua-hash-recovery.md) — 578 个精确命中，其中 566 个具第三方固定源码 `@:hashAbi` 对照，原始空白剩 195（S 117、F 75、E 3）；不宣称已原生运行验证。

## SV 4.0.0 whole-file Lua native reverse engineering

- [直接读取 main.blua / main_dynamic.blua 的 C→F 原生关系](sv-lua-native-4.0.0.md) — 23,727 条真实 `prototype` 方法赋值、1,076 个原生 C 方法拥有者、25 个未知 F 的使用上下文，以及 14 个 Gem Setting 窗口回调接收对象；**不拆分大文件**。

- ZA Lua 第三轮：详见 [完整原始行号与事件源证据](za-lua-hash-recovery.md)，累计 611 条、第三轮新增 33、剩余 S 116 / F 43 / E 3。第三方源码不是原生确认。
