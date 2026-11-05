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
