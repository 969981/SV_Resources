# SV Violet 4.0.0 curated Haxe reconstruction

**Status: 4 native C→S static-method bindings verified against original 4.0.0 bytecode; Haxe compiler/runtime parity not verified.** This is an evidence-tracked source workspace, not a recovered complete game project.

## Location and files

- `source/main/util/CompositionCamera.hx`: native class `CFEA9C3BFB3FCD429`, static method `S424E3EA0446070E7`, **Proto 36158**.
- `source/main/util/StrUtil.hx`: native class `C23E5342B132D5323`, static method `S042B860498E558B2`, **Proto 36271**.
- `source/dll_util/MathUtil.hx`: original dll_util class `CED59418C4CAB0EC4`, static `Clamp` `S05B90B9B5A6DE6BC`, **Proto 76**; bytecode implements two bounds checks.
- `source/dll_util/Assert.hx`: original dll_util class `CE5FCD7D9D8F34718`, static `IsNull` `SB859A84B9E933D14`, **Proto 69**; only an `extern` ABI declaration is supplied because Haxe body semantics are not proven.
- Future Haxe packages belong under `source/main/field/`, `source/main/battle/`, `source/main/event/` when actual evidence exists; DLL packages under `source/dll_*/`.
- `methods.jsonl`: per-method original module SHA, class/member ABI, parent Proto, entire child PC interval, root assignment/closure PCs, code offset, exact root/child opcode words, owner/name evidence and separate compilation/runtime states.
- `build.hxml`, `source/RecoveryAbiProbe.hx`: optional smoke-build entry point; **not a game-native build**.

## Verified static link (SV400 original BLUA)

| Method | Root registration / class key / member key / closure / assignment PCs | Child Proto | Child PC | Byte offset |
| --- | --- | ---: | --- | ---: |
| `main.util.CompositionCamera.CalcXFov` | 426666 / 426667 / 426669 / 426670 / 426671 | 36158 | [0,16) | 12229810 |
| `main.util.StrUtil.Format` | 427562 / 427563 / 427565 / 427566 / 427567 | 36271 | [0,10) | 12255904 |
| `dll_util.Assert.IsNull` | 243 / 243 / embedded SETFIELD / 244 / 245 | 69 | [0,4) | 13418 |
| `dll_util.MathUtil.Clamp` | 270 / 270 / embedded SETFIELD / 271 / 272 | 76 | [0,8) | 13663 |

Original Lua 5.4 root instruction witnesses differ by module:
- `main`: `GETUPVAL → LOADK(C) → GETTABLE → LOADK(S) → CLOSURE → SETTABLE`.
- `dll_util`: `GETTABUP(C) → CLOSURE → SETFIELD(S)`.
Both patterns are checked against original registers, constants, and raw opcode words.
The verifier checks register structure, hashed class/member constants, child index, original bytecode SHA, code offsets, and exact raw opcode words before accepting `SV400_NATIVE_MAPPED`.

The `dll_util.MathUtil.Clamp` child applies min and max bounds in 8 opcodes. `dll_util.Assert.IsNull` has a 4-opcode native body (EQK/JMP/LOADK/RETURN0), but its intended high-level assertion semantics remain unresolved; the Haxe file is intentionally `extern` only.

The `CalcXFov` original child executes `math.atan2(960,540/math.tan(fovy/2))*2`; `Format` forwards 5 args to `string.format` with `TAILCALL`. This supports static Haxe expression reconstruction, **not yet a successful Haxe→Lua compile or behavior A/B**.

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

The reference `@:hashAbi` metadata is enforced by the Python verifier; implementing automatic ABI renaming requires a compatible, pinned custom `HashAbi` Haxe macro/finalizer and Lua-native externs. Do not label a smoke build as game-compatible.

## Inputs, provenance and unverified gaps

- SV 4.0.0 dll_util.blua original, SHA-256 `bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01`, 133 Proto.
- SV 4.0.0 main.blua original, SHA-256 `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`, 37,743 Proto.
- Other module input hashes are pinned in `tools/SV.Lua54/fixtures/native_manifest.json`; six-module total 46,084 Proto.
- `dll_util.StrUtil.Format` from older SVScripts is **not** directly matched in native 4.0.0 `dll_util` root constant/pattern scan. Do not invent a Proto/PC for it.
- Haxe compilation: `NOT_RUN`. Differential Lua execution: `NOT_RUN`. Game runtime: `NOT_OBSERVED`.
- PokeDocs, SVScripts, ZAScripts and SV-Script-RE are *naming/porting references*, not substitutes for native 4.0.0 bytecode verification.

Read-only native probes: `scripts/Probe-SV-Haxe-Native.py`, `scripts/Link-SV-Haxe-Native.py`, and `scripts/Inventory-SV-DllUtil-Haxe.py`.

Large automated output belongs under `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/` (untracked by default); future AST emission code belongs in `tools/SV.Lua54/src/sv_lua54/emit_haxe/`. Original `main.blua` is immutable.

Research: [SV Lua Haxe reconstruction](../../../../docs/research/sv-lua54-haxe-reconstruction.md). Roadmap: [SV Lua source reconstruction](../../../../docs/research/sv-lua54-source-reconstruction-roadmap.md).
