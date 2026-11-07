---
title: SV 4.0.0 原生遭遇包定位与 PKHeX 重建
aliases: [SV Gen9 Encounter Recovery, 朱紫遭遇数据库重建]
tags: [SV, 4.0.0, PKHeX, pkNX, Trinity, TRPFD, 遭遇]
status: NATIVE_INDEX_LOCATED
---

# 朱紫 4.0.0 原生遭遇包恢复与 PKHeX 对账

> **证据边界（2026-11-07）**：这里记录来自 **原始 SV 4.0.0 TRPFD 索引** 的精确包位置。61 项核心 pkNX 输入已全数定位；定位不等于完成实际文件提取，也不等于完成 PKHeX 合法性资源重建。

## 1. 为什么不用重新解包整个 8 GiB 文件

Git master 当前的 Unpack/4.0.0/romfs/arc/data.trpfs/virtual/ 没有 world/ 目录，故没有可直接执行完整原生野生遭遇聚合所需的 world/data 及 world/scene 文件。

但是现有原始索引已完整：

- Unpack/4.0.0/romfs/arc/data.trpfd/_index/file_index.tsv.gz：408,641 条原始文件 hash、包编号、虚拟路径。
- Unpack/4.0.0/romfs/arc/data.trpfd/_index/pack_index.tsv：23,589 个原生包的编号、包名与包记录大小。
- Unpack/4.0.0/romfs/arc/data.trpfd/_index/descriptor_summary.json：TRPFD 源 SHA、409k 索引汇总（精确为 408,641）。
- 4.0.0/1/arc/data.trpfs.7z.001 等 83 分卷：可经 Prepare-SV-Trinity.ps1 在 repo 外恢复和哈希校验。
- Unpack/4.0.0/romfs/arc/data.trpfs/_index/full-extract-progress.json：较早检查点 nextPack=21702、PARTIAL（并非所有独立派生任务的即时状态）。

**优先仅恢复 11 个包**，无需全量重新处理其余所有包。

## 2. 真实 TRPFD 索引定位结果

