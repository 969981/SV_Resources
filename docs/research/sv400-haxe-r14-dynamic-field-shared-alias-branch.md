---
aliases:
  - SV400 R14 Haxe dynamic field and shared-reference original Lua
  - SV400 双次 SETI 写表副作用
tags: [pokemon-sv, lua54, haxe, reverse-engineering, hashabi, cfg, hir, ast, obsidian]
updated: "2026-11-10"
status: STANDALONE_LUA_VERIFIED_GAME_RUNTIME_NOT_OBSERVED
---

# R14：动态 SETFIELD、连续 SETI 共享引用与两次 EQI 条件分支

> [!success] 本轮 R14 已完成实际编译、原版差异测试并提交
> [完整源代码验证与写回 Actions #42767473135](https://github.com/969981/SV_Resources/actions/runs/42767473135)：**4/4 Haxe 方法通过定制 ZAScripts Haxe 4.3.1 编译；新增原始 Child 对比 49/49；此前 280/280 同轮回归通过；合计 329/329**。末尾还通过原始 Root C/F→Child Proto/PC、PokeDocs 64 位哈希和 Python 正负例后才由 GitHub Actions 推送源码到 `master`。[本轮 Haxe 提交](https://github.com/969981/SV_Resources/commit/341136a5628b9f12a947c0102f8efbcb9e146e33)。

> [!warning] 精确范围
> 这里的证据仅能证明所选输入下：原始 4.0.0 Child Lua 字节码在独立 Lua 5.4.3 VM 中，与固定 ZAScripts Haxe→Lua 的返回值、异常类别、可观察表状态和元方法调用事件一致。**不是**原版游戏内的共享 UpVal/TValue/C++ 引擎对象、所有输入或整个类的行为一致性。所有方法继续 `runtime_status=NOT_OBSERVED`。

## 1. 从真实 ROM Lua 原型定位，而不是为已知符号填充空壳

- 原始不可变文件：`Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua`，原版 SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`。
- 对 `main.blua` 37,743 个 Proto 无损解析并进行 `encode()==raw` 校验；再扫描原始 18,991 个 `GETUPVAL/LOADK(C)/GETTABLE/LOADK("prototype")/GETTABLE/LOADK(F)/CLOSURE/SETTABLE` 注册点。
- `scripts/Inspect-SV-Haxe-R14-DynamicAndMultiWrite.py` 对 PokeDocs **C/F 全哈希准确命名**且尚未恢复的短 Proto 做只读筛选：4 条动态 `SETFIELD`，62 条多次写表，111 条至少两次条件测试。这是三个**可能有交集的研究候选类别**，**不是**方法体完成数或安全转换总量。候选的 Lua 原生指令、PC、K 常量、参数和哈希均在 [Actions #42766130866](https://github.com/969981/SV_Resources/actions/runs/42766130866) 的只读 JSON artifact 中。需要引擎 `SELF/CALL` 的其余方法仍标未恢复。

### 本轮四个原生唯一归属

| 原版类/方法 | Child Proto | Root PC | 原版操作 | 独立 A/B |
|---|---:|---:|---|---:|
| `main.event.base.IEventScript.set_CallFromReserve` | 670 | 24823 | `GETI self[22] → SETFIELD K(callFromReserve),R1 → RETURN1 R1` | 12/12 |
| `main.event.base.IEventScript.set_DisableFieldCamera` | 674 | 24855 | `GETI self[22] → SETFIELD K(disableFieldCamera),R1 → GETI self[22] → GETFIELD K(disableFieldCamera) → RETURN1` | 12/12 |
| `main.battle.BattleViewBase.SetShowBattleMessageState` | 6088 | 90998 | `SETI self[36],R1 → SETI self[37],R2 → RETURN0` | 12/12 |
| `main.battle.ui.BattleUiTokuseiWindow.IsEnemy` | 8129 | 115070 | `EQI 1 / JMP → EQI 3 / JMP → true/false` | 13/13 |

每条都保存准确的 `class_hash`、`method_hash`、`code_offset`、Child PC、原生原始 opcode words、SHA、Parent Proto=0、Upvalue=0、Root 注册 PC、`r14_hir` 和 CFG 边。这些都在 `tools/SV.Lua54/haxe/4.0.0/methods.jsonl`，不是猜测的 Java/C# 方法签名。

## 2. R14 Haxe 源码实际恢复表达式

受限后端 `tools/SV.Lua54/src/sv_lua54/emit_haxe/r14_patterns.py` 在 `decode()` + `syntactic_edges()` 上构造原生 CFG 和具 PC 的类型化 HIR；对四条已审查指令模式精准匹配寄存器、比较立即数、JMP 跳转及实际 Lua `K` 字符串。无 Upvalue、无 vararg、无嵌套 Proto 才允许。禁止自动忽略未识别 opcode。Haxe 仍保留 `@:chunk("main")`、`@:hashAbi`、`@:expose(C)`、`@:native(C/F)`。

以下仅是方法主体，不能代表全类代码：

```haxe
// Proto 670 — dynamic SETFIELD 的返回值确实是原始参数 R1
untyped this[22]["callFromReserve"] = value;
return value;

// Proto 674 — 原始代码要求写后再次执行 GETI/GETFIELD
untyped this[22]["disableFieldCamera"] = value;
return untyped this[22]["disableFieldCamera"];

// Proto 6088 — 原版顺序先写36、再写37，不能交换顺序
untyped this[36] = first;
untyped this[37] = second;

// Proto 8129 — EQI B=128/130 -> 原版立即数1/3
return value == 1 || value == 3;
```

**文件位置：**
- `tools/SV.Lua54/haxe/4.0.0/source/main/event/base/IEventScript.hx`，保留先前通过 R11/R13 的老方法。
- `tools/SV.Lua54/haxe/4.0.0/source/main/battle/BattleViewBase.hx`，保留此前的 R9/R11 成果。
- `tools/SV.Lua54/haxe/4.0.0/source/main/battle/ui/BattleUiTokuseiWindow.hx`，仅恢复 `IsEnemy`，不虚构其他成员。
- `scripts/Emit-SV-Haxe-R14-DynamicState.py` 在 Actions 临时目录分组和生成源码，核对 Child ID/Root PC/原始 K/指令指纹后执行原版子 Chunk 重封装；源码**只有通过 329 组 A/B 与完整原型验证后**才自动写回 `master`。

## 3. 与原始 Lua 进行真正的共享引用图和副作用对账

`tools/SV.Lua54/haxe/4.0.0/compare-r14-alias-branches.lua` 在**同一种 Lua 5.4.3 VM、不同的但初态等价的 Lua 对象图**中分别执行 original Child 和 Haxe→Lua。比较的不只是 `tostring()` 或单次返回值：

1. **原始动态图写入 12+12 组**：对已经存在或不存在的字段赋值，包含布尔、字符串、浮点、`nil` 删除、作为参数的嵌套对象、循环引用；比较 `SETFIELD` 的 `__newindex` 事件、返回值与参数身份的共享关系，并检查写入被元方法吞掉时随后 `GETFIELD` 的 `__index` 读取事件和结果。
2. **同一对象连续两次 `SETI`，12 组**：在 `self[36]` 和 `self[37]` 写入**同一张表**、让参数引用 `self` 构成环、已有键跳过 `__newindex`、两个键都进入 `__newindex`、拦截后未真实写入、写到共享 shadow 表、第一次写入后第二次抛错，以及第一次元方法回调预先改写第二个目标键等情况，比较完整 raw 表状态和回调顺序。
3. **两段原版整数分支，13 组**：检查 1、3、其他整数、浮点 1.0/3.0、`NaN`、`math.huge`、字符串、布尔、nil 的原版 `EQI/JMP` 与 Haxe `||` 结果。同时确保原始函数给 1/3 的结果确实为 true，避免两个实现恰好都错误却得到假阳性。
4. **别名图对等**：双向引用映射 `source table ↔ generated table`，确认“原始两个位置指向同一表”时生成版仍指向同一表，也检查不能把不同的表错误合并；递归比较表的 raw `next/rawget` 字段，不触发额外 `__index`。校验完整 `self`、实参、return、记录的事件和辅助引用对象组成的联合可观察图。
5. **异常路径**：原始与重新编译 Lua 的成功/失败状态、异常结果类型，以及**抛错前已发生的表状态与事件**需要一致。两份源码的 traceback 行号不同，因此没有要求异常文本逐字相同。这不等于对任意外部对象、所有 metatable 或完整 VM 的等价证明。

差异执行成功后依次回归：
- R13 原始 GETFIELD/SETFIELD：28/28；
- R12 SETI/GETI/LT-MOVE：19/19；
- R11 59 条原生字面量方法：177/177；
- R8–R10 前期 11 个方法：56/56。

最终 **R14 49 + 前置 280 = 329/329 PASS**。原版 Child 的 code/constant/upvalue descriptor 在 CI 中重新打包并核对后只存入 `$RUNNER_TEMP`，不会提交任何原版游戏 `.luac` 分片到仓库。

## 4. 严格发布及验收范围

- `.github/workflows/slr-haxe-r14-promote.yml` 用固定 commit 的 ZAScripts Haxe 4.3.1、`HashAbi`、`cppbindings`、LuaOutput、Lua 5.4.3 编译所有恢复类。
- `scripts/Verify-SV-Haxe-Recovery.py` 逐方法回读原始 Proto，重新提升 CFG/HIR/AST，核对完全一致的 Haxe 方法源码、C/F/Root PC/Child opcode、原始哈希、运行时状态和原版差异结果；`tests/test_sv_haxe_r14.py` 用合成 Proto 做 12 项正反例。
- 安全发布检查主分支并发资源扫描是否修改过 Haxe/Proto/PokeDocs 等证据输入；只会在无关变更之上 rebase，绝不会在原版数据变化的情况下“沿用旧 PASS”强行覆盖。

**本轮最终状态**：`81` 个准确原版 Proto/PC 映射，`80` 个已通过有限范围独立 Lua A/B 的 Haxe 方法体，`1` 个仅 extern 的 `Assert.IsNull`，所有 `runtime_status=NOT_OBSERVED`。

## 5. 后续应关注的更复杂情况

- R14 发现的动态 `SETFIELD` 候选总共只有四条短命名方法，其中另两条 `IAction.Setup`、`IAutoAction.Setup` 含 `SELF/CALL/TEST` 和引擎交互。此类需先明确原始依赖对象、模拟器/实机可观测调用和调用副作用，不能直接按字节码外形扩展 Haxe。
- 对长的复合条件式，逐步建立通用 CFG join、短路与 SSA/MOVE、不同 `K` 常量类型和原版异常触发顺序的证据；尚无通用 AST 还原器可自动转全部 111 条多判断候选。
- 连续写表的复杂情形还包括多层别名、`__eq`／`__index`／`__newindex` 嵌套影响、写表失败后引擎操作及 UpValue 身份。R14 只验证具体 12 个双写场景，不能对无限输入、原生游戏 C++/TValue 对象做未依据的全等声明。

关联：[[sv400-haxe-r11-r12-r13-native-lowering]] · [[sv400-haxe-r10-cfg-hir-ast-lowering]] · [[sv-lua54-source-reconstruction-roadmap]]。
