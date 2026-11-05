# Upstream tooling (source references only)

Pinned upstream revisions and roles are in [upstream.json](upstream.json). Run `scripts/Sync-SV-Tools.ps1` in Windows PowerShell to clone exact source revisions into `tools/_external/` (ignored by Git). Use `-IncludeLegacy` to include SCVI_Extract.

The script does not install releases, run downloaded executables, copy source into this repository, fetch keys, or bundle proprietary Oodle libraries. Build tools according to upstream instructions. Local gftool TrinityFileExplorer requires an independently supplied, legitimately obtained `oo2core_8_win64.dll` and a current `GFPAKHashCache.bin`, which can be generated with its PokeDocs hashlist loader.

For CI, explicitly pin tool SHA, dependency and license review; do not auto-update external parsers without regression tests. All work artifacts belong under `Unpack/`, not `tools/`.

## M2 batch exporter (local compilation)

`tools/SV.TrinityDump/SV.TrinityDump.csproj` references `../_external/gftool/GFTool.Core/GFTool.Core.csproj` at the pinned revision. Install .NET 8 SDK and run `scripts/Sync-SV-Tools.ps1` first. The PowerShell wrappers in `scripts/` perform verified restore, local hash-cache generation and extraction; they use `tools/_local/oo2core_8_win64.dll` from a **local, user-supplied** copy, not a download/published binary. `tools/_local/` is gitignored.

GFPakHashCache binary layout was verified from gftool `GFTool.Core/Cache/GFPakHashCache.cs` (8-byte count; 8-byte hash + BinaryWriter UTF-8 string per entry). SV sources are PokeDocs `SV/Hashlists/FileSystem/hashes_inside_fd.txt` and optionally `hashes_inside_trpak.txt`. Use pinned source hashlists for reproducibility.

**Status:** Source and synthetic cache tests exist; real Windows/M2 bulk extraction remains unverified.
