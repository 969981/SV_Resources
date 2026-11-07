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

## SV 4.0.0 Lua：直接读取整文件的 C/S/F 原生进展

- [C 类静态 S 闭包 + F 精确名称恢复（第三轮）](sv-lua-native-4.0.0-followup.md) — 103 个 C 新增静态闭包证据，281 条 C→S；213 个 C 全局注册；4 条新增 F 完整 Hash 命中。原始 `.blua` 和 PokeDocs 均不拆分、不覆盖。
- [小型原生证据 TSV/JSON](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/) — 无原始大文件，仅函数赋值、原始 PC 和独立候选。

## ZA Lua 第四轮：未命名符号与原生证据缺口

- [ZA Lua 剩余 116 条 S 的全部引用位置及原生证据入口](za-lua-native-evidence-gap.md)：85 个核心 Haxe + 5 个事件文件；258 条声明/调用/读写引用；F 43 / E 3 保留未知；没有伪称已原生 Lua 验证。

## SV 4.0.0 第四轮 Lua C/F/S 核对

- [7 个 C 类 `SETTABUP` 注册、12 个 F 原生调用、12 个新 S Hash](sv-lua-native-4.0.0-phase4.md) — 含 `GetInt8` 的精确 FNV 计算、S 增量工作流与证据等级。

## 朱紫遭遇到 PKHeX 数据库的证据链

- [SV 4.0.0 → PKHeX Gen9 遭遇结构与实际 .pkl 对账](sv-pkhex-gen9-encounter-bridge.md) — 原生表、pkNX 聚合流程、场景与版本条件、野生/固定/团体战/活动模板差异；工具与 CI 证明参考数据，不冒充重新提取 SV 4.0.0。

## 原生 4.0.0 遭遇包精准恢复

- [SV 4.0.0 原生 61 项遭遇文件与 11 个 Trinity 包的定位、提取和 PKHeX 对账](sv-4.0.0-pkhex-native-recovery.md) — Obsidian 中区分原始索引证据、真正的 61 项文件提取证据，以及尚未闭合的 Havok TRCOL / pkNX 合法性重建。

## 朱紫 4.0.0 地图碰撞间接依赖

- [原生 TRSCN → Havok TRCOL 动态引用与 PKHeX 遭遇几何闭合](sv-pkhex-trcol-collision-closure.md) — 从 TrinitySceneObjectTemplate 的第一子对象读取 CollisionComponent union，识别真实 TrcolFilePath，定位额外包与验证 SHA，明确与 PKHeX 参考遭遇数据库的证据分界。

## 真实原生 4.0.0 → PKHeX 合法性模板生成

- [朱紫 4.0.0 原生 → PKHeX 遭遇库：野生／固定／Raid 原始算法、独立 .NET 10 CLI、SHA 证明和逐字段对账](sv-pkhex-encounter-native-regeneration.md) — 详细说明 `EncounterSlotDumper9`、`FixedSymbolDumper9`、18 张团体战原始表的生成路径；TRCOL 不齐时仍保留可独立验证的原生 Raid 输出。

- [SV 4.0.0 原生→PKHeX 真实差异与合法性回归证据（2026-11-07）](sv-4.0.0-pkhex-native-delta-evidence-2026-11-07.md)：223 个 TRCOL 全部 SHA 校验，700 条 Raid byte exact，固定 202 组地点差异（191 组地点 158），北上乡野生跨区和真实 PK9 双版本 LegalityAnalysis。
