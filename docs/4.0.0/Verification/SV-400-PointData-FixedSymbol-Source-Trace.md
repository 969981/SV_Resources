---
title: SV 4.0.0 原生遭遇｜逐 PointData 与固定地点 158 证据追踪
tags: [SV, 4.0.0, pkNX, PKHeX, PointData, TRCOL, FixedSymbol, Provenance, Obsidian]
status: TRACE_CODE_PENDING_REAL_4_0_0_REPLAY
updated: 2026-11-07
---

# 原始 4.0.0：666 条野生等级与 189 条固定地点差异的底层来源追踪

## 为什么不是修改 `.pkl`

参考 `[[SV-400-Native-Encounter-Root-Cause-Triage]]`，666 条 PKHeX-only 野生槽可以与原生生成结果按全部其他身份字段一对一匹配，只差等级上下限；189 条固定模板只差原生额外加入的地点 158。两者均为**统计/反事实归因**，不应通过批量替换等级或剔除地点来掩盖真正的 PointData/碰撞体计算问题。

现有 `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Location/LocationStorage.cs` 调用 `GetCompositePoint` 将 `PointData.LevelRange` 按 `AreaInfo.ActualMin/MaxLevel` 裁剪，`GetEncounters` 对 `AdjustEncLv` 同时添加普通和修正候选，`PaldeaEncounter.Absorb` 会合并相邻的同物种、同形态、同性别、同时间和天气槽位。

`FixedSymbolDumper9` 的 `FindArea()` 使用 `ContainsPoint` 推导原始 `appearAreas`；对于非驻定行为再用 `TryGetBleedArea()` 推导 `wanderAreas`。此前 30f/10f/0f 实测表明不能直接调容差解决问题。**删去全部地点 158 将破坏 114 条已与 PKHeX 相同的模板并产生 22 条没有地点的模板**。

## 新增观测代码（默认关闭）

- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterTraceSV.cs`：目标范围限制为之前真实 Actions 中的 666/189 条 CSV。通过 `--trace-targets` 与 `--trace-output` 显式启动，写 JSONL；未启用时没有事件输出。
- `LocationPointDetail.cs` 与 `PaldeaSpawnModel.cs`：保留原始 `point_data/*.bin` 名称、该文件内 `PointDataArray` 索引、原始等级区间、裁剪前后等级、地区等级边界。
- `LocationStorage.cs`：`wild_raw_candidate` 记录每次 PokeData 表项、BandPoke、调整值、裁剪值；`wild_weather_assigned` 记录本地/跨区来源、原始坐标与实际天气掩码；`wild_before_consolidate` / `wild_after_consolidate` 记录等级范围合并前后。
- `EncounterSlotDumper9.cs`：`wild_serialized` 记录最终真正写入 `.pkl` 的地点、跨区来源、物种、性别、形态、等级、天气与时间。
- `FixedSymbolDumper9.cs`：`fixed_primary` 是原始固定符号的主要出现点；`fixed_wander` 包含 TableKey、区域、游戏版本、坐标、严格 ContainsPoint 与宽容差判断；`fixed_serialized` / `_adjusted` 记录 PKHeX `.pkl` 的最终四地点列表及地区等级调整。
- `scripts/Join-SV-Native-Point-Trace.py`：将观测 JSONL 与 666/189 根因 CSV 按完整模板字段关联。保留一对多源候选关系；**多个原生点贡献同一个合并区间时不能虚构唯一源头**。

## 完整验收链

1. `tests/test_sv_native_point_trace_join.py` 不依赖 ROM，确保不同天气、位置、等级不能误连；测试不完整 JSONL 会被拒绝。
2. Windows runner 重新从原始 4.0.0 83 分卷中恢复 TRPFD/TRPFS，原始 61 项和 223 个 TRCOL 必须逐项通过 SHA256。
3. 基于同一版本 30f 未修改的 pkNX，启用只读 trace，生成五张普通遭遇 `.pkl`。
4. 对照之前已通过的真实 [master 源数据构建 #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291)，**五张 `.pkl` SHA256 必须逐张完全一致**；否则追踪引入了行为变化，本次验收失败。
5. 将 `wild_serialized` 与 666 条目标原生等级配对、`fixed_serialized` 与 189 条固定目标逐项匹配，关联原始点/符号 `TableKey` 和具体坐标。
6. 输出 `SV400_666_wild_point_provenance.csv`、`SV400_189_fixed_tablekey_wander_provenance.csv`、`SV400_Point_Trace_Validation.json` 及原始 JSONL；原始 JSONL 使用较短 Artifact 保留期。

GitHub Actions：`.github/workflows/sv-native-point-trace.yml`；会在 master 相关源码变更后运行真实资源提取，在 PR 中只编译及执行无 ROM 测试。

## 典型查询解释

野生的 `pointSource + pointIndex` 对应原始 `point_data/*.bin` 内的生成点，有 `pointX/Y/Z`、裁剪前后等级、`criteriaIndex`（原始 `EncountPokeDataArray.Table` 中的索引）、`appliedBoost`、`band`。若 `wild_before_consolidate` 含两段而 `wild_after_consolidate` 变为一段，可确定**发生了合并**；不能由此推断哪种改法一定符合原生游戏逻辑，仍须比对该点的标志条件。

固定的 `location158AddedByWander` 表示地点 158 不是原始 placement 对应的出现区，而是推导出的 `wanderArea`。`targetStrictContains=false` 而 `targetTolerance30Contains=true` 的具体事件是几何过度扩张的候选证据；**不是游戏永远不会允许该符号进入地点 158 的结论**。

## 当前仍不能直接宣称已经验收的事项

- trace 包含了原始点位 `PointData` 文件、索引和实际生成阶段，但当前还未把各 `TRSCN` 的碰撞体实例与**特定 `.trcol` SHA**逐个绑定。223 个 TRCOL 的来源集合可信，不等于每条推断唯一定位到了其中某个 `.trcol`。
- `LocationStorage.IsAbleToSpawnAt()` 仍对开启状态、故事 flag、时间表和联机版本作了假设；每个被追踪点的 `criteriaIndex` 应继续结合游戏原生配置/运行时代码验证。
- 出现点与等级正确不意味着 PID、EC、IV 和异色 RNG 算法被证明，最终合法性仍需独立实机 PK9 与实际游戏生成流程的回归。

对应其它笔记：[[SV-Native-To-PKHeX-Databases]]、[[SV-400-Native-Encounter-Root-Cause-Triage]]、[[SV-Collision-Tolerance-Experiment]]。
