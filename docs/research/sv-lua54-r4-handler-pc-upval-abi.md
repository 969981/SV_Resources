---
aliases: [SV Lua R4 原生 PC 与 UpVal 身份, SV400 VM ABI]
tags: [pokemon-sv, lua54, arm64, gdb, upvalue, obsidian]
status: STATIC_NATIVE_VERIFIED_GAME_RUNTIME_NOT_OBSERVED
date: "2026-11-09"
---
# R4.2：从原生 Opcode Handler 到 Lua PC、TValue 与 UpVal 单元

> [!warning] 验收边界
> 原版 Violet 4.0.0 的 AArch64 ELF 指令和 83 路 Lua VM 分派可静态复验。当前没有连接任何真实游戏进程；所有模拟 guest 内存和 GDB 测试均不能证明真实 R55、R58、PC7/47 返回对象、PC11/32/83 Callable 已实际观测。

## 原生代码和 PC 校准

固定 ELF SHA-256：84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30。

解释器函数入口 main+0x41150；main+0x411CC 原生 LDR W20,[X27],#4 读取 Lua 32-bit opcode 并增加 X27。仅在已经验证的 Native Handler 入口第一条机器指令位置，X27 才可解释为下一条 Lua opcode 的指针，W20 是当前指令。

需要同时满足以下条件才能确认当前 PC：
1. guest ELF 指令与原版 ELF 的相同 main+RVA 字节完全一致；
2. CallInfo.func → LClosure.p → Proto.code 完整内容 SHA-256 与固定 root Proto0 或 Setup Proto17900 一致；
3. X27 位于 Proto.code 内，按四字节对齐，且 *(u32*)(X27-4) 与 W20 完全相同；
4. W20 的 7 位 opcode 与当前 Native Handler 一致；
5. 当前 Lua PC = (X27 - Proto.code) / 4 - 1，而不是未经校准的 CallInfo.savedpc / 4。

CALL Handler main+0x4487C 的 0x448A0 指令 STR X27,[X8] 会在 BL 0x278B0 前把已推进的下一指令指针写回 CallInfo.savedpc，因此 savedpc 内存可能是下一条而非当前指令。CLOSURE Handler 为 main+0x453FC，SETI Handler 为 main+0x41D14。

## 原生 CLOSURE → UpVal* 关系

