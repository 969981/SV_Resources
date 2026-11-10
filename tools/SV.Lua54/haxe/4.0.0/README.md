# SV 4.0.0 Haxe reconstruction workspace

Editable recovered Haxe code lives under `source/`, organized by actual Haxe package: `source/main/util/`, later `main/field/`, `main/battle/`, `main/event/`, and `source/dll_*/` for separate Lua chunks. Only create source classes when there is concrete symbol or bytecode evidence.

This is a **curated** Haxe workspace attached to [SV.Lua54](../..). It does not replace the original `main.blua` or assert complete decompilation.

- `methods.jsonl`: one record per method: source BLUA SHA, C/F/S hash, exact Proto, PC range (or null), version-specific evidence, compile and runtime status.
- `source/main/util/CompositionCamera.hx`: one method translated from **older SV**, with `OLDER_SV_REFERENCE` status, not verified against the native 4.0.0 Proto.
- `scripts/Verify-SV-Haxe-Recovery.py`: read-only verifier for symbol hashes and provenance.
- `docs/research/sv-lua54-haxe-reconstruction.md`: Obsidian research / acceptance gates.

Large generated output belongs to `Unpack/4.0.0/romfs/arc/data.trpfs/virtual_converted/script/lua/haxe/` and is NOT committed by default. Future AST emission code belongs in `tools/SV.Lua54/src/sv_lua54/emit_haxe/`, callable from the repo's `scripts/` directory.

## Build and validation

From the repository root:
```bash
python scripts/Verify-SV-Haxe-Recovery.py
python -m unittest discover -s tests -p test_sv_haxe_recovery.py -v
```

For an optional smoke build, use Haxe Lua target with `build.hxml` in this folder; Haxe compilation is not verified by this setup. `@:hashAbi` is an annotation whose enforcement requires the compatible macro described by Reisyukaku/ZAScripts; the Python verifier checks known ABI names independently. The special Haxe/Lua compiler and game-engine bindings must be pinned and validated before claiming a production build.

## Provenance

- SV 4.0.0 main input SHA-256: `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`
- [PokeDocs SV Lua hashes](https://github.com/pkZukan/PokeDocs)
- [Reisyukaku/SVScripts: SV Haxe source](https://github.com/Reisyukaku/SVScripts) (including `source/main/`, `dll_util/`, `dll_stadium/`)
- [Reisyukaku/ZAScripts: Haxe 4.3.1 / HashAbi / finalizer](https://github.com/Reisyukaku/ZAScripts)
- [SV-Script-RE: older SV split Lua](https://github.com/Martmists-GH/SV-Script-RE)

**Promotion rule:** do not fill a missing Proto/PC from guesswork; never turn old-version Haxe/Lua into `SV400_NATIVE_MAPPED` without an original-bytecode closure/owner/PC match. A syntactically valid Haxe file is not game runtime parity.
