# SV Trinity M2 全量解包：进程级并行与安全续跑

> 状态：工具实现与 ROM-free 合成测试；完整 8GB 源文件上的并行性能和最终 408,641 文件审计仍需在 Windows Actions 实际验证。
> 原生依据：Violet 4.0.0 `data.trpfd`、`data.trpfs`；23,589 packs / 408,641 descriptor records。

## 原有瓶颈

原工作流每 100 包运行一次独立的 `dotnet run`，然后串行执行原生文件 SHA-256、>90MiB 7z 分卷及测试、Git 单批提交、推送。每轮 GitHub Actions 还要重新验证并恢复约 8GB 的 TRPFS 来源。原生内容与原有提交不需要重复解析。

## 本次并行策略

- `--workers 1` 是原有串行安全回退；Windows Actions 默认 `2`，允许选择 `3`/`4` 做实测，不承诺线性加速。先检查 CPU、内存峰值和磁盘 I/O。
- 每个 worker 是**独立的 dotnet 子进程**，使用同一份只读的 `data.trpfs` 和只读索引；Pack 窗口互不重叠，JSONL 报告文件名包含 Pack 起止编号。
- `scripts/sv_m2_parallel.py` 先对原生 `file_index.tsv.gz` 做大小写不敏感的输出路径/Hash 碰撞检测；风险未排除时拒绝多进程，改用 `--workers 1` 排障。
- Worker 对自己的输出执行文件大小、SHA-256 复核、必要的 7z 分卷与 `7z t` 测试；仅主线程按 Pack 递增顺序写入 `full-extract-progress.json` 并对显式文件列表执行一次一个 Git 提交、非强推。任何已准备但未发布的窗口**不进入持久检查点**。
- 只保留至多 `workers` 个预取窗口，避免将 23,589 包全部派发并占满临时磁盘；Git 持久发布继续串行，避免并行写同一 `master`。
- `full-extract-progress.json` 的 `nextPack` 优先于输入的 `start_pack`，复用原有已发布检查点。终点仍运行 `full-extract-audit.json`，必须无 FAILED/UNSEEN/UNEXPECTED 才能标记 COMPLETE。

### 工作流

`[.github/workflows/sv-m2-full.yml](../../.github/workflows/sv-m2-full.yml)`

工作流现在仅允许 `workflow_dispatch`，不会因为脚本更新而自动打断 M2 作业；`cancel-in-progress: false`。**默认将结果发布到专用分支 `sv-m2-packs-4.0.0`**，避免其他 CI 作业在同一时间推送 `master` 时发生 `fetch first` 冲突。初次运行从现有 master 检查点创建专用分支；后续运行从该分支的最新检查点继续，并保持单一写入者。只有最终审计 COMPLETE 才自动开向 master 的数据 PR，等待审核合并。也可以手动选 `master` 直推，但跨工作流冲突仍可能发生。**不要从未合并的 feature 分支启动会发布解包数据的工作流**。

调度参数：

| 参数 | 推荐 | 含义 |
|---|---:|---|
| `start_pack` | `2` | 实际会以远端已发布 `nextPack` 为下限 |
| `batch_packs` | `100` | 每个独立报告/事务窗口的 Pack 数 |
| `workers` | `2` | 同机独立进程数；允许 1–4 |
| `publish_branch` | `sv-m2-packs-4.0.0` | 独立输出分支；也可选 `master` 直推 |

直接运行（先将 83 份 7z 恢复为已验证本地来源、完成依赖准备）：

```powershell
python -m unittest discover -s tests -p 'test_sv_m2_parallel.py' -v
python scripts/Run-SV-FullExtract.py `
  --repo . `
  --workspace "$env:RUNNER_TEMP\SV-4.0.0-Trinity-RomFS" `
  --start-pack 2 --batch-packs 100 --workers 2 `
  --publish-branch sv-m2-packs-4.0.0 `
  --time-budget-minutes 230
