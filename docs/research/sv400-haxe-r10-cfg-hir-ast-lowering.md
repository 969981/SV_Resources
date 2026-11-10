---
aliases: [SV400 R10 Lua54 Haxe CFG HIR AST]
tags: [pokemon-sv, lua54, haxe, reverse-engineering, obsidian]
status: VERIFIED_IN_STANDALONE_LUA
updated: 2026-11-10
---

# R10 — Lua 5.4 原生 CFG/HIR/AST → 可验证 Haxe 非空方法

> [!success] 真实原版 4.0.0 验收
> 固定原版 `main.blua` SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`。新增五个非空函数从 Lua 5.4 原生指令提升至 Haxe，使用固定的 ZAScripts Haxe 4.3.1/HashAbi/LuaOutput/Lua 5.4.3 完成 Haxe 编译，并与原版 Child Proto 独立执行比较 **15/15 PASS**。加上此前六方法，**11 个有方法体、56/56 用例通过**；另一个 Assert.IsNull 仍是 extern only。
>
> [!warning] 精确边界
> 本阶段复用 `sv_lua54.r1.syntactic_edges()` 原生 CFG，新增的是受限的 `store_literal → return` 类型化 HIR 与 ReturnAst/Haxe 发射器；还没有把 unluac-rs 的**通用** Rust HIR/AST 导入 Python。没有恢复原游戏其他未知方法、继承关系或 C++/UpValue 运行时；游戏内 `runtime_status=NOT_OBSERVED`。

## 五个已完成的非空方法

| 完整 Haxe 方法 | 原版 Proto | 原版 Root PC | 原生表达式 |
|---|---:|---:|---|
| `main.field.behaviour.DanPartnerPokemon.GetBehaviourType` | 14216 | 173130 | `return 2;` |
| `main.field.behaviour.DanPokemonBehavior.GetBehaviourType` | 14223 | 173264 | `return 3;` |
| `main.battle.BattleView.GetIntervalAddPopup` | 6349 | 93938 | `return 300;` |
| `main.event.base.BaseScenarioEvent.checkStartCondition` | 689 | 25082 | `return true;` |
| `main.event.base.BaseScenarioEvent.isImportant` | 699 | 25162 | `return false;` |

对应源码位于 `tools/SV.Lua54/haxe/4.0.0/source/main/{field,battle,event}/` 下的四个 `.hx` 类文件。保留 `@:hashAbi(C/F)`、`@:native(C/F)`、`@:chunk("main")`、`@:expose(C)`，并在每个方法中注明 Child Proto、PC 及原生 opcode SHA。详细原始指令及证明状态见 `methods.jsonl`。

## 实际转换与硬性拒绝规则

- 后端 `tools/SV.Lua54/src/sv_lua54/emit_haxe/restricted.py` 用原版 `decode()` 和 `syntactic_edges()` 构造 CFG，只接受三指令：`LOADI/LOADF/LOADTRUE/LOADFALSE/LOADNIL → RETURN1 → 不可达的 RETURN0`。
- 仅允许原始 Root 的 C→prototype→F **实例**方法、唯一 `self` 参数、`upvalue_count=0`、无子 Proto、非 vararg；寄存器 R1、CFG 唯一边、布尔/浮点/nil 类型区分均需精确一致。
- HIR 为 `store_literal(R1) → return(R1)`，AST 为 `ReturnAst(Literal)`。不能提升时抛 `LiftFailure`；不会自动生成未知方法的假实现。
- `scripts/Emit-SV-Haxe-R10-ConstantReturns.py` 重新读取 SHA 固定的原版 BLUA 和 PokeDocs C/F，验证每个原版 Root PC、Child Proto/Index、FNV、返回字面量、opcode，生成 Haxe 后要求与仓库中四个源码文件**逐字相同**。
- 为原版对账建立临时独立 Lua5.4 Chunk，Child 的 code/constant/upvalue 不变并通过再次解析核查；`$RUNNER_TEMP` 内的原始 `.luac` **不提交、不上传**。只上传生成 Lua 文本与匿名证明 JSON。
- [Haxe 编译与原版 Child A/B #42758094283](https://github.com/969981/SV_Resources/actions/runs/42758094283)：新增 15/15、累计 56/56。测试中每个新函数给三组不同的 `self` 输入。**这不是原版游戏内 VM/C++ ABI 验证**。
- [原生 Proto/PC 与单元测试 #42758722625](https://github.com/969981/SV_Resources/actions/runs/42758722625)：12 条原生映射、5 条新 AST 发射、6 个原有溯源测试和 10 个合成 Proto 正负例测试通过。

## 剩余候选分层：已做实际全量资格扫描

[Actions #42758827830](https://github.com/969981/SV_Resources/actions/runs/42758827830) 对 3,892 条原生已命名 C/F 方法应用受限 AST 的直接代码模式检验：

| 命名空间 | 已命名候选 | 当前字面量后端 eligible |
|---|---:|---:|
| `main.field` | 1710 | 52 |
| `main.battle` | 1330 | 7 |
| `main.event` | 852 | 5 |
| **合计** | **3892** | **64** |

其中 5 条已经完成 Haxe→Lua 原版对账，其余 59 条仅是候选；不会据此声称已全部恢复。其余 **3828** 条未满足当前受限后端规则，主要被阻断于：self-only 参数约束（1584）、Upvalue/嵌套 Proto（1358）、不符合三指令结构（711）、非字面量或有副作用指令（175）。这些原因是互斥的当前分类，不等于所有函数都不能通过后续更强 CFG/AST 后端恢复。

## 下一轮应实现的后端

优先将 **无捕获、无引擎调用的短纯函数** 拓展为寄存器赋值/直接返回/只读 GETI 与简单比较分支的类型化 AST。对于 SETI、SETFIELD 或表修改，差异测试必须比较**副作用和表状态**而不只检查返回值。然后才处理多分支、Upvalue、对象构造/元表、闭包及游戏引擎 C++ 回调。

受限后端、生成器、差异测试、验证器和批量候选资格都作为独立模块运行，原版 BLUA 永远只读。

关联：[[sv400-haxe-field-battle-event-promotion]] · [[sv400-haxe-zascripts-native-differential]] · [[sv-lua54-source-reconstruction-roadmap]]。
