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


## 2026-11-06 增量调查：官方参考 Schema 与审计口径

- [PokeDocs SV FlatBuffers](https://github.com/pkZukan/PokeDocs/tree/main/SV/Flatbuffers) 当前随仓库的固定版本还包含 field/trins、field/trlgt、field/trtrr、render/trsha、render/trtch、model/trbsm、model/trltt、customization/ccdata、customization/ccdatam 的原生根表。现已接入「候选 schema 解码」路由，必须由真实文件通过 root/vtable 与 flatc 解析后才写入 STRUCTURE_PARSED，不能按扩展名直接计成功。解析出空 JSON 的任务仍保持待解析。
- [gftool GFTool.Core](https://github.com/pkZukan/gftool) 已有 .trmdl/.trmsh/.trskl/.trmtr 和场景 TRSCN/多组件读取能力，但其工具兼容性不等于每个 SV 4.0.0 实体资源均可输出。下一步要针对 TRSCN 建立节点/子场景/组件引用的真实样本比对。
- [TrinitySceneEditor](https://github.com/Terasol/TrinitySceneEditor) 可以检验 .trscn 的子场景关系；[Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) 适合交叉验证 BNTX/BNSH/SARC/BFRES 等容器。容器头识别不是像素、shader 或模型真正导出。
- `.github/workflows/sv-unknown-format-audit.yml` 只读 `virtual_converted/_index/tasks/` 报告，其统计**不含** FULL secondary 的 `parsed/**/_inspection/*.jsonl`。FULL 任务要用 `.github/workflows/sv-secondary-audit.yml` 的 per-file ledger；两者不能把记录条数直接相加，须按原始相对路径去重。
- FULL secondary 的执行器会合并从未尝试的小叶任务为 64 文件批次（`__full_rollup__/`），审计使用同一个 `compact_never_attempted` 与 checkpoint ID，否则会把实际完成的批次误列为 NOT_ATTEMPTED。

### 下一次实际样本验收

针对新增 9 类：每类选 1–3 个真实 SV 4.0.0 路径，记录 SHA-256、文件大小、Schema SHA-256、flatc 退出状态、JSON 的非空关键字段和输出大小。无真实样本或 JSON 缺字段时只标为候选，不归入已验证类型。再依照 `unknown_format_candidates.csv` 排序继续处理高频未知格式。
