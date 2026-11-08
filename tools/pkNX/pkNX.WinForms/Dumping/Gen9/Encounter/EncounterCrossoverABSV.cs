using System;
using System.Collections.Generic;
using pkNX.Structures.FlatBuffers.SV;

namespace pkNX.Structures.FlatBuffers;

/// <summary>
/// Opt-in original-source-only Kitakami (CrossFrom=158) geometry A/B.
/// Reference PKHeX data is NEVER read here. Baseline is byte-for-byte unchanged.
/// Experiments are counterfactual diagnostics, not validated gameplay legality.
/// </summary>
public static class EncounterCrossoverABSV
{
    public const string Baseline = "baseline";
    public const string WorldEndStrict = "kitakami-158-worldend-strict";
    public const string WorldEndExclude = "kitakami-158-worldend-exclude";
    public const string ExactSourceArea = "kitakami-158-exact-source-area";
    public const string PreferSpecificOwner = "kitakami-158-prefer-specific-owner";
    public const string StrictPreferSpecificOwner = "kitakami-158-strict-prefer-specific-owner";
    public const string WorldEnd = "subarea_su01worldend";
    public const string KitakamiPointAsset = "world/data/encount/point_data/point_data/encount_data_su1.bin";
    private static HashSet<(string Asset, int Index)>? SpecificOwnedPoints;

    public static int SpecificOwnerSourceLocation { get; private set; }
    public static int SpecificOwnerLocalPointRecords { get; private set; }
    public static int SpecificOwnerWorldEndDistinctPoints { get; private set; }
    public static int SpecificOwnerSpecificDistinctPoints { get; private set; }
    public static int SpecificOwnerOverlapDistinctPoints { get; private set; }
    public static int SpecificOwnerWorldEndOnlyDistinctPoints { get; private set; }

    public static object? SpecificOwnerEvidence => UsesSpecificOwnerEvidence ? new
    {
        sourceLocation = SpecificOwnerSourceLocation,
        sourcePointAsset = KitakamiPointAsset,
        localPointRecords = SpecificOwnerLocalPointRecords,
        worldEndDistinctPoints = SpecificOwnerWorldEndDistinctPoints,
        specificOwnerDistinctPoints = SpecificOwnerSpecificDistinctPoints,
        overlapDistinctPoints = SpecificOwnerOverlapDistinctPoints,
        worldEndOnlyDistinctPoints = SpecificOwnerWorldEndOnlyDistinctPoints,
        identity = "ORIGINAL_POINT_ASSET_PLUS_ARRAY_ORDINAL_SCOPED_TO_LOCATION_158"
    } : null;

    public static string Mode { get; private set; } = Baseline;
    public static bool Enabled => Mode != Baseline;

    public static void Configure(string mode)
    {
        if (Mode != Baseline)
            throw new InvalidOperationException("Original Kitakami crossover A/B has already been configured");
        if (mode is not (Baseline or WorldEndStrict or WorldEndExclude or ExactSourceArea or PreferSpecificOwner or StrictPreferSpecificOwner))
            throw new ArgumentException("Invalid original source-gated Kitakami crossover A/B mode", nameof(mode));
        Mode = mode;
    }

    public static bool UsesSpecificOwnerEvidence =>
        Mode is PreferSpecificOwner or StrictPreferSpecificOwner;

    /// <summary>
    /// Called AFTER all original Kitakami colliders load their real point arrays.
    /// The key is original PointData source file + ordinal, not rounded XYZ.
    /// Only the opt-in A/B modes read this set.
    /// </summary>
    public static void SetSpecificOwnerIndex(
        int sourceLocation, int localPointRecords,
        HashSet<(string Asset, int Index)> worldEndPoints,
        HashSet<(string Asset, int Index)> specificOwnerPoints)
    {
        if (!UsesSpecificOwnerEvidence || SpecificOwnedPoints is not null)
            throw new InvalidOperationException("Kitakami specific owner evidence unavailable or configured twice");
        if (sourceLocation != 158 || localPointRecords <= 0 ||
            worldEndPoints.Count == 0 || specificOwnerPoints.Count == 0)
            throw new InvalidOperationException("Original PointData ownership evidence is empty or outside CrossFrom=158");

        // Only points that are both WorldEnd-owned and specifically owned
        // inside the SAME PKHeX source location 158 are suppressible.
        SpecificOwnedPoints = worldEndPoints.Intersect(specificOwnerPoints).ToHashSet();
        SpecificOwnerSourceLocation = sourceLocation;
        SpecificOwnerLocalPointRecords = localPointRecords;
        SpecificOwnerWorldEndDistinctPoints = worldEndPoints.Count;
        SpecificOwnerSpecificDistinctPoints = specificOwnerPoints.Count;
        SpecificOwnerOverlapDistinctPoints = SpecificOwnedPoints.Count;
        SpecificOwnerWorldEndOnlyDistinctPoints = worldEndPoints.Except(specificOwnerPoints).Count();
        if (SpecificOwnerOverlapDistinctPoints + SpecificOwnerWorldEndOnlyDistinctPoints != SpecificOwnerWorldEndDistinctPoints)
            throw new InvalidOperationException("Original PointData owner partition does not reconcile");
    }

    public static bool HasSpecificOwner(LocationPointDetail point) =>
        SpecificOwnedPoints?.Contains((point.SourcePointAsset, point.SourcePointIndex)) ?? false;

    public static bool Accept(
        PaldeaFieldIndex fieldIndex, int sourceLocation,
        string sourceLookupArea, IContainsV3f targetCollider, LocationPointDetail sourcePoint)
    {
        // Absolutely no alternate behavior for any map other than Kitakami,
        // any source location other than 158, or the ordinary baseline run.
        if (!Enabled || fieldIndex != PaldeaFieldIndex.Kitakami || sourceLocation != 158)
            return EncounterDumperSV.IsContainedBy(targetCollider, sourcePoint.Point.Position);

        string owner = sourcePoint.SourceCollisionArea;
        bool worldEnd = owner == WorldEnd;
        switch (Mode)
        {
            case PreferSpecificOwner or StrictPreferSpecificOwner when worldEnd:
                if (SpecificOwnedPoints is null)
                    throw new InvalidOperationException("Original PointData owner index missing; cannot run isolated A/B");
                if (HasSpecificOwner(sourcePoint))
                    return false;
                if (Mode == StrictPreferSpecificOwner)
                    return targetCollider.ContainsPoint(sourcePoint.X, sourcePoint.Y, sourcePoint.Z);
                return EncounterDumperSV.IsContainedBy(targetCollider, sourcePoint.Point.Position);
            case WorldEndStrict when worldEnd:
                return targetCollider.ContainsPoint(sourcePoint.X, sourcePoint.Y, sourcePoint.Z);
            case WorldEndExclude when worldEnd:
                return false;
            case ExactSourceArea when owner != sourceLookupArea:
                // In particular, the large original WorldEnd collider was not
                // one of the four named lookup colliders: this is a counterfactual
                // source-ownership filter, NOT a proven gameplay rule.
                return false;
            default:
                return EncounterDumperSV.IsContainedBy(targetCollider, sourcePoint.Point.Position);
        }
    }
}
