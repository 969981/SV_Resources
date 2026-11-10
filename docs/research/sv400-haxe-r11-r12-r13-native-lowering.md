---
aliases: [SV 4.0.0 Haxe R11 批量字面量恢复, R12 GETI SETI 副作用对账, R13 GETFIELD SETFIELD]
tags: [pokemon-sv, lua54, haxe, pokedocs, cfg, hir, ast, side-effects, obsidian]
status: STANDALONE_LUA_VERIFIED_GAME_RUNTIME_NOT_OBSERVED
updated: "2026-11-10"
---

# SV 4.0.0 Haxe R11–R13：从批量常量恢复到表写入副作用对账

> [!success] R11 + R12 已完成
> **R11：剩余 59/59 条受限字面量方法全部提交**，实际原版 Lua 5.4 Child Proto vs ZAScripts Haxe 4.3.1/Lua 5.4.3 差异 **177/177**；旧 11 个函数 **56/56** 回归，合计 **233/233**。成功 [Actions #42761612949](https://github.com/969981/SV_Resources/actions/runs/42761612949)。
>
> **R12：三个不再只是常量返回的方法完成实验和正式提交**，`GETI` 6/6、`SETI` 含副作用 6/6、`LT/JMP/MOVE` 7/7，新增 19/19，连同旧版 **252/252**。成功 [Actions #42762760077](https://github.com/969981/SV_Resources/actions/runs/42762760077)。
>
> [!warning] 验证范围
> 所谓 PASS 是**固定 SHA 原始 Child 指令在独立 Lua 5.4.3 VM 中与 Haxe 新编译方法的有限输入 A/B**。并非原生 Switch 游戏内 C++/Lua VM/Upval 对象或整体脚本语义已验证；原版源文件没有覆盖。

## 1. 原版 4.0.0 输入与工具版本

| 内容 | 固定来源 |
|---|---|
| `main.blua` | SHA256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`；37,743 Proto |
| 类与方法名 | PokeDocs `lua_c_hashes.txt`、`lua_f_hashes.txt`，全 64 位 FNV-1a 重核 |
| Haxe 编译 | Reisyukaku/ZAScripts commit `c7bc243ac4d28356dff9f06b6723330ea92247d5`，Haxe 4.3.1 + `HashAbi` + `cppbindings` + `LuaOutput` 后处理 |
| 执行比较 | 与固定上游同源的 Lua 5.4.3；原始 Child `code/constants/upvalues` 完全保留并暂存 `$RUNNER_TEMP` |
| 完整溯源 | `tools/SV.Lua54/haxe/4.0.0/methods.jsonl`，每方法有 root PC、Child Proto、子 PC、原始 opcode words、源码 SHA、各层状态与成功 Actions ID |

## 2. R11：59 条批量原始字面量方法

R10 已发现：3,892 条具有 `C→prototype→F` 根注册与 PokeDocs 命名的原版候选，受限 `LOADI/LOADF/LOADTRUE/LOADFALSE/LOADNIL + RETURN1` 后端只允许 64 条。其中 R10 已恢复 5 条，**R11 完成剩余 59 条**。

处理脚本：`scripts/Emit-SV-Haxe-R11-Batch.py`，不是按源码名字或猜测返回值批量生成：

1. 对 3,892 个 C/F 原版候选重新解析与无损编码；在 64 个符合静态 CFG/HIR/AST 的候选中只选择未归档的 59 个。
2. 必须核对原始 Root PC、`CLOSURE` 索引、Child Proto、code offset、原始 opcode 字、PokeDocs FNV、Upvalue=0 与恰当寄存器，不合法则整个批次终止。
3. 以原版 C 哈希**按类合并**方法，保留既有 `.hx` 的原有方法；新的类放入 `main.field`、`main.battle`、`main.event` 原始包路径。
4. 临时构建所有方法 + 本轮生成的原版 Child Chunk。对新 59 个函数分别用空对象、数值、字符串 `self` 独立对账：**177/177 PASS**。
5. 重新验收原先 11 个方法：**56/56 PASS**。只有全 233/233 通过，再安装源码到 Git 工作区、重新做 71 条 Proto/PC 溯源和 Python 测试，最后 CI 直接提交至 `master`。

正式发布：<https://github.com/969981/SV_Resources/commit/7038b7e5d>。未恢复 AST 的 3,828 条不会生成空壳 Haxe。所有 R11 溯源记录带 `promotion_batch=R11_59`。

## 3. R12：GETI、SETI、LT/JMP/MOVE 的真实源码

R12 受限 AST 在 `tools/SV.Lua54/src/sv_lua54/emit_haxe/side_effects.py` 中实现，明确拒绝任意寄存器形状、Upvalue、Vararg、嵌套 Proto、未知 opcode、未验证跳转。

| 原版方法 | Proto | 原始操作和新 Haxe | 追加测试 |
|---|---:|---|---:|
| `main.battle.BattleView.GetGemEnableCount` | 6367 | `GETI R1,R0,86`，`return untyped this[86];` | 6/6 |
| `main.battle.BattleView.SetGemEnableCount` | 6366 | `SETI R0,86,R1`，`untyped this[86] = value;` | 6/6 |
| `main.event.general.ajito.DanRushAfterEvent.clamp` | 2183 | `LT/JMP/MOVE` 各两段，分别对比 `value < min` 与 `max < value` | 7/7 |

### 写表验收不止比较返回值

`tools/SV.Lua54/haxe/4.0.0/compare-r12-state.lua` 以原生表读写为真值对照：

- `GETI`：读取数字、布尔、浮点、字符串、缺失值，并检查缺失键上的 `__index` 元方法调用顺序/结果。
- `SETI`：比较调用成功状态、返回值（通常 nil）、写后目标 `self[86]`、所有其他字段、嵌套值，以及缺失键时 `__newindex` 引发的事件；特别测试赋值 nil、已有字段与首次写入。
- `clamp`：原始 `LT/JMP/MOVE` 与新 Haxe 的实际分支行为、极值和 NaN，用 Lua `math.type` 区分整数/浮点并核对有符号零。
- CI 仍要通过旧 59 条 **177/177** 以及原先 11 条 **56/56** 回归，故 R12 完成时为 **252/252**。
- 发布步骤在并发资源扫描导致 master 前进时，先检查 Haxe 输入、PokeDocs、原始 BLUA 是否改变。仅允许合并无关数据提交，避免覆盖其他工作流产生的资源。

具体过程：[R12 通过 Actions #42762760077](https://github.com/969981/SV_Resources/actions/runs/42762760077)。本轮以后，`methods.jsonl` 合计 **74 条原版方法映射、73 个有 Haxe 函数体、1 条 extern-only**；实机状态 `NOT_OBSERVED`。

## 4. R13：原版命名字段 GETFIELD/SETFIELD 的下一关

[原生只读字段取证 Actions #42763034047](https://github.com/969981/SV_Resources/actions/runs/42763034047) 已从原始 Proto 的**真实常量表**读取字段名和 SETFIELD 右值。下列内容是静态机器码证据：

| 原版函数 | Child Proto | 原始字段操作/原生常量 |
|---|---:|---|
| `main.event.base.IEventScript.get_CallFromReserve` | 669 | `GETI self[22] → GETFIELD "callFromReserve"` |
| `main.event.debug.DebugAreaJump.onCreate` | 11176 | `GETI self[22] → SETFIELD "skipPlayerStuckCheck" = true` |
| `main.battle.BattleResidentEffectManager.GetResidentEffectNum` | 5683 | `GETI self[1] → GETFIELD "length"` |

这些字段名并非依靠 PokeDocs 反推，而是原版 Child Proto 中 `GETFIELD/SETFIELD` 引用的真实字符串 `K` 常量。 `side_effects.py` 已添加**仅允许已确认的 UTF8 常量字段读取和 SETFIELD=true** 的严格发射分支，以及不依赖 ROM 的正负例测试。

**R13 尚未给上述三个函数授予 Haxe→Lua 原生差异通过或游戏运行时通过状态**。必须继续给 `GETFIELD` 增加嵌套对象字段、nil、`__index` 读取事件对账；给 `SETFIELD` 增加嵌套对象写后完整表快照、`__newindex` 次序、目标键与未修改字段检查，再让 CI 通过，才能将其源码晋升正式 Haxe 方法。不能把“常量名已知”算成已恢复源码。

## 5. 下一阶段重点

1. 把 R13 三个方法纳入临时 Haxe 工程，对原始 `GETFIELD/SETFIELD` 子 Proto 执行包含 Metatable/SideData 的写表副作用 A/B。
2. 扩展 CFG/HIR/AST 对 `MOVE` 的通用 SSA、`GETI/GETFIELD` 动态表键、条件分支合流点的覆盖，维持原始 PC 和 AST source-map。
3. 原生游戏环境下独立确认 C++/Lua VM UpVal*/TValue 对象和副作用，只有实机/模拟器证据才能将方法 `runtime_status` 改为 `RUNTIME_VERIFIED`。

关联：[[sv400-haxe-r10-cfg-hir-ast-lowering]] · [[sv400-haxe-field-battle-event-promotion]] · [[sv400-haxe-zascripts-native-differential]]。
