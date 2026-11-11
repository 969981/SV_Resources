---
title: "SV 4.0.0：新建训练家 ID / 双 ELF 研究"
aliases: ["朱紫新建账号用户ID", "SV TrainerID"]
tags: [SV, ELF, Ghidra, TrainerID, Obsidian]
version: "4.0.0"
updated: 2026-11-11
status: PARTIAL_STATIC_VERIFIED
---

# 朱紫 4.0.0 — 新建训练家 ID：双 ELF 原生证据与生成链

> [!warning] 证据级别
> 已证实：两份原始 ELF、KMyStatus 保存块的字段布局、四个原生函数锚点及其静态调用关系。尚未证实：新建游戏产生 ID32 的随机源／seed／完整调用栈，以及保存成功 ACK。不要把读取或初始化存档的函数误标成 ID 生成器。

详见 [[sv400-trainer-id-native-asm]]（逐行 ARM64/指针/伪代码）和 [[sv400-trainer-id-validation]]（运行时验证与完整流程）。完整双 ELF Ghidra 索引参见 [[sv400-ghidra-12.2]]。

## 1. 三个 ID 不应混淆

**训练家 ID32**：游戏存档中的 u32 值，低 16 位 TID16、高 16 位 SID16。七代及以后训练家卡片上显示六位十进制 TID，一般为 ID32 % 1000000，并不是直接显示 TID16。

**Switch OS UserId**：操作系统的用户档案及 SaveData 归属标识，不是游戏内的 ID32。**HOME/网络账号标识**：另一层服务身份，不能由卡片 ID 推出。本文的“新建账号”特指新建游戏存档里的训练家身份。

## 2. 输入与 SHA-256

| 游戏 | ELF | 大小 | SHA-256 |
|---|---|---:|---|
| Scarlet 4.0.0 | Unpack/4.0.0/exefs/scarlet_main/scarlet_main.elf | 74362480 | 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f |
| Violet 4.0.0 | Unpack/4.0.0/exefs/violet_main/violet_main.elf | 74362480 | 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30 |

NSO 在 4.0.0/0/；Ghidra 12.2 已发布于 Unpack/4.0.0/exefs/{scarlet_main,violet_main}/ghidra12.2/，无需再进行全量反编译。Ghidra IMAGE_BASE=0x100000；main+RVA = Ghidra VA-0x100000。**ELF 文件偏移不等于 RVA**；指针对象相对偏移也不是 main+ 的静态位置。

## 3. 玩家存档块的准确结构

固定来源：kwsch/PKHeX commit 96e33e7432d900e5345afdfd117eabfac43f5bbd 中的 SaveBlockAccessor9SV.cs / MyStatus9.cs / SAV9SV.cs。PKHeX 是独立存档解析器，足以佐证保存的数据布局，不能单凭它反推游戏内生成器。

- KMyStatus = **0xE3E89BD1**（训练家详情 SCBlock）
- KGameLanguage = **0x25839373**（独立运行时语言块）
- KCurrentAppearance = **0x812FC3E3**（外观数据，非训练家 ID）

| 相对 KMyStatus 的解密后 payload | 类型 | 字段 |
|---|---|---|
| +0x00 | little-endian u32 | ID32 |
| +0x00 | little-endian u16 | TID16（低 16 位） |
| +0x02 | little-endian u16 | SID16（高 16 位） |
| +0x04 | u8 | Game 版本 |
| +0x05 | u8 | Gender |
| +0x07 | u8 | Language |
| +0x10..+0x29 | 26 bytes | OT 训练家姓名 |
| +0x5A | u8 | BirthMonth |
| +0x5B | u8 | BirthDay |

该 +0x00 是 **payload+0**，不是 SCBlock 记录起始，也不是 main+0。不同语言域编码还涉及 RuntimeLanguageExtensions 的映射。

~~~cpp
// 存档解析伪代码；不是游戏里新建 ID 的 RNG 算法
uint32_t id32  = read_u32_le(myStatusPayload + 0);
uint16_t tid16 = (uint16_t)id32;
uint16_t sid16 = (uint16_t)(id32 >> 16);
uint32_t visibleTid = id32 % 1000000u;
uint32_t visibleSid = id32 / 1000000u;
~~~

例：ID32=0x12345678=305419896，TID16=22136，SID16=4660，六位可见 TID=419896。十进制六位值并不等于低 16 位 TID。

## 4. 两版 ELF 原生函数及静态调用者

| Ghidra VA | main RVA | 静态原生证据 |
|---|---|---|
| 0x0168D10C | +0x0158D10C | 对全局写指针后直接调用 FUN_0168D238 |
| 0x0168D238 | +0x0158D238 | 构造 Key 0xE3E89BD1，查找、创建/更新 KMyStatus 记录候选 |
| 0x020F8D00 | +0x01FF8D00 | 相同 Key，索引查找与间接回调 |
| 0x00F844F4 | +0x00E844F4 | 被两个函数调用的容器解析辅助函数；真实业务类型未证明 |

双版 Ghidra C 扫描：直接含 Key 的函数各有 2 个；FUN_0168D238 的唯一直接文本调用者各为 0168D10C；FUN_020F8D00 没有直接文本调用者（不排除间接调用）。以上只是被扫描到的 Ghidra C，不构成全程序调用覆盖证明。

~~~cpp
// FUN_0168D10C：原版双版本反编译结构，重新加注释
void FUN_0168d10c(void* state) {
    DAT_04840AC0 = state;  // 登记全局对象指针
    FUN_0168d138();        // 上游辅助操作：待反查语义
    FUN_0168d238(state);   // KMyStatus 记录处理
}
~~~

游戏角色新建时的 **ID32 抽取者不是这几个函数已知的结论**。首先需要确定 FUN_0168D10C 是在何时进入、对应何种状态，然后反查 param_1+0x40 真正数据来源。

## 5. 拟恢复的全流程（候选，不是已证实调用栈）

~~~mermaid
flowchart TD
 A[Switch 用户与本地 SaveData] --> B[朱紫 4.0.0 main]
 B --> C[首次新建存档与语言性别姓名设置]
 C --> D{ID32 生成入口 UNKNOWN}
 D --> E[随机源及 seed UNKNOWN]
 E --> F[写入 MyStatus payload+0x00]
 C --> G[写入 Game Gender Language OT]
 F --> H[KMyStatus / HashDB 更新]
 G --> H
 H --> I[保存 I/O 与 ACK UNKNOWN]
 I --> J[重启读取 ID32 并显示 6 位]
~~~

源码： [PKHeX MyStatus9](https://github.com/kwsch/PKHeX/blob/96e33e7432d900e5345afdfd117eabfac43f5bbd/PKHeX.Core/Saves/Substructures/Gen9/SV/MyStatus9.cs)；[存档块键](https://github.com/kwsch/PKHeX/blob/96e33e7432d900e5345afdfd117eabfac43f5bbd/PKHeX.Core/Saves/Access/SaveBlockAccessor9SV.cs)。静态扫描实证： [Actions #42950477990](https://github.com/969981/SV_Resources/actions/runs/42950477990) 与 [Actions #42951004888](https://github.com/969981/SV_Resources/actions/runs/42951004888)。
