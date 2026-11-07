using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using pkNX.Containers;
using pkNX.Structures;
using pkNX.Structures.FlatBuffers;

namespace pkNX.EncounterCLI;

/// <summary>
/// Execute the ACTUAL vendored pkNX Gen9 wild/fixed encounter algorithms
/// against hash-verified SV 4.0.0 virtual files. The program NEVER reads
/// PKHeX reference data and cannot generate validity claims from a fixture.
/// </summary>
internal static class Program
{
    private static readonly JsonSerializerOptions Json = new() { WriteIndented = true };
    private const string WildName = "encounter_wild_paldea.pkl";
    private const string FixedName = "encounter_fixed_paldea.pkl";

    private static int Main(string[] args)
    {
        string? output = null;
        string? source = null;
        string? manifest = null;
        try
        {
            var parameters = Parse(args);
            source = Path.GetFullPath(parameters["--virtual-root"]);
            output = Path.GetFullPath(parameters["--output"]);
            manifest = Path.GetFullPath(parameters["--verified-manifest"]);
            if (!Directory.Exists(source) || !File.Exists(manifest))
                throw new FileNotFoundException("Real native SV virtual/ directory and SHA-verified M2 manifest are both mandatory.");
            if (output.Equals(source, StringComparison.OrdinalIgnoreCase) ||
                output.StartsWith(source.TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar,
                                  StringComparison.OrdinalIgnoreCase) ||
                source.StartsWith(output.TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar,
                                  StringComparison.OrdinalIgnoreCase))
                throw new ArgumentException("Native outputs must be separate from the original game virtual/ tree.");
            Directory.CreateDirectory(output);
            var verified = LoadVerifiedSources(manifest);
            string? trcolEvidence = parameters.TryGetValue("--verified-trcol-manifest", out var trcolManifest)
                ? Path.GetFullPath(trcolManifest) : null;
            var externalVerified = trcolEvidence is null ? new Dictionary<string, NativeFileRecord>(StringComparer.OrdinalIgnoreCase)
                : LoadVerifiedTrcol(trcolEvidence);
            foreach (var entry in externalVerified)
                if (!verified.TryAdd(entry.Key, entry.Value))
                    throw new InvalidDataException($"Duplicate base/TRCOL original source: {entry.Key}");
            var rom = new NativeVirtualFileSystem(source, verified);
            Console.WriteLine($"Native SV verified source manifest: {verified.Count} entries");
            // Raid generation does not depend on English place names or native collision geometry.
            var products = new List<string>();
            products.AddRange(NativeRaidExporter.Generate(rom, output));
            Console.WriteLine("Generated 3 independent original Tera raid tables.");
            string? collisionBlocker = null;
            try
            {
            // Use exact GameDumperSV location-map construction. Area location is
            // an AHTB entry INDEX, not a name hash or array sorted by strings.
            var config = new EncounterDumpConfigSV
            {
                Path = output,
                PlaceNameMap = MakePlaceNameMap(rom),
                // These are debug text labels only; original binary emits
                // national Species IDs and Move IDs through native structs.
                SpecNamesInternal = Enumerable.Range(0, 8192)
                    .Select(i => $"native-dev-id-{i}").ToArray(),
                MoveNames = Enumerable.Range(0, 8192)
                    .Select(i => $"native-move-id-{i}").ToArray(),
                WriteText = false,
                WritePickle = true,
            };
            Console.WriteLine($"Native place names (English AHTB order): {config.PlaceNameMap.Count}");
                var field = new PaldeaFieldModel(rom);
                var scene = new PaldeaSceneModel(rom, field);
                Console.WriteLine("Native field and collision scene loaded.");
                EncounterSlotDumper9.DumpSlots(rom, config, scene);
                products.Add(WildName);
                Console.WriteLine($"Generated from raw spawners + geometry: {WildName}");
                FixedSymbolDumper9.Dump(rom, config, scene);
                products.Add(FixedName);
                Console.WriteLine($"Generated from raw symbol tables + geometry: {FixedName}");
            }
            catch (Exception ex) when (ex is FileNotFoundException or InvalidDataException or KeyNotFoundException)
            {
                collisionBlocker = $"ORIGINAL_WORLD_SCHEMA_OR_DEPENDENCY_BLOCKED: {ex.GetType().Name}: {ex.Message}";
                Console.Error.WriteLine(collisionBlocker);
            }

            var input = rom.Consumed.OrderBy(kv => kv.Key, StringComparer.Ordinal)
                .Select(kv => new
                {
                    path = kv.Key,
                    sha256 = kv.Value.Sha256,
                    bytes = kv.Value.Bytes,
                    verifiedByOriginalM2Manifest = kv.Value.ManifestVerified,
                }).ToArray();
            var extra = input.Where(x => !x.verifiedByOriginalM2Manifest).ToArray();
            var result = new
            {
                status = extra.Length > 0
                    ? "GENERATED_FROM_NATIVE_WITH_UNVERIFIED_EXTERNAL_DEPENDENCIES"
                    : collisionBlocker is not null
                        ? "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES_PARTIAL"
                        : "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
                collisionBlocker,
                version = "Pokemon SV 4.0.0",
                algorithm = "Vendored pkNX EncounterSlotDumper9 and FixedSymbolDumper9, UNMODIFIED",
                importantLimits = new[]
                {
                    "PKHeX reference files were not used as generator inputs.",
                    "Generation from SV native files is not automatically equivalent to PKHeX legality correctness.",
                    "Different pkNX / PKHeX revisions and non-wild static encounter rules can differ.",
                    "Ordinary Tera raids, distributions, outbreak and HOME transfer rules are separate pipelines.",
                },
                originalM2Manifest = manifest,
                originalTrcolManifest = trcolEvidence,
                originalTrcolEntries = externalVerified.Count,
                originalSourceRoot = source,
                originalM2Entries = verified.Count,
                sourceFilesActuallyRead = input,
                unverifiedExtraFiles = extra,
                generated = products.Select(name =>
                {
                    var p = Path.Combine(output, name);
                    if (!File.Exists(p) || new FileInfo(p).Length == 0)
                        throw new InvalidDataException($"pkNX created no valid {name} output");
                    return new { name, bytes = new FileInfo(p).Length, sha256 = Sha256File(p) };
                }).ToArray(),
            };
            WriteJson(Path.Combine(output, "native-encounter-build.json"), result);
            if (extra.Length > 0)
            {
                Console.Error.WriteLine($"{extra.Length} native source(s) lack M2 SHA manifest verification; cannot mark exact legality verified.");
                return 2;
            }
            if (collisionBlocker is not null)
                return 2; // Partial native raid result; collisions still need original TRCOL.
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine($"NATIVE_G9_ENCOUNTER_BLOCKED: {ex.GetType().Name}: {ex.Message}");
            if (output is not null && !string.IsNullOrEmpty(source) &&
                !output.StartsWith(source.TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar,
                                   StringComparison.OrdinalIgnoreCase))
            {
                Directory.CreateDirectory(output);
                WriteJson(Path.Combine(output, "native-encounter-failure.json"),
                    new { status = "BLOCKED_NATIVE_RECONSTRUCTION", source, manifest,
                          errorType = ex.GetType().Name, error = ex.Message,
                          explanation = "Missing/invalid native resources are not substituted with PKHeX reference .pkl data." });
            }
            return 3;
        }
    }

