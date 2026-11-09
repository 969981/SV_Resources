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


## R1 reproducible native evidence

With the six original BLUA files present in the repository:

    python -m unittest discover -s tests -p 'test_sv_lua54_r1.py' -v
    python scripts/Analyze-SV-Lua54-R1.py
    python scripts/Analyze-SV-Lua54-R1.py --verify-only

Optional --method-index and --capture-index produce detailed JSONL in a local/CI artifact path; do not default to pushing full derived records. Native report: tools/SV.Lua54/fixtures/r1_native_report.json.

The remaining main_dynamic Proto 752 HIR failure can be inspected with the pinned unluac-rs v1.4.5 executable:

    python scripts/Inspect-SV-Lua54-ResidualHIR.py --backend /path/to/unluac-1.4.5-linux-x86_64

Read the [R1 evidence notebook](../../docs/research/sv-lua54-r1-setlist-upvalue-cf.md). Static parse/CFG/decompilation is not runtime parity.

## R2: PC 649-665 native table region (not full Proto 752)

Run synthetic safety tests:

    python -m unittest discover -s tests -p 'test_sv_lua54_r2.py' -v

Inspect original NEWTABLE→SETLIST ownership and HIR structural fingerprint:

    python scripts/Analyze-SV-Lua54-R2-TableOwner.py --verify-only

For the real-bytecode 17-op differential, use the dedicated Actions workflow that temporarily composes original opcode words in the runner (never uploaded). See [R2 native A/B notebook](../../docs/research/sv-lua54-r2-proto752-ownership-ab.md). This validates a bounded pure arithmetic/table slice only, not game runtime compatibility.

## R3: Experimental full Proto 752 SETLIST repair (source and bytecode validation)

- scripts/Instrument-SV-Lua54-R3-Unluac.py pinpoints native HIR guard rejection.
- scripts/Patch-SV-Lua54-R3-Unluac-Capacity.py conditionally preserves the exact native PucBatched array capacity. This script modifies only an ephemeral checkout of unluac-rs v1.4.5 in CI; it is not yet merged upstream.
- .github/workflows/slr-r3-hir-setlist.yml captures rejection diagnostics (read-only).
- .github/workflows/slr-r3-nil-shape.yml runs actual native SETLIST nil-hole counterexamples.
- .github/workflows/slr-r3-capacity-patch.yml builds the temporary upstream patch, strict-decompiles the complete 2071-instruction Proto 752 and compiles the generated Lua; pinned 100/100 sample syntaxes pass.

The original module's full runtime/Upvalue/C API semantic equivalence is NOT verified; do not mark behavioral or game load success.

[Obsidian R3 full report](../../docs/research/sv-lua54-r3-proto752-hir-nil-preallocation.md).

## R4: Reviewable upstream Rust diff and executed regressions

- [Standalone v1.4.5 Rust patch](../../patches/unluac-rs/v1.4.5-puc-fixed-setlist-nil-capacity.patch) can be applied with `git apply --check` to a clean upstream checkout. It includes a synthetic upstream Lua5.4 nil-holes test.
- [Executable selected upstream corpus runner](../../scripts/Validate-SV-Lua54-R4-Upstream-AB.py) compares original compiled Lua bytecode against strict decompile/recompiled output on the same Lua5.4 VM.
- [CI](../../.github/workflows/slr-r4-reviewed-upstream.yml) validates complete Proto752, 100/100 native syntax and 10/10 independently executed upstream cases.
- [Runtime prerequisites](../../scripts/Inspect-SV-Lua54-R4-Proto752-Shell.py): 1 parameter; Upvalue0 inherited parent cell, Upvalue1 captured from parent R16. Host ABI and real values still NOT OBSERVED.
- [R4 Obsidian notebook](../../docs/research/sv-lua54-r4-upstream-rust-patch-runtime-ab.md).

Roadmap: [SV Lua54 source reconstruction](../../docs/research/sv-lua54-source-reconstruction-roadmap.md).
