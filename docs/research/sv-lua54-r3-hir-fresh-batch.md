---
aliases: [SV Lua54 R3 2071条指令完整反编译, R3 Table Constructor HIR lowering]
tags: [sv, pokemon, lua54, setlist, upvalue, decompiler, rust, reverse-engineering]
status: EXPERIMENTAL_FIX_AWAITING_FULL_GATE
updated: "2026-11-09"
---

# SLR R3 — main_dynamic Proto 752 的 HIR→AST 表初始化恢复

> [!warning] 研究状态
> 本文把已复验的诊断与待验收的上游修复分开。原版 SV 4.0.0 BLUA 不修改；上游 unluac-rs 无推送权限，实验性补丁应用于 GitHub Actions 的临时 upstream v1.4.5 checkout，**不能把补丁存在等同于已修复完整 Proto**。

## 一、原版与反编译工具基线

- 原版 main_dynamic.blua SHA-256：ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572。
- 固定 Proto 752 原始长度：2,071 个 Lua 5.4 指令字。
- 原生 NEWTABLE R14 PC649、SETLIST R14 PC665、之后 MOVE R1,R14 PC666 已在 R2 定位。
- R2 对 17 个原始指令字的临时可执行包装器，自动发射 Lua 与 luac5.4 重新编译的结果在 163 组受控输入上 A/B 通过；**不意味着整个 Proto 752 等价**。
- unluac-rs v1.4.5 对 100 函数分层样本静态 Lua 语法通过率 99/100，唯一无法严格反编译的是本 Proto。

## 二、上游原生 HIR 已有 owner，不是 parser 缺陷

在 unluac-rs v1.4.5 的 src/hir/simplify/table_constructors/mod.rs 临时植入只读日志，对完整原型严格反编译，复现残留：

~~~text
LocalId(15) = TableConstructor(allocation=PucBatched(array_capacity=3))
LocalId(16) = LocalId(9) + LocalId(12)*3.0
LocalId(17) = LocalId(10) + LocalId(13)*3.0 + 20.0
LocalId(18) = LocalId(11) + LocalId(14)*3.0
TableSetList {
  base=LocalRef(LocalId(15)),
  start_index=1,
  fixed=[LocalRef(LocalId(16)),LocalRef(LocalId(17)),LocalRef(LocalId(18))],
  initializer_debug_scope=None
}
~~~

这些是 HIR 的抽象局部变量，与原生 R14 等 CPU/VM 寄存器编号**不能直接等同**，其 InstrRef 编号也不应当在没有 source-map 的情况下直接当作原始 PC。

## 三、导致 strict AST 未消除的精确判定

临时上游源码日志（真正函数，不是单独解码的 PC）：

~~~text
SLR_R3_VALUE_GUARDS safe=[true,true,true]
SLR_R3_VALUE_GUARDS non_nil=[false,false,false]
SLR_R3_VALUE_GUARDS nil_shape=false
SLR_R3_SEED direct_local=true
SLR_R3_SEED local_indexed_proof=true
SLR_R3_FIND_LOCAL false
~~~

问题是 **values_have_safe_nil_shape()**：从三个局部变量读值本身安全，但相应的算术表达式可通过元方法返回 nil，不能确定数组的实际布局和 # 边界。此时把 raw SETLIST 拆成按索引赋值可能变化语义。**不能绕过 nil-shape 防线**。

