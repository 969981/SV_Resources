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

## 4. R13：真实 GETFIELD/SETFIELD 返回、`__index`、`__newindex` 与完整表状态验收

> [!success] R13：三个具名字段方法完成实际源码恢复
> [原版 4.0.0 字节码 vs 固定 ZAScripts Haxe R13 Actions #42765308159](https://github.com/969981/SV_Resources/actions/runs/42765308159) **Success**。新 3 方法 **28/28**；前置 R12 19/19、R11 177/177、最早 11 方法 56/56 同次回归无退化，累计 **280/280**。GitHub Actions 通过源代码门禁后，已自动提交到 `master`。全部仍为 `runtime_status=NOT_OBSERVED`。

[原版字段静态取证 #42763034047](https://github.com/969981/SV_Resources/actions/runs/42763034047) 从实际 `main.blua` 的 4.0.0 Lua 常量表提取精确字段名，已纳入 `tools/SV.Lua54/src/sv_lua54/emit_haxe/side_effects.py` 受限 AST 生成后端：

| 原版 Haxe 方法 | 原始 Child Proto | Root 注册 PC | 原版 K 常量/目标 | R13 执行对账 |
|---|---:|---:|---|---:|
| `main.event.base.IEventScript.get_CallFromReserve` | 669 | 24815 | `GETI R1,R0,22 → GETFIELD "callFromReserve"` | 9/9 |
| `main.event.debug.DebugAreaJump.onCreate` | 11176 | 141665 | `GETI R1,R0,22 → SETFIELD "skipPlayerStuckCheck"=true` | 10/10 |
| `main.battle.BattleResidentEffectManager.GetResidentEffectNum` | 5683 | 87331 | `GETI R1,R0,1 → GETFIELD "length"` | 9/9 |

真实生成的 Haxe 分别为 `return untyped this[22]["callFromReserve"];`、`untyped this[22]["skipPlayerStuckCheck"] = true;`、`return untyped this[1]["length"];`。这些是**原版字段表和寄存器支持的已恢复语句**，不意味着恢复了整个类、构造函数、引擎对象或所有调用点。

### A/B 具体比较口径

`tools/SV.Lua54/haxe/4.0.0/compare-r13-named-fields.lua` 分别以独立创建但初态相同的 Lua 表，向原始 Child 和定制 Haxe 编译结果传入 `self`：

- **GETFIELD 两种读取：9+9 组。** 比较返回值类型和值，正负零/整数与浮点区别、外层 `self[index]` 缺失引发的 `__index`、内层字段缺失引发的 `__index`、元方法调用顺序与键名、缺失字段返回 `nil`、异常路径，以及调用前后外层/嵌套表和捕获的辅助对象状态。
- **SETFIELD 写入：10 组。** 比较调用成功或异常、返回值、原始 `self[22]`、完整嵌套表及未修改字段（使用 raw `next/rawget` 遍历，不触发隐式元方法）、直接覆写字段、首次新增字段、`__newindex` 回调触发、拦截但不真实写入的 `__newindex`、回调抛异常前已经发生的事件、外层 `__index` 返回的别名对象副作用，以及 nil/布尔目标不可写时双方相同的异常状态。
- Lua5.4.3 的两份方法在可观察事件上必须一致。不同独立 Chunk 的 traceback 行号不作等号比较，因此异常验收要求双方成功/失败类别相同、错误值类型相同、发生异常前表/辅助对象/事件完全一致；**不声称两份异常文本字节级完全一致**。
- 对于表返回值，递归比较 raw 键值和共享引用对应关系，避免使用可能触发元方法的 `pairs` 或 `__eq`。测试不会把“返回 nil 一样”误判为写表语义等价。

Haxe 生成及验收流程：

1. `scripts/Emit-SV-Haxe-R13-NamedFields.py` 重读固定 SHA 的 `main.blua`；重新按 PokeDocs 全 64 位哈希匹配 C/F 与 Root PC；核对 Child Proto、原始字节码与 K 字符串/SETFIELD 右值为原生 Lua `true`。
2. 原版 Child `code/constants/upvalues` 原样复制到 Actions 临时目录，独立 Chunk 重新解析编码往返核查；**不提交/不上传原始游戏 Lua .luac**。
3. 生成新的 `main.event.debug.DebugAreaJump.hx`、`main.battle.BattleResidentEffectManager.hx`，并只向现有 `IEventScript.hx` 追加原型确证的方法。用 `RecoveryZaMain.hx` 保持三个类进入 Haxe 类型检查/HashAbi/后处理。
4. 单独验收新增 **28/28**、R12 **19/19**（原版 SETI 写表副作用）、R11 **177/177**、R10 及更早 **56/56**，累计 **280/280**。再以 `Verify-SV-Haxe-Recovery.py` 验证 77 条原生 Proto/PC 映射、`haxe_method()` 与原生 opcode 一致，最后运行 Python 无 ROM 单元测试，才允许将源码晋升。
5. 并发的资源扫描任务可能更新 master：发布时先检查所有被跟踪的 Haxe 输入与原始 `main.blua`、PokeDocs/脚本未变化；仅将通过审核的 Haxe 提交安全 rebase 到**不相关**的资源更新之上，不覆盖其他工作流。

对应 `methods.jsonl` 状态：`promotion_batch=R13_NAMED_FIELDS`、`haxe_body_status=R13_NATIVE_FIELD_AST`、`r13_read_index_status=INDEX_METAMETHOD_EVENT_PARITY_PASS`（两条读方法）、`r13_write_side_effect_status=FIELD_TABLE_SNAPSHOT_AND_NEWINDEX_EVENTS_PASS`（一条写方法）；所有游戏内运行时状态仍是 `NOT_OBSERVED`。

**当前合计：77 个原版 Proto/PC 方法映射、76 个已通过独立 Lua A/B 的 Haxe 方法体、1 个仅 extern 的 `dll_util.Assert.IsNull`；累计 280/280 执行用例。**

## 5. 下一阶段重点

1. 将目前精确的三种字段模式扩展到更多原版短 Proto，按真实 CFG/HIR/AST 逐方法支持 `GETFIELD/SETFIELD` 的动态右值、更多 Key 类型及 `MOVE` SSA 合流；测试必须对照 original vs generated 的异常、别名、嵌套表与元方法事件。
2. 多个写表调用的累积副作用、写入前共享引用的生命周期、`__index` 返回不可写表等情况继续单独扩大用例集，不依据本轮 28 组声称全输入等价。
3. 引擎 C++/Lua VM/UpVal* 身份和 Switch 实机状态仍需要单独验证；只有实机/模拟器证据才允许将 `runtime_status` 改为 `RUNTIME_VERIFIED`。

关联：[[sv400-haxe-r10-cfg-hir-ast-lowering]] · [[sv400-haxe-field-battle-event-promotion]] · [[sv400-haxe-zascripts-native-differential]]。
