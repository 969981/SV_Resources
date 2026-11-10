# SV 4.0.0 Haxe 重建：原生方法 Proto / PC / ABI 闭合（首批四方法）

> [!success] 原生静态归属
> `main` 的 `CompositionCamera.CalcXFov`、`StrUtil.Format`，以及 `dll_util` 的 `Assert.IsNull`、`MathUtil.Clamp`，已经从 4.0.0 **原始 Lua 5.4 字节码**获取真实类/成员哈希、Root 注册点、Child Proto、全 PC 范围、原生代码偏移和逐条原始 opcode 指纹。验证器在 CI 重新解析原始 BLUA 并核对，不是根据旧版 Haxe 猜的。
>
> [!warning] Haxe 语义验收尚未闭合
> `SV400_NATIVE_MAPPED` 仅确认 **方法原生所有权与指令对应**；已转写的 3 个方法有独立的 `STOCK_HAXE_4_3_7_LUA_COMPILED` 编译证据；`lua_differential_status=NOT_RUN`、`runtime_status=NOT_OBSERVED` 仍未变化。`Assert.IsNull` 仅归档 `extern` ABI，未伪造函数体。

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

Child Proto 36271 有 5 个 Lua 入参：`GETTABUP string`、`GETFIELD format`、五条 `MOVE`、`TAILCALL`、`RETURN` / `RETURN0`，原生语义为 `string.format(format, a, b, c, d)`。Haxe 源使用 `lua.NativeStringTools.format`；目标 Lua 是否精确等价尚待编译核查。

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

这些适配是为了运行在标准 Lua5.4；**不证明 Pokémon 游戏的 Lua VM、ZAScripts 特制编译器/finalizer、引擎 C++ 接口与原生 4.0.0 语义一致**。`Assert.IsNull` 仍是未编译的 extern-only 记录。

`methods.jsonl` 中这三个方法现有 `haxe_compile_status=STOCK_HAXE_4_3_7_LUA_COMPILED`，并携带实际 Actions run ID；四个方法的 `lua_differential_status` 仍为 `NOT_RUN`、游戏 `runtime_status` 仍为 `NOT_OBSERVED`。

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

## 上游资料与下一关

[Reisyukaku/SVScripts](https://github.com/Reisyukaku/SVScripts) 有 SV `source/main`、`source/dll_util`、`source/dll_stadium`；[Reisyukaku/ZAScripts](https://github.com/Reisyukaku/ZAScripts) 提供 Haxe 4.3.1、`HashAbi`、`@:chunk`、`@:abiSlot`、`cppbindings`、Lua 5.4.3 和 build finalizer 的参考实现；[PokeDocs](https://github.com/pkZukan/PokeDocs) 提供 C/S/F/E 哈希与名称；[SV-Script-RE](https://github.com/Martmists-GH/SV-Script-RE) 是旧版 Lua 对照。

下一道严格关口是：用固定 Haxe Lua 编译器检查这三段已转写的函数，执行 Lua 5.4 纯函数差异测试（包括 Clamp 边界情况、NaN、格式化参数），然后才考虑 ABI 重命名、真实运行时对账，以及扩展到 `main.field`、`main.battle`、`main.event`。

关联 [[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua54-r5-mainbody-haxe-runtime-captures]] · [[sv-lua54-r7-runtime-upval-table-identity]]。
