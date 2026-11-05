using System.Collections.Concurrent;
using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using pkNX.Containers;
using pkNX.Structures;
using pkNX.Structures.FlatBuffers.SV;

namespace pkNX.VirtualDump;

/// <summary>Read-only headless batch adapter using the vendored pkNX 4.0.0 parsers.</summary>
internal static class Program
{
    private static readonly JsonSerializerOptions Json = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
    };

    private sealed record Result(string Path, string Status, string Sha256, long Bytes,
        string[] Outputs, string? Error = null);

    public static int Main(string[] args)
    {
        if (args.Length != 5 ||
            !int.TryParse(args[4], out int workers) || workers is < 1 or > 8)
        {
            Console.Error.WriteLine("Usage: pkNX.VirtualDump <virtual-root> <output-root> <selection.txt> <report.jsonl> <workers:1-8>");
            return 2;
        }

        var sourceRoot = System.IO.Path.GetFullPath(args[0]);
        var outputRoot = System.IO.Path.GetFullPath(args[1]);
        var paths = File.ReadAllLines(args[2]).Where(s => !string.IsNullOrWhiteSpace(s)).Distinct().ToArray();
        var results = new ConcurrentDictionary<string, Result>(StringComparer.Ordinal);
        Directory.CreateDirectory(outputRoot);

        Parallel.ForEach(paths, new ParallelOptions { MaxDegreeOfParallelism = workers }, path =>
        {
            var result = Process(sourceRoot, outputRoot, path);
            results[path] = result;
            Console.WriteLine($"{result.Status}: {path}");
        });

        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(System.IO.Path.GetFullPath(args[3]))!);
        using (var sw = new StreamWriter(args[3], false, new UTF8Encoding(false)))
            foreach (var path in paths)
                sw.WriteLine(JsonSerializer.Serialize(results[path], Json));

        int failed = results.Values.Count(x => x.Status == "error");
        Console.WriteLine($"pkNX batch: {paths.Length} attempted, {results.Values.Count(x => x.Status == "decoded")} decoded, {failed} errors, {results.Values.Count(x => x.Status == "unsupported")} unsupported.");
        return failed == 0 ? 0 : 1;
    }

    private static Result Process(string sourceRoot, string outputRoot, string relative)
    {
        string sha = "";
        long bytes = 0;
        try
        {
            var normalized = relative.Replace('\\', '/');
            if (normalized.StartsWith('/') || normalized.Split('/').Any(x => x is "." or ".." or ""))
                throw new InvalidDataException("Invalid virtual relative path.");
            var full = System.IO.Path.GetFullPath(System.IO.Path.Combine(sourceRoot, normalized.Replace('/', System.IO.Path.DirectorySeparatorChar)));
            if (!full.StartsWith(sourceRoot.TrimEnd(System.IO.Path.DirectorySeparatorChar) + System.IO.Path.DirectorySeparatorChar, StringComparison.OrdinalIgnoreCase))
                throw new InvalidDataException("Escaping source root.");
            var fi = new FileInfo(full);
            bytes = fi.Length;
            using (var stream = File.OpenRead(full))
                sha = Convert.ToHexString(SHA256.HashData(stream)).ToLowerInvariant();
            if (bytes > 256L * 1024 * 1024)
                return new(relative, "unsupported", sha, bytes, [], "Input larger than 256 MiB safety cap.");

            string dest = System.IO.Path.Combine(outputRoot, "decoded", normalized.Replace('/', System.IO.Path.DirectorySeparatorChar));
            string ext = System.IO.Path.GetExtension(normalized).ToLowerInvariant();
            var data = File.ReadAllBytes(full);
            var outputs = new List<string>();
            if (normalized.StartsWith("message/dat/", StringComparison.OrdinalIgnoreCase) && ext == ".dat")
            {
                var lines = new TextFile(data, new TextConfig(GameVersion.SV)).Lines;
                SaveText(dest + ".txt", lines);
                SaveJson(dest + ".json", lines);
                outputs.AddRange([dest + ".txt", dest + ".json"]);
                var tablePath = System.IO.Path.ChangeExtension(full, ".tbl");
                if (File.Exists(tablePath))
                {
                    var tableBytes = File.ReadAllBytes(tablePath);
                    if (tableBytes.Length >= 8 && AHTB.IsAHTB(tableBytes) &&
                        new AHTB(tableBytes) is var labels && labels.Count == lines.Length)
                    {
                        SaveText(dest + ".labels.tsv", labels.Entries.Select((e, i) =>
                            $"{i}\t{e.Hash:X16}\t{Escape(e.Name)}\t{Escape(lines[i])}"));
                        outputs.Add(dest + ".labels.tsv");
                    }
                }
            }
            else if (ext is ".tbl" or ".ahtb")
            {
                if (data.Length < 8 || !AHTB.IsAHTB(data))
                    return new(relative, "unsupported", sha, bytes, [], "Not a pkNX AHTB table.");
                var table = new AHTB(data);
                SaveText(dest + ".tsv", table.Entries.Select((e, i) =>
                    $"{i}\t{e.Hash:X16}\t{Escape(e.Name)}"));
                outputs.Add(dest + ".tsv");
            }
            else if (normalized.Equals("avalon/data/personal_array.bin", StringComparison.OrdinalIgnoreCase))
            {
                var table = new PersonalTable9SV(new FakeContainer([data]));
                var rows = table.Table.Select((e, i) => new
                {
                    index = i,
                    speciesNational = e.FB.Info.SpeciesNational,
                    speciesInternal = e.FB.Info.SpeciesInternal,
                    form = e.Form,
                    present = e.IsPresentInGame,
                    hp = e.HP, atk = e.ATK, def = e.DEF,
                    spa = e.SPA, spd = e.SPD, spe = e.SPE,
                    type1 = (int)e.Type1, type2 = (int)e.Type2,
                    ability1 = e.Ability1, ability2 = e.Ability2, abilityHidden = e.AbilityH
                }).ToArray();
                SaveJson(dest + ".json", rows);
                SaveBytes(dest + ".pkhex.bin", table.Write());
                outputs.AddRange([dest + ".json", dest + ".pkhex.bin"]);
            }
            else if (ext == ".sarc")
            {
                using var arc = new SARC(full);
                if (!arc.SigMatches || arc.Count > 10000)
                    return new(relative, "unsupported", sha, bytes, [], "Unrecognized or excessive SARC entry count.");
                var outDir = dest + ".files";
                Directory.CreateDirectory(outDir);
                var entries = new List<object>();
                for (var i = 0; i < arc.Count; ++i)
                {
                    var part = arc.GetEntry(i, 0);
                    if (part.Length > 32 * 1024 * 1024)
                        throw new InvalidDataException("SARC entry exceeds 32 MiB cap.");
                    var target = System.IO.Path.Combine(outDir, $"{i:D6}.bin");
                    SaveBytes(target, part);
                    entries.Add(new { index = i, hash = $"{arc.SFAT.Entries[i].FileNameHash:X8}", size = part.Length });
                }
                SaveJson(dest + ".manifest.json", entries);
                outputs.AddRange([outDir, dest + ".manifest.json"]);
            }
            else if (ext is ".gfpak" or ".gfpck")
            {
                if (data.Length < 24 || BitConverter.ToUInt64(data) != GFPack.Magic)
                    return new(relative, "unsupported", sha, bytes, [], "Not a GFLXPACK container.");
                var arc = new GFPack(data);
                if (arc.Count > 10000)
                    return new(relative, "unsupported", sha, bytes, [], "GFPack has too many members.");
                var outDir = dest + ".files";
                Directory.CreateDirectory(outDir);
                var entries = new List<object>();
                for (int i = 0; i < arc.Count; ++i)
                {
                    var part = arc.DecompressedFiles[i];
                    if (part.Length > 32 * 1024 * 1024)
                        throw new InvalidDataException("GFPack entry exceeds 32 MiB cap.");
                    SaveBytes(System.IO.Path.Combine(outDir, $"{i:D6}_{arc.HashAbsolute[i].HashFnv1aPathFull:X16}.bin"), part);
                    entries.Add(new { index = i, pathHash = $"{arc.HashAbsolute[i].HashFnv1aPathFull:X16}", size = part.Length });
                }
                SaveJson(dest + ".manifest.json", entries);
                outputs.AddRange([outDir, dest + ".manifest.json"]);
            }
            else
                return new(relative, "unsupported", sha, bytes, [], "No verified pkNX parser for this format.");

            return new(relative, "decoded", sha, bytes,
                outputs.Select(x => System.IO.Path.GetRelativePath(outputRoot, x).Replace('\\', '/')).ToArray());
        }
        catch (Exception ex)
        {
            return new(relative, "error", sha, bytes, [], $"{ex.GetType().Name}: {ex.Message}");
        }
    }

    private static string Escape(string input) => input.Replace("\\", "\\\\").Replace("\t", "\\t").Replace("\r", "\\r").Replace("\n", "\\n");
    private static void SaveText(string path, IEnumerable<string> lines)
    {
        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(path)!);
        File.WriteAllLines(path, lines, new UTF8Encoding(false));
    }
    private static void SaveJson<T>(string path, T value)
    {
        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(path)!);
        File.WriteAllText(path, JsonSerializer.Serialize(value, Json) + "\n", new UTF8Encoding(false));
    }
    private static void SaveBytes(string path, byte[] value)
    {
        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(path)!);
        File.WriteAllBytes(path, value);
    }
}
