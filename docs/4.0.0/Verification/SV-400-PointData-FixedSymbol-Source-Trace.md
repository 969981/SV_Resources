---
title: SV 4.0.0 原生遭遇｜逐 PointData 与固定地点 158 证据追踪
tags: [SV, 4.0.0, pkNX, PKHeX, PointData, TRCOL, FixedSymbol, Provenance, Obsidian]
status: VERIFIED_ORIGINAL_GEN9_POINTDATA_CANDIDATES_NOT_GAME_RNG
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


## 真实游戏原始数据追踪已经闭合（2026-11-07）

- [真实重建及追踪 #42369111259](https://github.com/969981/SV_Resources/actions/runs/42369111259)：原始 83 分卷恢复、61 项必要资源 + 223 个 TRCOL SHA 验收、5 张实际原生 Gen9 .pkl 生成成功；和未加追踪的独立 30f 基线相比，5 张文件的 SHA-256 全部一致。此运行的最终关联步骤曾由于内部 Sex/Form 与实际 PKHeX 二进制编码不同，误报 wild 为零；不是游戏原始资源不匹配。
- [原始追踪日志二次校验 #42372660548](https://github.com/969981/SV_Resources/actions/runs/42372660548) 在同一份 7.8GB 未修改的原始 JSONL 上按真实序列化规则转换：Sex=0/3 -> gender_raw=255，Sex=1 -> 0，Sex=2 -> 1；粉蝶虫/粉蝶蛹/彩粉蝶（664/665/666）Form 强制 30，小陨星（774）Form 强制 31。结果：**野生 666/666 原始序列化事件和 PointData 候选、固定 189/189 TableKey**。重复野生模板严格按多重集合一对一匹配（666 条 / 606 个不同键），没有重复计数。
- 所有转换仅作用于只读追踪日志的分析过程，未修改原生 PKHeX .pkl 数据，更没有自动加入官方 LegalityAnalysis 规则。

### 原生 PointData 与等级合并

基于实际记录，新增 `scripts/Summarize-SV-Native-Level-Merge-Differences.py`，按同一份已验证的 666 条 CSV 构建源点等级对照：

| 实测源数据特征 | 数量 |
|---|---:|
| 与原生最终序列化槽匹配 | 666/666 |
| 找到至少一个原生 PointData 候选 | 666/666 |
| PKHeX 参考等级区间在合并前**出现过** | 551/666 |
| 合并前有多个等级区间 | 664/666 |
| 合并后等级区间数减少 | 576/666 |
| 最终原生区间在合并后出现 | 666/666 |

另有 115 条 PKHeX 参考等级区间没有直接出现于 pkNX 合并前的区间列表。它们的原始 PointData 来源全部在 DLC：北上乡 `encount_data_su1.bin` **22 条**，蓝莓学园 `encount_data_su2.bin` **93 条**，帕底亚主世界 **0 条**；其中物种 774（小陨星）有 35 条。已另输出 `SV400_115_Reference_Level_Not_Present_Premerge.csv`，供后续优先追踪蓝莓学园区域/等级及版本/flag 条件。它们不是由简单把最终区间拆开就一定能修正的记录。\n\n典型物种 673，`location=40`，`cross_from=109`：`encount_data_100000.bin` PointData 索引 51626 生成 52–55，索引 53267 生成 53–56，原始合并前两区间均存在；之后输出 52–56。固定 PKHeX 参考为 52–55。**合并步骤确实使等级范围扩大**，但需独立查证哪些游戏生成条件允许/禁止另一个源点，不应为了与参考匹配直接全局禁用相邻区间合并。

### 固定遭遇地点 158

189 条 fixed 差异已能关联具体的 `FixedSymbol.TableKey`。大量额外 158 是通过 `subarea_su01worldend` 的 inferred wander 判定产生的，其中不少事件严格 `ContainsPoint` 也命中，故**不能单凭取消 30f 容差修正**。应定位 `AreaInfo.Tag`、`AreaInfo.Type`、地点映射与可实际进入的世界边界，再做受控 A/B；目前没有实机的合法性验证。

### 仍未闭合

逐个 `TRSCN` collider 到特定 `.trcol` SHA 的行级绑定、旗标/剧情/版本条件和真实游戏 PID/EC/IV/异色 RNG 都未验证。独立 PKHeX 中普通 Tera Raid 三表与参考一致，但 Wild/Fixed 的生成参考差异仍在。**原始数据完全可追踪 ≠ PKHeX 全库逐项一致或游戏实际合法**。
