---
aliases: [SV 4.0.0 Lua VM OP_CLOSURE Native Dispatch R7]
tags: [pokemon-sv, violet, lua54, haxe, arm64, gdb, closure, upvalue, obsidian]
status: ELF_NATIVE_DISPATCH_STATIC_VERIFIED_LIVE_OBJECTS_NOT_OBSERVED
game_version: "4.0.0"
updated: "2026-11-09"
issues: [73, 76, 81, 84]
---

# R7 Native 深追踪 — luaV_execute 分派、OP_CLOSURE、CallInfo.savedpc、UpVal.v

> [!important] 版本与证据边界
> 本研究实际读取 Library 的《宝可梦 紫》4.0.0 `Violet4.0.0.elf`，**SHA256 `d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0`**，Build ID `709BFD66115298640155FCC4979DBA151C7CC79A`，74,362,480 字节。以 `readelf`、LLVM AArch64 反汇编及逐条 32 位 machine word 校验本研究地址。
> **已真正定位 Native opcode 79 的分派入口，但没有连接游戏进程，也没有实机 UpVal*/Table* 读数。** 本文出现的 GDB 参数是取证方案，不是已执行的动作。

## 1. 解决了 R7 上一阶段的具体阻塞

Lua 5.4 的 `CLOSURE` 是第 **79** 号操作码（`OPNAMES[79]`）。本 ELF 中的 VM 执行入口符合 `luaV_execute` 指令执行逻辑：

```asm
main+0x41150  SUB SP,SP,#0xE0       ; 执行器函数入口
main+0x411A4  LDR X8,[X25]         ; CallInfo.func -> TValue*
main+0x411A8  LDR X9,[X8]          ; 当前函数 LClosure*
main+0x411B0  LDR X9,[X9,#0x18]    ; 当前函数 Proto*
main+0x411B4  LDR X10,[X9,#0x38]   ; Proto.code
main+0x411C0  LDR X27,[X25,#0x20]! ; CallInfo.savedpc
main+0x411CC  LDR W20,[X27],#4     ; 读取当前 Lua instruction，X27 指向下一条
main+0x411D0  ADD X26,X8,#0x10     ; root register base = ci.func + sizeof(TValue)
main+0x411E4  AND W8,W20,#0x7F     ; opcode = instruction & 127
main+0x411EC  LDR X8,[X24,W8,UXTW #3]
main+0x411F0  BR X8               ; tail dispatch
```

VM 入口附近 `X24` 由 `ADRP+ADD` 装载 `main+0x4383398` 的指针分派表。

**ELF relocation 直接证明：**

| 项目 | 原生值 |
| --- | --- |
| 分派表起始 | `main+0x4383398` |
| 79 号表项地址 | `0x4383398 + 79×8 = 0x4383610` |
| ELF 重定位类型 | `R_AARCH64_RELATIVE (0x403)` |
| 重定位 addend | `0x453FC` |
| 目标 handler | **`main+0x453FC`** |

原始文件中表项的 8 字节可能为零，是因为该条目在加载时通过相对重定位完成初始化；**不要因为磁盘字节是 0 就声称 VM 没有分派函数。**

## 2. OP_CLOSURE 的核心反汇编、寄存器和伪代码

```asm
main+0x453FC LDR X8,[SP,#0x10]         ; 当前父级 LClosure*
main+0x45400 LSR W9,W20,#15           ; 指令 Bx = word >> 15
main+0x4540C LDR X8,[X8,#0x18]        ; 父 Proto*
main+0x45410 LDR X8,[X8,#0x48]        ; Proto.p 子原型数组
main+0x45414 LDR X20,[X8,W9,UXTW#3]   ; child Proto*
main+0x45418 LDR X8,[SP,#0x28]        ; 指向 CallInfo.savedpc 槽
main+0x4541C STR X27,[X8]            ; 保存已推进的下一条 Lua PC
main+0x45430 LDR W23,[X20,#0x10]     ; child.sizeupvalues
main+0x45434 LDR X25,[X20,#0x50]     ; child.upvalues 描述符数组
main+0x4543C BL 0x29640              ; luaF_newLclosure 候选
main+0x45448 STR X20,[X0,#0x18]      ; 新 LClosure.p = child Proto*
main+0x4544C STR X0,[X22]           ; R[A].value = LClosure*
main+0x45450 STRB W8,[X22,#0x8]      ; R[A].tt = 0x46
main+0x45478 LDURB W9,[X25,#-1]     ; Upvaldesc.instack
main+0x4547C LDRB W8,[X25]          ; Upvaldesc.idx
main+0x45480 CBZ W9,0x454A4         ; instack=0 则继承父 UpVal
main+0x45488 ADD X1,X26,X8,LSL#4    ; parent base + 16×idx
main+0x4548C BL 0x29760             ; luaF_findupval(L, source_slot)
main+0x45494 STR X0,[X20]           ; child.closure.upvals[i] = UpVal*
main+0x454AC LDR X2,[X8,#0x20]      ; 读取父闭包对应 UpVal*
main+0x454B0 STR X2,[X20]           ; instack=0：传递父 UpVal 单元
main+0x454D8 LDUR X20,[X29,#-0x18]  ; Upvalue 循环结束后的检查位置
```

