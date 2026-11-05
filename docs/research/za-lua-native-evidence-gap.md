---
aliases:
  - ZA Lua 原生调用证据缺口
  - ZA Lua 剩余 S Hash 引用图
tags:
  - pokemon-za
  - lua
  - hash-recovery
  - native-binary
  - reverse-engineering
status: PARTIAL
game: Pokemon Legends Z-A
source_snapshot: c7bc243ac4d28356dff9f06b6723330ea92247d5
evidence: THIRD_PARTY_RECONSTRUCTION_REFERENCE_ONLY
---

# ZA Lua 第四阶段：剩余 116 条 S 的引用证据与原生校验入口

> [!warning] 不可混淆的两类证据
> **THIRD_PARTY_RECONSTRUCTION_REFERENCE_ONLY**：来自第三方 Haxe 重建源码（已锁定 Git commit + 文件 Blob SHA + 行号）的声明/调用/读写位置，不能证明 ZA 原生 Lua 的对应指令，也不能证明字段原始名称。
>
> **RAW_HASH_LITERAL_ONLY**：之后在实际游戏提取的二进制中找到 8 字节原始 Hash 的字节位置，仍不能直接证明它是 Lua 指令、Hash 键、函数调用或可命名符号。要升级为 **CONFIRMED_NATIVE**，需要在对应版本原生 Lua/可执行文件中还原引用指令、对象与 consumer/prototype 调用链。

## 1. 当前可验证进度

来自 [[za-lua-hash-recovery|上一轮 ZA Lua Hash 恢复]]，原始 PokeDocs C/E/F/S 总共 2,303 行；原已知 1,530，前三轮补入 611 条精确名称候选，剩余 **162 条（S 116、F 43、E 3）**，这些未知名称在本阶段没有随意填写。

