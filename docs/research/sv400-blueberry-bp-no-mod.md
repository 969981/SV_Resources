---
type: reverse-engineering
game: Pokemon Scarlet Violet
version: "4.0.0"
edition: Violet
created: 2026-11-17
updated: 2026-11-17
status: static-verified-runtime-not-observed
aliases:
  - 蓝莓BP免Mod修改
  - BBQ一次任务9999999BP
  - SV 4.0.0 BP钱包与原生奖励结算
tags: [sv, violet, 4-0-0, blueberry, bbq, bp, scblock, elf, lua, sys-botbase, gdb, obsidian]
---

# SV 4.0.0｜蓝莓 BP 免 Mod 修改、任务奖励与钱包持久化研究

> [!important] 结论和证据边界（2026-11-17）
> **“不用 Mod”指不安装 RomFS/ExeFS 内容补丁，不代表零工具。** 可通过离线存档编辑直接改 BP；另一条研究路线是在运行时修改**已加载任务定义**中的奖励，然后正常完成任务让原生游戏尝试结算。
>
> **已静态定位 ≠ 已在实机刷满。** 目前还没有本项目实机“任务奖励 → BP 变化 → 正常保存 → 完全退出 → 重载保持 9,999,999”全链条 A/B 记录。本文不把候选 RAM 指针、奖励 Hook、原生调用约定写成运行时已验证事实。
>
> 地址主要基于历史《紫》4.0.0 ELF/BLUA 分析。**《朱》4.0.0 须单独确认构建、函数 RVA 与代码原字节**，不允许直接套用《紫》地址。

- **目标**：将当前可用蓝莓点数（BP）设置为或通过一次任务结算达到 `9,999,999`；不混淆“当前余额”“历史累计获得数”“任务累计完成数”。
- **当前推荐方案**：若只求稳定修改自己离线存档，优先 PKHeX；若研究免 Mod 的运行时领奖机制，优先对**单个当前活动任务定义**做 4 字节奖励修改和 A/B 验证。
- **当前状态**：PKHeX 属性实现及存档 Key 可由公开源码复核；ELF/Lua 地址、结构来自既有静态审计记录；实机指针身份、到账与存档持久性 **NOT_OBSERVED**。

## 1. 固定来源与版本（复现先核 SHA）

