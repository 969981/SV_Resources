---
title: SV 4.0.0 原生 TRSCN Havok 碰撞引用恢复
aliases: [Gen9 TRCOL closure, 朱紫地图碰撞恢复]
tags: [SV, pkNX, PKHeX, Trinity, Havok, TRCOL]
status: SCHEMA_PARSER_READY
---

# 地图碰撞 TRSCN → Havok TRCOL 外键还原

朱紫的野生遭遇与合法捕获地点不能只用 EncountPokeData 的地点字段判断。pkNX 的 PaldeaSceneModel 会从四个区域场景 TRSCN 加载 CollisionComponent，碰撞形状可能为 Box，或为带外部文件引用的 Havok。Havok 区域必须通过实际 TrcolFilePath 指向的原始 TRCOL 才能确定区域边界。

## 1. 真正的 FlatBuffers 类型链

根据 tools/pkNX/FlatBuffers/SV/Trinity/Schemas/TrinitySceneObjectTemplate.fbs 和 TrinityComponent.fbs：

1. TrinitySceneObjectTemplate.Objects（root 表的 field 4）
2. TrinitySceneObjectTemplateEntry.SubObjects（field 2）的第一个成员
3. 第一个成员的 Type 必须等于 trinity_CollisionComponent
4. 第一个成员的 Data 是单独嵌套的 FlatBuffers TrinityComponent buffer
5. TrinityComponent.Component union type=1 → CollisionComponent
6. CollisionComponent.Shape union type=2 是 Box；type=4 是 Havok（其余为 Sphere、Capsule）
7. Havok.TrcolFilePath（Havok field 0）是**真实文件名外键**，必须从原生数据中解析，不能凭场景名称构造。

根场景真实路径、源哈希、完成状态见 [[sv-4.0.0-pkhex-native-recovery]]。只有提取并通过 SHA-256 的四个 TRSCN 才可以进入本阶段。

## 2. 代码与明确的状态字段

- 源码：scripts/Resolve-SV-PKHeX-Havok-References.py
- 单元测试：tests/test_sv_pkhex_havok_references.py
- CI：.github/workflows/sv-pkhex-havok-native.yml
- 原生输出：Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-dependencies.json

读取每个有效场景对象的第一个 CollisionComponent，检查每一个嵌套 FlatBuffers 的 offset、vtable、union、字符串边界，抓取 Havok.TrcolFilePath，再去原始 TRPFD 的 file_index.tsv.gz 反查对应哈希与包编号。

脚本运行：

    python scripts/Resolve-SV-PKHeX-Havok-References.py

前提是 encounter-native-extraction.json 状态达到 61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED，且所有原生场景 SHA 验证通过。条件不满足则报错，绝不把猜测的路径当成原生证据。

可查看衍生字段：

- native_collisions：四个实际场景各包含多少 Box / Havok / Sphere / Capsule。
- havok_references：原始 TrcolFilePath、场景成员索引、匹配到的 TRPFD hash/packIndex。
- selected_pack_indices：额外需要精确恢复的 Havok 原生包。
- unresolved_count：没有唯一原始文件路径的动态引用数量。
- status：RESOLVED_NATIVE_TRCOL_PACKS / BLOCKED_UNRESOLVED_NATIVE_TRCOL。

成功的解析只证明外键存在与位置定位；完成 TRCOL 的原生提取、真正解析 AABB Tree、计算碰撞及跨区传播需进一步验证。

## 3. 单元测试与独立运行证据

测试使用**人工构造的合法 FlatBuffers 布局**，校验 union discriminator、TrcolFilePath、根场景对象层级、Box 无外部文件和非法 vtable 拒绝等行为：

    python -m unittest discover -s tests -p test_sv_pkhex_havok_references.py -v

原生 CI 仅在 61 项 native 文件清单实际存在时才继续分析；如果文件尚未出现在 Git 仓库中，明确跳过原生阶段，不会回填 PKHeX 自己的参考文件。

## 4. 与 PKHeX 遭遇位点的最终连接

完整链路应为：

    Native EncountPokeData
        + PointData level/biome and map field AreaInfo
        + actual TRSCN collision (Box/Havok)
        + all native external TRCOL AABB trees
        → pkNX LocationStorage & EncounterSlotDumper9
        → generated encounter_wild_paldea.pkl
        → diff against PKHeX Gen9 wild reference
        → per-slot location, crossover, weather, time, level audit

不能因 61 项显式路径已定位、或当前 PKHeX 参考二进制有 26,861 个槽，就宣称真实游戏已经导出了相同数量。依照原生哈希与几何验证逐步闭合证据。

## 2026-11-07 原生场景 4.0.0 的真实碰撞外键对账

证据：[原生 Actions #42332863513](https://github.com/969981/SV_Resources/actions/runs/42332863513) 从实际验证 SHA-256 的四个 SV 4.0.0 TRSCN 解析。

| 原生场景 | 对象 | 有效碰撞 | Havok | Box |
|---|---:|---:|---:|---:|
| 帕底亚 resident_area_collision | 110 | 110 | 105 | 5 |
| 北上乡 field_1 | 60 | 60 | 60 | 0 |
| 蓝莓学园 field_2 | 57 | 57 | 57 | 0 |
| 第零区 a_w23_field_area_col | 8 | 7 | 4 | 3 |
| 合计 | 235 | 234 | 226 | 8 |

**226 个 Havok 引用实际引用 223 个不同的原生 TRCOL，223/223 在真实 TRPFD 中唯一定位，缺失 0、歧义 0。** 原生 0-based pack indices：8009, 9913, 9914, 9915, 9925, 9926, 9927。

真实例子：field_graphic/terrain_model/world_area/world_area_01_col.trcol，原生 TRPFD hash=A232B11C28B22EAB，PackIndex=9925。

已新增 scripts/Extract-SV-PKHeX-TRCOL-Packs.py：由真实 TrcolFilePath 而非猜测文件名选择 pack，复用 SV.TrinityDump 校验原始成员及 SHA；只有得到 encounter-trcol-extraction.json 的 TRCOL_ORIGINAL_SHA256_VERIFIED 状态，才能给 pkNX.EncounterCLI 的 --verified-trcol-manifest 使用。

**证据分界：定位 223 项并非提取 223 项，更不能代表 pkNX Havok AABB 计算及 26,861 野生合法性槽已经完成。** 源校验、原生生成、PKHeX 差异与真实 PK9 LegalityAnalysis 四级验收仍独立进行。
