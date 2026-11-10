---
title: SV 4.0.0｜原始 ROM 到五张 PKHeX .pkl：源追踪、格式、A/B 与 Release
aliases: [SV400 native PKL, Gen9 原生遭遇重建发布, 178 Collision Owner]
tags: [SV, 4.0.0, Obsidian, Trinity, pkNX, PKHeX, Gen9, TRCOL, PointData, 固定符号]
status: CODE_COMMITTED_NATIVE_REBUILD_PENDING
updated: 2026-11-10
---

# 1. 重要结论与验证语义

`.pkl` 是 **PKHeX 的专用二进制资源**，不是 Python pickle，也不是 RomFS 中现成的文件。原始数据链为 **4.0.0 Trinity TRPFD/TRPFS → 原生 M2/FlatBuffers 与场景 Havok → 真实 pkNX 遭遇算法 → PKHeX 格式的五张 .pkl**。PKHeX 参考资源只用于对账，**绝不能作为生成输入**。生成的是合法性遭遇模板，不是 PID/EC/IV 已生成的 PK9。

代码入口：[pkNX.EncounterCLI/Program.cs](../../tools/pkNX/pkNX.EncounterCLI/Program.cs)；工作流：[sv400-native-pkl-release.yml](../../.github/workflows/sv400-native-pkl-release.yml)；只读硬门槛：[Verify-SV400-PKL-Release.py](../../scripts/Verify-SV400-PKL-Release.py)。

**验收分级必须分清：**
- `SOURCE_SHA_VERIFIED`：61 个原始 M2/FlatBuffers + 223 个 Havok TRCOL 已经逐项验 SHA。
- `NATIVE_GENERATED`：原版 pkNX 的五张二进制确实来自原始资源，manifest 全绿。
- `REFERENCE_PARITY_DIAGNOSTIC`：与固定 PKHeX 版本比较的“保留／损失／新增”，不等于真实游戏规则。
- `NATIVE_OWNER_AB_PENDING`：碰撞所有权开关代码已加；在全部原始文件上重新执行 **尚未得到本次工作流的结果**。
- `GAME_PK9_RUNTIME_NOT_OBSERVED`：没有在真实游戏中取得完整 RNG、PK9 与旗标验证。

# 2. 原始数据位置和恢复

- `4.0.0/1/arc/data.trpfd`：TRPFD 资源目录与 file/pack 索引。
- `4.0.0/1/arc/data.trpfs.7z.*`：83 个分卷，恢复原始 Trinity 数据。
- `GFPAKHashCache.bin`：资源 Hash/路径辅助；使用前检查缓存的 SHA-256。
- `SV.TrinityDump`：按哈希匹配的原始资源包抽取与 M2 数据解压。
- `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`：提取后虚拟资源树。
- `encounter-native-extraction.json`：61 个原始文件完整 SHA/大小证明。
- `encounter-trcol-dependencies.json`：实际 TRSCN 内 `CollisionComponent.Shape.Havok.TrcolFilePath` 依赖关系。
- `encounter-trcol-extraction.json`：223 个动态 Havok .trcol 的原始 SHA 证明。

可重复流程：
1. `Locate-SV-PKHeX-Native-Packs.py` 从 TRPFD 两张索引定位 61 个路径、11 个包。
2. `Prepare-SV-Trinity.ps1 -Workspace <隔离目录> -SkipHashBuild` 检查原始 83 分卷和还原出的 RomFS，不能从 PKHeX 参考补文件。
3. `Extract-SV-PKHeX-Native-Packs.py` 精确提取 61 文件并校验每个原始资源。
4. `Resolve-SV-PKHeX-Havok-References.py` 读取 TRSCN 中真实 TRCOL 外键，不按文件名猜测。
5. `Extract-SV-PKHeX-TRCOL-Packs.py` 提取、校验真实 223 个 Havok 文件。
6. `pkNX.EncounterCLI` 使用 `NativeVirtualFileSystem` 对读取到的每一个资源再做 SHA/大小核查；失败即报错，不降级到参考资源。

重要：`61+223=284` 是“所校验的核心源与碰撞文件数量之和”，其中运行时 `sourceFilesActuallyRead` 记录的数量可能因并非全部文件都被这次代码路径消耗而不同；**不应人为要求必须等于284**。现行原生构建的已确认读取清单为 276。若源校验状态或读取数量漂移，发布门槛拒绝。

