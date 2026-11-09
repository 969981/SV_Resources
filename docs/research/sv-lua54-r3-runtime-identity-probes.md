---
aliases: [SV 4.0.0 Lua R3 调用接收者与运行时身份, GemSettingManager Setup PC11 PC32 PC83]
tags: [pokemon-sv, lua54, runtime-probe, closure, upvalue, C-F, obsidian]
status: NATIVE_STATIC_VERIFIED_RUNTIME_NOT_OBSERVED
date: "2026-11-09"
game_version: "SV 4.0.0"
pr: "https://github.com/969981/SV_Resources/pull/86"
---

# SLR R3 — Setup 三处方法调用与共享 Upvalue 的运行时身份验证方案

> [!important] 实际边界
> 当前并未在原版游戏、模拟器或者游戏内 Lua VM 安装执行 Hook；也没有真实的 VM 回调事件。本轮确认了真实 BLUA 的调用 PC / 操作数 / 接收者静态来源，生成可执行的采样契约及事件验证器，并在独立 Lua 5.4 VM 的原创合成脚本中验证了共享 Upvalue 的行为。**合成 VM 的通过不能冒充 SV 4.0.0 游戏运行证据**。

## 一、固定原生身份

- main.blua 原始 SHA-256：c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
- Class Hash：C850E69B34478276C（GemSettingManager）。
- Function Hash：F7C68FEDB79AB6396（Setup）。
- 方法体 Proto ID：17900；原始字节码文件偏移：7590112；264 条 Lua 5.4 指令。
- 方法体 opcode 字节 SHA-256：9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1。
- 父 root Proto ID 0，CLOSURE 在 root PC 215522，字节码文件偏移 862129。
- root code SHA-256：402537c209657ed69f8147a0cc5ac7a377b88e30b1485595a993463f2ce68265。

**PC 为 Lua 函数自身从 0 开始的指令索引，不是 ARM64 PC，不可直接当作 main+offset。** 原始文件 code_offset 也不是游戏运行时 ELF RVA。运行时必须先证实 Proto 的代码指纹和其所属加载实例，再依据 Lua VM 当前指令指针换算对应 Proto PC。

## 二、三个具体 CALL 的真实指令

| 调用 PC | 操作数来源 | 字段 Hash | 当前结论 |
| --- | --- | --- | --- |
| 11 | PC9 GETI R2,R0,14；PC10 SELF R2,R2,F...；PC11 CALL | F7CD5FEDB7A083576 | 取 self[14] 的方法；接收者具体对象未观测 |
| 32 | PC30 GETTABUP R3,_ENV,C8FB...；PC31 GETFIELD R3,R3,S...；PC32 CALL | S668179E3DFA5CD49 | 从全局类表候选读取 S 方法；表中真实 callable 未观测 |
| 83 | PC81 GETI R4,R0,7；PC82 SELF R4,R4,F...；PC83 CALL | FA46877DC47484C79 | 取 self[7] 的方法；接收者具体对象未观测 |

继续向前追一层：
- PC4 的 GETTABUP 读取 _ENV[C321A674151DEB701]（PokeDocs 对应 main.gem.setting_tool.GemSettingFB），PC5 的 GETFIELD 键为 **new**，PC6 准备参数 self[1]，PC7 执行 **GemSettingFB.new(self[1])** 形式的类表调用；单返回值 R2 经 PC8 的 SETI R0,14,R2 写入 self[14]，再由 PC9/10/11 消费。真实返回对象类型未观测。
- PC45 的 GETTABUP 读取 _ENV[C85EFC84DF009EC3F]（PokeDocs 对应 main.gem.setting_tool.GemSettingStartWindow），PC46 的 GETFIELD 键为 **new**，PC47 执行 **GemSettingStartWindow.new()** 形式的类表调用；单返回值 R4 经 PC48 的 SETI R0,7,R4 写入 self[7]，再由 PC81/82/83 消费。真实返回对象类型未观测。
- 静态写入链不代表字段一直不变；中间 CALL、元表方法或宿主逻辑可能修改实例对象。
- PC32 的 C8FB6CAF7F89386B8 是从 BLUA 原始 GETTABUP 取得的类 Hash 候选，不是运行时表的经验证名称。
- 当前 PokeDocs C/F/S Hashlists 未找到这四个 C/F/S 键的精确条目；不应凭邻近名称猜测。

## 三、共享 Upvalue 必须记录运行时单元身份

Setup 原生 upvalue descriptor：

| Slot | Descriptor | 静态捕获源 |
| --- | --- | --- |
| 0 | instack=0, idx=0 | 父 root Upvalue 0，符合 _ENV 惯例 |
| 1 | instack=1, idx=58 | 父 root 活动帧的寄存器 R58 |
| 2 | instack=1, idx=55 | 父 root 活动帧的寄存器 R55 |

前阶段静态反向追踪的可能寄存器写入为 root PC 18953 的 LOADNIL。R55/R58 在原始文件中分别被 681/458 个 Proto/slot 描述符引用；这些引用者的当前扫查未见对应 SETUPVAL 指令。都**不能证明**运行中实际值是 nil、是否因宿主代码变化，或者不同执行激活中所有闭包共享一个值。

