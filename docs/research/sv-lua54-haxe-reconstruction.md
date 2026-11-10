# SV 4.0.0 Haxe 重建工作区：源码、HashAbi、Proto/PC 归档

> [!warning] 证据范围（2026-11-10）
> 这里交付的是 Haxe 工程位置、旧版 SV 单方法移植示例和 4.0.0 方法溯源校验框架，**不是**整份 `main.blua` 已恢复成 Haxe。示例方法的 4.0.0 Proto / PC / code_offset 全部为 null；Haxe 编译、Lua 行为差异和游戏实机验证均未运行。

## 位置约定

| 类别 | 保存位置 |
| --- | --- |
| 可维护源码 | `tools/SV.Lua54/haxe/4.0.0/source/main/{field,battle,event,util}/`（只创建有证据的类） |
| 其他 Lua 模块 | `tools/SV.Lua54/haxe/4.0.0/source/dll_*/` |
| 方法记录 | `tools/SV.Lua54/haxe/4.0.0/methods.jsonl` |
| AST→Haxe 转换器（后续） | `tools/SV.Lua54/src/sv_lua54/emit_haxe/` |
| 统一校验入口 | `scripts/Verify-SV-Haxe-Recovery.py` |
| 大量自动生成结果（默认不提交） | `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/` |
| 原始输入（只读） | `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/` |

这样符合现有 `docs/research/sv-lua54-source-reconstruction-roadmap.md` 所要求的 `emit_haxe/` 后端和大规模临时输出分离；源码样本则单独归档于可审查的 Haxe 目录。

## 输入与实际核实

`tools/SV.Lua54/fixtures/native_manifest.json` 中，SV Violet 4.0.0：

- `main`: 37,743 Proto，SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`
- `main_dynamic`: 7,036 Proto，SHA-256 `ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572`
- 六个 BLUA 文件总数：46,084 Proto，已通过 Lua 5.4 parser 字节往返。它不等于 Haxe 源码已恢复。

源代码参考：

- [Reisyukaku/SVScripts](https://github.com/Reisyukaku/SVScripts) **已经包含 SV Haxe**，路径如 `source/main/`、`source/dll_util/`、`source/dll_stadium/`。
- [Reisyukaku/ZAScripts](https://github.com/Reisyukaku/ZAScripts) 包含 `HashAbi` 元数据校验、Haxe 4.3.1、Lua 5.4.3 构建、`cppbindings` 原生接口和项目 finalizer。项目功能与具体字节码版本需要独立核实，不能直接声称适配 SV 4.0.0。
- [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) 提供 SV C/F/S/E 已知哈希名称。
- [Martmists-GH/SV-Script-RE](https://github.com/Martmists-GH/SV-Script-RE) 提供旧版 SV 可读 Lua 方法，跨版本只作参考。

Hash 算法是 offset basis `0xCBF29CE484222645`、prime `0x100000001B3` 的 64-bit FNV-1a，前缀 `C`（类）、`F`（实例）、`S`（静态）、`E`（枚举）。Hash 对上只证明命名候选，不证明同一版本调用行为。

## 第一条真实示范（旧版证据，非 4.0.0 证明）

`main.util.CompositionCamera` = `CFEA9C3BFB3FCD429`；
`CalcXFov` = `S424E3EA0446070E7`。

- `.hx`：`tools/SV.Lua54/haxe/4.0.0/source/main/util/CompositionCamera.hx`
- `body_status` = `OLDER_SV_REFERENCE`；命名 = `POKEDOCS_HASH_EXACT`
- 原生 `proto_id`、`parent_proto_id`、`pc_start`、`pc_end_exclusive`、`code_offset` 全部为空。
- `haxe_compile_status` 和 `lua_differential_status` 均为 `NOT_RUN`；`runtime_status` 为 `NOT_OBSERVED`。
- 具体 Lua 表达式取自较早的公开 SV 工程，并与公开 Haxe 示例对照；4.0.0 的原始方法归属和行为仍需核对。

## 后续验收关口

1. 原始 4.0.0 Lua Proto / C→F、C→S 静态注册关联，记录确切 child Proto 与 PC 和 `code_offset`，区分 `_ENV` 初始化与闭包 Upvalue；映射未闭合不能填造编号。
2. Haxe 类生成、继承和 `@:abiSlot`、`@:hashAbi`、`@:native` 的 ABI 保真。对于没有证据的语义，保留动态字段。
3. Lua AST → Haxe AST 时保留 nil-hole、Lua 1-based table、返回多个值、闭包与异步/协程控制流，不能用字符串替换声称完成反编译。
4. 固定编译器、Lua 编译器和 finalizer，Haxe→Lua 与纯 Lua 5.4 差异测试分别报告；语言层验证和原生引擎 ABI/实机验证分离。

## 复核命令

```bash
python scripts/Verify-SV-Haxe-Recovery.py
python -m unittest discover -s tests -p test_sv_haxe_recovery.py -v
```

这两个命令只验证哈希、路径、版本约束和部分元数据；若未来将记录升级为 `SV400_NATIVE_MAPPED`，脚本会要求实际 4.0.0 字节码存在、SHA 一致，并严格验证 Proto/PC 在真实原型中的边界。**它仍不等于行为一致性证明**。

关联：[[sv-lua54-source-reconstruction-roadmap]] · [[sv-lua54-r5-mainbody-haxe-runtime-captures]] · [[sv-lua54-r7-runtime-upval-table-identity]]。
