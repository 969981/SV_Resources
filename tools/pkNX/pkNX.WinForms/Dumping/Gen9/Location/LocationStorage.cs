using System;
using System.Collections.Generic;
using pkNX.Structures.FlatBuffers.SV;

namespace pkNX.Structures.FlatBuffers;

public class LocationStorage(int loc, PaldeaFieldIndex fieldIndex, string areaName, AreaInfo info)
{
    public readonly int Location = loc;
    public readonly AreaInfo AreaInfo = info;
    public readonly string AreaName = areaName;

    public readonly HashSet<UInt128> Added = [];
    public readonly List<PaldeaEncounter> Slots = [];
    public readonly Dictionary<int, LocationStorage> SlotsCrossover = [];
    public readonly List<LocationPointDetail> Local = [];
    public readonly List<LocationPointDetail> Nearby = [];

    private void Add(PaldeaEncounter slot)
    {
        var key = slot.GetHash();
        if (Added.Add(key))
            Slots.Add(slot);
    }

    private void AddCrossover(PaldeaEncounter slot, int loc)
    {
        // If slots cross over, they are necessarily in the same field
        if (!SlotsCrossover.TryGetValue(loc, out var s))
            SlotsCrossover[loc] = s = new LocationStorage(loc, fieldIndex, AreaName, AreaInfo);
        s.Add(slot with { CrossFromLocation = (ushort)Location });
    }

    public void Integrate()
    {
        foreach (var point in Local)
        {
            point.AssignWeatherPermissions(fieldIndex);
            foreach (var slot in point.Slots)
            {
                TraceIntegrated(point, slot, 0, "local");
                Add(slot);
            }
        }
        foreach (var point in Nearby)
        {
            point.AssignWeatherPermissions(fieldIndex);
            foreach (var slot in point.Slots)
            {
                TraceIntegrated(point, slot, point.Location, "cross");
                AddCrossover(slot, point.Location);
            }
        }
    }

    private void TraceIntegrated(LocationPointDetail point, PaldeaEncounter slot, int crossFrom, string kind)
    {
        if (!EncounterTraceSV.Wild(Location, slot.Species) &&
            !EncounterTraceSV.Wild(point.Location, slot.Species))
            return;
        EncounterTraceSV.Write(new {
            stage="wild_weather_assigned", kind, fieldIndex=fieldIndex.ToString(),
            location=Location, crossFrom,
            originLocation=point.Location, areaName=AreaName,
            sourcePointAsset=point.SourcePointAsset, sourcePointIndex=point.SourcePointIndex,
            sourceCollisionArea=point.SourceCollisionArea,
            pointX=point.X, pointY=point.Y, pointZ=point.Z,
            species=slot.Species, form=slot.Form, gender=slot.Sex,
            minLevel=slot.MinLevel, maxLevel=slot.MaxLevel,
            timeMask=slot.Time, weatherMask=(byte)slot.Weather,
            pointRawMin=point.RawPointMinLevel, pointRawMax=point.RawPointMaxLevel,
            effectivePointMin=point.Point.LevelRange.X, effectivePointMax=point.Point.LevelRange.Y,
            areaAdjust=point.LevelAdjust, clippingMin=point.ClippingAreaMin,
            clippingMax=point.ClippingAreaMax
        });
    }

    private void TraceConsolidation(string stage)
    {
        if (!EncounterTraceSV.Enabled) return;
        foreach (var slot in Slots)
            TraceSlot(stage, Location, 0, slot);
        foreach (var (crossFrom, crossed) in SlotsCrossover)
            foreach (var slot in crossed.Slots)
                TraceSlot(stage, Location, crossFrom, slot);
    }

    private static void TraceSlot(string stage, int location, int crossFrom, PaldeaEncounter slot)
    {
        if (!EncounterTraceSV.Wild(location, slot.Species) &&
            !EncounterTraceSV.Wild(crossFrom, slot.Species))
            return;
        EncounterTraceSV.Write(new {
            stage, location, crossFrom, species=slot.Species, form=slot.Form,
            gender=slot.Sex, minLevel=slot.MinLevel, maxLevel=slot.MaxLevel,
            timeMask=slot.Time, weatherMask=(byte)slot.Weather
        });
    }

    /// <summary>
    /// Merges all encounters that overlap level ranges, and de-duplicates for all within the same location ID.
    /// </summary>
    public void Consolidate(bool inheritedStrict = false)
    {
        bool strict = inheritedStrict || EncounterLevelABSV.UseStrictOverlap(fieldIndex, Location);
        TraceConsolidation("wild_before_consolidate");
        var len = -1;
        while (len != Slots.Count)
        {
            len = Slots.Count;
            ConsolidateEncounters(Slots, strict, Location);
        }
        foreach (var loc in SlotsCrossover.Values)
            loc.Consolidate(strict);
        TraceConsolidation("wild_after_consolidate");
    }

