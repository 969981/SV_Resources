# Switch-Toolbox .NET 10 migration (work in progress)

This branch changes the five legacy .NET Framework 4.8 C# projects to SDK-style `net10.0-windows` project files. The original code, format definitions, WinForms designers, native plugins and data tables are kept. It is NOT yet established that all functions work on .NET 10.

## Initial migration inventory
- 5 projects: Toolbox, Toolbox_Library, File_Format_Library (FirstPlugin.Plg), BrawlboxHelper, Updater.
- Windows Forms and WPF are used in different projects; cross-platform execution is not supported.
- The tree contains thousands of source/data files, and many precompiled third-party and native DLLs originally built for .NET Framework or Windows x86/x64.
- Legacy packages.config and historical binaries remain as provenance, but SDK-style project builds use PackageReference.
- DirectXTexNet 1.0.0-rc3, AssimpNet 4.1.0, CsvHelper 8.0.0, ZstdSharp.Port 0.7.2 are intentionally pinned pending explicit API/native compatibility tests; claiming they are modernized would be incorrect.
- Updated where API continuity is more likely: SharpZipLib 1.4.2, K4os LZ4 1.3.8/Streams 1.3.8, K4os.Hash.xxHash 1.0.8, Newtonsoft.Json 13.0.3 and DockPanelSuite 3.1.1. Versions and compatibility must be confirmed by the CI restore/build.
- Old System.Activities.Statements imports were unused and removed. References to obsolete framework assemblies are delegated to the Windows desktop SDK.

## Validation gates
1. Run `python tools/Switch-Toolbox/scripts/check_net10.py` from repository root.
2. Run `dotnet restore tools/Switch-Toolbox/Toolbox.sln` on Windows with .NET SDK 10.
3. Run `dotnet build tools/Switch-Toolbox/Toolbox.sln -c Release --no-restore`.
4. Publish win-x64 and verify `Toolbox.exe` launches with all native dependencies and plugins.
5. Real sample tests: BFRES model + animation open/export/reimport; BNTX texture preview/export/reimport; SARC archive extract/repack; BYML/AAMP read/write; MSBT text; optional FBX model import/export. For each round trip, compare source semantics and output in the original .NET Framework 4.8 build.
6. On failure, record a real GitHub Actions log or exception and fix source APIs/binary dependencies. Do NOT merge until these gates are green.

## Known high-risk compatibility areas
- Legacy GL_EditorFramework/OpenTK 3 and custom Windows Forms controls.
- Native DirectXTex/FBX SDK/Assimp plugins and runtime architecture.
- Old .NET Framework binary plugins that may demand unavailable APIs; auto-resolution of .NET Framework assemblies is not guaranteed by a new TFM.
- Plugin discovery/copy-to-output layout, data paths, WinForms resource serialization.
- DockPanelSuite, CsvHelper and other APIs changed across versions; compile and round-trip evidence is required.

The Windows CI workflow is `.github/workflows/switch-toolbox-net10.yml`. Its successful build alone is insufficient to claim all format editing features have been verified.
