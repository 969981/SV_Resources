---
title: SV 4.0.0｜蓝莓学园 176/194 → 186 跨区损失与固定符号 158 模板身份门槛
aliases: [SV400 176194186 Identity Gate, SV400 WorldEnd 158 Duplicate Source Fingerprint]
tags: [SV, 4.0.0, pkNX, PKHeX, PointData, FixedSymbol, WorldEnd, TRCOL, source-provenance]
status: ACTUAL_NATIVE_AB_AND_SOURCE_IDENTITY_AUDITED_NOT_GAMEPLAY_LEGALITY
updated: 2026-11-08
---

# 真实来源与不可推断的边界

本笔记使用 [真实 Actions #42381948798](https://github.com/969981/SV_Resources/actions/runs/42381948798) 的 **61 个原始游戏输入 + 223 个 SHA256 核验 TRCOL** 生成追踪，检验新一轮独立审计，而非读取参考 PKHeX 当成游戏输入。原生重建了完整的 Wild/Fixed/普通 Raid；原始 pkNX 基线为 29,840 野生槽。固定 PKHeX 对照 commit `0660d1e1f4924b8478daec73281bb8071a82ad19`。

## 1. 原生四路 A/B 实际分解

| 原生实验 | 地点 176（CrossFrom=0） | 地点 194（CrossFrom=176） | 地点 186（CrossFrom=176） | 与 PKHeX 目标 553 条匹配 |
|---|---:|---:|---:|---:|
| baseline / unadjusted-only / adjusted-only / strict-overlap | — | — | — | 389 |
| raw PointData Levels | +25 | +25 | **-8** | **431** |
| 只在二进制记录中假设保留原始地点 186，使用 raw 的 176 与 194 | +25 | +25 | 0（假想） | **439（非原生生成）** |

上表第三行是 **后验二进制槽位选择反事实**，不是符合游戏机制的新实现，更不能据 439 评分修改 PKHeX。实际原生实验只证明 431/553。独立审计记录 92 个不同序列化槽位发生差异，覆盖 176/0、194/176、186/176；其他地区与固定/三张 Raid 不受影响。

下一实验需要从原始 `LocationStorage` 的 Crossover 地点 186 的点位归属与 `AreaInfo` 裁剪入手，设计真实点位/跨区分流反事实；不能在导出的 `.pkl` 里用 PKHeX 评分挑选正确槽位。

## 2. 原始 `WorldEnd` 碰撞确认，但无法判定 158 全部去留

原始 236 个固定模板反事实有 512 次 `subarea_su01worldend` wander 事件，512 次都严格命中原始 `HAVOK_TRCOL` `sub_area_su01worldend_col.trcol`；SHA256 为 `3515DC545D102FE824EB4162637CA04F28446DE27FF25F3070A433504AF5A944`。原始 `AreaInfo.Tag=None`、`Type=Field`、`ActualMin/Max=1–100`、`AdjustEncLv=0`，不能把碰撞命中当成实际可捕获的唯一地点。

原来的逐行参考变化：189 个匹配改善、46 个匹配损失、1 条两边均匹配。**完整模板多重集合是 190 获益、47 损失**；不是 189/46 个唯一游戏实体。不可用地点/物种/名称前缀/动作标签白名单直接决定删除 158。

### 2.1 新发现：来源完全同指纹，但匹配标签相反

以下四对都是 **原始物种、等级、Location 四字节、完整 `(game, TableKey, tableIndex)` 源集合相同**；虽然如此，在参考多重集合逐行标签中，一行判为删除 158 后改善，另一行判为删除后损失。

| case 对 | 全国图鉴编号 | 等级 | 原始 TableKey 家族（完整 TableKey、Index 详见审计 JSON） |
|---|---:|---:|---|
| 68 / 69 | 218 | 28 | `su1_area05_02` 与 `t_su1_area05_06` |
| 71 / 72 | 218 | 69 | 同上 |
| 152 / 153 | 629 | 30 | `su1_area09_01`、`su1_area09_06`、`t_su1_area09_13` |
| 155 / 156 | 629 | 68 | 同上 |

这里的「同指纹」**只限已有源审计保存的字段**；`fixed` 原始 20B 记录还有 IV 数目、太晶属性、性别、特性、四个招式与形态。没有完整 20B 字节及其在参考文件中的重复 ordinal，不能证明这些记录二进制相同，也不能把任意一条列为“游戏已证实需要保留 158”。

## 3. 原始生成规则的额外边界

`FixedSymbolDumper9` 在 Kitakami **primary** 解析前筛选 `AreaInfo.AdjustEncLv != 0`，但对随后 `wander` 的区域使用完整场景区域和真实碰撞体。WorldEnd 的 `AdjustEncLv=0`，因此本阶段的 158 源于 wander 推导而不是 WorldEnd 作为 primary 的直接原始出生点。`SIMPLE_POP` 同时出现在两类输出中，不足以做规则特判。

## 4. 新的只读门槛与可复现执行

- 工具：`scripts/Audit-SV-176194-186-Fixed158-Identity.py`
- 无 ROM 测试：`tests/test_sv_176194_186_fixed158_identity.py`
- 原生证据回放 CI：`.github/workflows/sv-176194-186-fixed158-source-identity.yml`
- 输入：原始 Actions `SV400-real-original-level-AB-WorldEnd-158-AreaInfo-TRCOL` 的 92 行 A/B CSV、原生对比 JSON、236 行固定来源 CSV、fixed-only 完整 JSONL、碰撞来源 manifest。

工具严格验证 A/B CSV、236 源行 CSV、fixed-only 原生事件 SHA、manifest 引用、五表基准统计、目标 met/crossFrom 范围和同一 PKHeX 固定版本。发现 **4 对 8 条相反源指纹**则标为 `NEEDS_FULL_FIXED_20B_IDENTITY`，不把它们加入合法数据库。

### 后续验收（未完成）

1. 从原生 `FixedSymbolDumper9.WriteFixedSymbol` 输出采集 **完整 20B HEX + repeat ordinal + source TableKey/Index + `PokeAI.ActionId`**，与 PKHeX 参考 20B 模板进行多重集合消歧。
2. 从 native `LocationStorage` 分开观测 176、194 与 186/176 的原始点、AreaInfo、碰撞边界和天气跨区，执行真正的分区级 A/B，再完整跑五张原生 `.pkl` SHA / 合法性对账。
3. 捕获真实游戏固定宝可梦的生成点、剧情旗标、移动情况及 PK9 `MetLocation`、PID/EC/IV；只有这些证据才能做最终 158 地点与 PKHeX LegalityAnalysis 更新。

证据等级：**原生点／碰撞 SHA 已验证，参考二进制对账已验证；真实游戏运行时接触、固定模板全身份及合法性因果未验证。**