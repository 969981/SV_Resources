# SV R3 headless glTF converter

This project compiles the original vendor exporter source by reference:
../gftool/TrinityModelViewer/Export/GltfExporter.cs.
It does not change any gftool/NxMiddleware upstream snapshot.

Requires .NET 10 on Windows and the native TRMDL family present together.

    dotnet build tools/SV.R3.ModelExport/SV.R3.ModelExport.csproj -c Release
    tools/SV.R3.ModelExport/bin/Release/net10.0-windows/SV.R3.ModelExport.exe input.trmdl output.gltf

Optional repeated --animation <file.tranm> arguments are supported.
No GUI is launched. Output is glTF + .bin + PNG textures in a subdirectory.
The separate Python R3 verifier must pass before any publication;
visual quality is NOT guaranteed by successful export.

## Redistribution

The linked original gftool/GltfExporter implementation comes from the
vendored GPL-2.0 gftool source (see tools/gftool/LICENSE). A redistribution
of this combined model converter should comply with GPL-2.0 obligations,
including relevant source and license notices. The upstream vendor snapshot
is not changed by this wrapper. The license of game assets is separate;
do not redistribute Nintendo/Game Freak resources merely because the
converter can decode them. This is technical guidance, not legal advice.
