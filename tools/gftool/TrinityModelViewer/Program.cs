using System;
using System.Collections.Generic;
using System.IO;
using GFTool.Renderer.Scene.GraphicsObjects;
using Trinity.Core.Utils;
using TrinityModelViewer.Export;
using GfAnimation = Trinity.Core.Flatbuffers.GF.Animation;

namespace TrinityModelViewer
{
    internal static class Program
    {
        /// <summary>
        /// The existing GUI remains unchanged. A model export mode is available for
        /// batch conversion using the same native renderer/asset loader and exporter.
        /// Windows desktop runtime is required by this project.
        /// </summary>
        [STAThread]
        static void Main(string[] args)
        {
            if (args.Length > 0 && string.Equals(args[0], "--export-gltf", StringComparison.OrdinalIgnoreCase))
            {
                try
                {
                    if (args.Length < 3)
                        throw new ArgumentException("Usage: TrinityModelViewer --export-gltf <absolute.trmdl> <absolute.gltf> [--animation <absolute.tranm>]...");
                    var input = Path.GetFullPath(args[1]);
                    var output = Path.GetFullPath(args[2]);
                    var animationFiles = new List<string>();
                    for (int i = 3; i < args.Length; i += 2)
                    {
                        if (args[i] != "--animation" || i + 1 >= args.Length)
                            throw new ArgumentException("Expected repeated --animation <absolute.tranm> pairs.");
                        animationFiles.Add(Path.GetFullPath(args[i + 1]));
                    }
                    if (!File.Exists(input) || !input.EndsWith(".trmdl", StringComparison.OrdinalIgnoreCase))
                        throw new FileNotFoundException("Input model .trmdl is missing", input);
                    Directory.CreateDirectory(Path.GetDirectoryName(output)!);
                    // Constructor parses native mesh, bone, and material resources. The renderer's
                    // OpenGL Setup() method is intentionally not called during export.
                    var model = new Model(input, loadAllLods: true);
                    var animations = new List<Animation>();
                    foreach (var file in animationFiles)
                    {
                        if (!File.Exists(file))
                            throw new FileNotFoundException("Missing .tranm animation", file);
                        var data = FlatBufferConverter.DeserializeFrom<GfAnimation.Animation>(file);
                        animations.Add(new Animation(data, Path.GetFileNameWithoutExtension(file)));
                    }
                    GltfExporter.ExportModel(model, output, animations);
                    return;
                }
                catch (Exception ex)
                {
                    Console.Error.WriteLine("TrinityModelViewer export error: " + ex);
                    Environment.ExitCode = 1;
                    return;
                }
            }
            try
            {
                Directory.SetCurrentDirectory(AppContext.BaseDirectory);
            }
            catch
            {
                // Ignore; relative shader paths may fail but app can still run.
            }
            ApplicationConfiguration.Initialize();
            Application.Run(new ModelViewerForm(args));
        }
    }
}
