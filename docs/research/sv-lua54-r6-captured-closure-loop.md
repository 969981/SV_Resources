---
aliases: [SV 4.0.0 main.blua Lua5.4 by-reference capture loop recovery]
tags: [pokemon-sv, lua54, unluac-rs, hir, ssa, obsidian]
status: PARTIAL
source_version: "4.0.0"
---

# SV 4.0.0 — main.blua Proto10983 / Proto34363 闭包捕获型循环还原

## 输入与边界

- 原版 `main.blua`：12,912,264 字节；SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`。
- 标准 Lua 5.4 4/8/8 字节码；37,743 个 Prototype，原始文件只读。
- 反编译器固定 `unluac-rs v1.4.5`（commit `76d1452359b207c2a6fdec3c7c894152c7a61374`），应用仓库现有 R4 SETLIST 修复后，继续测试 R6 捕获型循环临时补丁。
- Lua Prototype ID、PC 与 ELF 主程序 RVA 互不等价；以下 PC 指 `main.blua` 内该原型的原始 Lua VM 指令序号。

## 逐字节对照

| 证据 | Proto10983 | Proto34363 第一循环 | Proto34363 第二循环 |
| --- | --- | --- | --- |
| 原型指令区偏移 | `0x59157A` | `0xB34690` | 同一原型 |
| 原型总指令 | 93 | 208 | 208 |
| `LTI` | PC65 | PC62 | PC160 |
| `LFALSESKIP/LOADTRUE` | PC67–68 | PC64–65 | PC162–163 |
| `CLOSURE/CALL/TEST` | PC69–71 | PC66–68 | PC164–166 |
| `CLOSE/JMP` 回边 | PC78–79 → PC62 | PC75–76 → PC59 | PC173–174 → PC157 |
| 被调用子闭包 | Proto10984 | Proto34366 | Proto34369 |

Proto34366 的三个 `Upvalue` 描述符是 `(instack=1,idx=11/9/10)`；Proto34369 是 `(instack=1,idx=13/9/12)`。描述符证明捕获父寄存器槽，不是可直接读内存的绝对地址。HIR 内实际存在 `HirCapture { mode: ByReference, binding: Local(LocalId(0)) }`。

## 错误根因与受限修复

`LTI + JMP + LFALSESKIP + LOADTRUE` 将比较结果物化到可被子闭包捕获的局部单元。冻结 ConditionPlan 的生产者节点通过 Phi 值交给消费节点，消费节点随即创建并调用闭包。

上游 `build_condition_decision_expr` 中，`lower_condition_subjects` 尝试通过 `replace_binding_in_expr` 在 CALL 的表达式内把局部单元替换为比较表达式；然而这份局部只存在于 Closure 的按引用捕获列表，返回替换次数 **0**，导致 `frozen loop condition cannot be materialized`。强行替换 Closure 的捕获将破坏局部单元身份。

实验补丁在确定 **两节点条件图 + 单个比较结果 Phi + 新建闭包调用 + 同一 Local 的 ByReference 捕获** 后：

1. 保留原 CALL 的 Closure 捕获，不强行内联该绑定；
2. 在循环条件前缀中为真实的 Local 只赋值一次原始 `<` 比较；
3. 保留控制流中的 `CLOSE`、回边与可能触发的元方法；
4. 不将其他未知条件一律转换为 `while true` 或替换为占位表达式。

## 覆盖规模（指令模式扫描，不等于全部需要修复）

对原始 37,743 个 Prototype 扫描连续八条指令 `LTI, JMP, LFALSESKIP, LOADTRUE, CLOSURE, CALL, TEST, JMP`：

- 390 处；落在 298 个不同原型中。
- 其中 388 处，子闭包 `Upvalue` 描述符实际捕获了前述布尔结果写入的父寄存器。
- 这只是静态候选上限，不能直接认定 388 处均由相同 HIR 错误导致。

## 可复核验收

- [首次完整脚本阻断 Actions #42576721691](https://github.com/969981/SV_Resources/actions/runs/42576721691)：Proto10983。
- [Proto10983 修复 Actions #42580687116](https://github.com/969981/SV_Resources/actions/runs/42580687116)：严格 Lua 5.4 反编译与 `luac5.4 -p` 通过；本地 307/307 组原始字节码与自动源码模拟环境 A/B 通过。
- [再次全量 Actions #42582919191](https://github.com/969981/SV_Resources/actions/runs/42582919191)：越过 Proto10983，新阻断 Proto34363。
- 后续通用化研究在 [PR #92](https://github.com/969981/SV_Resources/pull/92) 的独立分支和 [R6 Actions](https://github.com/969981/SV_Resources/actions/workflows/slr-r6-proto10983-condition.yml) 进行，不变更原始游戏资源或 `master`。

**当前仍非完整 main.lua。** 函数级语法或模拟 A/B 成功既不证明整模块可重编译，也不证明游戏实际运行时行为。
