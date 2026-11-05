---
tags: [SV, Trinity, 4.0.0, 二次解析, R1, R3, R4]
aliases: [Virtual 二次加工]
status: implemented-batch-pipeline
---

# SV 4.0.0 Trinity virtual 二次加工

源目录：[`virtual/`](https://github.com/969981/SV_Resources/tree/master/Unpack/4.0.0/romfs/arc/data.trpfs/virtual)

执行程序：[`scripts/resource_pipeline/process_virtual.py`](../../../../scripts/resource_pipeline/process_virtual.py)

## 分层约定

| 目录 | 数据 | 准入规则 |
| --- | --- | --- |
| `virtual/` | TRPFS 恢复的原始字节 | **严格只读**，不重命名 |
| `parsed/` | AHTB 标签、DAT/TBL 原始码元、BNTX 纹理元数据、TRMDL/TRMSH 引用图 | 必须真正经过格式解析；源 SHA 与原路径一并保留 |
| `converted/` | 验证后的 CSV、PNG 和 glTF | 必须成功运行解码器并核对结果；不能仅更换后缀 |
| `resources/` | 多语言消息，以及人工审查/原生关联确认后的语义资源 | 字符串 key 不等于游戏中的物种/物品/缎带 ID |
| `_index/secondary/` | 每批源数量、格式、处理结果及输出 SHA-256 | 批次明细，不等同于“全量已完成” |

## 已实现格式

- **AHTB/TBL** → `parsed/message/dat/.../*.labels.json`、`converted/message/dat/.../*.labels.csv`。只有标签；不虚构文本。
- **DAT + TBL** → `parsed/message/dat/.../*.messages.json`、`converted/message/dat/.../*.messages.csv`、`resources/messages/<OriginalLanguage>/.../*.json`。使用现有 pkNX 算法进行逐条 XOR 解密与表项对齐，保留 flags / 控制码 / 原码元；文本与游戏内部 ID 仍须独立核验。
- **BNTX** → `parsed/.../*.bntx.json`。只有配置了已验证的 `ultimate_tex_cli`，且纹理数和 PNG 尺寸校验通过，才写入 `converted/.../*.png`。多纹理文件不能以首张图片冒充完整成功。
- **TRMDL/TRMSH/依赖** → `parsed/.../*.trmdl.object.json`。需真实可用的 .NET 10 gftool 导出器才能生成 glTF；需要检查 UV、材质、LOD、骨骼与动画。没有人工审查时不晋升为正式游戏语义资源。
- **其他格式**：保持在 `virtual/`，只在批次索引中列为待解析，避免猜测字段意义。

## 本地分批执行

环境：Python 3.10+；已获得经过原生提取的 `virtual/` 文件。执行不涉及原始 `data.trpfs` 的恢复或 Oodle 解压。

```powershell
py -3 scripts/resource_pipeline/process_virtual.py --repo . --prefix message/dat/Simp_Chinese/common --kind all --limit 20
py -3 scripts/resource_pipeline/process_virtual.py --repo . --prefix appli/tex/icon_ribbon --kind bntx --limit 20
py -3 scripts/resource_pipeline/process_virtual.py --repo . --prefix chara/model_pc/p0_bag0000_schoolbackpack --kind models --limit 20
py -3 -m unittest discover -s tests -p test_sv_virtual_second_stage.py -v
```

如已安装 `ultimate_tex_cli`，可以添加 `--png-converter 'ultimate_tex_cli {input} {output}'`。如具有经验证的模型导出器，可以传入 `--model-converter '<program> {input} {output}'`。

选项 `--retry-failed` 允许重试；默认每阶段至多处理 20 个文件，源目录上限为 3,000 文件、每批产物发布预算为 25 MiB（超额仅记录，不伪装成功发布）。如果一次 scope 太大，改用更小的 `--prefix`。

## GitHub Actions

工作流：[SV virtual secondary processing](https://github.com/969981/SV_Resources/actions/workflows/sv-secondary-process.yml)

提交工作流时先尝试中文常用表 `message/dat/Simp_Chinese/common` 的小批次；之后可通过 `Run workflow` 输入 `prefix`、`kind`、`limit`、`decode_png` 分目录执行。不会在单次 workflow 中扫描全部 408,641 个原生条目。

脚本对本地字节计算 SHA-256：如 SQLite 已存在 TRPFD 原始摘要则必须吻合；若只有本地文件，明确标注 `local_only`，不声称经过独立原生清单核验。成功输出及每批次清单会在大小限制内尝试提交主分支；失败/阻塞项目保留说明。

## 未完成

本工作流不是全格式万能解包器。剩余 FlatBuffers、Lua、纹理/动画格式必须补充对应版本的实证解析器，且模型资源需额外的结构与视觉复核。以 `_index/secondary/*.json`、`conversion_jobs`、`r4_object_jobs` 为可验证进度，不以目录存在作为完成证明。
