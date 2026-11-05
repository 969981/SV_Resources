# SV tools — pinned upstream sources

All five upstream projects are available under `tools/`. **PokeDocs, SCVI_Extract, pkNX and Switch-Toolbox are complete vendored source snapshots**, while gftool is the **only remaining pinned Git submodule**. Use `git clone --recurse-submodules` or `git submodule update --init --recursive` to obtain gftool (including its nested dependencies). The four vendored directories need no additional checkout.

| Local path | Upstream | Purpose | Priority |
| --- | --- | --- | --- |
| [gftool](gftool) | [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity TRPFS/TRPFD, GFTool.Core, models | P0 |
| [PokeDocs](PokeDocs) | [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) | **Full vendored source**; SV Hashlists and FlatBuffers schemas | P0 |
| [pkNX](pkNX) | [kwsch/pkNX](https://github.com/kwsch/pkNX) | **Full vendored source**; SV 4.0.0 data dump, not editor | P1 |
| [Switch-Toolbox](Switch-Toolbox) | [KillzXGaming/Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | **Full vendored source**, including upstream tracked binaries; verify compatibility per file | P1 |
| [SCVI_Extract](SCVI_Extract) | [psthrn42/SCVI_Extract](https://github.com/psthrn42/SCVI_Extract) | **Full vendored source**; legacy Python TRPFS extractor / comparison | P2 |

Pinned SHA, source URL, branch, import method and role: [upstream.json](upstream.json). For PokeDocs, the tracked tree is exactly the upstream tree hash `96ea0ac5...`. For SCVI_Extract, the tracked tree is exactly the upstream tree hash `33d0fd99...` (10 files from `0d4f817...`). pkNX source commit `d191cd0e...` has tree `b660e4f0...`; Switch-Toolbox source commit `3a327914...` has tree `ec1508a9...`. All four vendored tree SHAs are recorded in `upstream.json`. **Do not auto-merge or pull upstream into master** without tests; update pinned vendor trees or the remaining gftool submodule pointer through reviewed commits. Respect each project's own license and third-party dependencies.

## Retrieve all sources (Windows)

```powershell
git clone --recurse-submodules https://github.com/969981/SV_Resources.git
cd SV_Resources
# Or for an existing checkout:
git submodule sync --recursive
git submodule update --init --recursive
# Wrapper with pin validation (one submodule and four complete vendored trees):
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
```

If using sparse checkout, ensure `.gitmodules` and `tools/` are present. The `tools/PokeDocs`, `tools/SCVI_Extract`, `tools/pkNX` and `tools/Switch-Toolbox` trees already contain their complete pinned source snapshots. gftool has its own nested `NxMiddleware` submodule, so use `--recursive` for the full source. Switch-Toolbox includes many third-party packages and binary dependencies. Its Git-tracked content is included in the vendored source tree; retain and review applicable third-party licenses.

## Existing SV.TrinityDump batch extractor

[SV.TrinityDump](SV.TrinityDump) targets .NET 8 and references **`tools/gftool/GFTool.Core/GFTool.Core.csproj`** directly. The wrapper `scripts/Run-SV-TrinityDump.ps1` exports to `Unpack/4.0.0/romfs/arc/data.trpfs/virtual`. GUI tools may require a different SDK and their upstream-specific setup; cloning does not equal building or launching them.

`scripts/Prepare-SV-Trinity.ps1`:
- Restores/validates original TRPFS/TRPFD to a working directory **outside the repository**.
- Reads Hashlist data from `tools/PokeDocs/SV/Hashlists/FileSystem/`; `-WithTrpakHashes` includes nested TRPAK hashes.
- Can reuse a generated `GFPAKHashCache.bin` in ignored `tools/_local/` with `-SkipHashBuild`.
- Accepts `-OodleDllPath`, or detects an existing `scripts/deps/oo2core_8_win64.dll` and copies it to ignored `tools/_local/` for runtime use (does not edit or re-upload the original).

**Important:** The owner has already added `scripts/deps/oo2core_8_win64.dll` to the publicly visible repository. A gitignore pattern does not untrack an already committed file. This binary may be proprietary: review redistribution rights and, if inappropriate to publish, remove it and consider addressing the existing Git history. This task does not move or republish the binary.

## Reproducibility and CI

- `tools/upstream.json` is checked against `.gitmodules`, the one gitlink and four vendored source trees by synthetic test.
- CI compiles `SV.TrinityDump` using the actual pinned gftool submodule; no Oodle or ROM files required.
- CI can build GFPAKHashCache from pinned PokeDocs (downloadable Actions artifact).
- Actual 8 GiB `data.trpfs` extraction remains a local Windows validation step; no source extraction is claimed from submodule initialization alone.
