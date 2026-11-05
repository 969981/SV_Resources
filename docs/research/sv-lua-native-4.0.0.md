---
aliases: [SV 4.0.0 Lua 原生 C/F 证据, 不拆分 BLUA 直接分析]
tags: [pokemon-sv, lua54, hash-recovery, native-evidence]
status: PARTIAL
game_version: 4.0.0
---

# SV 4.0.0 原生 Lua C→F 方法与调用关系

> [!important] 分析方式
> 使用 Library 内 **原版 main.blua** 以及用户上传的 **main_dynamic.blua**，直接遍历 Lua 5.4 字节码完整原型树。**不拆分、不重新提取、不改写原始 BLUA、不修改 PokeDocs**。此前从 Trinity 提取的同名文件与两份输入 SHA-256 一致。

## 来源验证

| 文件 | 大小 | SHA-256 |
| --- | ---: | --- |
| `main.blua` | 12,912,264 B | `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815` |
| `main_dynamic.blua` | 5,342,713 B | `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572` |

原生 TRPFD 中已经单独定位：main → pack **21977**，main_dynamic → pack **21978**；见 [`lua_pack_locations.json`](../../Unpack/4.0.0/romfs/arc/data.trpfd/_index/lua_pack_locations.json)。

## 实际原生结果

| 项目 | main | main_dynamic |
| --- | ---: | ---: |
| 完整 Lua Prototype | 37,743 | 7,036 |
| 顶层 Prototype | 30,829 | 6,431 |
| 严格字节码 C→F 函数赋值 | 18,991 | 4,736 |
| 有直接方法赋值的不同 C | 2,705 | 744 |

合计 **23,727** 条经指令确认的方法赋值，不是根据 Hash 同现推断。

匹配的 8 条原生指令模式：
`GETUPVAL → LOADK(C) → GETTABLE → LOADK(prototype) → GETTABLE → LOADK(F) → CLOSURE → SETTABLE`，同时核对目标寄存器、一致的表对象和子函数原型索引。每条关系具有根函数 PC、赋值 PC、子原型索引、方法代码长度。

### 对 PokeDocs 现有空映射的覆盖

| 对象 | 原始空映射 | 本次证实的实际结构 | 未闭合 |
| --- | ---: | ---: | ---: |
| C 类 | 1,375 | **1,076 个具有原生直接方法赋值** | 299 未发现直接赋值 |
| F 函数 | 116 | **25 个在原生代码中有实际引用指令（60 处）** | 91 在本次检查范围未见引用 |

**116 条原始未命名 F 中，没有一条命中标准 `prototype[F]=closure` 模式**。不等于它们不存在；可能属于实例字段、回调或其他动态调用方式。已恢复的 9 条 F 名称全部在实际指令中被引用。已恢复的 9 条 C 名称全部能找到直接方法赋值。

## 未命名 F 的调用方模块（25 条）

| C 类已知名称（调用方，并非 F 所有者） | 不同未知 F |
| --- | ---: |
| `main.gem.setting_tool.GemSettingManager` | 14 |
| `main.ui.btl_team.view.BattleTeamSelectUIInputModule` | 5 |
| `main.ui.msg_doctor.effect.MsgDoctorNoiseffect` | 2 |
| `main.field.behaviour.base.UpdateFrequencyRequester` | 2 |
| `main.ajito.system.rush.AjitoPokemonPopPointModel` | 1 |
| `main.battle.simple_auto.SimpleAutoBattle`（另有 GameEventSimpleAutoBattle 调用） | 1 |

这些是**调用方/字段使用方**，不能直接改写为 F 的声明类。

## 新增可追溯的实例字段赋值链

在 `C850E69B34478276C`（`main.gem.setting_tool.GemSettingManager`）的 `F7C68FEDB79AB6396` Setup 内，沿原生指令追踪 `class.new()` → `SETI self[slot]` → `GETI self[slot]` → `SETFIELD F`：

| 构造的接收对象类 | self 槽位 | 未命名 F 字段赋值次数 |
| --- | ---: | ---: |
| `main.gem.setting_tool.GemSettingStartWindow` (`C85EFC84DF009EC3F`) | 7 | 3 |
| `main.gem.setting_tool.GemSettingModelWindow` (`C569FB0F3847B33D6`) | 8 | 7 |
| `main.gem.setting_tool.GemSettingEffectWindow` (`CADA48A3CAEC7D9C8`) | 9 | 5 |
| `main.gem.setting_tool.GemSettingOptionWindow` (`CB0391C8B18BB2588`) | 11 | 3 |

18 处记录涉及 **14 个不同 F Hash**，其中部分字段同时赋值给两个不同窗口实例。原 Hash `F82E517173EC4A7A7`（先前候选名 `onMonsNoValueChanged`）可直接证明被赋给 `GemSettingStartWindow` 对象。

> [!warning] 等级区别
> `NATIVE_4_0_0_DIRECT_METHOD_REGISTER_ASSIGNMENT` = 真正原型方法定义；
> `NATIVE_4_0_0_CONSTRUCTED_INSTANCE_FIELD_ASSIGNMENT` = 真正对象实例字段赋值；
> `NATIVE_CALLER_REFERENCE_ONLY` = 函数体内实际使用但未证明声明类；
> `HASH_EXACT_CANDIDATE` = 名称的 FNV 计算一致，并不自带语义证明。

## 不再拆大文件的再现方法

使用同一完整 Lua 5.4 解析脚本对输入文件直接读取，只输出少量 TSV/JSON 索引。此次还生成了 23,727 条完整 C/F 边、1,375 条 C 覆盖、116 条 F 使用状态、60 条 F 引用，以及 18 条接收对象构造证据。完整索引和自包含 Python 3 脚本随当前对话附件发布，**没有向 GitHub 上传或拆分两份原始 .blua**。

后续优先调查剩余 299 个没有直接方法定义的 C，和 25 个被原生调用但未见 `prototype` 定义的 F。建立消费者上下文、调用目标及游戏版本证据后，再将候选名称提升为确认映射。

关联：[[sv-lua-hash-recovery|48 条 Hash 精确候选]] · [[sv-lua-hash-context|历史 C/F 结构]] · [[../resource-provenance|来源验证]]。
