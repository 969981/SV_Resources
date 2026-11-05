---
aliases: [SV Lua 第四轮, SV 4.0.0 C F S 剩余 Hash]
tags: [pokemon-sv, lua54, hash-recovery, fnv1a, obsidian, native-evidence]
status: PARTIAL
game_version: "4.0.0"
---

# SV 4.0.0 原生 C/F/S 第四轮：遗漏的全局类注册与新 S Hash

> [!important] 数据来源与不拆大文件原则
> 直接读取 Library 的**完整** `main.blua` 和 `main_dynamic.blua`，不分卷、不修改、不重新提取、不发布原生游戏字节码。只导出 TSV/JSON 证据和脚本。两份字节码 SHA-256 分别为：
>
> - `main.blua` — `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`。
> - `main_dynamic.blua` — `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572`。

## 第四轮增量结果

| 目标 | 当前原生证据 | 注意 |
| --- | --- | --- |
| 原来 80 个尚未按严格模式闭合的 C | **7** 个新的 `_ENV[C]` 赋值，**1** 个根函数类列表引用，**16** 个仅子原型引用，**56** 个在这两份 Lua 中没有对应完整 C 字符串 | 不能从字符串缺席推断整个游戏没有该类 |
| 12 个有使用证据但尚未命名的 F | **36** 条原生指令引用，其中 **11** 条紧邻 `SELF → CALL`；不新增没有数学和来源支持的函数名 | 存在可调用的代码路径，不代表已实际运行，也不等于正式 `prototype[F]` 归属 |
| 12 个没有 S 名称的静态闭包 | 这 **12 个 Hash 均完全不在原始 `lua_s_hashes.txt` 中**；新增 **1** 条候选 `GetInt8`，剩余 **11** 条仍匿名 | 是新发现的 Hash，不是原版 S 中已有的空行 |

## 1. 七个漏掉的 C 类注册

前阶段只识别 `GETUPVAL → LOADK → MOVE → CALL → SETTABLE`。此次补查 `SETTABUP`，证明根函数中还存在以下 `_ENV[C]` 赋值。每条都经过对应原型的常量索引和原生 PC 验证。

| C Hash | 4.0.0 `main` 根函数 PC | 证据 |
| --- | ---: | --- |
| `C63CC18BA80D3AF90` | 6717 | `SETTABUP` |
| `CD4FA9948F629EF36` | 6720 | `SETTABUP` |
| `CAAB8219B9360D02F` | 6723 | `SETTABUP` |
| `CE015A1D2C64F0492` | 10046 | `SETTABUP` |
| `C1F83D1C7AB1F858E` | 10049 | `SETTABUP` |
| `CEB8ED63D1A3FF8FA` | 10055 | `SETTABUP` |
| `C2E2D9DF9163A754B` | 10137 | `SETTABUP` |

`CBCE7809231191E50` 出现在根函数的 `LOADK → GETTABLE → SETLIST` 模式中（如 PC 21422），是**类列表引用证据**，本次未证明它通过 `_ENV[C]` 注册。另 16 个 C 在实际子原型中有 Hash 引用。

现有 **56 个** C 在两个实际 BLUA 的常量及原始 ASCII 字符串中未见。标记为 `NOT_PRESENT_AS_C_HEX_STRING_IN_MAIN_OR_DYNAMIC`，不是全局否定断言。

## 2. 十二个匿名 F 的真正用途

| 模块 | 匿名 F 数 | 原生使用方式 |
| --- | ---: | --- |
| `main.ui.btl_team.view.BattleTeamSelectUIInputModule` | 5 | 五种按键触发回调的 `SETFIELD` 存储与后续 `SELF → CALL` 消费 |
| `main.ui.msg_doctor.effect.MsgDoctorNoiseffect` | 2 | 护士消息动画回调写入及 `MessageSequence` 中的调用 |
| `main.field.behaviour.base.UpdateFrequencyRequester` | 2 | 更新频率相关的成员字段写入与调用 |
| `main.ajito.system.rush.AjitoPokemonPopPointModel` | 1 | 宝可梦出现点的实例字段与 `popPokemonsAsync` 消费 |
| `main.battle.simple_auto.SimpleAutoBattle` | 1 | `GameEventSimpleAutoBattle` 写入的函数/回调字段及 `Start` 中的判断与调用 |
| `main.gem.setting_tool.GemSettingManager` | 1 | `Setup` 绑定回调字段；此组记录未见直接 `SELF → CALL` |

