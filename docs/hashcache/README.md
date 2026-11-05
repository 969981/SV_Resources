---
aliases:
  - GFPAKHashCache
  - GFPAK 缓存构建
  - PokeDocs TXT 转 BIN
tags:
  - pokemon
  - trinity
  - gfpak
  - sv
  - za
status: CONFIRMED
---

# PokeDocs → GFPAKHashCache.bin 知识库

> [!info] 适用范围
> SV（朱／紫）和 ZA（传说 Z-A）的文件系统 Hash → 路径名称缓存。针对 `pkZukan/gftool` 的 GFPAKHashCache 二进制格式，不是游戏资源、RomFS，也不是旧版 Switch-Toolbox 的专用缓存。

## 导航

- [[format-and-sources|01 · TXT 来源和 BIN 二进制格式]] — 字段、偏移、冲突处理、旧格式差异。
- [[build-and-workflows|02 · 本地构建与 GitHub Actions]] — 完整镜像、单游戏生成、批量生成和 CI。
- [[verification|03 · 完整性、版本与故障排查]] — SHA-256、逐条解析、回归测试、结果证据。

上述链接为 Obsidian Wikilink；GitHub 用户可按顺序访问 [格式](format-and-sources.md)、[构建](build-and-workflows.md)、[验证](verification.md)。

## 实体文件位置

`tools/PokeDocs/` — PokeDocs 固定提交的 **完整普通文件副本**（非 submodule、非链接、非仅引用）。包含 LA、LGPE、SV、SWSH、ZA；原始目录结构不重排。

`tools/HashCaches/SV/GFPAKHashCache.bin` — SV 独立缓存。

`tools/HashCaches/ZA/GFPAKHashCache.bin` — ZA 独立缓存。

`scripts/Build-SV-GFPAKHashCache.py` — TXT → BIN 的单目标格式写入器（名字保留兼容已有调用，也支持 ZA）。

`scripts/Build-PokeDocs-HashCaches.py` — SV/ZA 两游戏构建、逐条校验、输出来源记录的统一入口。

`.github/workflows/vendor-pokedocs.yml` — PokeDocs 固定提交完整复制、验证、构建、回写 Git 的流水线。

`.github/workflows/build-sv-hashcache.yml` — 单独生成 SV CI 下载 Artifact 的历史辅助流水线。

## 研究结论与边界

- **CONFIRMED**：BIN 结构与 gftool `GFTool.Core/Cache/GFPakHashCache.cs` 的读写器一致；可使用已提交的 TXT 完整离线重建。
- **CONFIRMED**：两套游戏分别生成不同的缓存；使用 `hashes_inside_fd.txt` 和 `hashes_inside_trpak.txt`。
- **UNKNOWN**：Hashlist 是否覆盖每个特定游戏版本的全部资源。不能将「缓存成功」等同于「RomFS 100% 文件名恢复」。
- 构建缓存不需要密钥、RomFS、Oodle DLL，也不进行游戏文件提取。

相关索引：[[../README|技术文档首页]] · [脚本目录](../../scripts/README.md) · [仓库来源规范](../resource-provenance.md)。
