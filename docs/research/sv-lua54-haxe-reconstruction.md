# SV 4.0.0 Haxe 重建：原生方法 Proto / PC / ABI 闭合（首批四方法）

> [!success] 原生静态归属
> `main` 的 `CompositionCamera.CalcXFov`、`StrUtil.Format`，以及 `dll_util` 的 `Assert.IsNull`、`MathUtil.Clamp`，已经从 4.0.0 **原始 Lua 5.4 字节码**获取真实类/成员哈希、Root 注册点、Child Proto、全 PC 范围、原生代码偏移和逐条原始 opcode 指纹。验证器在 CI 重新解析原始 BLUA 并核对，不是根据旧版 Haxe 猜的。
>
> [!warning] Haxe 语义验收尚未闭合
> `SV400_NATIVE_MAPPED` 仅确认 **方法原生所有权与指令对应**；三个已恢复方法已通过固定 ZAScripts Haxe 4.3.1 → Lua 5.4.3 编译与原始 4.0.0 Child Proto **32/32 用例差异 PASS**；仅 `runtime_status=NOT_OBSERVED`（游戏内运行时）仍未闭合。`Assert.IsNull` 仅归档 `extern` ABI，未伪造函数体。

## 仓库位置

- [Haxe 4.0.0 源码工作区](../../tools/SV.Lua54/haxe/4.0.0/README.md)：`tools/SV.Lua54/haxe/4.0.0/source/`
- [methods.jsonl](../../tools/SV.Lua54/haxe/4.0.0/methods.jsonl)：每行对应一个类方法，包含 `source_sha256`、`proto_id`、`parent_proto_id`、`pc_start`、`pc_end_exclusive`、`code_offset`、`root_pc`、`closure_pc`、`assignment_pc`、`child_index`、`native_root_opcode_words`、`native_child_opcode_words` 和互不混淆的状态字段
- `scripts/Link-SV-Haxe-Native.py`：只读源字节码，原生 C→S 闭包链接和子函数反汇编（两种注册模式）
- `scripts/Verify-SV-Haxe-Recovery.py`：同源字节码独立校验，无有效证据拒绝升级状态
- `scripts/Probe-SV-Haxe-Native.py` 与 `scripts/Inventory-SV-DllUtil-Haxe.py`：候选扫描与 DLL 根常量/注册分析
- `tests/test_sv_haxe_recovery.py`：哈希、来源、四个 Proto/PC 定位和状态的自动化测试
- `.github/workflows/slr-haxe-recovery.yml`：稀疏检出原始两个 BLUA 与符号表做 CI 复核
- `tools/SV.Lua54/src/sv_lua54/emit_haxe/`：将来 Lua AST→Haxe AST 转换器应放的位置，暂未实现
- `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/`：大批量临时生成结果，默认不提交。

原始 `virtual/script/lua/bin/release/` 和 `4.0.0/{0,1}/` 不动。

## 4.0.0 输入二进制基线

| BLUA | 原生 SHA-256 | Proto |
| --- | --- | ---: |
| `main` | `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815` | 37,743 |
| `dll_util` | `bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01` | 133 |
| 六模块合计 | `tools/SV.Lua54/fixtures/native_manifest.json` | 46,084 |

这是可逆 Lua 5.4 字节码解析基线，不代表整份 Haxe 源码已还原。

## 原生方法级证据

| 方法 | C / S 哈希 | Root PC（开始→CLOSURE→赋值） | Child Proto | Child 原始 PC | Code offset | Haxe 方法体 |
| --- | --- | --- | ---: | --- | ---: | --- |
| `main.util.CompositionCamera.CalcXFov` | `CFEA9C3BFB3FCD429` / `S424E3EA0446070E7` | 426666 → 426670 → 426671 | 36158 | [0,16) | 12229810 | 原生运算表达式已转写，标准 Haxe 已编译，原版行为待验 |
| `main.util.StrUtil.Format` | `C23E5342B132D5323` / `S042B860498E558B2` | 427562 → 427566 → 427567 | 36271 | [0,10) | 12255904 | 原生 `string.format` 转发已转写，标准 Haxe 已编译，原版行为待验 |
| `dll_util.Assert.IsNull` | `CE5FCD7D9D8F34718` / `SB859A84B9E933D14` | 243 → 244 → 245 | 69 | [0,4) | 13418 | **extern only**，意图仍待验 |
| `dll_util.MathUtil.Clamp` | `CED59418C4CAB0EC4` / `S05B90B9B5A6DE6BC` | 270 → 271 → 272 | 76 | [0,8) | 13663 | 条件分支表达式已转写，标准 Haxe 已编译，原版行为待验 |

两类真实原生注册模式：

