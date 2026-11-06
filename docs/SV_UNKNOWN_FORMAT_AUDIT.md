# SV 4.0.0 Trinity 未知格式研究与全量审计

目标：逐一核对 virtual/ 原始文件与已提交 virtual_converted 任务报告；先按真实文件头和扩展名排名，再为高频未知格式寻找并验证解码器。

## 公开参考实现

| 项目 | 对应格式或用途 | 验证边界 |
| --- | --- | --- |
| [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity File Explorer、模型、材质、骨骼、场景工具 | 交叉验证 TRMDL/TRMSH/TRSKL/TRMTR，不等于所有类型可解 |
| [PokeDocs SV FlatBuffers](https://github.com/pkZukan/PokeDocs/tree/master/SV/Flatbuffers) | SV 对应的模型数据 schema | 使用本游戏版本校验 vtable、字段范围、root offset |
| [Terasol/TrinitySceneEditor](https://github.com/Terasol/TrinitySceneEditor) | SV 的 TRSCN 场景 | 验证场景节点、对象引用、导出后可读性 |
| [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | 任天堂纹理和容器格式参考 | 与结构化导出结果对照，不按文件名猜测 |

## 明确的状态区分

- STRUCTURE_PARSED：有结构验证，但不代表材质、UV、模型、骨骼和动画均通过可视化/往返校验。
- INSPECTED_UNPARSED：仅完成字节头、哈希、文件类型候选检查；不是转换成功。
- SOURCE_HASH_MISMATCH：源数据不一致，优先修复提取与索引。
- PENDING_SCHEMA / PENDING_DECODER：已识别候选或容器签名，但尚无实证的结构解析输出。

## 执行全量对账

独立工作流：.github/workflows/sv-unknown-format-audit.yml。代码：scripts/resource_pipeline/unknown_format_audit.py。

命令：python scripts/resource_pipeline/unknown_format_audit.py --repo . --out sv-unknown-format-audit

输出：coverage_summary.json（原始路径数、去重检查数量、检查状态、无效报告）；missing_inspection_paths.txt（逐路径缺失表）；unknown_format_candidates.csv（候选格式、扩展名、文件头8字节、数量、容量、样本路径）。

注意：审计读取 Git HEAD 中已提交的任务报告，不把运行中或未成功推送的本地结果算成完成。全部检查覆盖并不等于全部语义解码。

## 解析优先级

1. 先取 unknown_format_candidates.csv 中数量最多的文件族，按格式+签名而不是只按扩展名分组。
2. 以正确 SV 4.0.0 的实际资源与开源工具建立一致性样本，确认完整文件结构与版本差异。
3. 开发原生 parser，输出独立可验证 JSON/CSV/PNG/glTF 等衍生文件；不能复制源文件冒充转换。
4. 针对真实样本构建回归和哈希验证；模型场景补骨骼、材质、LOD、动画、导入导出的人工检查。
5. 重新跑独立审计，按已处理、未解析、部分处理、失败、遗漏进行最终对账。

## 分组与检查点

FULL secondary 会把从未处理过的若干小叶子任务合成稳定 64 文件级的批次，已处理任务仍采用原 task id。virtual_converted 与 FULL secondary 的检查点不互通，数字不能相加。所有优化需记录每批实际 selected_files 与产出大小，而不只看 max_files 的配置。
