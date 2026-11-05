# parsed/ — SV 4.0.0 原生文件全量二次加工

输入：`../virtual/<原生 VFS 相对路径>`。不修改或复制原始资源。

## 保证每一个已提交 virtual/ 文件都有对应记录

通过 `.github/workflows/sv-secondary-full.yml` 按原生源文件分组，并行运行
`scripts/resource_pipeline/process_virtual.py`。

**每个源文件必定有且只有一条检查记录**，记录位于：

```text
parsed/<源文件所在目录>/_inspection/<任务ID>.jsonl
```

这样既保留原始路径，又避免为 40 万个资源另建 40 万个仅含元数据的 Git 小文件。
每行独立对应一个 `virtual/<path>`，包含源 SHA-256、大小、字节头、原始格式检测、
外部校验证据、实际已生成的 parsed 资源路径、明确的解析状态。

处理状态：
- `STRUCTURE_PARSED`：至少一个已实际生成、可检查的结构化解析产物；不等于证明游戏语义 ID。
- `INSPECTED_UNPARSED`：字节已读取、格式已探测，尚无可信完整结构解析器；不能算解码成功。
- `SOURCE_HASH_MISMATCH`：源 SHA 验证不通过，禁止当作成功解析。

对具有原生/标准解析器的资源，**同时**生成同路径的独立文件，例如：

```text
parsed/message/dat/Simp_Chinese/common/app_common.labels.json
parsed/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx.json
parsed/appli/config/example.json.structure.json
```

`*.structure.json` 仅用于签名可独立验证的通用 JSON、XML、CSV、TSV、UTF-8 文本、
PNG、DDS、ZIP 等格式的结构字段；对 Trinity 私有格式不会将偏移值猜成游戏字段。

## 全量断点续跑和严格验收

工作流列出 Git 已追踪的所有 `virtual/` 原始文件，按照目录/关联文件自动分组；
每组先生成并校验完整 JSONL 检查清单，再公布经过 SHA-256 验证的解析产物。
校验必须比对 **完整输入路径集合**（不只是数量），缺少一个输入或多出虚构路径即拒绝提交。
失败任务可重试两次并保留状态，不允许把失败转换为“已解析”。

`full-sweep-parsed-v2` 会把旧版本已扫描文件重新纳入任务，避免此前只处理
文本、BNTX、模型的任务被误当成全量解析覆盖。

以 `_index/secondary/full-state.json` 和 `_index/secondary/full-last-run.json`
为检查点；只有 `virtual/` 中**已经提交**的文件在本轮可访问，后续上游解包新增的
源文件会被再次纳入扫描。

**提醒：完成全量检查记录 != 完成所有私有格式语义反编译。** 没有可核对
原生格式证据的文件保留 `INSPECTED_UNPARSED`，不能虚报 100% 解码成功。
