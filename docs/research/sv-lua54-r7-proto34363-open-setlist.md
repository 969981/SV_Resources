---
aliases: [SV 4.0.0 Proto34363 开放式 SETLIST HIR 分析]
tags: [pokemon-sv, lua54, unluac-rs, hir, ast, setlist, obsidian]
status: DIAGNOSED_NOT_FIXED
version: "4.0.0"
---

# SV 4.0.0 Proto34363：开放式 SETLIST 的所有权与作用域

> 原始 `main.blua` SHA-256：`c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`。原型 34363：208 条指令、文件 code offset `0xB34690`，6 个子原型。没有修改原始字节码。

## 原始 VM 指令

| PC | 指令 | 语义 |
| --- | --- | --- |
| 102–103 | `NEWTABLE R12; EXTRAARG` | 创建 PUC 表；原生 array_capacity=1 |
| 104–105 | `CLOSURE R13 child#3; CALL R13 B=1 C=2` | 第一个闭包只取一个返回值 |
| 106–107 | `CLOSURE R14 child#4; CALL R14 B=1 C=0` | 第二闭包开放多返回值 |
| 108 | `SETLIST R12 B=0 C=0` | 依动态栈顶写数组 |
| 109 | `MOVE R3 R12` | 将同一个表交给后续变量 |

闭包 Proto34367／34368 均 13 条指令，分别捕获父级 R10／R11。不要将 `CALL C=0` 理解为返回 0 个值。

## R7 实测 HIR

[Actions #42585829421](https://github.com/969981/SV_Resources/actions/runs/42585829421) 使用原始 Proto34363 字节码提取，并用 `unluac-rs v1.4.5` + 已验证 R4 nil-capacity patch + R6 闭包捕获循环补丁执行 `--dump hir --detail verbose --stop-after hir`。HIR dump exit=0、严格 AST exit=1：

```text
local l20 = table(array=0,record=0,trailing=-,
                  allocation=PucBatched(array_capacity=1,hash_capacity=0))
local l21 = closure(proto#4 captures=ref(l18))
assign l21 = call(normal) l21()
table-set-list l20 start=1
    values=l21, call(normal) closure(proto#5 captures=ref(l19))()
    <tail:open> initializer-scope=None
assign l7 = l20
assign l20 = u1["int"]
assign l21 = l7[1]
```

错误为 `HIR proto#0 still contains residual table-set-list during AST lowering`。这是一条实际残留开放式 SETLIST，不能把 HIR dump 中 3 处命中误认为三个不同残留节点。

## 为什么不能直接改成 `t[1]=...`

R4 补丁是固定数组、无 open tail 的特例；本次 SETLIST 包含动态返回值，且 `l20` 的 `NEWTABLE`、两次闭包调用和后续所有权交接位于不同 HIR 语句。按索引赋值可能触发 `__newindex`、改变 array-part、`rawlen/#table`、异常与 debug 观察时机；强行把 `l20` 改成 `{ f(), g() }` 也仍需证明原生预分配容量与闭包捕获身份。

## 尚需闭合的验收

1. 通过 SSA/对象所有权证明 `l20` 在 SETLIST 前未被捕获、覆盖、逃逸；仅允许此一所有权 epoch 的合并。
2. 将首个 CALL 保持固定一值，第二个 CALL 保持 open tail，验证闭包调用与 `CLOSE` 事件顺序。
3. 对零／一／多个返回值、nil holes、元方法、异常、`rawlen/#table` 运行原始字节码与重新编译 Lua 的差异测试。
4. 严格反编译整个 Proto34363 通过后，再尝试完整 `main.blua`；不能把函数级成功标记为游戏运行时通过。

关联：[[sv-lua54-r6-captured-closure-loop]] · [PR #92](https://github.com/969981/SV_Resources/pull/92)。
