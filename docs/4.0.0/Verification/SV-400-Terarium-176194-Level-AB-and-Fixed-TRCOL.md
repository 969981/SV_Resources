---
title: SV 4.0.0｜蓝莓学园 176/194 原生等级 A/B 与北上乡 worldend 158 碰撞来源
aliases: [SV-400-Terarium-176-194-Level-AB, SV-400-WorldEnd-158-TRCOL-Provenance]
tags: [SV, 4.0.0, pkNX, PKHeX, Native, PointData, AreaInfo, FixedSymbol, TRSCN, TRCOL, Collision, A-B]
status: SOURCE_CRITERIA_AB_VERIFIED_NATIVE_PKL_AB_REQUIRES_REAL_RUN
updated: 2026-11-07
---

# 目标和最小可信证据链

研究对象是原始 SV 4.0.0 的遭遇资源，经 61 项必要原始文件 + 223 份原始 Havok `.trcol` 的逐文件 SHA256 验收后，使用真实 pkNX 生成五张 PKHeX Gen9 `.pkl`。原始基线已多次 5/5 SHA 相同。当前**不能**将这等同于野生、固定全部与 PKHeX 官方一致或游戏 RNG 合法。

## 176/194 的原始源点公式 A/B：已验证的 6,003 事件

来源：[[SV-Remaining-115-and-Worldend-158-Review]] 的 115 条 DLC 原生例外与 666 条原生 PointData 关联；独立 Actions [#42381319447](https://github.com/969981/SV_Resources/actions/runs/42381319447) 在只读源数据上重新计算等级。

| 核查项目 | 真实 176/194 | 其他 37 条 DLC 控制 |
|---|---:|---:|
| 待查记录 | 78 | 37 |
| 已保留的 PokeData/PointData 条件样本 | 6,003 | 2,402 |
| 现有 `GetNew`/`GetBand` 等级表达式重算错误 | **0** | **0** |
| `appliedBoost` 非零事件 | **0** | **279** |
| 至少存在一个非零 boost 样本的记录 | **0** | **9** |
| 直接使用 raw PointData 而不按 AreaInfo 截断导致改变 | **3,227 次** | 依 CSV |
| raw PointData 至少改变一个候选的记录 | **74/78** | 依 CSV |

蓝莓学园 176/194 的常见 `AreaInfo.ActualMinLevel/ActualMaxLevel` 样本为 **59–69、58–68、60–70**，偶见 1–100；样本中的 `PokeData.MinLevel/MaxLevel` 均为 7–80。注意同一原始源点可能被多个地点/形态模板采用，每条差异只保存至多 80 条条件样本；3,227 不是 3,227 条不同 PKHeX 遭遇。

原始生成公式为 `min=max(point.min, criteria.min)+boost` 和 `max=min(point.max,criteria.max)+boost`，`GetNew` 会在写入前封顶最大等级 100。我们同时按 raw PointData 与 AreaInfo 裁剪值计算，以原始 trace 每条 `minLevel/maxLevel` 校验，**6,003/6,003 与现有算法一致**。

**第一结论**：仅针对现有 176/194 条件样本，`AdjustEncLv` 双分支不是差异主因。应优先检查区域级等级裁剪和源点跨区归属；raw-level 改法是敏感性测试，不等于正确修复。

脚本 `scripts/AB-SV-Terarium-176-194-Source-Levels.py`，测试 `tests/test_sv_176194_source_level_ab.py`，只读工作流 `.github/workflows/sv-terarium-176194-source-level-ab.yml`，输出每个 115 源数据案例的候选 A/B CSV 和 JSON。

## 隔离的真正原生 .pkl 重建 A/B

在原生 `LocationStorage`、`PaldeaEncounter.Absorb` 新增默认不启用的 `EncounterLevelABSV`。只有明确命令行传入 `--level-ab-mode`，且同时存在原始 `--verified-manifest` 与 `--verified-trcol-manifest`，才允许对**蓝莓学园 176/194**执行以下四个相互独立的实验：

- `terarium-176-194-unadjusted-only`：对于有 `AdjustEncLv` 的点，只保留未调整候选。
- `terarium-176-194-adjusted-only`：对于有 `AdjustEncLv` 的点，只保留调整候选；`boost=0` 时仍保留唯一未调整候选，不凭空造出不存在的等级。
- `terarium-176-194-strict-overlap`：对这些地点内的槽位从相邻一级可合并改为必须实际相交。
- `terarium-176-194-raw-point-levels`：不按 AreaInfo 截断源 PointData 等级（仍做原有点位区域范围交叠筛选）。这是反事实对照，不是游戏语义假设。

**必须验证**：隔离输出目录内各自的五张 `.pkl`，所有版本的 fixed + 三张普通 Raid SHA 与原始基线完全一致，非目标 Wild 槽位按包含重复次数的 Counter 完全一致；再与固定版本 PKHeX 参考库逐记录配对，给出匹配增减，而非只看总数。新增 `scripts/Compare-SV-Terarium-176-194-Native-AB.py` 和真实资源原有 Windows Actions `.github/workflows/sv-native-point-trace.yml` 中的隔离实验步骤。

原始来源 SHA 失配、无对应 223 TRCOL 清单、其他地点改变或普通 Raid SHA 改变，都应使实验失败。只有完全跑完的原始 Actions 记录才能把本阶段从“候选公式 A/B”提升为“完整 .pkl A/B”。

## 固定符号 worldend → 158 的原始碰撞来源

此前从 977 条真实原生 fixed 模板中源事件选出 236 个 worldend→158 反事实候选，模拟删除 158 虽令与参考匹配从 774 增至 917，但误伤 47 次原本匹配。不能全局删除 158。三类 `su1_area...` / `t_su1_area...` / `su1_area..._dun` 已独立分组，需取得各自原始区域与碰撞证据。

本轮源代码添加：

1. `PaldeaSceneModel.AreaCollisionOrigins`：精确记录载入的原始 `.trscn` 路径；如果是 Havok，记录实际解析的 `.trcol` 路径和字节 SHA256；如果碰撞体是 Box，记录 `CollisionKind=BOX` 和 Box 位置/大小，不会虚构一个不存在的 `.trcol`。
2. `PaldeaFixedSymbolModel.PlacementTrscnSha256`：对朱／紫的世界、北上乡和蓝莓学园固定符号放置 `.trscn` 真实载入字节计算 SHA256。
3. `FixedSymbolDumper9` 的 `fixed_primary` / `fixed_wander`：增加原始 `AreaInfo.Tag`、`AreaInfo.Type`、地点名称、等级范围、原始 fixed 表 SHA、TRSCN SHA、被碰撞体判定的严格/30f 命中结果，以及 `targetCollisionOrigin`。
4. `EncounterTraceSV` 的 `--trace-fixed-only true`：默认关闭。只读 FixedSymbol 追踪时不生成数 GB 的重复野生 JSONL，五张 .pkl 正式生成算法不应受影响。
5. `scripts/Verify-SV-Fixed-158-Collision-Sources.py`：按 236 条真正的 FixedSymbol `game + TableKey + tableIndex` 从新 trace 关联，要求每一项 TRSCN/TRCOL SHA 与同一次原始 NativeVirtualFileSystem `sourceFilesActuallyRead` 的已验证 SHA 完全一致，并保留无法判定游戏合法性的警示。

**未跑出源文件时不得声称 worldend 一定是 BOX 或 TRCOL；必须以真实运行输出为准。** 即使已经知道 AreaInfo.Tag/Type 与 TRCOL SHA，也还需要判断游戏运行时的剧情旗标和可达范围，不能直接根据 PKHeX 参考库决定哪个碰撞体应该删除。

## 源对照命令

```powershell
dotnet tools/pkNX/pkNX.EncounterCLI/bin/Release/net10.0/pkNX.EncounterCLI.dll \
  --virtual-root Unpack/4.0.0/romfs/arc/data.trpfs/virtual \
  --verified-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-extraction.json \
  --verified-trcol-manifest Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-trcol-extraction.json \
  --output <isolated-output> --level-ab-mode terarium-176-194-raw-point-levels
```

上面展示参数逻辑；PowerShell 中实际多行命令应使用反引号而非 `\` 续行，或写成单行。不能把 `--output` 指向原始虚拟源数据目录。

关联：[[SV-400-PointData-FixedSymbol-Source-Trace]]、[[SV-400-Fixed-Worldend-158-Source-Counterfactual]]、[[SV-Remaining-115-and-Worldend-158-Review]]。
