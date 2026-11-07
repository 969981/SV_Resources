---
title: SV 4.0.0｜固定遭遇 worldend → 地点 158 源事件反事实实验
tags: [SV, pkNX, PKHeX, 4.0.0, FixedSymbol, Kitakami, WorldEnd, TRCOL, SourceAudit]
status: SOURCE_EVENT_COUNTERFACTUAL_NOT_APPROVED_GAMEPATCH
updated: 2026-11-07
---

# 原始 61+223 SHA 证据下的地点 158 反事实研究

## 为什么研究 worldend

真实 [Actions #42372660548](https://github.com/969981/SV_Resources/actions/runs/42372660548) 从原始 4.0.0 的 PointData/FixedSymbol 事件验证了 666/666 条野生记录及 189/189 条固定差异，五张原生 .pkl SHA 与未加追踪的 30f 基线一致。FixedSymbol 差异大量指向 `subarea_su01worldend` 被解释为地点 158 的跨区漫游来源。

与盲目删除所有 158 不同，本实验选择满足**原始程序记录**的 `location158AddedByWander = true` 且有 `fixed_wander.targetArea = subarea_su01worldend` 的模板，而不是用 PKHeX 参考差异来选择待改项。这是一项**内存模拟**；不会改动原始 .pkl、pkNX 源码或官方 PKHeX 合法性。

## 实际 4.0.0 数据下的数值

| 对照指标 | 结果 |
|---|---:|
| 原生固定模板数 | 977 |
| 未修改时与固定 PKHeX 参考库完全相同 | 774 |
| 模拟仅剔除来源于 worldend 的 158 后完全相同 | 917 |
| 来源条件选中的原生模板出现次数 | 236 |
| 新获得匹配 | 190 |
| 原本匹配但被破坏 | **47** |
| 模拟后的 native-only / PKHeX-only | **60 / 60** |
| 产生没有地点的模板 | 0 |

**核心：worldend 可解释大量过度加入地点 158 的差异，但简单过滤 worldend 不是可靠最终修复。** 若直接提交该逻辑会破坏 47 条原本正确的固定模板，且仍剩下 60 条差异。此处参考库一致仅是诊断指标，不能独立证明游戏实际遭遇合法性。

## 可复现来源与脚本

- 原始生成基线：[Actions #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291) 的 61+223 SHA 及五张 .pkl。
- 原始 30f 独立参考多重集合：[Actions #42356030937](https://github.com/969981/SV_Resources/actions/runs/42356030937) 的 `T30/comparison/fixed_native_only.csv` 和 `fixed_pkhex_only.csv`。
- 原始 FixedSymbol 真正 4.0.0 运行轨迹：[Actions #42369111259](https://github.com/969981/SV_Resources/actions/runs/42369111259) `point-events.jsonl`，完整 7.8GB 追踪，不使用仿真输入。
- `scripts/Experiment-SV-Fixed-Worldend-158.py`：快读固定来源事件，并基于非参考选择条件生成反事实 Counter；反推固定 PKHeX 参考多重集合；输出 236 条候选源事件/模板变化 CSV 与 JSON。
- `.github/workflows/sv-fixed-worldend-158-counterfactual.yml`：独立下载原始 Actions 真实运行产物、验证源 SHA，拒绝结论漂移；在 PR 即执行真实重放，发布 CSV + JSON。

选择键由 `game + FixedSymbol.TableKey + TableIndex` 与最终 `species + form + level + four locations` 连接。该键**没有 IV/move 等全部二进制字段**，相同物种/等级/地点但不同招式的模板可能产生匹配歧义，所以该实验不能替代完整运行 pkNX 后的逐记录 SHA 对照。

## 下一层应该改什么实验，而非直接修改游戏代码

1. 给每条 `fixed_wander` 打印真实 `AreaInfo.Tag`、`AreaInfo.Type`、是否原始 `appearArea`、`targetArea` 的地点索引、严格与 30f 碰撞结果，以及 TRSCN / TRCOL 对应索引。
2. 在隔离的原始数据 Windows runner 上分别 A/B：只屏蔽 `AreaTag.NG_All`、只屏蔽 `subarea_su01worldend`、只允许同等有效地点/同一个 spawn scene 的跨区，以原始五张 .pkl 的 SHA 和固定参考多重集合对账。
3. 对 47 条被错误剔除的模板建立明确的保留条件，必须来自源代码或原始区域字段而非按物种 ID 写白名单。
4. PKHeX 的固定遭遇是否合法还要用真实生成的 PK9、剧情触发/版本标记、PID/EC/IV/异色规则单独运行 LegalityAnalysis，不能只凭模板与参考相同认定合法。

关联：[[SV-400-PointData-FixedSymbol-Source-Trace]]、[[SV-400-Native-Encounter-Root-Cause-Triage]]、[[SV-Native-To-PKHeX-Databases]]。
