using System;
using System.Collections.Generic;

namespace pkNX.Structures.FlatBuffers;

/// <summary>
/// Experimental only. Preserve exact original collision-owner boundaries for
/// Terarium 178 local, and 178->180/192 crossover slots before any dedup/Absorb.
/// Baseline remains the default and is byte-for-byte untouched.
/// </summary>
public static class EncounterOwnerABSV
{
    public const string Baseline = "baseline";
    public const string SourceCollider178 = "terarium-178-source-collider";
    public static string Mode { get; private set; } = Baseline;
    public static bool Enabled => Mode != Baseline;

    public static void Configure(string mode)
    {
        if (Mode != Baseline)
            throw new InvalidOperationException("Collision ownership A/B configured twice");
        if (mode is not (Baseline or SourceCollider178))
            throw new ArgumentException("Unsupported native collision owner mode", nameof(mode));
        Mode = mode;
    }

    public static bool IsTarget(PaldeaFieldIndex field, int target, int crossFrom) =>
        Enabled && field == PaldeaFieldIndex.Terarium &&
        ((target == 178 && crossFrom == 0) ||
         (target == 180 && crossFrom == 178) ||
         (target == 192 && crossFrom == 178));

    public static string RequireOwner(string sourceCollisionArea)
    {
        if (string.IsNullOrWhiteSpace(sourceCollisionArea))
            throw new InvalidOperationException("Original collision owner missing in experimental 178 source");
        return sourceCollisionArea;
    }

    /// <summary>Do not merge across native TRSCN collider owners.
    /// Duplicate final 8-byte slots across owners are removed after per-owner merge.</summary>
    public static void ConsolidateByOwner(
        Dictionary<string, List<PaldeaEncounter>> buckets,
        Action<List<PaldeaEncounter>> mergeBucket,
        List<PaldeaEncounter> result)
    {
        result.Clear();
        var distinct = new HashSet<UInt128>();
        foreach (var key in new List<string>(buckets.Keys))
        {
            var slots = buckets[key];
            mergeBucket(slots);
            foreach (var slot in slots)
                if (distinct.Add(slot.GetHash()))
                    result.Add(slot);
        }
    }
}
