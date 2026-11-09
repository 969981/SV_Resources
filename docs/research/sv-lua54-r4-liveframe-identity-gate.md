---
aliases: [SV Lua VM 实时 Proto 身份验证门禁, SLR R4 live frame]
tags: [pokemon-sv, lua54, gdb, arm64, upvalue, obsidian]
status: STATIC_NATIVE_VM_AND_SYNTHETIC_LIVEFRAME_TESTED_NO_REAL_GAME_TRACE
date: "2026-11-09"
---

# SLR R4.1 — 从 ARM64 解释器入口到原始 Proto 全码指纹

> [!warning] 静态与运行时的区别
> 原生 Violet 4.0.0 ELF 的 83 路 Lua5.4 分派函数已经由指令字与 RELA 重定位静态验证。新工具仅能在用户本地已暂停的 GDB 会话中尝试验证帧指纹，CI 不连接 Switch/Ryujinx 游戏进程；实际游戏 Closure、UpVal、工厂返回对象、PC 执行仍为 NOT_OBSERVED。

## 原生事实

Violet ELF SHA256：84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30。

- 原生入口 main+0x41150：83 操作码分派，已经静态证明。
- 入口 X0 → lua_State 候选；X1 → CallInfo 候选。
- ci+0x0 → func TValue；其 GC 指针 → LClosure 候选；closure+0x18 → Proto 候选。
- ci+0x20 → savedpc 候选；Proto+0x40 → code* 目前仍是未实机验证的布局假设。
- Lua PC 是对应 Proto 中的四字节指令序号，不是原生 main RVA。savedpc 很可能指向下一条指令；不能不加校验地断言 PC。

## 已落实的代码

- scripts/Inspect-SV400-Lua54-LiveFrame.py：以原版 main.blua 全代码的 root Proto0/Setup Proto17900 长度和 SHA256 为严格白名单；解析原生候选指针链后读取完整代码（每个候选最多 8 MiB），完整指纹匹配才返回 ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH。
- scripts/Inspect-SV400-Lua54-GDB.py：用户显式运行 sv400-vm-frame 命令时验证当前 $pc 必须等于实际 guest main base+0x41150，核对 guest 原生代码字节，随后运行上述双 Proto 只读指纹校验。
- tests/test_sv400_luavm_liveframe.py：测试 root/Setup 两种完整指纹、savedpc 候选范围、错误代码、错误地址、短读取、不可信对象。
- tests/test_sv400_gdb_frame_command.py：拒绝诊断字符串 RVA main+0x458A4 的假 VM 入口，要求用户在 0x41150 停住后才调用检查器。
- .github/workflows/slr-r4-luavm-elf-preflight.yml：真实 main.blua 生成原生指纹清单，仅上传 JSON 元数据。无实时游戏进程。

## 用户本地复现

先在仓库根目录执行 Python：

    python scripts/Inspect-SV400-Lua54-LiveFrame.py Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua --expected-sha256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 --output slr-violet-original-frame-identities.json

在同一 WSL2 shell 中准备：

    export SV400_VIOLET_ELF="$PWD/Unpack/4.0.0/exefs/violet_main/violet_main.elf"
    export SV400_MAIN_BASE="$VERIFIED_GUEST_MAIN_BASE"
    export SV400_GDB_PREFLIGHT_SCRIPT="$PWD/scripts/Probe-SV400-LuaVM-GDB.py"
    export SV400_FRAME_HELPER="$PWD/scripts/Inspect-SV400-Lua54-LiveFrame.py"
    export SV400_FRAME_IDENTITIES_JSON="$PWD/slr-violet-original-frame-identities.json"

连接已有 Ryujinx GDB stub 后，GDB 内运行：

    set architecture aarch64
    target remote ACTUAL_HOST:ACTUAL_PORT
    source -s python scripts/Probe-SV400-LuaVM-GDB.py
    source -s python scripts/Inspect-SV400-Lua54-GDB.py
    sv400-native-preflight
    sv400-native-arm 0x41150
    continue
    sv400-vm-frame
    sv400-native-disarm

运行前必须确认游戏确为 Violet 4.0.0 和本次实际 guest main 地址。硬件断点未被支持则明确拒绝，绝不默认改写代码。解释器入口频率极高，按已有 GDB 探针的一次性断点逻辑暂停，无条件多点断入不安全。

## 结果限制

- 全码哈希相同，只能证明候选地址中的指令内容与已知 Proto 一致；仍需额外证明 Closure 实例属于正确模块激活，savedpc 当前指令是否已推进，以及实际 VM 状态结构的 ABI。
- 已通过代码指纹时，暂时最多输出 current/next 的双 PC 候选；不自动读取 UpVal 对象或虚构实例 ID。
- 用户目标 PC：root 215522；Setup 7、47、11、32、83。后续必须验证原生实际指令执行前后的 R55/R58、真实返回对象及 CALL 目标。
- 实机没有观测数据时全部标记 NOT_OBSERVED，语义等价 NOT_TESTED。

关联：[[sv-lua54-r4-luavm-native-preflight]]、[[sv-lua54-r3-runtime-identity-probes]]。
