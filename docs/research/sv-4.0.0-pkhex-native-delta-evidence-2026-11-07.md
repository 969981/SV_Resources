---
title: SV 4.0.0 原生 → PKHeX：真实差异与 LegalityAnalysis 证据
aliases: [朱紫4.0.0合法性重建, 原生野生固定遭遇差异]
tags: [SV, pkNX, PKHeX, 4.0.0, TRCOL, 合法性, 遭遇]
updated: 2026-11-07
status: ORIGINAL_SOURCE_COMPLETE_RAID_EXACT_WILD_FIXED_UNRESOLVED
---

# 原生数据、差异与合法性真正进展

这是从原始 SV 4.0.0 Trinity data.trpfd/data.trpfs 真实解析后执行 pkNX Gen9 规则得到的结果。PKHeX 基准固定为 kwsch/PKHeX commit 0660d1e1f4924b8478daec73281bb8071a82ad19，**是历史快照，并不保证包含所有 4.0.0 运行时改变**。

## 已实际验收

- 原生 61 个核心配置文件及 4 个碰撞场景通过 SHA256。TRSCN 内 226 次 Havok 引用对应 223 个不同 .trcol 原始文件，分布于 7 包；unresolved=0；223 项全部原始 SHA 校验通过。
- Headless pkNX 原生野生、固定和 Raid 生成程序成功运行；Source SHA 清单表明共读入 276 个原始文件，含 223 个 TRCOL；没有用 PKHeX 参考文件作为生成输入。
- 普通 Raid 帕底亚 454、北上乡 133、蓝莓 113 条，三张二进制与固定 PKHeX 参考 **逐字节完全一致**。
- 野生 416 area/29,840 slot，参考为 400 area/26,861 slot。固定双方均为 977 条，部分字段不同。
- 双版本 PKHeX.Core（原始固定版本 vs 注入 5 张原生生成表的隔离版本）对 6 个官方 PK9 测试样本执行真正 LegalityAnalysis：6 个判断相同。另 5 张表各抽取 32 个原生模板构造 PK9 共 160 个，均被识别为合法且命中预期遭遇类型。这些原生候选是程序产生，并非实机捕获。

## 固定遭遇：203 个差异，不是 203 种配置改变

- 对原版独有 203 与原生独有 203 个 20 字节记录，按物种、形态、等级、无瑕 IV 数、性别、特性、太晶类型、4 招式共 11 个非地点字段完整配对：**202 组只改变了 Location 字段**。
- **191 组**原生在原有地点之外额外加入 Location ID 158；pkNX 的区域命名中 ID 158 是 Mossfell Confluence（北上乡）。
- **另 11 组**是其他地点差异，包括 67 或 194 的增加。
- 只有 **一条参考独有非地点模板** Species 23、Level 15，与 **一条原生独有非地点模板** Species 297、Level 40。二者不是同一物种，因此不可随意对应为“迁移”。
- 没有不确定的多重项匹配。

不能为追求历史 PKHeX 字节一致就删除 158。需分别验证朱/紫原始 fixed_symbol 双版本坐标、场景 Box/Havok 实际范围、移动对象可达性、±30 容差、Region/LocationNameMain 解析、4.0.0 真实行为。

## 野生遭遇：区别等级变更与邻区传播

- 比较器原生独有 **3,655**，PKHeX 参考独有 **676**。不能把净增的 2,979 槽直接叫“新增合法遭遇”。
- 按 Location/CrossFrom/Species/Form/Gender/Time/Weather 签名比较两侧的差异子集：参考独有 676 在原生差异子集中都有相同签名，原生同签名共 820 行；主要为等级区间扩展或拆并变化，**不是严格一一配对**。
- 原生差异子集中还有 **2,835** 行没有参考差异子集的同签名，其中 **2,442** 条是跨区 CrossFrom 非零，**2,677** 条位于北上乡。
- 上述“无同签名”只针对两边 **diff-only CSV**，不能证明完整 PKHeX 参考库里绝对没有该签名；全库唯一性还需直接扫描参考完整记录。
- 原生独有 3,655 中跨区 2,907，直接出现 748。首要检查邻区可激活范围、容差、Havok AABB 树和 AreaTag/Weather 许可。

## 当前真实代码与证据

- 原生 SHA 与碰撞恢复：[Actions #42334179582](https://github.com/969981/SV_Resources/actions/runs/42334179582)
- 完整原始差异 CSV：[Actions #42336889324](https://github.com/969981/SV_Resources/actions/runs/42336889324)；该 run 总结有失败步骤，但生成和比对产物确实存在，应以 artifact 内 source SHA/status 为准
- 两份 PKHeX.Core 真正运行 PK9：[Actions #42338343762](https://github.com/969981/SV_Resources/actions/runs/42338343762)
- SHA 校验的差异归因：脚本 scripts/Diagnose-SV-Native-PKHeX-Deltas.py 与 [Actions #42351493782](https://github.com/969981/SV_Resources/actions/runs/42351493782)
- 定向差异样本测试：tools/PKHeX.Gen9LegalityProbe/DeltaFixtureMaker.cs，脚本 scripts/Compare-SV-PK9-Embedded-Legality.py；[Actions #42352435765](https://github.com/969981/SV_Resources/actions/runs/42352435765) 的最新产物才是定向 PK9 结论，不要预先将运行状态写成“成功”。

## 未完成的合法性层

1. 固定地点 158、北上乡真实跨区和原生新增等级：选取 diff-only 的具体模板生成一次 PK9，固定其字节 SHA，同时喂给原版/原生替换版 LegalityAnalysis，报告 reference-valid/native-valid 的差异及 EncounterMatchType 和具体错误码。
2. 对照 SV 4.0.0 实机捕获 PK9 和生成路径，确认 158、67、194 的实际可达性；不能由程序构造的 PK9 直接当成原生实机样本。
3. 单独闭合剧情和事件锁闪、遭遇的 PID/EC/IV RNG、Distribution/Might Raid、Outbreak 和 HOME 转移。
4. 对应验证通过以后才能考虑修改 pkNX 的固定/野生合法性模板和 PKHeX 资源；严禁只为了使统计相等而删除原生差异。

关联：[[sv-4.0.0-pkhex-native-recovery]]、[[sv-pkhex-trcol-collision-closure]]、[[sv-pkhex-two-build-legality]]、[[sv-pkhex-encounter-native-regeneration]]。