`main+0x454D8` 是计划中的创建完成观察点；只能在原始 PC 识别后读取对应对象，不能不加过滤地将所有命中都当作 root。

子原型 Upvalue 描述符的原生记录为 16 字节项，`instack` 和 `idx` 由上述相邻字节提取。针对 root PC48/49/50：

```cpp
UpVal* uv = luaF_findupval(L, root_base + 13 * 16);
```

PC12242 对应：

```cpp
UpVal* uv = luaF_findupval(L, root_base + 16 * 16);
```

这两种 UpVal 来自不同的父寄存器单元。

## 3. luaF_findupval 的对象复用证据

```asm
main+0x29774 LDR X8,[X21,#0x38]!  ; Lua State 的 open UpVal 链表
main+0x29784 LDR X9,[X8,#0x10]    ; UpVal.v.p
main+0x29788 CMP X9,X20           ; 比较 UpVal 所指向 TValue 栈地址
main+0x29798 B.EQ 0x297F4        ; 相同目标地址则复用已有 UpVal*
...
main+0x297C0 BL 0x29FD0          ; 未找到：分配 UpVal
main+0x297CC STR X20,[X0,#0x10]  ; 新 UpVal.v.p = 目标 TValue*
main+0x297E4 STR X0,[X21]        ; 插入开放 Upvalue 链表
```

因此，**标准语义的共享 UpVal 复用规则已在本 ELF 原生代码里找到对应实现**。它仍然不代表实际三个 PC 已在某次实机执行中复用：实际对象指针仍需读取。

### 从哪几个 Native 偏移读

| 结构 | 原生字段及偏移 | 用途 |
| --- | --- | --- |
| `lua_State*` | `+0x10` top、`+0x20` CallInfo、`+0x38` open UpVal 链 | 运行状态 |
| `CallInfo*` | `+0x00` func，`+0x20` savedpc | 当前 Lua 帧 |
| `LClosure*` | `+0x18` Proto，`+0x20` UpVal[0]，`+0x28` UpVal[1] | 闭包对象 |
| `Proto*` | `+0x10` sizeupvalues，`+0x18` sizecode，`+0x38` code，`+0x48` p，`+0x50` upvalue descriptors | 子原型及指令 |
| `UpVal*` | `+0x10` v.p（指向 TValue），关闭时通常为 `UpVal+0x18` | 捕获变量单元 |
| `TValue*` | `+0x00` 对象值，`+0x08` 类型 Tag | 实际 Table / LClosure |

必须区分 **UpVal* 指针**、**UpVal.v.p 指向的 TValue 槽**和 **TValue.value 指向的 Table*/LClosure***。这三个地址不是同一类型。仅比较 Table 指针，不能证明 UpVal 单元共享。

## 4. 已与原版 BLUA 固定的四个 Lua PC

| root PC | 32 位 Lua 指令字 | child Proto | 父寄存器 |
| ---: | --- | ---: | --- |
| 48 | `0008874F` | 18 | R13 |
| 49 | `000907CF` | 19 | R13 |
| 50 | `0009884F` | 20 | R13 |
| 12242 | `01621C4F` | 752 | R16 |

判定当前 Lua 指令时，Native handler **入口**的 `X27` 已指向下一条原始 instruction：

```text
Proto.code = *(Proto* + 0x38)
CallInfo.savedpc = X27 (下一条)
native_current_pc = ((X27 - Proto.code) / 4) - 1
current_word = *(uint32_t*)(X27 - 4)
必须同时满足 current_word == W20 == 原版 PC 的指令字
```

同时检查 root 的 `Proto.sizecode == 91622` 与上表四个原生 word，避免另一个 Proto 恰好出现相同的 `OP_CLOSURE`。这仍是一组强指纹，不代替游戏 VM 内存对象的独立身份核对。

## 5. 新增的工具与实际执行方法

- [原版 ELF 指令和分派表重定位验证器](../../scripts/Verify-SV-Lua54-R7-NativeDispatch.py)
- [GDB 原生 OP_CLOSURE 只读观察器](../../scripts/SV400_Lua_R7_NativeClosure_ReadOnly.py)
- [GDB 文本日志转结构化 JSON](../../scripts/Build-SV-Lua54-R7-GdbTrace.py)
- [GDB 日志隔离逻辑](../../tools/SV.Lua54/src/sv_lua54/r7_log.py)
- [相关合成测试](../../tests/test_sv_lua54_r7_native.py)
- [R7 Native CI](../../.github/workflows/slr-r7-native-closure.yml)

