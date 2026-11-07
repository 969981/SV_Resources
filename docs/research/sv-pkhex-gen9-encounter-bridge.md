# SV 4.0.0 原生遭遇数据 → PKHeX Gen9 合法性遭遇数据库（Obsidian）

> 状态：**PKHeX 当前二进制资源格式已从实际文件验证，SV 4.0.0 原始遭遇表尚未和它逐条核对。** 所有计数来自参考 PKHeX，不代表本仓库已成功解码相同数量的 4.0.0 遭遇。

## 一、关键区别：游戏数据与 PKHeX 合法性模板

朱紫 Trinity 虚拟文件中的 EncountPokeData / PointData / Area / 场景碰撞体 / FixedSymbol / Raid 不是 PKHeX 直接读取的遭遇库。PKHeX 使用的是**聚合后的合法性模板**，保留判断物种、捕获地点、形态、等级、时间、天气、固定特殊规则、太晶 RNG 等必要内容；部分游戏中的刷新率、权重、坐标等不会写入普通 wild .pkl。

pkNX 的 `EncounterSlotDumper9` 已实现从 SV 原生文件到 PKHeX `encounter_wild_paldea.pkl` 的处理。定位：

- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterSlotDumper9.cs` → `DumpSlots / ProcessAreas / SerializeEncounters / SerializeLocationSet`。
- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/PaldeaEncounter.cs` → `GetNew / GetBand / GetTimeBits`。
- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterDumperSV.cs` → 帕底亚、北上乡、蓝莓学园三地图，地点回溯、碰撞容差、禁止跨区例外。
- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/FixedSymbolDumper9.cs` → `encounter_fixed_paldea.pkl`，含版本、固定点/坐标、地名关联，实体跨区允许情况。
- `tools/pkNX/pkNX.WinForms/Dumping/Gen9/GameDumperSV.cs` → `DumpEncounters()` 通过 `place_name` AHTB/DAT 传入地点名—编号表。

PKHeX 对应：

- https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Data/Gen9/Encounters9.cs
- https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen9/EncounterArea9.cs
- https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen9/EncounterSlot9.cs
- https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen9/EncounterFixed9.cs
- https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen9/EncounterTera9.cs

## 二、直接从 PKHeX 参考资源实际读取的计数

| PKHeX 参考文件（Gen9） | 实际字节数 | 实际记录 | 用途 |
|---|---:|---:|---|
| `encounter_wild_paldea.pkl` | 218,096 | 400 个区域块、26,861 条 slot | 常规野生，80 个不同 Location ID |
| `encounter_fixed_paldea.pkl` | 19,540 | 977 | 固定可捕捉符号 |
| `encounter_gem_paldea.pkl` | 10,896 | 454 | 帕底亚普通太晶团体战 |
| `encounter_gem_kitakami.pkl` | 3,192 | 133 | 北上乡普通团体战 |
| `encounter_gem_blueberry.pkl` | 2,712 | 113 | 蓝莓学园普通团体战 |
| `encounter_outbreak_paldea.pkl` | 353,808 | 12,636（28 字节每条） | 特殊大量出现模板 |

计数以读取时 PKHeX master 的 `PKHeX.Core/Resources/legality/wild/Gen9/` 实际资源为准，**不表示拥有 26,861 个不同宝可梦**，也不等于游戏原始出生点总数。`encounter_dist_paldea.pkl` 与 `encounter_might_paldea.pkl` 使用单独的活动团体战布局；尚未在本审计工具中展开。

## 三、原生字段对应关系

| 游戏原始结构 | pkNX 转换方法 | PKHeX 字段 | 不能直接推断的地方 |
|---|---|---|---|
| `EncountPokeData.DevId` | `SpeciesConverterSV.GetNational9()` | `Species` (ushort) | DevID 不必等于全国编号；**绝对不能直接填 DevId** |
| `Form` | 原始形态+特殊形态转换 | `Form` (byte) | 彩粉蝶动态形态 = 30，小陨星动态形态 = 31；需要例外处理 |
| `Sex` | `PaldeaEncounter.Gender` | `Gender` (byte) | sex 1→0（雄）、2→1（雌），随机→0xFF |
| `MinLevel / MaxLevel` 与 PointData.LevelRange | **求范围交集**，加区域 AdjustEncLv，最高 100 | `LevelMin / LevelMax` | 仅取原表 MinLevel 会丢地图点的等级限制 |
| `Time.Noon/Night/Evening/Morning` | `GetTimeBits`：允许为 0、禁止为 1 | `Time` byte | 0bit0中午、bit1夜、bit2黄昏、bit3早晨；反向掩码 |
| 出生点、地图碰撞、天气及邻区 | `ProcessAreas` + `LocationDatabase`，聚合天气 | `Weather` bit mask | 必须判断碰撞体、邻区天气渗透，不可仅按 Area 字符串猜地点 |
| 场景区域 LocationNameMain | `place_name` DAT/TBL + AHTB.ToIndexedDictionary | `Location` (byte) | 需验证官方地点标签对应的数字编号 |
| 邻区出生后跨入 | `SerializeLocationSet(Location, CrossFrom)` | `CrossFrom` (byte) | PKHeX 同时有匹配地点/实际地点逻辑，两者不可随意互换 |
| `LotValue`、生态群系、刷新权重、配置标记 | 决定哪些 slot 可以出现，再聚合 | 不在普通 8 字节 slot 中 | **CSV 直接转 8 字节不会自动得到正确的合法性模板** |

