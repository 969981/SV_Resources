---
title: "朱紫 4.0.0｜PKHeX 与 Serebii 遭遇交叉核对"
tags: [SV, 4.0.0, PKHeX, Serebii, encounter]
status: CROSS_SOURCE_SPOT_CHECK_NOT_FULL_PARITY
updated: 2026-11-07
---

# 朱紫 4.0.0：PKHeX + Serebii 交叉核对

实用遭遇数据以 **PKHeX 的可机读遭遇及合法性模板为主，Serebii Pokéarth 的地图分布、野生与固定点记录为独立公开旁证，朱紫 4.0.0 原生解包信息用于追查版本差异**。整理物种、地点、等级等公开资料不需要以逐只实机 PK9 为必备条件；但不能声称已证明 PID/EC/IV/异色 RNG。

## 地点与来源

- 156 = Wistful Fields。https://www.serebii.net/pokearth/kitakami/wistfulfields.shtml
- 158 = Mossfell Confluence。https://www.serebii.net/pokearth/kitakami/mossfellconfluence.shtml
- 地点编号取自仓库 vendored pkNX 的 AreaWeather9.cs。编号不是全国图鉴物种 ID。
- 原始 88 例 PKHeX 双版本结果来自 https://github.com/969981/SV_Resources/actions/runs/42355142609 ，全部是基于原生遭遇模板生成的候选，并非实机捕获。

## 五份跨区判定翻转（捕获地点 156、跨区来源 158）

| 全国图鉴编号 | 物种 | 156 标准分布 | 158 标准分布 | 结论 |
|---|---|---|---|---|
| 23 | Ekans | 列出 | 列出 | 两地均有记录，无法证明跨区来源 |
| 24 | Arbok | 未列出 | 列出 | 只有来源区分布证据 |
| 214 | Heracross | 未列出 | 列出 | 只有来源区分布证据 |
| 273 | Seedot | 未列出 | 列出 | 只有来源区分布证据 |
| 274 | Nuzleaf | 未列出 | 列出 | 只有来源区分布证据 |

Serebii 明确表示互动地图的生成点采用近似位置，不能凭网页某处未列出就否定跨区扩散。等级边界样本 532（Timburr），地点 156，等级 34：Serebii 有物种出现记录，但单靠该记录并未验证等级 34。

## 工具和真实运行输入

- scripts/Triangulate-SV-PKHeX-Serebii.py
- data/reference/sv400-serebii-selected-locations.json
- tests/test_sv_serebii_triangulation.py
- .github/workflows/sv-pkhex-serebii-triangulation.yml

工作流下载原始 Actions 的 88 例 CSV 和来源 JSON，执行严格来源与差异条目校验后，输出每个 PK9 候选的 Serebii 地区分布对照 CSV、汇总 JSON。外部数据为在 2026-11-07 核对过的关键物种子集，而非 Serebii 全站镜像。未核对的种类记为 NOT_REVIEWED，不能当成网页未列出。

## 后续成库

主表建议按 (game_version, region, location_id, national_species, form, encounter_type, min_level, max_level, time, weather, cross_from) 建索引，并将 Serebii 页面 URL、核验日期、条目类型、是否已核验和外部数据可信级别存入单独的 external_observations 表。

资料一致、资料冲突、未核对三种状态明确区分，任何外部缺失都不能自动修改 PKHeX 合法性规则。原生生成器与 30/10/0 容差实验保持独立，不使用 Serebii 数据覆盖原始资源。

参见：
- Gen9-PKHeX-Native-400-PK9-Location158.md
- SV-Collision-Tolerance-Experiment.md