本阶段对固定版本 [Reisyukaku/ZAScripts](https://github.com/Reisyukaku/ZAScripts/tree/c7bc243ac4d28356dff9f06b6723330ea92247d5) 的 **85 个 source/main Haxe 文件**及 **5 个事件文件**展开精确占位符检索：

| 可核验指标 | 数量 |
| --- | ---: |
| 仍未知 S Hash 有引用位置 | **116 / 116** |
| 已记录的源码行证据 | **258** |
| 其中调用 CALL | 99 |
| 其中读取 READ | 31 |
| 其中写入 WRITE | 2 |
| 其中声明 DECLARATION | 117 |
| 其中 Hash ABI 标注 | 9 |
| 有引用记录的源码文件 | 18 |
| 已证明游戏原生调用语义 | **0** |

这些是**按行统计的 Haxe 源码表面引用**，不是 258 个独立底层调用，也不意味着每个 Hash 都有原生运行时使用证据。F 和 E 这轮没有做同等的全文件调用索引，所以 F/E 行中的零引用**不能解读为它们在任何源码里没有使用**。

## 2. 已生成的可审计产物

仓库路径：\`tools/PokeDocs-Supplement/ZA/Hashlists/Lua/\`

- \`unresolved-s-references.tsv\`：258 行，包括 \`kind/hash/path/line/role/scope/scope_line/excerpt/blob_sha/commit\`；每个 S 都可回溯到第三方 Haxe 具体行。
- \`unresolved-symbol-index.tsv\`：全部 162 个未知项，包括原始 PokeDocs 行号、原始文件 Blob SHA、声明/调用/读写计数、第一条引用路径和原生证据等级。
- \`unresolved-reference-audit.json\`：扫描范围、角色计数、未完成范围及 \`native_confirmations:0\`。
- \`scripts/Audit-ZA-Lua-Unresolved.py\`：验证上述证据、比对固定 Haxe 源文件 Blob SHA 和原始 TXT 行号；可独立输入用户本机真正提取的游戏二进制进行**只读** Hash 字面量搜索。
- \`tests/test_za_lua_native_evidence.py\`：以**人工生成**测试文件验证 Hash 字面量搜索跨块边界、大小端与空文件行为，不能代替实际游戏验证。

## 3. 后续优先静态定位对象

| Hash | Haxe 类型/位置 | 可以确认的重建代码用途 | 不能确认的事项 |
| --- | --- | --- | --- |
| \`0x4A78500276697F78\` | \`EventCameraCommand\`, \`IkScriptCommand\` | 多个相机处理函数调用该匿名成员 | 原始函数名、原生 Lua 指令地址 |
| \`0x27E43BC844883986\` | \`EventScriptManager\` | 具有布尔值字段的读取、写入 | 原始字段名、实际宿主状态对象 |
| \`0x81C31181B4CBD35B\` | \`CharacterCommand\` | 表情/眼眉/嘴部处理链调用 | 原始命名和原生参数类型 |
| \`0xCE2DB9206C87F41E\` | \`ResidentData\` | 居民/对象相关静态成员读写 | 原生类字段语义 |
| \`0x81E0610BF8B9337C\` | \`Ev_sys_megarematch\` | 作为菜单文本标签数组使用 | 原始符号命名 |
| \`0xD0F61B3481E43C08\` | \`Ev_sys_megarematch\` | 作为资源/敌方数据标签数组使用 | 原始符号命名 |

表中的“用途”只描述**可见 Haxe 重建源**调用上下文，不替原作者命名、不升格为 \`CONFIRMED_NATIVE\`。进一步核查 \`unresolved-s-references.tsv\` 中的每一条行号和周边代码。

## 4. 为什么本阶段尚无原生 Lua 确认

当前检查的 [ZA_Resources](https://github.com/969981/ZA_Resources) 仓库外层包含 \`data.trpfd\` 和以 \`data.trpfs.7z.*\` 分卷归档的 Trinity 资源，而没有在 Git 路径中发现直接可供分析的 ZA 原生 \`.blua\` / \`.luac\`。Library 中也没有找到能确定是 **ZA 原生** Lua 字节码的可用文件。**SV 的 \`main.blua\` / \`main_dynamic.blua\` 不等于 ZA 的原生 Lua，不能混用为 ZA 原生证据。**

当前流程不直接访问用户电脑的 NCA/ROM 私有数据；在没有真实分解后的 ZA 文件时不能臆造字节码地址、方法名、Hash 命中或运行时调用链。

## 5. Windows / PowerShell 复现

~~~powershell
# 从 SV_Resources 仓库根目录执行
py -3 .\scripts\Audit-ZA-Lua-Unresolved.py

# 还原与验证固定版本的 Haxe 交叉来源
New-Item -ItemType Directory -Force .research | Out-Null
git clone --filter=blob:none https://github.com/Reisyukaku/ZAScripts.git .research/ZAScripts
git -C .research/ZAScripts checkout --detach c7bc243ac4d28356dff9f06b6723330ea92247d5
py -3 .\scripts\Audit-ZA-Lua-Unresolved.py --haxe-root .research/ZAScripts

# 取得并确认真正的 ZA 游戏 Lua/原始资源文件后，再执行：
py -3 .\scripts\Audit-ZA-Lua-Unresolved.py --haxe-root .research/ZAScripts --native-file "X:\path\to\extracted_za_script.bin" --out .research\za-lua-native

# 检查 only-raw 报告，不会写回源文件或更新正式映射
Get-Content .research\za-lua-native\native-raw-literal-matches.json

# 无 ROM 的自动化单元测试
py -3 -m unittest discover -s tests -p "test_za_lua_native_evidence.py" -v
~~~

\`--native-file\` 必须是已经提取的二进制，不能直接传 \`.7z\`、\`.zip\` 分卷。默认单文件最多 512 MiB；若需要可用 \`--max-native-size\` 显式提高。输出包含文件 SHA-256、命中偏移、字节序和有限原始上下文，但不是字节码反汇编或原生调用确认。

## 6. 原生闭环所需证据

1. **资源定位**：由 Trinity \`TRPFD → TRPFS → 包/成员\` 提取实际游戏脚本容器；记录版本、原始文件路径、SHA-256、包索引及偏移。未提取成员不能记作已恢复。
2. **格式识别**：验证脚本 Header/版本、常量池、原型/函数表、字符串或 Hash 常量索引及原始偏移。若字面量未出现，不代表该 Hash 不被使用。
3. **引用链验证**：将具体常量池索引绑定真实字节码的读取/写入/调用操作及其对象所属类；可针对上述 Haxe 中的 \`CALL\` / \`WRITE\` 优先排序，但调用关系仍需独立证实。
4. **命名证据**：取得原生原始字符串或可靠跨版本同源名称，完整 FNV-1a-64 匹配后才考虑填写新的名称；如果只有运行时行为而无原名，保留 \`UNKNOWN\`，单列“推定用途”。
5. **审计与合并**：原始 PokeDocs 永远保持原样；所有新增证据进入 Supplement + Obsidian，CI 验证变化不破坏现有 611 条补全。

## 证据标签

- \`UNKNOWN_NO_NAME_EVIDENCE\`：没有可靠原名与对应 Hash 的校验命中。
- \`THIRD_PARTY_RECONSTRUCTION_REFERENCE_ONLY\`：只有重建 Haxe 的具名/匿名字段引用证据。
- \`RAW_HASH_LITERAL_ONLY\`：对真实输入字节的原样 64 位值命中，不等于 Lua 成员使用。
- \`HASH_EXACT_CANDIDATE\`：候选名称完整 FNV-1a-64 命中，但未被原生确认。
- \`CONFIRMED_NATIVE\`：原生读取操作、具体字段所属对象和语义调用链可追踪、可复验。

相关：[[za-lua-hash-recovery|ZA Lua Hash 恢复]]。