    private static void ConsolidateEncounters(List<PaldeaEncounter> encounters, bool strict, int storageLocation)
    {
        // Merge and remove future indexes if they can be combined with current
        // Pre-sort so we can just iterate.
        encounters.Sort();

        for (int i = 0; i < encounters.Count;)
        {
            // For i to i+count, merge within
            var enc = encounters[i];
            int count = GetPotentialConsolidationCount(encounters, i, enc);

            // Remove all indexes that have Absorb return true with a later element
            while (TryAbsorbFromRange(encounters, i, count, strict, storageLocation))
                count--;
            i += count;
        }
    }

    private static int GetPotentialConsolidationCount(List<PaldeaEncounter> encounters, int start, PaldeaEncounter enc)
    {
        int count = 1;
        for (int end = start + 1; end < encounters.Count; end++)
        {
            if (!encounters[end].IsSameSpecFormGender(enc))
                break;
            count++;
        }
        return count;
    }

    private static bool TryAbsorbFromRange(List<PaldeaEncounter> encounters, int start, int count, bool strict, int storageLocation)
    {
        // Need to compare all elements with each-other; return true if any absorb.
        var end = start + count - 1;
        for (int i = start; i < end; i++)
        {
            for (int j = i + 1; j <= end; j++)
            {
                var left = encounters[i];
                var right = encounters[j];
                byte leftMin = left.MinLevel, leftMax = left.MaxLevel;
                if (!left.Absorb(right, strict))
                    continue;
                // The nested crossover storage uses the source location as
                // Location and the target as PaldeaEncounter.CrossFromLocation.
                int target = left.CrossFromLocation == 0 ? storageLocation : left.CrossFromLocation;
                int source = left.CrossFromLocation == 0 ? 0 : storageLocation;
                if (EncounterTraceSV.FocusWildMerge(target, source, left.Species))
                    EncounterTraceSV.Write(new {
                        stage="wild_six_group_absorb", location=target, crossFrom=source,
                        species=left.Species, form=left.Form, gender=left.Sex,
                        timeMask=left.Time, weatherMask=(byte)left.Weather,
                        leftMin, leftMax, rightMin=right.MinLevel, rightMax=right.MaxLevel,
                        resultMin=left.MinLevel, resultMax=left.MaxLevel, strict,
                        actualOverlap=leftMax >= right.MinLevel && right.MaxLevel >= leftMin,
                        identicalBefore=leftMin==right.MinLevel && leftMax==right.MaxLevel,
                        claim="ORIGINAL_MERGE_STEP_NOT_RUNTIME_LEGALITY"
                    });
                encounters.RemoveAt(j);
                return true;
            }
        }
        return false;
    }

    /// <summary>
    /// Loads all points that are within the collider and within the specified level range.
    /// </summary>
    public void LoadPoints(IEnumerable<LocationPointDetail> points, IContainsV3f collider, int areaMin, int areaMax, int areaAdjust, string sourceCollisionArea = "")
    {
        foreach (var w in points)
        {
            if (!w.IsWithinLevelRange(areaMin, areaMax))
                continue;
            if (collider.ContainsPoint(w.X, w.Y, w.Z))
            {
                var composite = GetCompositePoint(w, areaMin, areaMax, areaAdjust, Location,
                    EncounterLevelABSV.UseRawPointMin(fieldIndex, Location),
                    EncounterLevelABSV.UseRawPointMax(fieldIndex, Location), sourceCollisionArea);
                Local.Add(composite); // native
            }
            // Don't check here for cross-area, as our areaMin/areaMax is not valid for that crossover case.
        }
    }

    private static LocationPointDetail GetCompositePoint(LocationPointDetail original, int areaMin, int areaMax, int adjust, int location, bool useRawPointMin, bool useRawPointMax, string sourceCollisionArea)
    {
        var ep = original.Point;
        var newX = useRawPointMin ? ep.LevelRange.X : Math.Max(ep.LevelRange.X, areaMin);
        var newY = useRawPointMax ? ep.LevelRange.Y : Math.Min(ep.LevelRange.Y, areaMax);
        var newPoint = ep with { LevelRange = new PackedVec2f { X = newX, Y = newY } };
        return new LocationPointDetail(newPoint)
        {
            Location = location, LevelAdjust = adjust,
            SourcePointIndex = original.SourcePointIndex,
            SourcePointAsset = original.SourcePointAsset,
            SourceCollisionArea = sourceCollisionArea,
            RawPointMinLevel = original.RawPointMinLevel,
            RawPointMaxLevel = original.RawPointMaxLevel,
            ClippingAreaMin = areaMin, ClippingAreaMax = areaMax
        };
    }