# 3. 原始 FlatBuffers 源

| 区域/功能 | 资源路径简写 | 对象 |
|---|---|---|
| 帕底亚生成点 | `world/data/encount/point_data/point_data/encount_data_100000.bin` | PointDataArray |
| 第零区生成点 | `.../encount_data_atlantis.bin` | PointDataArray |
| 北上乡生成点 | `.../encount_data_su1.bin` | PointDataArray |
| 蓝莓生态巨蛋生成点 | `.../encount_data_su2.bin` | PointDataArray |
| 野生候选 | `world/data/encount/pokedata/**/pokedata*_array.bin` | EncountPokeDataArray |
| 地图地形 | `world/data/field/area*/*_array.bin` | FieldMain/Sub/Inside/Dungeon/Location |
| 场景区域 | `world/scene/parts/field/**/resident_area_collision_0.trscn` | TrinitySceneObjectTemplate |
| Havok 几何 | TRSCN 引用的 `.trcol` | Havok collider |
| 地点编号 | `message/dat/English/common/place_name.dat/.tbl` | TextFile + AHTB |
| 固定遭遇 | `world/data/field/fixed_symbol/fixed_symbol_table/fixed_symbol_table_array.bin` | FixedSymbolTableArray |
| 固定符号摆放 | `world/scene/parts/field/streaming_event/*fixed_placement_symbol*/*.trscn` | `TableKey` 对应原始点 |
| 普通 Raid | `world/data/raid/raid_enemy_*/*_array.bin`、su1_、su2_ | RaidEnemyTableArray |

# 4. Wild .pkl 生成算法

详见 `PaldeaSpawnModel` → `PaldeaFieldModel` → `PaldeaSceneModel` → `EncounterSlotDumper9.ProcessAreas` → `LocationStorage` → `PaldeaEncounter`。

- PointData 记录 `position(x,y,z)`、`LevelRange`、`Biome`、SourcePointAsset/Index；PokeData 记录物种 DevID、形态、性别、时间、地点限制、等级、群体遭遇。
- 地图区域的 `AreaInfo` 具有 `ActualMinLevel`、`ActualMaxLevel`、`AdjustEncLv`、区域标签和类型。
- `LoadPoints` 使用真实碰撞体判断生成点归属；`IsAbleToSpawnAt` 将 PokeData 的 biome/criteria/area 过滤应用到当前 PointData。
- 原始等级按 `max(PointMin,CriteriaMin)+adjust`、`min(PointMax,CriteriaMax)+adjust`，部分区域会先裁剪 PointData 级别。
- 相邻区域跨界由 `IsCloseEnoughDistance`/碰撞判断（原始 30f XYZ 容差）计算，得到 `location + crossFrom`；天气许可合入 Slot。
- `PaldeaEncounter.Absorb` 按相同物种、形态、性别分组，并要求 Time/Weather/CrossFrom 相同，遇到重叠或相邻级别做 `min/min, max/max` 合并。
- 序列化：每个地区块 `u16 location + u16 crossFrom`，每条 Slot **8B**（u16 species + form/gender/min/max/time/weather 各 u8）；`MiniUtil.PackMini(blocks,"sv")` 打包为 BinLinker 风格 wild `.pkl`。
- 时间位编码为禁止时段掩码；并非“允许时段”；部分物种形式做 PKHeX 的特别规范化。

# 5. Fixed .pkl 的 20 字节与真实源符号关联

`FixedSymbolDumper9` 读取 `FixedSymbolTableArray` 和 S/V 两版本固定符号 TRSCN，通过 `TableKey` 对应实际位置，然后与 AreaInfo/TRCOL 联接，考虑跨区与 `PokeAI.ActionId`，导出每行 20B：
`u16 species; u8 form,level,flawlessIV,tera,gender,ability; u16 move1..4; u8 location0..3`。
原始 977 行 ×20 = 19,540B。**TableKey、TRSCN、TRCOL、碰撞区域归属不会保存在20B里**，必须依靠独立 JSONL 的 `fixed_primary/fixed_wander/fixed_serialized` 事件和原始固定点重新关联。

