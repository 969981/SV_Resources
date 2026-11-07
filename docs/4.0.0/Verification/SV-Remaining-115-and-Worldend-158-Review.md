---
title: 朱紫 4.0.0｜剩余 115 条 DLC 等级与 WorldEnd 地点 158 的回归分层
aliases: [SV400 115 Wild and 46 Fixed WorldEnd Review]
tags: [SV, 4.0.0, pkNX, PKHeX, PointData, Minior, FixedSymbol, Kitakami, Terarium, Triage]
status: ORIGINAL_SOURCE_EVIDENCE_CORRELATED_NOT_NATIVE_ALGORITHM_FIXED
updated: 2026-11-07
---

# 为什么要将最后两组问题分开处理

原始 61+223 SHA 完成后，[[SV-400-PointData-FixedSymbol-Source-Trace]] 与 [真实 Actions #42373962443](https://github.com/969981/SV_Resources/actions/runs/42373962443) 证明 666/666 个原生野生最终模板都有 PointData 候选来源，固定模板 189/189 有 FixedSymbol.TableKey 来源，五张原生 PKHeX 格式 .pkl SHA 未改变。但这只是原生来源关联；三张普通 Raid 与 PKHeX 参考一致，野生和固定表并未完全相同。

等级合并前能看到 PKHeX 参考区间的 551/666 条，应继续检查 `PaldeaEncounter.Absorb()` 和 PointData 旗标。另有 **115 条参考等级在合并前也不存在**，不能靠拆开合并结果得到。这些需要独立研究原始 DLC 等级、物种和地区来源。

## 115 条等级异常的真实分层

| 指标 | 数量 |
|---|---:|
| 北上乡原始 `encount_data_su1.bin` | 22 |
| 蓝莓学园原始 `encount_data_su2.bin` | 93 |
| 地点 176 + 194 | 78 |
| 小陨星 National Dex 774 | 35 |
| PKHeX 参考区间严格或相等地落在原生区间内 | 58 |
| 原生区间落在 PKHeX 参考区间内 | 54 |
| 参考区间完全低于原生区间 | 3 |

从源头得知 **58 条更像原生区间过宽，54 条反而更像原生区间过窄**；因此不能用“禁用吸收/合并”一招解决 115 条。以上仅表示与固定版本 PKHeX 参考的区间关系，不表示真实游戏一定采用哪一个。

原始 `PointData` 文件、point index、XYZ 和合并前后区间来自实际追踪 CSV；脚本 `scripts/Triage-SV-Remaining-115-Wild-and-Worldend-158.py` 验证 115 条确实是 666 条已验证来源记录的多重集合子集，并按照 DLC 地区、地点、物种、源点索引生成独立优先排查 CSV。

### 优先查蓝莓学园 176/194 与小陨星

- 176/194 累计 78 条，需要对比 terarium 原始 `AreaInfo.ActualMin/MaxLevel`、`AdjustEncLv`、各处 `PointData.LevelRange` 与 `EncountPokeDataArray` 的有效条件。
- 35 条 774 是小陨星（Minior），二进制 PKHeX wild 表的 form 强制 31；trace 的原生 Form 必须在**解码匹配时**按 `EncounterSlotDumper9` 转换，而非把 31 当成另一个原始游戏形态。
- `point_criteria_json` 记录的是每条来源候选的有限样本，切不可把其中不存在的 criteria 误判成全体源数据都不存在。

## 236 条固定 WorldEnd→158 反事实与 47 次回归

真正从原始 `FixedSymbol` 事件选择的 236 条尝试省略 `subarea_su01worldend` 推断出的地点 158 后，参考模板匹配从 774/977 增加到 917/977；同时破坏 47 次原本正确的匹配。**这不是合法性修复。**

读 `SV400_236_Worldend_158_Source_WhatIf.csv` 时必须区别：

| 统计层 | 数值 | 意义 |
|---|---:|---|
| 单行标记新增匹配 | 189 | 逐行 bool 从 0→1 |
| 单行标记丢失匹配 | 46 | 逐行 bool 从 1→0 |
| 单行标记前后均匹配 | 1 | 逐行 bool 都为 1 |
| 完整模板多重集合新增匹配 | 190 | 正确总体计数 |
| 完整模板多重集合丢失匹配 | **47** | 正确总体计数 |

多重集合计数之所以不同于逐行 bool，是因为多条模板可能共享相同的物种、等级和地点；不能声称可以直接确定具体 47 个唯一模板 ID。必须保留原始 `game + TableKey + TableIndex` 和最终二进制完整字段，再使用独立来源约束消歧。

### 可信下一步（尚未执行正式改造）

1. 在 `FixedSymbolDumper9` 中记录每个 `fixed_wander` 候选的实际 `AreaInfo.Tag/Type`、候选地区 `LocationNameMain`、原始 TRSCN 以及最终定位的 `.trcol` SHA；尤其比较被错误过滤的 TableKey 与可过滤的 TableKey，在源数据上查原因而不是物种白名单。
2. 对 115 条中的 93 条蓝莓学园集中项单独做等级来源 A/B。实验仅修改一个条件、保持 61+223 原始资源和三张普通 Raid SHA 不变；保存每次野生/固定的完整多重集合差异，而不仅看总条数。
3. 通过真实游戏中生成的 PK9 运行 `PKHeX.Core.LegalityAnalysis`，检查 PID/EC/IV/异色、宝可梦来源、地点以及剧情条件。参考库一致与真实游戏合法性是两条独立证据链。

## 复现

基于已经在 master 验收通过的真实 GitHub Actions 源数据，而非合成表：

- 原生等级证据：[Actions #42373962443](https://github.com/969981/SV_Resources/actions/runs/42373962443)；含 `SV400_115_Reference_Level_Not_Present_Premerge.csv`、完整 666 条对账及带源 SHA 的审计 JSON。
- 固定符号来源实验：[Actions #42374514212](https://github.com/969981/SV_Resources/actions/runs/42374514212)；含 236 条源事件反事实、`917/977` 对账与原始固定表/JSONL SHA。
- 本次交叉分层脚本：`scripts/Triage-SV-Remaining-115-Wild-and-Worldend-158.py`；工作流 `.github/workflows/sv-remaining-115-worldend-review.yml` 会验证全部 115/236 条、输入哈希和参考多重集合差异，输出 CSV 与 JSON。

关联：[[SV-400-PointData-FixedSymbol-Source-Trace]]、[[SV-400-Fixed-Worldend-158-Source-Counterfactual]]、[[SV-Native-To-PKHeX-Databases]]。
