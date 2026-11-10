# SV Violet 4.0.0 curated Haxe reconstruction

**Status: 7 native class/method Proto/PC bindings verified (4 C→S + 3 C→F); 6 method bodies compile with pinned ZAScripts Haxe 4.3.1 / Lua 5.4.3 and pass 41/41 isolated native-child differential cases; game runtime remains NOT_OBSERVED.** This is an evidence-tracked source workspace, not a recovered complete game project.

## Location and files

- `source/main/util/CompositionCamera.hx`: native class `CFEA9C3BFB3FCD429`, static method `S424E3EA0446070E7`, **Proto 36158**.
- `source/main/util/StrUtil.hx`: native class `C23E5342B132D5323`, static method `S042B860498E558B2`, **Proto 36271**.
- `source/dll_util/MathUtil.hx`: original dll_util class `CED59418C4CAB0EC4`, static `Clamp` `S05B90B9B5A6DE6BC`, **Proto 76**; bytecode implements two bounds checks.
- `source/dll_util/Assert.hx`: original dll_util class `CE5FCD7D9D8F34718`, static `IsNull` `SB859A84B9E933D14`, **Proto 69**; only an `extern` ABI declaration is supplied because Haxe body semantics are not proven.
- `source/main/field/action/ActionChair.hx`: verified original `onBeginSitting` instance F, Proto 12995; one raw `RETURN0` (not a guessed empty placeholder).
- `source/main/battle/BattleViewBase.hx`: verified original `StartIdleCamera` instance F, Proto 6073; one raw `RETURN0`.
- `source/main/event/base/BaseBattleTalkEvent.hx`: verified original `onCreate` instance F, Proto 2377; one raw `RETURN0`.
- Future Haxe packages belong under `source/main/field/`, `source/main/battle/`, `source/main/event/` only when actual original method-body evidence exists; DLLs under `source/dll_*/`.
- `methods.jsonl`: per-method original module SHA, class/member ABI, parent Proto, entire child PC interval, root assignment/closure PCs, code offset, exact root/child opcode words, owner/name evidence and separate compilation/runtime states.
- `build.hxml`, `source/RecoveryAbiProbe.hx`: optional smoke-build entry point; **not a game-native build**.

## Verified static link (SV400 original BLUA)

| Method | Root registration / class key / member key / closure / assignment PCs | Child Proto | Child PC | Byte offset |
| --- | --- | ---: | --- | ---: |
| `main.util.CompositionCamera.CalcXFov` | 426666 / 426667 / 426669 / 426670 / 426671 | 36158 | [0,16) | 12229810 |
| `main.util.StrUtil.Format` | 427562 / 427563 / 427565 / 427566 / 427567 | 36271 | [0,10) | 12255904 |
| `dll_util.Assert.IsNull` | 243 / 243 / embedded SETFIELD / 244 / 245 | 69 | [0,4) | 13418 |
| `dll_util.MathUtil.Clamp` | 270 / 270 / embedded SETFIELD / 271 / 272 | 76 | [0,8) | 13663 |
| `main.field.action.ActionChair.onBeginSitting` (instance F) | 160939 / 160940 / 160944 / 160945 / 160946 | 12995 | [0,1) | 6366426 |
| `main.battle.BattleViewBase.StartIdleCamera` (instance F) | 90878 / 90879 / 90883 / 90884 / 90885 | 6073 | [0,1) | 4392199 |
| `main.event.base.BaseBattleTalkEvent.onCreate` (instance F) | 49646 / 49647 / 49651 / 49652 / 49653 | 2377 | [0,1) | 3359538 |

Original Lua 5.4 root instruction witnesses differ by module:
- `main` static S: `GETUPVAL → LOADK(C) → GETTABLE → LOADK(S) → CLOSURE → SETTABLE`.
- `main` instance F: `GETUPVAL → LOADK(C) → GETTABLE → LOADK(prototype) → GETTABLE → LOADK(F) → CLOSURE → SETTABLE`.
- `dll_util`: `GETTABUP(C) → CLOSURE → SETFIELD(S)`.
Both patterns are checked against original registers, constants, and raw opcode words.
The verifier checks register structure, hashed class/member constants, child index, original bytecode SHA, code offsets, and exact raw opcode words before accepting `SV400_NATIVE_MAPPED`.

The `dll_util.MathUtil.Clamp` child applies min and max bounds in 8 opcodes. `dll_util.Assert.IsNull` has a 4-opcode native body (EQK/JMP/LOADK/RETURN0), but its intended high-level assertion semantics remain unresolved; the Haxe file is intentionally `extern` only.

