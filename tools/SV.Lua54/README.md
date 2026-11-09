# SV.Lua54 (SLR 1.0)

Work for [SLR #73](https://github.com/969981/SV_Resources/issues/73), initially #74 and #75.

The standalone Python package in src/sv_lua54 reads **standard Lua 5.4 binary chunks**. It preserves and re-encodes all constant payloads, raw opcode words, nested prototypes, upvalues, and debug records. It does **not** decompile Lua syntax or prove gameplay behavior.

Run synthetic tests from repository root:

    python -m unittest discover -s tests -p 'test_sv_lua54_parser.py' -v

Generate manifest by verifying native source files *without modification*:

    python scripts/Export-SV-Lua54-Manifest.py
    python scripts/Export-SV-Lua54-Manifest.py --verify-only

Manifest target: fixtures/native_manifest.json. CI only writes metadata and never publishes recovered full Lua source. Original BLUA and PokeDocs inputs are read-only.

The pinned main/main_dynamic sizes, hashes and prototype counts are independently checked. The four DLL baselines are recorded by first successful six-file CI run. This is a structured parser/byte-exact reserialization gate, **not** successful decompilation, Lua recompilation, or game-runtime validation.

Roadmap: [SV Lua54 source reconstruction](../../../docs/research/sv-lua54-source-reconstruction-roadmap.md).
