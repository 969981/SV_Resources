---
aliases: [SV 4.0.0 R7 实机 UpVal Table 身份取证]
tags: [pokemon-sv, violet, lua54, haxe, upvalue, gdb, runtime, obsidian]
status: STATIC_ELF_AND_BLUA_VERIFIED_LIVE_UPVAL_NOT_OBSERVED
game_version: "4.0.0"
updated: "2026-11-09"
issues: [73, 76, 81, 82, 84]
---

# R7 — main_dynamic 元表 UpVal*、Table* 与 Proto752 实机身份验收

> [!warning] 不可把静态校验视作实机结果
> 本轮实际取得 Library 原版 **Violet4.0.0.elf** 做 ELF 静态校验、使用 GitHub Actions 对原版 `main_dynamic.blua` 重新解码四处 PC，并实现 read-only GDB *装载观察*和离线证据验收器。
> **没有附加真正运行的 SV 4.0.0、没有读取任何活动 `UpVal*`、`LClosure*`、`Table*`，也没有观察 Proto752 运行。** 运行时指标状态 `NOT_OBSERVED`。后续即使 JSON 文件结构通过，也只是 `TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED`，绝不是独立的真实运行证明。

## 1. 双版本指纹与两个 PC 空间

| 资产 | 指纹 |
| --- | --- |
| 《紫》4.0.0 原始 ELF | SHA-256 `d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0` |
| ELF Build ID | `709BFD66115298640155FCC4979DBA151C7CC79A` |
| `main_dynamic.blua` | SHA-256 `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572` |
| ELF `.text` RVA→文件偏移 | 本 ELF `file_offset = RVA+0x8D8`（限位于 `.text` 内的 RVA） |
| ELF Native load BL | `main+0xE37F70`, AArch64 原字节 `CC 00 00 94` |
| ELF load call target | `main+0xE382A0`（BL immediate `0xCC × 4 = 0x330`） |

这里的 Native `main+0xE37F70` 与 Lua `root PC48` **是不同坐标系**。后者是 `Proto.code[48]`，不能直接对 main 下硬件断点。实际 PC 须先验证某个执行帧的 `Proto*`、其 `code` 指针与 `CallInfo.savedpc`（取当前或下一指令取决于断点所在相位），再计算。

可通过 [离线 ELF 校验器](../../scripts/Verify-SV-Lua54-R7-ElfAnchor.py) 对本机原件重演 RVA、BL opcode 和目标：

```bash
python scripts/Verify-SV-Lua54-R7-ElfAnchor.py --elf /path/to/Violet4.0.0.elf --report r7-elf-anchor.json
```

这是静态校验，不会连接游戏进程。

## 2. GitHub Actions 已重读的原生 Lua CLOSURE 指令

下表是 **原版 BLUA、root Proto0** 中的 PC，不是猜测的源级行号：

| root PC | 原生 word | child index / Proto | 2 号 Upvalue 捕获的父槽（描述符下标 1） |
| ---: | --- | --- | --- |
| 48 | `0008874F` | 17 / 18 | `[instack=1, index=13, kind=0]` |
| 49 | `000907CF` | 18 / 19 | `[1,13,0]` |
| 50 | `0009884F` | 19 / 20 | `[1,13,0]` |
| 12242 | `01621C4F` | 708 / 752 | `[1,16,0]` |

> 注意：描述符的 `upvalue_slot=1` 是 Python/C 内部 **0-based** 序号（第二个 Upvalue）；Lua `debug.upvalueid(function, 2)` 使用 **1-based** 序号。

## 3. 静态证据链与需要额外取得的对象链

```text
同一个 main_dynamic root activation / lua_State* / CallInfo
  ├─ PC48 -> LClosure*(Proto18) -- upvals[1] --┐
  ├─ PC49 -> LClosure*(Proto19) -- upvals[1] --┼─ UpVal*(R13 cell)
  └─ PC50 -> LClosure*(Proto20) -- upvals[1] --┘       |
                                                        +-> TValue(type=table)
                                                              |
                                                              +-> Table* (metadata)
  └─ PC12242 -> LClosure*(Proto752) -- upvals[1] -> UpVal*(R16 cell)
                                                       |
                                                       +-> TValue(type=lua_closure)
                                                              |
                                                              +-> PC50 LClosure*(Proto20)
```

