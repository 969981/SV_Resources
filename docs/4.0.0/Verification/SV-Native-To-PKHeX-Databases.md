---
title: 朱紫 4.0.0｜原生解包 → pkNX → PKHeX 遭遇数据库
tags: [SV, 4.0.0, pkNX, PKHeX, TRPFD, TRPFS, wild, fixed, raid, Havok, ROM, Provenance]
status: NATIVE_FIVE_TABLES_VERIFIED_RAID_EXACT_WILD_FIXED_DIFFERENT
updated: 2026-11-07
---

# 要点

朱紫 4.0.0 的 PKHeX 遭遇数据库不是把解包的 FlatBuffers JSON 直接改扩展名，而是**从游戏原生数据中计算符合 PKHeX.Core Gen9 资源布局的二进制模板，再将这些 `.pkl` 嵌入独立编译的 PKHeX.Core**。这里的 `.pkl` 是 PKHeX 的自定义二进制格式，**不是 Python pickle**。

已跑通五张原生表。三张普通团体战与固定的 PKHeX commit `0660d1e1f4924b8478daec73281bb8071a82ad19` 字节级一致；野生和固定仍存在差异，不能当作已修复的官方合法性库。

## 1. 完整原始解包路径

原始数据：`4.0.0/1/arc/data.trpfd`（索引/描述）与 `data.trpfs.7z.*`（分卷恢复的原始数据）；本仓库 `SV.TrinityDump` + `GFPAKHashCache.bin` + Oodle 从选定包中提取 `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`。

真正参与野生、固定、团体战重新计算的文件：

| 角色 | 游戏原始路径 | pkNX 组件 |
|---|---|---|
| 野生物种候选 | `world/data/encount/pokedata/pokedata[_su1/_su2]/*_array.bin` | `PaldeaSpawnModel` / `EncounterSlotDumper9` |
| 野生点、等级与群系 | `world/data/encount/point_data/point_data/encount_data_*.bin` | `PointData` / `LocationStorage.LoadPoints()` |
| 地区/子区域等级、地名 | `world/data/field/area*/field_*_area*_array.bin` | `PaldeaFieldModel` |
| 区域碰撞外键 | `world/scene/parts/field/**/*.trscn` 引用的 `.trcol` | `PaldeaSceneModel` / `ContainsPoint()` |
| 固定野生/野生太晶 | `world/data/field/fixed_symbol/fixed_symbol_table/fixed_symbol_table_array.bin` | `FixedSymbolDumper9` |
| 固定位置 | `world/scene/parts/field/streaming_event/*fixed_placement_symbol*/*.trscn` | `PaldeaFixedSymbolModel` |
| 普通太晶团体战 | `world/data/raid/{raid_enemy_,su1_raid_enemy_,su2_raid_enemy_}01..06/*_array.bin` | `NativeRaidExporter` / `RaidEnemyInfo.SerializePKHeX` |
| PKHeX 捕获地点 ID | `message/dat/English/common/place_name.dat/.tbl` | `TextFile` + `AHTB.ToIndexedDictionary()` |

地点 ID 取自原版 AHTB 的**顺序索引**，不是对地点名排序后的索引或哈希。源头不能用 Serebii 地区网页去猜坐标，也不能将蓝莓学园的事件池直接解释为固定晶洞坐标。

精确源文件清单：`scripts/Locate-SV-PKHeX-Native-Packs.py` 的 `canonical_sources()`；对应提取和碰撞追踪脚本 `Extract-SV-PKHeX-Native-Packs.py`、`Resolve-SV-PKHeX-Havok-References.py`、`Extract-SV-PKHeX-TRCOL-Packs.py`。

## 2. 真正的计算流程

