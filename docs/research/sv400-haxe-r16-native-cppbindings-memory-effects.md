---
aliases: [SV400 R16 ELF CPP bindings memory SSA, SV4.0.0 Lua native CALL ABI]
tags: [pokemon-sv, lua54, haxe, arm64, elf, cppbindings, lua-vm, memory-ssa, obsidian]
status: ORIGINAL_ELF_CPPBINDINGS_STATIC_CHECKED_GUEST_NOT_OBSERVED
updated: "2026-11-10"
---

# R16：原版双 ELF 与 cppbindings、Lua CALL 参数差异、跨调用内存屏障

> [!success] 原件静态审计通过
> [R16 原版 ELF、Lua 与固定 cppbindings，17 项负例测试 Actions #42775798102](https://github.com/969981/SV_Resources/actions/runs/42775798102) **Success**。这次确实读取 Scarlet/Violet 两份 AArch64 ELF，逐字节校验原件 SHA-256；原始 main.blua 37,743 Proto，两个 R15 Root C/F 所属 Child/PC/操作码；及固定版 ZAScripts 中的 118 份 cppbindings Haxe 源文件。

> [!warning] 游戏运行时事实
> **本轮没有连接真实 Switch/模拟器进程，没有实际 CFunction、lua_State*、TValue* 或 C++ 对象指针读数。** 所有运行状态保持 `NOT_OBSERVED`，新发现只是可复核的静态关联，不能把 ELF 中的字符串 RVA 当成函数入口，不能把 ZAScripts extern 当作原版《朱／紫》原生 ABI。R15 已恢复方法总数仍是 83 条原版映射 / 82 个已有独立 Lua A/B 的 Haxe 函数体 / 357 组有限输入测试。

## 1. 交叉检验的四个不可变来源

| 文件或来源 | 校验 |
|---|---|
| `Unpack/4.0.0/exefs/scarlet_main/scarlet_main.elf` | SHA256 `53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f` |
| `Unpack/4.0.0/exefs/violet_main/violet_main.elf` | SHA256 `84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30` |
| `main.blua` | SHA256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`，37,743 Proto |
| `Reisyukaku/ZAScripts` | 固定 commit `c7bc243ac4d28356dff9f06b6723330ea92247d5` 的 `tools/haxe-4.3.1/std/cppbindings`，118 个 .hx |

[R16 完整 YAML 工作流](../../.github/workflows/slr-haxe-r16-engine-abi-audit.yml) 在 GitHub runner 用稀疏检出原件，校验 ELF64 little-endian、AArch64、PT_LOAD 文件范围、全文件哈希及源码版本；没有修改原版 ELF/BLUA。

## 2. 发现第二次 SELF 的原生类/方法关联——但真正函数入口仍待定位

固定版 ZAScripts 的 [CE35B3EB3.hx 第24行](https://github.com/Reisyukaku/ZAScripts/blob/c7bc243ac4d28356dff9f06b6723330ea92247d5/tools/haxe-4.3.1/std/cppbindings/CE35B3EB3.hx#L24)：

`@:native("cE35B3EB3")` 对应上游 extern 类；方法声明为：

`public function f558733FC(interval:UInt, part_interval:UInt):Void;`

原版 Scarlet/Violet ELF 两个文件**各有一处完全一致的 `cE35B3EB3` 字符串**，以及**各有一处 `f558733FC`**。该方法名在固定上游 118 份 cppbindings 中精确命中 1 次；另有两份 ELF 的 `component` 字符串各 8 次，`updateInterval` 未命中 ELF ASCII 字节，但在 Lua 原始常量表中存在。CLI 产出 ELF 文件偏移和对应 PT_LOAD RVA；**这些地址是文本位置，不是 C++ 代码 RVA**。

R15 已证实的方法如下：

| 原版 Lua 方法 | Child Proto | Root PC | owner / child |
|---|---:|---:|---|
| `main.field.action.base.IAction.Setup` | 12930 | 160285 | `self[10]`、`self[12]` |
| `main.field.action.base.IAutoAction.Setup` | 13197 | 163143 | `self[2]`、`self[4]` |

第一条 `SELF` 的 K0 `F22C7B81A049FA20D` 对应此前静态确证的脚本方法 `onSetup`；尚未实际观察真实 VM 调用时该字段是否被运行时替换。第二条 `SELF` K2 `f558733FC` 在两版 ELF 与上游 cppbindings 都有静态证据，**还没有原版 `child` 的对象类型与 `CClosure/CFunction` 指针读取，不能判定它确实属于上游 `cE35B3EB3` 对象**。

### 新发现：Lua CALL 实参数量与上游 extern 不一致

原版 Child PC9 是 `CALL A3 B3 C1`：按 Lua5.4 语义传 **两个 Lua 实参**（`child` 接收者 + 从 `owner.updateInterval` 读取的一个显式参数），无返回值保留。

而上游 `CE35B3EB3.f558733FC` 文本签名含两个**显式** UInt 参数 (`interval`、`part_interval`)。因此数量比较为：上游 extern 2 个显式参数，对原版 Lua CALL 1 个显式参数，差 1。已在脚本与负例测试中强制标记：

`UPSTREAM_EXTERN_ARITY_DIFFERS_FROM_SV400_LUA_CALL`

**不要以该 extern 直接替换已验收的 Haxe 调用。** 可能有不同版本、可选参数或包装层、动态表对象不是这个类等解释，尚无一项得到运行时证实。原版 C++ 参数寄存器、返回 ABI 和实际函数入口都仍是 `NOT_RESOLVED`。

## 3. 跨 CALL 的保守内存效应排序

工具 [r16_engine_bridge.py](../../tools/SV.Lua54/src/sv_lua54/emit_haxe/r16_engine_bridge.py) 重新读取原始两个 Proto 并逐指令输出 effect ledger：

| 原版 PC | 语义 | 必须保留的影响 |
|---:|---|---|
| 0 | 首次 `SELF` | 方法字段读取可能触发 `__index` |
| 1 | 第一次 `CALL` | 可能修改可达对象堆；之后的 GETI 不能提前到它之前 |
| 4、5 | 从 `self` 读取 owner/child | 可能触发 `__index`，取得**第一次 CALL 之后**的值 |
| 6 | `SETFIELD owner.component=child` | 可能触发 `__newindex`、拦截写入或异常；不能据此保证 owner.component 别名 child |
| 7、8 | 对 child `SELF`，读取 owner.updateInterval | 可能触发 `__index`；保留先后顺序 |
| 9 | 第二次 `CALL` | 未知外部堆修改与异常；结果不保留 |
| 11 / 13 | 两条 RETURN | 仅存在**合成**出口版本合流候选，非原生指令 |

这是有界 **`CONSERVATIVE_MAY_WRITE_ONLY`** 内存效应账本。`M?0..M?8` 仅用于排序，**不是真实别名分析已完成，也不是完整 Memory SSA**。false 分支执行过第一次 CALL，即使返回 false 也可能已有外部副作用。

## 4. 真实 guest 调用轨迹的离线检查器

仓库已提供：
- [r16_guest_trace.py](../../tools/SV.Lua54/src/sv_lua54/emit_haxe/r16_guest_trace.py)——检查同一个 `lua_State`、帧、方法、Lua 原始 PC 与 opcode 字、函数/receiver/owner/child/interval token。
- [Verify-SV-Haxe-R16-GuestTrace.py](../../scripts/Verify-SV-Haxe-R16-GuestTrace.py)——读 JSON、输出判定，不连接调试器。
- `tests/test_sv_haxe_r16_guest_trace.py`——合成的真假分支、伪造 opcode、跨帧/跨状态、错接收者/参数等负例。

要获得真实 trace，必须先在**离线**游戏 guest 校验同一 ELF 的加载版本，重新定位该 ELF 的 VM opcode dispatch、`CallInfo.savedpc` 和真实 `LClosure/CClosure` 结构，实测 Lua PC0→1，成功分支 PC4→5→6→7→8→9，取原始寄存器与 `TValue` 对象指针并以单次运行实例中的脱敏 token 记录。真实被调用的 `CFunction*` 还需同实际 ELF code RVA 和寄存器 ABI 做匹配。

`source=guest-gdb-readonly` 及事件文本只是一种**输入声明**：空事件返回 `NO_RUNTIME_CALL_EVENTS`（退出码 2）；即使文本内部全部一致，离线检查器最高也只能返回 `TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED`，不能自行把用户提供的 JSON 认成经过独立来源证明的游戏运行事实。

运行方式：

~~~bash
python3 scripts/Verify-SV-Haxe-R16-GuestTrace.py \
  --trace r16-guest-events.json --report r16-guest-evaluation.json
~~~

参考既有的 [[sv-lua54-r7-native-opclosure-dispatch]] 和其 GDB 只读采集工具，但那份文档所使用的 Violet ELF SHA **与本轮仓库 Violet ELF 不同**，不能直接照搬 `main+0x41150` 或 `main+0x453FC` 等历史 RVA；必须重新用本轮校验过的 ELF 逐机器码验证。

## 5. 本轮已交付和下一步门槛

- 静态分析和对账入口：`scripts/Analyze-SV-Haxe-R16-EngineAbi.py`。
- 绑定及内存屏障后端：`tools/SV.Lua54/src/sv_lua54/emit_haxe/r16_engine_bridge.py`。
- 17 项负例与协议测试：`tests/test_sv_haxe_r16_engine_bridge.py`、`tests/test_sv_haxe_r16_guest_trace.py`。
- 固定来源与 CI：`.github/workflows/slr-haxe-r16-engine-abi-audit.yml`；运行证据为 [Actions #42775798102](https://github.com/969981/SV_Resources/actions/runs/42775798102)。

**下一关**：对当前 ELF 中的 `cE35B3EB3/f558733FC` 静态交叉引用定位原生注册表和 `CFunction` 函数指针，实机读取 child 动态对象类型及 `CALL` 前后两份 `TValue`／寄存器实参，解释上游 extern 的多一个显式参数。没有这些证据，游戏的真正 ABI 和跨 native CALL 的完整内存 SSA 仍是 `NOT_RESOLVED / NOT_OBSERVED`。

关联：[[sv400-haxe-r15-engine-call-cfg-ssa]] · [[sv-lua54-r7-native-opclosure-dispatch]] · [[sv-lua54-haxe-reconstruction]]。
