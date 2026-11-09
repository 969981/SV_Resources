---
aliases: [SV 4.0.0 R2 Dataflow Upvalue Closure, GemSettingManager Setup]
tags: [pokemon-sv, lua54, cfg, dataflow, upvalue, prototype, c-f, obsidian]
status: VERIFIED_STATIC_NOT_RUNTIME_EQUIVALENCE
source_version: "4.0.0"
date: "2026-11-09"
pr: "https://github.com/969981/SV_Resources/pull/86"
actions: "https://github.com/969981/SV_Resources/actions/runs/42554632992"
---

# SLR R2 — GemSettingManager.Setup 跨块调用与共享 Upvalue 实证

> [!important] 证据口径
> 这份记录验证 SV 4.0.0 原始 Lua 5.4 字节码中的方法身份、静态 PC、寄存器传播、Upvalue 捕获以及别名关系。它 **不代表已经获得运行时闭包值、游戏中的实际调用目标或语义等价的完整 Lua 工程**。

## 1. 原始输入与方法

- 主文件：main.blua，SHA-256：c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
- 类 Hash：C850E69B34478276C（GemSettingManager）
- 方法 Hash：F7C68FEDB79AB6396（Setup）
- C→F 八指令定义：root PC 215516，CLOSURE 创建于 root PC 215522。
- 方法体：Proto 17900；文件 code_offset 7590112；264 条指令，9 个基本块，63 处 CALL/TAILCALL。
- 静态控制流：264/264 指令可达。不是实际运行覆盖率。

## 2. R2 跨块 Must-Dataflow

使用原始 PC 指令级 worklist，逐寄存器追踪 LOADK、MOVE、GETTABLE、GETFIELD、GETTABUP、SELF、CLOSURE、CALL。控制流合流只保留所有路径均具有的相同事实；无法可靠建模的写入清除对应状态。_ENV、self 对象和 C→F 静态归属只能生成候选，不能当作实际运行时类型。

| 调用状态 | 63 个调用点中的数量 |
| --- | ---: |
| HASH_FIELD_UNRESOLVED | 3 |
| UNRESOLVED_DYNAMIC_CALL | 60 |
| DIRECT_LOCAL_CLOSURE | 0 |
| OWNER_CANDIDATE | 0 |

已知字段取值证据：
- 方法体 PC11：F7CD5FEDB7A083576；
- PC32：S668179E3DFA5CD49；接收者的静态类候选 C8FB6CAF7F89386B8；
- PC83：FA46877DC47484C79。

三处字段都还不是确定的被调 Proto。源码中其他 60 处调用仍无法在目前抽象状态中可靠解析。

## 3. Setup 的三个原生 Upvalue

| 子 Proto slot | 原始描述符 | 捕获源 |
| --- | --- | --- |
| 0 | instack=0, idx=0, kind=0 | 父 root Proto0 的 Upvalue0；符合 _ENV 惯例，运行时值未知 |
| 1 | instack=1, idx=58, kind=0 | root R58 的 Upvalue 单元 |
| 2 | instack=1, idx=55, kind=0 | root R55 的 Upvalue 单元 |

Upvalue 捕获的是可被其他闭包共享的单元，而不只是固定数值。同一个 Proto 创建的不同运行时 Closure 也可能具有不同的 Upvalue 实例，不能把 Proto 当作具体运行时对象。

## 4. 创建位置和父寄存器的静态写入

- 根函数 CFG：5188 个基本块。
- 创建 Setup 闭包：root PC 215522；所在基本块 [215285,215767)。
- R55/R58 在该块内均未找到可证实的定义来源。
- 跨 CFG 前驱溯源：对两个寄存器分别访问 2377 个状态，预算未截断；都得到一个可能最近写入：root PC **18953 的 LOADNIL**。
- 此结论属于 bounded static possible writer：不证明函数实际执行时 R55/R58 必然为 nil，也不证明宿主或其他 Closure 不能改变对应 cell。

## 5. 共享 Upvalue 单元的静态别名审计

递归追踪 Lua 5.4 的 instack/index/kind，跨嵌套 Proto 识别最终捕获 root R55/R58 的描述符。

| 父寄存器 | 静态 Proto/slot 捕获描述符 | 相应 slot 的 SETUPVAL 指令 | SETTABUP 指令 |
| --- | ---: | ---: | ---: |
| R55 | **681** | **0** | **0** |
| R58 | **458** | **0** | **0** |

这不是 681/458 个已运行 Closure，而是字节码中引用相应共享单元的静态描述符数。当前所有扫描过的这些描述符对应函数中没有发现直接改写其绑定的 SETUPVAL；仍不能据此排除其他执行路径或宿主 API 的副作用。SETTABUP 是对引用表字段的写入，与 SETUPVAL 的 cell 绑定修改不同。

## 6. 真实格式修复：NEWTABLE / EXTRAARG

根函数 CFG 检验暴露了 R1 解析器的一个错误：Lua 5.4 NEWTABLE 后面总是跟 EXTRAARG，和 k 位是否设置无关。已修复静态 CFG 中对应的 PC 边，并补充 k=0 / k=1 合成用例。依据：[Lua 5.4 lopcodes.h notes](https://lua.org/source/5.4/lopcodes.h.html)。

## 7. 测试及构建门槛

[Actions #42554632992](https://github.com/969981/SV_Resources/actions/runs/42554632992) 已通过：
- 13 个 C/F、指令、CFG 合成测试；
- 7 个跨块 dataflow 合成测试；
- 3 个父 Closure 捕获/前驱合成测试；
- 3 个共享 Upvalue 别名与 SETUPVAL 合成测试。
- **26 个合成测试全部通过**，实际 main.blua 的方法绑定、捕获和全量别名扫描通过。
- 固定版 unluac-rs v1.4.4 成功生成目标方法 Lua 源码；luac5.4 -p 为 PASS。
- 行为等价始终为 NOT_TESTED。没有上传原始 BLUA 或恢复的游戏源代码。

生成的 metadata 可在该 Actions 的 SLR-R1-GemSettingManager-CF-trace artifact 查询：slr-gem-setting-dataflow.json、slr-gem-setting-captures.json、slr-gem-setting-upvalue-aliases.json。所有原始指令 PC 与捕获描述符均可复查。

## 8. 后续必须闭合

1. 追踪 R55/R58 的真正运行时单元内容和 root 初始化/宿主层写入，区别静态 LOADNIL 与实例状态。
2. 分析方法体 PC11、PC32、PC83 的对象来源，连接 F/S 字段、类候选、具体方法定义 Proto，但不将 Hash 字符串引用冒充目标。
3. 保留同一模块的 _ENV、父 Closure、Upvalue 单元共享以及初始化顺序；再做隔离的模拟环境 A/B 语义验证。
4. 不以单独 Proto 提升后的 Lua 5.4 语法通过代替完整可重编译、可运行或游戏内行为等价。

关联：[[sv-lua54-r1-cf-trace]]、[[sv-lua54-r0-native-ir-benchmark]]、[[sv-lua54-source-reconstruction-roadmap]]。
