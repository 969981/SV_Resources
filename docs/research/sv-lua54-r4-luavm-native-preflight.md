---
aliases: [SV 4.0.0 Lua VM 原生入口与实机捕获预检, SLR R4 真实运行时入口]
tags: [pokemon-sv, lua54, gdb, arm64, ryujinx, vm, upvalue, runtime, obsidian]
status: VERIFIED_STATIC_ELF_NO_GAME_VM_RUNTIME_TRACE
game_version: "Violet 4.0.0"
date: "2026-11-09"
pr: "https://github.com/969981/SV_Resources/pull/86"
---

# SLR R4 — 从 ELF 到可执行的 GDB 原生预检，仍需实际 Lua VM 入口

> [!warning] 当前验收边界
> 已实际扫描原生 Violet 4.0.0 ELF、建立 ARM64 字符串引用候选、提供带 ELF 字节核对和硬件断点的 GDB 客户端脚本。GitHub Actions **没有启动 Switch / Ryujinx 中的 SV 游戏进程**，没有连接到 Lua VM，也没有采集 PC7 / 47 / 11 / 32 / 83 或 root PC215522 对应的执行事件。不得将 GDB 客户端自测当作原版游戏运行测试。

## 1. 原生 ELF 来源与硬性版本绑定

- 原始 NSO：4.0.0/0/violet_main；SHA-256：f05bd7fedaf6f0ba1481005cb48b1e43067966aa12c28e6932eab9e7bc5750a4。
- NSO Build ID（provenance）：709bfd66115298640155fcc4979dba151c7cc79a000000000000000000000000。
- 转换后 ELF：Unpack/4.0.0/exefs/violet_main/violet_main.elf。
- ELF SHA-256：84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30。
- 原始 Lua 主包 main.blua SHA-256：c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815。
- ELF 有 3 个 PT_LOAD；代码段原始 ELF Vaddr 自 0 开始，GDB guest main 基址需由该次运行实际确定。

## 2. 实测 ELF 标记及 ARM64 候选引用

| 原生证据 | ELF Vaddr/RVA | 结果 |
| --- | --- | --- |
| .blua 文本锚点 | 0x3B36536 | ELF 内精确存在；当前 ADRP+ADD 扫描未发现直接引用 |
| Lua 5.4 文本锚点 | 0x3B74BEE | ELF 内精确存在 |
| Lua 5.4 字符串 ADRP | main+0x458A4 | 一处 PC 相对静态引用候选 |
| 对应 ADD | main+0x458A8 | 形成字符串地址 |
| 附近 BL 1 | main+0x458B0 → main+0xB85BD0 | 仅附近调用，语义/身份未核对 |
| 附近 BL 2 | main+0x458C4 → main+0xDFAFB0 | 仅附近调用，语义/身份未核对 |
| readelf 外露 luaV_execute 等符号 | 无 | 没有符号 **不代表** 运行时代码不存在 |
| 真实 VM dispatch | 未确定 | 不得作为现有可用断点 |
| lua_State/TValue/CallInfo/Closure/Proto 结构偏移 | 未确定 | 不得根据上游 Lua5.4 默认 ABI 在游戏上擅自读取 |

上面的 xref 算法只识别 **ADRP Rn, page + 同一 Rn 的 ADD #offset**，不是完整反汇编或数据流证明；不识别所有间接地址引用。Lua 版本字符串的 xref **不能**直接当 luaV_execute。

静态工具：
- scripts/Audit-SV400-LuaVM-ELF.py
- scripts/Locate-SV400-LuaVM-Xrefs.py

## 3. 可在用户已有的 WSL2 GDB 环境执行的原生预检

已添加 scripts/Probe-SV400-LuaVM-GDB.py。它不是 Game Freak Lua VM Hook，也不依赖未验证的 lua_State 偏移。作用是先验证 Ryujinx GDB 当前 guest main 内的原版代码与 ELF 相同，然后仅在明确允许的原生 RVA 下硬件断点，读取 ARM64 CPU 寄存器。

准备好拥有该游戏的本地 Windows Ryujinx、已开启的 GDB Stub、WSL2 gdb-multiarch 与原始 ELF。终端示例：

~~~bash
cd /path/to/SV_Resources
export SV400_VIOLET_ELF="$PWD/Unpack/4.0.0/exefs/violet_main/violet_main.elf"

