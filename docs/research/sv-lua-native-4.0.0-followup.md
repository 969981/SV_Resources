---
aliases:
  - SV 4.0.0 Lua 第三轮 C/F 恢复
  - SV Lua 静态 S 函数和 Gem 回调映射
status: PARTIAL
source_version: '4.0.0'
tags: [pokemon-sv, lua54, fnv1a64, native-evidence, obsidian]
---

# SV 4.0.0 原生 Lua 第三轮：静态 C→S 定义和 F 回调补名

> [!important] 处理边界
> **直接读取两个完整 `.blua` 文件；不分卷、不拆脚本、不反编译全部源码、不重新提取、不修改原始 PokeDocs。** `main` / `main_dynamic` 均由固定 SHA-256 确认。所有新增名称都是 `HASH_EXACT_CANDIDATE`，不因为某条调用链存在就宣称原始源码命名已最终确认。

## 数据来源（字节级确认）

| 文件 | 原始字节数 | SHA-256 |
| --- | ---: | --- |
| `main.blua` | 12,912,264 | `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815` |
| `main_dynamic.blua` | 5,342,713 | `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572` |

输入还包括 `tools/PokeDocs/SV/Hashlists/Lua/lua_{c,f,s}_hashes.txt` 和前阶段 `recovered.tsv`；扫描器运行在 Lua 5.4 原始 Prototype、常量表和 32 位指令层。

## 1 · 原本 299 个未见 `prototype[F]` 的 C 类进一步分类

上一轮已从 1,375 个原始 C 空行中找到 **1,076 个**具有 `prototype[F] = CLOSURE` 方法定义的类。本轮仅针对余下 **299** 个继续核实。

| 原生检查项 | C 类数量 | 证据说明 |
| --- | ---: | --- |
| 出现 `Class[S] = CLOSURE` 静态函数定义 | **103** | **281 条**完整五指令赋值链 |
| 出现 `_ENV[C] = constructor_result` 一类全局类注册 | **213** | 以原始 `GETUPVAL/LOADK/MOVE/CALL/SETTABLE` 序列核验 |
| 静态函数与类注册两种证据都有 | **97** | 不应把两组数字直接相加 |
| 两种证据至少命中一种 | **219** | `103 + 213 - 97` |
| 两种都未命中 | **80** | 其中 **24** 仍可从其他指令引用定位；56 未被此次支持的指令索引命中 |

因此，在原始 1,375 个未命名 C 中，能够证明**直接 F 原型方法或直接 S 闭包定义**的现为 **1,179 个**，其余 **196** 尚未发现上述两种函数定义形式。但这 196 个之中，**116 个已有类全局注册证据**，并不是“脚本中不存在的类”。另 80 个不能凭没有匹配到严格模式就宣称不存在。

静态闭包 281 条中有 **269 条 S 字段可以从 PokeDocs 获得已知名称**，例如 `Create`、`GetInt`、`GetFloat`、`GetBossCarType`、`ToString`、`GetDefaultFeedback`、`_new` 等；剩余 **12 条 S 字段**继续保留 Hash。

> [!warning] 别混淆 S 和 F
> Lua 类表上的 `S...` 字段可以是静态函数，但 **不是** `prototype[F...]` 方法。补全“结构关系”不等于恢复“C 类真名”，也不意味着可将 S 重命名成 F。

## 2 · 新增四个 F 的精确候选名称

四个名称都由 `GemSettingManager.Setup` 内的已知 `On...` 成员处理函数→ callback 创建 → **未知 F 字段赋值** 的代码证据支持，再逐条计算 FNV-1a-64；全部与原始 64 位目标 Hash **精确相等**。

| 原未知 F Hash | 新名称候选 | 原生赋值证据 |
| --- | --- | --- |
| `F1DE5A53079D877CE` | `onModelModeChangedButton` | `OnModeChangedButton`，PC 211→214，1 处 |
| `F3BCF72E1EF9938D6` | `onEulerAnglesValueChanged` | `OnModelEulerAnglesValueChanged`、`OnEffectEulerAnglesValueChanged`，2 处 |
| `F7E0CF8AE53062734` | `onOffsetPosValueChanged` | `OnModelOffsetPosValueChanged`、`OnEffectOffsetPosValueChanged`，2 处 |
| `FA1A67080A3235772` | `onLocatorNameValueChanged` | `OnModelLocatorNameValueChanged`、`OnEffectLocatorNameValueChanged`，2 处 |

