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

- NuGet PackageReference replaces selected .NET Framework package-folder references for DockPanelSuite 3.1.1, ThemeVS2015 3.1.1, K4os LZ4 1.3.8, SharpZipLib 1.4.2, Newtonsoft.Json 13.0.4. Other packages are initially kept API-compatible, including AssimpNet 4.1.0, CsvHelper 8.0.0 and ZstdSharp.Port 0.7.2. DirectXTexNet is kept as a verified vendored binary reference rather than an incompatible package asset; ZstdNet is updated to 1.5.7.
- Old 3rd-party binaries under `Toolbox/Lib` remain pinned. Some target .NET Framework, use native interop or load modules dynamically; a successful compiler exit **does not** establish runtime compatibility. Replace them only with individually verified source or modern packages.
- SDK projects explicitly preserve the legacy source/resource item list, so unused C# sources are not accidentally included.

## Known blockers

- `System.Activities.Statements` imports in two source files are unused and removed in the port.
- Four legacy BinaryFormatter-based helpers have no equivalent wire-format implementation on .NET 10. The port must not claim byte-for-byte serialization compatibility until fixture tests are created. Their calls are deliberately fail-fast on NET10 rather than silently writing a different format.
- WinForms, WPF, OpenTK, old DockPanelSuite-derived controls, DirectXTex and native FBX binaries require real Windows runtime tests.
- `XCI/NSP/NCA` have been unsupported by upstream Switch-Toolbox; this port does not restore them.

## Acceptance checklist

1. Release and Debug solution builds pass on Windows with zero errors; record warnings and restore outcomes.
2. Validate the win-x64 publish output with `Toolbox.exe --verify-runtime` (confirmed in CI). Separately launch the graphical GUI, open a sample, close/relaunch and ensure no missing DLL/plugin/loading failures (still pending manual Windows desktop testing).
3. Round-trip `SARC`, `BYAML`, `BFRES`, `BNTX`, `BFLYT` with provenance-preserving fixture hashes and checked content.
4. Exercise model import/export FBX/OBJ, OpenGL preview, texture conversion, animations, sound preview, archive extraction/repack, plugin scanning, and updater behavior.
5. Confirm original `.NET Framework 4.8` build still works; do not merge or distribute NET10 build until runtime checks pass.

Status: **SDK/Restore/Release/Debug/Yaz0 tests, win-x64 publish and headless plugin runtime loading verified on Windows CI**. Actual WinForms UI, OpenGL/native decoding, and resource round-trips still require manual/fixture-backed validation, so this remains a draft migration branch. Successful reference run: https://github.com/969981/SV_Resources/actions/runs/42011487835 .

## Windows CI evidence

- **CONFIRMED**: .NET 10 SDK, restore, 5 projects, Release + Debug solution builds.
- **CONFIRMED**: Yaz0 known fixture, empty and repetitive/random input round-trips, malformed data rejection.
- **CONFIRMED**: win-x64 publish, `Lib/Plugins` staging and `--verify-runtime` loading the new plugin, with uploadable Windows artifact.
- **UNVERIFIED**: first GUI launch with full OpenGL context, native format codecs (DirectX/FBX), end-to-end editable asset round-trips, toolbar/docking designer persistence.
- **KNOWN**: legacy `Thread.Abort` paths may throw `PlatformNotSupportedException` under .NET 10 and require cooperative cancellation where used; do not assume every editor action is compatible.
- **KNOWN**: `WFO1000` designer analyzer is suppressed only in NET10 SDK projects pending individual designer property reviews.
