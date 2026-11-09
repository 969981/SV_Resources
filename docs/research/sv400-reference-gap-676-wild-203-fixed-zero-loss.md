---
title: SV 4.0.0｜野生 676 与固定 203 的逐字段残差及零损失验收
tags: [SV, 4.0.0, pkNX, PKHeX, Gen9, PointData, FixedSymbol, zero-loss, source-provenance]
status: ORIGINAL_T30_PINNED_REFERENCE_DIAGNOSTIC_NOT_RUNTIME_LEGALITY
updated: 2026-11-09
---

# 问题与原始不可变证据

目标是**保留野生 26,185 条、固定 774 条已与固定 PKHeX 参考逐字段匹配的记录**，而不是为了达到参考总数删除大量原生遭遇。使用原始 SV 4.0.0 **61 项遭遇源文件＋223 个 Havok TRCOL**，原生 30f baseline 产生野生 29,840、固定 977 条；参考 commit 为 \`0660d1e1f4924b8478daec73281bb8071a82ad19\`。

独立来源：
- [原始 30f/10f/0f 碰撞 A/B #42356030937](https://github.com/969981/SV_Resources/actions/runs/42356030937)：工件 \`SV-400-original-collision-tolerance-30-10-0\`；从真实 \`T30/comparison\` 提取 \`wild_*_only.csv\` 与 \`fixed_*_only.csv\`。虽然此旧工作流的总状态有失败，下面四份工件输入的内容与独立 SHA 已锁定；不是把失败工作流宣称全部验收通过。
- [61＋223 SHA 校验原生→PKHeX 桥接 #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291)：\`SV-400-source-attested-native-PKHeX-encounter-bridge\`，包含原生五张 \`.pkl\`、manifest 和固定 PKHeX 版本参考对账；**不是直接复制 PKHeX 参考二进制作为原生资源**。
- [原始 ROM 六方案与来源因果重放 #42547351802](https://github.com/969981/SV_Resources/actions/runs/42547351802) 为 SUCCESS；\`176/194 raw-max-only\`、\`CrossFrom=158 strict-prefer-specific-owner\` 是**各自独立**的 A/B，不表示组合版本已通过。

原始 T30 四份差异 CSV SHA-256：

| 文件 | SHA-256 |
|---|---|
| \`wild_pkhex_only.csv\` | \`C5CED4CF842AE24658A40D8B6EFA6D8C6A2CD5F2BD1AB9EB177C1DF4D17500DB\` |
| \`wild_native_only.csv\` | \`6A2B3F50D9C0A51B0C93D1F36DACEF3837E4F66E224A4953F8D69BE3549892B5\` |
| \`fixed_pkhex_only.csv\` | \`03D8C3888E17E6CEBEF4B79140ECD5BE947A4AB44BA136253D11E947AE5E977F\` |
| \`fixed_native_only.csv\` | \`8CABF1DD665B551B11C969039901185D1D5EBAC0A5175C0C5F580926386883F2\` |

以上仅为**来源对账与假设分组**，不代表实际游戏已产生或接受相应 PK9。

# 野生 676 条参考独有：最小代价等级配对

完整二进制对账：原生独有 **3,655**，参考独有 **676**，已匹配 **26,185**。按以下七字段固定非等级身份做多重集合分组：

\`(location_id, cross_from_id, species_national, form_raw, gender_raw, time_forbidden_mask, weather_allowed_mask)\`

每个原生独有/参考独有等级区间在组内做**最小绝对等级距离的一对一配对**（若出现重复实例，不丢失 occurrence）；配对只用于诊断，不用于自动给游戏规则贴合法标签：

| 参考独有等级差异 | 数量 |
|---|---:|
| 仅最高等级不同 | **372** |
| 仅最低等级不同 | **220** |
| 两端不同 | **74** |
| 同一七字段身份下参考区间多于原生、无法一对一配完 | **10** |
| **合计** | **676** |

剩余 10 次 reference occurrence 集中于**六组**，包括 \`158←0\` 的 129、313、314、744 和 \`140←158\` 的 163、532。它们的真正问题不是物种缺失，而是原始区间可能跨空缺被 \`Absorb()\` 合并；不能在导出的 \`.pkl\` 上按参考白名单人工拆槽。

## 候选下一优先级：178 相关的 142 条

| location | CrossFrom | 参考独有数量 | 同七字段候选的等级关系 |
|---:|---:|---:|---|
| 178 | 0 | 57 | 全部参考上限低于相应原生上限 |
| 192 | 178 | 57 | 同上 |
| 180 | 178 | 28 | 同上 |
| **合计** | | **142** | 最低等级一致，差异集中在上限 |

举例：物种 74 原生可为 \`59–74\`，参考为 \`59–70\` 或 \`59–71\`。由于同组内多槽可能产生最小代价配对歧义，**“142 条最高等级差异”是可复现候选分类，不是已证明应统一削减上限**。特别注意 \`176/194 raw-max-only\` 恢复 50 个 reference occurrence 时是**增加**原始 PointData 上限；直接推广到 178 显然方向相反。

接下来必须追原始 \`178\` 来源 \`SourcePointAsset + SourcePointIndex + SourceCollisionArea + AreaInfo min/max + criteriaIndex\`，并通过完整 ROM、隔离 A/B 验证：
1. \`178/0\`、\`192/178\`、\`180/178\` 各自的 reference-match retention/loss/recovery；
2. 所有非目标野生模板和固定／三张普通 Raid 的 SHA 不变；
3. **绝不可牺牲 26,185 条基线完全匹配野生记录**。

# 固定 203 条参考独有：189＋14，但不得按评分删除 158

固定原生与参考各 977 条，**774 条完整 20 字节一致**，双侧各 203 条不同。以非地点的原始 11 个字段（物种、形态、等级、IV 数、太晶属性、性别、特性、四招式）完整一致、从原生 \`location0–3\` *仅剔除 158* 后与参考地点集合**恰好一致**为可研究诊断配对：

- **189** 组可一对一定位到额外地点 158；只是待研究候选，**不是可以删除的 189 条**。
- **14** 组没有上述精确配对关系；其中 9 组原生地点为 \`176,194\`、参考仅 \`176\`，2 组物种 194 原生有 \`144,146,148,158\`、参考 \`144,148\`，2 组含 \`16,67\`、参考仅 16，另有 1 组物种 297/40 没有相同完整非地点模板的参考差异记录。
- **最重要的反例：774 个已匹配的原始固定模板中，有 114 个完整匹配模板本身就含地点 158。** 所以全局去掉 158 会直接损害正确记录。

不能根据 PKHeX 参考独有差异反向伪造游戏条件。对 189 组应回到原始 \`FixedSymbolDumper9\` 的 \`TableKey + tableIndex + originalFixed20Hex + PokeAI.ActionId + TRSCN/TRCOL + AreaInfo.Tag/Type\`；真正可否遇到还涉及运行时故事旗标与地图活动区域。对剩余 14 条应分别研究 176/194 跨区与 16/67／乌波的碰撞/地点逻辑，而非套用 158 规则。

# 防回归与明确验收

| 项目 | 必须满足 |
|---|---|
| 原始输入可信 | T30 四 CSV 和 native/bridge manifest 的不可变 SHA 一致 |
| 基线保护 | Wild **26,185** 和 Fixed **774** 的既有参考完整匹配不可减少 |
| WorldEnd 防误删 | Fixed **114** 条已完全匹配、含 158 的原始模板不可损失 |
| 野生多重集合 | 666 条级别配对 + 10 条剩余，不得将相同物种的多个等级区间算成一条 |
| Fixed 元数据 | 189 条仅地点差异与剩余 14 条分别留存**逐记录证据** |
| 未来 A/B | 必须保留精确已匹配模板；比较净匹配数不能掩盖单个旧匹配损失 |
| 游戏规则身份 | 不得仅用 PKHeX 数据拟合游戏，未取得真实 PK9/原生运行时证据前保持默认生成器不变 |

此文档为独立差异源审计，不向游戏、PKHeX 或 pkNX 正式数据库回写任何数据。


## 2026-11-09：178、180、192 的 142 条上限差异，原始合并前后链已复核

新增独立只读审计脚本 scripts/Audit-SV400-Terarium178-Original-Merge.py，使用 [Actions #42547351802](https://github.com/969981/SV_Resources/actions/runs/42547351802) 的原始来源工件 SV400-original-point-level-and-fixed-158-attributed-evidence （实际来源 **61 M2＋223 TRCOL**）；输入只接受以下固定证据：

- SV400_666_wild_point_provenance.csv SHA-256：DF89744F7C484F7EBA0C1BB395D5E2B91287DCBD85EB3E4FDF01540F3E0777CA。
- SV400_Point_Trace_Validation.json 必须证实 666 条来源关联、原生野生 .pkl SHA：01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187。

重点：178←0 共 57 条、192←178 共 57 条、180←178 共 28 条。原始 preconsolidation_level_ranges_json 和 postconsolidation_level_ranges_json 逐项核对：

| 来源级别的证据 | 142 条中的计数 |
|---|---:|
| 合并前同时存在上限为 **74** 与 **70／71** 的区间 | **142** |
| 合并前已存在与参考完全一致的等级区间 | **127** |
| 合并后仍存在与参考完全一致的等级区间 | **2** |
| 合并后出现原生较宽的 **74** 级上限区间 | **142** |

原始候选示例：59–70、65–70、65–74，经过区间合并可变成 59–74，固定 PKHeX 参考需要 59–70。此处只证明原始 pkNX 重建链的实际差异，**不能直接认定游戏应该把所有区间拆分**。

这 142 条来源关联全部引用原始 world/data/encount/point_data/point_data/encount_data_su2.bin。对原始 PointData 索引去重后：上限 74 的候选 334 个索引，上限 70／71 的候选 378 个索引，交集 83，合计并集 629 个不同索引。**来源关联可能不唯一；这些索引不是最终序列化槽位，也不是实机刷怪证明。**

下一个隔离 A/B 应优先检查 LocationStorage.Consolidate()／PaldeaEncounter.Absorb() 是否将不属于同一原始区域/点位所有权的区间过度合并，而不是统一截断 max=74。该审计只产生证据 CSV/JSON；**默认 .pkl、PKHeX 参考和原始 ROM 都不修改**。


### 反例：改为 strict overlap 并不能单独解决这 142 条

从已经 SHA 验证的原始 preconsolidation_level_ranges_json，额外执行真正的闭区间重叠判定：

- **142／142** 组：至少存在一组上限 74 的区间与上限 70／71 的区间已经具有非空区间交集，并非单纯相差 1 级。
- **127／127** 组：合并前与参考完全一致的原始区间，也与其中某个上限 74 的候选区间真正重叠。

例如 59–70 与 65–74 的交集为 65–70。仅仅把 PaldeaEncounter.Absorb() 的“允许相邻”改成“必须相交”，这两者**依然能合并**。因此下一项假设应以原始区域、碰撞体、PointData/Criteria 归属为边界，检验哪些区间本不应在同一个合并池；不能把 strict-overlap 当作已经有效的修复。当前源关联缺少完整的逐候选碰撞所有权，因此也不能凭现有摘要直接宣称应该拆成多个正式遭遇槽位。
