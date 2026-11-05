# SV 4.0.0 — TREVT / TRPRE 原生调用与哈希映射（M3）

> 状态：原生路径哈希计算与 Prefetch 资源名双向验证已闭合；事件条件的运行时执行语义仍为 UNKNOWN。所有数据来自 Violet 4.0.0，原始 4.0.0/1/ 未改动。
>
> 前置文档：[[trevt-prefetch-format]]

## 1. TRPRE 映射覆盖情况

| 项目 | 数值 |
| --- | ---: |
| 两份 TRPRE 64 位值并集 | 17,760 |
| 与 4.0.0 TRPFD 408,641 条文件索引精确匹配 | 17,678 |
| 上述匹配且具有可读资源路径 | 17,678 |
| TRPFD 没有的哈希 | 82 |
| 再用 PokeDocs 文件名和原生哈希恢复 | 36 |
| 尚无路径证据 | 46 |
| 最终已验证路径与哈希关系 | 17,714 / 17,760 |

17,678 个 TRPFD 对应的路径使用原始大小写、正斜杠字符串重算，**17,678/17,678 均与索引中的 64 位值一致**。这是路径 ↔ 哈希对应关系的字节验证，不等同于实际运行时已加载。

36 条 PokeDocs 恢复来源：tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_fd.txt，其完整路径重新计算哈希全部命中。大多是 world/scene 下的 .trscn/.trsog（streaming_field、streaming_event、streaming_sound、outdoor_navmesh、pokedex_data_manager、resident_fly_landing 等）。这些名称不代表 4.0.0 TRPFD 中存在对应文件。

46 条剩余哈希包括两个预取数组各自下标 0–20 的 21 条，以及两个数组共同下标 22、23、4784、4790 的 4 条。它们是**未映射键**，不得自动猜测为物种、场景或程序资源。

## 2. 原生 64 位哈希算法

Violet 4.0.0 NSO Build ID 前 20 字节：709BFD66115298640155FCC4979DBA151C7CC79A

NSO SHA-256：F05BD7FEDAF6F0BA1481005CB48B1E43067966AA12C28E6932EAB9E7BC5750A4

main+0x1701C28–0x1701C68 的 MOV/MOVK、EOR、MUL 指令给出：

- 初始值：0xCBF29CE484222645（注意不同于标准 FNV-1a 64 位初值 0xCBF29CE484222325）。
- 乘数：0x100000001B3。
- 每字节异或，再乘以乘数，结果按无符号 64 位截断。

~~~python
def sv_hash(path: str) -> int:
    h = 0xCBF29CE484222645
    for b in path.encode("utf-8"):
        h = ((h ^ b) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return h
~~~

独立证据：sv_hash("event/trevt/bin/event.trevt") = 0x95E2585FAEC1683F。main+0x11BE11C..0x11BE128 恰好构造这个常数；main+0x11BE130..134 取出相同路径字符串，再把哈希与路径地址放入栈参数，main+0x11BE14C 调用 main+0x11C2FCC。这证明原生路径哈希与实参关系，**不证明被调用方的完整文件解析与事件条件执行**。

另一路：main+0x1701C90..0x1701C94 使用 data:/%s.trpre 字符串模板，附近存在 main+0x343C6C0、main+0x1701EA8、main+0xCC5C18 等调用。具体文件读取、哈希消费者和加载行为仍需闭合。

## 3. TREVT 条件引用图

688 个事件、1,376 个状态中共有 746 条条件引用：

- 746/746 条目标事件名称都在 TREVT 内存在；共引用 519 个不同的目标事件。
- 746/746 条均从源状态 Start 引用目标字符串 End。
- 746/746 条条件字段 3 的原始整数都为 2。
- End 没有出现在目标事件显式声明的状态列表中，因此**显式状态命中为 0**，不能把其视作直接验证通过的游戏状态。

这可能表达先决事件结束条件，但真正语义需要从 TREVT native 消费者验证，不能只凭名称/数字推断。

## 4. 证据输出与复现

~~~powershell
py -3 scripts/Unpack-SV-EventPrefetch.py --repo . --verify-only
py -3 scripts/Analyze-SV-EventPrefetch-Links.py --repo .
py -3 -m pip install capstone==5.0.6
py -3 scripts/Investigate-SV-EventPrefetch-Gaps.py --repo .
py -3 scripts/Recover-SV-Prefetch-Missing.py --repo .
~~~

路径均在 Unpack/4.0.0/romfs：

- event/trevt/bin/event.trevt/_index/event_reference_resolution.csv 与 event_reference_audit.json：事件边、字段直方图。
- event/trevt/bin/event.trevt/_index/native_exefs_evidence.json、native_string_xrefs.csv、native_callsite_disassembly.json：NSO 字符串、实参地址与原始指令窗口。
- system/prefetch/data/_index/prefetch_trpfd_exact_matches.csv 与 prefetch_trpfd_audit.json：17,678 个原生索引匹配。
- system/prefetch/data/_index/prefetch_trpfd_unmatched.csv、prefetch_match_categories.json：82 个原始缺口与分类统计。
- system/prefetch/data/_index/prefetch_unmatched_pokedocs.csv、prefetch_unmatched_pokedocs_audit.json：36 个路径恢复、46 个仍未知。

自动验证和只提交衍生报告的 GitHub Actions：.github/workflows/analyze-sv-event-prefetch-links.yml。来源文件、各版本 SHA 和独立列表统计均随 JSON 报告保存。

## 5. 仍待原生证明

1. TREVT 表字段 3 数值 2 的真实运行时含义，以及 End 的隐式终态判定。
2. main+0x11C2FCC 与 main+0x1701EA8、main+0xCC5C18 的具体文件读取、对象解析与 64 位哈希消费路径。
3. 剩余 46 个值的命名空间、路径生成算法或其他键类型；禁止以未经验证的猜测填入正式路径列。
