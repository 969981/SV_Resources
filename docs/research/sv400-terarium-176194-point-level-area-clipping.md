# SV 4.0.0 Terarium 176/194 — original PointData level bounds vs AreaInfo clipping

## Status and source boundary

This is a source-driven research record for Scarlet/Violet 4.0.0. All native builds use the original SHA-verified **61 encounter M2 assets + 223 TRCOL dependencies**. The independent PKHeX reference is reconstructed after native generation from the pinned 30f differential at commit \`0660d1e1f4924b8478daec73281bb8071a82ad19\`.

This note does **not** claim game-runtime encounter legality. No actual caught PK9 has yet been used to prove the runtime level bounds. The A/B modes are opt-in and do not alter the default exporter.

## Actual full native A/B already completed

[Actions #42475599973](https://github.com/969981/SV_Resources/actions/runs/42475599973) rebuilt the actual five Gen9 encounter tables from the original 4.0.0 sources. The target comparison includes native location 176/194 and crossover rows originating from those locations.

| Mode | Native target rows | PKHeX reference rows | Exact matches | Native-only | Reference-only | Changed occurrences |
|---|---:|---:|---:|---:|---:|---:|
| Baseline | 588 | 553 | 389 | 199 | 164 | 0 |
| Unadjusted-only | 588 | 553 | 389 | 199 | 164 | 0 |
| Adjusted-only | 588 | 553 | 389 | 199 | 164 | 0 |
| Strict overlap | 588 | 553 | 389 | 199 | 164 | 0 |
| **Raw PointData levels** | **588** | **553** | **431** | **157** | **122** | **116** |

The raw-level mode changed 92 serialized slot rows (46 removals + 46 additions, including multiplicity changes such as Minior's seven forms/slots). A second, occurrence-aware pass over the change CSV found that the apparent **+42 net** is actually **50 newly recovered matching occurrences minus 8 previously matching occurrences lost**. All eight losses are at target location 186 (Coastal Plaza), with `CrossFrom=176`, for species 88, 287, 335 (two occurrences), 336 (two occurrences), 546 and 547. The raw-point mode therefore does **not** preserve all baseline matches, even though its total match count rises from 389 to 431. Non-target wild rows remained byte/multiset identical; fixed encounters and all three ordinary Raid files retained their original SHA-256.

The first three counterfactuals made no output difference. Therefore the 42-match gain is not caused by adjusted-vs-unadjusted generation or the strict-vs-adjacent consolidation switch.

## What the raw-level switch actually changes

The original path is:

1. \`LocationStorage.LoadPoints\` first requires \`PointData.LevelRange\` to overlap the source area's \`AreaInfo\` min/max.
2. It checks the original collider contains the point.
3. \`GetCompositePoint\` currently intersects the point's minimum and maximum with the source \`AreaInfo\` bounds.
4. \`GetEncounters\` intersects that resulting point range with each \`EncountPokeData.MinLevel/MaxLevel\` and applies \`AdjustEncLv\` where applicable.
5. The resulting slots are consolidated later.

The raw-point A/B **does not bypass step 1**. It preserves the original PointData min/max only at step 3. In other words, the point must still overlap the AreaInfo range to be loaded; its level range is simply not clipped to the AreaInfo bounds after it has been accepted.

### Source-linked examples

The original provenance CSV contains points with raw range **60–70** and source \`AreaInfo\` range **58–68**. Baseline therefore turns them into **60–68**, while the raw mode retains **60–70**. For example, location 176's species 50/51 candidate groups include 56 source point records each with raw 60–70 clipped to 60–68. The pinned reference contains level-70 endpoints for the corresponding encounter records.

Other point groups have the opposite lower-bound shape: raw **58–68**, source AreaInfo **59–69**, baseline clips to **59–68**. Both ends can therefore be altered by AreaInfo intersection; this is why a single raw-both mode is not enough to identify which bound is responsible.

The provenance-linked CSV is in artifact \`SV400-original-point-level-and-fixed-158-attributed-evidence\` from Actions #42475599973; the actual full-PKL result is in \`SV400-original-level-AB-WorldEnd-158-AreaInfo-TRCOL\`.

## New independent lower/upper A/B (implemented; real ROM replay pending)

The research branch adds two additional modes, without changing the baseline:

- \`terarium-176-194-raw-point-min-only\`: keep original PointData minimum, but retain the existing AreaInfo maximum clip.
- \`terarium-176-194-raw-point-max-only\`: retain the AreaInfo minimum clip, but keep original PointData maximum.

Together with the already-tested \`terarium-176-194-raw-point-levels\`, these isolate the lower and upper bound contributions. The independent 6,003-candidate source-formula sample was rerun successfully in [Actions #42500056001](https://github.com/969981/SV_Resources/actions/runs/42500056001). It found:
- raw minimum only changes **2,611 / 6,003** samples across **61 / 78** cases;
- raw maximum only changes **616 / 6,003** samples across **13 / 78** cases;
- both bounds together change **3,227 / 6,003** samples across **74 / 78** cases.

The two single-bound counts overlap and must not be added. This sample suggests the lower-bound clip is the larger source of candidate-level differences. The non-focus DLC control also changes under raw bounds (634 minimum-only, 162 maximum-only, 796 both across 2,402 samples), so no global rule should be inferred from the Terarium result. The sample keeps at most 80 source criteria per case and is not a full encounter rebuild.

The source-formula sample script and unit tests now report/test min-only, max-only and both-bound results separately. The next full original ROM Actions replay compares all six A/B modes against the same pinned reference and still rejects any change outside the target rows or to fixed/raid tables.

## Interpretation guardrails

- A better PKHeX multiset match is evidence of closer parity with the pinned reference, not proof of game runtime behavior.
- AreaInfo overlap remains a source-point inclusion gate in all modes; only the post-load range clipping is under experiment.
- The raw-level mode's 42-match gain is promising, but the independent min/max run must determine whether the correction is only the upper cap, only the lower floor, or both.
- Do not promote any mode to the default PKHeX database until actual game-captured PK9 examples or a runtime level-generation trace confirm it.

## Next acceptance

1. Run six full native builds from the same 61+223 original inputs.
2. Report per-location and per-slot reference-match retention/loss/recovery, not only net match count.
3. Confirm all non-target wild slots and fixed/three Raid SHAs remain unchanged.
4. If max-only reproduces the raw-both +42 gain with no additional unmatched slots, investigate the original AreaInfo upper bound as a likely overly strict cap; if min-only also matters, retain both as separate hypotheses.


## 2026-11-09 独立原始来源样本：176 与 194 分组结果

最新 61+223 源文件对应的原生 PointData 条件样本在 [Actions #42500331084](https://github.com/969981/SV_Resources/actions/runs/42500331084) 和合并后的 [Actions #42538746057](https://github.com/969981/SV_Resources/actions/runs/42538746057) 通过源 SHA 核验。输入来自原生 `SV400_666_wild_point_provenance.csv` 与剩余 115 条案例对账；下表从导出的 `SV400_115_Sourced_PointData_Level_Formula_AB.csv` 按最终 `location_id` 去重分组，不把 CrossFrom 的重复归类算作额外样本。

| 最终地点 ID | 来源案例数 | 原始条件采样 | 仅取消 min 裁剪会改变的采样 | 仅取消 max 裁剪会改变的采样 | 两端至少一处变化 |
|---|---:|---:|---:|---:|---:|
| 176 Coastal Biome | 39 | 3,020 | 548 | 616 | 1,164 |
| 194 Torchlit Labyrinth | 39 | 2,983 | 2,063 | 0 | 2,063 |
| **合计** | **78** | **6,003** | **2,611** | **616** | **3,227** |

这是一项 **PointData × EncounterCriteria 采样**，不是 3,227 个真实 PKHeX 野生槽位，也不是 3,227 个可以在游戏里遭遇的不同宝可梦。按当前 80 条／案例采样上限，两地都有 39 个样例，不能证明整个 DLC 所有未采样点的等级公式。

从这个分组可以提出两个互不相同的假设：

1. **176 可能同时需要修正区域最低等级和最高等级裁剪**：对所采样的 176 条件记录，548 次 min 改动、616 次 max 改动。
2. **194 现有采样主要指向最低等级**：2,063 次 min 改动、0 次 max 改动。但是“没有采到 max 改动”不是游戏最大等级绝不会受影响的证明。

更重要的是，全部八条之前已匹配但因 raw-both 模式而损失的模板属于 **Location 186 / CrossFrom 176**；它们 **没有出现在此 115 条来源采样案例中**，因此不能依靠上述采样去判定 186 的具体修复。只有完整的六方案 `.pkl` 原生重建能够检验 `raw-min-only`、`raw-max-only` 对 186 的真实影响，并检验非目标野生及固定、普通 Raid 的 SHA 不变。

CI 障碍修复：PR #67 中 `compile-no-rom` 的稀疏检出曾漏掉 `scripts/Compare-SV-Terarium-176-194-Native-AB.py`，导致匹配保留测试的导入失败；修复后 [Actions #42538490818](https://github.com/969981/SV_Resources/actions/runs/42538490818) 的专项编译／测试通过。合并提交 `909b1291122bdb087dd3db42184a0d0ca4a34547` 已触发真实完整重跑 [Actions #42538746081](https://github.com/969981/SV_Resources/actions/runs/42538746081)。**此处的六方案新结果尚未写入本文，避免将未完成的原生重跑当成验证成功。**

## 2026-11-09: 186 ← 176 的八条原匹配损失都仅涉及最高等级

对已有真实 native raw-both A/B `SV400_Terarium_176_194_AB_True_Native_Changes.csv` 的 **92 行**逐一过滤 `location_id=186, cross_from_id=176`，并按完整九字段记录及参考多重集合复核后确认：八条之前与固定 PKHeX 参考完全匹配的遭遇记录，**最低等级均保持 58 不变，只有最高等级 68 → 69**。记录见原生 [Actions #42475599973](https://github.com/969981/SV_Resources/actions/runs/42475599973) 的 `SV400-real-original-level-AB-WorldEnd-158-AreaInfo-TRCOL` 工件。

| National species | time_forbidden_mask | baseline matched level | raw-both level | original matching occurrences lost |
|---:|---|---|---|---:|
| 88 | 0 | 58–68 | 58–69 | 1 |
| 287 | 0 | 58–68 | 58–69 | 1 |
| 335 | 6, 9 | 58–68 | 58–69 | 2 |
| 336 | 6, 9 | 58–68 | 58–69 | 2 |
| 546 | 0 | 58–68 | 58–69 | 1 |
| 547 | 0 | 58–68 | 58–69 | 1 |
| **总计** | | | | **8** |

每条被移除的 baseline 模板都在原始 PKHeX 参考中计数为 1，而对应的 raw-both 高一级模板在固定参考中计数为 0，因此不能用“新模板取代旧模板”的净匹配指标掩盖这八条损失。

**新的可证伪预期：**单独启用 `raw-point-min-only` 不直接放宽 PointData 最高等级，可能保住这八条 58–68 模板；`raw-point-max-only` 则可能再次将它们扩大到 58–69。这是从已生成 .pkl 的逐字段差异得到的 **实验预测**，而不是两种单边模式已完成的结论。是否发生其他来源的合并与补偿，仍取决于当前完整六方案原生重建 [Actions #42538746081](https://github.com/969981/SV_Resources/actions/runs/42538746081) 的实际结果。

此处所有变化只针对原生野生槽位；即使与 PKHeX 参考完全一致，也不直接证明游戏内的随机生成条件或 PK9 合法性。
