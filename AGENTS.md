# Codex repository instructions — SV_Resources

## Mission
Maintain a reproducible, evidence-based Pokémon Scarlet/Violet resource archive and the tools used to inspect it. Preserve original bytes and original relative paths. Never present a guess as an established game-data mapping.

## Fixed directory responsibilities
- `4.0.0/0/`: existing ExeFS files (Scarlet/Violet main, NPDM, shared modules). Do not rename, replace or move them unless explicitly requested.
- `4.0.0/1/`: Violet 4.0.0 RomFS source layout. Small files are copied unchanged; original files larger than 90 MiB are stored as 90 MiB 7z volumes alongside their original relative paths.
- `docs/`: architecture, research notes, formats, investigation logs, validation evidence, and future technical documents; use `docs/research/` for ongoing investigations.
- `scripts/`: maintained import, export, verification, reconstruction, parsing and analysis scripts, with documented parameters and reproducible commands.
- `tests/`: executable script tests and fixtures that contain no copyrighted ROM material.
- Root: `README.md`, `AGENTS.md`, `.gitignore`, file inventories, comparison CSVs and the generated transfer manifest only when appropriate.

## Non-negotiable safeguards
1. Never modify the input ROM/NCA directories; work from read-only source files. Never commit a ROM decryption key, credential, executable installer, or temporary work directory.
2. Do not alter `4.0.0/0/` or the three existing inventory/comparison CSVs while performing the Violet RomFS copy.
3. Validate provenance using source relative path, exact byte length and SHA-256; document build/title IDs when available.
4. Files >90 MiB (94,371,840 bytes) must use Windows `D:\Tool\7-Zip\7z.exe` with `-t7z -mx=1 -v90m`; verify every archive and record hashes. Do not submit unsplit files >=100,000,000 bytes to normal Git.
5. Stage explicit file paths; do not use `git add .` or `git add -A` for bulk data jobs. Push to `origin/master` after safe batch commits; never force-push, rewrite history, auto-rebase divergent branches or overwrite conflicting files.
6. Respect existing staged/untracked user work. When the remote is ahead, stop and ask for a safe fast-forward; do not silently reset.
7. Update the appropriate `docs/` page whenever a parser, format mapping, field semantic or workflow changes. Include evidence and commands; mark unverified links as `CANDIDATE` or `UNKNOWN`.
8. Commit small tooling/documentation changes separately from large resource-data batches. Run applicable tests and report what actually ran.
9. Keep data archives inside `4.0.0/`, never under `docs/`, `scripts/` or `tests/`. Keep tool scripts inside `scripts/`, not at repository root.
10. This is a resource/provenance repository, not a license to redistribute data: obey applicable rights and repository access rules.

## Before making changes
Read `README.md`, `docs/README.md`, `docs/repository-layout.md`, and `docs/resource-provenance.md`; inspect `git status`, current branch, remotes and relevant manifests. Write a small plan, execute, verify and summarize modified paths and commit hashes.

## Generated Unpack pipeline (2026-11-05)
- `Unpack/4.0.0/exefs/<source-filename>/` and `Unpack/4.0.0/romfs/<source-parent>/<source-filename>/` are for **derived** outputs only. Preserve original path, basename and extension. This does not change the immutable `4.0.0/{0,1}` contract.
- `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/` preserves the Trinity virtual relative paths. Nested parsing/converted results go under `parsed/<virtualpath>/<filename>/` and `converted/<virtualpath>/<filename>/`.
- Restore 7z volumes to a hash-checked temporary directory outside the repository before processing. No extracted/converted data is considered validated without provenance. Do not silently replace `PLANNED` with `CONFIRMED`.
- Upstream source checkouts belong to ignored `tools/_external/`; pin and attribute them in `tools/upstream.json`; do not vendor or redistribute dependencies, Oodle DLLs, ROM keys, or executables.
- For a new converter, add tests with synthetic fixture bytes and document tool version, source SHA-256, byte offsets, file count and failure cases.

## Imported upstream Git submodules
- Four external tools (gftool, pkNX, Switch-Toolbox, SCVI_Extract) are tracked as **Git submodules**, and PokeDocs remains a **complete vendored upstream tree** inside `tools/`. Preserve that existing source. Pinned refs/trees are in `tools/upstream.json` and Git submodule URLs are in `.gitmodules`. When working on them, run `git submodule update --init --recursive` instead of maintaining duplicate `tools/_external` clones.
- Do not commit generated build outputs, automatic upstream branch updates, or unrelated content. Preserve pinned SHAs unless a reproducible update is explicitly requested and compatibility tests pass.
- `SV.TrinityDump` links to `tools/gftool/GFTool.Core`. `Prepare-SV-Trinity.ps1` consumes hashes from `tools/PokeDocs/` and may detect the already tracked `scripts/deps/oo2core_8_win64.dll`. Review licensing before public redistribution of a proprietary DLL; no extra copy is committed by the script.
