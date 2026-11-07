namespace pkNX.Structures.FlatBuffers;

/// <summary>
/// The original native TRSCN collision component that pkNX used for an area.
/// For Box collision there is no external TRCOL file; for Havok, SHA256 is
/// calculated directly from the same original .trcol bytes parsed into the tree.
/// Observation-only. Does not alter geometry, encounter templates, or game data.
/// </summary>
public sealed record EncounterCollisionOriginSV(
    string TrscnPath,
    string CollisionKind,
    string TrcolPath,
    string TrcolSha256,
    string? BoxPosition,
    string? BoxSize
);