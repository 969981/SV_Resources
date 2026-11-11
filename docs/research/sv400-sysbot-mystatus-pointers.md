---
title: "SV 4.0.0：SysBot 指针链与训练家 ID32 双 ELF 对账"
aliases: ["朱紫4.0.0 MyStatusPointer", "SV SysBot Trainer ID pointers"]
tags: [SV, SysBot, TrainerID, ELF, Ghidra, Obsidian, Pointer]
version: "4.0.0"
updated: 2026-11-11
status: STATIC_CORRELATED_RUNTIME_NOT_OBSERVED
---

# SysBot 4.0.0 指针链 → MyStatus → ID32 → 原版双 ELF 函数

关联：[[sv400-new-save-trainer-id-elf-consolidated]]、[[sv400-new-save-trainer-id-elf]]、[[sv400-trainer-id-native-asm]]、[[sv400-trainer-id-initializer]]、[[sv400-trainer-id-validation]]。

> [!important] 当前证据边界
> **CONFIRMED_STATIC**：SysBot 官方 4.0.0 源码中的偏移、调用 PointerPeek 的代码；PKHeX 的本地 MyStatus9 payload 字段；Scarlet 与 Violet 4.0.0 反编译 C 中的 ID32 setter、getter、六位 TID 算法以及初始化器。
> **CANDIDATE**：SysBot 的独立链和 ELF 全局对象 DAT_04840AC0 可能访问同一个状态对象或相互同步的副本。
> **NOT_OBSERVED**：尚无任何一次真实 guest PointerAll 最终绝对地址、X0 运行时值或两条链的对象地址相等证据；没有得到首次新档 RNG/seed 或 SaveData ACK。

## 1. 源码版本与证据

- 固定 SysBot.NET 提交：`844c1f31face95bc8e1cfec9c9b7cbd9f7a62895`，`SysBot.Pokemon/SV/Vision/PokeDataOffsetsSV.cs`。
- 对应 `PokeRoutineExecutor9SV.cs` 用 `SwitchConnection.PointerPeek(info.Data.Length, Offsets.MyStatusPointer, token)` 读取，再 `read.CopyTo(sav.MyStatus.Data)`。
- `SysBot.Base/Util/SwitchCommand.cs` 将 jump 列表编码为 `pointerPeek <count> <jump0> ...` 和 `pointerAll <jump0> ...`；具体指针解引用由目标端 sys-botbase 实现。**本地 C# 封装仅编码命令，不在 PC 端逐级读内存**。
- 固定 PKHeX 提交：`96e33e7432d900e5345afdfd117eabfac43f5bbd`，`MyStatus9.cs` / `SaveBlockAccessor9SV.cs`。
- 原 ELF：朱 SHA256 `53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f`；紫 SHA256 `84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30`。

`ScarletID = 0100A3D008C5C000`、`VioletID = 01008F6008C5E000` 是 Nintendo **Title ID**，不是训练家 TID 或 ELF Build ID。`SVGameVersion=4.0.0` 是版本检查；最好再对真实 Build ID / ELF SHA 做独立校验。`LibAppletWeID` 与训练家 ID32 无直接关系。

## 2. 本地 MyStatusPointer：逐级解析

用户提供且与 SysBot 官方源码一致的数组：

~~~csharp
MyStatusPointer = [0x47350D8, 0xD8, 0x8, 0xB8, 0x0, 0x40];
~~~

按常见 `pointerAll` 链表达方式解读，前五项逐级取 LE u64 指针，**最后的 `+0x40` 是目标数据的字段偏移而非再 dereference 一次**：

~~~text
M = main 模块运行时基址

P0 = READ_PTR64(M  + 0x047350D8)
P1 = READ_PTR64(P0 + 0xD8)
P2 = READ_PTR64(P1 + 0x08)
P3 = READ_PTR64(P2 + 0xB8)
P4 = READ_PTR64(P3 + 0x00)

