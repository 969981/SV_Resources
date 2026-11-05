# SV 4.0.0 — TREVT 与 TRPRE 原生解包

**状态：三份原始文件已完成结构导出，字段语义部分仍待原生代码验证。**

输入是仓库 4.0.0/1 中的 Violet 4.0.0 文件；输出全部位于 Unpack/4.0.0/romfs 下相同相对路径，并以完整源文件名作为导出子目录。原始字节保持不变。

## 1. 原始文件与校验

| 文件 | 字节数 | SHA-256 |
| --- | ---: | --- |
| event/trevt/bin/event.trevt | 183,920 | 24B65CFC73DE7358B5223BE8741091BAFD36ECB40697DDC341F9F45BA8D9E349 |
| system/prefetch/data/global-resident_0.trpre | 115,976 | A0F611E502602691C3CB2097609B487C746217E1CD48B0433DF77C390B2E559F |
| system/prefetch/data/global-resident_1.trpre | 115,968 | E2B823A5ECD721BA11AF5092CFAFF530311408CB0428B5877DEC32DB86E7B4B9 |

脚本读取输入后重新计算 SHA-256，并计算 Git blob SHA-1 来关联原始仓库对象；任何大小或哈希不匹配都会直接失败。

## 2. event.trevt 字节结构

已直接观察到 FlatBuffers 结构：

- 0x00 根对象偏移为 0x10，根 vtable 位于 0x08。
- 根字段 0 的原始值为 2；尚不能直接称为格式版本号。
- 根字段 1 为 688 个事件表引用。
- 事件表字段 0 为事件名称，字段 1 为状态表数组，字段 2/3/4 在该文件中都是空向量，字段 5 为字符串标签数组。
- 状态表字段 0 为名称、字段 1 为条件组表数组、字段 2 为字符串形式的后继状态名称数组。
- 条件组又引用条件表；条件表字段 0/2 是名称型引用，字段 3 保留原始无符号整数。条件具体运行时语义尚未证明。

最终得到 **688 事件、1,376 状态、746 条条件引用、221 个带标签事件**。

导出物：

| 目标文件（在源文件名子目录下） | 作用 |
| --- | --- |
| parsed/events.json | 完整事件、状态、标签、条件组及其原始顺序 |
| parsed/event_states.csv | 按事件展开的 1,376 个状态与跳转 |
| parsed/event_references.csv | 746 条条件表引用 |
| _index/provenance.json | 原始哈希和逐层计数 |

例如名称有 ajito_aku_010、common_0185；条件引用中的 team_0020、End 是直接读出的字符串，不代表已证明具体游戏业务逻辑。

## 3. Prefetch TRPRE 字节结构

两个文件均具有：

- 0x00 存储根偏移 0x0C，根 vtable 位于 0x06。
- 根字段 0 为长度明确的 vector<uint64>。
- 数组的元素为 little-endian 64 位整数，以 16 位十六进制表示输出，可无损恢复。

| 文件 | 64 位条目 | 不同值 |
| --- | ---: | ---: |
| global-resident_0.trpre | 14,494 | 14,494 |
| global-resident_1.trpre | 14,493 | 14,493 |

两份数组共有 11,227 个不同的数值，仅 _0 有 3,267 个，仅 _1 有 3,266 个。输出中每行包括数组序号、**原始数据字节偏移**与十六进制值。

每个文件导出 parsed/hashes.csv、_index/provenance.json；共同统计放在 system/prefetch/data/_index/prefetch_comparison.json。

注意：hash64_hex 是数组数值的表示形式，**尚未通过原生调用链确认是 Trinity 文件路径哈希、资源键或者其他索引**。不应凭编号猜测资源名称。

## 4. 可复现命令

Python 3.10+，纯标准库，不需要 Oodle DLL，也不需要 flatc 命令行工具。在仓库根目录执行：

~~~powershell
py -3 scripts/Unpack-SV-EventPrefetch.py --repo . --verify-only
py -3 scripts/Unpack-SV-EventPrefetch.py --repo . --overwrite
py -3 -m unittest discover -s tests -p test_unpack_sv_event_prefetch.py -v
~~~

默认模式检测已存在结果；若数据不相同则拒绝覆盖。verify-only 重新读取原始文件并逐份比较九份结果；overwrite 明确重建导出文件。任何模式都不改写 4.0.0/1。

## 5. 后续需要证实

1. 从 ExeFS 消费者确认 TREVT 条件表字段 3 的枚举语义与状态执行逻辑。
2. 从 TRPRE 的运行时加载函数确认两个 resident 列表的实际用途，及其与 4.0.0/arc 虚拟文件哈希映射的联系。
3. 进一步比对其他更新版本的原始 TRPRE，不能仅凭文件名中的 _0 / _1 就臆断平台或版本含义。