1. 遭遇候选 `EncountPokeDataArray` 与点位 `PointDataArray` 按地形群系、地区过滤器、等级范围交叉；`LocationStorage` 收集本地候选与跨区来源。生成点所在区、玩家所在区不同，所以一条野生模板同时有 `location_id`（捕获区域）与 `cross_from_id`（跨区来源）。
2. `PaldeaSceneModel` 通过 `TRSCN -> TRCOL` 执行区域、层高和玩家附近活动范围的几何判断；固定遭遇用 `FixedSymbolTableArray` + 各版本的 placement `.trscn` + 碰撞扩散推导允许地点。没有 `.trcol` 不能声称野生/固定完整闭合。
3. 用 `EncounterSlotDumper9.SerializeEncounters()` 通过 `MiniUtil.PackMini("sv")` 序列化 `encounter_wild_paldea.pkl`：前缀 `sv`、每区域偏移、`location_id / cross_from_id` 头、每槽 8 字节（物种 uint16、形态、性别、等级下限、等级上限、时间禁止掩码、天气允许掩码）。
4. `FixedSymbolDumper9` 生成 `encounter_fixed_paldea.pkl`：每条固定大小 `0x14` 20 字节，包含物种、形态、等级、保底 IV 数、太晶属性、性别/特性权限、4 招式与最多 4 个允许的捕获地点 ID。
5. `NativeRaidExporter` 从三个世界的 1–6 星 `RaidEnemyTableArray` 按原生权重重排，`SerializePKHeX` 产生 24 字节/模板的三张 `encounter_gem_*.pkl`。这是**普通** Tera Raid，不是活动/最强 Raid。
6. `PKHeX.Core.csproj` 内 `EmbeddedResource Include="Resources\**"` 表明这些文件须嵌入 DLL。将五张原生 `.pkl` 在**隔离的 PKHeX 源码**内替换对应的资源，再编译 `PKHeX.Core.csproj`，真实运行 `LegalityAnalysis`，才能检查这个实验版 PKHeX 如何解释 PK9。

## 3. 已有实测差异（保留为历史证据）

| 生成算法 | 野生原生/参考 | 野生多出/缺失 | 固定原生/参考 | 固定多出/缺失 |
|---|---|---|---|---|
| pkNX 原始 30f | 29,840 / 26,861 | 3,655 / 676 | 977 / 977 | 203 / 203 |
| 10f 诊断 | 26,739 / 26,861 | 5,240 / 5,362 | 955 / 977 | 307 / 329 |
| 0f 诊断 | 23,016 / 26,861 | 5,303 / 9,148 | 942 / 977 | 340 / 375 |

