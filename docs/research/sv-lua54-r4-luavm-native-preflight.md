---
aliases: [SV 4.0.0 Lua VM 原生入口与实机捕获预检, SLR R4 真实运行时入口]
tags: [pokemon-sv, lua54, gdb, arm64, ryujinx, vm, upvalue, runtime, obsidian]
status: VERIFIED_NATIVE_LUA54_83_WAY_DISPATCH_RUNTIME_NOT_OBSERVED
game_version: "Violet 4.0.0"
date: "2026-11-09"
pr: "https://github.com/969981/SV_Resources/pull/86"
---

# SLR R4 — 已从 ELF 静态锁定 Lua 5.4 原生 VM 分派函数，仍待游戏实机

> [!warning] 当前验收边界
> 已实际扫描 Violet 4.0.0 ELF，使用固定指令字与完整 ELF64 RELA 重定位表 **静态定位 main+0x41150 的 83 路 Lua 5.4 VM 操作码分派**，并提供严格版本指纹和硬件断点的 GDB 客户端脚本。GitHub Actions **没有启动 Switch / Ryujinx 中的 SV 游戏进程**，没有连接到 Lua VM，也没有采集 PC7 / 47 / 11 / 32 / 83 或 root PC215522 对应的执行事件。不得将 GDB 客户端自测当作原版游戏运行测试。

## 已完成的持续集成验证