12 个 F 合计 **36 条引用指令、11 条紧邻 `SELF → CALL`**。没有给未通过完整 64 位 FNV-1a 和源码上下文的字段填入猜测名称。此前恢复的 13 个 F 候选原样保留。

## 3. S：区分“未在源表出现”与“已有行但名字为空”

原始 PokeDocs `lua_s_hashes.txt` 为 **6,623** 条，另有 830 条原有空名字。4.0.0 原生静态闭包给出 **12 个此前完全未列入源文件的新 S Hash**，这两种未知状态不可混为一谈。

| 原生 Hash | 候选名字 | 原生根据 |
| --- | --- | --- |
| `SBB0DA3B1BEEB4D80` | `GetInt8` | 类 `C7F881F5D9B6F6009`，根 PC 125574，函数原型 9152，邻接 `GetInt16`、`GetInt`、`GetBool`、`GetFloat` |

`FNV-1a-64("GetInt8") = 0xBB0DA3B1BEEB4D80`；同时保留实际静态闭包定义。名称状态为 `HASH_EXACT_CANDIDATE_NEW_S_ENTRY`，并不是已取得原始源码语义声明。

另外 11 个新 S 保持未知。两个静态方法体对 `S20AA0892EAC75A98`、`SC6CBE7FAD3040987` 分别包含相同数字 Hash 的 `F...` 字符串常量，属于可复核的交叉引用线索，不能仅凭同值就断言其正式用途。

### Github 可重复生成的独立 S 增量列表

- [合并脚本](../../scripts/Merge-SV-Lua-Native-S-Fields.py)；不读取任何 `.blua`，只接受上一轮已核验的 281 条 `Class[S]=CLOSURE` 原生关系表。
- [原生 C→S 闭包索引](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/followup-c-static-s-closures.tsv)。
- [增强版 S 列表和验证报告](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/phase4/)：原 6,623 条不改变，按 Hash 插入 12 条，共 **6,635** 条。
- [自动合并测试工作流](../../.github/workflows/merge-sv-lua-native-s.yml)：验证 4 项合成测试、生成并回读校验、检查 PokeDocs Git diff，然后仅提交增强产物。

~~~powershell
py -3 .\scripts\Merge-SV-Lua-Native-S-Fields.py
py -3 .\scripts\Merge-SV-Lua-Native-S-Fields.py --verify-only
py -3 -m unittest discover -s tests -p "test_sv_lua_native_s_merge.py" -v
~~~

用于追踪完整 C/F 指令、登记寄存器和原型 PC 的`Trace-SV-Lua54-Residuals.py`、第四轮完整 80 C／12 F／12 S TSV 索引及六项合成测试另随本轮对话 ZIP 交付。该追踪器读取全量 Lua **但不拆分原始文件**。

## 下一阶段证据链

1. 从 7 个新确认的 C 类的 `__name__`、`__super__` 和相邻类引入路径确定命名空间；没有完整 FNV 匹配不得填入“真名”。
2. 对 12 个 F 的 setter 参数来源、动态回调创建、实例写入以及调用路径分级标记，不要从方法名直接猜字段 Hash。
3. 对 11 个新 S 的闭包函数体内常量、原生返回类型和后续调用进行逐项核验，建立名称候选时仍强制 64 位 FNV 校验。
4. **保留原版 PokeDocs**；所有新发现 Hash 放在单独的 native-4.0.0 补充文件中。

关联：[[sv-lua-native-4.0.0-followup|第三轮]] · [[sv-lua-native-4.0.0|完整原生方法索引]] · [[sv-lua-hash-recovery|FNV 命名研究]]。