```

## 风险与失败边界

1. 多个 Windows 进程对同一磁盘中的 8GB TRPFS 随机读取可能争抢 I/O；默认从 `2` 做实际速度对比，不应默认 `8` 或 `16` worker。
2. 并行仅覆盖 Pack 解包、校验及 7z 归档；Git 推送仍串行。网络/提交占主要耗时的情况下总速度可能提升有限。
3. 同一报表的重试和已有 7z 分卷可能触发原有的拒绝覆盖防护；需人工核对，**不要删除或覆盖已验证资产**。
4. 正在执行的 master 任务写入的检查点可能比此分支创建时更新。首次创建隔离分支必须以最新 master 为起点。专用分支创建以后必须从该分支继续运行，避免用 master 的旧检查点覆盖新进度。
5. 如果出现 `FAILED` 或最终 `REQUIRES_REPAIR`，不得宣称全量完成。核对 `_index/batches/` 报告及 `full-extract-audit.json`。
6. 2026-11-05 的 M2 任务 42023738870 在包 21702 后被并发 `master` 更新导致 Git 推送拒绝，原生解包未报告失败；隔离发布分支用于规避此类写冲突，但最终合并前仍需审查其他工作流对相同产物路径的修改。
7. 这些代码不修改原始 `4.0.0/1/` 来源；不将解包性能的推测值作为实测加速比。

## 测试

```bash
python -m py_compile scripts/Run-SV-FullExtract.py scripts/sv_m2_parallel.py
python -m unittest discover -s tests -p test_sv_m2_parallel.py -v
```

合成测试覆盖 Pack 区间顺序、并发上限、进程数 1 回退、异常传播、已发布旧窗口碰撞不误判、Windows 大小写冲突阻断与参数越界。真实 ROM 的多进程端到端测试需要在 Windows Runner 使用验证过的源文件与依赖；不应以合成测试代替全量解包成功判定。

## 旧版手动抽取工作流（sv-m2-virtual-extract.yml）

原始 `.github/workflows/sv-m2-virtual-extract.yml` 是按人工指定 `start_pack / max_packs` 直接抽取 TRPFS virtual 文件的旧工作流，不会自动续跑 23,589 包。它现在复用相同的 `scripts/sv_m2_parallel.py` 调度器和 `scripts/Run-SV-FullExtract.py` 的 `process_batch` 原生文件校验、>90MiB 分卷与 `7z t` 核验逻辑；入口为 `scripts/Run-SV-M2Window.py`。

- `start_pack=0`、`max_packs=2`（和旧版保持一致）；`workers=2`；`window_packs=0` 为自动窗口划分；`publish_branch=sv-m2-manual-4.0.0` 默认隔离 Git 发布。允许显式选 `master`，但可能遭遇其他工作流的并发提交冲突。
- `max_packs` 仍限制为 1..200。自动窗口长度为 `min(20, max(1, ceil(max_packs/(workers*4))))`；短窗口可以让 2 包分别进入两个独立 dotnet 子进程。
- Native JSONL、摘要和大文件 7z 清单写入 `_index/batches/manual-pack-<start>-<end>.jsonl` 与同名前缀的 JSON。**manual-pack 不匹配全量审计的 `pack-*.jsonl`**，不会污染全量验收证据。
- 只有所有窗口全为 `OK`、文件大小和 SHA-256 检查通过、分卷归档校验通过之后才进行一次显式路径 Git 暂存与非强推。若任意窗口 `FAILED`，没有文件提交；可从 Actions artifact 读取已有的 manual 证据以排障。
- **不更新 `full-extract-progress.json`，也不触发旧版的全量完成判定**。人工抽样与全量发布分属不同写入分支。
- 默认新建或更新 `sv-m2-manual-4.0.0`，成功时创建/更新单独的数据审查 PR。已存在 `master` 的文件按源 SHA-256 复核，无差异内容不会被重复加入 Git。
- 原版直接 `git add virtual/` 可能将其他已有源文件一起暂存；新版只收集本次原生报告提及且审核成功的文件与证据路径。

示例（在 Windows 环境中已经通过 `Prepare-SV-Trinity.ps1` 恢复来源、复制固定 HashCache 和 Oodle，并切换到相应输出分支时）：

```powershell
python scripts/Run-SV-M2Window.py --repo . `
  --workspace "D:\temp\SV-4.0.0-Trinity-RomFS" `
  --start-pack 0 --max-packs 2 --workers 2 --window-packs 0 `
  --publish-branch sv-m2-manual-4.0.0
```

验证：`python -m unittest discover -s tests -p 'test_sv_m2_*py' -v`。
这组测试使用合成报告验证 Pack 顺序、隔离的 `manual-pack` 输出、严格失败传播、范围检查及不会返回全量进度文件，不替代完整 TRPFS 实测。