MyStatusData = P4 + 0x40
ID32         = READ_LE32(MyStatusData + 0x00)
TID16        = READ_LE16(MyStatusData + 0x00)
SID16        = READ_LE16(MyStatusData + 0x02)
DisplayTID   = ID32 % 1_000_000
~~~

> [!warning] 最末项语义与安全校验
> 上述逐级写法是依据这些字段使用场景还原的约定表达式，最权威的方法是调用连接端自己的 `PointerAll(MyStatusPointer)` 并对结果直接 `PointerPeek` 校验。不同 sys-botbase 分支/实现可能有自己的失败值和跳转行为，不能未经验证就把手写 resolver 的最终 dereference 规则视为唯一标准。每次读取都需要检查非零、内存映射是否可读、指针大小 8 字节、运行时是否已加载存档。

这个结构表达中，`0x47350D8` 是 **main 相对 RVA**，`0xD8/0x8/0xB8/0x0` 是连续动态对象的字段偏移；都不是 MyStatus 的字段偏移。`MyStatusData+0x00` 才对应 ID32。

## 3. 共用主根的四条 SysBot 指针

四条链均以 `main+0x47350D8 → +0xD8 → +0x08 → +0xB8` 开始，可按上一节的 P3 表示其公共子树：

| SysBot 属性 | 后续链 | 意图与校验 |
|---|---|---|
| `MyStatusPointer` | `[0x00, 0x40]` | 本地训练家 `MyStatus9` 数据 |
| `ConfigPointer` | `[0xD0, 0x40]` | 设置；SysBot 使用 `PointerPeek(1)` 并对 byte 取 `&3` 作为文字速度 |
| `CurrentBoxPointer` | `[0x28, 0x570]` | 当前盒号；SysBot 只读取 1 byte |
| `BoxStartPokemonPointer` | `[0x30, 0x9D0, 0x00]` | 盒中首个 Pokémon 指针；`BoxFormatSlotSize=0x158` 是 PK9 读出长度，**不能假定所有 Box slot 连续** |

不同后续段之间可以通过共同 P3 观察管理器对象结构；但这些只是外部工具依赖的运行时偏移，**并不自动证明** P3 在 Ghidra 中拥有某个已经命名的 SaveManager 类。

### 对照代码（只是结构表达式）

~~~cpp
uint64_t p4     = ReadPtr64(p3 + 0x00);
uint64_t local  = p4 + 0x40;    // Trainer MyStatus payload

uint64_t config = ReadPtr64(p3 + 0xD0) + 0x40;
uint64_t boxNo  = ReadPtr64(p3 + 0x28) + 0x570;
uint64_t box0   = ReadPtr64(ReadPtr64(p3 + 0x30) + 0x9D0);
~~~

## 4. 交易、联网、场景等指针：不要误当本地 ID32

| 指针属性 | 数组 | 真实使用语义 |
|---|---|---|
| `Trader1MyStatusPointer` | `[0x473A110,0x48,0xB0,0x0]` | 交易参与者 1 的 `TradeMyStatus` |
| `Trader2MyStatusPointer` | `[0x473A110,0x48,0xE0,0x0]` | 交易参与者 2 的 `TradeMyStatus` |
| `LinkTradePartnerPokemonPointer` | `[0x473A110,0x48,0x58,0x40,0x148]` | 联机交易对方 Pokémon 数据 |
| `LinkTradePartnerNIDPointer` | `[0x475EA28,0xF8,0x8]` | 网络/连接环境中的 Partner NID，**不等于 ID32** |
| `PortalBoxStatusPointer` | `[0x475A0D0,0x188,0x350,0xF0,0x140,0x78]` | Poké Portal 盒子状态 |
| `IsConnectedPointer` | `[0x4739648,0x30]` | 连接状态相关 |
| `OverworldPointer` | `[0x473ADE0,0x160,0xE8,0x28]` | 地图/场景状态（SysBot 用来判断是否处于 overworld） |

