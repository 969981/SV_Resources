---
title: SV 4.0.0｜186←176 最低等级损失与 #5046 重复来源的原生因果链
aliases: [SV400 186 176 raw-min, SV400 5046 5072 5257 WorldEnd]
tags: [SV, 4.0.0, pkNX, PKHeX, Gen9, original-ROM, PointData, TRCOL, causal-trace]
status: BASELINE_SOURCE_WITNESSES_CONFIRMED_VARIANT_SPECIFIC_CAUSAL_REPLAY_PENDING
updated: 2026-11-09
---

# 两个问题必须分开

这份 Obsidian 研究说明只讨论原始 ROM → pkNX → Gen9 野生遭遇来源。**不能把 PKHeX 参考匹配或源碰撞交集说成游戏运行时合法性证明。** 默认生成器仍是原始 pkNX 30f，所有变体均需显式启用、使用独立输出目录。

证据包括 SHA 验证的 61 项 SV 4.0.0 原生遭遇资源、223 个 TRCOL，以及：

- 原始基线 [Actions #42451144870](https://github.com/969981/SV_Resources/actions/runs/42451144870)：原始 14,432,022 条只读事件，JSONL 解压后 8,453,058,195 字节。
- 独立完整六方案 [Actions #42538746081](https://github.com/969981/SV_Resources/actions/runs/42538746081)：真实 .pkl 多重集合对账。
- 单点七条件探针同属 #42538746081：来源过滤四条候选被拒绝，但原生 .pkl 零变化。

独立读取的原始事件 ZIP SHA-256：\`3083B948D5D041984D56468E572085E492F007367AB8C1D7B2713DBDD0D64908\`。六方案 ZIP SHA-256：\`0C9A3B23CBDE16142405A5F48AE5E8B5B7ACC9534B4D411D86C769FA3B7F7C00\`。

## A. 186 ← 176：实际损失四条，而非合并逻辑已获证明

本次逐条核对六方案 \`SV400_Terarium_176_194_AB_True_Native_Changes.csv\`：

| species | baseline matched | raw-min-only | reference loss |
|---:|---:|---:|---:|
| 88 | 58–68 | 58–69 | 1 |
| 287 | 58–68 | 58–69 | 1 |
| 546 | 58–68 | 58–69 | 1 |
| 547 | 58–68 | 58–69 | 1 |

这四条皆 \`Location=186, CrossFrom=176\`、原始时间掩码 0。换言之，**只修改最低边界，却可能使最终序列化最大等级扩大**，这是候选集合、接受条件与后续区间合并共同决定的结果，不能简单归因于单个最大等级剪裁语句。

原始 **baseline** 事件可直接确认四个已被原始 666-case 追踪覆盖的物种 88、287、335、336：\`186 ← 176\` 的 \`wild_weather_assigned\` 总计 2,350 次候选观察，12 个 \`wild_before_consolidate\` 区间，6 个 \`wild_after_consolidate\` 区间及 6 个最终序列化区间。物种 88、287、335、336 的 before 集合均含 \`58–68\` 和 \`59–68\`，after 是 \`58–68\`。此 666-case 事件流**未覆盖** 546、547；不能虚构它们的 baseline 原生 PointData 事件。

已观察到原始 176 源文件的具体不同碰撞归属，举例：

| SourcePointIndex | SourceCollisionArea | Raw point min–max | AreaInfo clip min–max | Observed effective point min–max |
|---:|---|---|---|---|
| 4910 | \`subarea_su0202_03\` | 58–68 | 1–100 | 58–68 |
| 6214 | \`a_su02d0407\` | 58–68 | 59–69 | 59–68 |
| 12503 | \`a_su0202\` | 59–69 | 58–68 | 59–68 |
| 12503 | \`a_su02d0402\` | 59–69 | 59–69 | 59–69 |

这些是原始 \`wild_raw_candidate\` 的单点见证，**不等同于已经证明这些点都传播到 186，或者解释了 min-only 的 69 级上限**。正因为基线事件无法观察 min-only 新接受的候选，必须单独运行该变体的只读原生追踪。

## B. 原始 #5046 的真实重复候选：#5072、#5257

原生 \`wild_raw_candidate\` 可确认相同的 original asset \`world/data/encount/point_data/point_data/encount_data_su1.bin\`，三个不同 PointData 索引：

| PointData index | X | Y | Z | 原始碰撞归属 |
|---:|---:|---:|---:|---|
| **5046** | 1710.6964 | 133.5 | −996.7115 | \`subarea_su01worldend\` |
| **5072** | 1697.6921 | 133.5 | −1010.5304 | \`subarea_su01worldend\` |
| **5257** | 1693.2043 | 133.5 | −993.0558 | \`subarea_su01worldend\` |

这三个点都有原始 LevelRange \`1–99\`，共享 \`LocationStorage.AreaName=a_su0108\`。每个点均为 313 的 criteria 110/111 和 314 的 criteria 112/113 生成 **7–60**、\`timeMask=9\` 的候选。总共 **12 个不同的 (species, criteria, point-index) 来源组合**。原始执行中每种组合有 6 次重复观察；它们是区域遍历次数，绝不直接算作 72 个最终遭遇槽位。

同一实验独立确认：只修改 #5046 的 \`SourceCollisionArea\` 区域过滤上下文，会拒绝四条候选，但是最终序列化全部五张 .pkl 的 SHA 与原始基线一致。因此 #5072、#5257 是可以解释单点过滤为何不足的**真实其他候选**；还需运行 **变体自己的原生 source candidate trace** 才能证明 #5046 在变体中确实消失，而其他两点依旧进入同一最终槽位合并。

## 新增只读小范围追踪模式

研究分支专门新增 \`--trace-causal-profile sv400-186-from176-min-level-and-158-5046-duplicate\`，要求原始 61+223 双重 SHA 验证，追踪目标**写死在源码中**，不能输入参考 PKHeX 的候选数据，也不能默认启用。

跟踪集合：
- Location 176 和 186：物种 88、287、335、336、546、547。
- Location 158：物种 313、314。
- 额外记录 186 ← 176 的实际 \`Absorb()\` 区间操作；基线、raw-min-only、raw-max-only、raw-both、单点 #5046 source-area 五种模式各自产生独立 JSONL。

\`scripts/Audit-SV400-186-MinLoss-5046-Duplicate-Trace.py\` 负责核实每个模式的原始 276 项 SHA 来源、五张输出文件、186 的 4／0／8 条实际序列化损失、#5046 候选被拒绝、#5072／#5257 原始来源依旧存在，以及单点方案是否真正保持最终 wild .pkl SHA。失败即终止，不把不完整的 trace 当成原始证据。

**截至本页提交：新的五模式 focused replay 尚未执行完毕，因此 186 的“哪一个 PointData 新引入 69 上限”仍未最终证明。** 原始 baseline-only 观察和完整原生 .pkl A/B 已通过；新证明须从最新 Actions 工件提取，确认后再把具体索引、criteria 和 \`Absorb\` 追加到本页。

