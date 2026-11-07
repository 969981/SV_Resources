using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using PKHeX.Core;

namespace PKHeX.Gen9EventLegalityProbe;

/// <summary>
/// Executes real PKHeX.Core LegalityAnalysis against pinned event templates.
/// Template-generated PK9 are NEVER described as independently captured in game.
/// </summary>
internal static class Program
{
    private const string Pin = "0660d1e1f4924b8478daec73281bb8071a82ad19";
    private static readonly JsonSerializerOptions Json = new() { WriteIndented = true };

    private static int Main(string[] args)
    {
        string? output = null;
        try
        {
            var opts = ReadArgs(args);
            var root = Path.GetFullPath(opts["--pkhex-root"]);
            var evidence = Path.GetFullPath(opts["--source-manifest"]);
            output = Path.GetFullPath(opts["--output"]);
            Directory.CreateDirectory(output);
            using var doc = JsonDocument.Parse(File.ReadAllBytes(evidence));
            var meta = doc.RootElement;
            if (meta.GetProperty("pkhex_commit").GetString() != Pin ||
                meta.GetProperty("status").GetString() !=
                  "SOURCE_VERIFIED_PINNED_PKHEX_EVENT_INDEX_NOT_LIVE_EVENT_OR_RNG_PROOF")
                throw new InvalidDataException("Event source provenance mismatch");
            var rootSource = Path.Combine(root,"PKHeX.Core","Resources","legality","wild","Gen9");
            var trainer = new SimpleTrainerInfo(GameVersion.SL)
            {
                OT="SV Reference",
                Gender=0,
                Language=(int)LanguageID.English,
                TID16=2026,
                SID16=1107,
            };
            var result = new Dictionary<string,object>();
            var sourceHashes = new Dictionary<string,string>();
            foreach (string kind in new[] { "distribution_tera_raid", "mighty_tera_raid", "distribution_outbreak" })
            {
                var source = meta.GetProperty("sources").GetProperty(kind);
                var file = Path.Combine(rootSource,source.GetProperty("file").GetString()!);
                var bytes = File.ReadAllBytes(file);
                var hash = Convert.ToHexString(SHA256.HashData(bytes));
                if (!string.Equals(hash,source.GetProperty("sha256").GetString(),StringComparison.Ordinal) ||
                    (kind == "distribution_tera_raid" && bytes.Length != 174*62) ||
                    (kind == "mighty_tera_raid" && bytes.Length != 56*62) ||
                    (kind == "distribution_outbreak" && bytes.Length != 12636*28))
                    throw new InvalidDataException($"Pinned source SHA/size mismatch: {kind}");
                sourceHashes.Add(kind,hash);
                result[kind] = kind switch
                {
                    "distribution_tera_raid" => Probe(
                        EncounterDist9.GetArray(bytes), x => x.ConvertToPKM(trainer),
                        kind,"EncounterDist9"),
                    "mighty_tera_raid" => Probe(
                        EncounterMight9.GetArray(bytes), x => x.ConvertToPKM(trainer),
                        kind,"EncounterMight9"),
                    "distribution_outbreak" => Probe(
                        EncounterOutbreak9.GetArray(bytes), x => x.ConvertToPKM(trainer),
                        kind,"EncounterOutbreak9"),
                    _ => throw new ArgumentOutOfRangeException(nameof(kind)),
                };
            }

            var official = new List<object>();
            int officialValid=0, officialNegativeInvalid=0;
            string testRoot=Path.Combine(root,"Tests","PKHeX.Core.Tests","Legality","Legal");
            if (!Directory.Exists(testRoot))
                throw new DirectoryNotFoundException("Pinned official PK9 sample tree missing");
            var pk9Paths = Directory.GetFiles(testRoot,"*.pk9",SearchOption.AllDirectories)
                .OrderBy(x=>x,StringComparer.Ordinal).ToArray();
            if (pk9Paths.Length < 6)
                throw new InvalidDataException($"Expected at least 6 official PK9 fixtures, got {pk9Paths.Length}");
            foreach (var path in pk9Paths.Take(12))
            {
                var data=File.ReadAllBytes(path);
                if (data.Length != 344)
                    throw new InvalidDataException("Malformed pinned PKHeX official PK9 fixture");
                var pk = new PK9(data);
                var analysis = new LegalityAnalysis(pk);
                if (analysis.Valid) officialValid++;
                var bad = pk.Clone();
                bad.MetLevel = 0;
                bad.RefreshChecksum();
                var negative = new LegalityAnalysis(bad);
                if (!negative.Valid) officialNegativeInvalid++;
                official.Add(new {
                    relativeFile=Path.GetRelativePath(root,path).Replace('\\','/'),
                    sha256=Convert.ToHexString(SHA256.HashData(data)),
                    parsed=analysis.Parsed,valid=analysis.Valid,
                    encounter=analysis.EncounterMatch?.GetType().Name ?? "null",
                    changedMetLevel0Valid=negative.Valid,
                });
            }
            var status = officialValid == official.Count && officialNegativeInvalid > 0
                ? "REAL_PKHEX_LEGALITYANALYSIS_EXECUTED_ON_PINNED_EVENT_TEMPLATE_PK9_NOT_GAME_CAPTURED"
                : "OFFICIAL_PK9_CONTROL_FAILED";
            var payload = new {
                status,
                pkhexCommit=Pin,
                eventSources=sourceHashes,
                templateGeneratedCandidateAnalysis=result,
                sourceLabel="REFERENCE_TEMPLATES_GENERATED_INDEPENDENT_FROM_REAL_GAME_CAPTURE",
                officialPK9FixtureCount=official.Count,
                officialPK9ValidCount=officialValid,
                officialPK9NegativeControlsRejected=officialNegativeInvalid,
                officialCases=official,
                limitations = new[] {
                    "Actual LegalityAnalysis executed; source PK9 from PKHeX ConvertToPKM is synthetic, not original game saves.",
                    "Event templates may be historical and no current event activation was tested.",
                    "Valid PK9 can match another encounter class; exact matched encounter type is separately recorded.",
                    "This does NOT close native 4.0.0 PID, EC, IV, shiny RNG or map/cross-region reachability.",
                },
            };
            var target=Path.Combine(output,"sv400-pkhex-event-legality-smoke.json");
            File.WriteAllText(target,JsonSerializer.Serialize(payload,Json)+"\n",new UTF8Encoding(false));
            Console.WriteLine(JsonSerializer.Serialize(new {
                status, officialPK9Fixtures=official.Count,
                officialValid, officialNegativeInvalid, sources=sourceHashes.Count
            },Json));
            return status == "OFFICIAL_PK9_CONTROL_FAILED" ? 2 : 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine($"PKHEX_EVENT_LEGALITY_PROBE_BLOCKED: {ex}");
            if (output is not null)
            {
                Directory.CreateDirectory(output);
                File.WriteAllText(Path.Combine(output,"sv400-pkhex-event-legality-failure.json"),
                    JsonSerializer.Serialize(new { status="BLOCKED", error=ex.ToString() },Json)+"\n");
            }
            return 3;
        }
    }

