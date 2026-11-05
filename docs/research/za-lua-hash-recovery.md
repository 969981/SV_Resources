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

# ZA Lua C/E/F/S Hash 逆向与补全（第二轮）

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

| 类型 | 原已知 | 原未知 | 第一轮补全 | 第二轮净新增 | 累计补全 | 仍未知 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| C | 1,202 | 0 | 0 | 0 | 0 | 0 |
| E | 0 | 3 | 0 | 0 | 0 | 3 |
| F | 127 | 138 | 16 | **47** | **63** | **75** |
| S | 201 | 632 | 54 | **461** | **515** | **117** |
| **合计** | **1,530** | **773** | **70** | **508** | **578** | **195** |

- 本次 `recovered.tsv` 共 **578 条 Hash 行**；其中 **566 条**带固定 Haxe 重建源码文件/行号证据，剩余 **12 条**仅 Hash 精确命中。
- 先扫描 ZA 的 `source/main/` 共 **85 个** Haxe 文件，再扫描 `source/ext/`、`source/ti/` 共 **4 个**，以及 `source/event_ik/` 的 **12 个代表性事件文件**。当前未声称完整扫描全部 1,114 个事件文件。
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

`source-line-index.tsv` 列出了**全部 578 条**的 `kind / hash / name / original_line / source_sha / evidence_grade / reconstruction_path / reconstruction_line`；不依赖此表中个别展示样例。重建源码被固定至具体 Git SHA，逐文件使用 Git blob SHA 验证，防止后续 upstream 改动使证据失效。

## 5. 命令与复现

~~~powershell
# 在 SV_Resources 仓库根目录，生成并验证合并补全表
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --min-recovered 578
py -3 .\scripts\Recover-ZA-Lua-Hashes.py --verify-only --min-recovered 578

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

- **S 117 项**：优先对未扫描的 `source/event_ik/`、原始脚本容器、`cppbindings` 动态引用进行字段命名恢复。部分是原作者/重建者都暂未解析的匿名符号；不能把占位符当成正式名称。
- **F 75 项**：从其他事件专属方法、方法调用者、场景和脚本参数反向恢复，再做完整 Hash 检查。
- **E 3 项**：尚无可支持的候选，保留未知。
- **最终语义确认**：需要从 ZA 对应 Build ID 的原生 Lua/编译脚本及其调用链取得独立证据；第三方 Haxe 注解仅为具名重建交叉来源。

相关：[[sv-lua-hash-recovery|SV Lua Hash 恢复]] · [[../resource-provenance|来源证明原则]]。