```text
main:     GETUPVAL → LOADK(C) → GETTABLE → LOADK(S) → CLOSURE → SETTABLE
dll_util: GETTABUP(C) → CLOSURE → SETFIELD(S)
```

校验不只看相邻字符串，也验证 Lua 寄存器、`_ENV` 上值索引、类/成员常量表下标、子 Proto 索引、完整原生 opcode words，因此同一个 `S` 名称出现在不同类时不会错误配对。

### main.util.CompositionCamera.CalcXFov

原生 Child Proto 36158 采用 `GETTABUP math`、`GETFIELD atan2`、`LOADF 960`、`GETFIELD tan`、`DIVK 2`、`CALL`、`LOADF 540`、`DIV`、`CALL`、`MULK 2`、`RETURN1`，包括 Lua5.4 `MMBIN*` 后备指令。

源码表达式：
```haxe
return lua.Math.atan2(960.0, 540.0 / lua.Math.tan(fovy / 2.0)) * 2.0;
```
`main.blua` 参数数为 1，静态方法体 16 指令。该表达式和旧版 SV-Script-RE / ZAScripts 对照一致，但 **没有 Haxe 编译与 Lua 语义 A/B**。

### main.util.StrUtil.Format

Child Proto 36271 有 5 个 Lua 入参：`GETTABUP string`、`GETFIELD format`、五条 `MOVE`、`TAILCALL`、`RETURN` / `RETURN0`，原生语义为 `string.format(format, a, b, c, d)`。Haxe 使用 `lua.NativeStringTools.format`，经固定 ZAScripts 输出后，8 组原版 Child Proto 差异测试全部通过；未测试所有格式化输入和异常路径。

### dll_util.MathUtil.Clamp

Child Proto 76 有 3 个入参，原版 `LT R0,R1`、条件跳转、`MOVE R0,R1`、`LT R2,R0`、条件跳转、`MOVE R0,R2`、`RETURN1 R0`。按此恢复：

```haxe
if (value < min) value = min;
if (max < value) value = max;
return value;
```

### dll_util.Assert.IsNull

Child Proto 69（2 参数）仅有 `EQK`、`JMP`、`LOADK`、`RETURN0`。虽然名称为 IsNull，但原始高层意图与断言副作用不能据函数名猜测；目前只提供 `extern` 声明及完整 Proto/PC 溯源，**不声明实现已恢复**。

`dll_util.StrUtil.Format`（旧版 SVScripts 中存在）在 4.0.0 的 `dll_util` 根常量/注册模式中没有找到该 C/S 组合。不能把其旧版源码冒充 4.0.0。实际 `dll_util` 根常量中出现 16 个 C 类哈希和 54 个 S 成员哈希；当前已明确发现 `dll_util.Assert`、`dll_util.MathUtil`、多个 `dll_util.miyamoto.*` 类。

## Haxe 4.3.7 → Lua 5.4 独立冒烟测试（已通过）

