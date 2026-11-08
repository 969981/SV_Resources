---
title: SV 4.0.0｜FixedSymbol 完整 20B 序列化来源与重复模板身份
tags: [SV, 4.0.0, FixedSymbol, PKHeX, Native, TRCOL, WorldEnd]
status: TRACE_CODE_READY_REAL_ORIGINAL_RERUN_PENDING
updated: 2026-11-08
---

# 为什么需要固定模板的完整 20 字节

已验证的原始 61+223 资源回放（Actions #42381948798）证明 236 条 WorldEnd→158 反事实记录有 512 次严格 Havok 命中。逐行参考标签显示 189 改善、46 损失、1 歧义，但真正的固定模板多重集合是 190 获益、47 损失。不能将逐行布尔标签解释为 46 个已确定必须保留 158 的独立实体。

原始来源审计额外发现 4 组 8 行具有同一 `(game, TableKey, tableIndex, species, level, Location[4])` 观测指纹但判定标签相反：68/69、71/72、152/153、155/156。参考原生完整模板格式每条 20 字节，还包含形态、保底 IV、太晶、性别、特性与四个招式，因此必须记录原生完整字节再消歧。

## 新增只读字段

在 `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/FixedSymbolDumper9.cs` 的 `fixed_serialized` 与 `fixed_serialized_adjusted` JSONL 事件中追加：

- `originalFixed20Hex`：调用原始 `WriteFixedSymbol` 后立即返回的确切 20B 记录（40 位十六进制字符串），不从 PKHeX 参考反推。
- `originalFixed20WasNew`：本次调用是否在原始唯一记录 List 中实际新增加该记录；重复记录不被重复写入。
- `originalFixed20SourceInsertIndex`：加入排序前原始唯一记录 List 的 0-based 索引，重复写入时为原记录索引；**不是最终 .pkl 的排序后索引**。

修改仅把 `WriteFixedSymbol` 改为返回已经生成的原始 `byte[]`。原有 `if (!exist.Any(... SequenceEqual(...))) exist.Add(result)` 去重条件及排序、写出不变；追踪仍由 `EncounterTraceSV.Enabled` 限制。

## 验收门槛

1. PR 编译 `pkNX.EncounterCLI` 成功；旧版固定模板原生 .pkl 的 SHA 不变。
2. master 的 `sv-native-point-trace.yml` 使用原始 83 个 7z 分卷与 61+223 SHA 输入执行一次真正的 `--trace-fixed-only`，且在其新 JSONL 中出现字段。
3. 每个 HEX 必须是 40 字符、可解码为 20 字节，数值与原生 `fixed_serialized` 的 species/form/level/locations 严格一致。
4. 236 条源 `TableKey` 与完整原始 HEX 做多对多关联，再与固定的 PKHeX 参考 20B 模板多重集合匹配；禁止仅凭行号或 TableKey 强行映射。
5. 最终是否保留地点 158 仍需要真实游戏生成/捕获的 PK9、剧情旗标与运行时移动信息；一致性不是游戏合法性证明。

旧 Actions #42381948798 的 trace 没有完整 HEX，所以不能把本 PR 的源码变更描述为已经通过真实原始产物验证。新数据跑出前状态保持 `TRACE_CODE_READY_REAL_ORIGINAL_RERUN_PENDING`。
