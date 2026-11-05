---
aliases: [ZA Lua Hash 恢复, 宝可梦 ZA 未映射 Lua 符号]
tags: [pokemon-za, lua, fnv1a, reverse-engineering]
status: PARTIAL
evidence: HASH_EXACT_CANDIDATE
---

# ZA Lua C/E/F/S 空白映射恢复

> [!important] 证据边界
> 这是候选名字与原始 64-bit Hash 的 **完整精确匹配**，尚未由游戏 Lua 调用链或运行时确认语义、参数和返回值；因此统一记为 `HASH_EXACT_CANDIDATE`，不是 `CONFIRMED_NATIVE`。

## 输入、算法、产物

- 原始 PokeDocs（只读）：[[../../tools/PokeDocs/ZA/Hashlists/Lua|ZA/Hashlists/Lua]]；上游 https://github.com/pkZukan/PokeDocs
- 补充产物：[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua|PokeDocs-Supplement/ZA/Hashlists/Lua]]，含 `recovered.tsv`、`recovery-report.json` 和四个 `*.merged.txt`。
- 算法为 FNV-1a-64，初值 `0xCBF29CE484222645`、质数 `0x100000001B3`，每字节先异或再乘法取低 64 位，UTF-8 且区分大小写。
- 将 ZA 已知词、SV 同系名字、ZA C 类名词汇组合为操作前缀/成员名候选，只有完整 64-bit 匹配原有空白条目才收录；全部 1,530 条原始已映射记录也验证通过。

## 结果

| 类型 | 原已知 | 原未知 | 新候选 | 尚未映射 |
| --- | ---: | ---: | ---: | ---: |
| C | 1,202 | 0 | 0 | 0 |
| E | 0 | 3 | 0 | 3 |
| F | 127 | 138 | **16** | 122 |
| S | 201 | 632 | **54** | 578 |
| **合计** | **1,530** | **773** | **70** | **703** |

本轮找到了 69 个不同的候选字符串，且 `WaitAnimeState` 同时命中 F 和 S 表中的两个独立空白条目，因此实际补充 **70 条记录**。完整 Hash、名称、归属及证据状态见 `recovered.tsv`，source Git blob SHA 与各类统计见 `recovery-report.json`。

代表：`CreateRotomPhone`、`CreateItemText`、`CreateNpcPokemon`、`GetFlagValue`、`SetFlagValue`、`SetWorldPosition`、`ShowMessageWindow`、`CreateBattleNpc`、`StartCameraMove`、`GetRewardItem`。单个名称匹配不等于已经证明其用途。

## 可复现

~~~powershell
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --min-recovered 70
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 70
py -3 -m unittest discover -s tests -p 'test_za_lua_hash_recovery.py' -v
~~~

提供额外词典（每行一个原始标识符）只扫描仍未知 Hash、不自动改写：

~~~powershell
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --scan-names .\za-names.txt
~~~

工具拒绝重名/Hash 不匹配、拒绝覆盖原来已有映射，合并文件保留原顺序及剩余未知项；`tools/PokeDocs` 完整上游目录不会被覆盖。

## 未完成的研究

- F 仍有 122 条，重点结合真正的 ZA Lua 原型、调用者与事件指令语义分析。
- S 仍有 578 条，优先提取原始 Lua 脚本字符串、字段引用与消息/UI/任务相关名字。
- E 仍有 3 条，无可验证候选，不填任意名称。
- 对可在原生脚本/运行时核实的条目单独升级为 `CONFIRMED_NATIVE`，并保留对账证据。

相关：[[sv-lua-hash-recovery|SV Lua 恢复]] · [[../resource-provenance|证据准则]]。
