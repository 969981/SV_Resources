using System;
using System.Collections.Generic;
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
    }

    public static bool UsePointSourceArea(
        PaldeaFieldIndex fieldIndex, int location, LocationPointDetail point) =>
        Mode == Point5046SourceArea &&
        fieldIndex == PaldeaFieldIndex.Kitakami &&
        location == 158 &&
        point.SourcePointAsset == EncounterCrossoverABSV.KitakamiPointAsset &&
        point.SourcePointIndex == 5046;

    public static bool IsPoint5046ProbeTarget(
        PaldeaFieldIndex fieldIndex, int location, LocationPointDetail point,
        int criteriaIndex, int nationalSpecies)
    {
        if (!EncounterTraceSV.Enabled ||
            fieldIndex != PaldeaFieldIndex.Kitakami || location != 158 ||
            point.SourcePointAsset != EncounterCrossoverABSV.KitakamiPointAsset ||
            point.SourcePointIndex != 5046)
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
