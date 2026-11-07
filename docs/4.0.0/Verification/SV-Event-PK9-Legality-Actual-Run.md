---
title: 朱紫 4.0.0｜活动 PK9 LegalityAnalysis 实际运行
tags: [SV, PKHeX, PK9, RNG, Raid, Outbreak, 4.0.0]
status: ACTUAL_ENGINE_RUN_NOT_GAME_CAPTURED
updated: 2026-11-07
---

# 原版 PKHeX Gen9 活动模板：真实运行证据

## 真实输入与执行

- 固定 PKHeX 源码 SHA `0660d1e1f4924b8478daec73281bb8071a82ad19`；未使用浮动 HEAD。
- 三张活动源数据的原始 SHA-256 来自 [Actions #42359340624](https://github.com/969981/SV_Resources/actions/runs/42359340624) 真实生成的 `SV400_Expanded_Encounter_Manifest.json`，程序运行前又重算原始文件 SHA。
- 本轮 [Actions #42359722593](https://github.com/969981/SV_Resources/actions/runs/42359722593) 的 .NET10 编译成功，`LegalityAnalysis` 本体成功运行，输出原始 JSON。首次外围工作流因 Python 读取带 BOM 的 UTF-8 JSON 而失败，不是引擎失败；随后修正了输出编码以及 Python 解码。
- PK9 都是 PKHeX `ConvertToPKM` 从原版历史合法性模板生成，不是游戏 4.0.0 游玩捕获。对照样本来自 PKHeX 官方测试文件。

## 原始实际 LegalityAnalysis 结果

| 类别 | 模板总数 | 抽样 PK9 | Parsed | Valid | 遭遇类型精确匹配 | MetLevel=0 负对照拒绝 |
|---|---:|---:|---:|---:|---:|---:|
| 活动 Tera Raid `EncounterDist9` | 174 | 20 | 20 | 20 | 20 | 20 |
| 最强七星 `EncounterMight9` | 56 | 20 | 20 | 20 | 20 | 20 |
| 活动出现 `EncounterOutbreak9` | 12,636 | 20 | 20 | 20 | 13 | 20 |
| **总计** | 12,866 | 60 | 60 | 60 | 53 | 60 |

另：6 份 PKHeX 官方原始 PK9 的 LegalityAnalysis 全部有效；6 份修改了初遇等级为 0 并刷新校验和的负对照均被拒绝。

最重要的边界：`Valid=true` 不等于 `EncounterMatch` 与构造模板相同；更不等于独立游戏 RNG 来源证明。

### 七份由活动出现模板生成、却匹配普通野生槽的候选

| 事件模板序号 | 全国图鉴编号 | 捕获地点 ID | 捕获等级 | 实际匹配类别 |
|---:|---:|---:|---:|---|
| 3325 | 434 | 40 | 52 | `EncounterSlot9` |
| 3990 | 692 | 14 | 38 | `EncounterSlot9` |
| 5320 | 963 | 22 | 18 | `EncounterSlot9` |
| 7315 | 200 | 28 | 34 | `EncounterSlot9` |
| 7980 | 113 | 26 | 30 | `EncounterSlot9` |
| 8645 | 843 | 32 | 25 | `EncounterSlot9` |
| 12635 | 983 | 164 | 74 | `EncounterSlot9` |

因为源码测试只是用活动模板生成候选再进行匹配，这七份存在普通野生槽覆盖、遭遇模板优先级或其他条件解释，**不可宣称活动出现规则错误或合法性引擎错误**。每条 JSON 另保存 PID、EC、六项 IV、异色状态和完整无效检测项。

## 工作流和源码

- `tools/PKHeX.Gen9EventLegalityProbe/PKHeX.Gen9EventLegalityProbe.csproj`
- `tools/PKHeX.Gen9EventLegalityProbe/Program.cs`
- `.github/workflows/sv-gen9-event-legality.yml`

验收区分三个状态：PKHeX 原始资源 hash 验证、PKHeX 实际 LegalityAnalysis 对候选运行、独立游戏 4.0.0 RNG 运行时验证。第三项本轮未通过。新增脚本不能自动填补官方样本或实机捕获信息。

相关：[[SV-Event-Raid-Outbreak-PKHeX-Serebii]]，[[Gen9-PKHeX-Native-400-PK9-Location158]]。
