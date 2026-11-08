using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.Json;
using pkNX.Structures.FlatBuffers.SV;

namespace pkNX.Structures.FlatBuffers;

/// <summary>
/// One-point, opt-in Kitakami source-area filter counterfactual.
/// It changes only PointData #5046 inside LocationStorage 158.
/// The default storage-area filter remains untouched.
/// </summary>
public static class EncounterAreaFilterABSV
{
    public const string Baseline = "baseline";
    public const string Point5046SourceArea = "kitakami-158-point5046-source-area-filter";

    private static readonly HashSet<(int Criteria, int Species)> Probed = [];
    private static readonly List<object> ProbeResults = [];
    public static string Mode { get; private set; } = Baseline;
    public static bool Enabled => Mode != Baseline;

    public static void Configure(string mode)
    {
        if (Mode != Baseline)
            throw new InvalidOperationException("Original SV area-filter A/B mode has already been configured");
        if (mode is not (Baseline or Point5046SourceArea))
            throw new ArgumentException("Invalid original SV area-filter A/B mode", nameof(mode));
        Mode = mode;
        Probed.Clear();
        ProbeResults.Clear();
    }

    public static bool IsPoint5046Source(
        PaldeaFieldIndex fieldIndex, int location, LocationPointDetail point) =>
        fieldIndex == PaldeaFieldIndex.Kitakami &&
        location == 158 &&
        point.SourcePointAsset == EncounterCrossoverABSV.KitakamiPointAsset &&
        point.SourcePointIndex == 5046 &&
        point.SourceCollisionArea == EncounterCrossoverABSV.WorldEnd;

    public static bool UsePointSourceArea(
        PaldeaFieldIndex fieldIndex, int location, LocationPointDetail point) =>
        Mode == Point5046SourceArea && IsPoint5046Source(fieldIndex, location, point);

    public static void RecordProbe(object result) => ProbeResults.Add(result);

    public static void WriteProbeReport(string path)
    {
        if (ProbeResults.Count != 7)
            throw new InvalidDataException($"Expected seven original PointData #5046 area-filter probes, got {ProbeResults.Count}");
        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(path))!);
        var report = new
        {
            status = "ORIGINAL_SV400_POINT5046_SOURCE_AREA_FILTER_PROBES_NOT_GAME_LEGALITY",
            sourcePointAsset = EncounterCrossoverABSV.KitakamiPointAsset,
            sourcePointIndex = 5046,
            sourceLocation = 158,
            activeMode = Mode,
            expectedCriteria = new[] { 40, 41, 74, 110, 111, 112, 113 },
            probeCount = ProbeResults.Count,
            probes = ProbeResults
        };
        File.WriteAllText(path, JsonSerializer.Serialize(report, new JsonSerializerOptions { WriteIndented = true }) + "\n",
            new UTF8Encoding(false));
    }

    public static bool IsPoint5046ProbeTarget(
        PaldeaFieldIndex fieldIndex, int location, LocationPointDetail point,
        int criteriaIndex, int nationalSpecies)
    {
        if (!EncounterTraceSV.Enabled || !IsPoint5046Source(fieldIndex, location, point))
            return false;

        bool target = (nationalSpecies, criteriaIndex) switch
        {
            (129, 40 or 41) => true,
            (194, 74) => true,
            (313, 110 or 111) => true,
            (314, 112 or 113) => true,
            _ => false,
        };
        return target && Probed.Add((criteriaIndex, nationalSpecies));
    }
}
