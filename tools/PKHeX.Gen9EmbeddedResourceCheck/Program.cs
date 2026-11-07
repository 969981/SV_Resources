using System.Security.Cryptography;
using System.Text.Json;
using PKHeX.Core;

namespace PKHeX.Gen9EmbeddedResourceCheck;

/// <summary>
/// Verify the compiled, isolated PKHeX.Core DLL actually contains the SAME five
/// original-game-derived .pkl files produced from SHA-attested native Gen9 data.
/// Merely copying .pkl beside PKHeX.exe does not change embedded references.
/// </summary>
internal static class Program
{
    private static readonly string[] NativeNames =
    [
        "encounter_wild_paldea.pkl",
        "encounter_fixed_paldea.pkl",
        "encounter_gem_paldea.pkl",
        "encounter_gem_kitakami.pkl",
        "encounter_gem_blueberry.pkl",
    ];

    private static int Main(string[] args)
    {
        if (args.Length != 4 || args[0] != "--native-output" || args[2] != "--output")
        {
            Console.Error.WriteLine("Usage: --native-output <source-generated directory> --output <report.json>");
            return 2;
        }
        try
        {
            string native = Path.GetFullPath(args[1]);
            string result = Path.GetFullPath(args[3]);
            var assembly = typeof(PK9).Assembly;
            var embeddedNames = assembly.GetManifestResourceNames();
            var audit = new List<object>();
            foreach (string filename in NativeNames)
            {
                string[] candidates = embeddedNames
                    .Where(name => name.EndsWith("." + filename, StringComparison.OrdinalIgnoreCase))
                    .ToArray();
                if (candidates.Length != 1)
                    throw new InvalidDataException(
                        $"Expected precisely one PKHeX.Core embedded Gen9 source for {filename}; found {candidates.Length}");
                byte[] disk = File.ReadAllBytes(Path.Combine(native, filename));
                using var stream = assembly.GetManifestResourceStream(candidates[0])
                    ?? throw new InvalidDataException($"Embedded resource not found: {candidates[0]}");
                using var buffer = new MemoryStream();
                stream.CopyTo(buffer);
                byte[] embedded = buffer.ToArray();
                string diskSha = Convert.ToHexString(SHA256.HashData(disk));
                string embeddedSha = Convert.ToHexString(SHA256.HashData(embedded));
                if (disk.Length != embedded.Length ||
                    !diskSha.Equals(embeddedSha, StringComparison.OrdinalIgnoreCase))
                    throw new InvalidDataException($"Compiled PKHeX.Core embedded data differs from original native .pkl: {filename}");
                audit.Add(new
                {
                    name=filename,manifestName=candidates[0],bytes=disk.LongLength,
                    native_sha256=diskSha,embedded_sha256=embeddedSha,
                    exact_binary_match=true,
                });
            }
            var report = new
            {
                status="ISOLATED_COMPILED_PKHEX_CORE_EMBEDS_FIVE_ACTUAL_NATIVE_GEN9_TABLES",
                pkhex_core_assembly_full_name=assembly.FullName,
                count=NativeNames.Length,
                verified=NativeNames.Length,
                files=audit,
                limits=new[]
                {
                    "Validates exact compiled embedded bytes, not full game runtime legality.",
                    "The native wild/fixed outputs still differ from the pinned official PKHeX reference.",
                    "Official PKHeX source and ROM sources must remain unchanged.",
                },
            };
            Directory.CreateDirectory(Path.GetDirectoryName(result)!);
            File.WriteAllText(result,JsonSerializer.Serialize(report,new JsonSerializerOptions {WriteIndented=true})+"\n",
                new System.Text.UTF8Encoding(false));
            Console.WriteLine($"Actual embedded native Gen9 PKHeX sources verified: {NativeNames.Length}/5");
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine($"PKHEX_EMBEDDED_GEN9_VERIFY_FAILED: {ex}");
            return 3;
        }
    }
}
