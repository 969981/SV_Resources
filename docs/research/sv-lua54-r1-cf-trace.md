---
aliases: [SV 4.0.0 BLUA C-F Prototype 实证追踪, SLR R1 GemSettingManager Setup]
tags: [pokemon-sv, lua54, bytecode, cfg, callgraph, decompilation, obsidian]
status: VERIFIED_STATIC_CF_AND_LUA_SYNTAX
game_version: "4.0.0"
date: "2026-11-09"
epic: "https://github.com/969981/SV_Resources/issues/73"
task: "https://github.com/969981/SV_Resources/issues/76"
---

# SLR R1 — GemSettingManager.Setup 的原生 C→F→Proto→PC→Lua 实证

> [!important] 验证范围
> 已在真实 SV 4.0.0 \`main.blua\` 上完成一条原生 C/F 方法绑定、静态控制流和调用点索引、严格 Lua 5.4 反编译及 \`luac5.4 -p\` 语法检查。**没有验证游戏内执行结果、Upvalue 所有权或跨基本块动态调用目标**。原版输入和生成的游戏 Lua 源码均未修改/公开提交。

## 原生输入和方法身份

- 模块：\`main.blua\`；版本 SV 4.0.0。
- 固定原生 SHA-256：\`c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815\`。
- 类：\`main.gem.setting_tool.GemSettingManager\`；原始 Hash \`C850E69B34478276C\`。
- 方法：\`Setup\`；原始 Hash \`F7C68FEDB79AB6396\`。
- **方法体 Proto ID：17900**（此 ID 仅对该原始文件及对应解析顺序有效）。
- 方法体 CFG：**9 个基本块**。
- 方法体 CALL/TAILCALL：**63 处调用点**，每处记录原始 PC 和 code file offset。
- 当前追踪结果：**3 处能识别所取字段 Hash**（PC 11: `F7CD5FEDB7A083576`；PC 32: `S668179E3DFA5CD49`；PC 83: `FA46877DC47484C79`），其余 **60 处仍属动态未解析调用**。三个字段 Hash **都不代表运行时确定的目标 Prototype**。
- 方法定义根函数 PC：**215516**（赋值 PC **215523**）；方法体原始 code offset：**7590112**；方法体 **264 条指令**。
- 实证定义：根 Chunk 的 \`GETUPVAL → LOADK → GETTABLE → LOADK → GETTABLE → LOADK → CLOSURE → SETTABLE\` 八条指令，并校验寄存器传递、C/F 常量、\`prototype\` 表名和 CLOSURE child index。
- 八条指令中存在同一个 Hash 常量 **不足以**证明定义关系；必须通过整条数据流赋值模式。

## 两层调用证据

| 证据状态 | 含义 | 可以断言 |
| --- | --- | --- |
| \`NATIVE_8OP_REGISTER_CLOSURE_SETTABLE\` | 根 Chunk 中完整类方法闭包赋值序列 | 该 C/F 方法定义指向具体子 Proto |
| \`DIRECT_LOCAL_CLOSURE\` | 同一基本块内某个寄存器的 CLOSURE/MOVE 最终供 CALL 使用 | 该调用点静态指向子 Proto |
| \`HASH_FIELD_TARGET_UNRESOLVED\` | SELF/GETFIELD/GETTABUP 取得 F Hash 字段，之后作为被调寄存器 | 可以识别方法名 Hash，**无法仅凭该值确认运行时目标 Proto** |
| \`UNRESOLVED_DYNAMIC_CALL\` | 缺少可靠的寄存器来源信息 | 不预测目标 |

> [!warning] CFG 模型仍是第一版
> 支持 Lua 5.4 JMP/TEST/比较跳过、LFALSESKIP、FORPREP/FORLOOP、TFORPREP/TFORLOOP、EXTRAARG 等原始 PC 边。数据流**保守限制在单个 basic block**；call-site 结果不含跨块对象别名、Upvalue 来源、metatable 动态分派及游戏 C API 的实际解析。**9 个 CFG 块不等于仅有 9 条执行路径。**

## 反编译和重新编译门槛

在原生方法 Proto 17900 上执行：

1. \`Chunk(header, proto.upvalue_count, proto, "").encode()\` 临时导出独立 Lua 5.4 chunk，并重解码检查字节相等；原始 BLUA 不变。
2. 使用固定 SHA-256 的 \`unluac-rs v1.4.4\`：\`-D lua5.4 --generate-mode strict\`，得到 **SOURCE_GENERATED**。
3. 使用 \`luac5.4 -p\` 检查临时生成文件，得到 **PASS**。
4. 源码与派生 bytecode 在 CI 临时目录内使用后即清理；仅将元数据/诊断上传为短期 artifact。

\`luac -p\` 验证的是恢复 Lua 的语法可接受性。原函数依赖父 Closure、\`_ENV\`、Upvalue 和引擎 API 的情形下，独立提升到文件级 chunk **不具备原始运行时上下文**；因此此阶段 \`semantic_equivalence=NOT_TESTED\`。

## 已验证的 GitHub Actions

- [R1 原生方法与 CFG / 首轮 7 个合成测试全部通过](https://github.com/969981/SV_Resources/actions/runs/42551665001)。
- [R1 增量 12 个合成测试、原生追踪和严格反编译全部通过](https://github.com/969981/SV_Resources/actions/runs/42552433392)。
- [R1 原生方法严格反编译与 Lua5.4 语法检查通过](https://github.com/969981/SV_Resources/actions/runs/42551869428)。
- CI artifact：\`SLR-R1-GemSettingManager-CF-trace\`，包含 \`slr-gem-setting-cf-trace.json\` 和 \`slr-gem-setting-decompile.json\`；不含原版 BLUA 或反编译源码。
- 固定测试入口：\`tests/test_sv_lua54_trace.py\`（7 项全部通过）。

## 复现方法

从仓库根目录执行：

~~~bash
python -m unittest discover -s tests -p "test_sv_lua54_trace.py" -v

PYTHONPATH=tools/SV.Lua54/src python -m sv_lua54.trace \
  Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua \
  --module main \
  --class-hash C850E69B34478276C \
  --function-hash F7C68FEDB79AB6396 \
  --expected-sha256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 \
  --output slr-gem-setting-cf-trace.json
~~~

严格反编译复现还需要安装固定的 \`unluac-rs v1.4.4\` 和 \`luac5.4\`，可直接参考 \`.github/workflows/validate-sv-lua54-trace.yml\`。Windows PowerShell 需将 \`PYTHONPATH\` 设置为环境变量后再执行。

## 剩余缺口与下一步

**T02 #76 尚不能关闭。** 需继续实现 SSA/寄存器定值、跨 basic block 的 join、闭包 Upvalue 捕获、可疑分支 edge 诊断、间接调用的对象身份判定；针对 TBC/CLOSE/VARARG/复杂 table constructors 补充双后端和合成行为测试。

**T04/T07 尚不能关闭。** 下一步将 \`17900\` 的语法通过结果与原始父 Chunk 的模块初始化、真实外部对象输入和回调执行链关联。只有在安全隔离、引擎依赖可 mock 的情况下，才能对选定纯 Lua 路径开展 A/B 行为验证。严禁从 \`SOURCE_GENERATED + luac PASS\` 推导 \`RUNTIME_VERIFIED\`。

关联：[[sv-lua54-r0-native-ir-benchmark]] · [[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua-native-4.0.0]]。