### 本机静态验证原件

```bash
python scripts/Verify-SV-Lua54-R7-NativeDispatch.py \
  --elf /path/to/Violet4.0.0.elf \
  --report r7-native-static.json
```

程序要求原版 ELF 完整 SHA，校验关键 AArch64 指令原字、`OP_CLOSURE=79` 对应 `R_AARCH64_RELATIVE`、两个 BL 目标和字段偏移证据。不会对运行游戏作内存读取。此脚本在持有对应原件的本机使用；仓库 CI 不包含 Library 私有 ELF 原件。

### 在你自己的离线 Switch guest 上用 GDB 读取

要求已经成功以 AArch64 GDB 连接到**离线游戏进程**，并且已得到真实 NSO main 基址：

```gdb
set $main = 0xACTUAL_RUNTIME_MAIN_NSO_BASE
set logging file r7-gdb.log
set logging enabled on
source scripts/SV400_Lua_R7_NativeClosure_ReadOnly.py
continue
```

这里 `0xACTUAL_RUNTIME_MAIN_NSO_BASE` 仍是占位符，不是有效实机地址。若 ELF codeword 不一致，观察器拒绝安装断点。

本观察器：

1. 在 `main+0x453FC` 首先读取 `X21=L`, `X25=CallInfo`, `X27=savedpc-next`, `W20=原始 Lua 指令字`。
2. 用 root sizecode/四 PC 指纹过滤，只在同一次 root activation 的 PC48 开始关联后续事件。
3. 在 `main+0x454D8` 闭包构建后，从目标 TValue 取出新 `LClosure*`；读取 `UpVal[1]`、`UpVal.v.p`、Tag 和 Table*/LClosure*。
4. 记录真实 `PC48/49/50` 的 UpVal 身份及 `PC12242` 的 R16 值；仅在已经出现 PC12242 后启用 `main+0x41150` 的 VM-entry 观察器，以尝试捕获 Proto752。
5. 输出 `R7_SESSION`、`R7_EVENT`、`R7_DIAGNOSTIC` 单行 JSON；命中记录中标注 `READ_ONLY_GUEST_SAMPLED_NOT_INDEPENDENTLY_ATTESTED`，不能借助离线脚本伪称自动实机验收。

探针没有游戏内存写入函数，但软件断点本身通常会改变可执行内存并使线程暂停；不得用作完全无干扰的采样器，也不建议在联网或有重要存档的环境运行。

### 从真实日志形成 R7 检测报告

```bash
python scripts/Build-SV-Lua54-R7-GdbTrace.py \
  --log r7-gdb.log \
  --report r7-live.json

python scripts/Verify-SV-Lua54-R7-Runtime.py \
  --trace r7-live.json \
  --report r7-evaluation.json
```

如果日志中出现多个 root activation，转换器默认拒绝把它们拼在一起，需要通过 `--activation-id` 指定一个真实实例。若没有 `R7_EVENT`，输出永远不会成为真实指针验证。

## 6. 本轮验收表

| 技术问题 | 本轮状态 |
| --- | --- |
| Lua VM 跳转分派入口、79 号 handler RVA | `ELF_STATIC_VERIFIED` |
| 主 Lua 指令寄存器 / CallInfo.savedpc 指令位置 | `ELF_STATIC_VERIFIED` |
| luaF_newLclosure、luaF_findupval 的 BL 直接调用 | `ELF_STATIC_VERIFIED` |
| 开放 UpVal 地址比较、命中复用 / 未命中新建 | `ELF_STATIC_VERIFIED` |
| 四个 root PC / 2 号 Upvalue 的原版 BLUA 指纹 | `BLUA_STATIC_VERIFIED` |
| GDB 原生闭包取证工具 | `IMPLEMENTED_NOT_RUN_ON_GUEST` |
| 实际 PC48/49/50 同一 UpVal*、同一 Table* | `NOT_OBSERVED` |
| 实际 PC12242 捕获 R16 与 Proto20 对象身份 | `NOT_OBSERVED` |
| Proto752 进入 / 退出 / C API 副作用 | `NOT_OBSERVED` |
| 原版与重编译版完整 mainBody 行为 A/B | `NOT_VERIFIED` |

这次的新突破是 **Native VM 的真实第 79 号分派链与 UpVal 复用函数已经闭合到具体 ARM64 RVA**。下一次真正需要的是在运行进程里取得同一 root 执行实例的四组 `LClosure*/UpVal*/Table*` 指针及 Proto752 调用记录。

关联：[[sv-lua54-r7-runtime-upval-table-identity]] · [[sv-lua54-r6-metatable-newindex-alias]] · [[sv-lua54-r5-mainbody-haxe-runtime-captures]]。
