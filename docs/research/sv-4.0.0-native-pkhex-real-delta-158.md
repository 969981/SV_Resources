---
title: 朱紫 4.0.0 原生 PKHeX 重建差异：158 地点与双版本 PK9 法规回归
tags: [SV, pkNX, PKHeX, Havok, LegalityAnalysis, Obsidian]
status: NATIVE_RECONSTRUCTED_PARITY_INCOMPLETE
---
# 真正 4.0.0 原生 PKHeX 差异与待验收

证据：原生重建 Actions [#42336889324](https://github.com/969981/SV_Resources/actions/runs/42336889324) 的真实 binary/CSV/JSON 工件，及独立两版 PKHeX.Core 运行 [#42338343762](https://github.com/969981/SV_Resources/actions/runs/42338343762)。PKHeX 版本固定 `0660d1e1f4924b8478daec73281bb8071a82ad19`。

## 已完成的真实验证

- 原始 Trinity 归档、61 项基础原生遭遇文件、223 项动态 Havok TRCOL 均 SHA 验证；pkNX 实际读取 276 个原生文件并生成五张 .pkl，非参考库回写。
- 普通 Raid：帕底亚 454、北上乡 133、蓝莓学园 113，三张独立原生生成表与 PKHeX **字节完全一致**。
- Wild：原生 416 areas / 29,840 slots，对照 400 areas / 26,861 slots，676 条仅参考有、3,655 条仅原生有；**未通过完整对账**。
- Fixed：原生和参考均 977 条，203 对 203 条多重集差异，**未通过完整对账**。
- 两次独立编译的 PKHeX.Core 已分别运行原版与替换五张原生遭遇表的版本；6 份真实官方 PK9 合法样本、6 个 MetLevel 负例、3 个地点负例均保持相同结论。

## 158 的精确差异（真实 CSV 计算）

| 指标 | 结果 |
|---|---:|
| 固定原生独有 203 条中含地点 158 | 191 |
| 固定参考独有 203 条中含地点 158 | 0 |
| Wild 原生独有 3,655 条中 cross_from_id=158 | 2,337 |
| Wild 参考独有 676 条中 cross_from_id=158 | 161 |
| Wild 原生独有、捕获 location_id=158 | 603 |
| Wild 参考独有、捕获 location_id=158 | 130 |

对 Fixed 的 203+203 条差异，**删除四个地点字段后，双方各只有 1 条仍无法互相匹配**。参考特有物种 23/Lv15，对照原生特有物种 297/Lv40；不能将它们归并为「地点变化」。

两份原生固定遭遇候选，Species 28 穿山王、地点 158、SL 版本、Lv24 和 Lv67，在原版 PKHeX.Core `LegalityAnalysis` 为 `EncounterInvalid / EncInvalid`；替换原生数据后的 PKHeX.Core 为 `EncounterFixed9 / Valid=true`。这是**同一样本经过两套实际加载资源的合法性判定变化**，不是静态二进制格式差异，尚不能证明新地区归类是正确的。

## Havok 根因研究线索，不应直接改游戏合法性规则

Vendored pkNX `tools/pkNX/pkNX.Structures/Havok/HavokCollision.cs` 中 `AABBTree.ContainsPointInNode` 按 X/Z 判断包围盒，其 Y 轴重叠测试当前是注释状态。另 `ContainedBy(IContainsV3f)` 只用 `BoundingBoxRectangles[0]` 的一个顶点来近似整体包含。它们是**待验证的几何和邻区扩散问题候选**，并未证明地形 Y 逻辑错误：pkNX 可能有意将 Y 当作向下地形射线。严禁为凑齐 PKHeX 数量直接打开 Y 判断或删除 158 槽。

优先实验应保留原版 pkNX 作为基线，以真实 TRCOL 和真实出生点 XYZ 单独记录「水平投影 / Y 射线 / 完整体包含」三种判定是否变化，外键回溯源场景及 SHA，再分别比较 Fixed 和 Wild 多重集合，并与实机捕获/事件约束独立核对。

接下来仍需查清 1 条固定物种结构差异、野生等级范围、Kitakami 158 地区特殊天气/邻区及版本差异；Outbreak 12,636 条仍未从原生生成。三张普通 Raid 100% 不代表全部 Gen9 法律性数据重建完成；六个官方 PK9 样本也不构成全体锁闪、PID/IV RNG、活动或 HOME 转移验收。
