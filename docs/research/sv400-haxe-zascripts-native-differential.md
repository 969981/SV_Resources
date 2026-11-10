# SV 4.0.0 Haxe R8 — ZAScripts HashAbi、cppbindings、LuaOutput 与原生差异验证

> [!success] 验收（2026-11-10）
> 已使用固定版本 ZAScripts Haxe 4.3.1 编译，执行 Lua 5.4.3 构建后处理，并将真实 4.0.0 原版三个 Child Proto 的字节码与重新编译的方法进行独立 Lua VM A/B；32/32 用例通过。[Actions #42752782758](https://github.com/969981/SV_Resources/actions/runs/42752782758)
>
> [!warning] 范围
> 这证明指定独立函数在所测输入下的 Lua 返回行为等价。它**不是**整个 main.blua 的字节完全一致，也不是 Switch 游戏内引擎/C++ 绑定、实机状态和 Upvalue* 身份已验证。Assert.IsNull 仍然只有 extern 原型，不虚构实现。

## 上游依赖、目录及锁定方式

- 来源：[Reisyukaku/ZAScripts](https://github.com/Reisyukaku/ZAScripts)，固定 commit `c7bc243ac4d28356dff9f06b6723330ea92247d5`，写在 `tools/SV.Lua54/haxe/4.0.0/zascripts.lock.json`。
- 从同一固定 commit 的 `tools/haxe-4.3.1/haxe` 提供编译器，`tools/haxe-4.3.1/std/haxe/macro/HashAbi.hx` 校验名称及原始 C/F/S/E 哈希，`tools/haxe-4.3.1/std/cppbindings/` 提供原生接口 extern，`tools/haxe-4.3.1/std/haxe/macro/abi/LuaOutput.hx` 和 `tools/gfl_build/build_post_process.py` 完成构建后处理。
- 固定的 `tools/lua-5.4.3/src/luac` 将 Lua 源码编译为 BLUA；Ubuntu 26 运行器使用 `MYLDFLAGS=-no-pie` 克服原上游 C 链接规则与 PIE 默认配置冲突。
- CI 使用指定 SHA 的浅层 sparse checkout，固定 HEAD 后运行编译器。**不把 30 MB Haxe 可执行文件与整个上游源仓库硬塞进 SV_Resources**。
- 代码保存在 `tools/SV.Lua54/haxe/4.0.0/source/main/util/`、`source/dll_util/`；`build-za-main.hxml` 和 `build-za-dll-util.hxml` 分别输出 `za_main.lua` 与 `za_dll_util.lua`。
- Haxe 的 `@:hashAbi` 和 `@:native` 锁住方法名称 ABI，`@:chunk` 记录主模块归属，`@:expose` 导出原版 C 类名。宏负例：在临时副本将 Format 的 S 哈希改为 `S0000000000000000`，必须因哈希不一致编译失败。
- `RecoveryZaDllUtil.hx` 确实引用上游 `cppbindings.C016374C1` 类型并编译，但这是**类型解析测试**。ZA C++ 头文件不能直接宣称与 SV 4.0.0 原生接口兼容。

## 四个已有原生方法的证据

| 所属方法 | 原版 Child Proto | Child PC | 代码字节偏移 | 重建状态 |
|---|---:|---|---:|---|
| main.util.CompositionCamera.CalcXFov | 36158 | [0,16) | 12229810 | 13/13 差异 PASS |
| main.util.StrUtil.Format | 36271 | [0,10) | 12255904 | 8/8 差异 PASS |
| dll_util.MathUtil.Clamp | 76 | [0,8) | 13663 | 11/11 差异 PASS |
| dll_util.Assert.IsNull | 69 | [0,4) | 13418 | extern only，未测试方法体 |

输入来源：`main.blua` SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`；`dll_util.blua` SHA-256 `bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01`。

原版注册点由 Root 的 `GETUPVAL→LOADK(C)→GETTABLE→LOADK(S)→CLOSURE→SETTABLE`（main）和 `GETTABUP(C)→CLOSURE→SETFIELD(S)`（dll_util）确定。每条记录另保存 Root PC、child index、原型层次、Child PC 和原始 opcode 指纹。

## 原始 BLUA → 独立函数 → Haxe Lua 对账的实际方法

1. `scripts/Build-SV-Haxe-Native-FnFixtures.py` 只读解析两个固定 SHA 的原版 4.0.0 Lua 5.4 Chunk，按 `methods.jsonl` 关联原始 Proto 36158／36271／76，二次验证 opcode words、code_offset、原型父子归属。
2. 从原始 child **原样复制 code、constants、upvalue descriptors**，创建可被 Lua 5.4 直接载入的独立顶层 Chunk。仅重新编码顶层 Chunk 外壳；它不是声称新的完整 Chunk 与原 main.blua 二进制相同。再次解析与编码，逐字节核实原始 child code 和常量/Upvalue 未改变。
3. 在 `$RUNNER_TEMP` 内暂存原版 `CalcXFov.luac`、`Format.luac`、`Clamp.luac`。这些临时原生机器码**不上传 Actions artifact，不提交到 Git 仓库**；只留下 fixture SHA 与原始来源的 JSON 摘要。
4. 使用固定 ZAScripts 编译器、HashAbi 宏、LuaOutput finalizer 生成独立的 Lua 5.4.3 方法，以原来的 C/S 作为访问键。
5. `tools/SV.Lua54/haxe/4.0.0/compare-native-vs-za.lua` 把原生 Child Chunk 当二进制载入，把 Haxe 产物当文本载入，使用完全相同输入分别执行原版和新编译方法，并比较成功/异常及返回值。

### 执行口径和测试覆盖

- Lua 执行器：固定上游 Lua **5.4.3**。
- 为了让非游戏 Lua VM 能执行，双方共享三个明确适配：`math.atan2 = math.atan`、`package.preload["lua-utf8"] = function() return utf8 end` 和简易的 `lua_helper.createtable`。不声称这些适配等于真实 Switch 游戏环境。
- 浮点值按相对误差不超过 `1e-12` 对账；两侧均为 NaN 视为同值，正零与负零单独比较；字符串必须一致。任何差异立即导致 CI 失败。
- CalcXFov：13 组角度/零/π/无穷大；Format：8 组字符串、整数、小数、宽度与多参数；Clamp：11 组下限、上限、反向边界、无穷大、NaN、-0。
- [Actions #42752782758](https://github.com/969981/SV_Resources/actions/runs/42752782758) 记录 `CalcXFov 13/13`、`Format 8/8`、`Clamp 11/11`，**32/32 PASS**。后续 HashAbi 错误哈希负例也在同一 CI 工作流中纳入验证。

## 溯源状态字段（严禁跳级）

- `body_status=SV400_NATIVE_MAPPED`：四个方法已闭合原生 C/S→Proto/PC 归属。
- `haxe_body_status=STATIC_OPCODE_EXPRESSION_MATCHED`：三个方法表达式可从原生指令恢复；Assert 为 `EXTERN_ONLY_UNRECONSTRUCTED`。
- `haxe_compile_status=STOCK_HAXE_4_3_7_LUA_COMPILED`：此前标准 Haxe 的历史对照。
- `za_haxe_compile_status=PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT`：本轮上游定制编译器通过（三方法）。
- `lua_differential_status=SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS`：逐条保存用例数、通过数、Actions run ID，仅三个方法适用。
- `runtime_status=NOT_OBSERVED`：**游戏原生 C++ 调用、VM 环境差异、完整脚本副作用、真实 UpVal 指针身份仍不确认**。

## 自动化与推广门槛

[CI 工作流](../../.github/workflows/slr-haxe-zascripts-abi.yml)执行固定上游检出、HashAbi 正例和错误哈希负例、cppbindings 类型解析、LuaOutput 后处理、Lua5.4.3 编译、原版 Child 提取及 32 组差异测试。[原型与状态校验](../../scripts/Verify-SV-Haxe-Recovery.py)负责原始字节码证据门禁。

只有满足真实原版 4.0.0 Proto/PC/Upvalue 归属、PokeDocs 名称严格哈希对齐、可信 AST 方法体、定制 Haxe 编译以及可独立测试时的原生 A/B，才准将新方法升级为可维护的 Haxe 源码；不能孤立测试的引擎方法应保持 RUNTIME_REQUIRED，**不能因为 Hash 名称已知就生成一个空壳 .hx 并宣称反编译成功**。

现在尚未批量推广至 main.field／main.battle／main.event；下一阶段应先以现有 R1 C→F 和 C→S 原生注册索引分组候选，逐类验证生命周期、Upvalue 捕获及无引擎可测性，再允许自动生成 Haxe 文件。

相关：[[sv-lua54-haxe-reconstruction]] · [[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua54-r7-runtime-upval-table-identity]]。
