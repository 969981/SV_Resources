---
title: 朱紫 4.0.0 全地区 PKHeX Serebii 遭遇索引
tags: [SV, 4.0.0, PKHeX, Serebii, SQLite, 遭遇]
status: REAL_REFERENCE_SOURCE_CI
updated: 2026-11-07
---

# 朱紫 4.0.0：三地区完整普通遭遇查询索引

本索引覆盖帕底亚、北上乡、蓝莓学园的 PKHeX 普通野生遭遇、固定遭遇与普通太晶团体战。以固定 PKHeX Core commit 0660d1e1f4924b8478daec73281bb8071a82ad19 为原始资源，**不使用浮动 master**。

## 已核对数据规模

| 来源 | 原始记录 | 注意事项 |
|---|---:|---|
| 野生 Wild | 26,861 | 按地点、跨区来源、形态、等级、时间天气展开 |
| 固定 Fixed | 977 张模板 | 多地点模板会按地点展开查询记录 |
| 普通 Tera Raid | 帕底亚 454、北上乡 133、蓝莓 113 | 地区池，不能当成某个晶洞坐标 |

原始五张二进制文件的 SHA-256 必须与实际原生对账报告吻合。英文与简体中文宝可梦名直接来自 PKHeX 同一提交的 text_Species_en.txt 与 text_Species_zh-Hans.txt。

## 双来源证据的边界

每条记录都保存 PKHeX 原始文件链接、sha256、表名、原始值 JSON 和 Serebii 地理页面链接。Serebii 区域主页只表示可以继续检索，不代表该物种等级已经由 Serebii 独立核验：

- AREA_PAGE_VERIFIED：指定 Serebii 地点页已核实 URL，但未必核对本物种
- REGION_INDEX_ONLY：区域主页，不能充当物种出现证据
- LISTED 与 NOT_LISTED：仅针对少量已核对的 156/158 标准野生物种
- NOT_REVIEWED 与 NOT_REVIEWED_FOR_TYPE：尚无该记录的独立网页比对

网站入口：https://www.serebii.net/pokearth/paldea/ 、https://www.serebii.net/pokearth/kitakami/ 、https://www.serebii.net/pokearth/terarium/ 。地点编号与名称也按 https://bulbapedia.bulbagarden.net/wiki/List_of_locations_by_index_number_in_Pok%C3%A9mon_Scarlet_and_Violet 核对。已验证的具体页面：6（South Province Area One）、156（Wistful Fields）、158（Mossfell Confluence）、174（Savanna Biome）。

## 代码及运行

- scripts/Build-SV-PKHeX-Serebii-Index.py：真正读取原版 PKHeX 五张 .pkl，而不是用合成样本补齐
- scripts/Audit-SV-PKHeX-Encounters.py：共享格式解析器
- tests/test_sv_full_pkhex_serebii_index.py：来源与地区映射测试
- .github/workflows/sv-full-pkhex-serebii-index.yml：GitHub Actions 真实构建
- data/reference/sv400-serebii-selected-locations.json：有限已核查物种的外部来源

Actions 的产物 SV-400-full-PKHeX-Serebii-encounter-index 含 SQLite、全记录 CSV、按物种汇总 CSV 及来源 Manifest，保留 30 天。没有将游戏原始素材和 PKHeX 原始二进制复制到本仓库。

## 查询例子

```sql
SELECT species_name_zh,location_name,level_min,level_max,encounter_type,pkhex_source_url,serebii_source_url
FROM encounters WHERE region='Kitakami' AND species_name_zh='搬运小匠' ORDER BY location_id,level_min;

SELECT species_name_zh,stars,level_min,tera_type_raw FROM encounters
WHERE region='Blueberry' AND encounter_type='tera_raid' ORDER BY stars,species_national;

SELECT species_national,species_name_zh,encounter_type,level_min,level_max,cross_from_id FROM encounters
WHERE location_id=156 ORDER BY encounter_type,species_national;
```

## 未覆盖与风险

大规模出现、限时配信、最强 Raid、事件赠送与 RNG/PID/EC/IV/闪光限制仍独立研究。标准参考库不能替代原版 4.0.0 游戏的实际生成证据；原生 29,840 个野生槽和 PKHeX 26,861 个槽的差异仍需保留，不应自动把原生独有槽设为合法。

相关研究：[[Gen9-PKHeX-Native-400-PK9-Location158]]、[[SV-Collision-Tolerance-Experiment]]、[[Gen9-PKHeX-Serebii-Crosscheck]]。
