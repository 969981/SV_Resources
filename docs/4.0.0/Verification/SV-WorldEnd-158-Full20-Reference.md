---
title: 朱紫 4.0.0｜WorldEnd 地点 158 完整 20B 固定模板二次验收
aliases: [SV400 WorldEnd Fixed 20B Pinned Reference Identity]
tags: [SV, 4.0.0, FixedSymbol, PKHeX, 20B, WorldEnd, TRCOL, Duplicate]
status: ORIGINAL_NATIVE_FULL20_REFERENCE_RECONSTRUCTED_NOT_GAME_RUNTIME_LEGALITY
updated: 2026-11-08
---

# 原生来源与独立 PKHeX 参考集合

这次直接读取 [Actions #42362541291](https://github.com/969981/SV_Resources/actions/runs/42362541291) 的真正原生 `encounter_fixed_paldea.pkl`，SHA-256 为 `F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8`。这是原始 61+223 游戏原生资源通过 pkNX 构建出来的 977 条记录，**不是从 PKHeX 参考文件复制生成的游戏输入**。

独立使用 [Actions #42356030937](https://github.com/969981/SV_Resources/actions/runs/42356030937) 的 PKHeX 固定 `0660d1e1f4924b8478daec73281bb8071a82ad19` 参考对账：原生 `977`、仅原生 `203`、仅 PKHeX `203`、完全相同 `774`。用保留重复数的 `Counter` 重建 PKHeX 参考：`reference = native - native_only + pkhex_only`，必须获得 977 条参考记录及 774 条原始完全匹配。

再将 [Actions #42374514212](https://github.com/969981/SV_Resources/actions/runs/42374514212) 的 236 条 `WorldEnd → 158` 原始 TableKey 反事实，使用 **15 字段、原生 20 字节固定记录** 而非物种/等级/地点简化身份执行对账。实际结果：**232/236 唯一关联完整 20B，4 条仍有两个候选**。这不是程序编译推导，而是实际旧版 `.pkl` 与两个独立参考差异 CSV 的重新计算。

## 参考库对不同完整模板的去留

| 全国编号 | 等级 | 在固定 PKHeX 基准中保留 158 | 删除 158 才匹配参考 |
|---|---|---|---|
| 218（熔岩虫） | 28、69 | 3 保底 IV、太晶 type=7、招式 ID `246/510/151/108` | 0 保底 IV、type=0、四招式 ID 全 0 |
| 629（秃鹰丫头） | 30、68 | 0 保底 IV、type=0、四招式 ID 全 0 | 3 保底 IV、type=5、招式 ID `92/365/399/213` |

因此之前 68/69、71/72、152/153、155/156 的**同 TableKey/物种/等级/地点指纹却标签相反**，不表示完整模板相同。它们对应两条确实不同的原生 20B 字节记录：至少在 IV、太晶与招式上不同。

尚未完全确定来源归属的是 **840（啃果虫）** 的 `case 198/199`（等级 15）及 `202/203`（等级 59）。两种完整 20B 模板分别有 0 与 3 保底 IV，后者太晶 type=8；**这两种都在参考库中只有删 158 后才匹配**，仅凭参考结果无法区分来自哪个 TableKey/Index。

## 研究结论与安全边界

- 对 236 原始行：从参考模板视角 `189` 删 158 后改善、`46` 删后丢失匹配、`1` 两边均匹配；多重集合应另保留真实 `190/47` 统计，不能混为逐行身份。
- 不允许将 `232/236` 理解为已验证 232 个实际游戏出生点；完整 20B 模板只是**参考匹配**，尚未验证运行时剧情旗标、生成条件、随机数、实际捕获 PK9。
- 研究分支中的 `FixedSymbolDumper9` 只读 `originalFixed20Hex`、去重标记和原始插入索引，需经新原生事件日志才能把尚存 4 条来源行绑定到精确 `TableKey`。
- 不能按物种、名称前缀、区域或最终匹配分数对官方 PKHeX 合法性库做自动补丁。

## 可复现执行

- 代码：`scripts/Disambiguate-SV-WorldEnd-158-Full20.py`
- 无 ROM 测试：`tests/test_sv_fixed158_full20_reference.py`
- GitHub Actions：`.github/workflows/sv-fixed158-full20-reference.yml` 下载三个历史真实证据 Artifact，严格校验四个输入 SHA-256，输出 236 行 JSON/CSV；不下载/提交游戏二进制到 Git。
- 目标输出：`SV400_236_Fixed158_Full20_Source_Reference_Audit.json` 与 `SV400_236_Fixed158_Full20_Reference_Identities.csv`。