    /// <summary>
    /// For every spawn point in the area, add all encounters that can spawn there.
    /// </summary>
    public void GetEncounters(EncountPokeDataArray pokeData, PaldeaSceneModel scene)
    {
        foreach (var spawner in Local)
        {
            var boost = spawner.LevelAdjust;
            for (int criteriaIndex=0;criteriaIndex<pokeData.Table.Count;criteriaIndex++)
            {
                var pd = pokeData.Table[criteriaIndex];
                int nationalSpecies = SpeciesConverterSV.GetNational9((ushort)pd.DevId);
                bool usePointSourceArea = EncounterAreaFilterABSV.UsePointSourceArea(fieldIndex, Location, spawner);
                string filterAreaName = usePointSourceArea ? spawner.SourceCollisionArea : AreaName;

                if (EncounterAreaFilterABSV.IsPoint5046ProbeTarget(
                    fieldIndex, Location, spawner, criteriaIndex, nationalSpecies))
                {
                    bool storageFilterMatch = IsMatchAreaFilter(pd.LocationName, AreaName, scene, fieldIndex, spawner.Point);
                    bool sourceFilterMatch = IsMatchAreaFilter(pd.LocationName, spawner.SourceCollisionArea, scene, fieldIndex, spawner.Point);
                    bool storageCandidateAccepted = IsAbleToSpawnAt(pd, spawner, AreaName, scene, fieldIndex);
                    bool sourceCandidateAccepted = IsAbleToSpawnAt(pd, spawner, spawner.SourceCollisionArea, scene, fieldIndex);
                    TracePoint5046AreaFilter(spawner, pd, criteriaIndex, nationalSpecies,
                        storageFilterMatch, sourceFilterMatch, storageCandidateAccepted, sourceCandidateAccepted,
                        scene, fieldIndex, AreaName);
                }

                if (!IsAbleToSpawnAt(pd, spawner, filterAreaName, scene, fieldIndex))
                    continue;

                // These are the SAME pkNX candidates and order as without tracing.
                var point = spawner.Point;
                if (EncounterLevelABSV.AllowUnadjusted(fieldIndex, Location, boost))
                {
                    var normal=PaldeaEncounter.GetNew(pd, point);
                    spawner.Add(normal);
                    TraceGenerated(spawner, pd, normal, criteriaIndex, 0, false, filterAreaName);
                    if (pd.BandPoke != 0)
                    {
                        var band=PaldeaEncounter.GetBand(pd, point);
                        spawner.Add(band);
                        TraceGenerated(spawner, pd, band, criteriaIndex, 0, true, filterAreaName);
                    }
                }

                if (boost == 0 || !EncounterLevelABSV.AllowAdjusted(fieldIndex, Location))
                    continue;

                var adjusted=PaldeaEncounter.GetNew(pd, point, boost);
                spawner.Add(adjusted);
                TraceGenerated(spawner, pd, adjusted, criteriaIndex, boost, false, filterAreaName);
                if (pd.BandPoke != 0)
                {
                    var band=PaldeaEncounter.GetBand(pd, point, boost);
                    spawner.Add(band);
                    TraceGenerated(spawner, pd, band, criteriaIndex, boost, true, filterAreaName);
                }
            }
        }
    }

    private void TraceGenerated(LocationPointDetail spawner, EncountPokeData pd,
        PaldeaEncounter result, int criteriaIndex, int appliedBoost, bool band, string filterAreaName)
    {
        if (!EncounterTraceSV.Wild(Location, result.Species))
            return;
        EncounterTraceSV.Write(new {
            stage="wild_raw_candidate", fieldIndex=fieldIndex.ToString(),
            areaName=AreaName, areaFilterName=filterAreaName, location=Location,
            pointSource=spawner.SourcePointAsset, pointIndex=spawner.SourcePointIndex,
            sourceCollisionArea=spawner.SourceCollisionArea,
            pointX=spawner.X, pointY=spawner.Y, pointZ=spawner.Z,
            rawPointMin=spawner.RawPointMinLevel, rawPointMax=spawner.RawPointMaxLevel,
            clippedPointMin=spawner.Point.LevelRange.X, clippedPointMax=spawner.Point.LevelRange.Y,
            areaLevelMin=spawner.ClippingAreaMin, areaLevelMax=spawner.ClippingAreaMax,
            areaAdjust=spawner.LevelAdjust, appliedBoost, criteriaIndex, band,
            criteriaMinLevel=pd.MinLevel, criteriaMaxLevel=pd.MaxLevel,
            criteriaArea=pd.Area, criteriaLocation=pd.LocationName,
            species=result.Species, form=result.Form, gender=result.Sex,
            minLevel=result.MinLevel, maxLevel=result.MaxLevel,
            timeMask=result.Time
        });
    }

