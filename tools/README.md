# SV tools — pinned upstream sources

All six upstream tool projects are stored as complete vendored source trees (ordinary Git files, not Gitlinks). `gftool` includes the full pinned `NxMiddleware` source at `tools/gftool/NxMiddleware`. `git clone` and `git pull` obtain these sources without submodule initialization.

| Local path | Upstream | Purpose | Priority |
| --- | --- | --- | --- |
| [gftool](gftool) | [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity TRPFS/TRPFD, GFTool.Core, models | P0 |
| [PokeDocs](PokeDocs) | [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) | **Full vendored source**; SV Hashlists and FlatBuffers schemas | P0 |
| [pkNX](pkNX) | [kwsch/pkNX](https://github.com/kwsch/pkNX) | **Full vendored source**; SV 4.0.0 data dump, not editor | P1 |
| [Switch-Toolbox](Switch-Toolbox) | [KillzXGaming/Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | **Full vendored source**, including upstream tracked binaries; verify compatibility per file | P1 |
| [SCVI_Extract](SCVI_Extract) | [psthrn42/SCVI_Extract](https://github.com/psthrn42/SCVI_Extract) | **Full vendored source**; legacy Python TRPFS extractor / comparison | P2 |
| [nx2elf](nx2elf) | [shuffle2/nx2elf](https://github.com/shuffle2/nx2elf) | **Full vendored source**; ExeFS NSO → AArch64 ELF for disassembly | P0 |

Pinned SHA, source URL, branch, import method and role: [upstream.json](upstream.json). For PokeDocs, the tracked tree is exactly the upstream tree hash `96ea0ac5...`. For SCVI_Extract, the tracked tree is exactly the upstream tree hash `33d0fd99...` (10 files from `0d4f817...`). pkNX source commit `d191cd0e...` has tree `b660e4f0...`; Switch-Toolbox source commit `3a327914...` has tree `ec1508a9...`. All six vendored tree SHAs are recorded in `upstream.json`. **Do not auto-merge or pull upstream into master** without tests; update pinned vendor trees or the pinned gftool vendor tree through reviewed commits. Respect each project's own license and third-party dependencies.

## Retrieve all sources (Windows)

```powershell
git clone https://github.com/969981/SV_Resources.git
cd SV_Resources
# For an existing checkout: git pull
# Verify the six pinned vendored source trees:
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
```

If using sparse checkout, include the required `tools/` directories. The nested `NxMiddleware` directory is also real source and needs no additional checkout. Switch-Toolbox includes many third-party packages and binary dependencies. Its Git-tracked content is included in the vendored source tree; retain and review applicable third-party licenses.

## Native ExeFS ELF conversion

The pinned `tools/nx2elf` tree is identical to upstream commit `a1760ba54e2aefb41444933f53b90e6e8b05c399` (tree `9b59e627f272251f564af320daa2b7be66b319f5`). Build with `cmake -S tools/nx2elf -B build/nx2elf -DCMAKE_BUILD_TYPE=Release` and `cmake --build build/nx2elf --config Release`. Convert `4.0.0/0/scarlet_main` and `violet_main` separately using `scripts/Convert-SV-ExeFS.py`. Provenance and output artifacts belong under `Unpack/4.0.0/exefs/<original_name>/`; oversized ELF files are published as verified 7z volumes, with full ELF in workflow artifacts. See `docs/exefs-nx2elf.md`. Upstream currently publishes no license file; check authorization for redistribution before reusing or republishing this snapshot.

## Existing SV.TrinityDump batch extractor

[SV.TrinityDump](SV.TrinityDump) targets .NET 10 and references **`tools/gftool/GFTool.Core/GFTool.Core.csproj`** directly. The wrapper `scripts/Run-SV-TrinityDump.ps1` exports to `Unpack/4.0.0/romfs/arc/data.trpfs/virtual`. GUI tools may require a different SDK and their upstream-specific setup; cloning does not equal building or launching them.

`scripts/Prepare-SV-Trinity.ps1`:
- Restores/validates original TRPFS/TRPFD to a working directory **outside the repository**.
- Reads Hashlist data from `tools/PokeDocs/SV/Hashlists/FileSystem/`; `-WithTrpakHashes` includes nested TRPAK hashes.
- Can reuse a generated `GFPAKHashCache.bin` in ignored `tools/_local/` with `-SkipHashBuild`.
- Accepts `-OodleDllPath`, or detects an existing `scripts/deps/oo2core_8_win64.dll` and copies it to ignored `tools/_local/` for runtime use (does not edit or re-upload the original).

**Important:** The owner has already added `scripts/deps/oo2core_8_win64.dll` to the publicly visible repository. A gitignore pattern does not untrack an already committed file. This binary may be proprietary: review redistribution rights and, if inappropriate to publish, remove it and consider addressing the existing Git history. This task does not move or republish the binary.

## Reproducibility and CI

- `tools/upstream.json` is checked against all six vendored source trees; no gitlinks or active submodule declarations are expected.
- CI compiles `SV.TrinityDump` using the pinned vendored gftool source; no Oodle or ROM files required.
- CI can build GFPAKHashCache from pinned PokeDocs (downloadable Actions artifact).
- Actual 8 GiB `data.trpfs` extraction remains a local Windows validation step; no source extraction is claimed from submodule initialization alone.

## .NET 10 and SLNX port

All 11 gftool and NxMiddleware C# projects now target .NET 10. Use TrinityModLoader.slnx (11 projects) or NxMiddleware/NxMiddleware.slnx (3 projects). The former .sln files were removed. The SV.TrinityDump consumer also targets .NET 10. System.Drawing.Common has been updated to 10.0.14; other third-party packages remain pinned. The manifest records both original upstream and locally modified source-tree SHAs. Windows CI compile success does not establish graphical UI or original ROM runtime correctness.


Continuous Windows build verification: [Verify gftool and NxMiddleware .NET 10](../.github/workflows/verify-gftool-net10.yml). Original migration completed with [GitHub Actions run 41994642367](https://github.com/969981/SV_Resources/actions/runs/41994642367). Builds verify compilation, not all UI and ROM extraction operations.