已匹配固定 774 条；参考独有 203，其中 189 为“额外地点158”的诊断配对；另有 114 条**正确且完整匹配的模板本身含158**。因此全局移除158会损失114条，不可发布。固定 A/B 必须逐 `game+TableKey+tableIndex+originalFixed20Hex+PokeAI.ActionId+TRSCN/TRCOL+AreaInfo` 证明所有权；来源对账并不证明实际游戏剧情旗标或当前位置合法性。

# 6. 普通 Raid 三张 .pkl

`NativeRaidExporter` 从三地区各六张 `RaidEnemyTableArray` 读 18 个原始表，保留原始星级顺序和 Scarlet/Violet 两边累计概率起点，以 `RaidEnemyInfo.SerializePKHeX` 写入24B模板。三地区分别 454/133/113 条，与固定 PKHeX 对照当时全部一一匹配。**不包含历史 BCAT、配信、最强活动 Raid、特殊大量出现和 HOME 导入规则。**

# 7. 五张原始基线 SHA 锁定

| 文件名 | 条目 | 原始 SHA256 |
|---|---:|---|
| `encounter_wild_paldea.pkl` | 29,840 | `01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187` |
| `encounter_fixed_paldea.pkl` | 977 | `F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8` |
| `encounter_gem_paldea.pkl` | 454 | `B24C54559D8B5D676B8EB77DFBDC36ED82DFD1AD2D3E3125DAFDCF048C804552` |
| `encounter_gem_kitakami.pkl` | 133 | `14F376DDDD53A02C41E782FB634BFF44DF50D88253F99924669CEC3734E4BC18` |
| `encounter_gem_blueberry.pkl` | 113 | `DE925A11509B6DB1FD0F40D1102277A2A248AE7BEECBD2DF0A410EDF50AE9B51` |

