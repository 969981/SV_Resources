---
aliases: [SV 4.0.0 R6 元表 __newindex 与捕获别名审计]
tags: [pokemon-sv, lua54, haxe, metatable, upvalue, alias-analysis, obsidian]
status: PINNED_NATIVE_STATIC_VERIFIED_RUNTIME_NOT_OBSERVED
game_version: "4.0.0"
updated: "2026-11-09"
issues: [73, 76, 79, 81, 82]
---

# R6 — Haxe 风格元表、__newindex 常量字段标记与 R13 捕获别名

> [!important] 证据等级
> 本页结论来自 **SV 4.0.0 原版 `main_dynamic.blua`**，SHA-256 `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572`。
> 严格 `__newindex` 三参数指令形状及常量 `true` 已在 GitHub Actions R6 原始字节码检查通过。
> **未读取游戏运行时 Lua Table、LClosure、UpVal*、CallInfo 或 Lua C API 调用。**
> 不把 Haxe 候选函数名视为原始游戏保存的源名称；完整 `mainBody` 运行等价仍 `NOT_VERIFIED`。

## 1. R5 → R6：原生链增量

```text
root PC42 : CLOSURE R12, Proto17  (3 参数 __newindex handler)
root PC43 : NEWTABLE R13
root PC44 : EXTRAARG              (PC43 所需数据，不是独立寄存器赋值)
root PC45 : SETFIELD R13,"__newindex",R12
root PC46 : GETTABUP R14,Upvalue0,"_hx_tostring"
root PC47 : SETFIELD R13,"__tostring",R14
root PC48 : CLOSURE R14, Proto18, UpVal1=(instack=1,reg=13,kind=0)
root PC49 : CLOSURE R15, Proto19, UpVal1=(instack=1,reg=13,kind=0)
root PC50 : CLOSURE R16, Proto20, UpVal1=(instack=1,reg=13,kind=0)
    ...
root PC12242 : CLOSURE R56, Proto752, UpVal1=(instack=1,reg=16,kind=0)
```

- PC43–50 的直接 `SETFIELD R13` 仅 PC45、47 两处，字段分别是 `__newindex` 与 `__tostring`。
- 解析覆盖 root R13 在 PC43–12242 的原生 `CLOSURE` 捕获：**3 个静态捕获位置 PC48/49/50**。
- PC51–12241 在线性 opcode 序列中对 R13 寄存器槽的直接写入数是 **0**。
- **不能据此证明没有通过元表引用别名进行堆上写入**，也不能把三个语法捕获直接当作三个已观测运行时对象。

## 2. Proto17：已严格闭合的 __newindex 操作数

`Proto17` 3 参数、8 指令；其原生操作数核对为：

| PC | 原生操作 | 静态含义 |
| ---: | --- | --- |
| 0 | `GETFIELD R3,R0,K0` | `K0="__fields__"`，取得字段登记表 |
| 1 | `SETTABLE R3,R1,K1 (k=1)` | `R3[R1]=K1`，**K1 是 Lua Boolean true（tag 17）** |
| 2 | `GETTABUP R3,Upvalue0,K2` | `K2="rawset"` |
| 3 | `MOVE R4,R0` | rawset 参数 1 |
| 4 | `MOVE R5,R1` | rawset 参数 2 |
| 5 | `MOVE R6,R2` | rawset 参数 3 |
| 6 | `CALL R3,B=4,C=1` | 调用三参数 rawset，0 个返回值 |
| 7 | `RETURN0` | 返回 |

与这 8 条指令**相符的可读伪代码**：

```lua
function(object, key, value)
    object.__fields__[key] = true
    rawset(object, key, value)
end
```

这是 **Lua 指令行为形状**，不是宣称还原出官方 Haxe 源代码。

### 为什么 `k=1` 特别重要

Lua 5.4 `SETTABLE` 的 `k=1` 表示 **C 操作数索引常量 K[C]**，并不是从 `R2` 取得待写入字段值。

第一次 R6 尝试错误地按 `R3[R1]=R2` 验证，所以合成测试虽过、原版指令严格校验失败；检查失败日志后，已改成 `R3[R1]=true` 并重新执行原版 CI，严格验收通过。

函数对字段有两个不同的写入副作用：

