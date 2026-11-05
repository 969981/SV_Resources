using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using GFTool.Renderer.Scene.GraphicsObjects;
using Trinity.Core.Utils;
using TrinityModelViewer.Export;
using GfAnimation = Trinity.Core.Flatbuffers.GF.Animation;

namespace SV.R3.ModelExport;

/// <summary>
/// Standalone, headless glTF exporter. The original vendored gftool source and
/// TrinityModelViewer GUI are not modified.
/// </summary>
internal static class Program
{
    private static int Main(string[] args)
    {
        try
        {
            if (args.Length < 2 || args.Length % 2 != 0)
                throw new ArgumentException(
                    "Usage: SV.R3.ModelExport.exe <input.trmdl> <output.gltf> " +
                    "[--animation <animation.tranm>]...");
            string input = Path.GetFullPath(args[0]);
            string output = Path.GetFullPath(args[1]);
            if (!input.EndsWith(".trmdl", StringComparison.OrdinalIgnoreCase) || !File.Exists(input))
                throw new FileNotFoundException("Missing .trmdl source", input);
            if (!output.EndsWith(".gltf", StringComparison.OrdinalIgnoreCase))
                throw new ArgumentException("Output must have .gltf extension");
            var animFiles = new List<string>();
            for (int i = 2; i < args.Length; i += 2)
            {
                if (!string.Equals(args[i], "--animation", StringComparison.OrdinalIgnoreCase)
                    || i + 1 >= args.Length)
                    throw new ArgumentException("Use --animation <path> pairs");
                animFiles.Add(Path.GetFullPath(args[i + 1]));
            }
            Directory.CreateDirectory(Path.GetDirectoryName(output)!);
            Console.WriteLine($"Loading native model: {input}");
            // LoadAllLods=true reads the original TRMDL/TRMSH/TRMBF/skin/materials.
            // The glTF exporter uses CPU-side ExportData; no rendering loop is started.
            using var model = new Model(input, loadAllLods: true);
            var animations = new List<Animation>();
            foreach (string path in animFiles)
            {
                if (!File.Exists(path))
                    throw new FileNotFoundException("Missing animation", path);
                var data = FlatBufferConverter.DeserializeFrom<GfAnimation.Animation>(path);
                animations.Add(new Animation(data, Path.GetFileNameWithoutExtension(path)));
            }
            GltfExporter.ExportModel(model, output, animations);
            Console.WriteLine($"Exported {output}");
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("SV R3 model export failed: " + ex);
            return 1;
        }
    }
}