> [!warning] TradeMyStatus 与 MyStatus9 结构不同
> SysBot `TradePartnerSV.cs` 中 `TradeMyStatus` 固定读取 **0x30 字节**：`ID32 +0x00`、`Game +0x04`、`Gender +0x05`、`Language +0x06`、`OT +0x08`（24 字节）。但 **本地 MyStatus9** 是 `ID32 +0x00`、`Game +0x04`、`Gender +0x05`、`Language +0x07`、`OT +0x10`（26 字节）。不能把本地 MyStatus9 的语言姓名偏移套给 Trader1/Trader2。
> `LinkTradePartnerNIDPointer` 用于网络身份，不是游戏训练家 ID，也不是 HOME ID。

## 5. 与原生 ELF 的另一条 ID32 路径：全局状态对象

朱紫 4.0.0 已发布的 Ghidra C（两个 ELF 均存在）：

~~~cpp
// Ghidra VA 0x01B78D30，main RVA 0x01A78D30
void FUN_01b78d30(uint32_t id) {
    *(uint32_t *)(DAT_04840ac0 + 0x40) = id;
}

// Ghidra VA 0x01B78DA0，main RVA 0x01A78DA0
uint32_t FUN_01b78da0(void) {
    return *(uint32_t *)(DAT_04840ac0 + 0x40);
}

// Ghidra VA 0x01B79160，main RVA 0x01A79160
uint32_t FUN_01b79160(void) {
    return *(uint32_t *)(DAT_04840ac0 + 0x40) % 1000000;
}
~~~

- Ghidra 符号地址 `DAT_04840AC0` 对应 **main+0x04740AC0** 的全局槽位；**READ_PTR64(main+0x04740AC0)** 才是状态对象。该槽位与 SysBot 的 `main+0x047350D8` 并非同一地址：相差 `0xB9E8`，不能把两个数值混在一起。
- `FUN_0168D10C`（Ghidra VA，main+0x0158D10C）执行 `DAT_04840AC0 = X0`，随后传 X0 给 `FUN_0168D138`（清空 `state+0x40` 开始的 0x68 字节），再尾调用 `FUN_0168D238`（KMyStatus 保存块操作）。ARM64 已对双 ELF 核验；参见 [[sv400-trainer-id-initializer]]。
- `FUN_01B78D30` 是 **原生最终赋值器**，不等于新游戏随机生成器；它的第一个参数由更上层提供。应查 caller、寄存器来源和 RNG seed，不可推断 ID32 必然采用某一种 PRNG。
- `FUN_019A8130` 可从 `DAT_04840AC0+0x40` 拷贝完整 ID32、`+0x45` 性别、`+0x47` 语言、`+0x50` 名称等到输出对象；证明全局状态被其他系统消费，而不只是显示函数读取。

两条入口的正确验证关系：

~~~text
入口 A (SysBot 运行时):
main+0x047350D8 → 多级 dereference → MyStatusData

入口 B (原生 ELF 全局):
main+0x04740AC0 → READ_PTR64 → state
                                  └─ +0x40 = stateMyStatus

可比较：MyStatusData == stateMyStatus ?  // UNKNOWN, guest 待读回
可比较：MyStatusData[0:4] == stateMyStatus[0:4] ?  // UNKNOWN
~~~

若两个地址相等，说明 **同一份物理数据体**。若地址不同而字节相同，则只能认定副本/同步可能；不可直接将其中一个解释为另一个的实际对象成员。若不一致，要核查加载阶段、缓冲同步和当前存档状态。

## 6. 本地 MyStatus9 实际字节布局

| payload offset | 类型 | 字段 |
|---|---|---|
| `+0x00` | u32 LE | ID32 |
| `+0x00` | u16 LE | TID16 |
| `+0x02` | u16 LE | SID16 |
| `+0x04` | byte | Game |
| `+0x05` | byte | Gender |
| `+0x07` | byte | Language |
| `+0x10..0x29` | 26 bytes | OT |
| `+0x5A` | byte | BirthMonth |
| `+0x5B` | byte | BirthDay |

