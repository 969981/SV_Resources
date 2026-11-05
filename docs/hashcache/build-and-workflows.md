---
aliases:
  - PokeDocs 缓存本地构建
  - PokeDocs 镜像工作流
tags: [python, github-actions, gfpak, pokedocs]
status: CONFIRMED
---

# 02 · 从 TXT 构建 SV / ZA 缓存

## 环境

- Python 3.9+；没有第三方 Python 包依赖。
- 仓库中已有实体文件 `tools/PokeDocs/`；纯 TXT→BIN 转换离线执行，无需游戏 ROM/密钥/Oodle。
- 在仓库根目录执行。Windows PowerShell 命令中的 `py -3` 可按本机环境换成 `python`。

### 一次生成 SV 和 ZA（默认包含嵌套 TRPAK）

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --overwrite
```

只构建 ZA：

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --game ZA --overwrite
```

只构建 SV，**仅 FD**、不含 TRPAK：

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --game SV --fd-only --overwrite
```

校验仓库已生成的两份文件而不改写：

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --verify-only
```

自定义原始目录与输出目录：

```powershell
py -3 .\scripts\Build-PokeDocs-HashCaches.py --source-root .\tools\PokeDocs --output-root .\tools\HashCaches --overwrite
```

不传 `--overwrite` 时，已有目标 BIN 会触发失败，避免静默覆盖。`--verify-only` 不允许同时指定 `--overwrite`。

### 直接调用底层 TXT→BIN 写入器

```powershell
py -3 .\scripts\Build-SV-GFPAKHashCache.py `
  --hashlist .\tools\PokeDocs\ZA\Hashlists\FileSystem\hashes_inside_fd.txt `
  --hashlist .\tools\PokeDocs\ZA\Hashlists\FileSystem\hashes_inside_trpak.txt `
  --output .\tools\HashCaches\ZA\GFPAKHashCache.bin `
  --report .\tools\HashCaches\ZA\hashcache-report.json `
  --overwrite
```

底层程序适用于 SV 和 ZA；文件名包含 `SV` 只是向后兼容既有脚本。默认生成 Hash 升序文件，输入文件的顺序决定重复 Hash 的优先级。

## 完整实体镜像工作流

Actions YAML 必须放在 `.github/workflows/` 才会被 GitHub 执行；它调用 `scripts/` 中的 Python 脚本，而不是把完整处理算法写在 YAML 内。

主工作流：[`.github/workflows/vendor-pokedocs.yml`](../../.github/workflows/vendor-pokedocs.yml)。

流程：

1. Checkout 仓库 `master`；从公开上游获取固定提交 `242039cb...`。
2. `rsync` 将完整源树拷贝至 `tools/PokeDocs/`，不保留上游 `.git/`；通过文件集合和 SHA-256 逐一对比。
3. 调用 `scripts/Build-PokeDocs-HashCaches.py`，分别生成 SV、ZA 的缓存和每游戏报告。
4. 使用 `--verify-only` 检查全部记录边界、UTF-8、排序、计数、大小与 SHA-256。
5. 对实体源文件和 BIN 显式暂存；若有变更，自动提交并推送到 `master`，不 force push。

工作流仅会固定源提交，不应被误当作「自动跟踪上游最新分支」。更新 PokeDocs 版本应先评估源文件变动及输出差异，再调整 pin 并复跑测试。

### CI 触发和 Artifact

- `vendor-pokedocs.yml`：手动 `workflow_dispatch`；以及其 YAML 或相关转换脚本发生 push 时执行。会对 `master` 写入变化。
- `build-sv-hashcache.yml`：单 SV 生成兼容性 Artifact 的独立工作流；`contents: read`，不会修改 Git 分支。
- `validate-unpack-plan.yml`：Python 语法和合成测试等 CI；测试不需要原生游戏资源。

进入仓库 [Actions](https://github.com/969981/SV_Resources/actions)，选择相应工作流并点击 **Run workflow**。请确认有 `contents: write` 权限及仓库分支规则允许 CI 推送。

## 输出目录

```text
tools/
├── PokeDocs/                       # 实体快照，不是 submodule
│   ├── LA/  LGPE/  SV/  SWSH/  ZA/
│   └── README.md
└── HashCaches/
    ├── SV/
    │   ├── GFPAKHashCache.bin
    │   └── hashcache-report.json
    ├── ZA/
    │   ├── GFPAKHashCache.bin
    │   └── hashcache-report.json
    └── provenance.json
```

继续：[[format-and-sources|01 · 格式]] · [[verification|03 · 校验与排错]]。