- [诊断脚本](../../scripts/Patch-SV-Lua54-R3-UpstreamProbe.py)
- [R3 上游诊断 CI](../../.github/workflows/slr-r3-upstream-table-lowering.yml)
- [探测 Actions #42564717787](https://github.com/969981/SV_Resources/actions/runs/42564717787)

### 追加诊断：旧标量值与物理寄存器复用

第一个实验补丁尝试在旧 Batch 后没有引用时**删除**三个标量 LocalDecl，严格模式仍失败。上游调试显示第一次冲突在 **HIR 后续 statement 165**：

~~~text
SLR_R3_FOLD blocked at future_stmt=165
  used=[]
  rewritten=[0]
  targets=[Local(LocalId(16))]
  values=["s1_side02_0060_sazare"]
~~~

这不是对原来的乘加结果的读取，而是 LocalId(16) 所代表的存储位置被新字符串**重新定义**。若不检查定义的生存区间，直接删除 LocalDecl(16/17/18) 会破坏后续赋值的词法所有者。因此新实验版引入**old value epoch** 分析：从 Batch 往后追踪每个 producer，未遇到确定性覆盖之前的 read 使候选拒绝；确定性的顶层 local 赋值使原值失效。既有 LocalDecl 保留（仅清除被移入 constructor 的原初始化表达式），确保后续本地变量依然存在。任何条件覆盖、引用捕获、同一语句先读再写仍拒绝。

这一变换仍可能影响 debug.getlocal 可观察的局部变量内容和用户自定义 __gc 最终化时间，因此它是**实验性静态重建**，不应未经上下文检验就推广为全 Lua 语义等价。

## 四、实验性修复（非通用放行）

[Patch-SV-Lua54-R3-FreshBatch.py](../../scripts/Patch-SV-Lua54-R3-FreshBatch.py) 在临时 upstream src/hir/simplify/table_constructors/mod.rs 中加入一个非常窄的变换：

1. owner 必须是立即可识别的新鲜 LocalDecl 表 constructor（PucBatched，零字段、无 open tail），并有清楚的原位来源；
2. 后续紧邻三条单值 LocalDecl 作为三项 fixed batch producer；无跨语句空隙、无多返回值；
3. Batch 指向同一个 owner 且固定 start_index=1，依次读取三个 producer；owner 无先期别名、闭包捕获、debug identity；
4. Producer 的表达式不引用 owner/三个 producer 的局部槽位，且 producer 不能在 Batch 之后继续被使用、写入、引用捕获；
5. 仅将这三个表达式搬回原 owner table constructor，保持 NEWTABLE 在计算前执行，Lua 5.4 在 constructor 尾端自己生成 raw SETLIST。**不会把 SETLIST 改写为 t[i] 逐项赋值**；
6. 任何不匹配条件直接拒绝，其他原生程序继续执行上游原有安全逻辑。

实验风险：编译期 source-map/临时 local lifetime、Lua debug API 可观察性以及同一函数其他路径均需严格验收；修复不能跨越未知控制流或改变原生求值顺序。

- [测试入口](../../.github/workflows/slr-r3-upstream-fix.yml)：临时编译改造的上游 Rust CLI，检查完整 2,071 指令 strict 输出、luac5.4 -p、100 函数基准不低于 99/100。
- [原生完整 Proto 临时生成器](../../scripts/Build-SV-Lua54-R3-Proto.py)：只读、SHA 固定、byte-exact reserialize；原始二进制与生成完整源码只用于 CI 临时目录。
- [nil 结果专项测试](../../tests/fixtures/sv_lua54/r3_nil_hole_constructor.lua)：对临时原始 PC649–665 字节码片段验证带元方法 nil 结果时 fused constructor 的数组形态。
- 该补丁不适合未经修改就用于任意语言 dialect、任意 C API、存在调试级别的原型或所有 SETLIST。

## 五、仍需独立验收

| 检查 | 说明 |
| --- | --- |
| upstream Rust 编译与 regression | 不能把只在 HIR 通过的判断当成源码恢复 |
| 全部 Proto 752 严格 decompile + luac -p | 若通过，只证明静态语法及 HIR→AST 可发射 |
| 100 函数既有基线 | 不允许本修复造成已成功样本回归 |
| 整个 Proto 752 的行为等价 | 游戏私有 C API、父 Upvalue 实例、调用者、动态控制流与副作用均未完全恢复；需要可运行的差异 harness 或实机只读追踪 |
| upstream 合入 | x3zvawq/unluac-rs 不在本连接写权限内，当前只保持可复现的外部临时补丁 |

前序报告：[[sv-lua54-r2-proto752-ownership-ab]]、[[sv-lua54-r1-setlist-upvalue-cf]]。
