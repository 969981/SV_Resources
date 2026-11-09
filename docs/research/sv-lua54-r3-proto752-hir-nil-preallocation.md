---
aliases: [SV Lua54 R3 Proto752 HIR SETLIST nil 容量修复]
tags: [pokemon-sv, lua54, unluac, setlist, ast, obsidian]
status: STATIC_COMPILE_VERIFIED_RUNTIME_UNVERIFIED
updated: 2026-11-09
game_version: "4.0.0"
issues: [76, 77, 78, 81]
---

# SLR R3 — 完整 Proto 752 HIR→AST 的 nil 容量恢复

> [!important] 验收边界
> 本轮通过临时修补的 unluac-rs v1.4.5 对 main_dynamic Proto 752 的全部 2,071 指令严格反编译、Lua 5.4 语法检查及重新编译。固定 100 个原型均通过语法检查。**不等于整个 Proto 752 已证明运行时行为等价。** 补丁只应用在 GitHub Actions 的临时 Rust checkout，未修改上游、BLUA 或 PokeDocs。

## 一、上游为何拒绝 SETLIST

R2 原生证据：PC649 NEWTABLE R14 → PC651–664 算术 + 七次 MMBIN/MMBINK → PC665 SETLIST R14 三元素 → PC666 MOVE R1,R14。文件 SHA-256 为 ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572。

unluac-rs v1.4.5 的残留 HIR：table-set-list l15 start=1 values=l16,l17,l18 initializer-scope=None。

R3 临时 Rust 插桩在 table_constructors/mod.rs 的 materialize_safe_fixed_set_lists 中识别 Local(LocalId(15)), HIR statement index=161：

- adjacent=false；direct=false；indexed=false
- 三次普通阶段和一次 LowerFixedBatches 阶段均受阻
- 最终具体拒绝发生在 values_have_safe_nil_shape：无法证明三个数值一定非 nil

算术元方法可以返回 nil，导致原生 NEWTABLE 数组预分配与普通 Lua 索引写入的长度行为不同。插桩证据：[Actions #42568464661](https://github.com/969981/SV_Resources/actions/runs/42568464661)。

## 二、原始字节码反例和修复方向

原生 17 指令通过临时 Lua 5.4 bytecode wrapper 执行，元方法控制八种可能的 nil 结果掩码。比较 rawget、#table、rawlen：

| mask | 原生 rawlen | 空表+索引写入 rawlen | 三个 nil 预分配槽 rawlen |
|---|---:|---:|---:|
| 0 | 3 | 3 | 3 |
| 1 | 3 | 0 | 3 |
| 2 | 3 | 1 | 3 |
| 3 | 3 | 0 | 3 |
| 4 | 2 | 2 | 2 |
| 5 | 2 | 0 | 2 |
| 6 | 1 | 1 | 1 |
| 7 | 0 | 0 | 0 |

结论：直接将 SETLIST 转成以空表起步的索引赋值有 4/8 个长度差异；改用在原始建表位置预留三个 nil 元素，并随后按原值求值顺序填入，8/8 一致。**局部测试通过并非全域等价证明。**

测试夹具：[r3_nil_shape.lua](../../tests/fixtures/sv_lua54/r3_nil_shape.lua)；原生反例 [Actions #42568936554](https://github.com/969981/SV_Resources/actions/runs/42568936554)；容量预分配对照 [Actions #42569064717](https://github.com/969981/SV_Resources/actions/runs/42569064717)。

## 三、实验性上游补丁

[Patch-SV-Lua54-R3-Unluac-Capacity.py](../../scripts/Patch-SV-Lua54-R3-Unluac-Capacity.py) 将小范围补丁应用到临时克隆的 unluac-rs v1.4.5（不修改上游仓库）。修补表构造恢复器时，只有同时满足以下条件才能将可能为 nil 的固定 SETLIST 转为保留容量的 Lua：

1. 真正的新建 PUC 表，HirTableAllocation::PucBatched；不适用模板、Luau 或合成表
2. 原始数组容量与固定 SETLIST 元素数完全相等、hash_capacity=0、元素数量 1–64
3. 首次索引必须为 1、原构造器无旧字段或 open tail
4. 原有表达式安全、对象不逃逸、作用域与前缀检查仍有效
5. 在原 NEWTABLE seed 的源码位置先放等量 nil 占位数组字段，再保持各表达式计算和最后赋值的顺序
6. 其余未验证形状继续拒绝，绝不通过删除 nil 保护或盲目转换为索引赋值

[实验 CI](../../.github/workflows/slr-r3-capacity-patch.yml) 固定 upstream v1.4.5 和 Rust nightly-2026-11-08，临时编译 patched CLI。

## 四、完整函数静态编译与回归

| 检验 | 结果 |
|---|---|
| patched unluac-rs Rust 构建 | PASS |
| HIR index 161 / seed 157 / fields 3 命中 | PASS |
| 完整 2,071 指令 Proto 752 strict Lua 源码生成 | PASS |
| 完整函数 Lua 5.4 语法检查 | PASS |
| 生成完整函数源码重编译为 .luac | PASS |
| 固定 100 原型 strict Lua 语法回归 | **100/100** |
| 完整 Proto 752 的游戏 C API/Upvalue/全部调用分支 A/B | **NOT_VERIFIED** |
| 所有 46,084 原型的行为等价 | **NOT_VERIFIED** |

来源：[Actions #42569532395](https://github.com/969981/SV_Resources/actions/runs/42569532395)。

CI 输出包括：

    SLR_R3_PREALLOC_PASS index=161 seed=157 fields=3
    SLR_R3_PATCHED_STRICT_EXIT=0
    R3 complete 2071-op Proto752 strict Lua syntax + compiler PASS
    SLR_R3_COHORT: {'LUA_SYNTAX_OK': 100}

## 五、下一阶段

- 补充上游 Lua5.4 的 nil-hole、数组扩容、重叠写入、GC/Close、嵌套构造与多返回值语义回归。
- 从整个 Proto752 的生成代码建立可执行环境或 C API 桩，用同一次调用的表布局、异常、调用轨迹和 Upvalue 做 A/B；未观测前不可标记 runtime verified。
- 将实验性 Python patch 转成可供上游审查的 Rust 提交，避免仅依赖一次性文本替换。
- Lua 全量模块拆分和 Haxe 转换仍需继续按 #80/#81/#82 开发。

相关：[[sv-lua54-r2-proto752-ownership-ab]] · [[sv-lua54-r1-setlist-upvalue-cf]] · [[sv-lua54-source-reconstruction-roadmap]]。