**审慎解释：** 这些是哈希数学命中加上源码赋值背景，仍属于 `HASH_EXACT_CANDIDATE`；特别是 `onModelModeChangedButton` 虽然与目标 Hash 完全一致，但其接收对象命名上下文还存在差异，应继续核对实例消费方。

以前已有 48 条候选（其中 F 为 9 条），本轮新增 4 条后：**全类型合计 52 条候选；F 13 条已获精确名称候选、103 条 F 仍空**。增强版 `lua_f_hashes.native-merged.txt` 保留原先 8,464 条记录的顺序和原始 Hash，仅补入这 13 个原空行，其余保持原样。

## 3 · 五个战斗队伍输入回调 + 两个护士消息特效回调

除 Gem Setting 的前述 14 个不同 F 对象字段引用外，还独立核实了 **7 条 `SETFIELD self[未知 F] = ...` 的实际实例写入**：

| 接收实例类 | F 数量 | Setter 方法名称示例 |
| --- | ---: | --- |
| `main.ui.btl_team.view.BattleTeamSelectUIInputModule` | **5** | `SetOnLeftButtonTriggerFunc`、`SetOnRightButtonTriggerFunc`、`SetOnDecideButtonTriggerFunc`、`SetOnCancelButtonTriggerFunc`、`SetOnXButtonTriggerFunc` |
| `main.ui.msg_doctor.effect.MsgDoctorNoiseffect` | **2** | `SetNoiseAnimeCallBack`、`SetKeepAnimeCallBack` |

这 7 个 F 的角色可以确认是实例上的回调字段，**不能**误写成 `prototype[F]` 声明，也不能直接把 setter 名称当成字段的正式名称。其他未解决 F 将保留原始 Hash。

## 4 · 文件清单与状态

| 文件 | 用途 |
| --- | --- |
| `Continue-SV-Lua54.py` | 本轮原生 Lua 分析器；依赖 `Analyze-SV-Lua54.py` 解析完整文件 |
| `Verify-SV-Lua54-Followup.py` | 逐条重算和无修改校验 |
| `followup-summary.json` | 原始文件 SHA、C/F 各级证据统计 |
| `followup-unknown-c.tsv` | **299** 个剩余 C 的静态／全局注册／真实字节码引用状态 |
| `followup-c-static-s-closures.tsv` | **281** 条 `Class[S] = CLOSURE`，源文件与 PC |
| `followup-c-global-registrations.tsv` | **213** 条类全局注册，源文件与 PC |
| `followup-f-callback-name-evidence.tsv` | 精确 F 命中包含已有 9 个和新增 4 个的原生处理函数绑定记录 |
| `followup-f-new-exact-candidates.tsv` | 仅列新增 **4** 个候选及双向证据 |
| `followup-f-self-field-assignments.tsv` | **7** 条战斗队伍／消息特效实例字段写入 |
| `lua_f_hashes.native-merged.txt` | 全部 **8,464** 条 F 映射的完整增强版，不更改上游文件 |

## 5 · 重现（无需任何新拆包）

在 Windows PowerShell，把 `Analyze-SV-Lua54.py`、`Continue-SV-Lua54.py` 放在同一目录，从已有完整文件直接执行：

~~~powershell
py -3 .\Continue-SV-Lua54.py `
  --main 'E:\SV\main.blua' `
  --dynamic 'E:\SV\main_dynamic.blua' `
  --hashlists '.\tools\PokeDocs\SV\Hashlists\Lua' `
  --prior '.\tools\PokeDocs-Supplement\SV\Hashlists\Lua\recovered.tsv' `
  --baseline '.\native_baseline' `
  --output '.\native_followup'

# 再执行相同指令并附加 --verify-only，所有产物必须逐字节相同。
~~~

`--baseline` 使用上一轮 `Analyze-SV-Lua54.py` 产生的 5 个原始 TSV/JSON；ZIP 已包含这批小型索引。若复跑其他版本，须修改原始版本验证并重新评估证据；默认 SHA-256 检查拒绝错版。

相关：[[sv-lua-native-4.0.0|上一轮 4.0.0 Lua 方法索引]] · [[sv-lua-hash-recovery|上一轮 48 条候选]] · [[sv-lua-hash-context|历史 Lua 对照]]。