---
title: 朱紫 4.0.0 原生 → PKHeX 遭遇数据库重建
aliases: [SV Native PKHeX Encounter Rebuild, Gen9 原生合法性]
tags: [SV, pkNX, PKHeX, 遭遇, 合法性, 4.0.0]
status: NATIVE_SHA_VERIFIED_CONVERTER_CI
---

# 真正从朱紫 4.0.0 原生数据生成 PKHeX 数据

本研究以游戏原生 Trinity data.trpfd / data.trpfs 为源，pkNX 遭遇聚合规则为转换算法，PKHeX 固定 commit 的二进制资源为独立验证参考。绝不使用 PKHeX 参考资源作为伪造的原生输入。

## 1. 当前原生源证据

真实源 [GitHub Actions #42330049745](https://github.com/969981/SV_Resources/actions/runs/42330049745) 已从 83 个原生 7z 分卷恢复源 TRPFS 并通过 SHA 检验。11 个目标原生包提取了 10,174 个成员，验证总量为 212,918,982 B。所需 61 个核心目标文件逐文件 SHA-256 验证通过，合计 10,533,158 B。

原生证明文件：Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json。

注意：源文件提取成功不等于 Git 提交完成，也不等于 PKHeX 合法性算法完成。原生发布与碰撞文件外键仍要各自验收。

## 2. 野生遭遇完整生成顺序

1. PaldeaSpawnModel 读取三个地区的 EncountPokeDataArray，以及普通帕底亚、第零区、北上乡、蓝莓四组 PointDataArray。
2. PaldeaFieldModel 读取 Main/Sub/Inside/Dungeon/Location 区域、等级范围、等级修正、地点标签。
3. PaldeaSceneModel 从四个 TRSCN 场景建立 Box 或 Havok 区域碰撞；Havok 需要从嵌套 TrinityComponent 的 Havok.TrcolFilePath 再加载原始 TRCOL。只有四个 TRSCN 仍不够。
4. LocationStorage.LoadPoints 将出生点坐标和等级映射到可能的区域；GetEncounters 按地点限制、Biome、等级、AreaNo 过滤具体 EncountPokeData。
5. PaldeaEncounter.GetNew/GetBand 计算等级交集、群体遭遇、真实 SpeciesConverterSV 内部 DevID 到全国图鉴 ID 的映射，时间位的反向禁止掩码。
6. EncounterSlotDumper9.ProcessAreas 以 30 单位容差计算邻区跨越，将天气许可合入，按源 pkNX 自带 all_fog.txt 加上北上乡特殊雾天气。
7. LocationStorage.Integrate/Consolidate 去重、合并连续等级，EncounterSlotDumper9.SerializeEncounters 用 MiniUtil.PackMini 写 BinLinker 标识 sv 的 .pkl。一个区域 4B 前缀，一个槽 8B。

野生遭遇 PKHeX 参考为 400 个 area 和 26,861 条 slot；必须从上述真实源完整生成后再比较，而不能从参考文件拷贝。

### 固定符号

FixedSymbolDumper9 联接 fixed_symbol_table_array、各地区朱/紫双版本固定点位 TRSCN、区域碰撞、GemSymbolLottery tableKey，以及特殊飞行动作与阻止捕获动作。输出每条 20B 的 encounter_fixed_paldea.pkl；参考 977 条。原生 RareType 不能自动代替全部神兽剧情锁闪与运行时 RNG 规则。

### 普通太晶团体战

与 wild/fixed 不同，普通 Raid 不依赖地图 TRCOL。三个地区各 6 个 RaidEnemyTableArray（共 18 个原生文件）按星级内原始顺序累计两版本概率起点。TYPE_B 不允许 Scarlet、TYPE_A 不允许 Violet，不能出现的版本 RandMin 是 -1。

对 BossPokePara 调用现有 pkNX 的 PokeDataBattle.SerializePKHeX 与 RaidEnemyInfo.SerializePKHeX，保留物种内部 ID 转换、Minior 形态、Dreepy/Beldum 特殊招式、无效 IV 值检查等原始规则。按原 TeraRaidRipper 的 Species/Form/Stars/Delivery 排序，写入每条 24B 的普通 raid .pkl。参考数据：帕底亚 454、北上乡 133、蓝莓 113 条；历史配送/Might 七星团体战另行验收。

## 3. 新增真实无界面生成工具

目录：tools/pkNX/pkNX.EncounterCLI/

- pkNX.EncounterCLI.csproj：直接链接仓库现有 pkNX 的 Gen9 Encounter、Location、Models C# 文件，不重写野生/固定遭遇规则；.NET 10，不依赖 WinForms 界面。
- ResourcesShim.cs：读取真正的 pkNX Resources/all_fog.txt，不允许空值。
- NativeRaidExporter.cs：读取 18 个原始 RaidEnemyTableArray，复用原项目 FlatBuffers 部分类型的 SerializePKHeX。
- Program.cs：原生 SHA-256 入口，只允许真实 61 项 M2 提取 manifest；读取每一个原生文件时逐一验证原始字节大小和 SHA。缺少 TRCOL 则记录精确缺失源路径，已经生成的原生普通 Raid 仍能独立验收，不回填 PKHeX 参考二进制。

构建：

    dotnet build tools/pkNX/pkNX.EncounterCLI/pkNX.EncounterCLI.csproj -c Release

具备原生 61 项材料以后：

    dotnet tools/pkNX/pkNX.EncounterCLI/bin/Release/net10.0/pkNX.EncounterCLI.dll \
      --virtual-root Unpack/4.0.0/romfs/arc/data.trpfs/virtual \
      --verified-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json \
      --output /tmp/sv-native-pkhex

原生输出（完全成功时）：encounter_wild_paldea.pkl、encounter_fixed_paldea.pkl、encounter_gem_paldea.pkl、encounter_gem_kitakami.pkl、encounter_gem_blueberry.pkl，加独立源记录 native-encounter-build.json。若只有 Raids 完成、TRCOL 不齐，应输出 PARTIAL 而非 FULL。

## 4. 独立 PKHeX 二进制逐字段对账

比较器：scripts/Compare-SV-Native-PKHeX-Encounters.py。依据原生构建工具记录的 SHA、实际读取过的源文件 hash/size 与 61 文件 M2 原始证明逐条绑定，然后独立读取固定 PKHeX 参考。

    python scripts/Compare-SV-Native-PKHeX-Encounters.py \
      --native-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json \
      --build-evidence /tmp/sv-native-pkhex/native-encounter-build.json \
      --generated /tmp/sv-native-pkhex \
      --reference /tmp/PKHeX/PKHeX.Core/Resources/legality/wild/Gen9 \
      --output /tmp/sv-native-pkhex-diff

按逻辑槽位多重集合比对（保留重复数，忽略输出 record 排列）；野生字段包括 Species、Form、Gender、LevelMin/Max、LocationID、Crossover、TimeForbiddenMask、WeatherAllowedMask。固定字段包括 Species/Form/Level/IV/Ability/Tera/Moves/Location；Raid 还包括星级、版本起始权重。输出 *_pkhex_only.csv、*_native_only.csv、native-comparison.json。

至少必须明确区分：EXACT_BINARY_MATCH、SEMANTIC_MATCH_BINARY_ORDER_DIFFERENT、FIELD_LEVEL_DIFFERENCES、NOT_GENERATED_FROM_NATIVE。

PKHeX 基准固定 commit：0660d1e1f4924b8478daec73281bb8071a82ad19。

## 5. 四层验收，不跨层冒充

1. 原生来源：TRPFD/TRPFS 原始 4.0.0 文件 SHA 严格通过（61 项已经实测）。
2. 原生生成：基于真实表/点位/碰撞，pkNX 实际生成新的 PKHeX 格式文件，记录每个读取过的原生文件。
3. 数据对账：生成结果与 PKHeX 固定基准对比所有记录，解释每一处等级、天气、版本、地图和 IV 差异；若源不全，标记 NOT_GENERATED_FROM_NATIVE。
4. 真正的合法性回归：用宝可梦 PK9、具体遭遇地点、时段、PID/EC/IV 和 HOME 转移样本实际运行 PKHeX LegalityAnalysis。包括太晶 RNG、剧情锁闪与大型活动特殊模板。本阶段不等于源数据重建，仍需独立完成。

参考：[[sv-4.0.0-pkhex-native-recovery]]、[[sv-pkhex-trcol-collision-closure]]、[[sv-pkhex-gen9-encounter-bridge]]。
