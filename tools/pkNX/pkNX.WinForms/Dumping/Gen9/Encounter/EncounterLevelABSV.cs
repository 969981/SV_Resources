using System;

namespace pkNX.Structures.FlatBuffers;

/// <summary>
/// Explicitly opt-in isolated source-backed Gen9 A/B switches. All changes
/// operate only on the Terarium locations 176 or 194, never the normal game
/// encounter exporter. Run with verified original sources and separate output.
/// </summary>
public static class EncounterLevelABSV
{
    public const string Baseline = "baseline";
    public const string OnlyUnadjusted = "terarium-176-194-unadjusted-only";
    public const string OnlyAdjusted = "terarium-176-194-adjusted-only";
    public const string StrictOverlap = "terarium-176-194-strict-overlap";

    public static string Mode { get; private set; } = Baseline;
    public static bool Enabled => Mode != Baseline;

    public static void Configure(string mode)
    {
        if (Mode != Baseline)
            throw new InvalidOperationException("Original SV 4.0.0 isolated A/B mode has already been set");
        if (mode is not (Baseline or OnlyUnadjusted or OnlyAdjusted or StrictOverlap))
            throw new ArgumentException("Invalid isolated native SV level experiment mode", nameof(mode));
        Mode = mode;
    }

    public static bool IsTarget(PaldeaFieldIndex fieldIndex, int location) =>
        fieldIndex == PaldeaFieldIndex.Terarium && location is (176 or 194);

    public static bool AllowUnadjusted(PaldeaFieldIndex fieldIndex, int location, int boost) =>
        !IsTarget(fieldIndex, location) || Mode != OnlyAdjusted || boost == 0;

    public static bool AllowAdjusted(PaldeaFieldIndex fieldIndex, int location) =>
        !IsTarget(fieldIndex, location) || Mode != OnlyUnadjusted;

    public static bool UseStrictOverlap(PaldeaFieldIndex fieldIndex, int location) =>
        IsTarget(fieldIndex, location) && Mode == StrictOverlap;
}
