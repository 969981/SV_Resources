# SV 4.0.0 Terarium 176/194 — original PointData level bounds vs AreaInfo clipping

## Status and source boundary

This is a source-driven research record for Scarlet/Violet 4.0.0. All native builds use the original SHA-verified **61 encounter M2 assets + 223 TRCOL dependencies**. The independent PKHeX reference is reconstructed after native generation from the pinned 30f differential at commit \`0660d1e1f4924b8478daec73281bb8071a82ad19\`.

This note does **not** claim game-runtime encounter legality. No actual caught PK9 has yet been used to prove the runtime level bounds. The A/B modes are opt-in and do not alter the default exporter.

## Actual full native A/B already completed

[Actions #42475599973](https://github.com/969981/SV_Resources/actions/runs/42475599973) rebuilt the actual five Gen9 encounter tables from the original 4.0.0 sources. The target comparison includes native location 176/194 and crossover rows originating from those locations.

| Mode | Native target rows | PKHeX reference rows | Exact matches | Native-only | Reference-only | Changed occurrences |
|---|---:|---:|---:|---:|---:|---:|
| Baseline | 588 | 553 | 389 | 199 | 164 | 0 |
| Unadjusted-only | 588 | 553 | 389 | 199 | 164 | 0 |
| Adjusted-only | 588 | 553 | 389 | 199 | 164 | 0 |
| Strict overlap | 588 | 553 | 389 | 199 | 164 | 0 |
| **Raw PointData levels** | **588** | **553** | **431** | **157** | **122** | **116** |

The raw-level mode changed 92 serialized slot rows (46 removals + 46 additions, including multiplicity changes such as Minior's seven forms/slots). A second, occurrence-aware pass over the change CSV found that the apparent **+42 net** is actually **50 newly recovered matching occurrences minus 8 previously matching occurrences lost**. All eight losses are at target location 186 (Coastal Plaza), with `CrossFrom=176`, for species 88, 287, 335 (two occurrences), 336 (two occurrences), 546 and 547. The raw-point mode therefore does **not** preserve all baseline matches, even though its total match count rises from 389 to 431. Non-target wild rows remained byte/multiset identical; fixed encounters and all three ordinary Raid files retained their original SHA-256.

The first three counterfactuals made no output difference. Therefore the 42-match gain is not caused by adjusted-vs-unadjusted generation or the strict-vs-adjacent consolidation switch.

## What the raw-level switch actually changes

The original path is:

1. \`LocationStorage.LoadPoints\` first requires \`PointData.LevelRange\` to overlap the source area's \`AreaInfo\` min/max.
2. It checks the original collider contains the point.
3. \`GetCompositePoint\` currently intersects the point's minimum and maximum with the source \`AreaInfo\` bounds.
4. \`GetEncounters\` intersects that resulting point range with each \`EncountPokeData.MinLevel/MaxLevel\` and applies \`AdjustEncLv\` where applicable.
5. The resulting slots are consolidated later.

The raw-point A/B **does not bypass step 1**. It preserves the original PointData min/max only at step 3. In other words, the point must still overlap the AreaInfo range to be loaded; its level range is simply not clipped to the AreaInfo bounds after it has been accepted.

### Source-linked examples

The original provenance CSV contains points with raw range **60–70** and source \`AreaInfo\` range **58–68**. Baseline therefore turns them into **60–68**, while the raw mode retains **60–70**. For example, location 176's species 50/51 candidate groups include 56 source point records each with raw 60–70 clipped to 60–68. The pinned reference contains level-70 endpoints for the corresponding encounter records.

Other point groups have the opposite lower-bound shape: raw **58–68**, source AreaInfo **59–69**, baseline clips to **59–68**. Both ends can therefore be altered by AreaInfo intersection; this is why a single raw-both mode is not enough to identify which bound is responsible.

The provenance-linked CSV is in artifact \`SV400-original-point-level-and-fixed-158-attributed-evidence\` from Actions #42475599973; the actual full-PKL result is in \`SV400-original-level-AB-WorldEnd-158-AreaInfo-TRCOL\`.

## New independent lower/upper A/B (implemented; real ROM replay pending)

The research branch adds two additional modes, without changing the baseline:

- \`terarium-176-194-raw-point-min-only\`: keep original PointData minimum, but retain the existing AreaInfo maximum clip.
- \`terarium-176-194-raw-point-max-only\`: retain the AreaInfo minimum clip, but keep original PointData maximum.

Together with the already-tested \`terarium-176-194-raw-point-levels\`, these isolate the lower and upper bound contributions. The independent 6,003-candidate source-formula sample was rerun successfully in [Actions #42500056001](https://github.com/969981/SV_Resources/actions/runs/42500056001). It found:
- raw minimum only changes **2,611 / 6,003** samples across **61 / 78** cases;
- raw maximum only changes **616 / 6,003** samples across **13 / 78** cases;
- both bounds together change **3,227 / 6,003** samples across **74 / 78** cases.

The two single-bound counts overlap and must not be added. This sample suggests the lower-bound clip is the larger source of candidate-level differences. The non-focus DLC control also changes under raw bounds (634 minimum-only, 162 maximum-only, 796 both across 2,402 samples), so no global rule should be inferred from the Terarium result. The sample keeps at most 80 source criteria per case and is not a full encounter rebuild.

The source-formula sample script and unit tests now report/test min-only, max-only and both-bound results separately. The next full original ROM Actions replay compares all six A/B modes against the same pinned reference and still rejects any change outside the target rows or to fixed/raid tables.

## Interpretation guardrails

- A better PKHeX multiset match is evidence of closer parity with the pinned reference, not proof of game runtime behavior.
- AreaInfo overlap remains a source-point inclusion gate in all modes; only the post-load range clipping is under experiment.
- The raw-level mode's 42-match gain is promising, but the independent min/max run must determine whether the correction is only the upper cap, only the lower floor, or both.
- Do not promote any mode to the default PKHeX database until actual game-captured PK9 examples or a runtime level-generation trace confirm it.

## Next acceptance

1. Run six full native builds from the same 61+223 original inputs.
2. Report per-location and per-slot reference-match retention/loss/recovery, not only net match count.
3. Confirm all non-target wild slots and fixed/three Raid SHAs remain unchanged.
4. If max-only reproduces the raw-both +42 gain with no additional unmatched slots, investigate the original AreaInfo upper bound as a likely overly strict cap; if min-only also matters, retain both as separate hypotheses.
