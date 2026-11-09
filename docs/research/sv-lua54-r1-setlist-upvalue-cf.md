---
aliases: [SV Lua54 R1 SETLIST 与 Upvalue 原生证据, SLR R1 24085 方法边]
tags: [pokemon-sv, lua54, setlist, upvalue, pokedocs, ast, obsidian]
status: VERIFIED_R1_PARTIAL_DECOMPILATION
game_version: "4.0.0"
updated: "2026-11-09"
issues: [76, 77, 79]
---

# SLR R1：SETLIST、Upvalue 与原生 C→F 方法绑定

> [!important] 当前真实验证状态
> 原始六个 SV 4.0.0 BLUA 只读；本阶段是 opcode/PC/符号证据恢复，不是游戏运行实测，也没有证明完整源码可重新编译。原版 PokeDocs Hashlists 没有改写。

## 1. 已提交的 R1 代码与报告

- [R1 opcode / SETLIST / capture / C→F 模块](../../tools/SV.Lua54/src/sv_lua54/r1.py)
- [原生六模块索引生成器](../../scripts/Analyze-SV-Lua54-R1.py)
- [残留 HIR 定向分析器](../../scripts/Inspect-SV-Lua54-ResidualHIR.py)
- [合成单元测试](../../tests/test_sv_lua54_r1.py)
- [完整紧凑 R1 报告](../../tools/SV.Lua54/fixtures/r1_native_report.json)
- [unluac-rs v1.4.5 基准报告](../../tools/SV.Lua54/fixtures/r1_backend_145.json)
- [Proto 752 HIR 失败诊断](../../tools/SV.Lua54/fixtures/r1_residual_hir_752.json)
- [R1 GitHub Actions](../../.github/workflows/slr-r1-native-evidence.yml)（完整方法和 capture JSONL 只作短期 Artifact）

## 2. 原生八指令类方法赋值

原生 C.prototype[F]=CLOSURE 八指令严格模式复验：

| 模块 | C→F 原生注册 |
| --- | ---: |
| main | 18,991 |
| main_dynamic | 4,736 |
| dll_danbattle | 126 |
| dll_stadium | 232 |
| dll_picnic / dll_util | 0 |
| **全部六模块** | **24,085** |

**原先 23,727 仅含 main/main_dynamic。** 两个 DLL 本次新增 358 条确认方法边。

每条边包括来源模块、真实 C/F 字符串 Hash、根函数 PC、赋值指令 PC、原始字节偏移、child_proto_id 与真实子函数指令数量；名称从 PokeDocs 及来源明确的候选获得，不修改真实 Hash 键。

按照**赋值条数**统计：PokeDocs 已知类名 13,383、supplemental 完整 FNV 精确候选 51、类名仍未知 10,651。已识别 509 个 namespace 候选，包括 main.battle.ui、main.field.behaviour、main.system.game_event 等，**不是 509 个经源代码确认的包**。

## 3. Upvalue 父子与传递词法来源

六模块共 **54,803 个 Upvalue 描述符**，词法索引/父槽位验证无错误。按照原始 instack/index/kind 建图，区分：

1. PARENT_REGISTER_AT_CLOSURE：闭包建立时使用父原型寄存器。
2. PARENT_UPVALUE_CELL：继承父原型 Upvalue cell。
3. ROOT_UPVALUE_HOST_DEPENDENT：根 Upvalue 由运行时或宿主决定。

对 PARENT_UPVALUE_CELL 递归追踪，最终落到：
- 祖先寄存器捕获槽位：24,782；
- 根入口宿主 Upvalue：30,021。

这是**静态词法来源**，并非 54,803 个不同运行时对象或真实变量名。多个闭包实例可能捕获不同的值。

## 4. 三个失败 Proto 的 SETLIST PC

| 模块 | Proto ID | 指令数 | SETLIST 次数 | 保守 PC 后继缺陷 |
| --- | ---: | ---: | ---: | ---: |
| main | 2406 | 708 | 18 | 0 |
| main | 3769 | 1390 | 5 | 0 |
| main_dynamic | 752 | 2071 | 5 | 0 |

SETLIST 真实语义：数组首索引为 C+1+(extraarg×256)，已知 B>0 时写入 B 个连续数组元素；B=0 使用**运行时 top**，不能伪造静态计数；k=1 需要后续 EXTRAARG。每个记录保存原 PC、原字节偏移、寄存器、原生上下文和精确状态。

保守 CFG 的 100 个样本没有非法 PC 后继，**不等于已完成 SSA、phi、特殊算术/MMBIN 或 table alias 分析**。

## 5. 更新严格反编译器：97/100 → 99/100

相同的固定 100 Proto cohort 与 Lua 5.4 语法检查：

| 后端 | Lua 5.4 strict 产物语法通过 | 未通过 |
| --- | ---: | ---: |
| unluac-rs v1.4.4 | 97 | 3 |
| unluac-rs v1.4.5 | **99** | **1** |

v1.4.5 Linux binary SHA-256：53ff3f4659c0a529b01bd6fc14ca56d50943c7cbb7c68840a269e320f6f2e337。

新版已解决 main:2406、main:3769 的严格反编译报错。唯一保留 main_dynamic:752。**语法通过不表示与原版运行等价。**

## 6. main_dynamic Proto 752 的唯一残留 HIR

从 unluac-rs v1.4.5 的 HIR dump 精确截取：

~~~text
local ["l16"] = (l9 + (l12 * 3))
local ["l17"] = ((l10 + (l13 * 3)) + 20)
local ["l18"] = (l11 + (l14 * 3))
table-set-list l15 start=1 values=l16, l17, l18 initializer-scope=None
local ["l19"] = l15
assign l15 = global("CDCBFD50A277E546D")
assign l15 = l15["SC9FEDFD2BE9E787A"]
~~~

关键是 initializer-scope=None：反编译器没有足够证据将该批量表写入与唯一、安全的构造器绑定，HIR 到 AST 时拒绝转换。

R1 原生指令可证明 Proto 752 含 5 条 SETLIST，部分与算术中间值、SETI/SETFIELD 混用；但**此 HIR 文本尚未直接证明唯一对应哪一条原始 SETLIST PC**，需要下一轮 source-site 追踪。

不能盲目把 SETLIST 重写成顺序 Lua t[i] 赋值：原 VM 用表数组直接写入，别名、元方法及写入顺序可能改变语义。必须先证明目标表的 producer、作用域、别名/逃逸和对外可见时序。

permissive 模式仅能保留诊断伪代码，不计作 Lua 语法通过。

## 7. 下一步

- [#76](https://github.com/969981/SV_Resources/issues/76)：CFG、寄存器 SSA/phi、捕获生命周期、MMBIN 与表别名图，先完成 Proto 752。
- [#77](https://github.com/969981/SV_Resources/issues/77)：第二独立后端对照，解决最后一条残留 table-set-list HIR；新生成 Lua 需要独立差异测试。
- [#79](https://github.com/969981/SV_Resources/issues/79)：将 24,085 C→F 证据与 C→S、回调接收对象联通，扩展最新 native Hash overlay 的来源等级。
- [#80](https://github.com/969981/SV_Resources/issues/80)：用实际 namespace、Proto 和捕获清单生成可浏览的模块索引；恢复完整 AST 后再输出真正可重新编译 Lua。
- [#81](https://github.com/969981/SV_Resources/issues/81)：Lua 编译与游戏行为验证仍未完成，Haxe 延后。

关联：[[sv-lua54-r0-native-ir-benchmark]] · [[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua-native-4.0.0]]。
