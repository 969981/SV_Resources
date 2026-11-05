# SV tools — pinned upstream sources

All five upstream projects are available under `tools/`. **PokeDocs and SCVI_Extract are complete vendored source snapshots**, while gftool, pkNX and Switch-Toolbox remain **pinned Git submodules**. Use `git clone --recurse-submodules` or `git submodule update --init --recursive` to obtain those three submodule sources. Both vendored directories require no additional checkout.

| Local path | Upstream | Purpose | Priority |
| --- | --- | --- | --- |
| [gftool](gftool) | [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity TRPFS/TRPFD, GFTool.Core, models | P0 |
| [PokeDocs](PokeDocs) | [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) | **Full vendored source**; SV Hashlists and FlatBuffers schemas | P0 |
| [pkNX](pkNX) | [kwsch/pkNX](https://github.com/kwsch/pkNX) | SV 4.0.0 data **dump**, not editor | P1 |
| [Switch-Toolbox](Switch-Toolbox) | [KillzXGaming/Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | Inspect/convert supported Nintendo Switch formats; verify compatibility per file | P1 |
| [SCVI_Extract](SCVI_Extract) | [psthrn42/SCVI_Extract](https://github.com/psthrn42/SCVI_Extract) | **Full vendored source**; legacy Python TRPFS extractor / comparison | P2 |

Pinned SHA, source URL, branch, import method and role: [upstream.json](upstream.json). For PokeDocs, the tracked tree is exactly the upstream tree hash `96ea0ac5...`. For SCVI_Extract, the tracked tree is exactly the upstream tree hash `33d0fd99...` (10 files from `0d4f817...`). **Do not auto-merge or pull upstream into master** without tests; update vendored trees or submodule pointers through reviewed commits. Respect each project's own license and third-party dependencies.

## Retrieve all sources (Windows)

```powershell
git clone --recurse-submodules https://github.com/969981/SV_Resources.git
cd SV_Resources
# Or for an existing checkout:
git submodule sync --recursive
git submodule update --init --recursive
# Wrapper with pin validation (three submodules and both complete vendored trees):
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
```

If using sparse checkout, ensure `.gitmodules` and `tools/` are present. The vendored `tools/PokeDocs` and `tools/SCVI_Extract` trees already include their complete source files. gftool has its own nested `NxMiddleware` submodule, so use `--recursive` for the full source. Switch-Toolbox has a substantial history; submodules keep the parent repo small while preserving independent source history.

## Existing SV.TrinityDump batch extractor

[SV.TrinityDump](SV.TrinityDump) targets .NET 8 and references **`tools/gftool/GFTool.Core/GFTool.Core.csproj`** directly. The wrapper `scripts/Run-SV-TrinityDump.ps1` exports to `Unpack/4.0.0/romfs/arc/data.trpfs/virtual`. GUI tools may require a different SDK and their upstream-specific setup; cloning does not equal building or launching them.

`scripts/Prepare-SV-Trinity.ps1`:
- Restores/validates original TRPFS/TRPFD to a working directory **outside the repository**.
- Reads Hashlist data from `tools/PokeDocs/SV/Hashlists/FileSystem/`; `-WithTrpakHashes` includes nested TRPAK hashes.
- Can reuse a generated `GFPAKHashCache.bin` in ignored `tools/_local/` with `-SkipHashBuild`.
- Accepts `-OodleDllPath`, or detects an existing `scripts/deps/oo2core_8_win64.dll` and copies it to ignored `tools/_local/` for runtime use (does not edit or re-upload the original).

**Important:** The owner has already added `scripts/deps/oo2core_8_win64.dll` to the publicly visible repository. A gitignore pattern does not untrack an already committed file. This binary may be proprietary: review redistribution rights and, if inappropriate to publish, remove it and consider addressing the existing Git history. This task does not move or republish the binary.

## Reproducibility and CI

- `tools/upstream.json` is checked against `.gitmodules`, the three gitlinks and the two vendored source trees by synthetic test.
- CI compiles `SV.TrinityDump` using the actual pinned gftool submodule; no Oodle or ROM files required.
- CI can build GFPAKHashCache from pinned PokeDocs (downloadable Actions artifact).
- Actual 8 GiB `data.trpfs` extraction remains a local Windows validation step; no source extraction is claimed from submodule initialization alone.