# 必须在当前 GDB session 中核对的真实 guest main 映射基址！
# 下面只展示变量形式，故意不提供猜测值。
export SV400_MAIN_BASE="$VERIFIED_GUEST_MAIN_BASE"

mkdir -p _work
export SV400_NATIVE_TRACE_JSONL="$PWD/_work/sv400-native-gdb.jsonl"
gdb-multiarch -q
~~~

GDB 提示符：

~~~gdb
set architecture aarch64
target remote 172.29.48.1:6543
source -s python scripts/Probe-SV400-LuaVM-GDB.py
sv400-native-preflight
sv400-native-arm 0x458a4
continue
# 如果命中，记录 CPU 寄存器，GDB 保持暂停供人工核对。
sv400-native-disarm
~~~

这里远程 IP/端口是用户此前使用的 Ryujinx/WSL2 调试配置示例；若当前网络接口、Stub 端口或会话发生变化，以当前实际配置为准。**即使硬件断点命中，也只得到 Native CPU 级事件，不是 VM Opcode、Lua PC 或 R55/R58 的值。**

预检严格要求：

- ELF 文件 SHA 与仓库 provenance 一致。
- 从显式配置的 guest main 基址读取 main+0x1000 与 main+0x458A4 的原版 16 字节，全部与 ELF 可执行 PT_LOAD 匹配；错误版本、错误 main_base 或运行时补丁导致不匹配时 **拒绝布点**。
- 默认只允许 main+0x458A4；其他新 RVA 必须经过静态反汇编核对后，手工加入环境变量 SV400_AUDITED_NATIVE_RVAS。
- 仅使用硬件断点（不自动退化成软件改写代码断点）；远程 GDB Stub 若不支持就明确失败。
- 默认只将事件打印在 GDB；配置 SV400_NATIVE_TRACE_JSONL 才保存到用户本地 _work 目录。
- GDB 事件中的 runtime_lua_proto_pc、runtime_closure_id、runtime_upvalue_cells 均保持 null，**不能被提交到 R3 的真实 VM event validator 当作已验证样本**。

## 4. 在真正的 SV Lua VM 上采集需要满足的条件

只有经过逆向确定以下身份，才能将 R3 原生 PC 契约映射到 VM：

1. 从游戏动态 loader / pcall 入口追踪到**真实 Lua 5.4 opcode dispatch** 的 ARM64 函数或循环入口（要区分一次函数入口与每条 VM 指令分派）。
2. 通过原版运行时调试确认 lua_State、CallInfo、LClosure、Proto、TValue、UpVal 的具体布局、指针范围与载入时序；不能直接假设 Windows Lua5.4 结构与 NSO 的编译选项相同。
3. 读取当前 Closure 的 Proto->code 内容指纹，与已固定的 Setup Proto17900 指令 SHA-256 9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1 匹配，再验证 VM savedpc 或指令指针如何映射到从 0 开始的 Lua PC。
4. 先在 root 的 Lua PC215522，记录该 root activation 下 Closure 创建前/后的 parent R55/R58 实际 TValue 类型和值身份、UpVal slot 1/2 的 cell 身份；root Upval0 的 _ENV 亦需验证。
5. 在 Setup Lua PC7/47 记录新建对象的实际类型、元表及返回值身份，再在 PC11/32/83 执行前验证 R[A] 的实际 callable、receiver、field lookup、callee Lua Proto hash 或 C 函数模块/RVA。
6. 所有事件必须保持相同 root_activation_id、Closure instance 和可复验的固定 Proto 指纹；经脱敏后用 R3 tools/SV.Lua54/src/sv_lua54/runtime_probes.py 的 --events 验证事件一致性。
7. R3 JSON 一致性检查**不能认证日志来自游戏**，还需要该次 GDB/VM Hook 来源、游戏版本、目标进程、原始调用时序及独立 A/B。

## 5. 当前验收声明

可实现/完成的部分：固定原版 ELF，验证 ELF 版本标记，搜索 ADRP+ADD 的原生字符串引用，提供本地 GDB 附加时的地址/代码指纹门禁，输出可供人工审查的 Native CPU 事件。

尚未完成：VM 真正 native dispatch RVA、TValue/Closure/UpVal 结构和实际游戏环境中的 PC7/47/11/32/83、root PC215522 采样。**不得宣称三处方法的实际 Lua/C 被调目标、工厂返回对象身份或 R55/R58 真实值已找到。**

关联：[[sv-lua54-r3-runtime-identity-probes]] · [[sv-lua54-r2-dataflow-upvalue]]。
