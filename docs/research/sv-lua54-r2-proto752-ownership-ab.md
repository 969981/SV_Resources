---
aliases: [SV Lua54 Proto752 表对象所有权与原生 A/B, SLR R2]
tags: [pokemon-sv, lua54, setlist, upvalue, ast, source-map, differential, obsidian]
status: VERIFIED_BOUNDED_REGION_NOT_FULL_PROTO
game_version: "4.0.0"
updated: "2026-11-09"
issues: [76, 77, 78, 81]
---

# SLR R2 — Proto 752 的表对象所有权与可重编译 Lua 片段

> [!important] 验收边界
> 本轮验证的是 main_dynamic.blua 中 Proto 752 的 **PC 649–665，共 17 个原生 Lua 5.4 指令字**。构建了仅供测试的原版字节码包装器和一个**有明确白名单的 Lua 发射器**，对 163 组输入执行原生指令与新 Lua 之间的 A/B。
>
> 这不是整个 2,071 指令的 Proto 752 已经反编译成功，也不是 unluac-rs 的通用 HIR→AST Bug 已修复，更不是游戏内 API、初始化和 Upvalue 等价性验证。

## 1. 原始输入与唯一指令特征匹配

原版 SHA-256：ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572。

| 来源 | PC | 含义 |
| --- | ---: | --- |
| 原生 NEWTABLE | 649 | 新表分配给 R14；文件字节偏移 1,079,412 |
| EXTRAARG | 650 | 原始建表容量参数 |
| MULK/ADD/ADDK + MMBIN* | 651–664 | R15–R17 计算，7 条元方法 fallback |
| SETLIST | 665 | 向 R14 的数组索引 1–3 写入三个计算结果，文件偏移 1,079,476 |
| MOVE | 666 | R14 的表在写入之后移至 R1 |

R2 所有权诊断未发现 PC 649 至 665 之间 R14 的覆盖、提前别名、函数参数逃逸、闭包捕获或外部跳入。区域内有七个元方法后备 PC：652、654、656、658、660、662、664，因此必须保留 Lua 运算的行为与顺序。

Proto 752 的五个 SETLIST PC 为 5 / 370 / 665 / 898 / 1592。与剩余 unluac-rs HIR 残留对应的 B=3/start=1 候选只有 5 与 665；仅 **665** 具有前置的乘加、MMBIN 序列。因此能得到**唯一算术特征映射**，但仍缺反编译器内部的权威 source-site ID。

[原生所有权 JSON](../../tools/SV.Lua54/fixtures/r2_proto752_ownership.json)。

## 2. 浮点常量类型恢复

真实 Lua 5.4 K117、K118 均为 tag 19（64-bit float）：

| 常量 | 原始类型 | 原始数值 |
| --- | --- | ---: |
| K117 | FLOAT | 3.0 |
| K118 | FLOAT | 20.0 |

不能因 HIR 文本显示 3、20 就直接输出整数 Lua 常量：整数与浮点运算结果可能不同，需保留 Lua 5.4 的类型和元方法路径。

## 3. 受控 Lua 发射器

[Emit-SV-Lua54-R2-SafeRegion.py](../../scripts/Emit-SV-Lua54-R2-SafeRegion.py) 固定以原版的 NEWTABLE、MULK、ADD、ADDK、MMBIN/ MMBINK、SETLIST 序列构建并发射 Lua。逐 PC 记录结构化节点、字节偏移与输出文件 SHA；输入 SHA、寄存器、常量类型、指令顺序和所有权检查不符时明确拒绝。

结构示意（原生指令恢复出的数学行为，不是原版开发者源码）：

~~~lua
local t = {}
local v1 = a + d * 3.0
local v2 = b + e * 3.0 + 20.0
local v3 = c + f * 3.0
t[1], t[2], t[3] = v1, v2, v3
return t
~~~

真实工具生成的源码使用 r8–r17 寄存器映射与逐步赋值，严格保留分配、三组运算、一次性数组写的时序。生成的源码只存在 CI 临时目录，不把提取的游戏字节码或恢复的游戏源码上传 Git。

[受控 Lua 生成报告](../../tools/SV.Lua54/fixtures/r2_ast_report.json) 包含 17 个节点的原 PC→Lua 发射类型及输出 SHA。它不是通用 AST/SSA 系统，也没有修复 unluac-rs HIR initializer-scope=None。

## 4. 真正原始指令执行 A/B

- [临时字节码包装器](../../scripts/Build-SV-Lua54-R2-NativeSlice.py)：复制原生 PC 649–665 的 17 个 32-bit 指令字，六个输入值映射到原 R8–R13，并加测试用 RETURN1。原版 BLUA 不修改，临时片段不提交。
- [原生区域 A/B 夹具](../../tests/fixtures/sv_lua54/r2_native_region_compare.lua)：运行原始指令，与人工独立候选、自动生成 Lua、自动生成并由 luac5.4 重新编译的字节码对照。
- [安全反例](../../tests/fixtures/sv_lua54/r2_table_semantics.lua)：检测 __newindex 元方法下直接把 raw array write 改成 indexed assignment 的不等价情形。
- [所有权测试](../../tests/test_sv_lua54_r2.py)：覆盖提前别名、寄存器覆盖、CALL 逃逸、CLOSURE 捕获与隐藏 MMBIN 边。

| 验收项 | 结果 |
| --- | --- |
| Lua 发射器源码 luac5.4 -p | PASS |
| Lua 发射器源码重新编译成 .luac | PASS |
| 原始字节码片段 vs 手工验证候选 | 163/163 PASS |
| 原始字节码片段 vs **工具自动生成 Lua 源** | 163/163 PASS |
| 原始字节码片段 vs **工具自动生成并重新编译的 .luac** | 163/163 PASS |
| Lua math.type / 结果 / 元方法顺序 / 预期失败 | 已测试场景 PASS |
| 整个 Proto752、游戏运行时、全量 Lua 源码 | **NOT_VERIFIED** |

163 个输入包括 101 个整数样本、60 个浮点样本、一个元方法正常样本与一个预期错误样本。自动生成的文本和重新编译字节码分别跑了这一批用例，**不等于 326 种独立输入**。

成功 CI：[R2 原始区域与发射器 A/B](https://github.com/969981/SV_Resources/actions/runs/42558291234)。

## 5. 下一道关口

1. 上游 HIR source-site 的真实原始 PC 绑定：需要进一步证明 l15 initializer-scope=None 与原 PC 665 的内部身份一致。
2. 可证明的表所有权和别名分析需扩展到分支、Phi、元方法效应、异常、跨闭包与表逃逸。
3. 对整个 Proto752 解决 unluac-rs 的 residual table-set-list 再测试 Lua 严格语法与多场景执行等价；这次只是受控 17 指令区域。
4. 游戏特有 C API、真实 Upvalue 值、模块初始化顺序与跨模块对象交互仍未验证。
5. Haxe 继续在完整 Lua 链路稳定之后推进。

关联：[[sv-lua54-r1-setlist-upvalue-cf]] · [[sv-lua54-source-reconstruction-roadmap]]。
