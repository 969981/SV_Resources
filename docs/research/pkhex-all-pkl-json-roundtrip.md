---
title: PKHeX 全世代 PKL 与 JSON 无损双向转换
aliases: [PKL JSON 双向转换, PKHeX BinLinker, PKHeX 所有资源]
tags: [PKHeX, PKL, JSON, BinLinker, Gen1, Gen9, Obsidian]
status: ALL_FILE_BYTES_SUPPORTED_SEMANTIC_ADAPTERS_PARTIAL
---

# PKHeX `.pkl` ⇄ JSON：全资源无损回环

> `.pkl` 是 PKHeX 内嵌的二进制资源扩展名，**不是 Python pickle，也不是单只宝可梦存档 `.pk*`**。这是 **PKHeX 资源数据转换**，不是将 `.pk9` 个体转成 JSON。JSON 的合法性状态与宝可梦 RNG 生成是独立课题。

## 输入基准

- 固定 upstream：`kwsch/PKHeX` commit `0660d1e1f4924b8478daec73281bb8071a82ad19`（与现有 SV 原生对账一致）。
- 原始根：`PKHeX.Core/Resources/`。这版共有 **133** 个 `*.pkl`，原始文件合计 **5,636,952 B**，目录涵盖 `byte/eggmove`, `byte/evolve`, `byte/levelup`, `byte/personal`, `byte/zukan_research`, `legality/mgdb`, `legality/misc` 与 `legality/wild` (Gen1–Gen9、GO)。
- 来源代码：`PKHeX.Core/Legality/Assets/BinLinkerAccessor.cs`、`BinLinkerAccessor16.cs`、`BinLinkerWriter.cs`、`Legality/Encounters/Data/EncounterEvent.cs`。其中 `.pkl` 有可索引 BinLinker16/32、固定记录长度、原始字节数组等**不同容器**，不可依据扩展名认定格式。

## 工具与调用

仓库中：`scripts/PKHeX-PKL-JSON.py`（纯 Python 3.10+、无第三方依赖）。

```bash
# 整个 PKHeX 资源目录：133 个文件各生成独立 .pkl.json，保留原树结构
python3 scripts/PKHeX-PKL-JSON.py export \
  --input /tmp/PKHeX/PKHeX.Core/Resources \
  --output /tmp/pkhex-all-json

# 完整 JSON 回写；使用独立输出，不允许覆写 upstream / 原始数据
python3 scripts/PKHeX-PKL-JSON.py import \
  --input /tmp/pkhex-all-json \
  --output /tmp/pkhex-roundtrip \
  --reference /tmp/PKHeX/PKHeX.Core/Resources

# 也支持单文件；改过字段的 JSON 不需要 --reference，否则将要求原字节相同
python3 scripts/PKHeX-PKL-JSON.py export --input encounter_wild_paldea.pkl --output /tmp/json
python3 scripts/PKHeX-PKL-JSON.py import --input /tmp/json/encounter_wild_paldea.pkl.json --output /tmp/edit
```

**CI：** `.github/workflows/pkhex-pkl-json-roundtrip.yml` 从固定 PKHeX 提交检出原始资源，实际转换**全部** 133 个文件，严格要求 `JSON -> PKL` 的每个结果与原文件 **字节一致**，上传 JSON ZIP 和校验 manifest（不将 upstream 大量衍生数据提交到本仓库）。

## JSON 字段和编辑边界

单文件 JSON 标准为 `pkhex-pkl-json-v1`，`source.path / bytes / sha256` 记录不可覆盖的来源元数据；`container` 是唯一被回写的内容。

| 容器类型 | JSON 格式 | 能否做结构编辑 |
|---|---|---|
| `binlinker` | `identifier_hex`, `offset_width`, `before_hex`, `after_hex`, `chunks` | 可改各分段 `data_hex`，长度改变时自动重算索引；不理解内部记录时只做字节编辑 |
| `record_array` | `profile`, `records` 字段对象列表 | **Gen9 固定、Raid、特殊大量出现**：物种/招式/等级等整数可改，范围检查 |
| `binlinker` + `gen9_wild_area` | `location`, `cross_from`, `slots` | **Gen9 野生**：可直接改物种、形态、性别、等级、时间、天气；索引自动重建 |
| `opaque` | `data_hex` | 其他未验证结构只允许无损字节编辑；不要伪造含义 |

结构化可编辑的 Gen9 适配文件：`encounter_wild_paldea.pkl`（BinLinker 400 区域）、`encounter_fixed_paldea.pkl`（20B × 977）、`encounter_gem_paldea/kitakami/blueberry.pkl`（24B）、`encounter_outbreak_paldea.pkl`（28B × 12,636）。对应字段按仓库已审计的 `Audit-SV-PKHeX-Encounters.py`、`Rebuild-SV-PKHeX-Encounter-Binary.py` 原格式重建。其余 Gen1–9、MGDB 等类别先确立**字节级兼容**，各世代语义必须逐个参考 PKHeX 的真实读取类再添加 schema adapter；目前**不能宣称 133 份全部实现物种/地点/等级语义解析**。

例如 Gen9 Wild 的 JSON（示意字段，非源值）：

```json
{
  "schema": "pkhex-pkl-json-v1",
  "source": {"path": "legality/wild/Gen9/encounter_wild_paldea.pkl", "bytes": 218096, "sha256": "<original sha256>"},
  "container": {
    "type": "binlinker", "offset_width": 4,
    "identifier_hex": "7376", "before_hex": "", "after_hex": "",
    "chunks": [{"index": 0, "kind": "gen9_wild_area", "location": 1, "cross_from": 0,
      "slots": [{"species": 246, "form": 0, "gender": 2, "level_min": 10,
                 "level_max": 15, "time_forbidden_mask": 0, "weather_allowed_mask": 255}]}]
  }
}
```

示意仅展示一个区域；真实文件包含全部原始区域和数据。

## 完整性和安全原则

1. 输出只能写在输入仓库之外；拒绝目录嵌套和覆盖。
2. 自带双模式 BinLinker16/32 合法性检查；不是 BinLinker 的文件保留原字节 Hex，不尝试 Python pickle 解码。
3. 源文件 SHA-256 与长度写入 JSON；导出时先完成内存中的反向序列化并比对全部字节。CI 第二次转换则与原 `.pkl` 对照。
4. 保留 BinLinker 文件前缀、偏移表、各块顺序、起始表间隙和尾部填充字节；可变长字段会重新计算偏移表，16 位容量越界直接报错。
5. JSON 修改不会让实体生成或游戏捕获数据自动合法。改动后 `--reference` 检验失败属于预期；应独立使用 PKHeX.Core 完整合法性模型验证。
6. 复杂异形资源的语义译码不是本版结论。若需真正的可视化修改器，逐文件建立 C# PKHeX 读取结构映射，并保持只读基线与完整 A/B 测试。
