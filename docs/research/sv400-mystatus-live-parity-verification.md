---
title: "SV 4.0.0：实机 MyStatus 指针同一性与 0x68 字节验收"
aliases: ["朱紫MyStatus实机对账", "SV400 MyStatus Live Parity"]
tags: [SV, SysBot, Ghidra, ELF, MyStatus, TrainerID, Validation, Obsidian]
updated: 2026-11-11
status: PROBE_READY_RUNTIME_NOT_OBSERVED
---

# 朱紫 4.0.0：SysBot ↔ ELF MyStatus 0x68 全量一致性实机验收

关联：[[sv400-sysbot-mystatus-pointers]]、[[sv400-new-save-trainer-id-elf-consolidated]]、[[sv400-trainer-id-initializer]]、[[sv400-trainer-id-validation]]。

> [!warning] 结果等级
> **探针与模拟测试通过，不等于实机已验证。** 该仓库及 GitHub Actions 无权访问用户的 Switch 运行时内存。只有本地设备真实连接并成功读取两条链，才可以把状态从 `PROBE_READY_RUNTIME_NOT_OBSERVED` 更新为 `RUNTIME_CONFIRMED`；不得根据 GitHub Actions 成功或模拟测试就声称 MyStatus 与 ELF_MyStatus 物理相同。

## 0. 对应源码与验证器

