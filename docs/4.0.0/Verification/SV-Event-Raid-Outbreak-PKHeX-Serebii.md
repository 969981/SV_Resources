---
title: 朱紫 4.0.0｜活动太晶团体战与大规模出现参考扩展
aliases: [SV Event Encounters, SV 活动遭遇库]
tags: [SV, PKHeX, Serebii, 4.0.0, 遭遇, 活动团体战, 大规模出现, SQLite]
status: PINNED_REFERENCE_SOURCE_NEEDS_RUNTIME_VALIDATION
updated: 2026-11-07
---

# 定位

承接 [[Gen9-Full-PKHeX-Serebii-Encounter-Index]] 已验证的三地区常规遭遇数据库。本扩展引入 **PKHeX 固定提交中保存的历史活动合法性模板**，不代表特定日期活动正在开放，更不等价于紫／朱 4.0.0 版本中某次实际通过宝可入口站新闻下载的事件包。

固定 PKHeX commit：`0660d1e1f4924b8478daec73281bb8071a82ad19`。复现时所有文件必须 Git blob SHA1、字节数、模板数量三项同时验证。计算 SHA256 并写入独立 manifest。任何一项不符都失败，不自动读取最新主分支资源。

## 源文件与二进制字段

| 类型 | 文件名 | 单项字节数 | 固定文件总项数 | 类别状态 |
|---|---|---:|---:|---|
| 活动太晶团体战 | `encounter_dist_paldea.pkl` | 0x3E (62) | 174 | 历史活动模板 |
| 最强七星团体战 | `encounter_might_paldea.pkl` | 0x3E (62) | 56 | 历史最强模板 |
| 活动大规模出现 | `encounter_outbreak_paldea.pkl` | 0x1C (28) | 12,636 | 活动出现模板 |

数据结构追踪 PKHeX `EncounterDist9`、`EncounterMight9`、`EncounterOutbreak9` 的同一提交：

- Raid 偏移 0x00 物种 uint16，0x02 形态，0x03 原始性别，0x04 特性权限，0x05 保底 V 个数，0x06 异色规则，0x07 等级；0x08-0x0F 四招式；0x10 太晶属性，0x11 内部序号，0x12 星级，0x13 权重。
- Raid 偏移 0x14-0x33：4 个进度阶段，每阶段朱/紫权重起点和总量，不能将它们作为活动时间或活动事件 ID。
- Raid 偏移 0x34-0x3D：固定性格、六项个体值候选、IV 模式及体型参数（按原始值存放）。
- Outbreak 偏移 0x00-0x0B：物种、形态、性别、等级范围、奖章/天气、尺寸与保闪信息。
- Outbreak 偏移 0x0C-0x1B：`MetBase` 加偏移位掩码。按 PKHeX `MetFlags = ReadUInt128LittleEndian(data[0x0C..]) >> 8` 展开，位 j 对应地点 `MetBase + j`，j 为 0..119。一个模板可以对应多个地点，因此按地点查询行数大于模板数量。

## 存储与查询

不覆盖旧 SQLite；创建扩展版 `SV400_PKHeX_Serebii_Extended_Encounter_Index.sqlite`，添加 `extension_sources`、`event_raid_templates`、`outbreak_event_templates`、`outbreak_event_locations`，并创建统一视图 `all_encounters_v2`。

```sql
-- 同时检索常规野生、固定、普通团体战、活动团体战和活动大规模出现
SELECT category,region,location_id,species_name_zh,level_min,level_max,stars
FROM all_encounters_v2 WHERE species_national=214
ORDER BY category,region,location_id;

-- 最强七星模板及异色规则
SELECT species_name_zh,level,stars,shiny_rule_raw,raw_json
FROM event_raid_templates WHERE kind='mighty_tera_raid'
ORDER BY species_national;

-- 活动大规模出现：原始地点外键
SELECT t.species_name_zh,l.region,l.location_id,t.level_min,t.level_max,t.is_shiny_forced
FROM outbreak_event_templates t JOIN outbreak_event_locations l USING(source_record_index)
WHERE l.region='Kitakami' ORDER BY t.species_national,l.location_id;
```