    private static void TracePoint5046AreaFilter(
        LocationPointDetail point, EncountPokeData pd, int criteriaIndex, int nationalSpecies,
        bool storageFilterMatch, bool sourceFilterMatch,
        bool storageCandidateAccepted, bool sourceCandidateAccepted,
        PaldeaSceneModel scene, PaldeaFieldIndex fieldIndex, string storageAreaName)
    {
        var checks = new List<object>();
        foreach (var name in pd.LocationName.Split(','))
        {
            checks.Add(new
            {
                name,
                equalsStorageAreaName = name == storageAreaName,
                equalsPointSourceArea = name == point.SourceCollisionArea,
                pointInsideFilterCollider = scene.IsPointContained(fieldIndex, name, point.X, point.Y, point.Z)
            });
        }

        EncounterTraceSV.Write(new
        {
            stage = "wild_point5046_area_filter_probe",
            location = Location,
            pointSource = point.SourcePointAsset,
            pointIndex = point.SourcePointIndex,
            pointX = point.X,
            pointY = point.Y,
            pointZ = point.Z,
            storageAreaName,
            pointSourceCollisionArea = point.SourceCollisionArea,
            species = nationalSpecies,
            criteriaIndex,
            criteriaMinLevel = pd.MinLevel,
            criteriaMaxLevel = pd.MaxLevel,
            criteriaLocation = pd.LocationName,
            storageFilterMatch,
            pointSourceFilterMatch = sourceFilterMatch,
            storageCandidateAccepted,
            pointSourceCandidateAccepted = sourceCandidateAccepted,
            activeMode = EncounterAreaFilterABSV.Mode,
            filterTokens = checks
        });
    }

    private static bool IsAbleToSpawnAt(EncountPokeData pd, LocationPointDetail ep, string areaName, PaldeaSceneModel scene, PaldeaFieldIndex fieldIndex)
    {
        var point = ep.Point;
        // Check area
        if (!string.IsNullOrEmpty(pd.Area) && !IsInArea(pd.Area, point.AreaNo))
            return false;

        // Check loc
        if (!IsMatchAreaFilter(pd.LocationName, areaName, scene, fieldIndex, point))
            return false;

        // Check biome
        if (!HasBiome(pd, (Biome)(int)point.Biome))
            return false;

        // check level range overlap
        // check area level range overlap -- already done via point
        var range = point.LevelRange;
        if (!pd.IsLevelRangeOverlap(range.X, range.Y))
            return false;

        // Assume flag, enable table, timetable are fine
        // Assume version is fine -- union wireless sessions can share encounters.

        return true;
    }

    private static bool HasBiome(EncountPokeData pd, Biome biome)
    {
        if (biome == pd.Biome1)
            return true;
        if (biome == pd.Biome2)
            return true;
        if (biome == pd.Biome3)
            return true;
        if (biome == pd.Biome4)
            return true;
        return false;
    }

    private static bool IsInArea(ReadOnlySpan<char> areaName, int areaNo)
    {
        int start = 0;
        for (int i = 0; i < areaName.Length; i++)
        {
            if (areaName[i] != ',')
                continue;
            var name = areaName[start..i];

            // In Paldea, only Surskit has: 1,4.5,7
            // It shows up in 4, but not 5. No other encounters have `.` -- only `,`.
            // We can just check as floats, and the last as int.
            // Maybe they changed it since release, dunno. 3.0.0 gives us Surskit @ 4.
            if (float.TryParse(name, out var tmp) && areaNo == (int)tmp)
                return true;
            start = i + 1;
        }
        return int.TryParse(areaName[start..], out var x) && areaNo == x;
    }

    private static bool IsMatchAreaFilter(ReadOnlySpan<char> filterToLocations, string areaName, PaldeaSceneModel scene, PaldeaFieldIndex fieldIndex, PointData ep)
    {
        if (filterToLocations.Length == 0)
            return true; // Filter not specified

        while (true)
        {
            var index = filterToLocations.IndexOf(',');
            var name = index == -1 ? filterToLocations : filterToLocations[..index];
            if (name.SequenceEqual(areaName))
                return true;
            if (scene.IsPointContained(fieldIndex, name.ToString(), ep.Position.X, ep.Position.Y, ep.Position.Z))
                return true;

            if (index == -1)
                return false;
            filterToLocations = filterToLocations[(index + 1)..];
        }
    }
}
