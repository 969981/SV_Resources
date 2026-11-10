---
title: SV 4.0.0 原生 PKL 与 PKHeX 五表逐记录差异（2026-11-10）
aliases: [SV400 PKHeX native 676 203 diff, SV400 五表 SHA 与 158/178 差异]
tags: [SV, 4.0.0, PKHeX, pkNX, PKL, Wild, Fixed, Raid, Obsidian, 原生对账]
status: VERIFIED_ARCHIVED_BYTE_AND_RECORD_COMPARISON_NOT_RUNTIME_LEGALITY
date: 2026-11-10
---

# 朱／紫 4.0.0：原生五张 .pkl 与 PKHeX 官方资源的完整比对

> [!important] 证据分级
> 本文是**此前真实原始 ROM → pkNX 生成的五张 .pkl** 与固定 PKHeX 资源的档案级逐字段对账。不是把参考数据反灌生成器，也不是「原版游戏中可遇到、可捕获、可合法转移」的实机证明。野生、固定仍不等价；三张普通 Raid 与参考二进制完全相同。

## 1. 对比输入、固定版本和可重复性

| 角色 | 输入和证据 |
|---|---|
| 原生来源 | SV 4.0.0 `data.trpfd/data.trpfs`，原始提取和 61 项资源 SHA，实际解析 223 个 TRCOL 碰撞文件 |
| 真实生成 | 仓库内 `pkNX.EncounterCLI`，来自 `PaldeaSpawnModel / SceneModel / LocationStorage / FixedSymbolDumper9 / NativeRaidExporter` |
| 历史原生构建 | [GitHub Actions #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291)，原始 `native-encounter-build.json` 记录 276 个实际使用的源文件 |
| 上游参考 | `kwsch/PKHeX` commit [`0660d1e1f4924b8478daec73281bb8071a82ad19`](https://github.com/kwsch/PKHeX/commit/0660d1e1f4924b8478daec73281bb8071a82ad19) |
| 参考状态 | 2026-11-10 复核 GitHub 上游 `master` 的五个 .pkl Git Blob SHA 与固定 commit 一致 |
| 源对账包 | 历史 `sv400-t30-baseline-diff.zip` 的 `native-comparison.json`、字段级 CSV 与上述原生 .pkl SHA 交叉核验 |
| 本次归档 | [原始来源和比较 JSON](data/sv400-native-vs-pkhex-20261110/comparison_summary.json)、[原始对比 README](data/sv400-native-vs-pkhex-20261110/README_对比报告.md) 及十四份无损 CSV |

注意：本次重新验证了**五个原生文件的 SHA 和历史原生对账数据相符**，并确认上游参考 Git Blob 未变化；**本次没有再次下载整张官方 PKHeX 二进制逐字节计算**。Raid 的字节级一致性依据历史原始对账保存的独立参考 SHA256 与当下参考 Git Blob 身份。原生 5 张文件与实际 ROM 来源的 SHA 属于不同层次，不能互相取代。

本项目的 `.pkl` **不是 Python pickle**。Wild 是 `sv` BinLinker（每个地点四字节头 + 每个槽 8B）；Fixed 每条 20B；普通 Raid 每条 24B。多重集合对账以全部序列化字段为键，保留重复次数，忽略原文件内记录排列顺序和 wild area index / slot index。字节相同需额外比较完整文件 SHA，而不仅是集合相同。

## 2. 五表主结果

| 数据库 | 原生行数 | PKHeX 行数 | 全字段相同 | 原生独有 | PKHeX 独有 | 是否二进制相同 |
|---|---:|---:|---:|---:|---:|---|
| Wild `encounter_wild_paldea.pkl` | 29,840 | 26,861 | 26,185 | 3,655 | 676 | 否 |
| Fixed `encounter_fixed_paldea.pkl` | 977 | 977 | 774 | 203 | 203 | 否 |
| 帕底亚 `encounter_gem_paldea.pkl` | 454 | 454 | 454 | 0 | 0 | **是** |
| 北上乡 `encounter_gem_kitakami.pkl` | 133 | 133 | 133 | 0 | 0 | **是** |
| 蓝莓学院 `encounter_gem_blueberry.pkl` | 113 | 113 | 113 | 0 | 0 | **是** |

PKHeX 参考模板覆盖率：**Wild 26,185 / 26,861 = 97.48%**，**Fixed 774 / 977 = 79.22%**；这并非“原生生成准确率”。野生 29,840 行中，仅 26,185 行能找到严格相同参考模板，不能因为参考覆盖率高就忽略原生 3,655 行额外模板。

### 2.1 原始与参考的完整 SHA-256

| 文件 | 原生 SHA-256 | PKHeX SHA-256 |
|---|---|---|
| Wild | `01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187` | `66F765E1249FD0AC8CBAF97BE90905347F6FF4581368CF65AD5B8CD81C2AA831` |
| Fixed | `F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8` | `AB94F889B346E5DD4B6278846C8502D9B48AFDC23DC7AAACDF57C6A42A93C45E` |
| Raid Paldea | `B24C54559D8B5D676B8EB77DFBDC36ED82DFD1AD2D3E3125DAFDCF048C804552` | 与原生相同 |
| Raid Kitakami | `14F376DDDD53A02C41E782FB634BFF44DF50D88253F99924669CEC3734E4BC18` | 与原生相同 |
| Raid Blueberry | `DE925A11509B6DB1FD0F40D1102277A2A248AE7BEECBD2DF0A410EDF50AE9B51` | 与原生相同 |

Wild 原生 **242,056 B、416 个 area block**；参考 **218,096 B、400 个 block**。Fixed 双方均 **19,540 B**，但 SHA 不同。三张 Raid 为 10,896 / 3,192 / 2,712 B。

## 3. Wild：676 条参考独有的技术定位

原生独有 [3,655 行](data/sv400-native-vs-pkhex-20261110/wild_native_only.csv) 和参考独有 [676 行](data/sv400-native-vs-pkhex-20261110/wild_pkhex_only.csv) 均按以下完整身份记录：

```text
location_id, cross_from_id, species_national, form_raw, gender_raw,
level_min, level_max, time_forbidden_mask, weather_allowed_mask
```

`time_forbidden_mask` 是**禁止时段位**，不能当成允许时段位。采用非等级字段严格相同的条件配对时，**666/676** 条参考独有存在可对账原生记录，只差等级上下限，另外 **10/676** 条不能只用等级解释；不是说所有 3,655 条原生独有均已配对。

| 666 条严格等级配对的分型 | 参考独有数 |
|---|---:|
| 仅最大等级不同 | 373 |
| 仅最小等级不同 | 219 |
| 上下限均不同 | 74 |
| **合计** | **666** |

配对详见 [666 行原始区间与差分](data/sv400-native-vs-pkhex-20261110/wild_level_range_pairs.csv)、[等级配对诊断](data/sv400-native-vs-pkhex-20261110/wild_level_pairing_diagnostic.csv)、[10 行残差](data/sv400-native-vs-pkhex-20261110/wild_remaining_pkhex_only.csv)。

### 3.1 Wild 地点差异 Top 10（精确 Location ← CrossFrom）

| Location ← CrossFrom | 原生独有 | PKHeX 独有 |
|---|---:|---:|
| `158 ← 0` | 553 | 124 |
| `164 ← 158` | 388 | 6 |
| `144 ← 158` | 308 | 16 |
| `166 ← 158` | 308 | 0 |
| `156 ← 158` | 236 | 26 |
| `162 ← 158` | 174 | 22 |
| `140 ← 158` | 111 | 50 |
| `136 ← 158` | 128 | 0 |
| `160 ← 158` | 118 | 6 |
| `178 ← 0` | 57 | 57 |

全量 70 个差异地点组：[wild_difference_by_location.csv](data/sv400-native-vs-pkhex-20261110/wild_difference_by_location.csv)。原生独有中 **2,337 条 CrossFrom=158**，说明 158 不仅出现在 Fixed，亦是 Wild 跨区归属的重要调查点。

### 3.2 蓝莓 178 的碰撞来源/等级合并

| 精确目标 | 原生独有 | 参考独有 |
|---|---:|---:|
| `178 ← 0` | 57 | 57 |
| `192 ← 178` | 57 | 57 |
| `180 ← 178` | 28 | 28 |
| **共计** | **142** | **142** |

例如 #74 小拳石的原始生成结果为 `Lv 59–74`，PKHeX 对应 `Lv 59–70`。源 `PointData` 中可能同时有 `[59,70]` 与 `[65,74]`；默认 `LocationStorage.Consolidate()` 经 `PaldeaEncounter.Absorb()` 会变成 `[59,74]`，这不是通过 strict-overlap（仅禁止相邻合并）就能避免的真实重叠。

工程假设是把 **SourceCollisionArea/TRSCN/TRCOL 原始碰撞所有权** 保留到去重之前，在目标 `178/180/192` 的碰撞所有权池中分别做原有合并，然后才做完全相同槽去重。参阅 [[sv400-original-rom-to-pkl-release-and-178-owner]]；实验模式 `--owner-ab-mode terarium-178-source-collider` **默认关闭**。历史离线 A/B 的潜在增益不能冒充这次原始 ROM 运行结果。

**正式准入条件：** 原先严格匹配参考的 **26,185 条必须全部保留（损失0）**，非目标 Wild 记录不改变，Fixed 和 Raid 完整 SHA 不改变，再审计 178 的新增参考匹配和真实碰撞来源。即便满足，仍不是 PK9 运行时合法性证明。

## 4. Fixed：203 条差异，不能全局删除 158

Fixed 每条为 `Species(2B) + Form/Level/FlawlessIV/Tera/Gender/Ability(6B) + Moves(8B) + Locations(4B)`，严格共 20B。全部非地点字段包括四招、IV、Tera 等。

- [原生独有 203 行](data/sv400-native-vs-pkhex-20261110/fixed_native_only.csv) / [PKHeX 独有 203 行](data/sv400-native-vs-pkhex-20261110/fixed_pkhex_only.csv)，原生与官方完全相同 774。
- **189 对精确配对**：非地点字节逐个一致，原生比 PKHeX 多一个 `158`；见 [189 行反事实配对](data/sv400-native-vs-pkhex-20261110/fixed_158_counterfactual_pairs.csv)。
- 原生独有 203 条里有 **191 条携带158**，但仅 189 条可证明是这种差异。
- **14 原生独有 + 14 参考独有**不能仅凭删除158解释；见 [剩余原生 14 行](data/sv400-native-vs-pkhex-20261110/fixed_remaining_native_only.csv) 与 [剩余参考 14 行](data/sv400-native-vs-pkhex-20261110/fixed_remaining_pkhex_only.csv)。
- **114 条已经完全匹配的 Fixed 模板同样合法地包含158这个地点值（相对参考）**，全局删除会直接破坏已知准确的匹配。

| 示例 Species | 等级 | 原生地点 | PKHeX 地点 |
|---|---:|---|---|
| #23 | 59 | `140,158` | `140` |
| #25 | 15 | `136,158` | `136` |
| #27 | 19 | `140,144,158` | `140,144` |
| #28 | 24 | `158,162` | `162` |

另有 [202 对相同非地点字段的全量地点诊断](data/sv400-native-vs-pkhex-20261110/fixed_different_locations_paired.csv) 和 [1 条无法按相同非地点字段配对的参考残差](data/sv400-native-vs-pkhex-20261110/fixed_reference_only_no_non_location_pair.csv)。这 202 对不可与“189 个仅多158”混为一谈。

真正修复需要追溯 `FixedSymbolDumper9` 的 `TableKey → 朱/紫原始 TRSCN 固定符号点 → 坐标/AreaInfo → TRCOL 原始所有权`，结合原始剧情旗标、ActionID 才能确认每条是否应挂载 158。由于 20B 固定模板**没有 TableKey**，应在生成前的 trace 中重建来源，禁止事后仅按物种或等级批量改写。

## 5. Raid：三张表可以原样保留

三张普通 Raid 的 **454 + 133 + 113 = 700 条**均与固定参考文件二进制 SHA 一致。其原生生成取自三个区域各 6 个 RaidEnemyTableArray，先按星级与版本处理权重再序列化每条 24B。

这**不包含**历史 BCAT、最强活动、配信特殊团战、大量出现事件、GO/HOME 转入处理；本报告不对它们作覆盖声明。

## 6. 仓库交付物与重跑办法

本仓库归档目录：[`docs/research/data/sv400-native-vs-pkhex-20261110/`](data/sv400-native-vs-pkhex-20261110/)，包含：
- [comparison_summary.json](data/sv400-native-vs-pkhex-20261110/comparison_summary.json)：版本、来源、五表 SHA/大小/记录数、地点统计、分型与验收语义。
- [README_对比报告.md](data/sv400-native-vs-pkhex-20261110/README_对比报告.md)：最初生成的对账说明原文。
- Wild 全差异 2 张、地点汇总 1 张、等级配对 2 张、残差 2 张。
- Fixed 全差异 2 张、地点差异配对 1 张、仅多 158 配对 1 张、残差 3 张。
- [SHA256SUMS.txt](data/sv400-native-vs-pkhex-20261110/SHA256SUMS.txt)：归档时文件 SHA 校验；全部 CSV 保留原来的 UTF-8 BOM 与换行格式。
  
可复现正式生成对账（`--generated` 必须是来自原始 61+223 SHA 校验的 pkNX 构建，而不是 PKHeX 资源复制）：

```powershell
python scripts/Compare-SV-Native-PKHeX-Encounters.py `
  --native-manifest "Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json" `
  --build-evidence "SV400-native/native-encounter-build.json" `
  --generated "SV400-native" `
  --reference "PKHeX/PKHeX.Core/Resources/legality/wild/Gen9" `
  --output "SV400-recomputed-diff"
```

对账程序 [Compare-SV-Native-PKHeX-Encounters.py](../../scripts/Compare-SV-Native-PKHeX-Encounters.py) 可能在野生/固定不一致时以**退出码 2**报告 `FIELD_LEVEL_DIFFERENCES_REQUIRE_INVESTIGATION`，这是预期诊断状态，不等同脚本执行失败；应查看其 `native-comparison.json` 和 CSV，而不能把有差异的结果当成二进制相同。

## 7. 交付状态与禁止推断

| 验收 | 状态 |
|---|---|
| 5 个原生 .pkl 的 SHA 与历史原始生成证明对齐 | **VERIFIED** |
| 独立 PKHeX 固定版本历史字段对账、14 CSV 完整归档 | **VERIFIED_ARCHIVED_COMPARISON** |
| 上游 master 的五表 Git Blob SHA 与固定版本相同（2026-11-10） | **VERIFIED** |
| 178 source-collider A/B 完整 ROM 重新执行，损失0 | **NOT_YET_VERIFIED** |
| Fixed 189 条 158 的真实游戏符号所有权 | **NOT_YET_VERIFIED** |
| PK9/游戏运行时合法性与历史 BCAT 全量还原 | **NOT_OBSERVED** |

另见 [[sv-pkhex-encounter-native-regeneration]]、[[sv400-cross158-original-collider-six-level-merges]] 和 [[sv400-reference-gap-676-wild-203-fixed-zero-loss]]。