`ID32` 是原值；六位 TID = `ID32 % 1000000`；十进制高位 SID = `ID32 / 1000000`。例如 `0x12345678` 读出 `419896` 的六位 TID。不可直接读取显示用 TID 再当作完整原值回写。

## 7. .NET/C# 只读对照示例

**直接复用 SysBot 所定义的 `PointerAll` 和 `PointerPeek`**，避免自己猜最后一级有没有解引用。以下示例以 `SwitchConnection` 表示现有连接对象，具体类型及异步方法按调用项目已有接口签名调整。

~~~csharp
using System;
using System.Buffers.Binary;
using System.Threading;

// Offsets = new PokeDataOffsetsSV();
// 先严格校验 TitleID == ScarletID/VioletID、游戏版本 == 4.0.0。
// 未拿到有效 guest 时不可认为指针解析成功。

var jumps = Offsets.MyStatusPointer;
ulong statusAbsolute = await SwitchConnection.PointerAll(jumps, token);
if (statusAbsolute == 0)
    throw new InvalidOperationException("MyStatus pointer is invalid");

// 与 SysBot 原版 GetFakeTrainerSAV() 的读取方式相同。
var sav = new PKHeX.Core.SAV9SV();
byte[] status = await SwitchConnection.PointerPeek(
    sav.MyStatus.Data.Length, jumps, token);

if (status.Length != sav.MyStatus.Data.Length)
    throw new InvalidOperationException("Short MyStatus read");

uint id32 = BinaryPrimitives.ReadUInt32LittleEndian(status.AsSpan(0, 4));
ushort tid16 = BinaryPrimitives.ReadUInt16LittleEndian(status.AsSpan(0, 2));
ushort sid16 = BinaryPrimitives.ReadUInt16LittleEndian(status.AsSpan(2, 2));
uint displayed = id32 % 1_000_000;
Console.WriteLine($"ID32={id32:X8} TID16={tid16} SID16={sid16} TID6={displayed:D6}");

// 另一条原生 ELF global 链；仅用 ReadBytesMain / ReadBytesAbsolute 做只读 A/B
byte[] globalPtrBytes = await SwitchConnection.ReadBytesMainAsync(
    0x04740AC0, 8, token);
ulong state = BinaryPrimitives.ReadUInt64LittleEndian(globalPtrBytes);
if (state == 0)
    throw new InvalidOperationException("ELF player state not initialized");
ulong elfStatusAbsolute = checked(state + 0x40);
Console.WriteLine($"SysBot={statusAbsolute:X16}; ELF={elfStatusAbsolute:X16}");
// 地址比较只是诊断；先读回字节，才能进一步判断对象身份。
~~~

注意 SysBot 某些 Connection 类型可能不直接暴露 `ReadBytesMainAsync`；这种情况下可使用连接层现成的 `ReadBytesAbsoluteAsync` 和实际 main base，不能凭示例强行假定方法存在。

## 8. 新建训练家 ID32 的验证关口

1. 在首次新游戏输入阶段，记录 `PointerAll(MyStatusPointer)` 及 `READ_PTR64(main+0x04740AC0)+0x40`，分别验证是否可读、是否同地址、是否有 `0x68` 字节一致性。
2. 执行初始化器 `main+0x0158D138` 后，检查 `state+0x40..0x43` 是否已清零；同时不应误把 Key `0xE3E89BD1` 的栈写入算作 ID32 赋值。
3. 监视 `main+0x01A78D30` 入参 W0，寻找首次非零值及真实上层调用者，然后跟踪 PRNG 状态 / seed（尚 UNKNOWN）。
4. 将三种读数原子对照：`setter W0`、`ELF state+0x40`、`SysBot MyStatusData+0x00`。记录主模块基址、PC/LR、指针层级、读取时间。
5. 保存、退出进程、重启读回 `KMyStatus+0x00`；静态相等并不等于持久化已确认，需验证 SaveData 成功路径。
6. 对 Scarlet 和 Violet **分别**执行；禁用写入，避免把测试代码当作改号器导致当前真实存档损坏。

## 9. 参考链接