    private static object Probe<T>(IReadOnlyList<T> templates, Func<T,PK9> make,
                                    string kind,string expectedClass)
    {
        if (templates.Count == 0)
            throw new InvalidDataException($"{kind}: no templates");
        int attempted=0,parsed=0,valid=0,matchClass=0,negativeRejected=0,conversionErrors=0;
        var samples=new List<object>();
        const int maxCases=20;
        for(int i=0;i<Math.Min(maxCases,templates.Count);i++)
        {
            int idx=(int)((long)i*(templates.Count-1)/Math.Max(1,Math.Min(maxCases,templates.Count)-1));
            attempted++;
            try
            {
                var pk=make(templates[idx]);
                pk.RefreshChecksum();
                var a=new LegalityAnalysis(pk);
                if (a.Parsed) parsed++;
                if (a.Valid) valid++;
                string match=a.EncounterMatch?.GetType().Name ?? "null";
                if (match==expectedClass) matchClass++;
                var wrong=pk.Clone();
                wrong.MetLevel=0;
                wrong.RefreshChecksum();
                var n=new LegalityAnalysis(wrong);
                if (!n.Valid) negativeRejected++;
                samples.Add(new {
                    recordIndex=idx,pk.Species,pk.Form,pk.MetLocation,pk.MetLevel,
                    pid=pk.PID.ToString("X8"), ec=pk.EncryptionConstant.ToString("X8"),
                    ivs=new[] {pk.IV_HP,pk.IV_ATK,pk.IV_DEF,pk.IV_SPA,pk.IV_SPD,pk.IV_SPE},
                    shiny=pk.IsShiny,actualValid=a.Valid,actualParsed=a.Parsed,
                    matchedEncounterClass=match,expectedEncounterClass=expectedClass,
                    isExpectedClass=match==expectedClass,
                    illegalMetLevel0Rejected=!n.Valid,
                    invalidChecks=a.Results.Where(z=>!z.Valid)
                        .Select(z=>new {identifier=z.Identifier.ToString(),
                            result=z.Result.ToString(),severity=z.Judgement.ToString()}).ToArray(),
                });
            }
            catch (Exception ex)
            {
                conversionErrors++;
                samples.Add(new { recordIndex=idx, conversionError=ex.GetType().Name+": "+ex.Message });
            }
        }
        return new { kind,sourceTemplateCount=templates.Count,attempted,parsed,valid,
                     expectedClassMatches=matchClass,negativeControlsRejected=negativeRejected,
                     conversionErrors,samples };
    }

    private static Dictionary<string,string> ReadArgs(string[] args)
    {
        var result=new Dictionary<string,string>(StringComparer.Ordinal);
        for(int i=0;i<args.Length;i+=2)
        {
            if(i+1>=args.Length || !args[i].StartsWith("--",StringComparison.Ordinal) ||
               !result.TryAdd(args[i],args[i+1]))
                throw new ArgumentException("Expected --pkhex-root DIR --source-manifest JSON --output DIR");
        }
        if(result.Count!=3 || !result.ContainsKey("--pkhex-root") ||
           !result.ContainsKey("--source-manifest") || !result.ContainsKey("--output"))
            throw new ArgumentException("Expected --pkhex-root DIR --source-manifest JSON --output DIR");
        return result;
    }
}
