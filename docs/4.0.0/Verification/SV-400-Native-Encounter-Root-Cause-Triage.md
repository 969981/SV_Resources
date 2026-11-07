---
title: 朱紫 4.0.0｜原生遭遇差异根因分组：等级范围与北上乡地点 158
aliases: [SV 400 Wild Level Fixed 158 Mismatch]
tags: [SV, 4.0.0, pkNX, PKHeX, TRCOL, Encounter, Levels, Geometric, Forensics]
status: EVIDENCE_BACKED_ROOT_CAUSE_CANDIDATES_NOT_FIXED
updated: 2026-11-07
---

# 研究目标

此前已通过 61 份必要原生资源及 223 个 Havok `.trcol` 的 SHA 验证，使用 pkNX 生成原生 4.0.0 五张 PKHeX 格式 `.pkl`，并将 5/5 原生资源经过**隔离 PKHeX.Core 编译**验证。三地区普通 Raid 与固定版本 PKHeX Core 二进制一致；wild、fixed 不一致。

本次直接分析真实 [Actions #42356030937](https://github.com/969981/SV_Resources/actions/runs/42356030937) 的 30/10/0 容差差异 CSV，并用 [Actions #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291) 的独立原生 fixed `.pkl`（具备 61+223 溯源清单和源 SHA）进行交叉验收。**所有结果是来源归因与反事实诊断，不是合法性规则修复**。

## 真正的 30f 原始对照

| 项目 | 原生槽/模板 | PKHeX 参考 | 原生独有 | PKHeX 独有 |
|---|---:|---:|---:|---:|
| 野生 Wild | 29,840 | 26,861 | 3,655 | 676 |
| 固定 Fixed | 977 | 977 | 203 | 203 |
| 普通 Tera Raid | 700 | 700 | 0 | 0 |

参考 PKHeX Core commit `0660d1e1f4924b8478daec73281bb8071a82ad19`。

## 发现一：666/676 条 PKHeX 独有野生槽只差等级上下限

把 wild 原生独有 CSV 与参考独有 CSV 按 `location_id`、`cross_from_id`、`species_national`、`form_raw`、`gender_raw`、`time_forbidden_mask`、`weather_allowed_mask` **严格相同**配对，允许 `level_min`/`level_max` 不同；按照端点差值最小原则进行一对一配对，实际能匹配 **666 条**，其余 **10 条**还存在其他字段/身份差异。

典型例子：物种 673、捕获地点 40、跨区来源 109；原生 Lv.52–56 而 PKHeX Lv.52–55。物种 602、地点 16、跨区来源 58；原生 Lv.25–42 而 PKHeX Lv.25–25。

此结果**不能推出**全局升/降一级解决问题，因为差值存在多种组合，包括在上下限两侧不同的偏移。

真正应检查：

1. `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Location/LocationStorage.cs` 的 `GetCompositePoint`：按 AreaInfo 实际最小/最大等级截断 PointData 的 LevelRange。
2. 同文件 `GetEncounters`：`AdjustEncLv != 0` 时同时添加无偏移与有偏移的候选，检查 DLC 遭遇等级开关与区域调整方式。
3. `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/PaldeaEncounter.cs`：`Absorb` 用 `MaxLevel+1 >= MinLevel` 合并相邻等级区间，检查是否过度吞并具有不同生成触发条件的两个区间。
4. `LocationStorage.IsAbleToSpawnAt` 目前**显式备注**假设 `flag`、`enable table`、`timetable` 和 `version` 生效。这些元数据尚未按游戏原生生成条件全部处理。

需对 666 条从原始 PointData 追加 `spawner/point ID`、PointData.LevelRange、AreaInfo.ActualMin/MaxLevel、AdjustEncLv、PokeData.Min/MaxLevel、是否 BandPoke、合并之前槽位；只有把差异逆推到**实际字段**，才能设计正确修复。

## 发现二：固定遭遇 189/203 条与额外地点 158 相关

固定表原生独有 203 条，其中 **191 条**的四个地点字段包含 `158`。将这 203 条原生独有模板中的 `158` *仅用于离线诊断*地去除，再对比 203 条参考独有模板，**189 条**的其余二进制字段与地点列表完全吻合。

这是强烈的来源定位线索：过度传播地点 158 的可能性显著，但它**不是“地点 158 一律非法”**。

为什么不能一刀切：

- 977 条原生固定模板中共有 305 条包含地点 158。
- 其中 **114 条已与 PKHeX 参考完全一致**，删除 158 会破坏这些原本正确的记录。
- 把原生 977 条的地点 158 全部去除进行反事实模拟，会使 PKHeX 相同模板从 774 增至 850，**仍有 127 条与参考不同**，且会生成 **22 条没有任何地点的固定模板**。这不是可接受的修复。

直接检查 `FixedSymbolDumper9.cs` 中 `appearAreas`（真实符号初始所属区）与 `wanderAreas`（经宽松碰撞推断的漫游区）如何合并、如何根据 `AdjustEncLv` 分组；重点检查 `TryGetBleedArea` 的容差、动作 `IsStationary`、以及有无真实跨区生成行为。

## 发现三：尝试缩小 30f 不是有效解决方案

| XYZ 容差 | 原生野生 | native-only / ref-only | 原生固定 | native-only / ref-only |
|---|---:|---|---:|---|
| 30f | 29,840 | 3,655 / 676 | 977 | 203 / 203 |
| 10f | 26,739 | 5,240 / 5,362 | 955 | 307 / 329 |
| 0f | 23,016 | 5,303 / 9,148 | 942 | 340 / 375 |

近似总数不能证明逐条合法。尤其 `0f` 也不是严格三维几何测试：`BoxCollision9.ContainsPoint` 当前计算纵向窗口采用 `y-10000` 到 `y+1`，意味着 Y 轴判定**明显不对称**。它可能影响碰撞下层区域/跨区传播，但需要以原始 TRCOL + 原始 PointData 设计独立 A/B 测试，不应直接替换游戏算法。

地点编号对应英文：156 = Wistful Fields，158 = Mossfell Confluence。Serebii 同一物种页面只可作为分布证据，不能推导精确跨区几何、等级或 PK9 合法性。

## 已提交的可复现分组工具

- `scripts/Triage-SV-400-Native-Encounter-Differences.py`：验证两份 Actions 的原生 Manifest / 原生 .pkl SHA 一致，输出 666 条野生等级配对与 189 条固定地点反事实配对。
- `tests/test_sv_native_difference_triage.py`：校验一对一去重、拒绝天气/跨区来源不等的假配对、不能覆盖真实地点 158。
- `.github/workflows/sv-native-encounter-mismatch-triage.yml`：复用真实已存在的 30f/10f/0f 差异产物 + 已编译验收过的原生 fixed `.pkl`；发布 JSON 与五张差异 CSV（不将 `.pkl` 修改回仓库）。

产物 `SV400-source-verified-wild-level-fixed-158-root-cause-triage` 包含：

`SV400_Native_Encounter_Difference_Root_Cause_Triage.json`、`wild_level_range_pairs.csv`、`wild_remaining_pkhex_only.csv`、`fixed_158_counterfactual_pairs.csv`、`fixed_remaining_native_only.csv`、`fixed_remaining_pkhex_only.csv`。

## 下轮必须满足的验收

- **原始字段归因**：定位 666 个等级配对中实际导致 min/max 改变的 PointData、AreaInfo、AdjustEncLv 与合并步骤，生成可重复的 source-key 记录；不靠参考库覆写输出。
- **158 空间归因**：将 189 条固定候选关联到各自 `FixedSymbolTable.TableKey` / 版本 / 原始 `TRSCN` placement / `.trcol` SHA，区分真正可漫游与虚假跨区。
- **严格 A/B**：固定原始 61+223 来源 SHA，逐项改变一个假设，比较全 Paldea/Kitakami/Blueberry 野生与固定模板多重集合；三张 700 条 Raid 必须始终 SHA 一致。
- **游戏和合法性**：即使与固定版本 PKHeX 字节级一致，仍需把对应原始来源和独立游戏 PK9 / PID / EC / IV / shiny RNG 分开验收。

关联：[[SV-Native-To-PKHeX-Databases]]、[[SV-Collision-Tolerance-Experiment]]、[[Gen9-PKHeX-Native-400-PK9-Location158]]、[[Gen9-PKHeX-Serebii-Crosscheck]]。
