# SV 4.0.0 原始 ROM 生成的 5 张 .pkl 与 PKHeX 对比

## 对比目标与来源

- 原生数据：此前提供的 `SV400_4.0.0_original_native_five_PKL_baseline.zip`，5 张真实 .pkl，原始 61 M2 + 223 TRCOL 来源证明、276 个实际读取资源。
- 官方基准：PKHeX commit `0660d1e1f4924b8478daec73281bb8071a82ad19`；**2026-11-10 核查 PKHeX master 的 5 个 Git Blob SHA 与固定提交逐个相同**。
- 本地逐字节核验原生 ZIP 里的全部 5 张文件 SHA，与原始 Actions `T30/comparison/native-comparison.json` 的报告逐文件完全相符。
- 原始对账 CSV：之前独立 PKHeX 官方 `.pkl` 与原生 `.pkl` 的 T30 对账包；本次**没有重新下载 PKHeX 官方 .pkl 的完整二进制**，因而字节完全一致结论基于当时保存的官方 SHA 和报告，以及今天复核的 PKHeX Git Blob ID，而非本次重新直接对字节。

## 五张文件结果

| 文件 | 原生记录 | PKHeX | 相同 | 原生独有 | PKHeX 独有 | 原生 SHA256 = 官方 SHA256 |
|---|---:|---:|---:|---:|---:|---|
| `encounter_wild_paldea.pkl` | 29840 | 26861 | 26185 | 3655 | 676 | 否 |
| `encounter_fixed_paldea.pkl` | 977 | 977 | 774 | 203 | 203 | 否 |
| `encounter_gem_paldea.pkl` | 454 | 454 | 454 | 0 | 0 | 是 |
| `encounter_gem_kitakami.pkl` | 133 | 133 | 133 | 0 | 0 | 是 |
| `encounter_gem_blueberry.pkl` | 113 | 113 | 113 | 0 | 0 | 是 |

## 野生 676 条 PKHeX-only 具体差异

- 原生 29,840，PKHeX 26,861，共同完全一致 26,185；原生额外 3,655，PKHeX 额外 676。
- 使用固定原始对账中的精确筛选，**666 条 PKHeX-only 有相同的物种、形态、性别、地点、CrossFrom、时间、天气，只是等级上下限不同**；其余 10 条没有这种成对关系。
- 在这 666 条中，按字段差异：**仅上限 373、仅下限 219、上下限都变 74**。
- 原生独有的 3,655 条里，CrossFrom=158 的占 2,337 条，特别是目标 156←158 原生独有 236 条。
- 原生有 416 个 wild area block，PKHeX 有 400 个 block；二进制长度分别是 **242,056 B** 与 **218,096 B**。

### 野生 178、192←178、180←178

| Location | CrossFrom | 原生独有 | PKHeX 独有 |
|---:|---:|---:|---:|
| 178 | 0 | 57 | 57 |
| 192 | 178 | 57 | 57 |
| 180 | 178 | 28 | 28 |

三组 PKHeX-only 共 142 条，多为原始 PointData 较窄等级区间被 pkNX Consolidate/Absorb 合并到更宽区间。**此处不能把 142 条直接认定为 142 条未能在实际游戏发生的遭遇**；官方参考本身也是静态规则。

### 差异最多的区域（见 wild_difference_by_location.csv）

| Location←CrossFrom | 原生独有 | PKHeX 独有 |
|---|---:|---:|
| 158←0 | 553 | 124 |
| 164←158 | 388 | 6 |
| 144←158 | 308 | 16 |
| 166←158 | 308 | 0 |
| 156←158 | 236 | 26 |
| 162←158 | 174 | 22 |
| 140←158 | 111 | 50 |
| 136←158 | 128 | 0 |
| 160←158 | 118 | 6 |
| 178←0 | 57 | 57 |

## 固定遭遇 203 条差异

- 原生 977／PKHeX 977，完全一致 774，原生独有 203，PKHeX 独有 203。
- **精确逐字段可对的 189 条**：原生多了地点 158，去掉该额外地点后可得到 PKHeX-only 对应记录。这不是可直接批量修改的合法性证明。
- 另有 **14 原生独有 + 14 PKHeX 独有** 尚不能用“仅删除158”解释。
- 原生独有的 203 中有 **191 条本来含158**，其中 189 条构成上述精确配对，剩余两条不能自动同化。
- **114 条原生与 PKHeX 已完全相同的记录本来就含158**。全局删除158会损失这些正确模板，必须严格保护。
- 原生和官方 20B×977 大小均为 19,540B，但 SHA 不同。

## 三张普通 Raid

- 帕底亚 **454/454**、北上乡 **133/133**、蓝莓学院 **113/113**，二进制 SHA 相同；可以保持原样。
- 不代表历史特殊七星活动/BCAT/特殊大量出现同样已还原。

## 附件用途

- `comparison_summary.json`：汇总、来源、文件 SHA、顶级差异地点与 178 重点。
- `wild_native_only.csv`、`wild_pkhex_only.csv`：3,655 / 676 条完整记录差异。
- `wild_level_range_pairs.csv`：666 条只差等级的精确对应记录。
- `wild_remaining_pkhex_only.csv`：10 条不能通过仅等级解释的记录。
- `wild_difference_by_location.csv`：按 `(Location,CrossFrom)` 的野生差异数量统计。
- `fixed_native_only.csv`、`fixed_pkhex_only.csv`：203 / 203 条完整记录差异。
- `fixed_158_counterfactual_pairs.csv`：189 条由原生多一个158即可精确变成参考的实例。
- `fixed_remaining_native_only.csv`、`fixed_remaining_pkhex_only.csv`：14 / 14 条残余差异。

## 下一步验收

1. 对 178 的原始 PointData/碰撞区域所有权做原生隔离 A/B，而不是直接更改 `.pkl`。
2. 每一轮都必须输出 **原匹配保留、原匹配损失、新增参考匹配、非目标记录变化**，并验证另外 4 张 `.pkl` 不变。
3. 对固定符号 189 条多158定位原始 `TableKey/ActionID/TRSCN/TRCOL`；逐条验证来源后，才能考虑正式修正，绝不能全局删除158。
4. 真正 PK9 合法性还需要实机或可靠行为证据。
