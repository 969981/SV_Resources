# SV 4.0.0 — virtual 二次加工、gftool、增量批次

> [!info] 原始文件与验证边界
> 来源：[virtual 原始文件](https://github.com/969981/SV_Resources/tree/master/Unpack/4.0.0/romfs/arc/data.trpfs/virtual)。
> 所有原生数据只读。资源编号、动画可见效果、未验证的 glTF 材质不能通过文件名推定为已确认。

## 目标三层

| 目标 | 内容 | 最低验收 |
|---|---|---|
| `parsed/` | AHTB、DAT/TBL、TRMDL/网格/骨架依赖 JSON | 来源、结构边界、校验结果 |
| `converted/` | UTF-8 CSV、BNTX→PNG、gftool→glTF + .bin + PNG | 解码器成功，引用与尺寸/结构校验 |
| `resources/` | 已确认的多语言文本、经人工审核的语义模型资源 | 原生交叉证据或质量审核通过 |

路径整体镜像 `virtual/`；严禁改名或覆盖原始文件。

## 可用工具

- [process_virtual.py](../../../scripts/resource_pipeline/process_virtual.py)：单个原生子树的二次加工入口。
- [batch_secondary.py](../../../scripts/resource_pipeline/batch_secondary.py)：从 Git tree 读取**实际追踪的**文件，按目录分批，检验输出哈希并安全暂存。
- [full_secondary.py](../../../scripts/resource_pipeline/full_secondary.py)：全量清单/检查点/分批任务，不代表所有私有格式都已经解码。
- [SV.R3.ModelExport](../../../tools/SV.R3.ModelExport/README.md)：基于 gftool 的 Windows .NET 10 原生模型导出器。
- [sv-secondary-batches.yml](../../../.github/workflows/sv-secondary-batches.yml)：按指定范围运行文本、图标、模型批次。
- [sv-secondary-full.yml](../../../.github/workflows/sv-secondary-full.yml)：全目录处理与增量检查点。

## 第一批已验证（2026-11-05）

- `message/dat/English/common`：**141 个 DAT/TBL 表**，423 个结果文件（每表 parsed JSON + converted CSV + resources JSON），失败 0。
- `appli/tex/icon_item/item_0000` 至 `item_0007`：**8 个 BNTX** 输出 8 个 PNG 及 8 个结构 JSON，失败 0。
- `chara/model_pc/p0_bag0002_nylon`：**1 个模型**输出经过结构检验的 glTF、外部 .bin 与 PNG 纹理，失败 0；暂未通过视觉复核，不能宣称材质/骨骼动画保真已确认。

对应可复核报告：

- `_index/secondary/batches/text-000000-001.json`
- `_index/secondary/batches/images-000000-008.json`
- `_index/secondary/batches/models-000000-001.json`

## 使用方法

在仓库根目录运行：

```powershell
# 只检查分批计划，不下载原始字节
python scripts/resource_pipeline/batch_secondary.py plan --kind text --scope message/dat/English/common --count 1
python scripts/resource_pipeline/batch_secondary.py plan --kind images --scope appli/tex/icon_item --offset 8 --count 16
python scripts/resource_pipeline/batch_secondary.py plan --kind models --scope chara/model_pc --offset 1 --count 8

# 已经本地解包的目录（Windows PowerShell）
python scripts/resource_pipeline/process_virtual.py --repo . --prefix message/dat/French/common --kind messages --limit 1000
python scripts/resource_pipeline/process_virtual.py --repo . --prefix appli/tex/icon_item/item_0008 --kind bntx --png-converter 'ultimate_tex_cli {input} {output}' --limit 1

# 按需全量扫描已经提交的 git 原生目录（只读）
python scripts/resource_pipeline/full_secondary.py status
```

GitHub 网页：**Actions → SV virtual secondary batches → Run workflow**，选择 `category`、`scope`、`offset` 和 `count`。大批次建议从小范围开始，避免 Windows runner、Cargo 缓存、Git 提交体积超限。

## 验收与发布

1. `virtual/` 的文件必须是原样字节；对已有原生清单的文件严格检查来源 SHA-256。没有清单的只标记 `LOCAL_ONLY`。
2. `parsed/` 只能是原生内容确实支持的字段、路径和结构，不把猜测映射写成官方名称。
3. `converted/` BNTX 要校验 PNG 魔数与尺寸；gftool 输出 glTF 要校验 buffer、mesh、材质及引用。
4. `resources/` 仅有证据闭合的文本/语义关联才能自动纳入；模型视觉审核通过前保留在 `converted/`。
5. 每个批次的报告包含输入范围、处理数、成功/失败/阻塞及输出 SHA-256。执行器只允许 Git `add` 已验证的 `parsed/converted/resources` 与报告路径，不暂存原始 `virtual/`。
6. 大体积二进制衍生结果应控制批次大小、分离归档，提交前核查资源再分发授权。

## 当前仍未闭合

- 全量文件已被**扫描或尝试**，不等于所有格式已经还原。未支持文件要保留 `BLOCKED/UNKNOWN`。
- 模型 `TRMBF` 顶点精度、材质颜色空间、蒙皮和 `TRANM` 轨道需要数值及视觉双重核对。
- 资源类别（宝可梦物种、物品 ID 等）必须通过游戏原生引用表证明，不能仅按命名/序号分类。

相关：[[../Formats/BNTX]] · [[../Verification/README]] · [[../../README]]。
