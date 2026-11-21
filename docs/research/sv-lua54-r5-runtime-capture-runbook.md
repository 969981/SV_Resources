---
aliases: [SV Lua R5 真实 VM 捕获手册, GemSettingManager Setup root 创建顺序]
tags: [pokemon-sv, lua54, gdb, ryujinx, closure, upvalue, runtime, obsidian]
status: STATIC_VERIFIED_LOCAL_CAPTURE_READY_NOT_GAME_OBSERVED
game_version: "Violet 4.0.0"
updated: "2026-11-09"
pr: "https://github.com/969981/SV_Resources/pull/86"
---

# SLR R5 — root PC215522 / 215523 到 Setup CALL 的只读取样流程

> [!warning] 状态边界
> GitHub Actions 只验证固定来源 ELF 和 BLUA、静态寄存器链、合成堆内存和 GDB 假客户端。当前没有真正的 SV 4.0.0 游戏进程可供本会话连接。R55、R58、真实 Setup Closure、UpVal 指针、PC7/47 返回对象和 PC11/32/83 Callable 都仍然是 NOT_OBSERVED；不得把 CI PASS 或 JSON 一致性说成游戏已经运行或行为等价。

## 1. root 捕获前后的准确 Lua 寄存器

原版 main.blua SHA256：c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815。来自真实 BLUA 的静态解析：

| root Lua PC | 原生 Lua 操作码 | 寄存器身份 |
| --- | --- | --- |
| 215522 | CLOSURE | 新建 Setup Closure 输出到 R70 |
| 215523 | SETTABLE | 把前一步的 R70 当成右侧值，写入类方法字段 |

在 215522 对应的原生 CLOSURE Handler main+0x453FC 进入时，Root 栈 R55 / R58 位置由原始 ARM64 计算关系分别为 X26+0x370、X26+0x3A0。此时还没有构建完新的子 Closure，不能报告子 UpVal cell。

在紧接的 215523 原生 SETTABLE Handler main+0x41B9C 时，R70 才是新 Closure 的 TValue。必须验证前一条指令是 CLOSURE A70、当前是 SETTABLE C70 且 k0，并从 R70 读 LClosure.p → Proto.code 的完整 1056 字节哈希，对上原版 Setup Proto17900 SHA256：9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1。

随后读取新 Closure+0x28 的 UpVal slot1 与 Closure+0x30 的 UpVal slot2；通过 UpVal+0x10 的 v TValue 指针分别对照 root R58 和 R55 的真实栈地址。只有两个指针关系通过才能说“此次运行的两个捕获单元对应 root R58/R55”；仅数值相等不证明共享单元。

## 2. Ryujinx watchpoint 实际限制

GDB Python 支持读取 watchpoint（远程协议 Z3），但是 Ryujinx 系列 GDB Quickstart 明确提醒其 GDB Stub 仍缺少 watchpoint 等功能。因此：

- Watch-SV400-Lua54-OpcodeReads-GDB.py 是仅供其他确实支持 Z3 的调试环境使用的可选实验；不能当成 Ryujinx 已实测可用功能。
- Filter-SV400-Lua54-HandlerHits-GDB.py 是在 Ryujinx 使用已审计的 AArch64 原生 Handler 硬件断点（Z1）做有限次数宿主端过滤的替代。每次比较 X27 与 W20，必须同时满足精确 Proto.code+Lua PC、原始完整 32-bit Opcode 字和对应 Handler。默认最多 250 次，显式最大 50,000 次；每次错误断点都将往返 GDB，可能极慢。到达上限就停止，不无限重复。
- 即便读 watchpoint 或过滤器发现候选命中，也还必须在 Handler 的第一条 ARM64 指令处调用 sv400-vm-opcode，对本次进程的真实完整 Proto code、X27、W20、CallInfo/Closure/线程状态重新确认。没有确认时不能记录为 VM 执行事件。

## 3. 本地原版与调试环境准备

必须拥有游戏运行中的正确 Violet 4.0.0 ELF、BLUA；实际 WSL2/Windows 的 guest main 基址必须由该次游戏进程核对，不能从之前的会话复制或猜测。

在仓库根目录的 WSL2 shell 执行：

    mkdir -p _work
    export SV400_VIOLET_ELF="$PWD/Unpack/4.0.0/exefs/violet_main/violet_main.elf"
    export SV400_MAIN_BASE="$VERIFIED_GUEST_MAIN_BASE"
    export SV400_GDB_PREFLIGHT_SCRIPT="$PWD/scripts/Probe-SV400-LuaVM-GDB.py"
    export SV400_FRAME_HELPER="$PWD/scripts/Inspect-SV400-Lua54-LiveFrame.py"
    export SV400_FRAME_IDENTITIES_JSON="$PWD/_work/slr-violet-original-frame-identities.json"
    export SV400_OPCODE_CONTEXT_HELPER="$PWD/scripts/Inspect-SV400-Lua54-OpcodeContext.py"
    export SV400_CLOSURE_CAPTURE_HELPER="$PWD/scripts/Inspect-SV400-Lua54-ClosureCapture.py"
    export SV400_READ_WATCH_HELPER="$PWD/scripts/Watch-SV400-Lua54-OpcodeReads-GDB.py"
    export SV400_AUDITED_NATIVE_RVAS="0x453fc,0x41b9c,0x4487c,0x41d14"
    export SV400_VM_TRACE_JSONL="$PWD/_work/sv400-live-opcode-events.jsonl"

