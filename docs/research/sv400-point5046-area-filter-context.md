# SV 4.0.0 Kitakami PointData #5046 — source-area filter context

## Confirmed original source identity

The read-only native trace from original Scarlet/Violet 4.0.0 identifies this point as:

- Original asset: \`world/data/encount/point_data/point_data/encount_data_su1.bin\`
- Original PointData array ordinal: **5046**
- Position: \`(1710.6964, 133.5, -996.7115)\`
- Original source collision area: \`subarea_su01worldend\`
- Source TRCOL SHA-256: \`3515DC545D102FE824EB4162637CA04F28446DE27FF25F3070A433504AF5A944\`
- Raw PointData level range: **1–99**
- Observed AreaInfo range: **1–100**
- \`AdjustEncLv\`: **0**

Because the AreaInfo interval already contains the raw 1–99 point interval, the broad levels below are **not** caused by the Terarium-style AreaInfo clipping experiment. They originate in the original point range intersecting the encounter criteria.

## Native raw-candidate witnesses

The original \`wild_raw_candidate\` trace records these candidates before later integration and consolidation:

| National species | Criteria table index | Criteria level range | Candidate range |
|---:|---:|---:|---:|
| 129 Magikarp | 40 | 5–30 | 5–30 |
| 129 Magikarp | 41 | 31–99 | 31–99 |
| 194 Wooper | 74 | 27–34 | 27–34 |
| 313 Volbeat | 110, 111 | 7–60 | 7–60 |
| 314 Illumise | 112, 113 | 7–60 | 7–60 |

These are original candidate-generation events, **not** proof that every candidate survives the final per-location de-duplication or that the game can spawn every listed slot. Criteria indexes are the actual zero-based iteration indexes in the original \`EncountPokeDataArray\` table.

## Why the area filter needs a per-point audit

The current native reconstruction stores all local points for a PKHeX location ID in one \`LocationStorage\`. \`LocationDatabase.Get(location, ...)\` reuses that storage for later source areas with the same location ID. Each \`LocationPointDetail\` separately retains its exact \`SourceCollisionArea\`, but \`LocationStorage.GetEncounters\` currently calls:

\`\`\`csharp
IsAbleToSpawnAt(pd, spawner, AreaName, scene, fieldIndex)
\`\`\`

The \`AreaName\` field belongs to the shared storage and is fixed when that storage is first created. In the observed PointData #5046 event, the storage-level name is \`a_su0108\`, while the point's original source collider is \`subarea_su01worldend\`.

\`IsMatchAreaFilter\` accepts a candidate when one of the comma-separated \`EncountPokeData.LocationName\` tokens either equals the supplied area name **or** contains the point in that token's original collider. The shared storage name can therefore short-circuit a token match for every point pooled into that storage, even when an individual point came from a different source collider. This is a plausible context mismatch, not yet a proven game bug: geometric membership can legitimately allow a point from a broad parent collider to be used by a more specific sub-area encounter table.

## New exact-point probe and counterfactual

The research branch adds a diagnostic for exactly seven original criteria indexes: \`40, 41, 74, 110, 111, 112, 113\`. For each it records:

- shared \`LocationStorage.AreaName\` (\`a_su0108\` in the observed trace);
- per-point \`SourceCollisionArea\` (\`subarea_su01worldend\`);
- each comma-separated criteria location token;
- whether the token equals the storage name;
- whether it equals the point source area;
- whether the original point coordinate is inside that token's collider;
- full candidate acceptance under the storage context and the point-source context.

The compact report is \`SV400-Point5046-Area-Filter-Probe.json\`. It fails closed unless all seven expected criteria are present and tied to the exact original asset + ordinal + WorldEnd source.

A separate opt-in native counterfactual, \`kitakami-158-point5046-source-area-filter\`, uses the point's own \`SourceCollisionArea\` as the filter context **only for PointData #5046 when its source is WorldEnd and its shared storage location is 158**. It does not change other points, other Kitakami locations, the normal exporter, fixed encounters, or raids. The generated wild table is compared against the pinned PKHeX reference and must remain unchanged outside local Location 158 and rows with \`CrossFrom=158\`.

## Interpretation guardrails

- \`SourceCollisionArea\` is the original TRSCN collider that accepted a point during extraction; it is not automatically the runtime encounter region or the player's active sub-area.
- A criteria filter may legitimately use a parent or neighboring area collider; exact string inequality alone is not grounds to reject a candidate.
- The seven probe records must show which token actually accepts the point before the per-point source-area A/B result is interpreted.
- Any increase in PKHeX reference matches is diagnostic only. Runtime/game-captured PK9 evidence is still required before changing the default encounter database.

## Next acceptance

1. Compile the new CLI mode and run the existing source-identity tests.
2. Rebuild all five native encounter tables from the same 61+223 original source files.
3. Produce the seven compact per-criteria membership probes.
4. Compare the exact PointData #5046 source-area counterfactual to the pinned reference.
5. Verify no wild rows outside Location/CrossFrom 158 and no fixed/ordinary Raid SHA changed.
