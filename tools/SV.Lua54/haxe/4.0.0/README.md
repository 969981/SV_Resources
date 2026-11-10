# SV Violet 4.0.0 curated Haxe reconstruction

**Status: 83 original SV400 native method Proto/PC links, 82 Haxe method bodies independently validated against original Child Lua 5.4.3 (357/357 tested inputs, with R15 host calls mocked), and one extern-only Assert.IsNull. Switch game runtime remains NOT_OBSERVED.** This is a curated, evidence-tracked workspace, not a complete SV source project.

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

## R16 dual ELF / upstream native-binding and memory barriers (static only)

- [R16 Obsidian technical investigation](../../../../docs/research/sv400-haxe-r16-native-cppbindings-memory-effects.md) · [R16 original ELF and pinned cppbindings Actions #42776515318](https://github.com/969981/SV_Resources/actions/runs/42776515318), **Success**; 18 new synthetic validation tests pass. This is **not a new Haxe-method promotion**: the total remains 83 original method links / 82 implemented methods / 357 independent Lua A/B cases.
- The original second R15 `SELF` key `f558733FC` and upstream ZAScripts native extern class name `cE35B3EB3` each appear once as exact ASCII literals in **both** SHA-verified SV 4.0.0 Scarlet/Violet ELF. The original AArch64 executable code also has **one direct ADRP+ADD string xref to `cE35B3EB3` per ELF**, still **not a C++ function entry**.
- [ZAScripts `cppbindings/CE35B3EB3.hx` pinned declaration](https://github.com/Reisyukaku/ZAScripts/blob/c7bc243ac4d28356dff9f06b6723330ea92247d5/tools/haxe-4.3.1/std/cppbindings/CE35B3EB3.hx#L24): `f558733FC(interval:UInt, part_interval:UInt):Void` has **2 explicit arguments**, but original SV `CALL A3 B3 C1` passes **one** explicit argument after SELF receiver. This arity discrepancy is explicitly **NOT_RESOLVED**, and ZAScripts extern is not an authoritative 4.0.0 game ABI.
- `r16_engine_bridge.py` gives per-PC conservative heap barriers around CALL, GETI/GETFIELD, SETFIELD, SELF and the synthetic return merge. `r16_guest_trace.py` rejects bad original opcode/version/object-token events, but a purported guest JSON still only counts as self-reported consistency, not live/independently attested runtime equivalence.
- Current real guest / CFunction pointer / engine argument and return ABI: `NOT_OBSERVED` / `NOT_RESOLVED`. Do not infer object types, remove alias barriers, or upgrade `runtime_status` from this static-only work.

## R15 native SELF/CALL/TEST CFG/SSA with mocked host calls

- [R15 Obsidian evidence, scope and call-SSA](../../../../docs/research/sv400-haxe-r15-engine-call-cfg-ssa.md) · [fully gated R15 original Lua vs Haxe A/B #42772389014](https://github.com/969981/SV_Resources/actions/runs/42772389014): **2 new original `IAction.Setup` and `IAutoAction.Setup`**, Proto 12930/13197, root PC 160285/163143, 28/28 callback-mock A/B, old 329/329 intact (**357/357 total**).
- Original `SELF` retains callable + receiver separately; `CALL` result flows into `TEST/JMP`, `SETFIELD` precedes the next `SELF/GETFIELD/CALL`. Haxe methods were appended to existing `source/main/field/action/base/IAction.hx` and `IAutoAction.hx`, never generated as unverified classes. Full original C/F/K/bytecode/PC evidence and the synthetic function-exit SSA return PHI are in `methods.jsonl`.
- This is **mock host call trace parity**, NOT game engine/C++ equivalence. `r15_mocked_host_status=MOCK_HOST_CALL_EVENT_ALIAS_AND_PARTIAL_WRITE_PASS`, `r15_engine_runtime_status=NOT_OBSERVED`.
- [bounded generic original CFG/SSA diagnostic #42773054350](https://github.com/969981/SV_Resources/actions/runs/42773054350) independently examined **886** named short `SELF/CALL/TEST` methods; **744** contain potential reaching-definition PHI joins, **366** have synthetic multi-return joins, **229** have register semantics still unsupported. `cfg_ssa_diagnostic.py` marks CALL/GET/SET heap barriers; **no Haxe was emitted** from this diagnostic census.

## R14 original dynamic field / ordered table writes / multi-branch source

- [R14 original source / diff / Obsidian report](../../../../docs/research/sv400-haxe-r14-dynamic-field-shared-alias-branch.md) · [Actions #42767473135](https://github.com/969981/SV_Resources/actions/runs/42767473135), **49/49 new tests, 329/329 cumulative**.
- Original `IEventScript.set_CallFromReserve` (Child Proto 670) and `set_DisableFieldCamera` (Proto 674): dynamic SETFIELD uses the original register R1 and raw UTF-8 K name; the latter performs a second GETI/GETFIELD readback, retaining `__index` events.
- Original `BattleViewBase.SetShowBattleMessageState` (Proto 6088): two ordered SETI writes `self[36]=R1` then `self[37]=R2`. Differential checks identity-preserving table alias graphs, nested raw state, metamethod event order and partial writes if the second write throws.
- Original `BattleUiTokuseiWindow.IsEnemy` (Proto 8129): two `EQI/JMP` comparisons recover `value==1 || value==3`, checked with 13 integer/float/NaN/nil/string/bool inputs.
- `tools/SV.Lua54/src/sv_lua54/emit_haxe/r14_patterns.py` supports **only** four exact source-checked patterns; `scripts/Emit-SV-Haxe-R14-DynamicState.py` stages new classes without tracked ROM modifications; `compare-r14-alias-branches.lua` compares original and regenerated Lua in the same isolated VM. New methods were promoted only when all previous 280 A/B regressions and full Proto/PC validation passed. `runtime_status=NOT_OBSERVED`.

## R13 promoted named fields and metamethod comparisons

- Source locations: `source/main/event/base/IEventScript.hx`, `source/main/event/debug/DebugAreaJump.hx`, `source/main/battle/BattleResidentEffectManager.hx`.
- Original Protos: 669 / Root PC 24815, 11176 / Root PC 141665, 5683 / Root PC 87331. Each method carries exact original `GETI/GETFIELD` or `GETI/SETFIELD` K constant and C/F registration fingerprint.
- `scripts/Emit-SV-Haxe-R13-NamedFields.py` stages only the exact original fields in a scratch Haxe project; `compare-r13-named-fields.lua` rejects any difference in nested raw table state, event order and `__index/__newindex` calls; [CI #42765308159](https://github.com/969981/SV_Resources/actions/runs/42765308159) additionally regresses 252 previous cases and checks all 77 method records before promoting the source.
- Current totals: **77 mapped / 76 method bodies / 280 of 280 Lua A/B PASS**. `dll_util.Assert.IsNull` remains extern-only, `runtime_status=NOT_OBSERVED` for all methods.

## R11–R13 verified promotions and side-effect gates

- **R11:** the remaining **59** eligible short literal-return instance methods were fully promoted into the correct `main.field`, `main.battle`, `main.event` class files. The generator `scripts/Emit-SV-Haxe-R11-Batch.py` merged existing classes without discarding reviewed methods; [Actions #42761612949](https://github.com/969981/SV_Resources/actions/runs/42761612949) passed 177/177 new + 56/56 previous cases and committed method provenance to master.
- **R12:** `main.battle.BattleView.GetGemEnableCount` (GETI Proto 6367), `SetGemEnableCount` (SETI Proto 6366), and `main.event.general.ajito.DanRushAfterEvent.clamp` (LT/JMP/MOVE Proto 2183). The `emit_haxe/side_effects.py` backend requires exact original register/jump patterns; [Actions #42762760077](https://github.com/969981/SV_Resources/actions/runs/42762760077) passed **19/19 new, 252/252 cumulative**.
- SETI effects are verified by comparing returned value, **full table content including untouched fields, nil deletes and `__newindex` invocation events**. Mere return-value matching is not accepted for writes.
- **R13 verified native named-field methods:** `IEventScript.get_CallFromReserve` (original Proto 669, GETFIELD `callFromReserve`, 9/9), `BattleResidentEffectManager.GetResidentEffectNum` (Proto 5683, GETFIELD `length`, 9/9), and `DebugAreaJump.onCreate` (Proto 11176, SETFIELD `skipPlayerStuckCheck = true`, 10/10). Original `__index` and `__newindex` event records, nested table raw snapshots, exception-state comparison and 252 prior regressions completed in [R13 Actions #42765308159](https://github.com/969981/SV_Resources/actions/runs/42765308159), **280/280 total**. All three are now committed Haxe source under `source/main/event/` or `source/main/battle/`; actual game VM is not verified.
- [Obsidian R11/R12/R13 evidence](../../../../docs/research/sv400-haxe-r11-r12-r13-native-lowering.md). The native and rebuilt Lua must share explicit, transparent Lua 5.4.3 compatibility shims; none of this proves game C++ engine or runtime equivalence.

## Restricted CFG/HIR/AST → Haxe lowering (R10)

- [R10 Obsidian validation and coverage](../../../../docs/research/sv400-haxe-r10-cfg-hir-ast-lowering.md): **5 genuine nonempty instance methods** added across `main.field`, `main.battle`, and `main.event`; 4 new Haxe class files.
- `tools/SV.Lua54/src/sv_lua54/emit_haxe/restricted.py` reuses original `sv_lua54.r1.decode` and `syntactic_edges` CFG. It lowers only exact literal `LOADI/LOADF/LOADTRUE/LOADFALSE/LOADNIL → RETURN1 → unreachable RETURN0` to typed HIR and ReturnAst. All other methods fail closed.
- `scripts/Emit-SV-Haxe-R10-ConstantReturns.py` rereads original pinned 4.0.0 main.blua and PokeDocs C/F, validates Root PC, Child Proto, opcode, AST return literal, and emits deterministic Haxe; CI requires generated source **byte-identical** to four committed .hx files.
- New methods: `DanPartnerPokemon.GetBehaviourType → 2`, `DanPokemonBehavior.GetBehaviourType → 3`, `BattleView.GetIntervalAddPopup → 300`, `BaseScenarioEvent.checkStartCondition → true`, `BaseScenarioEvent.isImportant → false`.
- The original Child instruction words/constants/upvalues are copied only into `$RUNNER_TEMP` executable Lua 5.4 fixtures; CI compares native vs regenerated Lua **15/15 new**, **56/56 cumulative** [Actions #42758094283](https://github.com/969981/SV_Resources/actions/runs/42758094283).
- [Proto/PC & synthetic emitter gate #42758722625](https://github.com/969981/SV_Resources/actions/runs/42758722625): 12/12 method records and 16 Python tests pass; no original game runtime equivalence is claimed.
- [Named candidate eligibility scan #42758827830](https://github.com/969981/SV_Resources/actions/runs/42758827830): 3,892 named candidate native C→F mappings; **64** meet current restricted AST criteria (field 52 / battle 7 / event 5). Only five of these have been converted and A/B-verified; remaining 59 need their own evidence and review.

**Future scope:** validated short register-copy/read-only functions and simple conditional CFG, then table writes with observable-state comparisons; full unluac-rs HIR/AST integration and engine-owned native calls are not yet implemented.

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
- Native-child-vs-ZAScripts Lua differential (R9 baseline): **41/41 PASS** across six implemented methods: `CalcXFov` 13, `Format` 8, `Clamp` 11, and field/battle/event original `RETURN0` instance functions 3 each. Runtime: `NOT_OBSERVED`; `Assert.IsNull` remains EXTERN_ONLY (no differential).
- PokeDocs, SVScripts, ZAScripts and SV-Script-RE are *naming/porting references*, not substitutes for native 4.0.0 bytecode verification.

Read-only native probes: `scripts/Probe-SV-Haxe-Native.py`, `scripts/Link-SV-Haxe-Native.py`, and `scripts/Inventory-SV-DllUtil-Haxe.py`.

Large automated output belongs under `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/` (untracked by default); future AST emission code belongs in `tools/SV.Lua54/src/sv_lua54/emit_haxe/`. Original `main.blua` is immutable.

Research: [SV Lua Haxe reconstruction](../../../../docs/research/sv-lua54-haxe-reconstruction.md). Roadmap: [SV Lua source reconstruction](../../../../docs/research/sv-lua54-source-reconstruction-roadmap.md).