- 独立只读工具：[`scripts/Probe-SV400-MyStatus-Live.py`](../../scripts/Probe-SV400-MyStatus-Live.py)；仅 Python 3.10+ 标准库，不调用任何 Poke/PokeMain/写入指令。
- 合成测试：[`tests/test_sv400_mystatus_probe.py`](../../tests/test_sv400_mystatus_probe.py)，验证相同地址、不同地址同字节、不同字节、指针解析失败、非原子读竞争、指针移动、协议分段以及版号拒绝。
- CI：[`.github/workflows/sv400-mystatus-live-probe-tests.yml`](../../.github/workflows/sv400-mystatus-live-probe-tests.yml)。**仅跑模拟测试**，绝不接 Switch，也不会上传训练家数据。
- 固定参考：SysBot.NET [PokeDataOffsetsSV.cs](https://github.com/kwsch/SysBot.NET/blob/844c1f31face95bc8e1cfec9c9b7cbd9f7a62895/SysBot.Pokemon/SV/Vision/PokeDataOffsetsSV.cs) 与 [SwitchSocketAsync.cs](https://github.com/kwsch/SysBot.NET/blob/844c1f31face95bc8e1cfec9c9b7cbd9f7a62895/SysBot.Base/Connection/Switch/Wireless/SwitchSocketAsync.cs)。

## 1. 验证前置条件

1. 在**本人拥有/获授权**的 Switch 上启动《朱》或《紫》，确认实际 TitleID 为 `0100A3D008C5C000` 或 `01008F6008C5E000`，显示版本**恰好** `4.0.0`。不要在游戏尚未读入存档的标题画面或首次 UI 尚未完成的空白状态强行解释失败。
2. Switch 的 sys-botbase Wi‑Fi TCP 通讯功能已正常工作；PC 与 Switch 通过可信局域网连接。Wi‑Fi 连接端口按本机配置，通常是 `6000`；**这里没有 USB 版自动封装**。
3. 暂停其他同时修改游戏数据的插件或调试器、保持游戏相对静止。需要活跃状态的 Box 指针最好在游戏加载完成后验证；空盒槽允许全零。
4. 检查 Switch 电源、游戏版本、授权和本机网络。不在公共网络暴露 botbase TCP；禁止将含 IP、绝对地址或完整个人存档数据的日志提交到公开仓库。

## 2. 一条命令运行

在仓库根目录，Windows PowerShell：

~~~powershell
py -3 scripts/Probe-SV400-MyStatus-Live.py --host <你的Switch局域网IP> --port 6000 --samples 3 --interval 0.3 --output sv400-mystatus-local.json
~~~

macOS / Linux：

~~~bash
python3 scripts/Probe-SV400-MyStatus-Live.py --host 192.168.x.x --port 6000 --samples 3 --interval 0.3 --output sv400-mystatus-local.json
~~~

默认本地报告**隐藏原始 ID32、绝对地址、姓名和完整 0x68 字节**，仅保留地址比较结果、逐字节是否完全相等、SHA‑256 与差异偏移；不输出原始 Pokémon 内存。若仅在自己的本地机器上需要分析绝对地址与可见训练家 ID，添加 `--reveal-values`，但该报告**不可公开提交**。

自检（无需 Switch）： 

~~~bash
python3 -m unittest discover -s tests -p 'test_sv400_mystatus_probe.py' -v
~~~

## 3. A/B 路径的真实比较公式

~~~text
运行时主模块基址 = mainBase (getMainNsoBase)

A：SysBot 4.0.0 本地训练家
  pointerAll([0x47350D8, 0xD8, 0x8, 0xB8, 0, 0x40])
      → absolute A
  pointerPeek(0x68, 同上指针链) → a[0..0x67]

  另行手动核对：
    p0 = READ64LE(main+0x47350D8)
    p1 = READ64LE(p0+0xD8)
    p2 = READ64LE(p1+0x08)
    p3 = READ64LE(p2+0xB8)
    p4 = READ64LE(p3+0x00)
    manualA = p4+0x40
    ASSERT manualA == pointerAll(A)

B：原生 ELF 运行时全局状态
  state = READ64LE(main+0x4740AC0)
  absolute B = state+0x40
  peekAbsolute(B, 0x68) → b[0..0x67]

核心判定：
  A == B ?
  a[0..0x67] == b[0..0x67] ?
  peekAbsolute(A, 0x68) == pointerPeek(A, 0x68) ?
  同一状态连采 >= 2 份地址和缓冲区是否稳定？
~~~

注意 `DAT_04840AC0` 是 Ghidra VA，正确的 main RVA 为 `0x04740AC0`；而 SysBot 根是 `0x047350D8`，**不是**相同的静态槽位。游戏运行时的 **A 与 B 是否同一个最终物理对象** 目前仍未知。

## 4. 三条辅助指针不能作为主判定替代品

前三条辅助链共享 A 的 `p0/p1/p2/p3`，探针会对每条再次运行 `pointerAll` 并手动拆链核对，且比较 `pointerPeek` 与 `peekAbsolute`：

| 辅助 | 追加偏移 | 检测 |
|---|---|---|
| ConfigPointer | `[0xD0,0x40]` | 读取 1 byte，`&3` 为文字速度编码 |
| CurrentBoxPointer | `[0x28,0x570]` | 读取 1 byte，记录当前盒索引 |
| BoxStartPokemonPointer | `[0x30,0x9D0,0]` | 读取 `0x158`（344）字节；可以是空槽，全零不判失败 |

辅助失败时主比较仍可独立成立，但不能因此宣布“公共管理器所有子对象已验证”。加载未完成时某条链可能为 null；将它记为 `readable=false`，不要乱填实际堆地址。

### 与交易状态结构严格隔离

`TradeMyStatus` 是另一种 **0x30 字节**布局：ID32=+0，Game=+4，Gender=+5，Language=+6，OT=+8。**本地** `MyStatus9` 的 Language=+7、OT=+0x10，数据体使用 `0x68` 字节。不能拿交换对方结构做相同偏移比对，也不能把 `PartnerNID` 当游戏训练家 ID32。

## 5. 如何解释结果

| verdict | 结论 |
|---|---|
| `VERIFIED_SAME_RUNTIME_PAYLOAD` | 多次稳定观测到 A=B、完整 0x68 字节一致、PointerPeek 与绝对读取吻合，且独立跳转核验通过；**证明此次运行时同一数据体** |
| `DISTINCT_ADDRESSES_EQUAL_CONTENT_NOT_SAME_OBJECT` | 内容逐字节一致但最终地址不同；可能是副本/同步，不能声称同一个物理对象 |
| `DIFFERENT_0x68_CONTENT` | 稳定不一致，查看 `first_difference_offset`；若游戏正在更新需重试 |
| `INCONCLUSIVE_POINTER_SEMANTICS` | 手动指针规则与 botbase `pointerAll` 或 `pointerPeek` 不一致；检查 botbase 版本与最后一项解引用语义 |
| `INCONCLUSIVE_POINTER_MOVED_BETWEEN_SAMPLES` | 对象地址在多次采样间发生变化；可能正在加载或释放 |
| `INCONCLUSIVE_CHANGED_DURING_SAMPLES` | 数据在多次采样间发生变化；重新进入稳定场景 |
| `INCONCLUSIVE_NON_ATOMIC_READ_RACE` | 同一个最终地址但分次读取了不同内容；这是读取竞态，不应算作状态结构不一致 |
| `INCONCLUSIVE_UNINITIALIZED` / `INCONCLUSIVE_UNREADABLE` | 数据区全零或当前加载阶段指针无效，不能判断同一性 |

> [!important] 成功不代表完成所有问题
> **同一运行时对象**与**最初 ID32 RNG/seed**是不同结论。此处不触发任何内存写入，不保证训练家 ID 在何时生成。更不能从 RAM 字节一致推出 **保存到 eMMC 后的持久化成功**；仍需游戏保存→完全关闭→冷启动→对照存档块 ID32。本文的 `0x68` 比较属于同一次运行中的在线状态验证。

## 6. 建议记录的最小实机证据

- 截取本地报告的 `verdict`、版本、三个辅助 `readable` 和 `first_difference_offset`。
- 对于 `--reveal-values` 的私有报告，另核对 A、B、手动 A 的地址；记录是否相同、是否连续多次稳定、在名字确认后多久可读。
- 每个版本各一份，用不同冷启动场景复验；尤其第一次初始化 `state+0x40` 为零值时不要混同于随机 ID32 已生成。
- 如需把实机数据录入 Obsidian，仅录核验状态与**匿名化结果**，不要提交实际网络地址、姓名、完整内存 dump。

### 本轮实机状态

`NOT_OBSERVED`。GitHub CI 仅执行模拟协议测试，**没有物理 Switch 内存、没有读取到真实 A/B 绝对地址或比较结果**。若想真正闭合，请在授权设备上执行上述一条命令并检查本地报告。