Lua UpVal* 单元身份属于运行时对象。必须区分：
1. 同一 root activation 中两个 Closure 是否真的引用同一个 UpVal cell；
2. 在 Closure 创建前、创建后、CALL 前分别是什么类型/对象实例；
3. 不同 root activation 是否建立了不同 UpVal cells；
4. 是否经过宿主 API 或 Closure 写入改变单元值。

原始指针、昵称或其他游戏堆内存不应写入 artifact；使用同一次追踪会话内的临时不可逆 ID，以及类型或稳定脱敏指纹。

## 四、VM 观测流程和字段契约

新增 tools/SV.Lua54/src/sv_lua54/runtime_probes.py。默认在没有任何原版 VM 事件时输出 **NO_RUNTIME_EVIDENCE**；不能靠猜测标记已验证。

- run_begin：run_id、root_activation_id、event_seq、observer_build、source_sha256、root_proto_code_sha256、schema。
- closure_create：原始 root PC 215522、实际 Closure instance ID、目标 Lua Proto code SHA、Upvalue slot0/1/2 的 cell ID、值类型及非 nil 值的实例 ID/脱敏指纹。
- upvalue_snapshot：同一 Closure instance 和相同 UpVal cell ID 的新鲜快照；PC11/32/83 每个 CALL 之前必须采样 slot1 与 slot2。
- call_pre：实际 CALL PC、原始字段 Hash、真实 receiver ID、实际 lookup 证据、当前 R[A] 中 callable 的临时 ID、Lua Proto SHA 或 C 函数模块+RVA。
- 多激活实例不得混用 Closure ID 和 UpVal cell ID；事件序号在同一激活内单调递增。

观测点应当位于 Lua 5.4 VM 执行指令前后的安全位置，而非简单搜内存 Hash 字符串。对于实际 SELF 分派，除了方法 Hash，还必须记录 receiver 实例和 R[A] 实际目标；对于静态 S 字段要检查类表中实际值与潜在元表分派。

### 字段身份分层

- STATIC_SYMBOLIC：原始字节码哈希键、已验证 C→F 静态注册、指令和寄存器来源。
- TRACE_SCHEMA_CONSISTENT：外部提供事件在 ID、PC、类、Closure、Upvalue、调用关系上不矛盾，但验证器不能鉴别事件是否伪造。
- VM_OBSERVED：需要独立可信的原版 VM hook 和目标代码指纹审计。
- BEHAVIOR_DIFFERENTIAL_PASS：需要不同输入的隔离游戏语义对照，不能从上层任一状态直接推导。

**注意**：仅有来自 JSON 的完整对象 ID，也不能证明其确实来自真实游戏。验证器永远返回 runtime_verified=false；真实执行的可信证明必须来自经核验的外部观测环境和原始日志来源。

## 五、已具备的复现命令

以下命令只生成受限 JSON 元数据，不修改或发布原始 BLUA。

~~~bash
export PYTHONPATH=tools/SV.Lua54/src
python -m sv_lua54.runtime_probes \
  Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua \
  --class-hash C850E69B34478276C \
  --function-hash F7C68FEDB79AB6396 \
  --expected-sha256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 \
  --output slr-runtime-probes.json

# 只读审查一个外部 VM 采样 JSONL（不等于认证该采样来源）
# 在上一条命令上追加：
# --events sanitized-vm-trace.jsonl
~~~

元数据中的三处 opcode_window 可直接用于未来原版游戏 Lua VM 的精确断点映射，但并不提供 Switch 主程序 Lua VM 的实际 ARM64 函数 PC。

## 六、测试结果与闭合条件

此前 R2 已验证 26 条纯合成测试、真实 main 的 C→F/CFG/Upvalue、严格反编译及 luac5.4 重新编译。

R3 增加了 JSON 事件契约的正反例测试、factory 可调用值的跨参数寄存器来源追踪，以及纯 Lua 5.4 的 VM 合成脚本。合计 **39 项 Python 合成测试**，原生 main 的三处调用、两个 new 工厂路径和重编译门槛均已通过 [Actions #42558506403](https://github.com/969981/SV_Resources/actions/runs/42558506403)。该脚本真实使用 debug.getupvalue、debug.upvalueid 验证两个 Closure 对同一个变量共享 UpVal cell，另一个 root activation 的 cell 不同，并验证模拟 SELF 的 receiver 和实际 callable 查找。这只能验证观测方法的通用 Lua 语义，绝非 Game Freak 游戏脚本行为。

下一步只有在取得目标游戏实际 Lua VM 的受控运行环境或游戏内调试入口后，才可采集三处调用的真实接收对象、闭包实例、cell ID，进而解析调用的 Proto 及输出可验证的游戏行为 A/B。现阶段 PR #86 保持开放；不把静态方法归属与合成 VM 测试误报成运行时闭合。

关联：[[sv-lua54-r2-dataflow-upvalue]] · [[sv-lua54-r1-cf-trace]] · [[sv-lua54-source-reconstruction-roadmap]]。
