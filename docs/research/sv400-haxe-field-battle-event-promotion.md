# SV 4.0.0 Haxe R9 — field / battle / event 原生 Proto 候选与首批 C→F 源码恢复

> [!success] 实际已验证（2026-11-10）
> 通过原版 4.0.0 main.blua 和 PokeDocs 符号，将 18,991 条严格 C→F 原生赋值中的 3,892 条匹配为三个命名空间的已命名方法候选。在这批候选中，**实际恢复并提交了三个子 Proto 只有一条 RETURN0 的实例方法**，并用固定 ZAScripts Haxe 4.3.1 → Lua 5.4.3 与原始函数逐项对账，连同此前三个静态方法合计 **6/6 方法、41/41 输入 PASS**。
>
> [!warning] 范围
> 3,892 是 **C→F 原生归属已知的候选方法数**，不是 3,892 份已恢复的 Haxe 源码。Haxe 方法体实作目前只有 6 个（原来的 3 个静态 + 本轮 3 个实例 RETURN0），另有 `dll_util.Assert.IsNull` 为 extern only。不会从 Proto 名字或 PokeDocs 哈希直接虚构游戏逻辑。

## 原始输入

- 原始文件：`Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua`
- 固定 SHA-256：`c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`
- 解析器：`tools/SV.Lua54/src/sv_lua54/chunk.py`
- C→F 严格匹配算法：`sv_lua54.r1.direct_cf_methods()`，root 原生操作码形状为：

```text
PC+0 GETUPVAL
PC+1 LOADK(C-hash)
PC+2 GETTABLE
PC+3 LOADK("prototype")
PC+4 GETTABLE
PC+5 LOADK(F-hash)
PC+6 CLOSURE  -> child Proto
PC+7 SETTABLE -> prototype[F]
```

注册的 Root PC、两种哈希、寄存器形状、子原型 ID、代码偏移、PC 范围、原始 opcode words 都能从字节码复核。类和方法明文只采纳 PokeDocs 精确匹配的 C 和 F；未知哈希不强行反推原名。

## 第一轮候选普查（CI 确认）