    private static Dictionary<string,string> Parse(string[] args)
    {
        var result = new Dictionary<string,string>(StringComparer.Ordinal);
        for (int i = 0; i < args.Length; i += 2)
        {
            if (i + 1 >= args.Length || !args[i].StartsWith("--", StringComparison.Ordinal))
                throw new ArgumentException("Usage: --virtual-root <original M2 virtual> --verified-manifest <native M2 SHA evidence> --output <separate output folder>");
            if (!result.TryAdd(args[i],args[i + 1]))
                throw new ArgumentException($"Duplicate option {args[i]}");
        }
        foreach (var key in new[] { "--virtual-root", "--verified-manifest", "--output" })
            if (!result.ContainsKey(key))
                throw new ArgumentException($"Missing mandatory {key}");
        if (result.Keys.Any(k => k is not ("--virtual-root" or "--verified-manifest" or "--output" or "--verified-trcol-manifest")))
            throw new ArgumentException("Unsupported option");
        return result;
    }

    private static Dictionary<string, NativeFileRecord> LoadVerifiedSources(string file)
    {
        using var doc = JsonDocument.Parse(File.ReadAllBytes(file));
        var root = doc.RootElement;
        if (root.GetProperty("status").GetString() != "61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED")
            throw new InvalidDataException("No 61-file SHA-verified native extraction evidence.");
        var targets = root.GetProperty("targets");
        if (targets.GetArrayLength() != 61)
            throw new InvalidDataException("Expected 61 individual native provenance entries.");
        var result = new Dictionary<string,NativeFileRecord>(StringComparer.OrdinalIgnoreCase);
        foreach (var item in targets.EnumerateArray())
        {
            var name = item.GetProperty("source_virtual_path").GetString()
                       ?? throw new InvalidDataException("Missing native virtual path");
            var sha = item.GetProperty("native_sha256").GetString()
                       ?? throw new InvalidDataException("Missing native SHA256");
            var bytes = item.GetProperty("native_bytes").GetInt64();
            if (sha.Length != 64 || !sha.All(Uri.IsHexDigit) || bytes < 0)
                throw new InvalidDataException($"Bad SHA256/size: {name}");
            if (!result.TryAdd(name, new NativeFileRecord(sha.ToUpperInvariant(), bytes, true)))
                throw new InvalidDataException($"Duplicate native M2 file: {name}");
        }
        return result;
    }