| 原生 RVA | 实际 ARM64 读取或写入 | 推导 |
| --- | --- | --- |
| 0x45430 | LDR W23,[X20,#16] | 子 Proto 的 Upvalue 数 |
| 0x45434 | LDR X25,[X20,#80] | 子 Proto 的描述符表 |
| 0x45448 | STR X20,[X0,#24] | LClosure.p = 子 Proto |
| 0x4545C | ADD X20,X0,#32 | 新 Closure 的 UpVal 指针数组起点 +0x20 |
| 0x45460/0x45478/0x4547C | ADD/LDURB/LDRB | Upvaldesc stride 16，instack 偏移 +8，index 偏移 +9 |
| 0x45488 | ADD X1,X26,X8,LSL#4 | 捕获父栈 R[index] 的 16 字节 TValue |
| 0x4548C/0x45494 | BL 0x29760 / STR X0,[X20] | 获取 UpVal* 并存入新 Closure 槽 |
| 0x454AC/0x454B0 | LDR/STR | instack=0 时引用父 Closure 的相同 UpVal* |

Setup Proto17900 Upvalue 描述符：slot0 instack=0,index=0；slot1 instack=1,index=58；slot2 instack=1,index=55。因此 root 的 R55 位于 X26+0x370，R58 位于 X26+0x3A0。Setup 新 Closure 的 slot1、slot2 UpVal* 分别在 closure+0x28、closure+0x30。

**注意**：在 CLOSURE Handler 入口可以观测父栈 R55/R58 的 TValue，但新 Closure 此时尚未捕获完毕；不能在进入 Handler 的瞬间虚构子 UpVal cell ID。应在捕获循环完成后重新验证新 Closure 身份再读取槽指针。

## UpVal.v 与 TValue 的原生静态布局

真实 UpVal get/new 函数 main+0x29760：
- 0x29774 读取 lua_State+0x38 的 open UpVal 链；
- 0x29784 从 UpVal+0x10 读取 v（指向实际 TValue 的指针）；
- 0x297CC 将父栈 TValue* 写到新 UpVal+0x10；该操作捕获共享单元，不复制数值；
- 0x2979C 访问 UpVal+0x18 的 next 链指针，0x297D8 访问 +0x20 的反向链；
- closed UpVal 初始化路径 0x29708/0x2970C 将 v 指向自身 +0x18 的内部值区；
- TValue 16 字节，0x449A8 从 TValue+8 读取类型 Tag；低四位为 Lua 基础类型候选。

因此需要以 cell 真实地址作为共享单元身份（公开记录中使用会话 HMAC ID），通过 UpVal+0x10 读 TValue*，再从该 TValue 16 字节解析类型。不同 Closure 捕获同一个 UpVal* 才能证明相同 cell，而只是读到相同值不够。

## R4.2 已提交工具

- scripts/Audit-SV400-Lua54-OpcodeFrames.py：验证真实原始机器指令字，不接受错误 ELF 哈希；
- scripts/Inspect-SV400-Lua54-OpcodeContext.py：校验 X27、W20、当前 native handler、Proto.code 完整 SHA；读取 root R55/R58 与已确认 Closure 的 UpVal.v 及对应 TValue，默认不记录原始游戏指针；
- scripts/Inspect-SV400-Lua54-GDB.py：加入用户显式执行的 sv400-vm-opcode 命令，要求 guest 当前精确停在经过审计的 Handler 入口，且先通过主程序代码字节对比；
- scripts/Probe-SV400-LuaVM-GDB.py：所有显式允许的硬件断点实行一次性命中后关闭，避免 VM 高频断点重复停止；
- tests/test_sv400_luavm_opcode_context.py 与 tests/test_sv400_gdb_opcode_command.py：仅使用合成内存和假的 GDB 接口，覆盖正确 PC、错误 W20、错误完整 SHA、上下文拒绝、UpVal 别名等。

## 用户本地执行

在前一阶段 R4 的环境变量基础上新增：

    export SV400_OPCODE_CONTEXT_HELPER="$PWD/scripts/Inspect-SV400-Lua54-OpcodeContext.py"
    export SV400_AUDITED_NATIVE_RVAS="0x453fc,0x4487c,0x41d14"

确保本次真实 Violet 4.0.0 guest main 基址已核对，主 ELF 与 BLUA 指纹来源精确，并在已经连接的 GDB 中执行：

    source -s python scripts/Probe-SV400-LuaVM-GDB.py
    source -s python scripts/Inspect-SV400-Lua54-GDB.py
    sv400-native-preflight
    sv400-native-arm 0x453fc
    continue
    sv400-vm-opcode
    sv400-native-disarm

CLOSURE Native Handler 会服务整个游戏的全部 Lua CLOSURE。仅当这次命中被工具严格证明为 root Proto0 PC215522，才能读取 R55/R58；其余命中不具有目标身份。这里没有自动执行真实游戏断点，也没有运行时行为 A/B。

## 仍待真实采样的验收

- root PC215522：实际父栈 R55/R58 TValue，CLOSURE 创建后的 slot1/2 UpVal* 单元和同一 root activation 的创建顺序；
- Setup PC8/48：PC7/47 工厂返回对象在 R2/R4 中的真实身份；
- Setup PC11/32/83：当前 R[A] callable、SELf 场景的 R[A+1] receiver、真实 Lua Closure Proto 或 C 函数 RVA；
- 同一 root activation 的闭包单元共享/覆盖，以及真实游戏 A/B。

所有上述尚无实机数据的项保持 NOT_OBSERVED；不宣称完整 Lua 模块已恢复或游戏行为等价。

关联：[[sv-lua54-r4-liveframe-identity-gate]] · [[sv-lua54-r3-runtime-identity-probes]]。
