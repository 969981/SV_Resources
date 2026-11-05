---
aliases:
  - ZA Lua Hash 恢复
  - 传说 Z-A Lua 未映射符号
tags:
  - pokemon-za
  - lua
  - fnv1a
  - source-evidence
  - hash-recovery
status: PARTIAL
evidence: SOURCE_CORROBORATED
game: Pokémon Legends Z-A
source_snapshot: c7bc243ac4d28356dff9f06b6723330ea92247d5
---

# ZA Lua C/E/F/S Hash 逆向与补全（第三轮）

> [!warning] 重要证据边界
> 名称通过原 Hashlist 和 **完整 FNV-1a-64** 对账；大多数还可以在第三方 **Haxe 重建源码** `@:hashAbi` 标注中找到相同名称和 Hash。
> 这证明“名字与 Hash 一致，且有具名重建代码引用”，**并不证明游戏原生 Lua 字节码或 C++ 消费者的语义已经核实**。候选仍记 `HASH_EXACT_CANDIDATE`，单独的证据栏记 `SOURCE_CORROBORATED`，不要误写成 `CONFIRMED_NATIVE`。

## 1. 数据来源与固定版本

- **原始 PokeDocs**：[[../../tools/PokeDocs/ZA/Hashlists/Lua|tools/PokeDocs/ZA/Hashlists/Lua]]，四个 TXT 保持 Git blob 原值。上游：https://github.com/pkZukan/PokeDocs
- **第三方重建脚本**：<https://github.com/Reisyukaku/ZAScripts/tree/c7bc243ac4d28356dff9f06b6723330ea92247d5>（完整固定 commit `c7bc243ac4d28356dff9f06b6723330ea92247d5`）。
- **补充表**：[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua/recovered.tsv|recovered.tsv]]、[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua/source-evidence.tsv|source-evidence.tsv]]、[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua/source-line-index.tsv|source-line-index.tsv]]。
- **报告**：[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua/recovery-report.json|recovery-report.json]]、[[../../tools/PokeDocs-Supplement/ZA/Hashlists/Lua/source-audit.json|source-audit.json]]。
- **四份完整合并列表**：`lua_{c,e,f,s}_hashes.merged.txt`，按原顺序保留原映射，补全原来空白的行。
- **原始 Git Blob SHA**：C `d4c7cf3d8a69fc2a2e780f9e5662ddb3a95b95ad`，E `616a23c78d9fac11127a0c80030db4e03a3689e6`，F `9308caec2da0fc9207e77d69401ebcb99aaf5348`，S `a627d6140b8af3cb68cac8a97b2efcd4714d6251`。

## 2. Hash 算法与校验依据

Lua 标识符使用 FNV-1a-64，offset basis `0xCBF29CE484222645`，prime `0x100000001B3`，每步先异或字节再乘法截断到 64 位。使用原始字符串 UTF-8、保留大小写、下划线和拼写。

~~~python
MASK = 0xFFFFFFFFFFFFFFFF

def fnv1a64(name: str) -> int:
    value = 0xCBF29CE484222645
    for b in name.encode("utf-8"):
        value = ((value ^ b) * 0x100000001B3) & MASK
    return value
~~~

回归样例：`GetText → 0xFDA9FDCF981A0210`，`Destroy → 0x1C2AA00ADAC52EC5`。所有原本已命名条目（1,530 项）均重新计算一致。**64 位 Hash 是单向映射，不是可通用反解的加密文本**；名字来自词典或具名重建源码，再做精确校验。

## 3. 分阶段恢复结果

| 类型 | 原已知 | 原未知 | 第一轮 | 第二轮净增 | 第三轮净增 | 累计补全 | 仍未知 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| C | 1,202 | 0 | 0 | 0 | 0 | 0 | 0 |
| E | 0 | 3 | 0 | 0 | 0 | 0 | 3 |
| F | 127 | 138 | 16 | **47** | **32** | **95** | **43** |
| S | 201 | 632 | 54 | **461** | **1** | **516** | **116** |
| **合计** | **1,530** | **773** | **70** | **508** | **33** | **611** | **162** |

