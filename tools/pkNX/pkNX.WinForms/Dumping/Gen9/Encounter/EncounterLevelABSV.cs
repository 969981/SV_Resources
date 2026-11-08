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
    public const string RawPointRange = "terarium-176-194-raw-point-levels";
    public const string RawPointMinOnly = "terarium-176-194-raw-point-min-only";
    public const string RawPointMaxOnly = "terarium-176-194-raw-point-max-only";

    public static string Mode { get; private set; } = Baseline;
    public static bool Enabled => Mode != Baseline;

    public static void Configure(string mode)
    {
        if (Mode != Baseline)
            throw new InvalidOperationException("Original SV 4.0.0 isolated A/B mode has already been set");
        if (mode is not (Baseline or OnlyUnadjusted or OnlyAdjusted or StrictOverlap or RawPointRange or RawPointMinOnly or RawPointMaxOnly))
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

    public static bool UseRawPointMin(PaldeaFieldIndex fieldIndex, int location) =>
        IsTarget(fieldIndex, location) && Mode is RawPointRange or RawPointMinOnly;

    public static bool UseRawPointMax(PaldeaFieldIndex fieldIndex, int location) =>
        IsTarget(fieldIndex, location) && Mode is RawPointRange or RawPointMaxOnly;

    public static bool UseRawPointRange(PaldeaFieldIndex fieldIndex, int location) =>
        UseRawPointMin(fieldIndex, location) && UseRawPointMax(fieldIndex, location);
}