同一套输出文件包括 `SV400_Event_Outbreak_Templates.csv` 和 `SV400_Expanded_Encounter_Manifest.json`。

## Serebii 的审计边界

- 活动团体战历史目录：https://www.serebii.net/scarletviolet/teraraidbattleevents.shtml
- 活动大规模出现历史目录：https://www.serebii.net/scarletviolet/massoutbreakevents.shtml
- 普通每日大量出现说明：https://www.serebii.net/scarletviolet/massoutbreaks.shtml

仅提供活动类别目录，不将网页目录行号与 PKHeX 模板序号强行建立事件外键；如果要对上具体事件，需要检查上线日期、配信事件版本、相应种族与太晶属性和游戏内下载的事件数据，并保留 URL 与日期。无法核对的模板仍为 `CATEGORY_INDEX_ONLY`。

每日普通大规模出现 ≠ 本仓库新增的活动大规模出现表。事件存在于固定 PKHeX 历史合法性资源，不代表现在仍能领取，更不证明游戏 4.0.0 某存档曾下载。

## 跨地区资料审核队列

`scripts/Build-SV-Serebii-Review-Queue.py` 从统一视图按地区 + 地点 + 物种 + 遭遇类型去重生成 `SV400_Serebii_Review_Queue.csv` 和 manifest。相比盲目抓取每条原始槽位，它保留最少人工核验单元；地点 156/158 分歧标高优先级。

所有审计状态必须区分：`SPECIES_LISTED_LEVEL_UNCHECKED`、`SPECIES_NOT_LISTED_REVIEW_CROSSOVER_BEFORE_REJECT`、`NOT_REVIEWED`、`EVENT_CATALOGUE_ONLY_NOT_ROW_VERIFIED`。未列出不代表非法；物种列出也不证明等级、天气、跨区来源和运行时可达性。

## RNG 验收等级（不能跳过）

1. `TEMPLATE_VERIFIED`：成功 SHA 验证 PKHeX 原始二进制及字段结构。只表示库中存在该模板。
2. `SEREBII_CORROBORATED`：独立核实物种/地点/等级/活动时段等具体字段，必须有对应证据，不得由类别目录链接代替。
3. `PKHEX_LEGALITY_RUN`：对完全相同的 PK9 实际运行该固定版本的 PKHeX `LegalityAnalysis` 并记录完整结果；原版候选与来源一致需区分。
4. `RNG_RUNTIME_VERIFIED`：需实机捕获、PID/EC/IV/异色以及原生可执行生成证据；前三项均不意味着第四项自动成立。

特别注意静态剧情遭遇还存在 `PKHeX.Core/Legality/Encounters/Data/Gen9/Encounters9.cs` 中的 `EncounterStatic9[]`。当前第一版和本次扩展尚未把这些手工 C# 静态项全量转为 SQL；请勿将本库称为包括所有静态剧情、神兽和赠送宝可梦的最终完整合法性库。

## 工具与运行

- `scripts/Extend-SV-Encounter-Index.py`
- `scripts/Build-SV-Serebii-Review-Queue.py`
- `tests/test_sv_event_outbreak_index.py`
- `tests/test_sv_serebii_review_queue.py`
- `.github/workflows/sv-full-pkhex-serebii-index.yml`

正式 GitHub Actions 的 `SV-400-full-PKHeX-Serebii-encounter-index` Artifact 收录新旧 SQLite、CSV 和来源报告。测试、编译和源码检出不构成实际建库通过，只有已上传的原始运行产物和哈希数量验收才算。

关联：[[Gen9-Full-PKHeX-Serebii-Encounter-Index]]，[[Gen9-PKHeX-Serebii-Crosscheck]]，[[SV-Collision-Tolerance-Experiment]]。