原生 30f 用了 61 份必要输入加 223 份碰撞依赖，三张普通 Raid 的 700 条模板与 PKHeX 参考**二进制 SHA 相同**。降容差虽使 10f 总数接近，但内容差异更大，不能当成校准答案。原始对照 [Actions #42356030937](https://github.com/969981/SV_Resources/actions/runs/42356030937) 内 `SV-400-original-collision-tolerance-30-10-0`。工作流最后因严格要求所有模板完全一致而失败；该失败不否定此前上传的真实差异报告。

对照 `EncounterSlotDumper9.IsAbleToSpawnAt()`：源码注明 flag、enable table、timetable、游戏版本可能按假设处理。pkNX 的近距离 30f 扩散和 `FixedSymbolDumper9` 漫游地点推导也不是原生游戏实时执行的所有分支。后续逐行的来源追踪需要记录原始 spawner key / `PointData` ID / `TRSCN` / `TRCOL` 哈希和碰撞测试，不可对 3,655 条新增项直接宣布合法。

## 4. 现成原始数据生成命令（Windows runner 或已配置的 Windows 工作区）

前提：已经通过原始 RomFS 分卷 SHA 校验，并且 `SV_NATIVE_ROMFS` 指向**仓库外**包含 `arc/data.trpfd` 和 `arc/data.trpfs` 的源数据路径；`GFPAKHashCache.bin`、Oodle、TrinityDump 均已准备。

```powershell
# ① 通过游戏 TRPFD 定位全部 61 个必要输入（11 个原生包）
python scripts/Locate-SV-PKHeX-Native-Packs.py

# ② 解包并对原始 61 份资源逐个检查 SHA
python scripts/Extract-SV-PKHeX-Native-Packs.py --repo . --workspace $env:SV_NATIVE_ROMFS --selection Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-packs.json --max-packs 32 --max-packed-mib 64

# ③ 从真实 TRSCN 找到碰撞体，提取并校验 223 个 TRCOL
python scripts/Resolve-SV-PKHeX-Havok-References.py --repo .
python scripts/Extract-SV-PKHeX-TRCOL-Packs.py --repo . --workspace $env:SV_NATIVE_ROMFS --manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-dependencies.json --max-packs 256 --max-packed-mib 1024

# ④ 运行原版 pkNX 的 Gen9 无界面算法，输出五张 .pkl
dotnet build tools/pkNX/pkNX.EncounterCLI/pkNX.EncounterCLI.csproj -c Release
dotnet tools/pkNX/pkNX.EncounterCLI/bin/Release/net10.0/pkNX.EncounterCLI.dll --virtual-root Unpack/4.0.0/romfs/arc/data.trpfs/virtual --verified-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json --verified-trcol-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-extraction.json --output ./local-work/sv-native-pkhex

# ⑤ PKHEX_ROOT 应为固定提交 0660d1e... 的独立 PKHeX checkout，不能是游戏源目录
python scripts/Export-SV-Native-To-PKHeX-Database.py --native-output ./local-work/sv-native-pkhex --source-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json --collision-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-extraction.json --pkhex-root $env:PKHEX_ROOT --output ./local-work/sv-pkhex-bridge
```

第 ⑤ 步输出三类数据：`SV400_Native_Encounters_For_PKHeX.sqlite`（查询库）；`SV400_Native_Encounters_For_PKHeX.csv`（中英名称及每条模板状态）；`PKHeX_Source_Overlay/PKHeX.Core/Resources/legality/wild/Gen9/*.pkl`（原生生成的五份可直接供**独立源码编译**的资源）。汇总 `SV400_Native_To_PKHeX_Manifest.json` 含每文件 PKHeX 参考 SHA、原生 SHA、多重集合差异及原始来源证明。

## 5. 如何让 PKHeX.Core 真正使用原生结果

官方 checkout 不可修改。请准备第二份独立 checkout（可以复制相同固定版本的完整源码），使用已存在的严格验证工具：

```powershell
python scripts/Stage-SV-Native-PKHeX-Resources.py --native-output ./local-work/sv-native-pkhex --isolated-pkhex-root ./local-work/PKHeX-native-copy --original-pkhex-root $env:PKHEX_ROOT --evidence ./local-work/native-pkhex-embedded-proof.json
dotnet build ./local-work/PKHeX-native-copy/PKHeX.Core/PKHeX.Core.csproj -c Release
```

注意：覆盖五张 .pkl 后必须**重新编译 DLL / 对应调用 PKHeX.Core 的程序**；仅复制到已安装的 PKHeX 文件夹不会改变它。实验版只应用于隔离研究，不以 29,840 原生槽覆盖官方合法性数据库发行。

## 6. 本次仍未包含

- 手写 `Encounters9.cs` 的剧情神兽、赠送宝可梦、锁闪，不能仅靠五张二进制表推导。
- `encounter_outbreak_paldea.pkl`、`encounter_dist_paldea.pkl`、`encounter_might_paldea.pkl` 是独立模板/活动数据，不由基础五张自动生成。参见 [[SV-Event-Raid-Outbreak-PKHeX-Serebii]]。
- 实际游戏运行时的剧情许可、版本限制、动态地图活动、天气及 RNG/PID/EC/IV/shiny 生成顺序，需要另一层严格验收。
- `Serebii` 提供外部物种与地区查证，不是生成器的数据源。参见 [[Gen9-PKHeX-Serebii-Crosscheck]]。

## 7. GitHub Actions 的实测入口

- 8GB 原版恢复与 pkNX 5 表重建：[SV native PKHeX](https://github.com/969981/SV_Resources/actions/workflows/sv-native-pkhex-one-shot.yml)
- 原生五表后处理、SQLite、独立 PKHeX 资源覆盖包：[Native to PKHeX bridge](https://github.com/969981/SV_Resources/actions/workflows/sv-native-to-pkhex-database.yml)
- 原生几何容差诊断：[[SV-Collision-Tolerance-Experiment]]