**必须同时比较 UpVal 的身份和 TValue 中 Table 的身份。** 三个闭包的 `Table*` 相同不足以推断 UpVal 相同；也不能把不同 root 运行实例的相同堆地址放进一个组。Lua 5.4 标准语义复用同一开放栈槽上的 upvalue；最终仍要看游戏进程的真实对象布局。参考 [Lua 5.4 `lua_upvalueid` 手册](https://www.lua.org/manual/5.4/manual.html#lua_upvalueid) 和 [Lua `luaF_findupval` 源代码](https://www.lua.org/source/5.4/lfunc.c.html)。

## 4. 当前可直接运行的只读装载探针

仓库新增 [`scripts/SV400_Lua_R7_Load_ReadOnly.py`](../../scripts/SV400_Lua_R7_Load_ReadOnly.py)。

在有 Python 支持且能调试 guest AArch64 的 GDB 中，已附加**与本 ELF 指纹一致**的离线测试实例后：

```gdb
set $main = 0xACTUAL_RUNTIME_MAIN_BASE
source scripts/SV400_Lua_R7_Load_ReadOnly.py
continue
```

上面的 `ACTUAL_RUNTIME_MAIN_BASE` 是提示文字，必须换成真实运行实例 NSO 的基址，不能照抄。探针先读目标 `main+0xE37F70` 的 4 字节并校验 `CC000094`，错版拒绝设置；随后在该已核实 load 调用点观察 `x0=lua_State*`, `x1=buffer`, `x2=buffer-size`，仅对长度等于原版 `5,342,713` 字节的 chunk 计算完整 SHA-256 并比较 `main_dynamic.blua`。

探针输出 `R7_LUA_LOAD_ANCHOR_ONLY`，**不会**伪装成 `R13 UpVal*` 的实机读数。它不调用游戏写入 API，不主动改数据，但调试器断点本身可能暂时修改指令/调度时序，不宜在联网或重要存档上采集。

先决条件：`lua_State*` 只是某次装载对应的 Lua 状态；`main_dynamic` 还可能由不同装载调用点载入。本钩子未命中不能证明该脚本从未载入。

## 5. 尚待定位的 Native VM 断点

**本次没有凭字节码 PC 推出 Native `luaV_execute` 的 RVA，也没有把 `main+0xE382A0` 当作 VM dispatch。**

实际 R7 所需下一层：

1. 在实际装载中以完整 SHA 识别 `main_dynamic`，记录同一 `lua_State*`、线程及本次加载生命周期。
2. 静态反汇编加实机验证寻找 `luaV_execute` 或 `OP_CLOSURE` 分派（Native 代码位置，未闭合）；通过原生指令、控制流、目标内存读数验证 `CallInfo` / `savedpc` / `LClosure` / `Proto` / `UpVal` 偏移。
3. **以 root Proto 指纹过滤**后，分别记录 PC48、PC49、PC50；每项读取创建出的 `LClosure*`、UpVal 第二槽地址、其值类型/地址及打开或关闭状态。
4. 在 **相同 root 激活实例**的 PC12242 核验 Proto752 闭包中的第二个 UpValue 指向 R16 单元；该单元的 `TValue` 必须指向 PC50 的 **同一个** Proto20 `LClosure*`。
5. 实际进入 `Proto752` 时核对其 `LClosure*` 与 PC12242 创建对象一致，随后另行采集返回、异常、C API 与表写入，再考虑完整 mainBody A/B。

若在闭包创建指令之前/之后设置断点，`savedpc` 可能已经指向下一条指令，必须明确校准 `savedpc-next` 或 `dispatch-current`，防止整段 PC 偏移 1。源代码 `pc` 与实际 `Instruction*` 的对应关系以同一个执行帧为准。

## 6. R7 证据 JSON 协议（离线验收）

新增 [`sv_lua54/r7.py`](../../tools/SV.Lua54/src/sv_lua54/r7.py) 与 [`Verify-SV-Lua54-R7-Runtime.py`](../../scripts/Verify-SV-Lua54-R7-Runtime.py)，可对安全脱敏、来自**同一调用实例**的真实调试事件做一致性检测。

最低报告头：

```json
{
  "schema_version": 1,
  "source": "gdb-readonly",
  "capture_mode": "READ_ONLY",
  "session_id": "unique-offline-session",
  "elf_sha256": "d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0",
  "build_id": "709bfd66115298640155fcc4979dba151c7cc79a",
  "main_dynamic_sha256": "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572",
  "main_base": "0x7100000000",
  "vm_dispatch_pc": "0x7101234560",
  "pc_mapping": "savedpc-next",
  "events": []
}
```

**上面的地址只用于说明结构，不是游戏真实地址**，`events=[]` 也明确表示没有实机 Upvalue 证据。不可把空模板填写虚假地址后标记为验收完成。

每条创建事件需有 `seq`、`kind="closure"`、`pc`、`parent_proto=0`、`proto`、`source_reg`、`instruction_word`、`upvalue_slot=1`、`closure`、`upvalue`、`value`、`value_type`、`upvalue_state`、`lua_state`、`root_frame`、`root_activation_id`。`enter`/可选 `return` 同样记录 `proto=752`、`closure` 和源调用实例。

### 运行命令

```bash
# 仅生成原版 BLUA 的期待指令，不提供任何运行时证据
python scripts/Verify-SV-Lua54-R7-Runtime.py --report r7-static.json

# 对实际收集的同一执行实例 JSON 作一致性验收
python scripts/Verify-SV-Lua54-R7-Runtime.py --trace r7-live.json --report r7-evaluation.json
```

验收器排除：不同 `UpVal*` 却仅有同一 Table、不同 Table、错误原生 PC 字、交叉 root activation、错误版本 ELF/BLUA、PC12242 引用另一 Proto20 closure、完全没有 mainBody 调用等。合成日志可以用于回归，但**没有任何上传的真实 R7 调试事件**。

输出的最高状态是 `TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED`；必须另由实际 guest 命中日志、运行环境、指令指纹和读数相互佐证才能提高证据等级。这个脚本不提供“用户填一个 JSON 就算实机验证成功”的捷径。

## 7. 本轮完成与阻塞项

| 验收 | 状态 |
| --- | --- |
| ELF SHA/Build ID、Native BL 原指令与跳转目标 | `STATIC_VERIFIED` |
| BLUA root PC48/49/50/12242、子 Proto、UpVal 捕获描述符 | `STATIC_VERIFIED` |
| 合成 UpVal 身份冲突测试与伪阳性阻断 | `SYNTHETIC_TESTED` |
| GDB 装载观察脚本 | `IMPLEMENTED_NOT_EXECUTED_IN_GUEST` |
| 实际 `lua_State*` / root CallInfo / savedpc 校准 | `NOT_OBSERVED` |
| 实际三个 `UpVal*` 同一指针 / `Table*` 同一指针 | `NOT_OBSERVED` |
| PC12242 捕获 R16、Proto752 真正进入 | `NOT_OBSERVED` |
| 完整 Proto752 运行时行为 A/B | `NOT_VERIFIED` |

下一步优先级：**Native OP_CLOSURE 指令分派定位 + 同一 root 实例的四处运行时读数**。没有这些，不能将 `mainBody` 的 Lua/Haxe 语义认定为运行时等价。

关联：[[sv-lua54-r5-mainbody-haxe-runtime-captures]] · [[sv-lua54-r6-metatable-newindex-alias]] · [[sv-lua54-source-reconstruction-roadmap]]。
