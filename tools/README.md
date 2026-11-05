# SV tools — pinned Git submodules

All five upstream projects are imported under `tools/` as **Git submodules**. A normal GitHub tree displays each as a pinned commit; use `git clone --recurse-submodules` or `git submodule update --init --recursive` to get complete source locally. This is **not** copying/vendoring source code into this repository.

| Local path | Upstream | Purpose | Priority |
| --- | --- | --- | --- |
| [gftool](gftool) | [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity TRPFS/TRPFD, GFTool.Core, models | P0 |
| [PokeDocs](PokeDocs) | [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) | SV Hashlists and FlatBuffers schemas | P0 |
| [pkNX](pkNX) | [kwsch/pkNX](https://github.com/kwsch/pkNX) | SV 4.0.0 data **dump**, not editor | P1 |
| [Switch-Toolbox](Switch-Toolbox) | [KillzXGaming/Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | Inspect/convert supported Nintendo Switch formats; verify compatibility per file | P1 |
| [SCVI_Extract](SCVI_Extract) | [psthrn42/SCVI_Extract](https://github.com/psthrn42/SCVI_Extract) | Legacy Python TRPFS extractor / comparison | P2 |

Pinned SHA, source URL, branch and role: [upstream.json](upstream.json). **Do not auto-merge or pull upstream into master** without tests; update a submodule pointer through a reviewed commit. Respect each project's own license and third-party dependencies.

## Retrieve all sources (Windows)

```powershell
git clone --recurse-submodules https://github.com/969981/SV_Resources.git
cd SV_Resources
# Or for an existing checkout:
git submodule sync --recursive
git submodule update --init --recursive
# Wrapper with pinned SHA validation (same five tools):
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
```

If using sparse checkout, ensure `.gitmodules` and `tools/` are present. gftool has its own nested `NxMiddleware` submodule, so use `--recursive` for the full source. Switch-Toolbox has a substantial history; submodules keep the parent repo small while preserving independent source history.

## Existing SV.TrinityDump batch extractor

[SV.TrinityDump](SV.TrinityDump) targets .NET 8 and references **`tools/gftool/GFTool.Core/GFTool.Core.csproj`** directly. The wrapper `scripts/Run-SV-TrinityDump.ps1` exports to `Unpack/4.0.0/romfs/arc/data.trpfs/virtual`. GUI tools may require a different SDK and their upstream-specific setup; cloning does not equal building or launching them.

`scripts/Prepare-SV-Trinity.ps1`:
- Restores/validates original TRPFS/TRPFD to a working directory **outside the repository**.
- Reads Hashlist data from `tools/PokeDocs/SV/Hashlists/FileSystem/`; `-WithTrpakHashes` includes nested TRPAK hashes.
- Can reuse a generated `GFPAKHashCache.bin` in ignored `tools/_local/` with `-SkipHashBuild`.
- Accepts `-OodleDllPath`, or detects an existing `scripts/deps/oo2core_8_win64.dll` and copies it to ignored `tools/_local/` for runtime use (does not edit or re-upload the original).

**Important:** The owner has already added `scripts/deps/oo2core_8_win64.dll` to the publicly visible repository. A gitignore pattern does not untrack an already committed file. This binary may be proprietary: review redistribution rights and, if inappropriate to publish, remove it and consider addressing the existing Git history. This task does not move or republish the binary.

## Reproducibility and CI

- `tools/upstream.json` is checked against `.gitmodules` and the gitlinks in `tools/` by synthetic test.
- CI compiles `SV.TrinityDump` using the actual pinned gftool submodule; no Oodle or ROM files required.
- CI can build GFPAKHashCache from pinned PokeDocs (downloadable Actions artifact).
- Actual 8 GiB `data.trpfs` extraction remains a local Windows validation step; no source extraction is claimed from submodule initialization alone.