生成源于固定原版 main.blua 的 root/Setup 代码 SHA 及长度清单：

    python scripts/Inspect-SV400-Lua54-LiveFrame.py Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua --expected-sha256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 --output "$SV400_FRAME_IDENTITIES_JSON"

生成 root R70→SETTABLE C70 的静态对账：

    python scripts/Analyze-SV400-Setup-ClosureBridge.py Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua --output _work/slr-violet-root-closure-register-bridge.json

## 4. GDB 只读受控取样，Ryujinx 兼容候选路径

以真实运行中已启用调试 Stub 的 Ryujinx 为例，在 WSL2 gdb-multiarch 内：

    set architecture aarch64
    target remote ACTUAL_HOST_IP:ACTUAL_PORT
    source -s python scripts/Probe-SV400-LuaVM-GDB.py
    source -s python scripts/Inspect-SV400-Lua54-GDB.py
    source -s python scripts/Filter-SV400-Lua54-HandlerHits-GDB.py
    sv400-native-preflight
    sv400-native-arm 0x41150
    continue
    sv400-vm-frame

若确实停在原版 root 活动帧、且尚未越过 Lua PC215522：

    sv400-native-disarm
    sv400-filter-arm root 215522 250
    continue

只有出现 NATIVE_HANDLER_X27_W20_MATCH_REQUIRES_FULL_PROTO_SHA 时才允许：

    sv400-vm-opcode
    sv400-filter-disarm

记录 R55/R58 捕获前的值。如 capped、代码指纹不符、其他 Proto 或任何访问失败，都应明确停止，不把记录升级为成功。

当前 root 代码的下一条指令 PC215523 在 R70 持有新 Closure。可在上一步确认成功后立即布单次 SETTABLE Handler 硬件断点：

    sv400-native-arm 0x41b9c
    continue
    sv400-vm-opcode
    sv400-native-disarm

必须证明新命中仍是 root 215523，而非另一个线程或 Proto 的 SETTABLE。正确时输出 after_closure_setup_and_upval_cells：新 Setup Closure 匿名 ID、三 UpVal 槽单元匿名 ID、slot1.v → root R58 和 slot2.v → root R55 的实际链接验证。

对于 Setup 的 Lua PC7、8、11、32、47、48、83，先在该次游戏中获得原始 Setup Proto.code 完整匹配、尚未越过对应目标 PC 的活动帧，再用相同有限过滤器对 CALL / SETI Handler 采样。PC7/47 为工厂调用前，PC8/48 为下一指令中可读的函数返回值；PC11/32/83 为实际 Lua Callable 与必要时的 SELF 接收者。一个原生 Handler 会被许多 Lua 函数共用，不应看到 Native CALL 断点命中就说 Setup 目标已经调用。

## 5. 可持久保存的匿名事件与审计

SV400_VM_TRACE_JSONL 控制本地 _work JSONL 文件输出。由用户主动执行的 sv400-vm-opcode 将记录单次序列号、会话 ID、线程号、root 活动帧 HMAC 身份、子 Setup Closure HMAC 身份、Factory 返回值和 CALL 接收者对象 HMAC 身份。默认不输出原始 guest 堆地址。

    python scripts/Validate-SV400-Lua54-LiveCapture.py --events "$SV400_VM_TRACE_JSONL" --output _work/slr-violet-vm-session-audit.json

审计先检查同一会话内 root PC215522→PC215523 的顺序与 root 帧身份；再检查 root 捕获前后 TValue 是否一致、child slot1/2 的 UpVal.v 是否绑定 R58/R55；最后对账 Setup 同一 Closure 实例及 PC8→11、PC48→83 的工厂返回对象是否等于被调方法 receiver，并记录 PC11/32/83 是否确实读到函数 TValue。

这个校验器只检查用户提交的脱敏日志是否自洽，不保证日志确实来自游戏 GDB，不解析所有被调 CClosure 的本机 RVA，也不证明 Lua 源码/游戏行为等价。全部仍要留在 NOT_OBSERVED，直到真正的游戏 GDB 回传经过验收的日志。

## 6. 当前交付与剩余关口

已经准备：
- scripts/Watch-SV400-Lua54-OpcodeReads-GDB.py：兼容目标的可选原始 Lua 4 字节硬件读观察点。
- scripts/Filter-SV400-Lua54-HandlerHits-GDB.py：有次数上限的 Native Handler X27/W20 过滤退路。
- scripts/Analyze-SV400-Setup-ClosureBridge.py：原始 PC215522 CLOSURE R70→215523 SETTABLE R70 静态对账。
- scripts/Inspect-SV400-Lua54-ClosureCapture.py：PC215523 验证 R70 新 Closure 与 root R55/R58 UpVal.v 实际指针身份。
- scripts/Validate-SV400-Lua54-LiveCapture.py：按 root→child Setup→工厂→方法调用的事件顺序、UpVal 共享与返回对象身份进行 JSONL 一致性检查。
- 所有独立模块均在 GitHub Actions 中使用人工数据做成功/错误/地址/身份负例测试。

未完成：实际 SV 游戏进程连接、真正运行的 root215522/215523 一次完整闭合、同一 Setup 的七个 PC 实时调用对象与 C/Lua 函数归属、游戏行为 A/B。不能从任何一项 CI PASS 推断这些项目已完成。

关联：[[sv-lua54-r4-handler-pc-upval-abi]]、[[sv-lua54-r4-liveframe-identity-gate]]、[[sv-lua54-r3-runtime-identity-probes]]。
