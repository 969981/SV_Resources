---
aliases:
  - SV400 R15 原生 SELF CALL TEST CFG SSA
  - SV400 Haxe 引擎依赖函数与模拟调用验收
tags: [pokemon-sv, lua54, haxe, hashabi, cfg, ssa, lua-vm, obsidian]
status: STANDALONE_MOCK_HOST_PARITY_PASS_ENGINE_RUNTIME_NOT_OBSERVED
updated: "2026-11-10"
---

# R15：真实 `SELF/CALL/TEST`、控制流分支、寄存器 SSA 与不可信引擎回调边界

> [!success] 原版子原型与 Haxe 模拟宿主调用对账已完成
> [R15 Actions #42772389014](https://github.com/969981/SV_Resources/actions/runs/42772389014) **Success**：两个 4.0.0 原始 Child Proto 与 Haxe 4.3.1/定制 Lua 5.4.3 输出、**14+14=28/28** 模拟宿主调用、事件及表状态测试通过；前期 **329/329** 同轮回归无退化，合计 **357/357**。全部 83 个原生 C/F 方法映射、原始 Proto/PC、寄存器/跳转字节码、Haxe 发射源码及 10 项受限 R15 合成测试通过，两个已验证方法体由 CI 写回 `master`。
>
> [!warning] 最重要的证据限制
> `onSetup` 和另一个运行期方法调用的对象/函数是差异测试注入的**可观测模拟回调**。测试确认 Lua 原生 `SELF` 传递接收者、`CALL` 参数及前后副作用、`TEST` 布尔分支在已覆盖输入下的对账；**不是**调用了原游戏 C++ 引擎，也没有获得 Switch 实机或模拟器中的引擎对象身份、完整 UpVal/TValue、内存副作用与时序证据。所有 `runtime_status=NOT_OBSERVED`，不能称为游戏原生运行等价。

## 1. 原始 4.0.0 机器证据和源码

原版 `main.blua` 不可变；SHA256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`，37,743 个原始 Lua Proto。PokeDocs 原版 C/F 完整 64 位 FNV 精确命名，根函数必须原样匹配 `GETUPVAL → LOADK(C) → GETTABLE → LOADK(prototype) → GETTABLE → LOADK(F) → CLOSURE → SETTABLE`。

| 真实方法 | Child Proto | 根注册 PC | 原始对象槽位 | 原始控制流 |
|---|---:|---:|---|---|
| `main.field.action.base.IAction.Setup` | 12930 | 160285 | `self[10]`、`self[12]` | 15 指令：`SELF CALL TEST JMP GETI GETI SETFIELD SELF GETFIELD CALL LOADTRUE RETURN1 LOADFALSE RETURN1 RETURN0` |
| `main.field.action.base.IAutoAction.Setup` | 13197 | 163143 | `self[2]`、`self[4]` | 同一精确 opcode 结构、不同 `GETI` 目标字段 |

原版四个有用的 K 字符串依次是：

```text
K0 = F22C7B81A049FA20D    (SELF 首次调用方法；它在此前已恢复为 onSetup)
K1 = component
K2 = f558733FC           (第二次 SELF 调用；本轮仅保留原始字段键)
K3 = updateInterval
```

**没有为 K2 臆造完整方法名称、类或 C++ 签名。**

### Haxe 实现（实际暂存并在严格 CI 后晋升）

这两个类分别已存在，源码**追加**了 `Setup`，保留旧版 `onSetup` 及其他已验收成员：

- `tools/SV.Lua54/haxe/4.0.0/source/main/field/action/base/IAction.hx`
- `tools/SV.Lua54/haxe/4.0.0/source/main/field/action/base/IAutoAction.hx`

主要语义（以下 `owner=10/child=12` 是 `IAction`，另一个改为 `2/4`）：

```haxe
var r15Method:Dynamic = untyped this["F22C7B81A049FA20D"];
var r15OK:Dynamic = r15Method(this);
if (r15OK) {
    var r15Target:Dynamic = untyped this[10];
    var r15Child:Dynamic = untyped this[12];
    untyped r15Target["component"] = r15Child;
    var r15Invoke:Dynamic = untyped r15Child["f558733FC"];
    var r15Interval:Dynamic = untyped r15Target["updateInterval"];
    r15Invoke(r15Child, r15Interval);
    return true;
}
return false;
```

严格检查 `SELF` 的方法接收者与调用目标来源、第一次调用返回后才执行的表读取与写入顺序，第二次方法 `SELF` 捕获前后的对象关联；`TEST` 使用 Lua 真值语义，尤其是数字 0、空字符串为 truthy。

## 2. 有界 CFG、寄存器 SSA 和函数出口返回值合流

`tools/SV.Lua54/src/sv_lua54/emit_haxe/r15_calls_ssa.py` 只认可上述两个原始 Child 的 15 字原始指纹。原版必须零 Upvalue、单个 `self` 参数、无 vararg、无嵌套子 Proto，严格核对 K0–K3 原始字符串、每条重要指令 A/B/C/k 寄存器，以及 PC3 `JMP` 的原始目标 PC12。

**基本块：**

```text
ENTRY         PC0 SELF -> PC1 CALL -> PC2 TEST
    truthy -> THEN: PC4 GETI -> PC5 GETI -> PC6 SETFIELD
                     -> PC7 SELF -> PC8 GETFIELD -> PC9 CALL
                     -> PC10 LOADTRUE -> PC11 RETURN1
    falsy  -> PC3 JMP -> PC12 LOADFALSE -> PC13 RETURN1
RETURN_PHI    合成函数出口，不是原始 LUA 指令
    PC11: R3@10 = true
    PC13: R1@12 = false
```

显式 `R1@0/R2@0` 为首次 SELF 函数+接收者对；`R1@1` 为第一次 CALL 不透明返回值；`R1@4`、`R2@5` 为该条件分支上的两个 GETI；`R3@7/R4@7` 为第二次 SELF 方法+接收者；`R5@8` 为 GETFIELD 的 `updateInterval` 参数。以上 SSA/合流信息是**针对两个受审查函数的静态寄存器恢复**；函数调用有不透明宿主副作用，不能因此声称通用内存 SSA 已解决。

## 3. 原版字节码与 Haxe 的模拟宿主 A/B

- `scripts/Emit-SV-Haxe-R15-EngineCalls.py` 重新读取原始 main.blua、PokeDocs 全哈希和 C/F Root 注册，原始 Child `code/constants/upvalues` 无损重封装到 CI 临时目录，生成 Haxe 并只在编译及对账后晋升。
- `tools/SV.Lua54/haxe/4.0.0/compare-r15-mocked-calls.lua` 将两个版本分别绑定到**初态相等但独立创建的 Lua 对象图**和两个模拟宿主回调，比较：
  1. 初次 `onSetup` 的 true/false/nil/0/空字符串分支及回调参数中接收者身份；
  2. 调用中改变 `self[12]`／`self[4]` 的行为、条件跳转和真正运行第二个调用的时机；
  3. 首次写入 `component` 的 `__newindex` 写入/拦截/抛错、嵌套表/外层 `__index`、第二次调用前 `GETFIELD updateInterval` 的事件；
  4. 第一次调用或第二次调用抛异常后已发生的副作用与函数返回值类型；
  5. `owner` 与 `child` 是同一个表、或二者共享子对象时的别名图是否改变；不是单纯比较 JSON 或 `tostring()`。
- 结果 **IAction.Setup 14/14**，**IAutoAction.Setup 14/14**；R14 49/49、R13 28/28、R12 19/19、R11 177/177、前期 56/56 同时通过，合计 **357/357**。
- 报告在 `tools/SV.Lua54/haxe/4.0.0/methods.jsonl` 逐方法保存 `r15_ssa`、`r15_cfg_edges`、`r15_basic_blocks`、`r15_return_phi`、`r15_call_sites`、`r15_mocked_host_status=MOCK_HOST_CALL_EVENT_ALIAS_AND_PARTIAL_WRITE_PASS`，且 `r15_engine_runtime_status=NOT_OBSERVED`。

## 4. 通用 CFG/SSA 前置诊断：只读，不生成未经证实的 Haxe

为了拓展到非固定 15 指令方法，新增：

- `tools/SV.Lua54/src/sv_lua54/emit_haxe/cfg_ssa_diagnostic.py`
- `scripts/Inspect-SV-Haxe-R15-CfgSsa.py`
- `tests/test_sv_haxe_cfg_ssa.py`
- `.github/workflows/slr-haxe-r15-cfg-ssa-audit.yml`

[原版大批候选诊断 Actions #42773054350](https://github.com/969981/SV_Resources/actions/runs/42773054350) **Success**，来源仍是相同的 3,892 条已命名 C/F 原版方法；分析器只处理有界短 Proto，`CALL/SELF/TEST` 等检查明确分离出来：

| 取证分类 | 数量 |
|---|---:|
| 已命名的原版 C/F 候选 | 3,892 |
| 满足有界 SELF/CALL/TEST 结构并执行诊断 | 886 |
| 寄存器 reaching definitions 至少有一个潜在 φ 合流 | 744 |
| 多个 RETURN1/RETURN0 构成可记录的合成函数出口 | 366 |
| 至少含一个未实现的寄存器影响语义 | 229 |

后四项**可以交叉重叠**。744/886 不是已恢复 Haxe；所有数据仅是候选和原始 PC 诊断。特别注意：
- `syntactic_edges()` 给出 Lua VM 条件分支与 JMP 的**语法级边**，不代替完整路径可达性证明。
- 只计算有界寄存器定义传播，合流可能包含 `UNINITIALIZED` 来源；`phi_candidates` 仅是 **SSA_PHI_CANDIDATE_ONLY**，不等于类型已恢复、真实 φ AST 或可编译方法体。
- `SELF/CALL` 的返回寄存器带 `OPAQUE_CALL_HEAP_BARRIER`；`GETI/GETFIELD` 的 `__index`、`SETI/SETFIELD` 的 `__newindex` 均保留未知内存副作用标记，**不能将寄存器 reaching-definitions 当成内存 SSA**。
- `tests/test_sv_haxe_cfg_ssa.py` 在合成菱形 CFG 上验证真正汇合的 PC5 寄存器 φ 候选（来自 PC2 与 PC4），并测试 `CALL`、共享表写和未知副作用不被消除。

### 下一阶段的正确门槛

优先挑选存在真实 join 的短方法，对 `MOVE/TESTSET`、`GETTABLE/GETFIELD` 和 `CALL` 后返回寄存器施加**完整可达性、别名和元方法事件**检查；再将类型安全、内存 side-effect ordering 通过原生 Lua 与编译 Lua A/B 验收的少量方法晋升 Haxe。绝不能直接按 744 个 φ 候选批量生成 `.hx`。对 `CALL` 目标是原版 C++/引擎绑定的场景，必须获得实机或模拟器运行证据才能提升运行时状态。

关联：[[sv400-haxe-r14-dynamic-field-shared-alias-branch]] · [[sv400-haxe-r11-r12-r13-native-lowering]] · [[sv-lua54-haxe-reconstruction]]。
