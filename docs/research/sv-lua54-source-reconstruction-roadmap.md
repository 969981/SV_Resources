---
aliases: [SV 4.0.0 BLUA Lua Haxe 源码还原, SLR 1.0 任务路线图]
tags: [pokemon-sv, lua54, haxe, pokedocs, source-reconstruction, obsidian]
status: IN_PROGRESS
game_version: "4.0.0"
epic: "https://github.com/969981/SV_Resources/issues/73"
updated: "2026-11-09"
---

# SV 4.0.0 BLUA → 可编辑 Lua / Haxe 项目（SLR 1.0）

> [!important] 当前状态
> **已启动 R0，M0/T00 与 M1/T01 第一版通过 Actions 并合并 PR #85。** 六文件 Lua 5.4 无损 IR、字节完全一致的重新编码及 100 原型严格反编译基准（97/100 语法通过）已实现；完整源码工程/行为等价仍未完成。 现有研究证明两个主要 BLUA 能按 Lua 5.4 解析 Prototype 和部分指令赋值关系，但不证明原始 Lua/Haxe 源码已经还原，也不证明生成代码与原游戏语义相同。
> 原始 BLUA 永远只读；原始 PokeDocs 也只读。大规模恢复的游戏源码默认导出本地，不自动提交到公开仓库。

## 目标定义

**核心目标 G：** 把六个原生 BLUA 建成可追溯、可按类/函数浏览的 Lua 工程，支持按清单重组、Lua 5.4 重新编译、差异测试，并提供实验性的 Haxe 类型模型和受控方法转换。

**必须实现：**
1. 完整 Lua 5.4 字节码解析 IR：指令/常量/整数/浮点/Upvalue/调试字段/原始 offsets，不允许静默丢弃。
2. 每个原型可以查询 proto_id、owner、字节码 PC、命名依据、反编译/编译状态。
3. 可读 Lua AST 与源码发射，无法恢复时精确报告失败而不是伪造结果。
4. 根据 PokeDocs C/E/F/S Hashlists、已证实的 C→F/C→S/回调字段关系恢复类与函数索引；运行时保留原始 Hash 键。
5. 对已恢复 Lua 分模块拆分、按原始初始化顺序重新组装、通过 Lua 5.4 编译与沙箱差异测试。
6. 优先生成 Haxe extern / typedef / 类继承骨架，逐步扩展少量可验证函数的 Haxe→Lua 转换。
7. 可增量重建六个输入，按模块/原型汇总 PASS、PARTIAL、UNSUPPORTED 证据。

**非目标：** 不宣称能还原原始开发者变量名与注释；不把旧版反编译语料当 4.0.0 原生证据；不要求重新编译后每个字节与原版相同；不默认修改游戏、插入 Hook 或上线实机写入；不默认发布完整恢复的第三方游戏源码。

