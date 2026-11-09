---
aliases: [SV 4.0.0 mainBody Haxe Lua runtime closure R5]
tags: [pokemon-sv, lua54, haxe, pokedocs, closure, upvalue, obsidian]
status: STATIC_NATIVE_CHAIN_VERIFIED_RUNTIME_NOT_OBSERVED
game_version: "4.0.0"
updated: "2026-11-09"
issues: [73, 76, 79, 81, 82]
---

# R5 — mainBody 的 Haxe Lua 元表、辅助闭包与 Upvalue 静态链

> [!important] 结论与证据界限
> 基于原版 main_dynamic.blua，SHA-256 = ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572，已恢复 root R12/R13/R16 的唯一可达静态来源、原生元表设置、辅助闭包和 56 条真实 C→F 方法注册关联。**没有观察任何游戏进程中的 TValue、CallInfo、UpVal*、LClosure* 或实际 C API 调用。**完整 mainBody 运行时等价仍 NOT_VERIFIED。

## 1. 原生主链：Proto752 是 mainBody

| 阶段 | 原生 PC / 位置 | 证据 |
| --- | --- | --- |
| 元表写入处理器 | root PC42 | CLOSURE R12 → Proto17，3 参数、8 指令 |
| 元表新建 | root PC43 | NEWTABLE R13 |
| 元表字段一 | root PC45 | SETFIELD R13, __newindex, R12 |
| 元表字段二 | root PC46–47 | 从 root Upvalue0 取 _hx_tostring，写入 R13.__tostring |
| 元表包装闭包 | root PC50 | CLOSURE R16 → Proto20，捕获 root R13 |
| Haxe 样式类方法注册 | root PC12236 | C→F 八指令注册开始 |
| mainBody 创建 | root PC12242 | CLOSURE R56，child_index708 → Proto752，offset49009 |
| mainBody 安装 | root PC12243 | SETTABLE 至 class.prototype[F] |

类 Hash：CC0F71836C3BD9A89（**PokeDocs UNKNOWN**）。
方法 Hash：FD8D5F3745B4B5174（PokeDocs 已命名 **mainBody**）。
Proto752：原生 2,071 指令，1 个参数，2 Upvalue。Upvalue0 继承 root Upvalue0 的 cell；Upvalue1 捕获 root R16。

## 2. root R16 和 R13 的唯一可达静态定义

保守 PC 到达定义图纳入已知 Lua5.4 寄存器赋值、CALL/VARARG 动态返回、TESTSET 条件写、MMBIN fallback 快速跳过边。root 原始指令共 91,622 条，静态 PC 图 0 个无效边。

- root R16 在捕获点 PC12242 的**唯一可达写入点：PC50 的 CLOSURE**；原 root 入口未定义状态未流入此 PC。
- root R13 在 PC50 创建辅助闭包时的唯一可达定义：PC43 的 NEWTABLE。
- root R12 在 PC45 安装 __newindex 时的唯一可达定义：PC42 的 CLOSURE。
- PC50 到 PC12242 之间未发现直接影响 R16 所在寄存器槽的 CLOSE/TBC。

这些是**静态候选事实**，不是游戏真实实例或经过全部异常/元方法路径语义证明的 SSA。

Proto20 的 6 条原生操作码为 GETTABUP、MOVE、GETUPVAL、TAILCALL、RETURN、RETURN0。对应全局字符串 setmetatable；第一参数是调用者传入的表，第二参数是从 root R13 捕获的元表。可读逻辑形状相当于匿名的 setmetatable(value, captured_metatable) 包装器。

## 3. Haxe Lua 运行时结构匹配

同一 root 初始化段有一整组 helper Closure。下列名字是**Haxe 结构候选，不是游戏字节码中保存的源函数名**：

