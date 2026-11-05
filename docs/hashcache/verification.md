---
aliases: [GFPAK 缓存校验, PokeDocs 证据链]
tags: [verification, sha256, evidence, trinity]
status: CONFIRMED
---

# 03 · 完整性检验、结果与故障排查

## 已验证的一组构建基线

上游固定提交：`242039cbcd9de3f5a424de5b68ae581f7bed2b23`。该实体快照包含 **152 个文件**，总计 **120,067,561 字节**（来自 GitHub 原始树，未将目录计入文件数）。

以下数值来自已经成功的初次镜像构建和已提交的 `tools/HashCaches/provenance.json`：

| 游戏 | Hash 数量 | BIN 字节数 | SHA-256 |
| --- | ---: | ---: | --- |
| SV | 408,004 | 31,746,864 | `3954f289124b7df27c472ada42af2a17f7ce54bc3c1bf388a8154204aabc5e37` |
| ZA | 238,524 | 18,683,766 | `e91f5e09084c84f665762a1a8ce73482a858255061c64e71c60ba34dafb0ec82` |

以上仅适用于 **FD + TRPAK**、当前固定提交和当前生成脚本。换版本、调整列表顺序、增加或删除候选 Hash 后，统计与摘要可能改变；应以当次生成报告为准。

## 正式验证指令

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --verify-only
py -3 -m unittest discover -s tests -p "test_*hashcache*.py" -v
```

为覆盖新增加的整合测试，推荐直接运行：

```powershell
py -3 -m unittest discover -s tests -p "test_*.py" -v
```

`--verify-only` 会进行：

1. 检查缓存文件存在、头部记录数非零。
2. **逐条**读取 UInt64 Hash、可变长 UTF-8 字节数和名称字节，排除越界及损坏数据。
3. 核对 Hash 严格升序且无重复，文件末尾没有多余字节。
4. 对比 `hashcache-report.json` 的记录数、文件大小、SHA-256。
5. 对比 `provenance.json` 中已有的游戏记录数、文件大小、SHA-256。

`provenance.json` 中 `games[].inputs[]` 还可追踪生成时所用每个 TXT 的字节数和 SHA-256；但「只读校验」不代替游戏 ROM 的原生命中测试。

## 排错表

| 现象 | 原因方向 | 建议操作 |
| --- | --- | --- |
| 缺失 Hashlist | 克隆不完整、大小写错误或错用了子模块路径 | 查看 `tools/PokeDocs/<game>/Hashlists/FileSystem/` 是否有两份 TXT |
| 生成失败提示已存在 | 避免静默覆盖的保护 | 确认目标后使用 `--overwrite` |
| 数量与报告不一致 | BIN 损坏或更新流程中断 | 保存现场，重新生成、核对来源 |
| SHA-256 不一致 | 资源变更、输出覆盖或数据损坏 | 核对 `provenance.json`、输入 Hashlist SHA-256 和源码提交 |
| 找不到资源路径 | 社区 Hashlist 尚未覆盖或资源版本变化 | 先与对应 TRPFD Hash 集合对比；不可凭缺少路径就断言未收录在 ROM |
| gftool 读取异常 | 使用了不匹配的 BIN 格式或工具版本 | 对照现代 `GFPakHashCache.cs`；不要混用旧 Switch-Toolbox |
| GitHub Actions push 403 | Workflow 没有分支写入权限 | 核实 `contents: write`、组织策略、分支保护 |
| CI 镜像不同步 | 上游 commit pin 或缓存未更新 | 修改经审查的固定提交，重新执行镜像流水线 |

## 证据等级与后续研究

- **CONFIRMED**：镜像文件与固定提交逐文件 SHA-256 一致，且实际是 Git 普通文件而非 160000 模式 gitlink；TXT→BIN 字节结构可重现。
- **CONFIRMED**：当前固定来源下 SV/ZA 缓存可通过二进制结构校验。
- **UNKNOWN**：SV 4.0.0、ZA 2.0.2 的所有 Hash 是否已经有可读路径名称。应从对应原始 `data.trpfd` 全部记录与列表交叉对账，并保留 unmatched 的原生 Hash，不要猜测路径。

参见 [[README|缓存索引]]、[[build-and-workflows|构建]]、[原始来源与校验准则](../resource-provenance.md)。