    private static Dictionary<string, NativeFileRecord> LoadVerifiedTrcol(string path)
    {
        using var doc = JsonDocument.Parse(File.ReadAllBytes(path));
        var root = doc.RootElement;
        if (root.GetProperty("status").GetString() != "TRCOL_ORIGINAL_SHA256_VERIFIED" ||
            root.GetProperty("source").GetString() != "SV-4.0.0-original-TRPFD-TRPFS")
            throw new InvalidDataException("Not actual original TRCOL SHA evidence");
        var result = new Dictionary<string,NativeFileRecord>(StringComparer.OrdinalIgnoreCase);
        foreach (var item in root.GetProperty("targets").EnumerateArray())
        {
            if (item.GetProperty("status").GetString()!="TRCOL_ORIGINAL_SHA256_VERIFIED")
                throw new InvalidDataException("A native collision dependency has not been verified");
            var name = item.GetProperty("source_virtual_path").GetString()
                ?? throw new InvalidDataException("Missing native collision path");
            if (!name.EndsWith(".trcol",StringComparison.OrdinalIgnoreCase))
                throw new InvalidDataException($"Non-collision dependency listed in TRCOL proof: {name}");
            var sha = item.GetProperty("native_sha256").GetString() ?? "";
            var len = item.GetProperty("native_bytes").GetInt64();
            if (sha.Length != 64 || !sha.All(Uri.IsHexDigit) || len < 0 ||
                !result.TryAdd(name,new NativeFileRecord(sha.ToUpperInvariant(),len,true)))
                throw new InvalidDataException($"Invalid source TRCOL SHA or duplicate: {name}");
        }
        if (result.Count != root.GetProperty("unique_trcol_paths").GetInt32())
            throw new InvalidDataException("TRCOL count differs from original scene dependency manifest");
        return result;
    }

    private static Dictionary<string, (string Name, int Index)> MakePlaceNameMap(NativeVirtualFileSystem rom)
    {
        const string prefix = "message/dat/English/common/place_name";
        var config = new TextConfig(GameVersion.SV);
        var names = new TextFile(rom.GetPackedFile(prefix + ".dat"), config).Lines;
        var ahtb = new AHTB(rom.GetPackedFile(prefix + ".tbl"));
        if (names.Length == 0 || ahtb.Count < names.Length)
            throw new InvalidDataException("English DAT has zero entries or more lines than AHTB keys.");
        return ahtb.ToIndexedDictionary(names);
    }

    private static string Sha256File(string path)
    {
        using var f = File.OpenRead(path);
        return Convert.ToHexString(SHA256.HashData(f));
    }

    private static void WriteJson(string path, object value) =>
        File.WriteAllText(path, JsonSerializer.Serialize(value, Json) + "\n", new UTF8Encoding(false));
}

internal sealed record NativeFileRecord(string Sha256, long Bytes, bool ManifestVerified);

internal sealed class NativeVirtualFileSystem : IFileInternal
{
    private readonly string Root;
    private readonly Dictionary<string, NativeFileRecord> Original;
    public readonly Dictionary<string, NativeFileRecord> Consumed = new(StringComparer.OrdinalIgnoreCase);

    public NativeVirtualFileSystem(string root, Dictionary<string,NativeFileRecord> original)
    {
        Root = Path.GetFullPath(root);
        Original = original;
    }

    public byte[] GetPackedFile(ulong hash) =>
        throw new NotSupportedException($"Native Gen9 headless runner requires exact source path, not unknown hashed blob: {hash:X16}");

    public byte[] GetPackedFile(string path)
    {
        if (string.IsNullOrWhiteSpace(path) || path.StartsWith('/') || path.Contains('\\') ||
            path.Contains(':') || path.Split('/').Any(x => x is "" or "." or ".."))
            throw new InvalidDataException($"Unsafe original asset name: {path}");
        var file = Path.GetFullPath(Path.Combine(Root, path.Replace('/', Path.DirectorySeparatorChar)));
        if (!file.StartsWith(Root.TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar,
                             StringComparison.OrdinalIgnoreCase))
            throw new InvalidDataException("Cannot read outside game source virtual directory");
        if (!File.Exists(file))
            throw new FileNotFoundException(
                $"Original SV 4.0.0 source missing: {path}. If Havok TRCOL, resolve from original TRSCN and extract its native pack.",file);
        var data = File.ReadAllBytes(file);
        var sum = Convert.ToHexString(SHA256.HashData(data));
        var inManifest = Original.TryGetValue(path, out var expected);
        if (inManifest && (expected!.Bytes != data.LongLength || !sum.Equals(expected.Sha256,StringComparison.OrdinalIgnoreCase)))
            throw new InvalidDataException($"Original M2 size/SHA256 changed: {path}");
        if (!inManifest && !path.EndsWith(".trcol",StringComparison.OrdinalIgnoreCase))
            throw new InvalidDataException($"Unproven non-TRCOL game asset requested by pkNX: {path}");
        Consumed[path] = new NativeFileRecord(sum,data.LongLength,inManifest);
        return data;
    }
}
