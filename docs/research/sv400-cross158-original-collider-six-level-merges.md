---
title: SV 4.0.0｜CrossFrom=158 的原始碰撞区域、30f 容差与六组等级 Absorb 证据
aliases: [SV400 Cross158 Original TRCOL Geometry, SV400 Six Interval Absorb Provenance]
tags: [SV, 4.0.0, ROM, PointData, TRSCN, TRCOL, pkNX, PKHeX, Provenance]
status: PREEXISTING_BRIDGE_SHA_VERIFIED_NEW_COLLIDER_MERGE_TRACE_PENDING_REAL_REPLAY
updated: 2026-11-08
---

# 目标和证据等级

**ROM 原生来源：**原始 SV 4.0.0 61 项遭遇资源和 223 个 TRCOL（共 276 个输入文件），SHA 来源由 [原生重建 CI #42447774923](https://github.com/969981/SV_Resources/actions/runs/42447774923) 验证。独立 PKHeX.Core 固定在 `0660d1e1f4924b8478daec73281bb8071a82ad19`。本文使用 `SV400_Native_Encounters_For_PKHeX.csv`（SHA-256 `A59709B5CF49B12AD147F022E29F8E7DC793299F1A568FAB2D779FC36DD80E34`），是 **原生生成结果与参考模板的差异**，不是模拟器运行时已捕获的 PK9 合法性。

## CrossFrom=158 的 3,145 条原生记录

按原始 bridge CSV `source_table=wild, cross_from_id=158` 逐行计数：原生独有 2,337，已匹配参考 808。特别是以下 158 跨区目标：

| Location | Native-only | Matching | 解释边界 |
|---:|---:|---:|---|
| 164 | 388 | 50 | 大比例额外候选，尚无运行时拒绝证据 |
| 144 | 308 | 0 | 在现有固定版本参考中无完全一致模板 |
| 166 | 308 | 0 | 在现有固定版本参考中无完全一致模板 |
| 156 | 236 | 31 | 两类并存，不可一键排除 |
| 162 | 174 | 61 | 两类并存 |
| 160 | 118 | 142 | 存在大量原生/参考一致交叉 |
| 140 | 111 | 206 | 存在大量原生/参考一致交叉 |
| 158 | 50 | 265 | 正常原生/参考一致交叉更多 |

**严禁**将位置 158 的所有 `CrossFrom` 清零或删除。这会破坏至少 808 次已匹配记录。

## 现有 pkNX 代码的关键问题（CANDIDATE，不是已确认 Bug）

`EncounterSlotDumper9.ProcessAreas` 在不同 TRSCN collider 的 `LoadPoints` 阶段调用同一个 `LocationDatabase.Get(locationId)`。多个小区域因此可能累积到同一个 `LocationStorage.Local`。随后跨区传播遍历 *整个* `cross.Local`，以目标 collider 的 30f 容差测试允许加入 `Nearby`。该行为不一定与游戏真实活动区域、父区域或事件条件完全一致，但也不能只靠参考差异断言错误。

旧事件仅有 `SourcePointAsset + SourcePointIndex`，没有每个点的**最初碰撞区域**，无法判断到底是哪个 TRSCN/TRCOL 使候选可达。

**本轮新加只读追踪：**

1. `LocationPointDetail.SourceCollisionArea`：加载原始点时记录真正的 collider 名（在无主地点名的区域被父区域重映射之前）。保留已验证 `SourcePointIndex` 和原始 PointData 文件。
2. `wild_cross158_area_pair`：只在目标追踪启用、Kitakami 原始 sourceLocation=158 的情况下输出。按真实 `sourceCollisionArea` 分组，记录相同 source point 在 **strict(0f)** 与已有 **30f XYZ** 各自命中的次数、原始 TRSCN/TRCOL SHA、最多 8 个例子坐标、目标地点 ID。采样记录不是唯一合法模板，点可能在多组 area-pair 重复计数。
3. `wild_six_group_absorb`：只对 6 个固定身份的每次成功 `Absorb` 发出合并前后 min/max、严格重叠/仅邻接标记和合并结果，**绝不影响** `Absorb` 返回值、排序、序列化或原生 `.pkl`。

六组依然是 `(140,158,163)`、`(140,158,532)`、`(158,0,129)`、`(158,0,313)`、`(158,0,314)`、`(158,0,744)`。旧原生追踪里 (5–99)、(7–60) 等跨度在最终 `Consolidate` 之前已存在，因此应分别验证原始 `GetNew/GetBand`、点位集合及逐次 `Absorb`，不能预设只是最后一次合并的错误。

## 可复现操作

**无 ROM 的编译/单元测试：**

```powershell
dotnet build tools/pkNX/pkNX.EncounterCLI/pkNX.EncounterCLI.csproj -c Release --nologo
python -m unittest discover -s tests -p test_sv_158_crossover_geometry_merge.py -v
```

**真实 ROM 输入和事件证据：**运行 `.github/workflows/sv-native-point-trace.yml` 的 `original-native-replay`。该工作流在验证原始 83 个 TRPFS 分卷、61 个表源和 223 个 TRCOL 后，重新调用内置带诊断的 pkNX，再用固定参考 CSV 和 build manifest 进行 SHA 门控：

```powershell
python scripts/Audit-SV400-Cross158-Geometry-Merges.py `
  --native-csv "$env:SV_NATIVE_BASELINE/SV400_Native_Encounters_For_PKHeX.csv" `
  --bridge "$env:SV_NATIVE_BASELINE/SV400_Native_To_PKHeX_Manifest.json" `
  --events "$env:SV_POINT_TRACE" `
  --output "$env:RUNNER_TEMP/SV400-cross158-geometry"
```

输出 `SV400_Cross158_Original_AreaPair_30f_vs_Strict.csv`、`SV400_Cross158_Source_Collider_and_Merge_Manifest.json`、`SV400_Six_Original_Interval_Absorb_Witnesses.jsonl`。所有原始输入保持只读；诊断 I/O 错误 fail-closed；原有 `Join-SV-Native-Point-Trace.py` 仍强制 5 个输出 `.pkl` SHA 与未追踪基线一致。

## 未完成

- 必须读取新一轮 **真实 Actions** 工件后才可把 0f/30f 计数、特定 TRCOL、六组实际合并链标成 `CONFIRMED`。源码插桩与编译成功本身不是运行验证。
- 若同一 Location ID 的多个原始碰撞区域共享点集导致远距离 `Nearby`，还需要隔离实验比较实际游戏天气、场景激活和出生点条件。
- 只有运行时 PK9 + 真实 `PKHeX.Core.LegalityAnalysis` 等证据才能判定最终合法性；不要按匹配率做无来源硬编码。


## 2026-11-08 real native replay #42451144870: 158 source ownership confirmed

[Successful Actions #42451144870](https://github.com/969981/SV_Resources/actions/runs/42451144870) completed the 61+223 original SHA checks, native pkNX compile and 5-asset SHA parity. The already merged trace generated **192** real area-pair geometry events and **75** actual six-group \`Absorb\` events. This is a completed original-source audit, not an in-game spawn simulation.

The original 8,453,058,195-byte event stream was inspected **read-only** and matched by \`stage=wild_weather_assigned\`, \`crossFrom=158\`, \`location=144 or 166\`. The \`sourcePointAsset\` is always \`world/data/encount/point_data/point_data/encount_data_su1.bin\`. All events here identify the original \`sourceCollisionArea=subarea_su01worldend\`:

| Target Location | Native-only reference differences | Distinct original PointData indexes in actual integration trace | Integration event observations (not distinct encounters) | First witnessed original PointData indices |
|---|---:|---:|---:|---|
| 144 (Oni Mountain) | 308 | 1,901 | 816,144 | 373, 375, 376, 403, 437 |
| 166 (Timeless Woods) | 308 | 875 | 677,496 | 6433, 6434, 6442, 6443 |

Original source collider file: \`field_graphic/terrain_model/sub_area_su1/sub_area_su01worldend_col.trcol\`; SHA-256 \`3515DC545D102FE824EB4162637CA04F28446DE27FF25F3070A433504AF5A944\` (same independently seen in fixed-symbol 158 source trace). For Location 144 the target \`a_su0104\` collider uses \`field_graphic/terrain_model/world_area_su1/world_area_su01_04_col.trcol\`, SHA \`C0825912592F94BA3945A74C2E40285AB493745656D2D5C0EE770B973C638423\`. This ties concrete original PointData ordinal + point coordinate + TRSCN/TRCOL SHA to a 158 crossover.

**Root-cause candidate supported by code:** \`LocationDatabase.Get(locationId)\` pools points from distinct TRSCN areas in \`LocationStorage.Local\`; each of the four source lookup names \`a_su0108\`, \`a_su01d0502\`, \`a_su01d0602\`, \`subarea_su01w03\` all uses that same \`CrossFrom=158\` pooled list. The original \`subarea_su01worldend\` points are therefore tested as if they belonged to any of those named source colliders. Area-pair counts repeat; the final PKHeX slot multiset is separately deduplicated. A duplicate check by itself does not prove the *existence* of extra slots, while the pooled original WorldEnd source does justify a source-ownership A/B.

**Six groups:** the source captured 75 \`Absorb\` operations: \`(140,158,163)=8\`, \`(140,158,532)=9\`, \`(158,0,129)=11\`, \`(158,0,313)=17\`, \`(158,0,314)=17\`, \`(158,0,744)=13\`. Only **4** events were adjacency-only; **71** had actual overlapping level ranges. In particular the \`5–99\` species 129 and \`7–60\` species 313/314 were already present as a range on the *left* of \`Absorb\` in observed events, so changing strict overlap alone does not resolve all six interval mismatches.

### Three SHA-gated local counterfactuals (not final gameplay rules)

- \`kitakami-158-worldend-strict\`: require zero-tolerance \`ContainsPoint\` **only** for original WorldEnd points crossing from 158. Other 158 source origins and every non-158 source remain baseline.
- \`kitakami-158-worldend-exclude\`: exclude WorldEnd-origin points **only** when generating a crossover from 158. No local spawn generation is changed.
- \`kitakami-158-exact-source-area\`: allow crossing from 158 only when original \`SourceCollisionArea\` equals the named source lookup area. This evaluates the pooled-source hypothesis rather than hardcoding location 144/166.

All three require the original SHA-verified 223 TRCOL + 61 encounter files. The \`SV400_Kitakami158_Original_AB_vs_PKHeX.json\` comparison reports matched reference gains/losses, native-only changes and per-target location counts; no experiment is allowed to modify non-158 wild records, fixed symbols or ordinary raids. **Do not install any variant as a real PKHeX database without independent gameplay PK9 evidence**, especially because 808 CrossFrom=158 reference-matching templates must be protected.

To reproduce after verification of the original ROM sources, run \`.github/workflows/sv-native-point-trace.yml\` and collect \`SV400-original-Kitakami-158-source-crossover-AB\`. Baseline remains unchanged and the binary outputs are generated separately with \`--crossover-ab-mode\`. The A/B is a research comparison; parity improvement alone is not proof of a correct catch region or event-flag rule.


### Direct original PointData #5046 root for the wide wild-level intervals

A read-only second pass over the exact same 8,453,058,195-byte native \`point-events.jsonl\` filtered \`stage=wild_raw_candidate\`, \`location=158\`, and the six candidate species. The result contained 270,108 observed raw candidate events across 106 distinct \`(species,min,max,collider,asset,appliedBoost)\` groups. (Repeated scene/criteria probes are **not** unique wild slots.) Original \`world/data/encount/point_data/point_data/encount_data_su1.bin\` **PointData ordinal 5046** is attributed to \`subarea_su01worldend\`, position \`(1710.6964,133.5,-996.7115)\`, \`RawPointMin=1,RawPointMax=99\`, no level boost. Exact native candidate witnesses:

| Species | Criteria ordinal | Raw point level | Criteria level | Native candidate before \`Consolidate\` |
|---:|---:|---|---|---|
| 129 Magikarp | 40 | 1–99 | 5–30 | 5–30 |
| 129 Magikarp | 41 | 1–99 | 31–99 | 31–99 |
| 313 Volbeat | 110 | 1–99 | 7–60 | 7–60 |
| 314 Illumise | 112 | 1–99 | 7–60 | 7–60 |

This explains the origin of the over-broad 129 5–99 and 313/314 7–60 intervals **without** alleging \`Absorb\` invented their raw values. The earliest candidate broadness is tied to original ROM PointData source ownership and criteria. A separate A/B removing/reassigning this point needs independent original in-game area activation proof, so no production rule changes are made here.


## 2026-11-08 real original 3-way WorldEnd A/B completed (Actions #42459275290)

[Actions #42459275290](https://github.com/969981/SV_Resources/actions/runs/42459275290) **SUCCESS**. Each variant reconstructed all five Gen9 native PKHeX resources from the same SHA-confirmed 61+223 ROM inputs, compared to the independently pinned PKHeX 30f multiset. All non-CrossFrom=158 wild slots and all fixed + three regular raid files stayed unchanged.

| Mode | CrossFrom=158 matched | Native-only | Reference-only | Net matched |
|---|---:|---:|---:|---:|
| Baseline native | 808 | 2,337 | 161 | — |
| WorldEnd strict target geometry | 842 | 1,834 | 127 | +34 |
| All WorldEnd crossover excluded | 708 | 4 | 261 | −100 |
| Only original source collider name equals lookup name | 684 | 9 | 285 | −124 |

**Critical distinction:** the prior comparison reported **net** reference matches. It did NOT compute how many of the baseline 808 matching *identical serialized templates* disappeared while different reference templates were recovered. Therefore the fact that strict geometry improved net matches by 34 does **not** itself prove none of the 808 templates were lost.

### New source-provenance-only experiments (A/B evidence pending)

A 2026-11-08 direct read-only provenance audit independently confirmed original \`encount_data_su1.bin\` PointData indexes for \`WorldEnd → CrossFrom=158\`. For target location 144: 1,901 distinct WorldEnd indices, of which 1,740 are also observed in a non-WorldEnd original collision area; target 166: 875 distinct WorldEnd indices, 94 have a non-WorldEnd owner. These are source point indexes, not unique encounter templates or definitive game rules.

Two **additional opt-in** counterfactual modes prefer specific original source ownership, identified by exact source asset + original ordinal (not coordinates/PKHeX values):
- \`kitakami-158-prefer-specific-owner\`: if a WorldEnd point is also owned by any other original Kitakami collision area, skip that WorldEnd **crossover** instance only. WorldEnd-only points and other sources retain existing 30f.
- \`kitakami-158-strict-prefer-specific-owner\`: same duplicate owner suppression, and strictly 0f geometry for remaining WorldEnd-only crossover instances.

Both variants are isolated to Kitakami \`CrossFrom=158\`. Base default, all other wild, fixed, raids, original data bytes and source files remain untouched. **Other ownership is evidence of spatial overlap, not proof WorldEnd should be suppressed.** The experiment must fail closed when the specific-owner identity index cannot be constructed.

The new \`Compare-SV400-Source158-Original-AB.py\` also reports \`baseline_reference_matches_retained\`, \`baseline_reference_matches_lost\` and \`new_reference_matches_recovered\` using occurrence-aware multiset intersection. This prevents net-gain metrics from hiding correct templates that were deleted and replaced by unrelated reference matches. The genuine original 5-way A/B output must be collected from the next Actions replay before conclusions are drawn.


## 2026-11-08 five-way original ROM replay #42463405441: decisive retention result

[Actions #42463405441](https://github.com/969981/SV_Resources/actions/runs/42463405441) completed successfully. Five independent native \`.pkl\` builds used the same verified 61 original encounter M2 + 223 original TRCOL sources. All non-\`CrossFrom=158\` wild multiset entries and fixed/three ordinary raid output SHAs remained unchanged.

The corrected occurrence-aware multiset audit reports:

| Experiment | Original 808 matches retained | Original matches lost | New matches recovered | Final matches |
|---|---:|---:|---:|---:|
| WorldEnd strict target collider (0f) | **808** | **0** | **34** | **842** |
| Exclude WorldEnd | 643 | 165 | 65 | 708 |
| Exact source collision area name | 619 | 189 | 65 | 684 |
| Prefer specific owner (first implementation) | 643 | 165 | 65 | 708 |
| Strict + prefer specific owner (first implementation) | 643 | 165 | 65 | 708 |

The strict WorldEnd geometry counterfactual is the first tested mode that improves reference parity **without losing any one of the 808 baseline matching serialized templates**. It also removes 503 native-only templates, net gains 34, and reduces the 161 reference-only records to 127. It remains a counterfactual: a PKHeX reference match is not a runtime proof of an encounter and the 2,337 baseline native-only records are not all necessarily invalid.

Per-location strict mode gains: Location 140 +19; 156 +5; 158 +6; 160 +2; 168 +2. It retains all existing matches at locations 132, 140, 156, 158, 160, 162 and 164. It reduces native-only entries at 144 from 308 to 203 and at 166 from 308 to 297, but neither location has reference-matching templates in this pinned differential.

### Found a defect in the first specific-owner A/B implementation

The five-way replay exposed that both specific-owner modes had exactly the same wild PKL SHA as blanket WorldEnd exclusion. The code constructed its owner identity set from:

\`db.Locations.Values.SelectMany(storage => storage.Local)\`

That is **all Kitakami source locations**, not the single source \`LocationStorage\` for PKHeX location 158. It therefore marked a WorldEnd point as specifically owned merely because the same original PointData file+ordinal appeared in any other location's local list. The first specific-owner A/B was invalid and its results must not be interpreted as location-158 ownership evidence.

### Corrected source-location-scoped owner index (next A/B)

The follow-up implementation now:
1. Requires \`db.Locations[158]\` to exist.
2. Reads only \`db.Locations[158].Local\`.
3. Builds two exact identity sets from the same storage and same original source file: \`WorldEnd\` points and non-WorldEnd specific-area points.
4. Suppresses only the intersection (same original source asset + PointData ordinal present under both ownerships in location 158). WorldEnd-only point identities remain eligible.
5. Records local point records, distinct WorldEnd owners, distinct specific owners, their overlap and WorldEnd-only count in \`native-encounter-build.json\`.
6. Makes the comparison fail closed unless the manifest explicitly proves a non-empty, partitioned Location 158 index. A global index or an all-WorldEnd-overlap/blanket-exclude index is rejected.

This corrects the experiment's scope; it does not assume the overlap should be suppressed in the final encounter database. The next real-ROM Actions run must compare both corrected owner variants against the strict 0f mode and baseline, again reporting original-match retention/loss/recovery separately. Default pkNX output remains unchanged.


## 2026-11-08 corrected LocationStorage=158 five-way A/B replay #42475599973

[Actions #42475599973](https://github.com/969981/SV_Resources/actions/runs/42475599973) completed the corrected owner-index replay. The first implementation that scanned all Kitakami locations was invalid; the corrected code now partitions original PointData identities only inside \`db.Locations[158].Local\`.

Correct source-owner evidence from the actual native build manifest:
- LocationStorage 158 local PointData records: **9,655**
- distinct WorldEnd PointData identities: **8,653**
- distinct non-WorldEnd specific-area identities: **964**
- exact overlap inside this same storage: **964**
- WorldEnd-only identities: **7,689**
- identity key: original PointData asset path + original array ordinal

The corrected five-way result uses occurrence-aware reference matching:

| Mode | Baseline matches retained | Baseline matches lost | New matches recovered | Final CrossFrom=158 matches |
|---|---:|---:|---:|---:|
| WorldEnd strict target geometry | 808 | 0 | 34 | 842 |
| WorldEnd excluded | 643 | 165 | 65 | 708 |
| Exact source collider name | 619 | 189 | 65 | 684 |
| Specific owner priority | 808 | 0 | 1 | 809 |
| **Specific owner priority + strict geometry** | **808** | **0** | **36** | **844** |

The final row is currently the best **experimental reference-parity** result: it retains all 808 original matches and recovers 36 additional matches. It is not yet a game-runtime legality proof. The 36 new matches are concentrated at locations 140 (+21), 158 (+6), 156 (+5), 160 (+2) and 168 (+2). Non-\`CrossFrom=158\` wild records and fixed/three ordinary Raid SHAs remain unchanged.

The stale PR #66 carrying the earlier global owner-index correction was closed because the corrected LocationStorage-scoped implementation was already merged into \`master\` at \`ac93f8ef1ca3be929aeda2bf48462933b156f46a\`. Do not use the first global-index result table as source-ownership evidence.

## Follow-up research notes

- [Terarium 176/194 PointData vs AreaInfo level clipping](sv400-terarium-176194-point-level-area-clipping.md) — full native A/B baseline 389 matches vs raw-point-levels 431 (+42); split raw minimum/maximum experiments are now being added.
- [Kitakami PointData #5046 area-filter context](sv400-point5046-area-filter-context.md) — exact original criteria 40/41/74/110/111/112/113 and a one-point source-area filter probe/A/B.

These are separate experiments: PointData #5046's raw 1–99 interval is already inside its observed AreaInfo 1–100, so its broad candidate levels are not explained by the Terarium AreaInfo clipping hypothesis.
