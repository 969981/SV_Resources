# R3 模型、骨骼、动画、场景；R4 增量重建

> 状态：基础框架和**合成数据测试已验证**。真实 SV 模型/动画转换尚未验收；本流程不自带 Trinity 专有文件的解码器，不会声称仅凭扩展名即完成解码。数据来源仍为 `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/`。

## 安全的数据层

- `virtual/`: 只读、原始解包数据，不覆写。
- `parsed/r3/<native-path>.validation.json`: 原生输入 SHA-256、转换输出 SHA-256、GLB 结构结果与指纹；`*.bundle.json` 是适配器输入清单。
- `converted/gltf/<native-path-with-.glb>`: 外部适配器生成且结构校验通过，但 **仍未原生视觉对账** 的模型/动画/场景。
- `resources/gltf/`: 只有独立人工检查材质、UV、LOD、骨骼、动画和场景并提供匹配指纹的复核文件才进入。
- `_index/resource_catalog.sqlite`: 沿用 R0 的 `raw_files`、`conversion_jobs`、`resource_assets`，每个任务提交一次状态，重复执行可以续跑。

## 前置准备

```bash
python scripts/resource_pipeline/cli.py scan --verify-sha
python scripts/resource_pipeline/r34.py plan --limit 20
```

要求 R0 索引可用，且原始文件实际存在。R3 目前以 `.trmdl`、`.tranm` 和待证实的 `.trscn` 为入口。**同目录同 stem** 的 `.trmsh/.trmbf/.trskl/.tracm` 等仅作为候选伴随文件传给适配器；并未自动证明它们属于同一个游戏对象。真实模型与场景容器、骨骼关联、LOD 和动画绑定要靠解析器与游戏原生证据逐一核实。其他扩展名尚未覆盖，不能视为无资源。

## 使用已有的合法外部转换器

转换器必须支持 `--input/--output` 等自定 CLI 以及以嵌入数据的 **GLB 2.0** 为输出；参数模板必须包含 `{input}` 和 `{output}`，可选 `{bundle}` 获取同 stem 输入的路径和 hash。示例是调用约定，不保证某个第三方工具已实现这些参数：

```bash
python scripts/resource_pipeline/r34.py run \
  --converter 'python local_adapter.py --input {input} --output {output} --bundle {bundle}' \
  --converter-version 'local-adapter-commit-SHA' --limit 20

python scripts/resource_pipeline/r34.py status
python scripts/resource_pipeline/r34.py retry-failed \
  --converter 'python local_adapter.py --input {input} --output {output} --bundle {bundle}' \
  --converter-version 'local-adapter-commit-SHA'
```

Windows 上也可使用本地可执行程序。不得将未经许可的游戏文件或受限解码依赖上传到 Actions 工件；此仓库不随附转换器可执行文件。

## 模型与动画的检查范围

解析器先检查 GLB v2 头、长度、JSON/BIN chunk 与 bufferView，接着检查：POSITION / indices、material 与纹理索引、被纹理引用的 UV 访问器、skins 的 joints、animation sampler/channel、scene node 和已声明的 `MSFT_lod` 引用。缺失的 LOD、骨骼、动画会明确标为 `NOT_PRESENT`，不把缺失推断成通过。外部图片 URI 和缺损的嵌入纹理直接拒绝。

结构化检查**不等于**真实材质着色、UV 方向、LOD 层级、骨骼层次、动画速度、场景摆放与游戏渲染一致。没有这些对账，输出停留在 `converted/`，SQLite 状态为 `PENDING`，资源等级 `CANDIDATE`。

## 复核后才提升 resources

先查看 `parsed/r3/` 的 JSON 中 `fingerprint` 和 `output_sha256`，使用实际 GLB 渲染器对照原游戏画面；人工编写单独的 `review.json`，填写 `reviewer`、对应 fingerprint、output_sha256，并对 `materials`、`uv`、`lod`、`skeleton`、`animation`、`scene` 六项分别标 `PASS` 或真实不适用时标 `NOT_APPLICABLE`。不能把没有核对的项目直接标 PASS。

```json
{
  "reviewer": "reviewer-id",
  "fingerprint": "<copy-exact-fingerprint-from-validation-report>",
  "output_sha256": "<copy-exact-output-sha256>",
  "checks": {
    "materials": "PASS", "uv": "PASS", "lod": "NOT_APPLICABLE",
    "skeleton": "NOT_APPLICABLE", "animation": "NOT_APPLICABLE", "scene": "PASS"
  }
}
```

```bash
python scripts/resource_pipeline/r34.py promote \
  --source 'pokemon/example/example.trmdl' \
  --review /secure/path/review.json \
  --converter 'python local_adapter.py --input {input} --output {output} --bundle {bundle}' \
  --converter-version 'local-adapter-commit-SHA'
```

`promote` **必须使用与最初 run 完全相同的转换参数**才能匹配任务指纹。运行成功后，GLB 复制入 `resources/`，`conversion_jobs=OK`，资产标为 `CONFIRMED`。若变更原生字节、schema、解析器版本、转换器模板或版本，将生成新指纹；原复核文件不能用于新版。

## R4 任务指纹与断点续跑

指纹使用规范化 JSON 的 SHA-256，字段为 `source_version`、主文件虚拟路径、所有同 stem 源文件的**实时计算** SHA-256、`parser_version`、`schema_sha256`、`conversion_params`（profile、converter template、converter version）。和原始 `_index` 的 SHA-256 不同则拒绝转换。已转换文件同时检查验证报告和实际输出 SHA-256，防止丢失或篡改后错误跳过。

`run` 默认重跑新指纹和失败任务；`retry-failed` 仅选旧状态为 `FAILED` 的同指纹任务。`--limit N` 可以分批提交，`--shard-index i --shard-count n` 用稳定路径散列分配任务分片。每个任务单独提交数据库状态，失败可继续运行，成功的 `PENDING`/`OK` 且校验符合条件时不重复转换。无转换器标 `BLOCKED`，不伪造输出。

## GitHub Actions 与发布策略

[verify-sv-r34-pipeline.yml](../../.github/workflows/verify-sv-r34-pipeline.yml) 在提交与 PR 时仅运行合成数据验证，不下载游戏资源；`workflow_dispatch` 的 `native-plan`、`native-run`、`native-retry` 只在拥有本地原始资源、R0 索引及合法转换器的 `self-hosted, sv-resources` 专用 runner 运行。`native-plan` 仅生成本地清单；`native-run` 与 `native-retry` 在私有 runner 上执行或重试限定分片，不上传原始文件、GLB 或大体积二进制。设置仓库变量 `SV_RESOURCE_ROOT`、`SV_R3_CONVERTER`、`SV_R3_CONVERTER_VERSION`，并为分片配置输入参数。

**Git 主分支只保存**代码、文档、schema、索引格式与少量获授权样本；`parsed/`、`converted/`、`resources/` 大体积产物继续被 `.gitignore` 排除。分批归档、分卷、Release 附件发布前必须逐项核对游戏资产和第三方依赖的再分发授权；无授权则仅私有本地生成，不在公开 GitHub Release 分发。

## 验收结论边界

目前只可以确认：脚本完成 GLB 结构验证、指纹重建、失败任务重试、结果完整性校验、人工复核门禁的**合成单元测试**。没有合法适配器和原始模型实测前，不声称 R3 全量模型、动画或场景已经完成真实还原。R4 本阶段覆盖上述 R3 类型；R1 DAT/TBL/BNTX 原有逻辑仍使用原先的指纹算法，后续应按同一指纹规范统一升级。