[实际定位 CI](https://github.com/969981/SV_Resources/actions/runs/42329519467) 已经在真实原生 4.0.0 TRPFD 上完成全量遍历。61/61 显式 pkNX 输入找到，缺失 0、歧义 0，涉及 **11** 个原生包。原生索引记录的选中包大小合计 **20,106,392 字节**；这不是解压后字节数。

11 个 0-based 原生 PackIndex：

    10815
    17207
    19033
    21993
    21995
    23415
    23422
    23423
    23424
    23425
    23556

| 分类 | 路径数 | 原生代码 |
|---|---:|---|
| 野生遭遇配置 | 3 | Models/PaldeaSpawnModel.cs：EncountPokeDataArray |
| 野生出生点 | 4 | Models/PaldeaSpawnModel.cs：PointDataArray |
| 区域、等级与地名键 | 14 | Models/PaldeaFieldModel.cs |
| 主区域碰撞场景 | 4 | Models/PaldeaSceneModel.cs：TRSCN 根对象 |
| 固定符号基础表 | 2 | Encounter/FixedSymbolDumper9.cs |
| 朱/紫双版本固定符号点位 | 6 | Models/PaldeaFixedSymbolModel.cs |
| 索财灵金币位置 | 1 | Models/PaldeaCoinSymbolModel.cs |
| 三个地区普通团体战数据 | 18 | TeraRaidRipper.cs |
| 三个地区特殊大量出现点位 | 3 | MassOutbreakRipper.cs |
| 地名英文、简体、繁体 DAT/TBL | 6 | GameDumperSV.cs |
| **合计** | **61** | pkNX 原生实际源码 |

pkNX 有的路径使用 .bin，有的内置导出器用相同基础名的 .bfbs。**两者都在真实索引中时必须优先选择实际运行时源码使用的 .bin**；同名不同扩展名不属于重复文件/歧义。每项由原生 hash 与 pack ID 固定，并保留别名记录供后续核对。

## 3. 新脚本及命令

### TRPFD 仅索引阶段（已真实运行并验证）

    python scripts/Locate-SV-PKHeX-Native-Packs.py

输出定位证据：

    Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-packs.json

准确标注 source_hash、原始虚拟路径、pack_index、pack_name、状态；同时给出是否缺失、是否有歧义与选中包总预算。验证：

    python -m unittest discover -s tests -p test_sv_native_encounter_locator.py -v

### 原始数据精准提取阶段（工作流已实现，独立验收）

- GitHub Action: .github/workflows/sv-encounter-native-extract.yml
- 原生提取器: scripts/Extract-SV-PKHeX-Native-Packs.py
- 合成测试: tests/test_sv_encounter_native_extract.py
- Source-only: 由现有 83 个容器分卷在 Actions 临时目录恢复并完成原始哈希校验，绝不改写 4.0.0/1/。
- Bounded: 仅选择 11 个实际 PackIndex，预算最多 32 包、64 MiB 的索引所报包体积。
- Existing code: 复用项目已有 SV.TrinityDump / GFTool.Core / SHA256 verified process_batch。
- Check: 除验证包内所有成员 SHA 外，61 项核心资源额外逐一核对虚拟原名、源 hash、文件大小和 SHA256。
- Publication: 只有 61/61 通过才写入独立审核分支与 PR；不会自动改 master 的世界原生文件。
- Evidence: encounter-native-extraction.json、原始提取报告与精确来源记录。

**不得将 native 位置定位当成已经生成 PKHeX 的 .pkl。** 只有 extraction.json 有 61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED 且原始哈希实测成功时，才能声明原生核心文件完成提取。

## 4. Havok 碰撞间接引用为何依然未闭合

PaldeaSceneModel.cs 从四个 TRSCN 读取地区碰撞；当 shape 为 Havok 时，它读取数据对象里的 TrcolFilePath，再用 ROM.GetPackedFile 动态请求那个文件。因此仅依据四个 TRSCN 的确定路径无法列出所有实际依赖。

应先对真实四个 TRSCN 做 schema 解析，列出全部 TrcolFilePath，再在 TRPFD 中按原名/hash 定位新包、提取、SHA 核验。实际点位与碰撞结合以后，才能正确计算跨区、天气标记与捕获地点。**此阶段目前仍未完成**。

## 5. PKHeX 原生资源构建与合法性验收

对照端已经独立验证并实现可逆二进制解析：见 [[sv-pkhex-gen9-encounter-bridge]]。

| PKHeX 参考类别 | 参考量 |
|---|---:|
| 野生区域 | 400 |
| 野生槽 | 26,861 |
| 固定符号 | 977 |
| 普通团体战（帕底亚／北上乡／蓝莓） | 454 / 133 / 113 |
| 特殊大量出现 | 12,636 |

这些是 **PKHeX 参考二进制** 的统计，不是当前原生朱紫数据的重建统计。完整游戏资源到 PKHeX 的链为：

1. 真实 EncountPokeData + PointData + AreaInfo + TRSCN/TRCOL → pkNX EncounterSlotDumper9 → 新的野生资源。
2. 固定表 + 双版本坐标 + 场景/跨区许可 → FixedSymbolDumper9 → 新的固定资源。
3. 18 个 RaidEnemyTableArray + 朱/紫概率 → TeraRaidRipper → 三地区太晶团体战二进制。
4. 游戏原生输出与 PKHeX 参考文件先比 SHA，再逐区域、槽、物种/形态、地点、等级、天气/时间、Raid RNG 做差异报告。
5. 锁闪剧情 EncounterStatic9、历史活动、MGDB/EGDB、特殊七星团体战、HOME 地点 remap 是独立证据链，不应因为普通 wild/fixed 可匹配就推定全部合法。

**状态**：阶段 1–3 已有源码与必要原始包定位证据，但原生输出未完成。禁止使用已有 PKHeX 二进制回填或冒充 SV 4.0.0 原生解包数据。

## 6. 源码依据

- tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterSlotDumper9.cs
- tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/FixedSymbolDumper9.cs
- tools/pkNX/pkNX.WinForms/Dumping/Gen9/Models/PaldeaSpawnModel.cs
- tools/pkNX/pkNX.WinForms/Dumping/Gen9/Models/PaldeaSceneModel.cs
- tools/pkNX/pkNX.WinForms/Dumping/Gen9/Models/PaldeaFixedSymbolModel.cs
- tools/pkNX/pkNX.WinForms/Dumping/Gen9/TeraRaidRipper.cs

[真实源定位 CI](https://github.com/969981/SV_Resources/actions/runs/42329519467) · [PKHeX 二进制往返验证 CI](https://github.com/969981/SV_Resources/actions/runs/42326319366)