参考 [source-attested original #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291)。这些 SHA 是**基线完整性检查**，不是“必须与 PKHeX 参考字节一致”；当时 baseline 野生 **26,185** 条完整匹配，固定 **774**，剩余差异逐字段记录。

# 8. 深挖 LocationStorage.Consolidate 的真实损失位置

### 已实证

`178/0=57`、`192/178=57`、`180/178=28`，合计142条参考独有的 max70/71 相对 native max74 差异。原始 `encount_data_su2.bin` 中142/142存在已真正重叠的宽/窄区间，127/142在合并前已有精确参考区间，合并后只剩2/142。**不能通过 `strictOverlap=true` 只消除相邻合并来修复**；二者有真实交集，例如 `[59,70]` 与 `[65,74]` 已严格交叉。

### 真正的算法问题

当前 `LocationStorage.Add` 原先先按 `PaldeaEncounter.GetHash()` 去重，`PaldeaEncounter` 只有物种/形态/性别/等级/时间/天气/跨区身份，**没有** `SourceCollisionArea`。不同碰撞体贡献的候选会被放入一个地点槽池，随后 `ConsolidateEncounters` 不能知道它们来自不同真实区域。这是潜在“过度合并”的直接结构性原因，不等于每次重叠都应分槽。

### 本分支做了什么

- 新类 `EncounterOwnerABSV` 默认 `baseline`，可打开 `terarium-178-source-collider`。
- 在 `Add(slot, sourceCollisionArea)` 及 `AddCrossover(slot, otherLocation, sourceCollisionArea)` 之前保留来源；`(owner, GetHash)` 用于来源内去重。
- 只在蓝莓 `(178,0)`、`(192,178)`、`(180,178)` 三个目标身份的 `LocationStorage` 内，按真实 `sourceCollisionArea` 划分候选池，**池内按原有相邻合并算法不变**，池间不 Absorb，然后对最终完全相同的 slot 去重。其他地点和 fixed/raid 不触碰。
- `--owner-ab-mode` 必须使用真实原始 61+223 SHA 证据，并禁止与其他 A/B 开关叠加。**默认 CLI 结果与原来完全相同**。
- 由于某些不同原始地点可能共享碰撞体、以及原始 `LocationStorage` 的嵌套结构，这只是*技术假设*。此前离线 107/112 可核组恢复 +101 零损失**不能自动转成原生代码验收结论**。

### 硬验收

- 必须用同一次 4.0.0 原始 61+223 资源，分别生成 baseline 和 owner-ab 五张 `.pkl`。
- baseline 五 SHA 必须与上一节一致；否则拒绝。
- owner 的 **fixed 和三张 raid SHA 100% 与 baseline 一致**。
- Wild 以全部 9 字段作多重集合对账；**非目标地点、非目标 CrossFrom 无任何变动**；原本对 PKHeX 完整匹配的 **26,185/26,185 必须保留，损失0，新增单独报告**。
- 新增仅是参考一致性而非游戏合法性。若未达到全部保留或无非目标变化，保留实验产物和差异报告供排错，**不得修改默认生成器，不得将 owner-ab 文件并入 Release**。
- 还需额外真实 SV 内运行时生成时空条件、故事旗标、PK9 实际数据才能把假设提升为游戏机制。

# 9. GitHub Actions 工作流运行与发布

[手动执行 SV400 ROM→PKL 发布工作流](https://github.com/969981/SV_Resources/actions/workflows/sv400-native-pkl-release.yml)

1. 工作流须存在于 master，再点击 `Run workflow`，选择 master。
2. `release_tag=sv400-pkl-YYYYMMDD[-N]`。只允许该严格格式，拒绝已有 tag，避免覆盖 Release。
3. `publish_release=false` 默认只上传 5 张验证文件和校验报告至 Actions Artifact；想公开发布须用户显式设置 `true`。
4. `probe_178_owner=false` 默认不运行未验收实验；开启后下载独立固定 PKHeX commit `0660d1e1` 作为**对照输入**，从同一个真实 ROM 生成 baseline / owner 输出，执行逐记录保留、损失、新增门槛。
5. 任何原始文件、碰撞体、Trinity、编译、生成或者 SHA 门槛失败都阻止发布。Release 只包含 baseline 五张 .pkl 与两份 JSON 证明，不上传原始 ROM/TRPFS/TRCOL。
6. 发布的标签不代表通过实机合法性，Release Notes 明示 `REFERENCE_PARITY_DIAGNOSTIC`。**研究/发布前须确认对游戏衍生数据的分发权限。**

手工复现（源文件先提取/校验，再运行；命令在仓库根目录）：

```powershell
dotnet build tools/pkNX/pkNX.EncounterCLI/pkNX.EncounterCLI.csproj -c Release
$common=@('--virtual-root','Unpack/4.0.0/romfs/arc/data.trpfs/virtual',
 '--verified-manifest','Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json',
 '--verified-trcol-manifest','Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-extraction.json')
$cli='tools/pkNX/pkNX.EncounterCLI/bin/Release/net10.0/pkNX.EncounterCLI.dll'
dotnet $cli @common --output 'SV400-baseline'
dotnet $cli @common --owner-ab-mode terarium-178-source-collider --output 'SV400-owner178'
```

`scripts/Verify-SV400-PKL-Release.py` 有 `--baseline`、`--source-manifest`、`--trcol-manifest`、`--output`，可选 `--owner` 和 `--reference`。脚本的 `SV400-PKL-release-proof.json` 明确记录哈希与对照计数；不满足 `lost=0` 或 `retained=26185`，异常退出。

# 10. 故障排除与下一关

| 故障 | 常见原因与处理 |
|---|---|
| `61_NATIVE_TARGETS...` 失败 | TRPFD 定位/包解压/SHA/原始版本不一致；不要换参考文件蒙混 |
| `TRCOL_ORIGINAL_SHA256_VERIFIED` 缺失 | 原始 TRSCN Havok 外键未解完或相关包没有提取 |
| `No collider` / `No parent area` | 原始三维碰撞或地点映射未闭合，检查 AreaInfo 和 TRCOL |
| baseline SHA drift | 解析器版本、原始数据、比较模式、地名索引、生成顺序发生变化 |
| owner 无碰撞来源 | `SourceCollisionArea` 丢失；应阻断，不自动使用地点名替代 |
| non-target changed | 实验作用域溢出或错把来源/目标地点反转 |
| old matches lost | owner 划分可能比真实游戏机制过窄；保留基线并逐槽核对 |
| GitHub Release 不发布 | 未启用显式 `publish_release`、不是 master 手动运行或 SHA/零损失验证失败 |

相关研究：[[sv-pkhex-encounter-native-regeneration]]、[[sv-pkhex-gen9-encounter-bridge]]、[[sv400-reference-gap-676-wild-203-fixed-zero-loss]]，以及 [PR #99](https://github.com/969981/SV_Resources/pull/99)。

---
本笔记仅记录原始资源来源、生成算法和证据分级；不提供完整历史活动数据，也不将离线模拟当作实际游戏合法性验证。
