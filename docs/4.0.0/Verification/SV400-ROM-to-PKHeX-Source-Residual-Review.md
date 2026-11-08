---
title: SV 4.0.0｜原生 ROM → PKHeX Gen9 完整重建：野生 6 组区间与固定符号 20B 来源
aliases: [SV400 Wild T30 Six Groups, WorldEnd 158 FixedSymbol Native Full20]
tags: [SV, 4.0.0, PKHeX, pkNX, PointData, Wild, FixedSymbol, TRCOL, SourceTrace]
status: ORIGINAL_61_PLUS_223_SHA_AND_NEW_20B_SOURCE_VERIFIED_NOT_GAME_RUNTIME_LEGALITY
updated: 2026-11-08
---

# 原生资产构建与已闭合部分

固定的真实原始来源来自 4.0.0 TRPFD/TRPFS、61 项 pkNX 需要的文件及 223 个真实 Havok TRCOL，原始 SHA 检验通过。原生输出是 vendored pkNX 的独立 headless 构建，参考库只用于 **生成之后**的对账。最新重新验证的真机外源重跑：[GitHub Actions #42447774923](https://github.com/969981/SV_Resources/actions/runs/42447774923)，job `compile-no-rom` 与 `original-native-replay` 均 success，生成清单 `status=GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES`，`levelABMode=baseline`，实际读入 276 个原始文件，三张普通 Raid 与之前 SHA 不变。

独立 PKHeX commit：`0660d1e1f4924b8478daec73281bb8071a82ad19`。五张原生表：

| 类别 | 源生记录 | PKHeX 参考 | 多重集合相同 | 差异 |
|---|---:|---:|---:|---|
| Wild | 29,840 | 26,861 | 26,185 | 原生独有 3,655；参考独有 676 |
| Fixed | 977 | 977 | 774 | 两侧各 203 |
| Raid Paldea | 454 | 454 | 454 | SHA 完全一致 |
| Raid Kitakami | 133 | 133 | 133 | SHA 完全一致 |
| Raid Blueberry | 113 | 113 | 113 | SHA 完全一致 |

以上是 **合法性模板文件** 的比较；不表示野生与固定的游戏合法性已经与 PKHeX 完全等价。

# 野生 T30 差异按 7 个非等级字段归组

按 `Location, CrossFrom, Species, Form, Gender, TimeForbidden, WeatherAllowed` 对原始 SHA 固定的 T30 双侧差异进行多重集合匹配，忽略 `MinLevel/MaxLevel` 只用作候选区间诊断：

- 676 条参考独有中有 666 个可分配到不同的原生等级差异候选；剩余 10 条不是全新物种/地点，而是 6 组参考区间个数多于原生候选区间个数。
- 6 组分别是 `(140,158,163)`、`(140,158,532)`、`(158,0,129)`、`(158,0,313)`、`(158,0,314)`、`(158,0,744)`。其他形态、性别、时间、天气条件完全相同。
- 例如物种 129，地点 158、CrossFrom=0，参考为 `13–16,19–25,62–68`，原生仅 `5–99`；物种 313/314 参考 `9–16,18–25,30–39`，原生 `7–60`；这些**可能**涉及原始点位合并后跨越空隙，但不可仅凭参考假定应该拆分。
- 原生独有 3,655 条里 **2,337** 条 `CrossFrom=158`；**另有 808** 条 `CrossFrom=158` 的原生记录已经与参考完全匹配。全局删除 158 跨区槽位会直接误伤这 808 条。
- 原生独有去掉 666 个一对一等级候选后还剩 2,989 次，需原始 PointData 坐标、父区域与 TRCOL 逐条绑定，不能用参考数据人工白名单消除。

运行 `scripts/Trace-SV400-Wild-T30-Residual.py`：传入来自原始 Actions 的 `T30/comparison/wild_native_only.csv`、`wild_pkhex_only.csv`，以及原生 `SV400_Native_Encounters_For_PKHeX.csv` / `SV400_Native_To_PKHeX_Manifest.json`。默认拒绝文件哈希不等于已验证原始 Artifact 的数据，输出七字段分组 CSV 和六组 JSON。

# Fixed：最新原生事件精确绑定 20 字节模板

此前参考逆向对账的 236 条 WorldEnd → 158 反事实源候选里，232 条可以凭完整 20B 唯一匹配，4 条（840 啃果虫）因旧来源 CSV 的事件行号重名而无法确定来自哪个 TableKey。2026-11-08 原生追踪补充 `originalFixed20Hex` / `originalFixed20SourceInsertIndex` 后，**原生 TableKey 与完整模板一一对应**：

| 原始 TableKey | tableIndex | 等级 | `FlawlessIVCount` | `TeraType` | 原始 ActionId |
|---|---:|---|---:|---:|---|
| `su1_area02_07` | 665 | 15 / 59 | 0 | 0 | `SIMPLE_POP` |
| `t_su1_area02_08` | 799 | 15 / 59 | 3 | 8 | `NONE` |

两个来源在 Scarlet / Violet 的原生 trace 都出现。它们的 `primaryLocations=[136]`、`inferredWanderLocations=[132,136,158]`，相同的原始区域和碰撞关系不能解释不同的模板字段。`originalFixed20WasNew` 在 Scarlet 首次出现、Violet 复用，符合全局去重方式。

严格分开：旧的 236 行中 case 198/199（15 级）、202/203（59 级）不能凭旧 CSV 的行号判定其拥有的精确 TableKey，但新的源事件已将 **每个 TableKey 的 20B 记录** 唯一锁定；若需可唯一命名的记录，应引用 `game + tableKey + tableIndex + level + originalFixed20Hex` 而不是旧 case 序号。

实际验证的原生固定表 SHA-256：`F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8`。 `scripts/Resolve-SV400-Fixed158-Original20.py` 将最新原生 trace + 原生构建清单 + 旧版严格参考审计 + 旧版真正原生固定 .pkl 四个输入 SHA 关联，输出可排序源实体 CSV。源码均为只读，不修改 PKHeX 或游戏。

# 仍未完成的独立验收

1. 野生过度合并 / 158 跨区：必须从原始 EncountPokeData/PointData 与 TRCOL 给出可复现、可反证的来源原因，而非追求覆盖 PKHeX 参考数目。
2. Fixed 158 的保留取舍：虽然 20B 来源身份闭合，`AreaInfo.Tag/Type`、原始 TRCOL 严格命中仍不足以断言剧情中旗标、可达范围和捕获地点，应测真实运行时的固定符号。
3. 普通 Raid 3/3 相同只代表普通 Raid；历史配送 Raid、Might 7 星、特殊大量出现、手工静态剧情、HOME 重映射、RNG 仍各自独立。
4. 捕获原生 PK9 再执行固定版本 `PKHeX.Core.LegalityAnalysis`，检查 PID、EC、六项 IV、形态、等级、地点、时间、天气、活动条件等；模板匹配不是 RNG 验收。