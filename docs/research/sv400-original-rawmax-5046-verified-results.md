---
title: SV 4.0.0｜真实 ROM 六方案等级 A/B 与 PointData 5046 七条件最终验收
aliases: [SV400 raw-max-only 439 exact PKHeX matches, SV400 Point5046 seven criteria proof]
tags: [SV, 4.0.0, ROM, PKHeX, pkNX, PointData, TRCOL, Gen9, A-B, provenance]
status: SHA_VERIFIED_ORIGINAL_ROM_AB_REFERENCE_PARITY_NOT_GAME_RUNTIME_LEGALITY
updated: 2026-11-09
---

# 证据源与验收边界

- **真实成功的原始 ROM 流程：** [Actions #42538746081](https://github.com/969981/SV_Resources/actions/runs/42538746081)，`compile-no-rom` 和 `original-native-replay` 均成功。使用原始 SV 4.0.0 **61 项遭遇源文件 + 223 个 TRCOL**，总计 276 个 SHA/manifest 验证输入。
- 原生六方案逐项差异：该 Actions 的 `SV400-real-original-level-AB-WorldEnd-158-AreaInfo-TRCOL` artifact，具体文件 `SV400_Terarium_176_194_Native_AB_vs_PKHeX_Reference.json`、`SV400_Terarium_176_194_AB_True_Native_Changes.csv`、`SV400_Terarium_176_194_AB_By_Location.csv`。
- #5046 七条件探针：同一 Actions 的 `SV400-PointData-5046-AreaFilter-AB` artifact，文件 `SV400-Point5046-Area-Filter-Probe.json`、`SV400_Point5046_AreaFilter_AB.json`、`SV400_Point5046_AreaFilter_AB_Changes.csv`。
- 固定 PKHeX.Core 参考 commit：`0660d1e1f4924b8478daec73281bb8071a82ad19`。此处“匹配”均指完整 Gen9 野生槽位九字段、多重集合匹配，**不表示实际游戏里已捕获 PK9，更不代表运行时合法性**。

## 决定性新结论：176／194 最佳为 raw-max-only，而不是 raw-min-only

目标范围包括本地 location 176/194 或跨区来源 `CrossFrom=176/194`。真实 baseline 有 588 条 native、固定参考 553 条，其中 389 条完全匹配。

| 模式 | 匹配参考 | 原匹配保留 | 原匹配损失 | 新恢复匹配 | 净匹配变化 | 原生独有 | 参考独有 |
|---|---:|---:|---:|---:|---:|---:|---:|
| baseline | 389 | 389 | 0 | 0 | 0 | 199 | 164 |
| unadjusted-only | 389 | 389 | 0 | 0 | 0 | 199 | 164 |
| adjusted-only | 389 | 389 | 0 | 0 | 0 | 199 | 164 |
| strict-overlap | 389 | 389 | 0 | 0 | 0 | 199 | 164 |
| raw-point-min-only | **385** | 385 | **4** | 0 | **−4** | 203 | 168 |
| **raw-point-max-only** | **439** | **389** | **0** | **50** | **+50** | **149** | **114** |
| raw-point-levels (both bounds) | 431 | 381 | 8 | 50 | +42 | 157 | 122 |

`raw-point-max-only` 的 50 条新增匹配精确归属：

| Location | CrossFrom | baseline matches | variant matches | recovered | lost |
|---:|---:|---:|---:|---:|---:|
| 176 | 0 | 73 | **98** | **25** | 0 |
| 194 | 176 | 34 | **59** | **25** | 0 |
| 186 | 176 | 32 | **32** | 0 | **0** |

因此先前从 raw-both 观察到的“186 ← 176 八条 `58–68 → 58–69`”**不能**直接判定 max-only 会损失这八条；实际 max-only 全部保留。反而 min-only 出现四条 186 ← 176 原匹配损失，即物种 88、287、546、547；raw-both 进一步损失物种 335×2、336×2，最终共八条。这与原始点集合与后续 `Consolidate/Absorb` 的间接影响一致，不能仅凭最终槽位 `MaxLevel` 逆推上游哪一个开关造成变化。

`raw-max-only` 的实际野生 `.pkl` SHA-256：

```text
8A5C9865524C53A37FEEEE4C1A5C2041D55D81790199865C74B34CD3510B3240
```

原始基线野生 SHA-256：

```text
01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187
```

另外四张原生固定与常规 Raid 的 SHA，以及**所有非 176／194 目标野生记录**，在六个 A/B 方案间都保持不变。raw-max-only 涉及 76 条逐行变动记录（38 条旧行减少、38 条新行增加），由于相同模板有多重实例，新恢复的匹配 occurrence 是 50，而不是 38。被恢复的模板上限主要为 69 或 70 级。

**正确表述：**在目前的原始 4.0.0 ROM → pkNX → 固定 PKHeX 参考对账中，max-only 是测试过的最佳**候选实验**。默认 pkNX 仍不启用它；还需要实机游戏区域／等级判定与原始 PK9 运行时证据。

## PointData #5046 的七条件真实几何结果

已核对原始：

- 原始资源 `world/data/encount/point_data/point_data/encount_data_su1.bin`，数组索引 **5046**；
- WorldEnd 碰撞源 `subarea_su01worldend`，实际点坐标约 `(1710.6964, 133.5, -996.7115)`，原始点等级 1–99；
- 共享 `LocationStorage.AreaName=a_su0108`，但该点的 `SourceCollisionArea=subarea_su01worldend`。

| Criteria index | 物种 | 使用共享 AreaName 结果 | 使用逐点来源区域结果 | 几何原因 |
|---:|---:|---|---|---|
| 40, 41 | 129 鲤鱼王 | 接受 | **接受** | 条件区域 `subarea_su01w0801` 的 TRCOL 确实包含该点 |
| 74 | 194 乌波 | 接受 | **接受** | `a_su0109` TRCOL 确实包含该点 |
| 110, 111 | 313 电萤虫 | 接受 | **拒绝** | 条件列有 `a_su0108`，仅匹配共享区域名；该点不在任一条件 TRCOL 内 |
| 112, 113 | 314 甜甜萤 | 接受 | **拒绝** | 同上 |

但这一个点的 source-area 过滤 A/B **没有改变任何最终野生槽位**：`changed_slot_rows=0`；`Local=158 ∪ CrossFrom=158` 共有 baseline/native 3935、参考 1330、匹配 **1045**，A/B 后仍匹配 **1045**；原匹配保留 1045、损失 0、新增匹配 0。固定遭遇与普通 Raid 四张文件 SHA 同样完全不变。

**结论边界：**七条件探针证明共享区域名确实让四条候选通过了与原始几何不一致的快捷路径；它**没有**证明这四条原生候选应该从所有地点删除，也没有修复最终 `.pkl`。在不同 PointData 的重复来源、合并或区域传播中可能还存在相同的序列化模板。

## 下一项源证据验收

1. 对 176／194 的新恢复的 50 个 occurrence，回溯到具体 `SourcePointAsset + SourcePointIndex + SourceCollisionArea + AreaInfo` 的 max clipping 过程；分离原始 70 级上限与固定参考的一致性，避免事后强行拟合。
2. 对 186 ← 176 的四／八条损失，分别抓 `raw-min-only` 和 `raw-both` 的原始 spawner、criteria 与 `Absorb` 见证，解释为什么扩大最低范围也可能改变最终最高等级。
3. 对 #5046 实验，追踪被拒绝的四条候选在整个 `LocationStorage.Local` 中的其他原始点位与最终模板来源，判断“单点 A/B 无最终改动”的重复候选机制。
4. 以上全部保持 **read-only trace + opt-in isolated A/B**；真实游戏 PK9 证据独立验收之前，不修改默认遭遇数据库。
