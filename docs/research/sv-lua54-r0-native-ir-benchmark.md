---
aliases: [SV Lua54 R0 原生解析与反编译基准, SLR 2026-11-09 首轮实测]
tags: [pokemon-sv, lua54, pokedocs, bytecode, unluac, obsidian]
status: VERIFIED_PARSER_PARTIAL_DECOMPILATION
source_version: "4.0.0"
date: "2026-11-09"
epic: "https://github.com/969981/SV_Resources/issues/73"
---

# SV 4.0.0 — SLR R0：六模块原生无损 IR 与 100 函数基准

> [!important] 状态边界
> 本轮完整验证的是 **Lua 5.4 二进制字段解析/重编码**，以及 100 个拆出为独立原型字节码的样本使用严格反编译器后通过 **Lua 5.4 语法检查**的比例。不是 100 个模块的游戏行为等价证明，也没有还原 Game Freak 的原始源码名称、注释或真实运行环境。

## 1. 原始输入与无损性验证

输入均来自本仓库 \`master\` 上的
\`Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/\` 六个 \`.blua\`。原始字节保持只读。

| 模块 | Bytes | 原生 SHA-256 | Prototype | 指令 | 常量 |
| --- | ---: | --- | ---: | ---: | ---: |
| main | 12,912,264 | c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815 | 37,743 | 1,833,341 | 332,220 |
| main_dynamic | 5,342,713 | ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572 | 7,036 | 832,702 | 119,617 |
| dll_danbattle | 100,806 | cece0eca36573aa2228dc1ef6b3862c353fabc648452918f58ad6df6886e67b3 | 522 | 15,015 | 2,490 |
| dll_picnic | 17,705 | 5d3ffe4c7dfbfff4df6e9615c7d8c1b816f9e29db55d34baffee952f054c1085 | 86 | 2,722 | 519 |
| dll_stadium | 181,127 | 368017ffb8aeca7145c0951c03c5f3535b0d54cd9be6c3ea50d03326870c7ee6 | 564 | 27,195 | 4,556 |
| dll_util | 28,261 | bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01 | 133 | 4,862 | 624 |
| **合计** | **18,582,876** | — | **46,084** | **2,715,837** | **460,026** |

- Lua 5.4 版本字节、指令/整数/浮点 ABI = 4/8/8；全部按标准小端格式成功解析。
- 整个文件每个 Prototype 的所有字段都有结构化表示：原始 opcode words、整数/浮点常量原始 8-byte payload、字符串、Upvalue（三字节记录）、嵌套子原型、lineinfo、abslineinfo、locvars、Upvalue name、位置等。
- 六个输入都完成 **parse → encode → 逐字节完全一致**。不是仅比对数量或重新计算 Hash。
- 统计六文件全部为：标准 Lua Debug lineinfo = 0、abslineinfo = 0、locvars = 0、upvalue_names = 0、with_any_debug = 0。说明源文件的标准调试信息已剥离；**不代表原版编译前不存在对应变量名**。

详情：
- [验证 manifest](../../tools/SV.Lua54/fixtures/native_manifest.json)
- [无损解析器](../../tools/SV.Lua54/src/sv_lua54/chunk.py)
- [六文件清单 CLI](../../scripts/Export-SV-Lua54-Manifest.py)
- [合成测试](../../tests/test_sv_lua54_parser.py)

## 2. 100 个分层原型的严格反编译基准

### 取样方法

使用固定模块配额，依据原始 Proto ID 派生 SHA-256 顺序，覆盖 tiny/simple/medium/large/branch/loop/closure/vararg/close。根原型（含数万子函数）不直接作为独立样本；跳过超过 10,000 条指令的巨型原型。原始 SHA/Code offset/Proto ID 在 JSON 中可追踪。

| 模块 | 样本 | 生成 Lua 且通过 Lua 5.4 语法 |
| --- | ---: | ---: |
| main | 60 | 58 |
| main_dynamic | 25 | 24 |
| dll_danbattle | 5 | 5 |
| dll_picnic | 3 | 3 |
| dll_stadium | 5 | 5 |
| dll_util | 2 | 2 |
| **总计** | **100** | **97** |

- 后端：[unluac-rs v1.4.4](https://github.com/x3zvawq/unluac-rs/releases/tag/v1.4.4)，Linux x86_64 版本 SHA-256：\`45dd5ef946fbd18a2e284267e32c2b14caeabe7dfc76d688f704244c5c3d4baf\`。
- 模式：Lua 5.4 / strict codegen；生成结果交给 \`luac5.4 -p\` 复验。
- **97/100 \`LUA_SYNTAX_OK\`**，另外 3 个 \`DECOMPILE_FAILED\`；无超时。
- **没有执行完整原游戏脚本或产生游戏行为对照**。即使 syntax_ok，也不能自动标记 \`BEHAVIOR_VERIFIED\`。

原型提升为独立 chunk 会保留该原型的字节码/常量/子原型，但不再拥有原始父函数的 \`_ENV\` / Upvalue 实例和调用环境，**仅供静态反编译测试，不是能单独在游戏中加载的模块**。

### 3 个精准失败样本

| 模块 | Proto ID | 分层 | 错误 |
| --- | ---: | --- | --- |
| main | 2406 | large | \`HIR proto#0 still contains residual table-set-list during AST lowering\` |
| main | 3769 | close | 同上 |
| main_dynamic | 752 | close | 同上 |

优先从这三个原型的 \`SETLIST\`、构造器或多返回值表达式沿 CFG/IR 追溯，确定是反编译器限制还是我们提升样本时的上下文缺失；在得到源码/行为证据前不应自动重写生成结果。

- [固定 100 样本元数据](../../tools/SV.Lua54/fixtures/benchmark_cohort.json)
- [严格后端 100 样本状态](../../tools/SV.Lua54/fixtures/benchmark_backend_report.json)
- [分层取样及报告脚本](../../scripts/Benchmark-SV-Lua54.py)
- [GitHub Actions R0 工作流](../../.github/workflows/validate-sv-lua54-reconstruction.yml)

## 3. 可复现命令

从仓库根目录（Python 3.12）：

~~~bash
python -m unittest discover -s tests -p "test_sv_lua54_parser.py" -v
python scripts/Export-SV-Lua54-Manifest.py --verify-only
python scripts/Benchmark-SV-Lua54.py --verify-only

# 在本机取得上方固定 SHA 的 CLI、安装 Lua 5.4 luac 后：
python scripts/Benchmark-SV-Lua54.py --verify-only \
  --decompiler /path/to/unluac-1.4.4-linux-x86_64 --luac luac5.4
~~~

生成的派生二进制和反编译文本仅留于临时目录；**Git 只持久化元数据与诊断**，不持久化拆分的游戏字节码和完整恢复源码。

## 4. 下一阶段行动

- **T00 #74**：原生六输入基线及严格校验已达成，可以验收关闭。
- **T01 #75**：无损 IR/parse/encode/字段完整性已达成第一版本；继续加跨平台/异常边界测试以增强可靠性。
- **T03 #77**：固定样本与 unluac-rs 严格模式已完成第一后端实验；还需要第二后端对照、函数级诊断、生成源码的语义验证（不应关闭）。
- **T02 #76**：开始 CFG 与上游 Upvalue 依赖的恢复；与 #77 并行。
- **T05 #79**：将 PokeDocs C/F/S/E overlay 与真实 Proto ID / PC 绑定；不修改原始 Hashlists。

相关：[[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua-native-4.0.0]] · [[sv-lua-native-4.0.0-followup]]。