[R0 原生 IR 与第一轮 100 函数基准实测](sv-lua54-r0-native-ir-benchmark.md) · [合并 PR #85](https://github.com/969981/SV_Resources/pull/85) · [成功 Actions #42550410858](https://github.com/969981/SV_Resources/actions/runs/42550410858)

## 2026-11-09：R1 原生 PC / Upvalue / C→F 阶段性验收

- **已合并 [PR #87](https://github.com/969981/SV_Resources/pull/87)**；master [Actions #42554893510](https://github.com/969981/SV_Resources/actions/runs/42554893510) 通过，连续复核原始 4.0.0 BLUA 和固定元数据报告。
- 六模块已关联 **24,085** 条真实 C→F 方法赋值（原 23,727 为 main/main_dynamic 两模块口径）。
- 原生 **54,803** 条 Upvalue 描述符的词法来源已可递归追踪，发现 **0 个无效源索引**；并非游戏运行时对象身份。
- 保守 PC 诊断追踪了三处原失败 Proto 的全部 SETLIST；unluac-rs v1.4.5 使固定 100 原型的 Lua 5.4 严格语法通过从 **97/100 提升到 99/100**。
- 仍未解决的 main_dynamic Proto 752 已缩小到 HIR 节点 `table-set-list l15 start=1 values=l16,l17,l18 initializer-scope=None`；需要证明表对象别名/作用域后才能安全降低成 Lua AST。
- **#76 / #77 / #79 仍保持 OPEN**；源码拆分、完整重编译、Haxe 和游戏运行时语义验证尚未完成。

完整证据：[[sv-lua54-r1-setlist-upvalue-cf]]。

## 2026-11-09：R2 Proto 752 受控区域验证

- **已验证原版 PC 649 NEWTABLE R14 → PC 665 SETLIST R14 三个数组元素**；PC 666 才发生表的 MOVE 别名。计算序列包含七条 MMBIN/MMBINK 后备指令，未发现该区间的表提前逃逸或覆盖。
- 两个原生常量 K117 / K118 均是 Lua 5.4 **浮点 3.0 / 20.0**，自动源码发射不能把它们改为整数。
- 采用 fail-closed 白名单从原始 17 个指令字生成 Lua；**自动生成 Lua 源**以及由 luac5.4 **重新编译的 .luac**，均对临时包装的原始指令执行 **163/163** 的受控 A/B，包含类型与元方法顺序验证。
- 范围只涵盖 Proto 752 的 PC 649–665，**不表示整个 2,071 指令函数或 unluac-rs 的 HIR→AST 已修复**。仍需内部 HIR source-site 映射、全范围 SSA/alias 和游戏环境验证。

证据：[[sv-lua54-r2-proto752-ownership-ab]] · [R2 CI](https://github.com/969981/SV_Resources/actions/runs/42558291234)。

## 输入与已知基线

相对于 Unpack/4.0.0/romfs/arc/data.trpfs/：

| 模块 | 来源 | 已知事实 |
| --- | --- | --- |
| main | virtual/script/lua/bin/release/main/main.blua | 12,912,264 bytes；37,743 Proto；SHA-256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 |
| main_dynamic | virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua | 5,342,713 bytes；7,036 Proto；SHA-256 ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572 |
| dll_danbattle | virtual/script/lua/bin/release/dll_danbattle/dll_danbattle.blua | T00 测算 |
| dll_picnic | virtual/script/lua/bin/release/dll_picnic/dll_picnic.blua | T00 测算 |
| dll_stadium | virtual/script/lua/bin/release/dll_stadium/dll_stadium.blua | T00 测算 |
| dll_util | virtual/script/lua/bin/release/dll_util/dll_util.blua | T00 测算 |

前两个模块共 **44,779** 个已解析 Proto；不包括四个 DLL。

复用，不重写：
- [原生 Lua C→F 研究](sv-lua-native-4.0.0.md)：23,727 条真实方法赋值关系；区分 Hash 字符串命中与原生指令定义。
- [第三轮静态 S 和回调](sv-lua-native-4.0.0-followup.md)、[第四轮未命名项](sv-lua-native-4.0.0-phase4.md)。
- scripts/Analyze-SV-Lua54.py、Continue-SV-Lua54.py、Index-SV-Lua-CallGraph.py、Audit-SV-Lua-Bytecode.py。
- tools/PokeDocs/SV/Hashlists/Lua、tools/PokeDocs-Supplement/SV/Hashlists/Lua。
- [旧版 SV-Script-RE 辅助证据](sv-lua-hash-context.md)：旧版命名/结构只能作候选和对照，不得冒充 4.0.0 原生证明。

> [!warning] 外部工具核实
> 可对比 [unluac-rs](https://github.com/x3zvawq/unluac-rs) 的 Lua 5.4 strict 模式、[unluac](https://sourceforge.net/projects/unluac/) 等。但必须先独立检测主文件的 debug strip 状态、浮点与控制流兼容性，再固定版本选型。Haxe [Lua target](https://haxe.org/manual/target-lua-getting-started.html) 的生成代码可能依赖额外 Lua 库；游戏内嵌 Lua 运行时兼容性未证实。

## 任务矩阵（已创建 GitHub Issues）

| Task | Milestone | 交付与硬验收 | 依赖 | Issue |
| --- | --- | --- | --- | --- |
| T00 | M0 输入基线 | 六文件 SHA/ABI/Proto/Debug manifest，CI 验证 | 无 | [#74](https://github.com/969981/SV_Resources/issues/74) |
| T01 | M1 无损 IR | 原型、数值 bit pattern、Upvalue/debug/offset 完整；合成样本 decode→encode 一致 | T00 | [#75](https://github.com/969981/SV_Resources/issues/75) |
| T02 | M2 CFG | PC、register dataflow、循环/闭包/Upvalue 控制流 | T01 | [#76](https://github.com/969981/SV_Resources/issues/76) |
| T03 | M2 后端基准 | 2 类反编译器、100 分层函数、工具版本及失败分类 | T00,T01 | [#77](https://github.com/969981/SV_Resources/issues/77) |
| T04 | M2 AST→Lua | 可读 Lua，source-map；不支持时精确 Proto/PC | T02,T03 | [#78](https://github.com/969981/SV_Resources/issues/78) |
| T05 | M3 Symbols | C/E/F/S / native / FNV / older-context 区分所有权 | T01,T02 | [#79](https://github.com/969981/SV_Resources/issues/79) |
| T06 | M3 拆分项目 | 类/namespace 模块与初始化 manifest；不能错误丢失闭包和 _ENV | T04,T05 | [#80](https://github.com/969981/SV_Resources/issues/80) |
| T07 | M4 重编译 | luac -p/luac -o/差异执行；一个原生样本模块编译通过 | T04,T06 | [#81](https://github.com/969981/SV_Resources/issues/81) |
| T08 | M5 Haxe | extern/typedef 可编译；10 个低耦合方法 PoC | T05,T07 | [#82](https://github.com/969981/SV_Resources/issues/82) |
| T09 | M6 全量与 CI | 六模块覆盖率、断点续跑、指标按 proto_id 输出 | T00，逐步依赖 T01-T08 | [#83](https://github.com/969981/SV_Resources/issues/83) |
| T10 | M6 可选运行 A/B | 隔离环境只读验证 Lua loader 与行为；不默认注入/修改 | T07 | [#84](https://github.com/969981/SV_Resources/issues/84) |

**父任务：[EPIC #73](https://github.com/969981/SV_Resources/issues/73)**。单项 issue 内含可核验完成标准。请仅在验收证据齐全时勾选/关闭。

### 推荐依赖

~~~mermaid
flowchart TD
  T00[T00 六模块基线] --> T01[T01 无损 IR]
  T01 --> T02[T02 CFG 数据流]
  T01 --> T03[T03 反编译器基准]
  T00 --> T03
  T01 --> T05[T05 PokeDocs 符号]
  T02 --> T04[T04 Lua AST]
  T03 --> T04
  T02 --> T05
  T04 --> T06[T06 拆分模块]
  T05 --> T06
  T04 --> T07[T07 重编译与差异]
  T06 --> T07
  T05 --> T08[T08 Haxe]
  T07 --> T08
  T00 --> T09[T09 全量报告与 CI]
  T07 --> T09
  T07 --> T10[T10 可选只读运行 A/B]
~~~

T02、T03 可以并行；T05 可以与 T03/T04 并行；T09 的只读报告基础部分可提前启动。

## 推荐工程结构

~~~text
tools/SV.Lua54/
  src/sv_lua54/
    parser/             # 全字段 Lua 5.4 / proto
    ir/                 # 记录数值、字节码 offsets
    cfg/                # basic blocks + upvalues
    decompiler/         # 对比不同后端，CFG→AST
    symbols/            # PokeDocs overlay
    modules/            # 模块/初始化 manifest
    emit_lua/           # Lua AST→Lua5.4
    emit_haxe/          # Haxe extern/type / PoC
    verifier/           # 编译/语义差异
  README.md
scripts/Export-SV-Lua54.py
tests/test_sv_lua54_*.py
docs/research/sv-lua54-*.md

Unpack/4.0.0/romfs/arc/data.trpfs/
  virtual/script/lua/bin/release/       # 保持只读
  virtual_converted/script/lua/         # 生成于本地/CI
    index/        # manifest、JSONL、SQLite
    recovered/    # 模块化 Lua（默认不提交）
    haxe/         # Haxe 工程骨架（大规模生成不提交）
    reports/      # 覆盖率/失败原因
~~~

Python 包名放在 src/sv_lua54，避免工具父目录中的点号影响 import；编译器后端依赖单独固定版本。

最少原型记录字段：

~~~text
game_version, source_sha256, source_file, proto_id, parent_proto_id,
child_index, code_offset, pc_range, class_hash, function_hash,
owner_evidence, naming_evidence, module_path, source_map,
parse_status, cfg_status, lua_status, compile_status,
differential_status, runtime_status, haxe_status, diagnostics
~~~

**状态不得混用**：PARSED、CFG_OK、DECOMPILED、LUA_COMPILED、DIFFERENTIAL_PASS、HAXE_TYPED、HAXE_COMPILED、RUNTIME_VERIFIED、UNSUPPORTED 分别记录。不允许因为 luac -p 成功就写 RUNTIME_VERIFIED。

## 分阶段交付口径

### 第一阶段必须落地（M0 → M1 → 早期 M2）

- 一键生成六个 BLUA 的 SHA/ABI/Debug Strip/Proto/Instruction/constant 清单。
- 修补当前 parser 丢弃数值原始值与 debug 元信息的缺陷，建立真正的无损 IR。
- 建立 100 个覆盖简单函数、条件、循环、闭包、协程、复杂嵌套的**固定分层样本**。
- 使用纯 Lua 5.4 合成 fixtures 作字节级 parser 与语义测试。
- 先从已有原生证据的 GemSettingManager、战斗回调等模块选取示范函数；不先批量生成几万份未经验证的 Lua。

### M4 首个关键成果

至少一个原生真实 Proto 对应的 Lua 模块：可读、源映射可查、可重新组装且 luac 编译通过；纯 Lua 对照能验证的行为通过差异测试。与游戏专有 C API 不可分离的路径明确标记为 BLOCKED_NATIVE_API。

### M5 Haxe 边界

先做按 Hash 保留动态键的 extern/typedef/继承图；后做十个低耦合函数的 Haxe→Lua 编译与差异测试。无需让 Haxe 的完成阻塞 Lua 工程。

### M6 覆盖口径

全量输入必须逐 Proto 有状态与诊断，**不是要求所有 Proto 都 DECOMPILED PASS**。输出按模块/namespace/类/方法的可审计统计；对未知 Hash、缺失控制流支持、私有 API、运行时未测分别归档。

## 风险与预案

| 风险 | 预案 |
| --- | --- |
| debug strip/变量名缺失 | 先检查，使用寄存器伪名及溯源，不冒充原名 |
| upvalue/尾调用/多返回值、TBC/CLOSE 恢复错误 | 单独 fixture，语义差异测试而不只 luac -p |
| 函数拆分后 init 顺序变化 | manifest 按原根函数加载次序生成 |
| 旧版源码或 Hash 候选污染 4.0.0 | 保存 exact_native / hash_exact_candidate / older_context / unknown 级别 |
| Haxe 生成 Lua 需要辅助运行时 | Haxe PoC 与 Lua 原生编译链解耦 |
| 大规模文件/CI 超时 | 缓存、断点续跑、批处理；默认不提交完整生成源码 |
| 字节码编译兼容而游戏不加载 | 分离游戏私有 C API/loader 实测，留到 T10 |

**当前执行优先级：T00 → T01 →（T02 ∥ T03 ∥ T05）→ T04 → T06 → T07 → T08 → T09；T10 视隔离环境实测条件可选启动。**

关联：[[sv-lua-native-4.0.0]] · [[sv-lua-native-4.0.0-followup]] · [[sv-lua-native-4.0.0-phase4]] · [[sv-lua-hash-context]]。