- [Actions #42560195267](https://github.com/969981/SV_Resources/actions/runs/42560195267) 验证通过；共 **11 项合成测试**，其中 4 项 ELF 格式/字节映射、3 项 ARM64 ADRP+ADD/BL 解析、4 项 GDB preflight 门禁与错误地址拒绝。
- 真实 Violet ELF 原生 SHA、PT_LOAD 映射、静态字符串候选、AArch64 xref 分析均通过。
- **GDB 调试客户端只进行了纯函数/无目标端测试；没有连接任何 Ryujinx 或 Switch 游戏进程，所有 Lua VM 对象/Upvalue 运行数据仍是 NOT_OBSERVED。**

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
| Lua 5.4 字符串 ADRP | main+0x458A4 | **已降级为版本/诊断消息引用，不再作为 VM 入口候选** |
| 对应 ADD | main+0x458A8 | 形成字符串地址 |
| 附近 BL 1 | main+0x458B0 → main+0xB85BD0 | 仅附近调用，语义/身份未核对 |
| 附近 BL 2 | main+0x458C4 → main+0xDFAFB0 | 仅附近调用，语义/身份未核对 |
| readelf 外露 luaV_execute 等符号 | 无 | 没有符号 **不代表** 运行时代码不存在 |
| VM 原生指令分派（静态） | main+0x41150 | 83 个标准 Lua 5.4 opcode 对应 RELA 表项，10 处原始指令字校验 |
| lua_State / CallInfo / Closure / Proto 结构 | 部分静态访问关系已识别 | 仅是按原生指令提取的候选指针路径，**尚未经实机指纹验证** |

上面的 xref 算法只识别 **ADRP Rn, page + 同一 Rn 的 ADD #offset**，不是完整反汇编或数据流证明；不识别所有间接地址引用。Lua 版本字符串的 xref **不能**直接当 luaV_execute。

静态工具：
- scripts/Audit-SV400-LuaVM-ELF.py
- scripts/Locate-SV400-LuaVM-Xrefs.py

## 2.1 本轮核心突破：83 路真实 Lua 操作码静态分派

源 ELF 的 SHA-256 固定为 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30。使用 scripts/Verify-SV400-Lua54-NativeDispatch.py 同时验证：

- 原生函数入口：main+0x41150，原始函数序言 SUB SP,SP,#0xE0，保存 X19..X28。
- main+0x41184：MOV X25,X1；main+0x41188：MOV X21,X0。X0 为 lua_State*、X1 为 CallInfo* 的高度匹配候选，但仍要求运行时对象验证。
- main+0x411C0：LDR X27,[X10,#0x20]!，对应 CallInfo savedpc 的结构候选。
- main+0x411CC：LDR W20,[X27],#4，加载下一条 32 位 Lua 字节码指令并将指令指针加 4。
- main+0x411D4/0x411D8：LSR X8,X20,#7，按每个 TValue 16 字节的候选跨度计算寄存器 A。
- main+0x411E4：AND W8,W20,#0x7F，提取 7 位 Lua opcode。
- main+0x41190/0x41194：计算 0x4383398 的跳转表基址。
- main+0x411EC：LDR X8,[X24,W8,UXTW #3]，按 opcode * 8 取得 64 位处理地址。
- main+0x411F0：BR X8，跳到当前 opcode 处理块。

**磁盘 ELF 的 83 个表项全为 0，并非真实目标为 0。** ELF 的 SHT_RELA 中按顺序存在 **83 条 R_AARCH64_RELATIVE 重定位**，各自的 addend 为真实可执行 RVA；原生重定位 + 指令逐字节完整校验后，按 Lua 5.4 标准操作码序号还原：

| Lua opcode | 名称 | handler RVA |
| --- | --- | --- |
| 0 | MOVE | 0x4126C |
| 1 | LOADI | 0x412BC |
| 2 | LOADF | 0x4130C |
| 3 | LOADK | 0x4135C |
| 4 | LOADKX | 0x413B0 |
| 79 | CLOSURE | 0x453FC |
| 80 | VARARG | 0x45554 |
| 81 | VARARGPREP | 0x455B8 |
| 82 | EXTRAARG | 0x45628 |

每个 index 的全部 83 项保存在 CI artifact 的 slr-violet-luavm-verified-native-dispatch.json 中。此处可以断言 **原始 Violet ELF 内存在 Lua 5.4 风格的 83 路原生 opcode VM 分派函数**，其入口高置信对应 luaV_execute 的功能；但不包含游戏执行中的 L 指针、Lua PC 或实际 Opcode 行为记录，**不可标记为游戏 RUNTIME_VERIFIED**。

### 交叉核验：原生 Lua 错误处理函数簇

- 比较错误字符串在 main+0x26180 和 main+0x26194 引用，均 BL 到 main+0x25B90。
- C stack overflow 在 main+0x3AFE4 / 0x3B044 引用，也调用 main+0x25B90。
- main+0x41030 为读取 CallInfo savedpc[-1] 的独立 opcode 后处理分支结构，与主 VM 入口 0x41150 **不是同一个函数**；不能混淆 luaV_finishOp 与 luaV_execute。
- 前一轮 main+0x458A4 是 Lua 5.4 字符串引用所在的诊断构造函数，已从 GDB 允许的默认 Hook RVA 清单中移除。

### 可从原生指令确定的指针访问候选

入口 X1（保存至 X25）在原始 AArch64 代码中依次用于：ci.func = *(X1+0)；func TValue 中的 Closure 指针 = *(ci.func+0)；LClosure 中的 Proto 指针 = *(closure+0x18)；Proto.k = *(Proto+0x38)；ci.savedpc = *(X1+0x20)。脚本对以上访问只在现场代码指纹匹配后尝试读取，读取失败按 UNREADABLE 处理。Proto.code 指针位于 +0x40 目前**仍为布局假设**；只有读出 264*4 字节并 SHA-256 与 Setup Proto17900 的原始 code 哈希 9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1 精确匹配时，才输出有限的 SETUP_17900_RUNTIME_CODE_BYTES_MATCH 证据。即便匹配，也没有自动证明保存的指令指针、上层 Closure 激活、子 UpValue 单元、实参及实际执行分支。

## 2.2 首次完整映射：9 个原始 Lua PC → 4 个 AArch64 Handler

使用 **scripts/Map-SV400-Lua54-NativeTraceTargets.py** 同时读取固定 SHA 的真实 \`main.blua\` 和 \`slr-violet-luavm-verified-native-dispatch.json\`，逐条校验 Proto ID、Lua PC、Opcode 名称、原始指令字节偏移与 83 条 Native Handler 表的索引。产出 **slr-violet-lua-pc-native-handlers.json**。

| 代码来源 | Lua PC | Lua 5.4 指令 | Native Handler RVA | 采样目的 |
| --- | ---: | --- | --- | --- |
| root Proto 0 | 215522 | CLOSURE | 0x453FC | Setup 闭包创建前/后 UpValue 捕获 |
| root Proto 0 | 215523 | SETTABLE | 0x41B9C | 闭包写入 class.prototype.F 字段 |
| Setup Proto 17900 | 7 | CALL | 0x4487C | GemSettingFB.new(self[1]) 真实返回 |
| Setup Proto 17900 | 8 | SETI | 0x41D14 | R2 保存到 self[14] |
| Setup Proto 17900 | 11 | CALL | 0x4487C | self[14] 取得字段函数的真实被调对象 |
| Setup Proto 17900 | 32 | CALL | 0x4487C | 全局类表 S 字段的真实被调对象 |
| Setup Proto 17900 | 47 | CALL | 0x4487C | GemSettingStartWindow.new() 真实返回 |
| Setup Proto 17900 | 48 | SETI | 0x41D14 | R4 保存到 self[7] |
| Setup Proto 17900 | 83 | CALL | 0x4487C | self[7] 取得字段函数的真实被调对象 |

> [!warning] 关键理解
> 这里证明了**相同 Lua opcode 在 AArch64 原生解释器中执行哪个静态 Handler**，不是 9 个独立 Native Hook RVA。一个 Native CALL Handler 可能服务游戏内数百万处 Lua CALL。**不要无条件给这四个 Handler 全部设置高频 GDB 断点**：必须先在实际 VM 入口确认 CallInfo、Closure、Proto.code 原始指纹，再引入仅命中 root 或 Setup 的过滤条件。源文件 \`file_offset\` 也不是运行时 RVA。

[Actions #42566984991](https://github.com/969981/SV_Resources/actions/runs/42566984991) 已验证该表和完整 83 操作码静态指令/重定位映射。总 **26 项 Python 合成测试通过**（4 ELF、3 静态 xref、6 GDB preflight、4 opcode 形态、2 错误消息、4 RELA 测试、3 Lua PC 映射），无真实游戏进程。

源映射复现（只生成审计 JSON，不对游戏写入）：

~~~bash
python scripts/Verify-SV400-Lua54-NativeDispatch.py \
  Unpack/4.0.0/exefs/violet_main/violet_main.elf \
  --output slr-violet-luavm-verified-native-dispatch.json

python scripts/Map-SV400-Lua54-NativeTraceTargets.py \
  Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua \
  --dispatch-manifest slr-violet-luavm-verified-native-dispatch.json \
  --output slr-violet-lua-pc-native-handlers.json
~~~

## 2.3 实机首次命中之后的工作量

GDB \`sv400-native-arm 0x41150\` 默认使用**一次性硬件断点**。命中当下记录 X0/X1 原生参数，然后沿已审计的 \`ci.func\`、\`ci.savedpc\`、\`Closure\`、\`Proto\` 指针访问作只读候选采样。如果 \`Proto.code+0x40\` 这一尚未验证的偏移确实指向相同的代码，且整段 264 条指令 SHA-256 与 Setup 原始 Proto 17900 精确相同，则标记 \`SETUP_17900_RUNTIME_CODE_BYTES_MATCH\`；这仍不等于建立了完整 CallInfo 帧或实际执行路径。

**当前尚无一次真实 GDB hit**，所有实例对象 ID、R55/R58 UpVal cell 的真实身份和值、CALL 的 Lua/C 被调函数身份依旧为 \`NOT_OBSERVED\`。只有取得来自正在运行的游戏的这类证据，才能把 9 个静态采样点接入之前 R3 的 VM 事件契约，最后做行为 A/B。

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
sv400-native-arm 0x41150
continue
# 如果命中，记录 CPU 寄存器，GDB 保持暂停供人工核对。
sv400-native-disarm
~~~

这里远程 IP/端口是用户此前使用的 Ryujinx/WSL2 调试配置示例；若当前网络接口、Stub 端口或会话发生变化，以当前实际配置为准。**断点命中时可获取 native VM 入口的 X0/X1 及只读 CallInfo/Closure/Proto 指针路径候选；GDB 会在首个命中后自动禁用该高频硬件断点，避免持续停机。对真实 Lua PC、真实接收对象和 R55/R58 的值仍不作已验证断言。**

预检严格要求：

- ELF 文件 SHA 与仓库 provenance 一致。
- 从显式配置的 guest main 基址读取 main+0x1000 与 main+0x41150 的原版 16 字节，全部与 ELF 可执行 PT_LOAD 匹配；错误版本、错误 main_base 或运行时补丁导致不匹配时 **拒绝布点**。
- 默认只允许静态校验过的 main+0x41150；其他新 RVA 必须经过静态反汇编核对后，手工加入环境变量 SV400_AUDITED_NATIVE_RVAS。
- 仅使用硬件断点（不自动退化成软件改写代码断点）；远程 GDB Stub 若不支持就明确失败。
- 默认只将事件打印在 GDB；配置 SV400_NATIVE_TRACE_JSONL 才保存到用户本地 _work 目录。
- GDB 事件中的 runtime_lua_proto_pc、runtime_closure_id、runtime_upvalue_cells 仍保持 null，**不能被提交到 R3 的真实 VM event validator 当作已验证样本**。

## 4. 在真正的 SV Lua VM 上采集需要满足的条件

只有经过逆向确定以下身份，才能将 R3 原生 PC 契约映射到 VM：

1. 静态层面已找到原生 VM 入口 0x41150 及其 83 个分派 Handler；**实机仍需验证该 RVA 的实际执行、X0/X1 对象身份、代码映射和保存 PC 的时序**，才能称为运行时闭合。
2. 通过原版运行时调试确认 lua_State、CallInfo、LClosure、Proto、TValue、UpVal 的具体布局、指针范围与载入时序；不能直接假设 Windows Lua5.4 结构与 NSO 的编译选项相同。
3. 读取当前 Closure 的 Proto->code 内容指纹，与已固定的 Setup Proto17900 指令 SHA-256 9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1 匹配，再验证 VM savedpc 或指令指针如何映射到从 0 开始的 Lua PC。
4. 先在 root 的 Lua PC215522，记录该 root activation 下 Closure 创建前/后的 parent R55/R58 实际 TValue 类型和值身份、UpVal slot 1/2 的 cell 身份；root Upval0 的 _ENV 亦需验证。
5. 在 Setup Lua PC7/47 记录新建对象的实际类型、元表及返回值身份，再在 PC11/32/83 执行前验证 R[A] 的实际 callable、receiver、field lookup、callee Lua Proto hash 或 C 函数模块/RVA。
6. 所有事件必须保持相同 root_activation_id、Closure instance 和可复验的固定 Proto 指纹；经脱敏后用 R3 tools/SV.Lua54/src/sv_lua54/runtime_probes.py 的 --events 验证事件一致性。
7. R3 JSON 一致性检查**不能认证日志来自游戏**，还需要该次 GDB/VM Hook 来源、游戏版本、目标进程、原始调用时序及独立 A/B。

## 5. 当前验收声明

可实现/完成的部分：固定原版 ELF，验证所有 83 项 opcode RELA 重定位、十处原生指令和主 VM 入口；提供本地 GDB 附加时的地址/代码指纹门禁，以及发生真实命中后才会生成的 Native CPU / CallInfo 静态指针链候选事件。

尚未完成：主程序原生 dispatch RVA **静态上已确定为 0x41150**，但尚无实机命中；TValue/Closure/UpVal 运行时结构和实际游戏环境中的 PC7/47/11/32/83、root PC215522 采样仍缺少证据。**不得宣称三处方法的实际 Lua/C 被调目标、工厂返回对象身份或 R55/R58 真实值已找到。**

关联：[[sv-lua54-r3-runtime-identity-probes]] · [[sv-lua54-r2-dataflow-upvalue]]。
