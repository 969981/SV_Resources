# Switch-Toolbox .NET 10 Windows migration (experimental)

## Scope and rollback

This branch adds **side-by-side** SDK-style `*.net10.csproj` and `Toolbox.net10.slnx`, retaining all five original .NET Framework 4.8 projects and `Toolbox.sln`. No new build is considered production-ready until CI and Windows interactive checks pass. Original upstream commit is in `tools/upstream.json`.

Build on Windows with .NET 10 SDK and desktop targeting packs:

```powershell
cd tools/Switch-Toolbox
dotnet restore Toolbox.net10.slnx
dotnet build Toolbox.net10.slnx -c Release --no-restore
dotnet build Toolbox.net10.slnx -c Debug --no-restore
```

## Dependency rules

- NuGet PackageReference replaces selected .NET Framework package-folder references for DockPanelSuite 3.1.1, ThemeVS2015 3.1.1, K4os LZ4 1.3.8, SharpZipLib 1.4.2, Newtonsoft.Json 13.0.4. Other packages are initially kept API-compatible, including AssimpNet 4.1.0, CsvHelper 8.0.0, DirectXTexNet 1.0.0-rc3 and ZstdSharp.Port 0.7.2.
- Old 3rd-party binaries under `Toolbox/Lib` remain pinned. Some target .NET Framework, use native interop or load modules dynamically; a successful compiler exit **does not** establish runtime compatibility. Replace them only with individually verified source or modern packages.
- SDK projects explicitly preserve the legacy source/resource item list, so unused C# sources are not accidentally included.

## Known blockers

- `System.Activities.Statements` imports in two source files are unused and removed in the port.
- Four legacy BinaryFormatter-based helpers have no equivalent wire-format implementation on .NET 10. The port must not claim byte-for-byte serialization compatibility until fixture tests are created. Their calls are deliberately fail-fast on NET10 rather than silently writing a different format.
- WinForms, WPF, OpenTK, old DockPanelSuite-derived controls, DirectXTex and native FBX binaries require real Windows runtime tests.
- `XCI/NSP/NCA` have been unsupported by upstream Switch-Toolbox; this port does not restore them.

## Acceptance checklist

1. Release and Debug solution builds pass on Windows with zero errors; record warnings and restore outcomes.
2. Launch the GUI from a Windows x64 published folder, open a sample, close/relaunch and ensure no missing DLL or plugin loading failures.
3. Round-trip `SARC`, `BYAML`, `BFRES`, `BNTX`, `BFLYT` with provenance-preserving fixture hashes and checked content.
4. Exercise model import/export FBX/OBJ, OpenGL preview, texture conversion, animations, sound preview, archive extraction/repack, plugin scanning, and updater behavior.
5. Confirm original `.NET Framework 4.8` build still works; do not merge or distribute NET10 build until runtime checks pass.

Status: **migration branch / compile and runtime not yet verified**. See GitHub Actions `Verify Switch-Toolbox .NET 10 migration` for the actual job outcome.