The `CalcXFov` original child executes `math.atan2(960,540/math.tan(fovy/2))*2`; `Format` forwards 5 args to `string.format` with `TAILCALL`. This supports static Haxe expression reconstruction. [The stock Haxe 4.3.7 smoke build](https://github.com/969981/SV_Resources/actions/runs/42749582979) successfully emitted Lua 5.4 and executed three pure examples with explicit compatibility shims; no original-game behavior A/B has been run.

## Reproduce

```bash
python scripts/Verify-SV-Haxe-Recovery.py
python -m unittest discover -s tests -p test_sv_haxe_recovery.py -v
```

[Initial GitHub Actions #42747810335](https://github.com/969981/SV_Resources/actions/runs/42747810335) completed 6/6 tests and 2/2 `main` native mappings. The following DLL link extension uses the same strict original-bytecode gate for four methods. Optional smoke build, if compatible Haxe Lua target is installed:

```bash
cd tools/SV.Lua54/haxe/4.0.0
mkdir -p build
haxe build.hxml
```

The pinned ZAScripts custom compiler now executes the real `haxe.macro.HashAbi` ABI checker (including a negative intentionally wrong S-hash test), `LuaOutput` postprocessor and `cppbindings` typechecking. Preserve separate stock-Haxe and ZAScripts build states; do not call these standalone tests game-runtime parity.

## Pinned ZAScripts Haxe 4.3.1 integration (R8)

- Version lock: [zascripts.lock.json](zascripts.lock.json), upstream SHA `c7bc243ac4d28356dff9f06b6723330ea92247d5`.
- [build-za-main.hxml](build-za-main.hxml) and [build-za-dll-util.hxml](build-za-dll-util.hxml) build independently with `HashAbi.enable()`, `LuaOutput.enable()`, `Chunks.select(...)`, `@:native`, `@:expose`, `@:chunk` and pinned `cppbindings`.
- CI locks upstream compiler/macro/finalizer/source to that commit using sparse checkout instead of committing upstream binary or its entire stdlib.
- `scripts/Verify-SV-ZA-Haxe-ABI.py` checks finalizer fingerprints and emitted C/S symbols.
- `scripts/Build-SV-Haxe-Native-FnFixtures.py` copies actual 4.0.0 Child Proto instructions/constants/upvalues into ephemeral standalone Lua 5.4 chunks without modifying original ROM data.
- [compare-native-vs-za.lua](compare-native-vs-za.lua) runs the native original and regenerated Lua with identical inputs, recording per-function differences. Raw native `.luac` fixtures stay under `$RUNNER_TEMP` and are **not** included in artifacts.
- [CI #42754893614](https://github.com/969981/SV_Resources/actions/runs/42754893614): HashAbi positive/negative tests succeeded, original native Child vs Haxe recompile across six methods gave **41/41 PASS**.
- [Obsidian R8 report](../../../../docs/research/sv400-haxe-zascripts-native-differential.md) explains evidence scope, VM shims, and native differential.
- [Obsidian field/battle/event namespace promotion report](../../../../docs/research/sv400-haxe-field-battle-event-promotion.md): 3,892 Proto/PC candidates, three real original RETURN0 Haxe implementations and remaining unverified AST gates.


**Not yet established:** game-side C++ ABI parity, byte-identical game module recompilation, broad semantic coverage of arbitrary inputs, runtime UpVal identity, or whole-game behavior.

## Inputs, provenance and unverified gaps

- SV 4.0.0 dll_util.blua original, SHA-256 `bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01`, 133 Proto.
- SV 4.0.0 main.blua original, SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`, 37,743 Proto.
- Other module input hashes are pinned in `tools/SV.Lua54/fixtures/native_manifest.json`; six-module total 46,084 Proto.
- `dll_util.StrUtil.Format` from older SVScripts is **not** directly matched in native 4.0.0 `dll_util` root constant/pattern scan. Do not invent a Proto/PC for it.
- Three method bodies: `haxe_compile_status=STOCK_HAXE_4_3_7_LUA_COMPILED` (see Actions #42749582979); `dll_util.Assert.IsNull`: extern only / Haxe method implementation `NOT_RUN`.
- Native-child-vs-ZAScripts Lua differential: **41/41 PASS** across six implemented methods: `CalcXFov` 13, `Format` 8, `Clamp` 11, and field/battle/event original `RETURN0` instance functions 3 each. Runtime: `NOT_OBSERVED`; `Assert.IsNull` remains EXTERN_ONLY (no differential).
- PokeDocs, SVScripts, ZAScripts and SV-Script-RE are *naming/porting references*, not substitutes for native 4.0.0 bytecode verification.

Read-only native probes: `scripts/Probe-SV-Haxe-Native.py`, `scripts/Link-SV-Haxe-Native.py`, and `scripts/Inventory-SV-DllUtil-Haxe.py`.

Large automated output belongs under `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/` (untracked by default); future AST emission code belongs in `tools/SV.Lua54/src/sv_lua54/emit_haxe/`. Original `main.blua` is immutable.

Research: [SV Lua Haxe reconstruction](../../../../docs/research/sv-lua54-haxe-reconstruction.md). Roadmap: [SV Lua source reconstruction](../../../../docs/research/sv-lua54-source-reconstruction-roadmap.md).
