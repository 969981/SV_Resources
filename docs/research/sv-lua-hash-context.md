---
aliases: [SV Lua C/F 所属关系, 朱紫 Lua 类图与函数证据]
tags: [pokemon-sv, lua, reverse-engineering, c-hash, f-hash]
status: PARTIAL
source_commit: 1f843bd2517c707fbb47491dad58856eaa2c2cc7
---

# SV Lua 类 C 与函数 F 结构证据（跨版本）

> [!warning] 版本限制
> 本轮来源为 [SV-Script-RE](https://github.com/Martmists-GH/SV-Script-RE) 的固定旧版反编译文件。README 提及 SV 3.0.1 时期，**不是 SV 4.0.0 原生证据**。只对真实源码赋值关系进行结构核验，不把旧版引用自动视为当前版本的调用链。

## 可复现结果

- 外部提交：`1f843bd2517c707fbb47491dad58856eaa2c2cc7`
- 解析 `decompiled/C*.lua` 类文件：**3,462**。
- 取得 `function C..._prototype:F...` 方法定义：**18,948**，全部在对应 `split/C*.lua` 找到原始 `_ENV["C..."]["prototype"]` / `F...` 方法赋值。
- PokeDocs 原始 1,375 条未命名 C 中，**795** 有对应旧版类文件；这代表结构定位，**不是名称恢复**。
- 原始 116 条未命名 F，在旧版语料方法定义中命中 **0**；这不证明它们在 SV 4.0.0 不存在。
- 此次新增完整 FNV-1a-64 命中、且与原始方法赋值相符的注释名称：**0**。前阶段 [48 条 Hash 精确候选](sv-lua-hash-recovery.md)未更动。

## 源码索引

派生数据位置：[`tools/PokeDocs-Supplement/SV/Hashlists/Lua/context/`](../../tools/PokeDocs-Supplement/SV/Hashlists/Lua/context/)：

| 文件 | 证据范围 |
| --- | --- |
| `class_to_function.tsv` | 类 Hash→方法 Hash，定义所在文件、行号、源码 SHA256、原始 split 赋值确认 |
| `unmapped_c_context.tsv` | 全部未知 C，旧版语料是否存在、父类、已知 C 引用、namespace 提示 |
| `unmapped_f_owners.tsv` | 未命名 F 的直接所有者；当前没有匹配（只有表头） |
| `new_exact_comment_names.tsv` | 从人工注释提取的 Hash 完整匹配名称，当前没有新增（只有表头） |
| `context-report.json` | 来源、固定 SHA、版本限制、数据量与校验统计 |

> [!important] 证据等级
> `class_to_function.tsv` 是旧版真实代码的定义关系；`namespace_hints_NOT_PROOF` 只是同文件已知 C 引用的分布，不能证明未知类的命名空间。`HASH_EXACT_EDITOR_COMMENT` 只表示人工注释名称的哈希匹配，并非 4.0.0 原生语义确认。

## 运行与测试

在仓库根目录执行（Python 3.9+，无需 ROM 或 Oodle）：

~~~powershell
git clone https://github.com/Martmists-GH/SV-Script-RE.git "$env:TEMP\SV-Script-RE"
git -C "$env:TEMP\SV-Script-RE" checkout --detach 1f843bd2517c707fbb47491dad58856eaa2c2cc7
py -3 .\scripts\Index-SV-Lua-CallGraph.py --external "$env:TEMP\SV-Script-RE"
py -3 .\scripts\Index-SV-Lua-CallGraph.py --external "$env:TEMP\SV-Script-RE" --verify-only
py -3 -m unittest discover -s tests -p "test_sv_lua_callgraph.py" -v
~~~

[GitHub Actions 工作流](../../.github/workflows/index-sv-lua-context.yml) 取得固定提交至临时目录，自动生成索引。只提交派生 TSV/JSON，不拷贝 3.0.1 代码，不编辑原始 `tools/PokeDocs` 或前阶段 48 条名称。

## 下一阶段优先次序

1. **P0**：获取真实 **SV 4.0.0 Lua 原始字节码或完整解码文本**，登记原始文件路径、SHA-256、游戏版本和 Build ID。
2. **P1**：复用本索引器对 4.0.0 重建 `C→F` 定义表；分离 direct definition、prototype 调用、继承和普通字符串引用。
3. **P2**：针对尚未命名的 107 个 F（原始 116，前阶段候选 9），核对 4.0.0 存在性、所属类、定义地址和上下文，再进行命名候选的 FNV 哈希校验。
4. **P3**：将上一阶段 48 条精确 Hash 候选与新原生调用链逐条对账，未命中保留 UNKNOWN，不伪造完整映射。

关联：[[sv-lua-hash-recovery|上一轮名称恢复]] · [[../resource-provenance|证据规则]]。


## 4.0.0 原生 Lua 包定位（M1，已确认）

真实 4.0.0 的 `data.trpfd` 已经解析为 **408,641** 条文件索引、**23,589** 个包，并与镜像 HashCache 对账。通过 [`scripts/Locate-SV-Lua-Packs.py`](../../scripts/Locate-SV-Lua-Packs.py) 精确匹配虚拟路径，两个目标均唯一命中：

| 文件 | 文件 Hash | 原生 Pack Index | 原生 TRPAK 字节数 |
| --- | --- | ---: | ---: |
| `script/lua/bin/release/main/main.blua` | `BE21E65463B9A98F` | **21977** | 2,966,760 |
| `script/lua/bin/release/main_dynamic/main_dynamic.blua` | `AFB44A97ABCB6477` | **21978** | 1,028,024 |

[原生索引报告](../../Unpack/4.0.0/romfs/arc/data.trpfd/_index/lua_pack_locations.json) 包含每项所属 Pack、原始虚拟路径、来源索引 SHA-256。证据等级为 `CONFIRMED_NATIVE_TRPFD_INDEX`：只证明资源位于这些包中，**不代表文件已提取、反编译或证明运行中的 C→F 关系**。

为直接衔接 C/F 研究，已新增：
- [`scripts/Audit-SV-Lua-Bytecode.py`](../../scripts/Audit-SV-Lua-Bytecode.py)：在完整恢复、提取两份 `.blua` 后统计原始 C/F Hash 字符串是否出现、文件 SHA-256 与前 32 字节，并关联已映射和仍未知的 Hash。
- [`.github/workflows/extract-sv-lua-targets.yml`](../../.github/workflows/extract-sv-lua-targets.yml)：从已归档的 83 个 7z 分卷恢复校验原生 TRPFS，**只解包 21977 和 21978**，提交原生字节码和审核结果；失败时保留 Actions Artifact。
- [`tests/test_sv_lua_bytecode_audit.py`](../../tests/test_sv_lua_bytecode_audit.py)：不依赖 ROM 的合成数据校验测试。

**关键区分**：字节码内发现 `CXXXXXXXX...` 或 `FXXXXXXXX...` 仅能证明原始字节出现了对应标记；C→F 的直接定义关系需要 Lua 5.4 原型树 / 指令上下文解析验证。切勿将「Hash 字符串同现」改写成「属于这个类的方法」。

[针对两个包的 GitHub Actions 记录](https://github.com/969981/SV_Resources/actions/runs/41987437139)。如本页尚未补入原生解析结果，请以该工作流的最新成功提交和审计 JSON 为准。