**跨区特别注意**：pkNX 代码对桌台市（8）和第零区（124）禁用部分 crossover；约 30 的坐标碰撞容差用于确定附近区域。完整准确性依赖 native 场景几何、区域标签、实际点位及版本条件的组合。

## 四、PKHeX 真正的二进制布局

注意文件名虽然是 `.pkl`，**并不是 Python pickle，不要使用 `pickle.load`**。

### 野生 encounter_wild_paldea.pkl

BinLinker：偏移 0–1 为 ASCII `sv`、2–3 为区域个数 `u16le`，之后 `(count + 1)` 个 `u32le` 偏移。每个区域块：

    +0x00 u16le Location       // PKHeX EncounterArea9 实际读取低 8 位
    +0x02 u16le CrossFrom      // 同上
    +0x04 8-byte EncounterSlot9[]

每条 8 字节 slot：

    +0x00 u16le species_national
    +0x02 u8 form
    +0x03 u8 gender
    +0x04 u8 level_min
    +0x05 u8 level_max
    +0x06 u8 time_forbidden_mask
    +0x07 u8 weather_allowed_mask

### 固定 encounter_fixed_paldea.pkl

每条 0x14（20）字节：`ushort Species, byte Form, byte Level, byte FlawlessIVCount, byte TeraType, byte Gender, byte Ability, ushort Move1..4, byte Location0..3`。**普通 FixedSymbol 与锁闪剧情事件不能一概归为同一类**；PKHeX 的 `EncounterStatic9` 一部分仍在 C# 中人工维护，固定符号模板默认 `Shiny.Random`，不能单靠此二进制推断锁闪。

### 普通团体战 encounter_gem_*.pkl

每条 0x18（24）字节：物种、形态、性别、特性、保底 IV、锁闪规则、等级、4 招式、太晶属性、记录 Index、星数、权重、朱/紫抽签位置（两个 `int16`）。PKHeX `EncounterTera9` 再利用 `Tera9RNG` 与版本相关抽签流程检查 PID/IV/太晶属性；导出 CSV 还不是完整合法性验证。

## 五、当前仓库资源与原生转换的差距

已从本仓库证实的：`avalon/data/personal_array.bin` 含 1,424 条内部种族/形态，`waza_array.bin` 含 920 条招式；中文 monsname/wazaname/itemname/place_name 可以解码，脚本和 CSV 已放 `semantic_exports/`。

尚未证实的：`virtual/world/` 完整原生目录、出生点碰撞、三地图 PointData/EncountPokeData、固定符号、团体战原始表是否都存在于已成功发布的 Git 文件中。**当前不能声称本项目已重新生成 PKHeX 的参考遭遇库。**

## 六、可运行的只读对账工具

新脚本：`scripts/Audit-SV-PKHeX-Encounters.py`，只读取 PKHeX 本地 Git checkout；输出 CSV/summary，不改 `.pkl`。

Windows PowerShell 示例：

    git clone --depth 1 https://github.com/kwsch/PKHeX.git E:/Tools/PKHeX
    python scripts/Audit-SV-PKHeX-Encounters.py --pkhex-root E:/Tools/PKHeX --output E:/Temp/SV-PKHeX-Audit

如果运行过 pkNX 的 `DumpEncounters()` 得到同名 `.pkl`，再提供原生导出目录：

    python scripts/Audit-SV-PKHeX-Encounters.py --pkhex-root E:/Tools/PKHeX --pknx-generated E:/Temp/SV-PkNX-Dump --output E:/Temp/SV-PKHeX-Compare

工具生成 `pkhex_wild.csv`、`pkhex_fixed.csv`、三个 `pkhex_raid_*.csv`、`pkhex_outbreak.csv` 及 `summary.json`；同时核对 SHA-256、对照两套文件差异。`dist` 与 `might` 保留原始哈希+明确 `SCHEMA_NOT_IMPLEMENTED`。

回归测试：

    python -m unittest discover -s tests -p test_sv_pkhex_encounter_audit.py -v

## 七、下一阶段真正可合并 PKHeX 的验收

1. 从 SV 4.0.0 TRPFS 全量解包补齐 EncountPokeData/PointData/FieldArea/碰撞体/FixedSymbol/Raid 原始数据。记录每表二进制 SHA、解码 Schema、包含的 3 地图与版本。
2. 基于内置 pkNX `EncounterSlotDumper9` 运行**真实资源**，而不是仅把 EncountPokeData 表简单改后缀；发布 `encounter_wild_paldea.pkl` 与其他模板至独立生成目录。
3. 新工具比对 PKHeX 的历史参考 `.pkl`：先比 hash 再比每条与每个地区、地点、等级、天气、时段、版本条件。允许存在不同 PKHeX 版本或史料修订带来的差异，但要逐条解释。
4. 将静态剧情锁闪、配信 WC9、特殊七星团体战、历史活动和 HOME 转移信息作为独立证据链；不以普通 wild 或 fixed 能匹配就证明完整合法。
5. 在 PKHeX 的独立测试分支里更新资源并运行 `PKHeX.Core` legality 单元测试，比较新旧版本中有效/无效样本的回归。**先审计，后升级数据库**；对外提交源码改动也需尊重原项目的许可和审核。

相关：[[sv-gameplay-data]]、[[sv-m2-parallel-extraction]]、[[resource-file-identification]]。
