---
aliases: [SV Lua54 R4 upstream Rust patch, Proto752 unluac 1.4.5 100-10 semantic regression]
tags: [pokemon-sv, lua54, unluac-rs, SETLIST, native-benchmark, rust, AST, obsidian]
status: SOURCE_RECOMPILE_VERIFIED_SELECTED_EXECUTION_ONLY
updated: 2026-11-09
game_version: "4.0.0"
issues: [76, 77, 78, 81]
---

# SLR R4：独立可审查的 Rust 补丁与 Lua 5.4 可执行回归

> [!important] 验证层级
> R4 把 R3 的临时 Python 修改改造成标准 Git Rust diff，能在 **未修改的上游 unluac-rs v1.4.5 tag（commit 76d1452359b207c2a6fdec3c7c894152c7a61374）** 上用 git apply --check / git apply 应用。完整 SV main_dynamic Proto752（2,071 条指令）严格反编译、语法检查和重新编译通过，固定 100 个原生 Proto 100/100 通过。
>
> **此外新增 10 个上游 Lua 5.4 程序的真正编译→反编译→重新编译→执行对照，10/10 通过。仍然未证明完整 Proto752 的游戏实机行为等价。** 原版 BLUA 与 PokeDocs 不修改；不提交恢复后的游戏源码。

## 1. 可审查的独立 Rust 修补

[标准 Git patch](../../patches/unluac-rs/v1.4.5-puc-fixed-setlist-nil-capacity.patch)

目标：
- `src/hir/simplify/table_constructors/mod.rs`：新增原生数组容量证明辅助函数，在固定 SETLIST 可能返回 nil 时，保留原生 PucBatched 的新表精确数组容量，然后继续执行后续赋值；
- `tests/case_tables/setlist_08_puc_fixed_setlist_nil_capacity.lua`：包含由本研究自行编写、可提交上游的 nil-hole/浮点算术元方法及表长度回归测试。

应用：

```bash
git checkout v1.4.5
git apply --check v1.4.5-puc-fixed-setlist-nil-capacity.patch
git apply v1.4.5-puc-fixed-setlist-nil-capacity.patch
git diff --check
```

补丁保留原有的 SETLIST 非 nil、别名、前缀、作用域及求值顺序保护，且仅在 `PucBatched` 数组容量与固定批次数量严格匹配（元素数 1 至 64，原 seed 空、无 hash、无 open tail、起点 1）时启用预留 nil 槽。Luau、未知/合成预分配和未能证明新建对象身份的表仍保留原逻辑。

**目前补丁仅存于 `969981/SV_Resources`，还没有直接合并至 `x3zvawq/unluac-rs` 上游仓库。**

## 2. 原生 VM 反例仍是保护的依据

真正来自 Proto752 的 PC649–665 原生 17 个指令字（包含 7 个 MMBIN/MMBINK fallback）与生成的 Lua，在纯数值 163 组 A/B 测试通过；但元方法返回 nil 时：

| 场景 | 与原始 rawlen/#table 一致 |
|---|---:|
| `local t={};` 然后普通索引赋值 | 4/8 |
| `local t={nil,nil,nil};` 然后普通索引赋值 | 8/8 |

这说明直接删除 `values_have_safe_nil_shape` 守卫是错误修复；必须保留原始数组容量。上述 8/8 仅是受控测试，不能推导所有调用情形的等价。

## 3. 上游独立可执行回归：10/10

工具：[Validate-SV-Lua54-R4-Upstream-AB.py](../../scripts/Validate-SV-Lua54-R4-Upstream-AB.py) 从固定版本的上游 `tests/case_tables` 读取测试源文件。每一项都：

1. 使用 `luac5.4` 编译原始 Lua 测试；
2. 使用带 R4 补丁的 `unluac-rs v1.4.5` 严格反编译；
3. 使用 `luac5.4` 校验并重新编译生成 Lua；
4. 用同一 `lua5.4` 执行原始字节码与重编译字节码，对照实际退出码和确定性的标准输出。

已验证 10 项：
- constructor_01_table_constructor_eval_ownership
- constructor_03_constructor_nil_local_prefix
- constructor_06_constructor_run_boundaries
- constructor_07_closure_table_results
- constructor_25_nil_batch_call_prefix
- setlist_05_adjacent_uncertain_setlist
- setlist_07_table_constructor_local_acceptance
- multireturn_04_table_result_nil_shape
- capacity_01_indexed_array_capacity
- **setlist_08_puc_fixed_setlist_nil_capacity（R4 新增）**

**10/10 `EXECUTABLE_AB_MATCH`**。这是独立于宝可梦函数的实执行回归，有助于排查对一般 Lua 5.4 表语义的影响，但仅覆盖被选择的 10 个上游测试。

注：上游 tag 的 `cargo test --release --locked --lib` 执行正常，但该 lib 测试目标实际包含 **0 个 Rust 单元测试**，因此不计作额外覆盖率。

## 4. 完整 Proto752：静态恢复成功，真实运行状态仍待证据

固定原始 main_dynamic.blua SHA-256：
`ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572`。

- 完整 Proto752 2,071 条原始指令：strict Lua 源码生成、`luac5.4 -p`、`luac5.4 -o` **全部通过**。
- 固定 R0/R1 分层 100 Proto：`LUA_SYNTAX_OK=100/100`。这只是静态源文件语法/编译，不是 100 个函数的真实行为等价。
- Proto752 原生函数结构：**参数 1 个；is_vararg=false；max_stack=24；Upvalue 描述符 2 个；直接子 Proto 2 个**。
- Upvalue 0：`instack=0, idx=0, kind=0`，引用父 Upvalue cell；
- Upvalue 1：`instack=1, idx=16, kind=0`，引用**闭包创建时父原型寄存器 R16**。
- 这些描述符只确定词法捕获路径，不提供游戏运行时的对象身份、实际值或宿主注册调用 PC。没有原始 `_ENV` / parent R16 / 真实 C API 时，不能把静态截取的根 Chunk 运行作为完整原函数等价证明。

相关工具：
- [Proto752 运行环境前置审计](../../scripts/Inspect-SV-Lua54-R4-Proto752-Shell.py)
- [R4 审计 CI](../../.github/workflows/slr-r4-proto752-runtime-prerequisites.yml)
- [R4 独立补丁与可执行回归 CI](../../.github/workflows/slr-r4-reviewed-upstream.yml)

## 5. CI 证据与下一道门槛

- [R4 首轮 9/9 上游 A/B](https://github.com/969981/SV_Resources/actions/runs/42572566500)：PASS；
- [R4 加入第 10 项后](https://github.com/969981/SV_Resources/actions/runs/42572963041)：**100/100 原型、10/10 上游 A/B、完整 2,071 指令 strict 编译 PASS**；
- [Proto752 闭包参数和捕获前置审计](https://github.com/969981/SV_Resources/actions/runs/42573270496)：PASS。

> [!warning] 待完成
> 全函数的真实语义验证必须以游戏里实际闭包实例为锚点，取证父 Proto 注册 PC、真实的 Upvalue0/_ENV、父栈 R16 的对象类型与生命周期；再同一次调用记录参数、函数返回结果、表的 `rawlen` / `#`、异常路径、C API 调用轨迹、共享对象别名和副作用，进行 A/B。没有这组证据前，`RUNTIME_PARITY` 仍为 `NOT_VERIFIED`。
>
> Lua 模块拆分和 Haxe 翻译仍排在 Lua 原生执行一致性与结构化符号导出之后。

关联：[[sv-lua54-r3-proto752-hir-nil-preallocation]] · [[sv-lua54-source-reconstruction-roadmap]]。