- [SysBot.NET PokeDataOffsetsSV.cs (pinned)](https://github.com/kwsch/SysBot.NET/blob/844c1f31face95bc8e1cfec9c9b7cbd9f7a62895/SysBot.Pokemon/SV/Vision/PokeDataOffsetsSV.cs)
- [SysBot.NET PokeRoutineExecutor9SV.cs (pinned)](https://github.com/kwsch/SysBot.NET/blob/844c1f31face95bc8e1cfec9c9b7cbd9f7a62895/SysBot.Pokemon/SV/PokeRoutineExecutor9SV.cs)
- [SysBot.NET TradePartnerSV.cs (pinned)](https://github.com/kwsch/SysBot.NET/blob/844c1f31face95bc8e1cfec9c9b7cbd9f7a62895/SysBot.Pokemon/SV/BotTrade/TradePartnerSV.cs)
- [PKHeX MyStatus9.cs (pinned)](https://github.com/kwsch/PKHeX/blob/96e33e7432d900e5345afdfd117eabfac43f5bbd/PKHeX.Core/Saves/Substructures/Gen9/SV/MyStatus9.cs)
- [Ghidra 01b78d30.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01b78d30.c)
- [Ghidra 01b78da0.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01b78da0.c)
- [Ghidra 01b79160.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01b79160.c)

## 10. 双 ELF 直接交叉引用扫描结果（第三次核验）

- [Actions #42953356433](https://github.com/969981/SV_Resources/actions/runs/42953356433) **Success**：均先确认 ELF SHA256，随后只扫描已有 Ghidra 12.2 的全部 C 文件，朱 97,871 份、紫 97,873 份。
- `FUN_01B78D30` 写 ID32 函数：双版扫描均只有其自身 C 文件包含函数名，**没有直接的其他 C 调用者**。这可能是间接注册、虚表/函数指针调用，也可能存在静态 C 文本漏检；不能因此认定 setter 未被游戏使用。
- `FUN_01B78DA0` 读 ID32：双版均看到 `FUN_01B78D40` 作为直接 C 调用者，它把返回值交给 `FUN_00C5D960`。
- `FUN_01B79160` 六位 TID：双版均看到 `FUN_01B79100` 作为直接 C 调用者，也把结果交给 `FUN_00C5D960`。这是额外的显示/脚本返回包装链锚点。
- `FUN_019A8130` 训练家数据拷贝：该特定函数名只有自身 C 文件；还须查间接引用。
- 全局 `DAT_04840AC0`：双版均 30 个反编译 C 文件含直接符号引用。
- 对 SysBot `main+0x047350D8` 的对应 Ghidra VA `0x048350D8`，本次按准确符号／字面量规则的 C 文本扫描**没有直接命中**。这只是直接符号检索的负结果，不是 ELF 中没有这条指针链的证明；尚需原始 Ghidra reference / relocation / 数据表和真实 guest 进行绑定。
- 与其它联网/渲染子系统相近的 Ghidra 全局地址不能仅凭前缀相似就当作 MyStatusPointer 根。

### 新增调用/显示包装函数（Ghidra VA，非 main RVA）

~~~cpp
// FUN_01B78D40（main+0x01A78D40）
uint32_t id32 = FUN_01B78DA0();
FUN_00C5D960(out, id32);

// FUN_01B79100（main+0x01A79100）
uint32_t sixDigit = FUN_01B79160();
FUN_00C5D960(out, sixDigit);
~~~

这些 Ghidra 代码展示 getter 的包装返回；`FUN_00C5D960` 的真实业务身份尚未恢复。它与 setter 的上游 RNG 恢复是两项不同调查。

## 11. 运行时只读 A/B 工具已实现（非实机数据证明）

运行工具、完整 0x68 字节对账和三条辅助链的准确测试流程详见 [[sv400-mystatus-live-parity-verification]]；CI 合成验证与设备实际内存读取是两种不同证据。**目前无实机 A/B 地址回读**；请勿提前将指针等同视为 CONFIRMED。
