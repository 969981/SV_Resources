using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using PKHeX.Core;

namespace PKHeX.Gen9LegalityProbe;

/// <summary>
/// Real Gen9 legality regression, pinned to the SAME PKHeX.Core commit as
/// encounter reference data. Read-only curated PK9 fixtures from PKHeX's own
/// test suite, mutation negative controls, and ORIGINAL regenerated encounters.
/// Never present synthetic test fixtures as captured SV game specimens.
/// </summary>
internal static class Program
{
    private static readonly JsonSerializerOptions Json = new() { WriteIndented = true };
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
        string? output=null;
        try
        {
            var parameters=Arguments(args);
            output=Path.GetFullPath(parameters["--output"]);
            string suite=Path.GetFullPath(parameters["--pkhex-tests"]);
            string? native=parameters.TryGetValue("--native-output",out var original)
                ? Path.GetFullPath(original) : null;
            var source=Path.Combine(suite,"Legality","Legal");
            if (!Directory.Exists(source))
                throw new DirectoryNotFoundException($"Official PKHeX Gen9 Legal fixtures missing: {source}");
            Directory.CreateDirectory(output);
            var fixtures=Directory.GetFiles(source,"*.pk9",SearchOption.AllDirectories)
                .OrderBy(x=>x,StringComparer.Ordinal).ToArray();
            if (fixtures.Length < 6)
                throw new InvalidDataException($"Expected >=6 actual PKHeX Core tests .pk9, found {fixtures.Length}");

            var fixtureRows=new List<object>();
            int fixtureValid=0, mutInvalid=0, fixtureParsed=0;
            foreach (var file in fixtures)
            {
                var raw=File.ReadAllBytes(file);
                if (raw.Length!=344)
                    throw new InvalidDataException($"Invalid PK9 sample size: {file} {raw.Length}");
                var pk=new PK9(raw);
                var result=Analyze(pk);
                if (result.Parsed) fixtureParsed++;
                if (result.Valid) fixtureValid++;
                // Original PK9 test source remains unchanged; the mutation is
                // explicitly NOT a 'real' captured PK9 sample.
                var negative=pk.Clone();
                negative.MetLevel=0;
                negative.RefreshChecksum();
                var invalid=Analyze(negative);
                if (result.Valid && !invalid.Valid) mutInvalid++;
                fixtureRows.Add(new {
                    sourcePath=Path.GetRelativePath(suite,file).Replace('\\','/'),
                    originalSourceSHA256=Sha(raw),
                    original=result,
                    negativeControl="COPY_WITH_METLEVEL_ZERO_REFRESHED_CHECKSUM",
                    modified=invalid
                });
            }

            var nativeRows=new Dictionary<string, object>();
            if (native is not null)
            {
                var evidence=Path.Combine(native,"native-encounter-build.json");
                if (!File.Exists(evidence))
                    throw new FileNotFoundException("Cannot evaluate native game PK9 candidates without a native SHA source attestation",evidence);
                using var doc=JsonDocument.Parse(File.ReadAllBytes(evidence));
                var b=doc.RootElement;
                var status=b.GetProperty("status").GetString();
                if (status is not ("GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES" or
                                   "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES_PARTIAL"))
                    throw new InvalidDataException("No successful native encounter generation provenance");
                var manifest=new Dictionary<string,(long Size,string Sha)>(StringComparer.Ordinal);
                foreach (var table in b.GetProperty("generated").EnumerateArray())
                {
                    var name=table.GetProperty("name").GetString() ?? "";
                    if (!NativeNames.Contains(name))
                        throw new InvalidDataException("Unrecognized game-native legality template name");
                    manifest.Add(name,(table.GetProperty("bytes").GetInt64(),
                                       table.GetProperty("sha256").GetString()??""));
                }
                var tr=new SimpleTrainerInfo(GameVersion.SL)
                {
                    OT="Research",
                    Gender=0,
                    Language=(int)LanguageID.English,
                    TID16=2026,
                    SID16=1107,
                };
                foreach (var (name,(size,hash)) in manifest)
                {
                    var file=Path.Combine(native,name);
                    var raw=File.ReadAllBytes(file);
                    if (raw.LongLength!=size || Sha(raw)!=hash)
                        throw new InvalidDataException($"Native .pkl SHA mismatch: {name}");
                    var checks=new List<object>();
                    int attempted=0,valid=0,parse=0,matchingTemplateType=0;
                    IEnumerable<PK9> samples=GetCandidates(name,raw,tr);
                    foreach (var pk in samples.Take(32))
                    {
                        attempted++;
                        var result=Analyze(pk);
                        if (result.Valid) valid++;
                        if (result.Parsed) parse++;
                        var expectedMatch=name.Contains("wild") ? "EncounterSlot9"
                            : name.Contains("fixed") ? "EncounterFixed9" : "EncounterTera9";
                        if (result.MatchedEncounterType==expectedMatch)
                            matchingTemplateType++;
                        checks.Add(new {
                            species=pk.Species,form=pk.Form,metLocation=pk.MetLocation,
                            metLevel=pk.MetLevel,version=pk.Version.ToString(),
                            pid=$"{pk.PID:X8}", ivs=new [] { pk.IV_HP, pk.IV_ATK, pk.IV_DEF, pk.IV_SPA, pk.IV_SPD, pk.IV_SPE },legal=result
                        });
                    }
                    nativeRows[name]=new {
                        status="ACTUAL_PKHEX_LEGALITYANALYSIS_RUN_NOT_DATASET_PROOF",
                        tableSHA256=hash,attempted,parsed=parse,valid,
                        exactEncounterClassMatched=matchingTemplateType,
                        sampleDetails=checks
                    };
                }
            }
            var final=new {
                status=fixtureParsed==fixtures.Length && fixtureValid==fixtures.Length && mutInvalid>=1
                    ? (nativeRows.Count>0 ? "REFERENCE_PK9_BASELINE_AND_NATIVE_CANDIDATE_ANALYSIS_RUN"
                        : "REAL_REFERENCE_PK9_BASELINE_ONLY_NATIVE_DATA_NOT_LOADED")
                    : "REFERENCE_PK9_BASELINE_FAILURE",
                pkhexSource="kwsch/PKHeX @ 0660d1e1f4924b8478daec73281bb8071a82ad19",
                actualOriginalPk9Fixtures=fixtures.Length,
                validOfficialReferenceFixtures=fixtureValid,
                parsedOfficialFixtures=fixtureParsed,
                invalidMutationControls=mutInvalid,
                sourceSamplesFromOfficialPKHeXTests=fixtureRows,
                nativeTemplateSampleChecks=nativeRows,
                limitations=new []{
                    "Official PKHeX public PK9 fixtures are not samples captured from native 4.0.0 game play.",
                    "Native candidates are generated from native templates, not independently captured PK9 game records.",
                    "LegalityAnalysis consumes its embedded reference databases; native-candidate success is a compatibility smoke test, NOT a replacement-resource engine test.",
                    "Full SV4.0.0 source-to-PKHeX parity also needs byte/semantic table comparison, dynamic TRCOL closure and version/RNG checks.",
                    "A generic 0-met-level negative control does NOT validate shiny locks, Tera raid RNG or HOME transfer rules.",
                }
            };
            var path=Path.Combine(output,"pk9-legality-analysis.json");
            File.WriteAllText(path,JsonSerializer.Serialize(final,Json)+"\n",Encoding.UTF8);
            Console.WriteLine(JsonSerializer.Serialize(new{
                final.status,final.actualOriginalPk9Fixtures,final.validOfficialReferenceFixtures,
                final.invalidMutationControls,nativeTables=nativeRows.Count},Json));
            return final.status=="REFERENCE_PK9_BASELINE_FAILURE" ? 2 : 0;
        }
        catch(Exception ex)
        {
            Console.Error.WriteLine($"PKHEX_REAL_PK9_CHECK_BLOCKED: {ex.GetType().Name}: {ex.Message}");
            if (output is not null)
            {
                Directory.CreateDirectory(output);
                File.WriteAllText(Path.Combine(output,"pk9-legality-failure.json"),
                    JsonSerializer.Serialize(new { status="BLOCKED",error=ex.ToString() },Json)+"\n");
            }
            return 3;
        }
    }

    private static AnalysisResult Analyze(PK9 pk)
    {
        var report=new LegalityAnalysis(pk);
        return new AnalysisResult(
            report.Parsed,report.Valid,
            report.EncounterMatch?.GetType().Name ?? "null",
            report.Results.Where(x=>!x.Valid).Select(x=>new FailureResult(
                x.Identifier.ToString(),x.Result.ToString(),x.Judgement.ToString())).ToArray());
    }

    private sealed record FailureResult(string Identifier,string Code,string Severity);
    private sealed record AnalysisResult(bool Parsed,bool Valid,string MatchedEncounterType,FailureResult[] InvalidChecks);

    private static IEnumerable<PK9> GetCandidates(string name,byte[] data,SimpleTrainerInfo trainer)
    {
        if (name.Contains("wild",StringComparison.Ordinal))
        {
            if (data.Length<8 || data[0]!='s' || data[1]!='v')
                throw new InvalidDataException("Native BinLinker wild stream has wrong magic");
            var areas=EncounterArea9.GetAreas(BinLinkerAccessor.Get(data),GameVersion.SV);
            foreach (var area in areas)
            foreach (var slot in area.Slots)
            {
                if (slot.Species==0 || slot.LevelMin==0) continue;
                PK9? candidate=null;
                try { candidate=slot.ConvertToPKM(trainer); }
                catch (Exception e) { Console.Error.WriteLine($"Native wild candidate {slot.Species}: {e.Message}"); }
                if (candidate is not null) yield return candidate;
            }
        }
        else if (name.Contains("fixed",StringComparison.Ordinal))
        {
            if (data.Length%20!=0) throw new InvalidDataException("Fixed format stride != 20");
            foreach(var slot in EncounterFixed9.GetArray(data))
            {
                if (slot.Species==0 || slot.Level==0) continue;
                PK9? candidate=null;
                try { candidate=slot.ConvertToPKM(trainer); }
                catch (Exception e) { Console.Error.WriteLine($"Native fixed candidate {slot.Species}: {e.Message}"); }
                if (candidate is not null) yield return candidate;
            }
        }
        else
        {
            if (data.Length%24!=0) throw new InvalidDataException("Raid format stride != 24");
            var map=name.Contains("kitakami")?TeraRaidMapParent.Kitakami:
                name.Contains("blueberry")?TeraRaidMapParent.Blueberry:TeraRaidMapParent.Paldea;
            foreach (var slot in EncounterTera9.GetArray(data,map))
            {
                if (slot.Species==0 || slot.Level==0) continue;
                PK9? candidate=null;
                try { candidate=slot.ConvertToPKM(trainer); }
                catch (Exception e) { Console.Error.WriteLine($"Native raid candidate {slot.Species}: {e.Message}"); }
                if (candidate is not null) yield return candidate;
            }
        }
    }

    private static string Sha(byte[] data) => Convert.ToHexString(SHA256.HashData(data));

    private static Dictionary<string,string> Arguments(string[] args)
    {
        var d=new Dictionary<string,string>(StringComparer.Ordinal);
        for (var i=0;i<args.Length;i+=2)
        {
            if (i+1==args.Length || !args[i].StartsWith("--",StringComparison.Ordinal) || !d.TryAdd(args[i],args[i+1]))
                throw new ArgumentException("Usage: --pkhex-tests <pinned Tests folder> --output <report folder> [--native-output <original generated pkl folder>]");
        }
        if (!d.ContainsKey("--pkhex-tests") || !d.ContainsKey("--output") ||
            d.Keys.Any(x=>x is not ("--pkhex-tests" or "--output" or "--native-output")))
            throw new ArgumentException("Required --pkhex-tests and --output");
        return d;
    }
}