[Actions #42754224630](https://github.com/969981/SV_Resources/actions/runs/42754224630) 通过。输出 JSONL 是可检索的原生 Proto/PC 证据索引，在 Actions 中以 `sv400-haxe-namespace-native-proto-candidates` artifact 保存：

| Haxe 命名空间 | C/F 都能以 PokeDocs 恢复命名的原生方法 | 所属类名已知但 F 未恢复命名 |
| --- | ---: | ---: |
| `main.field` | 1,710 | 72 |
| `main.battle` | 1,330 | 154 |
| `main.event` | 852 | 34 |
| **总计** | **3,892** | **260** |

`scripts/Stage-SV-Haxe-Namespace-Candidates.py` 检查 source SHA、37,743 Proto、原版 root C/F 注册、子 Proto 父级，并导出 `proto_id`、`parent_proto_id`、`code_offset`、Child PC、`root_pc`、`child_index`、root/child opcode 指纹、参数与 Upvalue 数；未核对真实 AST 的记录一律 `CANDIDATE_ONLY_DO_NOT_EMIT_HX`，且通过 CI 强制 `haxe_files_generated==0`。

## 已从原版 RETURN0 真正恢复的三个方法

| 原始类 / 方法 | C / F 原生哈希 | Parent → Child Proto | Root 注册范围与 Closure PC | 原版 Child PC / Code offset | 原生 Child 代码 |
| --- | --- | --- | --- | --- | --- |
| `main.field.action.ActionChair.onBeginSitting` | C5797B404FC92DA57 / F92D30755A380E89F | 0 → 12995 | Root 160939..160946，Closure 160945 | [0,1) / 6366426 | RETURN0 `000100C7` |
| `main.battle.BattleViewBase.StartIdleCamera` | C2391C1B3E531D954 / F727F99876D3FB086 | 0 → 6073 | Root 90878..90885，Closure 90884 | [0,1) / 4392199 | RETURN0 `000100C7` |
| `main.event.base.BaseBattleTalkEvent.onCreate` | C2C51A2FB219477E8 / FC87C731D11C58354 | 0 → 2377 | Root 49646..49653，Closure 49652 | [0,1) / 3359538 | RETURN0 `000100C7` |

三者真实 Child 每个恰好 1 条返回指令，Lua 参数数都是 1（实例 `self`），Upvalue 数为 0。因此其 Haxe 空方法体不是未完成的“空壳”：它**准确表达当前目标函数的原版立即返回行为**；但该类其他大部分成员、生命周期前后效果及引擎状态依然没有恢复。

```haxe
@:hashAbi("F92D30755A380E89F")
@:native("F92D30755A380E89F")
public function onBeginSitting():Void {}
```

实际代码路径：
- `tools/SV.Lua54/haxe/4.0.0/source/main/field/action/ActionChair.hx`
- `tools/SV.Lua54/haxe/4.0.0/source/main/battle/BattleViewBase.hx`
- `tools/SV.Lua54/haxe/4.0.0/source/main/event/base/BaseBattleTalkEvent.hx`

每个 class 标记 `@:chunk("main")`、`@:expose(C-hash)`、`@:hashAbi(C-hash)`；函数使用真实 F-hash。Haxe 的编译产物确实将其注册于 `C...prototype.F...`，而非错误地转成静态 S 函数。

## 新方法差异验收

- 原始函数由 `scripts/Build-SV-Haxe-Native-FnFixtures.py` 提取并验证完整 Child opcode、子参数数为 1、Upvalue 数为 0、代码 SHA。
- 这些原始 Lua 可执行子 Chunk 保存在 CI 的 `$RUNNER_TEMP`，不向 repo 或 artifacts 上传原始游戏二进制方法。
- `tools/SV.Lua54/haxe/4.0.0/compare-native-vs-za.lua` 加载 `C-hash.prototype.F-hash` 方法进行独立执行，给予空 Lua table、数字和字符串 3 类 `self` 输入，原版与重新编译 Haxe 的返回值/是否报错一致。
- [Actions #42754893614](https://github.com/969981/SV_Resources/actions/runs/42754893614) 已通过：原来的 `CalcXFov 13/13`、`Format 8/8`、`Clamp 11/11` 加上三个 RETURN0 实例方法各 `3/3`，总计 **41/41 PASS**。
- 脚本为负零、NaN、无穷大设置了独立比较口径，但这些用例的覆盖只能代表所选独立输入。游戏 VM 的真实类系统与引擎 C++ 绑定行为保持 `NOT_OBSERVED`。

## 继续批量恢复的准入门槛

1. 先从上述 3,892 条候选中挑选无引擎依赖的短 Proto，检查原始 opcode、上下文、Upvalue 捕获与父级注册；在 `tools/SV.Lua54/src/sv_lua54/emit_haxe/` 实现经过测试的 Lua AST→Haxe AST 转换，而不是为未知逻辑写 `return null`。
2. 对原版 C/F/S 哈希进行 `HashAbi` 编译时校验，并保留原始符号拼写。每个 Haxe 文件都需关联唯一固定原型 ID、根注册 PC、所有原始指令字及 source SHA。
3. 能单独调用的纯函数用原版 Child 字节码 vs 固定 Haxe Lua 5.4.3 做 A/B。无法离开引擎单独执行的标 `RUNTIME_REQUIRED`，禁止进入纯函数一致性统计。
4. 对实例方法区分类 `C` 和方法 `F`；对静态方法使用 `S`；构建期 `@:chunk`/HashAbi/ABI/finalizer 对账必须通过。
5. 不能从已知原生返回空，推断整类无行为；游戏实机原生 C++ 对象/UpVal 身份/副作用仍需独立验收。

关联：[[sv400-haxe-zascripts-native-differential]] · [[sv-lua54-haxe-reconstruction]] · [[sv-lua54-source-reconstruction-roadmap]]。
