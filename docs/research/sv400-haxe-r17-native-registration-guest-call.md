---
aliases: [SV400 R17 Native Binding, SV400 cE35B3EB3 f558733FC]
tags: [pokemon-sv, arm64, ghidra, cppbindings, lua54, memory-ssa, obsidian]
updated: "2026-11-10"
status: ELF_STATIC_REGISTRATION_VERIFIED_GUEST_NOT_OBSERVED
---

# SV 4.0.0 R17：cE35B3EB3 原生注册表、方法入口与 Lua ABI 差异

> [!success] 双原版 ELF 静态机器码验证已完成
> [原版 Capstone/ELF/重定位 Actions #42781289828](https://github.com/969981/SV_Resources/actions/runs/42781289828) **Success**。Scarlet/Violet 固定 SHA、原始 AArch64 代码、真实的 R_AARCH64_RELATIVE 字符串与可执行代码指针、两处方法包装器的寄存器读取模式均已验证。离线 guest 探针与负例测试 [Actions #42780968070](https://github.com/969981/SV_Resources/actions/runs/42780968070) **Success**，仅测试代码，未连接 guest。

> [!warning] 游戏运行时状态没有晋升
> 当前没有真实的 Lua child TValue、CClosure、CFunction 或游戏内 C++ 返回值。所有 ELF 地址都是静态证据，GDB 软件断点会影响 guest 时序。`runtime_status=NOT_OBSERVED`。

## 1. 原件身份与机器码入口

Scarlet main.elf SHA-256：`53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f`。

Violet main.elf SHA-256：`84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30`。

原版 ELF 两版本同一组可执行指令：

~~~asm
main+13FE21C ADRP X1, 0x3B04000
main+13FE220 ADD  X1, X1, #0xBCB  ; X1 指向 cE35B3EB3
main+13FE224 ADRP X2, 0x1600000
main+13FE228 ADD  X2, X2, #0x50   ; X2 = main+0x1600050
main+13FE22C MOV  W3, #1
main+13FE234 BL   main+0xE7D200
~~~

这是类名、回调入口、标志和直接调用的**真实寄存器传递**；`0xE7D200` 的具体 C++ 类型还要另行验证。回调 `main+0x1600050` 在 `0x1600088/0x160008C` 构建表指针 `X1=main+0x44B14E0`，在 `0x1600098` 调用 `main+0xDEB2F0`。

## 2. 原版方法表和可执行代码指针

从 `main+0x44B14E0` 开始有连续 16 字节记录（重定位字符串指针 8B + 可执行代码指针 8B）。其名称包含 `__gc`、`fF56461AF`、`fBD0145F6`、`fEACE829B` 等，与固定 [ZAScripts CE35B3EB3.hx](https://github.com/Reisyukaku/ZAScripts/blob/c7bc243ac4d28356dff9f06b6723330ea92247d5/tools/haxe-4.3.1/std/cppbindings/CE35B3EB3.hx) 相符。

| 表条目索引（从零） | 名称槽 RVA | 原始字符串 | 紧邻代码槽目标 |
|---:|---|---|---|
| 0 | 0x44B14E0 | `__gc` | `0xC46210` |
| 24 | 0x44B1660 | `f17FFCE38` | `0x21B5A30` |
| **25** | **0x44B1670** | **`f558733FC`** | **`0x1959E40`** |
| 26 | 0x44B1680 | `f31DE8D4E` | `0x21B5B50` |

另一表 `main+0x4426AC0` 同名 `f558733FC` 的代码指针是 `main+0x194E910`。**不能把两条方法记录合并为同一类型**。在当前类回调所加载的表中，确实存在 `0x1959E40` 这条原始代码指针，但还没有真实游戏进程中的 Lua 对象身份验证。

## 3. 原生 Lua 包装器更符合一个显式参数

`main+0x1959E40` 包装器已用原始 ARM64 word 检查下列指令：

~~~asm
main+1959E50 MOV W1, #1
main+1959E58 BL  main+0xB41A10
main+1959E6C MOV W1, #2
main+1959E70 MOV X2, XZR
main+1959E74 BL  main+0xB92DF0
...
main+1959EF8 BLR X8
main+1959F00 MOV W0, WZR
main+1959F0C RET
~~~

另一实现 `0x194E910` 也有索引 1、索引 2 和间接调用模式。它与 “self + 一个显式 Lua 参数，Lua CFunction 返回 0 个结果” **相容**。上游 `CE35B3EB3.f558733FC(interval:UInt, part_interval:UInt):Void` 却声明两个显式 UInt；原版 R15 `CALL A3 B3 C1` 仅传一个显式参数。此差异很可能来自上游绑定声明与原始 SV 包装器不一致，**并非已经验证完成的 C++ 参数签名**。`0xB41A10` 和 `0xB92DF0` 的身份、所有执行路径仍需反编译和实际 guest 验证。

## 4. Ghidra、离线 guest 和证据界限

[独立 Ghidra 12.2 双版本定点分析 #42779039230](https://github.com/969981/SV_Resources/actions/runs/42779039230) 已启动；[SV400BindingTrace.java](../../tools/ghidra/sv/SV400BindingTrace.java) 按原版指令指纹校验，尝试导出真实 Ghidra 所属函数和反编译 C。没有真实完成日志前，不能声称 Ghidra 反编译成功。

已提交的 [离线只读 GDB 探针](../../scripts/SV400_Lua_R17_ClassBinding_ReadOnly.py) 可观察类注册前的 X0/X1/X2/W3、运行时方法表的已重定位指针，以及 `main+0x1959E40` 被执行时的 X0-X4、LR、SP；**它不含 Lua child TValue 的真实关联，也未在 guest 执行过**。

在已连接的合法离线 AArch64 guest GDB 中：

~~~gdb
set $main = 0xACTUAL_LOADED_MAIN_NSO_BASE
set $r17_game = 1
set logging file r17-local-private-gdb.log
set logging enabled on
source scripts/SV400_Lua_R17_ClassBinding_ReadOnly.py
continue
~~~

`$r17_game=0` 表示 Scarlet，`1` 为 Violet。`$main` 是实际已验证进程的 NSO 基址，必须自行填写，不能使用示例字符串。指针日志仅在本地保存，避免公开上传。离线日志用 [Verify-SV-Lua-R17-GdbLog.py](../../scripts/Verify-SV-Lua-R17-GdbLog.py) 校验；空事件 `NO_GUEST_EVENTS`，自述事件一致也不能超过 `SELF_REPORTED_GDB_EVENTS_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED`。

**待证：**Lua VM CALL 时的 child TValue、CClosure/CFunction 指针、与 `0x1959E40` 的关联，以及 Ghidra 还原原生函数签名与实际 C++ 参数/返回值；跨 CALL 内存 SSA 继续保守处理。

当前 Haxe 基线没有改变：**83 条 Proto/PC、82 个已独立 Lua A/B 验收的 Haxe 方法体、357/357 测试用例**。游戏实机等价 `NOT_OBSERVED`。

关联：[[sv400-haxe-r16-native-cppbindings-memory-effects]] · [[sv400-haxe-r15-engine-call-cfg-ssa]] · [[sv-lua54-r7-native-opclosure-dispatch]]。