| root PC | child Proto | 候选名 | 原生字符串及形状 |
| --- | ---: | --- | --- |
| 42 | 17 | _hx_obj_newindex | __fields__、rawset |
| 43 | — | _hx_obj_mt | __newindex、__tostring、_hx_tostring |
| 48 | 18 | _hx_a | __fields__、select、setmetatable |
| 49 | 19 | _hx_e | setmetatable、__fields__ |
| 50 | 20 | _hx_o | setmetatable；captured R13 |
| 51 | 21 | _hx_new | __fields__、__index、__newindex、__tostring、setmetatable |
| 52 | 22 | _hx_field_arr | __fields__、pairs、_hx_tab_array |

外部参照：由 Haxe 4.3.3 编译的 [Lua 生成产物](https://forgejo.isvery.ninja/coderofsalvation/xrfragment-haxe/src/commit/eb3e644b674f6b8d30df544681ab5ccae5bac4a2/dist/xrfragment.lua) 含相同角色与元方法布局。这是结构旁证，不证明游戏采用同一 Haxe 版本，更不意味着所有原始 Haxe 命名都能恢复。

Haxe 现在具有直接游戏字节码结构依据，适合作为未来可读源码的高层表示；但 Lua 5.4 浮点类型、元表、Upvalue、初始化顺序、C API 行为仍是重编译语义验收的第一优先级。

## 4. 共享 R16 的原生类方法分布

- root 有 **69** 处子闭包创建点捕获 R16。
- 其中 **56** 处符合严格八指令原生 C→F 方法赋值，覆盖 **40 个不同的 C Hash**。
- 按赋值次数，mainBody 22；placeStartRecollection 5；placeEndRecollection 5；其他已命名 10；方法名称仍未知 14。总计 56。
- 13 处其余 R16 捕获**不自动标注为类方法**；40 个 C Hash 不等于 40 个已恢复类名。

这是方法注册次数，不代表运行调用次数。所有原始 C/F Hash 必须保留，未知类名不得从 Haxe bootstrap 结构猜测。

## 5. 代码与验证

- [R5 原生 PC 到达定义模块](../../tools/SV.Lua54/src/sv_lua54/r5.py)
- [R5 mainBody 证据工具](../../scripts/Analyze-SV-Lua54-R5-MainBody.py)
- [R5 紧凑静态签名](../../tools/SV.Lua54/fixtures/r5_mainbody_static_signature.json)
- [R5 合成单元测试](../../tests/test_sv_lua54_r5.py)
- [R5 持续验证](../../.github/workflows/slr-r5-mainbody-r16.yml)

所有分析均对原版 SHA 固定；不修改 BLUA、PokeDocs 或上游 unluac-rs。CI 只保存有限元数据，不保存由游戏原始字节码恢复的大量源码。

## 6. 最后一关依然需要实机

**root PC50 / PC12242 是 Lua Proto 的程序计数器，不是 Switch 进程绝对内存地址。**

需要先校准实际游戏 Lua VM 分派、lua_State、CallInfo、savedpc 与当前 Proto 身份，再分别观察：
1. root PC43/45/47：R12/R13 的对象身份、元表字段与实际值。
2. root PC50：创建 Proto20 LClosure，记录 UpVal0 / UpVal1 cell 与所捕获 R13。
3. root PC12242：创建 Proto752 LClosure，记录其 UpVal0 及 UpVal1，证明后者实际链接 R16 的 helper 闭包。
4. mainBody 进入/退出：同一 Closure 实例的参数、返回、异常、C API、rawlen 与表引用副作用。
5. 只有在受控宿主环境下用原始与 R4 重新编译版本执行 A/B，并有对应证据，才可提高运行时验证等级。

目前：R4 静态语法通过 100/100、选定上游实际执行 10/10；**原始游戏 mainBody 完整运行时 A/B = NOT_VERIFIED**。

关联：[[sv-lua54-r4-upstream-rust-patch-runtime-ab]] · [[sv-lua54-source-reconstruction-roadmap]]。
