---
tags: [SV, Trinity, 4.0.0, 二次解析, R1, R3, R4]
aliases: [Virtual 二次加工]
status: implemented-batch-pipeline
---

# SV 4.0.0 Trinity virtual 二次加工

源目录：[`virtual/`](https://github.com/969981/SV_Resources/tree/master/Unpack/4.0.0/romfs/arc/data.trpfs/virtual)

执行程序：[`scripts/resource_pipeline/process_virtual.py`](https://github.com/969981/SV_Resources/blob/master/scripts/resource_pipeline/process_virtual.py)

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

首次已在 2026-11-05 完成 `message/dat/Simp_Chinese/common` 的完整可用目录批次：292 个输入、141 组 DAT/TBL 文本和 151 组 AHTB 标签全部成功，生成 725 个派生输出，0 个失败、0 个延期发布项。之后可通过 `Run workflow` 输入 `prefix`、`kind`、`limit`、`decode_png` 分目录执行。不会在单次 workflow 中扫描全部 408,641 个原生条目。

脚本对本地字节计算 SHA-256：如 SQLite 已存在 TRPFD 原始摘要则必须吻合；若只有本地文件，明确标注 `local_only`，不声称经过独立原生清单核验。成功输出及每批次清单会在大小限制内尝试提交主分支；失败/阻塞项目保留说明。

## 未完成

本工作流不是全格式万能解包器。剩余 FlatBuffers、Lua、纹理/动画格式必须补充对应版本的实证解析器，且模型资源需额外的结构与视觉复核。以 `_index/secondary/*.json`、`conversion_jobs`、`r4_object_jobs` 为可验证进度，不以目录存在作为完成证明。

## 非 UTF-8 原生键名

真实 `message/dat/Simp_Chinese/common/bag.tbl` 中第 95 号键存在 `82 92` 字节（非合法 UTF-8），但 AHTB 结构、记录边界与 DAT 对齐均有效。解析器保留原始键十六进制值与 `INVALID_UTF8_ESCAPED` 状态，显示为转义占位符，不误认成原始 Unicode 名称。其他表项的正常 UTF-8 键名不受影响。

## 真实样本第二阶段验收（2026-11-05）

- **消息 / 中文**：`message/dat/Simp_Chinese/common` 的 292 个源文件中，141 个 DAT 和 151 个 AHTB 全部成功；`parsed/message/dat/Simp_Chinese/common` 292 份、`converted/message/dat/Simp_Chinese/common` 292 份、`resources/messages/Simp_Chinese/common` 141 份。该范围 725 个产物均成功提交。最近 [Actions 回归](https://github.com/969981/SV_Resources/actions/runs/42021340186) 全通过。
- **纹理 / 缎带**：原生 `appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx` 已生成 `parsed/.../icon_ribbon_001.bntx.json` 和 `converted/.../icon_ribbon_001.png`，确认 128×128、PNG 签名与 BNTX 纹理尺寸吻合。[Actions 运行](https://github.com/969981/SV_Resources/actions/runs/42020923590) 成功。
- **模型 / 背包**：`chara/model_pc/p0_bag0000_schoolbackpack/p0_bag0000_00_bag00.trmdl` 已生成 `parsed/.../*.object.json`，并由 .NET 10 gftool 导出 `converted/.../*.gltf`、配套 `.bin` 和纹理 PNG；glTF 结构及依赖验证通过。[Actions 运行](https://github.com/969981/SV_Resources/actions/runs/42021029541) 成功。
- **证据等级**：上述批次中输入均为仓库已有的实际 `virtual/` 文件；SHA-256 由本地字节计算，当前报告为 `local_only`，尚未与独立 TRPFD 原始摘要逐条对账。模型尚未完成视觉人工验收，因此 `resources/geometry` 不应伪造“已审查”资源。

继续处理其他语言/纹理/模型时以对应 `--prefix` 开始，先完成格式验证，再按照每批输出预算提交。**这些验收项不能外推为整个 Trinity 虚拟文件系统已完成二次加工。**
