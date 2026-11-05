# Upstream tooling (source references only)

Pinned upstream revisions and roles are in [upstream.json](upstream.json). Run `scripts/Sync-SV-Tools.ps1` in Windows PowerShell to clone exact source revisions into `tools/_external/` (ignored by Git). Use `-IncludeLegacy` to include SCVI_Extract.

The script does not install releases, run downloaded executables, copy source into this repository, fetch keys, or bundle proprietary Oodle libraries. Build tools according to upstream instructions. Local gftool TrinityFileExplorer requires an independently supplied, legitimately obtained `oo2core_8_win64.dll` and a current `GFPAKHashCache.bin`, which can be generated with its PokeDocs hashlist loader.

For CI, explicitly pin tool SHA, dependency and license review; do not auto-update external parsers without regression tests. All work artifacts belong under `Unpack/`, not `tools/`.
