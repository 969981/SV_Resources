---
aliases:
  - GFPAKHashCache 二进制格式
tags: [pokemon, gfpak, binary, hash]
status: CONFIRMED
---

# 01 · 来源文件与二进制格式

## 来源与版本

固定上游：`pkZukan/PokeDocs`，提交 `242039cbcd9de3f5a424de5b68ae581f7bed2b23`。

| 游戏 | FD 映射列表 | 嵌套 TRPAK 映射列表 |
| --- | --- | --- |
| SV | `tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_fd.txt` | `tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_trpak.txt` |
| ZA | `tools/PokeDocs/ZA/Hashlists/FileSystem/hashes_inside_fd.txt` | `tools/PokeDocs/ZA/Hashlists/FileSystem/hashes_inside_trpak.txt` |

输入是 UTF-8 文本，每个有效数据行至少有两个空白分隔字段：

```text
0123456789ABCDEF arc/example/path.trmdl
```

第一字段被解释为十六进制 UInt64 Hash（可以带 `0x`）；第二字段为文件名/路径。空行和注释跳过。单个 Hash 若有多个候选名称，**先读入的名称保留**，生成报告的 `stats.conflicts` 记录冲突数量。当前构建默认先 FD，再 TRPAK，去重后按数值 Hash 升序写入。不要改写已证明的原始 Hash 以适应大小写规则。

## 现代 gftool 的 BIN 格式

字节序：**little-endian**。不含 magic；从偏移 `0x00` 开始：

| 文件内偏移 | 类型 | 含义 |
| --- | --- | --- |
| `0x00` | `UInt64 LE`（8B） | 映射记录数 `N` |
| `0x08` | `UInt64 LE`（8B） | 第 1 条 Hash |
| `0x10` | `7-bit encoded int` | 第 1 条 UTF-8 字节长度 `L`，大小不固定 |
| 后续 `L` 字节 | `byte[L]` | 第 1 条路径 UTF-8 数据 |
| 后续 | 重复 | 剩余 `N-1` 条 `Hash + 7-bit length + UTF-8 string` |

`7-bit encoded int` 是 .NET BinaryWriter 的可变长整数字节长度：每个字节最低 7 位为有效数据，最高位表示是否后面还有字节。例如 UTF-8 长度 200 被编码为 `C8 01`。文字长度是 **UTF-8 字节数**，不是 Unicode 字符数量。

源码对照：`pkZukan/gftool/GFTool.Core/Cache/GFPakHashCache.cs` 中 `Open()`、`Save()`、`AddHashFromList()`。

## 与旧版 Switch-Toolbox 不兼容

旧版 `KillzXGaming/Switch-Toolbox/File_Format_Library/FileFormats/Hashes/GFPAKHashCache.cs` 使用：

- `UInt64` 工具版本 Hash（前 8 字节）
- `UInt32` 记录数（接下来 4 字节）
- 后续为 `UInt64 Hash + .NET string` 的重复项

现代 gftool **没有**开头的工具版本 Hash，记录数是 `UInt64`。相同文件名不代表相同格式；不要将此 BIN 直接覆盖到旧 Switch-Toolbox 的 `Hashes/` 目录。可按目标工具源码生成对应的旧版格式。

## 验证范围

现代格式已与相关读写源码和合成数据测试对账；名称语义来自 PokeDocs 社区列表。Hash 命中路径不证明游戏对象、文本或图鉴 ID 的语义引用，需要进一步检查游戏实际加载行为。

继续：[[build-and-workflows|02 · 构建]] · [[verification|03 · 校验]]。
