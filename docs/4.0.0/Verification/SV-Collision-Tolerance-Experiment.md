---
title: "SV 4.0.0｜碰撞容差 30/10/0 源数据对照"
aliases:
  - "SV Encounter Collision Tolerance"
tags: [SV, 4.0.0, pkNX, PKHeX, encounter, collision, SHA256, verification]
status: EXPERIMENT_DEFINED_NOT_RUNTIME_VALIDATED
---

# 目的与严格边界

本页延续真实原生遭遇重建、223 个 Havok TRCOL 外键闭合，以及 88 份基于**原生模板生成而非实机捕获**的 PK9 的双版本 LegalityAnalysis 测试。

截至本实验提交前，30f 基线为 29,840 条原生野生记录，对照固定 PKHeX 参考 26,861 条；原生独有 3,655 条，参考独有 676 条。固定遭遇双方均为 977 条，但 203 条参考独有与 203 条原生独有。88 个差异靶向 PK9 有 24 次原版拒绝、原生版通过，**这不是实机合法性证明**。

## 实际被修改的源码入口

- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterDumperSV.cs`
  - `IsContainedBy` / `IsCloseEnoughDistance` 通过 XYZ 三轴默认各 `30f` 的余量，影响野生跨区传播和固定遭遇漫游。
- `EncounterSlotDumper9.cs` 的 `LocationStorage.LoadPoints` 初始归区仍调用严格 `ContainsPoint`；三个实验仅改变跨区扩张容差。
- `FixedSymbolDumper9.cs` 原始位置匹配仍严格；非驻定宝可梦可再用容差判定漫游地点。
- `BoxCollision9.ContainsPoint` 内部 Y 轴存在纵向范围特殊判定，因此 `0f` **不是**几何意义上的严格三维碰撞求交。
- `IsCrossoverAllowed` 的地点 8 与 124 排除逻辑在本实验中完全不变。

## 可复现实验

使用 `.github/workflows/sv-native-pkhex-one-shot.yml` 在隔离 Windows runner 恢复原始 4.0.0 TRPFD/TRPFS、SHA 验证 61 个原始遭遇输入及全部 223 个 TRCOL，使用**同一个** PKHeX pinned commit：`0660d1e1f4924b8478daec73281bb8071a82ad19`。

`scripts/Sweep-SV-Collision-Tolerance.py` 按顺序生成 `30 / 10 / 0` 三套原生 `.pkl`，通过 `Compare-SV-Native-PKHeX-Encounters.py` 同参考逐字段比较；实验不读取 PKHeX 数据作为生成输入。

关键安全门：
1. 修改前检查三条 `30f` 常量各出现恰好一次，且 `30f` 替换是字节级空操作。
2. 仅修改 runner 的检出副本，`finally` 恢复原始源码字节；默认正式 pkNX 不变。
3. 每个模式均须通过原生来源、223 个 TRCOL 及五张表 SHA 核验。
4. **30f 重新生成的全部五张 `.pkl` 必须与上一阶段原生基线 SHA 完全一致**，否则拒绝发布实验报告。
5. 不允许参考 PKHeX 文件替代原生输入，不允许把额外槽位直接标记为可合法捕获。

## 输出证据

Actions artifact：`SV-400-original-collision-tolerance-30-10-0`。

- `sv-400-collision-tolerance-report.json`：原始/实验源码 SHA、两类原始证据 SHA、五张表各模式 SHA、逐表差异条数、地点 158 指标，以及相对 30f 的 CSV 多重集合差异。
- `T30/comparison/`、`T10/comparison/`、`T00/comparison/`：野生/固定原生独有与 PKHeX 参考独有的记录 CSV、对照 JSON。

重点比较每个模式中：
- `cross_from_id=158` 的原生独有野生记录；
- `location_id=156 && cross_from_id=158`；
- `location_id=158`；
- 固定遭遇包含地点 158 的差异；
- 其他地点的增删变化，避免为了修正地点 158 而破坏正常跨区。

注意：`difference_against_30_native_only` 统计的是**相对于参考库的差异 CSV** 的多重集合变化，不等价于两套原生全表之间的逐槽差异。需同时审阅完整对照 CSV。

## 结论解释

若 `0f` / `10f` 使地点 158 的误差大幅下降，这只支持「几何容差是差异原因之一」；仍须对照原生 TRCOL 实际空间边界以及游戏运行时行为。若固定 203 组大多不随容差变化，应进一步排查固定漫游与地点映射而非强行改碰撞体。

## 独立实机 PK9 验证（尚未完成）

仅接受来自朱紫 4.0.0 正常游戏流程、可说明版本、获取时间/位置/等级及提取路径的 PK9。保存原始 SHA，记录种族、形态、等级、捕获地点、球种、PID、EC、IV、闪光值相关上下文以及遭遇类型。

在**同一 PK9 字节串**上同时运行原版/原生替换版 PKHeX `LegalityAnalysis`，保留 `Valid`、EncounterMatch 类型、逐条判断结果及工具 commit。官方 PKHeX 测试样本和模板合成的 88 个靶向样本不能冒充实机样本。

若数据暂时缺失，只能标记 `GAME_CAPTURE_NOT_AVAILABLE`，不可宣称 PID / EC / IV / 异色 RNG 或 24 次判定翻转已经证实。