1. `object.__fields__` 字段登记表中写入 `key=true`，维护 Haxe 的字段存在性信息。
2. `rawset(object,key,value)` 对对象直接原始写入，避免重新触发 `__newindex`。

此顺序不可无故交换。若 `__fields__` 缺失、不可写或 `rawset` 被环境修改，实际行为还依赖运行时上下文；本次未验证真实调用。

## 3. 三个共享 R13 的辅助闭包

| root PC | child Proto | R13 描述符 | R5 结构性候选 |
| ---: | ---: | --- | --- |
| 48 | 18 | `[1,13,0]` | `_hx_a` |
| 49 | 19 | `[1,13,0]` | `_hx_e` |
| 50 | 20 | `[1,13,0]` | `_hx_o` |

三者均含 root R13 的 `instack=1` 捕获描述符。Lua 5.4 通常会针对同一活动栈槽共享打开的 UpVal 单元，但该事实**尚未通过当前游戏 VM 的实际 UpVal* 指针验证**。

Proto20 的已知指令形状：`setmetatable(value, GETUPVAL(1))` 并进行尾调用。

注意两个不同的父子捕获：

- `Proto18/19/20.UpVal[1]` → root **R13 元表变量单元**。
- `Proto752.UpVal[1]` → root **R16 包装器变量单元**；R16 中存的是 Proto20 函数候选。

这些是不同的捕获层，不应直接把 Proto752 的第二个 Upvalue 当作元表 Table 指针。

## 4. 元表对象修改：排除范围与不能排除的范围

**静态已检查：**

- root PC43 创建 Table；到 PC50 之间的初始化字段直接赋值有且仅有上述两处；
- PC50 到 PC12242 的 root R13 **寄存器槽**没有再出现直接写入 opcode；
- 原生根函数中 R13 的三处闭包捕获已列出。

**仍未证明：**

- `__fields__` 表的实际对象身份与内容；
- Proto18/19/20 是否会通过共享捕获或其他引用修改元表；
- 运行期 `setmetatable`、`rawset`、`_hx_tostring` 在宿主环境中的实际函数身份；
- 异常路径、C API、元方法触发序列、外部模块对表的别名写入；
- 主函数 `mainBody` 使用的真实 `UpVal*`、参数以及完整行为等价。

`SETFIELD R13` 数量不等于对 R13 所指向堆对象的所有写入次数。

## 5. 复验入口

- [R6 指令审计](../../tools/SV.Lua54/src/sv_lua54/r6.py)
- [原版 SHA 固定的 R6 CLI](../../scripts/Analyze-SV-Lua54-R6-Metatable.py)
- [R6 合成测试](../../tests/test_sv_lua54_r6.py)
- [R6 CI 工作流](../../.github/workflows/slr-r6-metatable.yml)
- [R5 前序文档](sv-lua54-r5-mainbody-haxe-runtime-captures.md)

R6 Actions 已验证：
- 原版数据 SHA 固定、Proto17 严格三参数形状、`true` 常量以及 R13 / R16 捕获链；
- 测试拒绝错误 `MOVE` 参数、错误 `rawset` 常量和错误字段标记；
- 报告限制为元数据，不导出整个游戏源代码。

## 6. 下一道运行时关口

优先在有授权的本地 Switch 游戏进程中校准 VM：

1. 用指令指纹匹配 Proto0/Proto17/Proto18–20/Proto752，确认 savedpc 偏移和当前 CallInfo。
2. 同一 root 帧的 PC48、49、50，记录 `UpVal[1]` 指针地址、open/closed 状态、实际 `TValue` 类型和 Table 身份；不能只看寄存器数值。
3. 在 PC50 后重读 `R13` 所引用 Table 的 `__newindex`、`__tostring`，并监测是否通过别名修改。
4. 在 PC12242 记录 Proto752 捕获的 R16 Cell，按同一调用实例追到 `mainBody` 进入、C API、表写入、返回及异常。
5. 在受控相同环境中，对原版与重新编译 Lua 比较参数、返回、字段表 `__fields__`、原始对象属性与副作用顺序。

以上运行时项目状态均为 `NOT_OBSERVED` / `NOT_VERIFIED`，本次没有写入游戏进程。

关联：[[sv-lua54-r5-mainbody-haxe-runtime-captures]] · [[sv-lua54-source-reconstruction-roadmap]]。