- `recovered.tsv` 当前累计 **611 条 Hash 行**；其中 **599 条**带固定 Haxe 重建源码文件/行号证据，剩余 **12 条**仅 Hash 精确命中。
- 第二轮：扫描 ZA 的 `source/main/` **85 个** Haxe 文件、`source/ext/` / `source/ti/` **4 个**及 `source/event_ik/` 的 **12 个**代表性事件文件。第三轮又扫描 **29 个具名事件文件**、**55 个 `Ev_sys_*` 文件**、**16 个大体积 `Ev_m*` 文件**和 **12 个大型 `Ev_sub_*` 文件**；部分类别有重叠，均为定向抽样而非 1,114 份事件文件全覆盖。
- 新增 S 项尤其集中在 `main.event.ik.command.IkScriptCommand`，涉及 `FObj_Set_Pos`、`FObj_Set_Animation`、`Create_Npc_Dynamic`、`Wait_Camera` 等。
- 未命名占位符如 `S7F59DD7D38BDD2C1` 不算恢复；候选 Hash 不符的条目也拒绝收录。

## 4. 原始行号与具名来源样例

以下原始行号从 PokeDocs 源 TXT 的第一行开始计数（1-based），重建源码行号也采用 1-based。

| 类别 | Hash | 具名符号 | 原始 TXT 行 | 重建源码 |
| --- | --- | --- | ---: | --- |
| S | `0x0001E7A91F3857A7` | `__SetActionRequestHaldes` | 1 | `IkScriptCommand.hx:90` |
| S | `0x18F76D95C9BE984F` | `ActionRequestHandles` | 86 | `IkScriptCommand.hx:21` |
| S | `0xEED5C57DB4A3CB5D` | `ChrAccessorForEventHandles` | 770 | `IkScriptCommand.hx:15` |
| S | `0xFDA8853CE5A8A9F5` | `CreateRotomPhoneLooseWait` | 820 | `IkScriptCommand.hx:1422` |
| F | `0x0D1C1D08BFBBE2C7` | `MoveFrontBench` | 14 | `BenchEvent.hx:185` |
| F | `0x59ADE74F1BA73143` | `SelectTimeSkip` | 83 | `BedEvent.hx:36` |
| F | `0xA43D30278CBAEF88` | `MoveBedSide` | 174 | `BedEvent.hx:89` |
| F | `0xFCE0596F89C21569` | `CreateDrink` | 263 | `CafeEvent.hx:338` |

`source-line-index.tsv` 列出了**全部 611 条**的 `kind / hash / name / original_line / source_sha / evidence_grade / reconstruction_path / reconstruction_line`；不依赖此表中个别展示样例。重建源码被固定至具体 Git SHA，逐文件使用 Git blob SHA 验证，防止后续 upstream 改动使证据失效。

## 5. 命令与复现

~~~powershell
# 在 SV_Resources 仓库根目录，生成并验证合并补全表
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --min-recovered 611
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 611

# 获取固定重建源码（独立临时目录，不放入 tools/PokeDocs）
New-Item -ItemType Directory -Force .research | Out-Null
git clone --filter=blob:none https://github.com/Reisyukaku/ZAScripts.git .research/ZAScripts
git -C .research/ZAScripts checkout --detach c7bc243ac4d28356dff9f06b6723330ea92247d5

# 重新校验原始 TXT 行号、具名 @:hashAbi、文件 blob SHA 和证据 TSV
py -3 .\scripts\Verify-ZA-Lua-Sources.py --verify-only --reconstruction-root .research/ZAScripts

# 运行无 ROM 的合成测试
py -3 -m unittest discover -s tests -p 'test_za_lua_hash_recovery.py' -v
py -3 -m unittest discover -s tests -p 'test_za_lua_source_evidence.py' -v

# 全量扫描重建源里尚未加入候选表的 S/F 名称，不直接修改原表
py -3 .\scripts\Verify-ZA-Lua-Sources.py --scan-reconstruction --reconstruction-root .research/ZAScripts
~~~

`--scan-reconstruction` 只打印新的完整 Hash 命中结果，允许继续覆盖尚未扫描的事件脚本；需要确认源码签名后才能导入。GitHub Actions `verify-za-lua-hashes.yml` 用相同的固定源提交与命令验收。

## 6. 剩余研究问题

- **S 116 项**：优先对未扫描的 `source/event_ik/`、原始脚本容器、`cppbindings` 动态引用进行字段命名恢复。部分是原作者/重建者都暂未解析的匿名符号；不能把占位符当成正式名称。
- **F 43 项**：从其他事件专属方法、方法调用者、场景和脚本参数反向恢复，再做完整 Hash 检查。
- **E 3 项**：尚无可支持的候选，保留未知。
- **最终语义确认**：需要从 ZA 对应 Build ID 的原生 Lua/编译脚本及其调用链取得独立证据；第三方 Haxe 注解仅为具名重建交叉来源。