[Actions #42749582979](https://github.com/969981/SV_Resources/actions/runs/42749582979) 完成：

1. Ubuntu Haxe **4.3.7** 按 `build.hxml` 编译 `CompositionCamera.CalcXFov`、`StrUtil.Format`、`MathUtil.Clamp`；
2. 生成的 `abi_probe.lua` 使用 Lua **5.4.8** 的 `luac5.4 -p` 通过语法检查；
3. 使用明确的最小标准 Lua 测试适配（`package.preload["lua-utf8"]=function() return utf8 end` 以及 `math.atan2=math.atan`）执行三个无引擎纯函数示例；
4. 输出依次为 `1.5415821821915`、`SV:400`、`1.0`。

这些适配是为了运行在标准 Lua5.4；**此段仅是旧版标准 Haxe 冒烟；现在已有单独的定制 ZAScripts 编译、HashAbi 宏负例和原生 Child 32/32 差异结果，但仍不证明 Switch 原版引擎 C++ 接口或全脚本行为等价**。`Assert.IsNull` 仍是未编译的 extern-only 记录。

`methods.jsonl` 中这三个方法现有 `haxe_compile_status=STOCK_HAXE_4_3_7_LUA_COMPILED`，并携带实际 Actions run ID；三个有方法体的方法现已有 `lua_differential_status=SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS`；`Assert.IsNull` 仍是 `NOT_RUN`；四者的游戏 `runtime_status` 都是 `NOT_OBSERVED`。

## R8：固定 ZAScripts HashAbi + 原版 Lua Child 对账（已完成）

- [独立 Obsidian 技术报告：ZAScripts 固定编译器、HashAbi 负例、cppbindings、LuaOutput、原生 Child 差异 32/32](sv400-haxe-zascripts-native-differential.md)
- 工具链锁定 [ZAScripts commit c7bc243a](https://github.com/Reisyukaku/ZAScripts/commit/c7bc243ac4d28356dff9f06b6723330ea92247d5)，通过 CI 稀疏检出；并未在仓库提交编译器二进制。
- [Actions #42753120766](https://github.com/969981/SV_Resources/actions/runs/42753120766) 已通过：原生 Lua Child 原始代码保留、Haxe 4.3.1 定制编译、LuaOutput finalizer、HashAbi 故意错误哈希负例（应被拒绝）及 32/32 纯函数对账。
- 当前仅三方法在独立 Lua 5.4.3 用例集中证明等价；原版 Switch VM/游戏引擎 C++ ABI/完整脚本行为仍 NOT_OBSERVED。Assert.IsNull 只确认原生 Proto，方法体仍 extern。

## 自动复现与状态规则

```bash
python scripts/Verify-SV-Haxe-Recovery.py
python -m unittest discover -s tests -p test_sv_haxe_recovery.py -v
```

初版 `main` 两方法严格校验 [Actions #42747810335](https://github.com/969981/SV_Resources/actions/runs/42747810335) 通过 6/6；包含 `dll_util` 的四方法原生校验 [Actions #42748839920](https://github.com/969981/SV_Resources/actions/runs/42748839920) 通过 4/4、测试 6/6。

每条记录独立保存：
- `body_status=SV400_NATIVE_MAPPED`：说明原始 **C/S→Child Proto** 对应已从版本固定的 BLUA 验证。
- `haxe_body_status=STATIC_OPCODE_EXPRESSION_MATCHED` 或 `EXTERN_ONLY_UNRECONSTRUCTED`：说明目前源代码完成程度。
- `haxe_compile_status` / `lua_differential_status` / `runtime_status`：全部单独验收，不能拿解析成功冒充游戏行为通过。

## R9：命名空间的真实 F 方法恢复

[Obsidian R9 报告：3,892 个原生 Proto/PC 候选与三个单指令 RETURN0 的 Haxe 实例方法](sv400-haxe-field-battle-event-promotion.md)。已证明 `main.field`、`main.battle`、`main.event` 真实 C→F 根注册点可与 PokeDocs/Child Proto/Upvalue 关联；三个从一条 `RETURN0` 直接恢复的 Haxe 实例函数已通过固定 ZAScripts 编译与真实原版 Child Lua 差异试验。旧三静态 32/32 + 新三实例 9/9 = **41/41 PASS**。这些是纯函数独立输入测试，未声称实机行为。

## R10：真实原版 CFG/HIR/AST → Haxe 非空函数的第一次自动发射

[独立 Obsidian R10 验收报告](sv400-haxe-r10-cfg-hir-ast-lowering.md) · [编译与原版方法 A/B #42758094283](https://github.com/969981/SV_Resources/actions/runs/42758094283) · [原始 Proto/PC + 16 项 Python 测试 #42758722625](https://github.com/969981/SV_Resources/actions/runs/42758722625)。

已增加严格使用原始 Lua54 `syntactic_edges` 的类型化 CFG→HIR→ReturnAst→Haxe 受限生成器。**五个非空函数（返回 2、3、300、true、false）**已固定 Proto/PC 与 FNV，发射至 `main.field.behaviour`、`main.battle`、`main.event.base` 目录的四个实际可编辑 `.hx` 类文件；Haxe 4.3.1 编译通过，原始 4.0.0 子 Proto 与新 Lua 各 3 个用例，全新 15/15、累计 56/56 PASS。

**当前总量**：12 条经原版机器码证明的 C/F/S 方法映射，11 个已有 Haxe 方法体并通过有限范围独立 A/B，1 个 `Assert.IsNull` 仅 extern。由 3,892 条已命名候选重新做静态资格扫描，受限字面量后端能接受 **64 条（field 52、battle 7、event 5）**；其余 59 条合格但尚未逐方法完成编译对账，不算已恢复。

注意该路径并非完整导入 unluac-rs 通用 HIR/AST，只是受限且经过字节码验证的 CFG/HIR/AST 后端。完整 Lua 表、条件/循环、Upvalue、游戏 C++ 原生对象和实机 VM 仍需逐项单独验证，`runtime_status=NOT_OBSERVED`。

## R11–R13：批量恢复 59 条及表读写/条件分支

[Obsidian R11/R12/R13 完整技术验证](sv400-haxe-r11-r12-r13-native-lowering.md)。

- [R11 Actions #42761612949](https://github.com/969981/SV_Resources/actions/runs/42761612949)：剩余的 **59/59** 字面量候选在原版 C→F/Proto/PC 与 PokeDocs 严格匹配后，按类合并生成 Haxe，定制 ZAScripts 编译与原版 Child 差异 **177/177 PASS**，加历史 56/56，累计 233/233。
- [R12 Actions #42762760077](https://github.com/969981/SV_Resources/actions/runs/42762760077)：增加原版 `BattleView.GetGemEnableCount`（GETI）、`SetGemEnableCount`（SETI）、`DanRushAfterEvent.clamp`（LT/JMP/MOVE）。新增 **19/19**，加 233 组回归为 **252/252 PASS**。SETI 要比较表状态、未修改字段、nil 与 `__newindex` 元方法事件，不能仅比较返回值。
- [R13 静态取证 #42763034047](https://github.com/969981/SV_Resources/actions/runs/42763034047) 从原版 4.0.0 Proto 669／11176／5683 的 K 常量证实 `callFromReserve`、`skipPlayerStuckCheck=true` 和 `length`，不使用臆测字段名。[完整原版字节码与 Haxe A/B #42765308159](https://github.com/969981/SV_Resources/actions/runs/42765308159) **Success**：三条真实字段方法新增 **28/28**，包括两种 `GETFIELD` 的 `__index` 事件 18 组、`SETFIELD` 嵌套表与 `__newindex` 副作用 10 组。
- **当前：77 条真实原始映射、76 个完成独立 Lua 对账的 Haxe 方法体、1 个 extern-only，累计 280/280**。上述三个方法已从临时 Haxe 工程晋升并提交 `master`。未验证游戏原生 Lua VM/C++/UpVal*，所有 `runtime_status=NOT_OBSERVED`。

## R14：原版动态字段、同一表双写和两次条件判断（已完成）

[Obsidian R14：动态 SETFIELD、引用图、元方法和原版两段 EQI 分支详细验收](sv400-haxe-r14-dynamic-field-shared-alias-branch.md) · [R14 成功 Actions #42767473135](https://github.com/969981/SV_Resources/actions/runs/42767473135)。

在 4.0.0 原始 `main.blua` 中定位并确认四个真实 C→prototype→F 原始方法：`IEventScript.set_CallFromReserve` Proto 670（动态右值 `SETFIELD`）、`IEventScript.set_DisableFieldCamera` Proto 674（写后再读取，同一字符串 K 常量）、`BattleViewBase.SetShowBattleMessageState` Proto 6088（`self[36]` 与 `self[37]` 两次按顺序写入）、`BattleUiTokuseiWindow.IsEnemy` Proto 8129（两次 `EQI/JMP` 整数分支）。四个有证据的 Haxe 方法都已编译、原版 Lua Child 独立执行对账并提交到对应的 `main.event`、`main.battle` 类目录。

新增 **49/49** 用例，包括相同表在多个参数与字段之间的双向引用图、一写成功一写异常、`__newindex` 拦截/顺序/副作用、`__index` 写后读取，以及整数/浮点、NaN、无限大、字符串、布尔、nil 分支；之前 280 组全部回归通过，因此累计 **329/329**。原版 Proto/PC、原始 K 字节、Root 注册哈希、CFG、HIR、Child 原始指令与 Haxe 生成源码均保持独立可复核记录。

**当前汇总：81 条原生方法 Proto/PC 映射、80 个有验证方法体的 Haxe 方法、1 个 `Assert.IsNull` extern-only。** 其余 3,892 个已命名候选中的未恢复部分不能按方法名自动生成占位源码。游戏原生 Lua VM/C++/UpValue 实机状态全部仍是 `NOT_OBSERVED`；有限 Lua 输入对账不是全部可达游戏状态的等价证明。

## 上游资料与下一关

[Reisyukaku/SVScripts](https://github.com/Reisyukaku/SVScripts) 有 SV `source/main`、`source/dll_util`、`source/dll_stadium`；[Reisyukaku/ZAScripts](https://github.com/Reisyukaku/ZAScripts) 提供 Haxe 4.3.1、`HashAbi`、`@:chunk`、`@:abiSlot`、`cppbindings`、Lua 5.4.3 和 build finalizer 的参考实现；[PokeDocs](https://github.com/pkZukan/PokeDocs) 提供 C/S/F/E 哈希与名称；[SV-Script-RE](https://github.com/Martmists-GH/SV-Script-RE) 是旧版 Lua 对照。

本轮已在固定 ZAScripts 4.3.1/5.4.3 上通过三方法 32/32 原版 Lua 差异测试。下一关转为按真实 Proto/PC 与 AST 证据筛选 `main.field`、`main.battle`、`main.event` 的候选并逐步恢复方法体；依赖引擎的部分另行等待实机 VM/Cppbindings/UpVal 验收，不可将哈希名映射当作已完成的 Haxe 源码。

关联 [[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua54-r5-mainbody-haxe-runtime-captures]] · [[sv-lua54-r7-runtime-upval-table-identity]]。
