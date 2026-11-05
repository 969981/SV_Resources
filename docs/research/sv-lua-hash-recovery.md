---
aliases:
  - SV Lua Hash 恢复
  - 朱紫 Lua 符号名逆向
tags:
  - pokemon-sv
  - lua
  - fnv1a
  - hash-recovery
  - evidence
status: PARTIAL
game: Scarlet/Violet
source_revision: 242039cbcd9de3f5a424de5b68ae581f7bed2b23
---

# SV Lua C/E/F/S Hash 空映射恢复（数字／道馆／大小写模板）

> [!important] 证据边界
> 这是对 PokeDocs **空行的补充候选**，不是游戏源码的已验证语义映射。候选只有在 FNV-1a-64 **完整 64 位值**与待解 Hash 一致、且原始行本来没有名称时才写出；其命名方式的合理性来自已有相邻命名模板。不同构建版本的真实用途还需通过 Lua 脚本调用、字符串引用和运行时行为验证。

## 数据来源

- 原始文件：[四份 SV Lua Hashlists](../../tools/PokeDocs/SV/Hashlists/Lua)（GitHub 路径在仓库为 `tools/PokeDocs/SV/Hashlists/Lua/`）
- 固定上游：[`pkZukan/PokeDocs`](https://github.com/pkZukan/PokeDocs)，提交 `242039cbcd9de3f5a424de5b68ae581f7bed2b23`
- Hash 算法：FNV-1a-64，offset basis `0xCBF29CE484222645`，prime `0x100000001B3`，每步模 `2^64`，**严格区分大小写**
- 佐证：[`Martmists-GH/SV-Script-RE/tools/test_hash.py`](https://github.com/Martmists-GH/SV-Script-RE/blob/master/tools/test_hash.py)，其 FNV 算法与本次所用一致；已对 PokeDocs 所有 **16,267 个已知映射**反算，均匹配原始 Hash。

## 多轮模板恢复结果

| 类型 | 原已知 | 原未知 | HASH_EXACT_CANDIDATE 新增 | 仍未知 |
| --- | ---: | ---: | ---: | ---: |
| Lua `c`（类名） | 1,911 | 1,375 | **9** | 1,366 |
| Lua `e`（枚举） | 215 | 2 | **0** | 2 |
| Lua `f`（函数/方法） | 8,348 | 116 | **9** | 107 |
| Lua `s`（字符串/字段） | 5,793 | 830 | **30** | 800 |
| **合计** | **16,267** | **2,323** | **48** | **2,275** |

候选通过三种可复现规则得到：数字占位符扩展、道馆类型词替换（如 `kusa`→`mizu`）、首字母大小写切换（如 `On...`→`on...`），仅在完整 64 位 Hash 命中时收录。例如：

| 原未知 Hash | 补出的名称 | 原已知证据 |
| --- | --- | --- |
| `0xAF981D669D9178E6` | `main.event.general.area_script.AreaEnter_a_sch_room01` | `AreaEnter_a_sch_room02` |
| `0xAF981B669D917580` | `main.event.general.area_script.AreaEnter_a_sch_room03` | `AreaEnter_a_sch_room02` |
| `0x31AF09FF3A7DA909` | `main.event.general.battle_talk.BattleTalk_mizu_leader_01` | `BattleTalk_kusa_leader_01` |
| `0x42C5B56005284098` | `main.event.general.battle_talk.BattleTalk_koori_leader_01` | `BattleTalk_kusa_leader_01` |
| `0x82E517173EC4A7A7` | `onMonsNoValueChanged` | `OnMonsNoValueChanged` |
| `0x84E01EC2D62ED7DB` | `onSexTypeValueChanged` | `OnSexTypeValueChanged` |
| `0x0047CD97018E45C1` | `OBJECT_NAME_1010` | `OBJECT_NAME_1020` |
| `0x004E3997019368F3` | `OBJECT_NAME_1030` | `OBJECT_NAME_1020` |
| `0x34151E5FC1F4190A` | `CHR_S_CHILDM_03` | `CHR_S_CHILDM_02` |
| `0x42691C1F82A7B530` | `POKE_DERUBIRU01` | `POKE_DERUBIRU04` |
| `0x42691F1F82A7BA49` | `POKE_DERUBIRU02` | `POKE_DERUBIRU04` |
| `0x6B775DB767263A2C` | `SCENE_STEP2` | `SCENE_STEP1` |
| `0xEF683BA4C71BC8EC` | `OPEN_WAY_02` | `OPEN_WAY_01` |
| `0xF667EB15F51B1829` | `IterativeLerpVec2` | `IterativeLerpVec3` |

完整 **48 条**和每条源文件行号在 [`recovered.tsv`](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovered.tsv)，详尽统计在 [`recovery-report.json`](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovery-report.json)。输出和原输入独立，不会影响完整镜像。

## 可执行工具与文件布局

- [`scripts/Recover-SV-Lua-Hashes.py`](../../scripts/Recover-SV-Lua-Hashes.py)：唯一的恢复和验证算法，纯 Python，不需要游戏资源、依赖或联网。
- [`.github/workflows/recover-sv-lua-hashes.yml`](../../.github/workflows/recover-sv-lua-hashes.yml)：实跑合成测试、从原始映射重建候选、只读校验、原文件 Git diff 校验，然后提交补充目录；不会修改上游 PokeDocs。
- [`tools/PokeDocs-Supplement/SV/Hashlists/Lua/`](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua)：候选 TSV、JSON 报告与四份合并 TXT（保留原顺序与未命名 Hash）。

```powershell
# 从仓库根目录运行
py -3 .\scripts\Recover-SV-Lua-Hashes.py --min-recovered 48
py -3 .\scripts\Recover-SV-Lua-Hashes.py --verify-only --min-recovered 48
py -3 -m unittest discover -s tests -p 'test_sv_lua_hash_recovery.py' -v
```

合并列表例如 `lua_s_hashes.merged.txt` 可以作为下游解析器的输入：已知名称保持原样、命中的空行填入验证候选、其余空行保留 Hash。**不要向 upstream 提交本地猜测而不注明候选状态**。

## 如何提高下一轮覆盖率

1. **类名 C：1,366 条未命名。** 从 Lua 反编译和字节码引用恢复类的真实命名空间；可针对已知相近类路径生成词典，但必须完整 Hash 命中再收录。不能直接根据相邻 Hash 序号猜类名。
2. **枚举 E：仅 2 条。** 沿其 `E...` 在 Lua 中的引用定位所属类、选项名称和场景。未找到候选，不填 `UNKNOWN` 以外内容。
3. **函数 F：107 条。** 对未命名 `F...` 查找所属类 `C...`、`prototype` 调用，结合已有 `S...` 字段名和游戏功能推导方法名；需要逐一校验 FNV-1a。
4. **字段 S：800 条。** 对缺失组的连续数字编号、`CHR_`、`OBJECT_NAME_`、`POKE_`、UI 常量与场景标签扩展，以及跨版本脚本的真实字符串引用进行匹配。
5. **版本兼容性。** `SV-Script-RE` README 使用过 3.0.1，不能因此认定所有 Lua 语义与 SV 4.0.0 完全一致；需要对 4.0.0 的实际符号、引用和表结构核对。

这 48 条属于 **HASH_EXACT_CANDIDATE**，并非全部已经验证为可触发的游戏运行逻辑；真实游戏验证之后才可以提升为 `CONFIRMED_NATIVE`。

相关：[[../hashcache/README|PokeDocs HashCache]] · [[../resource-provenance|资源证据规范]]。