相关：[[sv-lua-hash-recovery|SV Lua Hash 恢复]] · [[../resource-provenance|来源证明原则]]。

## 7. 第三轮：具名事件与系统事件源文件映射（新增 33 条）

第三轮为**原始未命名 F/S Hash 行**补充了 33 个新的完整 Hash 精确命中：F **32**、S **1**，没有从未验证的字段语义猜测中强行填表。重建源码固定到 `Reisyukaku/ZAScripts@c7bc243ac4d28356dff9f06b6723330ea92247d5`，在 `source-evidence.tsv` 逐条记录 Git Blob SHA、行号和原始 Hashlist 行号。

| 原始表/行 | Hash | 名称 | Haxe 重建源码/行 |
| --- | --- | --- | --- |
| S:815 | `0xFC7FE40C2148D84C` | `MakeNewPosition` | `PokemonCenterEvent.hx:30` |
| F:40 | `0x2A226CA7CCF66FB1` | `ExecuteSabuQuest` | `PokemonCenterEvent.hx:409` |
| F:90 | `0x60EC4A7B50635A39` | `ExecuteRestMenu` | `PokemonCenterEvent.hx:647` |
| F:147 | `0x90259C6F0AB55B1C` | `SearchShopMessageData` | `Ev_sys_contextshop.hx:736` |
| F:1 | `0x005F73ADAA24DD75` | `ConfirmCut` | `Ev_sys_salon.hx:126` |
| F:172 | `0xA1D08DAE52DE54C7` | `open_destination_category_menu` | `Ev_sys_taxi.hx:67` |
| F:103 | `0x6FD5DDCE1500EF85` | `FirstPlusWazaSequence` | `Ev_sys_kaiden.hx:81` |
| F:112 | `0x77426626602B5E40` | `ShowRootContextMenu` | `Ev_sys_tryagain_mega.hx:58` |
| F:49 | `0x31B4F2F354659CF5` | `WaitActionAndFixCamera` | `WildZoneEntrance.hx:248` |

自动校验由 `Recover-ZA-Lua-Hashes.py`（原行不覆盖，验证 Hash 与数量）及 `Verify-ZA-Lua-Sources.py`（具名 `@:hashAbi`、1-based 行号、固定源码 Blob SHA）完成。所有证据可由 `source-line-index.tsv` 和 `source-audit.json` 独立索引。

**尚未完成**：当前未知 **162**（S 116、F 43、E 3）。第三轮扫描的大型主线和支线脚本样本几乎只包含常见 `mainBody` 注解，并无进一步新名称。**不应将“已检查某些事件脚本”扩张为“完整解析了 ZA 原生 Lua”**。ZA v2.0.2 的原生 Lua 字节码及其字段消费者目前并无本轮可复核的独立交叉链，因此 `CONFIRMED_NATIVE` 仍然为零；仅通过第三方具名重建注解可判 `SOURCE_CORROBORATED`。

固定重建源码克隆后可遍历整个 `source/`（包含此前未扫描的上千个事件文件），列出尚未映射的所有具名 Hash 供人工核验；这不会修改 PokeDocs：

~~~powershell
py -3 .\scripts\Verify-ZA-Lua-Sources.py --scan-reconstruction --reconstruction-root .research/ZAScripts
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 611
py -3 .\scripts\Verify-ZA-Lua-Sources.py --verify-only --reconstruction-root .research/ZAScripts
~~~

## 第四阶段：162 个原始未命名符号的引用与原生证据入口

- [ZA Lua 116 条 S 的源引用索引与原生证据缺口](za-lua-native-evidence-gap.md)
- `unresolved-s-references.tsv`：116 条 S 全部在第三方 Haxe 中有至少一个声明或调用位置，记录 258 处可追溯源码行。
- `unresolved-symbol-index.tsv`：S 116、F 43、E 3 共 162 条未知的原始行号和证据等级。
- 新增校验器 `scripts/Audit-ZA-Lua-Unresolved.py` 可通过 `--native-file` 输入实际解出的二进制，但仅产出 `RAW_HASH_LITERAL_ONLY`，不能冒充 `CONFIRMED_NATIVE`。