| 来源 | 标识 / 内容 | 证据等级 |
|---|---|---|
| 《紫》4.0.0 `main` ELF | 历史 SHA-256：`d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0`；Build ID：`709BFD66115298640155FCC4979DBA151C7CC79A` | **HISTORICAL_STATIC_CONFIRMED**；本次提交未重新 hash 原文件 |
| 《紫》4.0.0 `main.blua` | 历史 SHA-256：`c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815` | **HISTORICAL_STATIC_CONFIRMED**；本次未重跑反编译 |
| BBQ MissionInfo | 历史解包记录指向 `world/data/club/MissionInfo/MissionInfo_array.bin`，约 64 项定义；需从仓库源清单/虚拟路径再次确认实际路径、大小与 SHA | **CANDIDATE_PROVENANCE**；不能仅凭笔记宣称本轮重新提取 |
| PKHeX 官方实现 | [SaveBlockAccessor9SV.cs](https://github.com/kwsch/PKHeX/blob/6c9583883c7551ac74a4b74180cead249d4277b8/PKHeX.Core/Saves/Access/SaveBlockAccessor9SV.cs)、[SAV9SV.cs](https://github.com/kwsch/PKHeX/blob/6c9583883c7551ac74a4b74180cead249d4277b8/PKHeX.Core/Saves/SAV9SV.cs)、[SAV_Trainer9.cs](https://github.com/kwsch/PKHeX/blob/6c9583883c7551ac74a4b74180cead249d4277b8/PKHeX.WinForms/Subforms/Save%20Editors/Gen9/SAV_Trainer9.cs) | **SOURCE_CONFIRMED**，但不代表本文完成真实存档修改 |

地址表示：`main+RVA` = 当前进程中实际 `MAIN_BASE + RVA`。不可混淆 ELF 文件偏移、ELF `p_vaddr`、Ghidra VA 与 Switch 的运行时物理/虚拟地址。地址不跨构建复用。

## 2. 两种“无 Mod”途径与实验等级

| 方法 | 是否要完成任务 | 是否修改游戏指令 | 目前证据 |
|---|---|---|---|
| **A. 离线存档修改**：PKHeX → `BlueberryPoints` | 否 | 否 | 官方存档读写属性与编辑器字段 **CONFIRMED**；本项目未做存档 A/B |
| **B. 运行时改单项任务 `reward_bp`**：正常完成一次 BBQ | 是 | 否；修改当前任务定义数据 | 字段偏移、Native 取值位置历史静态 **CONFIRMED**，原生到账 **NOT_OBSERVED** |
| **C. 直接调用游戏原生钱包更新包装** | 理论上否 | 不必永久修改指令，但调试调用可能需要暂停执行/注入调用上下文 | 入口位置历史静态确认；参数、对象身份、缓存同步、持久化 **UNKNOWN** |

另有历史奖励 Hook（金手指改指令/代码洞）方案，**不等同 B**：Hook 修改 `main+0x29DD98C` 跳转到代码洞，存在并发补丁/恢复风险，不是本研究首选。

## 3. 钱包本体、上限和原生函数

| 地址 / Key | 含义 | 不要误读 |
|---|---|---|
| `KBlueberryPoints = 0x66A33824` | 当前可用 BP 的 `u32` SCBlock **Key** | **不是 RAM 地址，也不是 `main` 文件内的固定偏移** |
| `main+0x29FA2C4` | BP 读取包装 | 需进一步看真实调用者/对象 |
| `main+0x29FA3CC` | BP 更新包装 | 不能在未知 ABI 下直接盲 `call` |
| `main+0x29FA444` | 进入通用更新路径的调用点 | 非独立“写 9999999”入口保证 |
| `CurrencyData.self[3]` | Lua 层当前 BP 缓存槽 | **是对象槽而不是固定地址** |
| Lua `root/15120` | 历史字节码显示 `self[3] = self[3] + delta`，随后调用 `FC40DDB19DC7E02E1` | 要核真实事件 delta 与 Native 写入 |
| Lua `root/15128` | 历史静态审计确认钱包限制区间 `[0, 9,999,999]` | 是结算层上限证据，不保证所有非正常路径都安全 |

PKHeX 官方属性对应：

~~~csharp
// SAV9SV.cs；引用官方实现以供语义对照，不是自行发明的文件格式
public uint BlueberryPoints
{
    get => (uint)Blocks.GetBlockValue(SaveBlockAccessor9SV.KBlueberryPoints);
    set => Blocks.SetBlockValueSafe(SaveBlockAccessor9SV.KBlueberryPoints, value);
}
~~~

编辑器 `SAV_Trainer9.cs` 在蓝莓页面加载 `MT_BP.Text = SAV.BlueberryPoints.ToString()`，保存时将该字段解析为 `uint` 并写回。推荐通过正常 SCBlock 解析器修改；**不可用原始文件全局搜索并覆盖“0x66A33824”代替正确的解密、序列化和校验**。

目标十进制 `9,999,999` = `0x0098967F`，4 字节 little-endian：`7F 96 98 00`。若余额原本大于零，“奖励增加 9,999,999”与“钱包被设置为 9,999,999”不是同一种操作；可用余额按原生结算层上限截断的实际效果仍需验证。

## 4. RomFS MissionInfo → 运行时 MissionDef（关键偏移）

历史研究将资源原始 FlatBuffers 与 ELF 加载后任务定义区分如下：

- 原始 `MissionInfo` 来源数据：`reward_bp` 的历史记录偏移 `+0x10`；
- **已加载的 Native `MissionDef`：每条 `0x1C`（28）字节，`reward_bp` 位于 `+0x0C`。**
- 不要把 ROM 原始偏移直接用于运行时内存写入，也不要直接将“64 × 28 字节”的数组全量覆盖（将连同目标、任务 ID、等级和权重一起破坏）。

| MissionDef 相对偏移 | 类型 | 字段 |
|---|---|---|
| `+0x00` | u8 | category |
| `+0x02` | u16 | mission_type |
| `+0x04` | u32 | mission_id |
| `+0x08` | u16 | goal |
| **`+0x0C`** | **u32** | **reward_bp** |
| `+0x10` | u32 | reload_bp（刷新/重抽相关，非完成奖励） |
| `+0x14` | u8 | release_type |
| `+0x15` | u8 | grade：0 蓝 / 1 红 / 2 金 |
| `+0x16` | u8 | difficulty |
| `+0x18` | f32 | weight |

历史静态审计的开奖锚点：
- `main+0x29DD98C`：原始 Native 读取当前任务定义的 `reward_bp`，寄存器语义为 `W10 ← [X25+0x0C]`；
- `main+0x29DD990`：写入任务完成结果对象的奖励字段（`completedResult+0x10`，u32）；
- 完成轮询相关 `main+0x29DD5CC`。上述不能自动证明当场实际加钱。

原生候选流水线：

~~~text
已加载 MissionDef.reward_bp (+0x0C)
  -> Native 完成结果 completedResult+0x10
  -> Native 256B / 264B 队列及 Lua self[9]（身份/队列条件待验）
  -> PostBpAdd 或 SaveCurrency 清算
  -> Lua CurrencyData.self[3] 增量结算/截断
  -> Native BP SCBlock（KBlueberryPoints=0x66A33824）
  -> 游戏正常保存 → 完全退出 → 重载   [NOT_OBSERVED]
~~~

**应以同一次运行时事件串起上下游对象身份，不要把历史文件中的单个静态点串接当成闭环证据。**

## 5. BBQManager 历史候选指针与当前任务定义

仅适用于历史《紫》4.0.0 配置，**整个表达式都是 CANDIDATE_RUNTIME_POINTER**：

~~~text
P  = read_u64(read_u64(read_u64(MAIN_BASE+0x04763B90)+0x340)+0x70)
M  = P - 0x28                        # M ≈ BBQManager；需同进程核对

begin = read_u64(M+0x2D8)
end   = read_u64(M+0x2E0)
cap   = read_u64(M+0x2E8)
# begin <= end <= cap
# (end-begin) % 0x1C == 0
# MissionDef[i] = begin+i*0x1C
~~~

历史 sys-botbase `pointerAll 74857360 832 112 688 0` 与定义向量起点有关，但 `pointerAll` 最末级解引用规则须使用当前 sys-botbase 客户端读回确认；它**不是已经验证的 BP 钱包指针**。

| 当前任务 | Manager 槽位 | 目标定义 |
|---|---|---|
| 蓝 1 | `M+0x258` | `read_u64(read_u64(M+0x258)+0x10)` |
| 蓝 2 | `M+0x278` | `read_u64(read_u64(M+0x278)+0x10)` |
| 蓝 3 | `M+0x298` | `read_u64(read_u64(M+0x298)+0x10)` |
| 红 | `M+0x2B8` | 同类路径，需核任务身份 |
| 金 | `M+0xB00` | 历史结构显示可能并非普通指针槽，必须独立验证 |

单个任务的只读目标地址推导（**伪代码，非直接可执行的 sys-botbase 连接脚本**）：

~~~python
m = get_bbq_manager_candidate(MAIN_BASE)
begin, end, cap = (read_u64(m + off) for off in (0x2D8, 0x2E0, 0x2E8))
assert begin <= end <= cap and (end - begin) % 0x1C == 0

active = read_u64(m + 0x258)           # 蓝1；先保证任务存在
definition = read_u64(active + 0x10)
assert begin <= definition < end
assert (definition - begin) % 0x1C == 0

mission_type = read_u16(definition + 0x02)
mission_id = read_u32(definition + 0x04)
grade = read_u8(definition + 0x15)
old_reward = read_u32(definition + 0x0C)

# 人工核对游戏 UI 中的当前蓝任务身份，并确认 grade == 0
# 确认之后才考虑临时写入：write_u32(definition + 0x0C, 9_999_999)
# 写后立刻读回；务必保存 old_reward 便于恢复
~~~

写入定义可能影响同时引用该定义的其他活动任务，且定义数据可能因重新加载/刷新而被覆盖。**只读核对成功之前禁止盲写**。

## 6. 更安全的实验策略：分步验收（全部待运行）

| 步骤 | 操作 | 通过条件 | 本轮结果 |
|---|---|---|---|
| 0 | 备份本人离线存档，记录版本/Build ID、ELF 与 BLUA SHA | 输入可恢复；不接入 Union Circle | **NOT_RUN** |
| 1 | 读钱包：PKHeX `BlueberryPoints`；游戏内当前 BP | 读取同一钱包值；Key 类型 u32 | **NOT_RUN** |
| 2 | 只读采样 `P/M` 与定义数组、当前蓝 1 身份和 `reward_bp` | 数组对齐、任务 ID/grade、原始奖励与 UI 一致 | **NOT_RUN** |
| 3 | 只对当前蓝任务 `definition+0x0C` 临时写 `0x0098967F` | 写前/写后 4 字节一致；其它字段不变 | **NOT_RUN** |
| 4 | 正常完成该任务，记录 `main+0x29DD98C`／`+0x29DD990` 及事件队列 | 结果对象金额与定义一致，队列未丢弃 | **NOT_RUN** |
| 5 | 同次运行观察 `main+0x29FA2C4` 和 `+0x29FA3CC`、Lua 余额 | BP 余额变化而非仅动画/临时结果变化；无溢出 | **NOT_RUN** |
| 6 | 正常保存，退出游戏进程，重启同存档 | 重载 BP 与保存前一致；无钱包回滚/存档异常 | **NOT_RUN** |
| 7 | 恢复实验前定义字节/任务状态，正常再做一任务 | 游戏默认奖励和任务轮询恢复正常 | **NOT_RUN** |

在未通过第 6 步之前，不能写“免 Mod 已实机成功刷满”。如果当前钱包非 0，需同时比较增量与 9,999,999 上限，不要仅比较奖励动画。

### GDB 观察点（断点地址须加入实时 `MAIN_BASE`）

| RVA | 核对事项 |
|---|---|
| `main+0x29DD98C` | `X25` 指向同一 `MissionDef`，`[X25+0x0C]` 是预期奖励 |
| `main+0x29DD990` | 任务完成结果对象 `+0x10` 的奖励值 |
| `main+0x29FA2C4` | 钱包 getter 的实际返回值 |
| `main+0x29FA3CC` | 钱包更新的参数、调用栈、更新前后状态 |
| `main+0x29FA444` | Native 通用更新调用的真实语义（候选待追） |

特别注意：ARM64 上 `X0..X7` 是常见参数寄存器，但**不能仅凭函数入口 RVA 推定这几个包装函数的真实 ABI**。必须在当前 ELF 下核验反汇编、调用者和对象生存期，再尝试主动调用。

## 7. 已否定的常见误解

- **REJECTED**：`0x66A33824` 是可直接写值的 RAM 地址。它是 SCBlock Key。
- **REJECTED**：`completedResult+0x10` 就是当前钱包。它只是完成结果中的临时奖励值。
- **REJECTED**：`CurrencyData.self[3]` 是永远不变的物理内存地址。它是运行时 Lua 对象的槽位。
- **REJECTED**：修改源 `MissionInfo` 的 `+0x10` 就能在当前活动定义的 `+0x10` 改奖励。运行时奖励字段是 `+0x0C`，`+0x10` 对应 `reload_bp`。
- **NOT_PROVEN**：只用蓝/红/金任务完成 FORCE 金手指就能绕过一切队伍门槛并得到 BP；任务状态、生成和结算是不同的子系统。
- **NOT_PROVEN**：单次静态扫描出的“成功写入包装”就能无上下文调用原生更新函数。

## 8. 下一次最小可证伪任务

先进行一次**完全只读**的《紫》4.0.0 实机采样：主模块基址与 Build ID、`P` 的每级指针、`M` 的定义数组 begin/end/cap、蓝 1 `mission_id/grade/reward_bp`、游戏 UI 奖励与钱包值。若这些与历史记录不一致，标注指针 **REJECTED** 并停止写入；如全部匹配，才做离线备份上的 4 字节单任务实验与原生钱包 A/B。

如只想快速获得 9,999,999 BP，使用 PKHeX 的 `BlueberryPoints` 编辑字段是已能从源码核对的更短路径；它不需要绕过任务结算，但必须正确导出和恢复存档。

## 9. 仓库关联与研究边界

- [[sv400-ghidra-12.2]] — 朱紫双版本反汇编/反编译方法和主模块地址语义。
- [[sv400-mystatus-live-parity-verification]] — SysBot 只读实机一致性验收的思路与规范（**非 BP 指针已经验证的证据**）。
- [研究索引](README.md) · [技术文档规范](TECHNICAL_NOTE_TEMPLATE.md)。
- [PKHeX 官方仓库](https://github.com/kwsch/PKHeX) — SCBlock Key 与 `SAV9SV.BlueberryPoints` 的独立源码依据。

> [!warning] 不在联机 / Union Circle 环境执行内存写入或 Hook。本文针对本人离线研究存档。不要用未验证的函数调用写未知对象，也不要把上述静态数据用于跨版本的任意写入。
