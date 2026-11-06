# 朱紫 4.0.0：道具、图鉴、遭遇、技能与地点导出

> 阶段：可复现第一层来源索引与已有结构化 JSON / 中日英文本导出。**没有已验证解析器的 .bin 不会冒充完整游戏数据**。

## 原生资源入口

| 数据集 | 优先原生来源 | 注意 |
| --- | --- | --- |
| 野生遭遇 | world/data/encount/pokedata/pokedata/pokedata_array.bin 及 pokedata_su1、pokedata_su2 对应 DLC 表 | 每条记录的群系、地区、版本、时段、天气和权重需单独验证 |
| 固定宝可梦 | world/data/field/fixed_symbol/fixed_symbol_table/fixed_symbol_table_array.bin | 与野生、太晶团体战区分 |
| 事件宝可梦 | world/data/event/pokedata/eventBattlePokemon/eventBattlePokemon_array.bin | 不是全部礼物/配信 |
| 团体战 | world/data/raid/ 的原始表 | 战斗等级、捕获等级和版本限制独立记录 |
| 图鉴 | pokedex、zukan、personal 资源 | NationalDex、DevID、地区图鉴号不能未经证据就等值连接 |
| 技能 | waza、learnset、招式学习数据 | 属性、威力、PP、分类、学习方式需对应 schema |
| 道具 | item、shop 资源 | 道具编号、背包组、用途、价格需分别核验 |
| 地点 | world/data/area、world/data/map、encount/point_data | 保存地图 ID、区域 ID、点坐标、正式地点名原始外键 |

## 已实现的导出工具

命令：

    python scripts/Export-SV-Gameplay-Data.py --repo .

脚本执行以下实际操作：

1. 枚举上述原生路径并计算 SHA-256 / 长度，写入 native_source_inventory.csv。**此步仅证明原生文件存在。**
2. 读取既有 STRUCTURE_PARSED 的 schema-backed flatbuffer.json；有本地原始字节时核对原始 SHA-256，不匹配拒绝导入。保存原始 JSON 字段和数组位置指针，不根据相似字段名臆造游戏 ID。
3. 复用仓库 scripts/resource_pipeline/r1_text.py 读取成对的朱紫 DAT/TBL，输出真实的消息 key、文本、简繁语言、解码状态与源哈希。已有 messages.json 在未读取本地配对文件时可做来源清晰的回退。
4. 导出 SQLite、五个主题的 CSV/JSONL、五个候选名称 CSV、完整 localization_all.csv、blockers.csv、summary.json。CSV 为 Excel 可读的 UTF-8 BOM。

输出目录：Unpack/4.0.0/romfs/arc/data.trpfs/semantic_exports/

数据库四张表：native_sources / decoded_records / localized_text / blockers。

只导出简体：python scripts/Export-SV-Gameplay-Data.py --repo . --languages Simp_Chinese

独立输出：python scripts/Export-SV-Gameplay-Data.py --repo . --output E:/Temp/SV-GameData

测试：python -m unittest discover -s tests -p test_sv_gameplay_export.py -v

GitHub Actions：.github/workflows/sv-gameplay-data.yml；Artifacts 包括数据库及所有 CSV/JSONL。源 4.0.0/0、4.0.0/1 和 virtual/ 始终只读。

## 当前不应当夸大的结论

- 如果某个 CSV 是空的，表示这轮并无已验证的 schema JSON，而非游戏不存在这种数据。
- 官方中文消息标签不必然等于道具 ID、招式 ID 或宝可梦 DevID；现有脚本不自动关联。
- 原始数据里的版本、天气、时段、区域和生态许可还没有运行时验证时，不可直接声称“实机该地点必定出现”。
- 此阶段没有宣称所有原生 .bin、全部图鉴字段和全游戏地图已语义解码完成。

## 下一阶段

依次对野生三地图、固定/事件、团体战、个人参数与地区图鉴、技能与道具、区域/地点建立游戏版本对应的真实 schema 解码器；从原始字段导出等级、权重、条件、特性、种族、形态、坐标，再对照游戏文本与 pkNX / PKHeX 的映射和运行时逻辑。按逐表原始输入数、解析成功数、异常数、唯一 ID 和来源哈希验收。

资料：仓库固定版本 tools/pkNX 与 tools/PokeDocs/SV/Flatbuffers；上游 https://github.com/kwsch/pkNX 和 https://github.com/pkZukan/PokeDocs。
