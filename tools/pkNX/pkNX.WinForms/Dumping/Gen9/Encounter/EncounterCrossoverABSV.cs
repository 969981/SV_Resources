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
    private const string WorldEnd = "subarea_su01worldend";
    private static HashSet<(string Asset, int Index)>? SpecificOwnedPoints;

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
    public static void SetSpecificOwnerIndex(HashSet<(string Asset, int Index)> identities)
    {
        if (!UsesSpecificOwnerEvidence || SpecificOwnedPoints is not null || identities.Count == 0)
            throw new InvalidOperationException("Kitakami specific owner evidence unavailable or configured twice");
        SpecificOwnedPoints = identities;
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
