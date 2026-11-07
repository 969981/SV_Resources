using pkNX.Containers;
using pkNX.Structures.FlatBuffers.SV;
using pkNX.Structures.FlatBuffers;

namespace pkNX.EncounterCLI;

/// <summary>
/// Headless adapter of vendored TeraRaidRipper.DumpRaids, retaining native
/// RaidEnemyInfo.SerializePKHeX / PokeDataBattle.SerializePKHeX unchanged.
/// No PKHeX reference binary is read to construct these records.
/// </summary>
internal static class NativeRaidExporter
{
    internal static readonly (string Name, string FilePrefix)[] Regions =
    [
        ("encounter_gem_paldea.pkl", "raid_enemy_"),
        ("encounter_gem_kitakami.pkl", "su1_raid_enemy_"),
        ("encounter_gem_blueberry.pkl", "su2_raid_enemy_"),
    ];

    internal static string[] Generate(IFileInternal rom, string output)
    {
        Directory.CreateDirectory(output);
        var names = new List<string>();
        foreach (var (name, prefix) in Regions)
        {
            var result = new List<RaidSlot>();
            for (int i = 0; i < 6; i++)
            {
                var baseName = $"{prefix}{i+1:00}";
                var file = $"world/data/raid/{baseName}/{baseName}_array.bin";
                var native = FlatBufferConverter.DeserializeFrom<RaidEnemyTableArray>(
                    rom.GetPackedFile(file));
                var rateS = 0;
                var rateV = 0;
                foreach (var enc in native.Table)
                {
                    var item = new RaidSlot(enc, i);
                    if (enc.Info.RomVer != RaidRomType.TYPE_B)
                    {
                        item.RandRateStartScarlet = rateS;
                        rateS += enc.Info.Rate;
                    }
                    if (enc.Info.RomVer != RaidRomType.TYPE_A)
                    {
                        item.RandRateStartViolet = rateV;
                        rateV += enc.Info.Rate;
                    }
                    result.Add(item);
                }
            }

            // Ordering MUST stay identical to original pkNX TeraRaidRipper.
            var ordered = result.OrderBy(z => z.Species).ThenBy(z => z.Form)
                .ThenByDescending(z => z.Stars).ThenByDescending(z => z.Delivery);
            var dest = Path.Combine(output, name);
            using (var fs = File.Create(dest))
            using (var bw = new BinaryWriter(fs))
            {
                foreach (var enc in ordered)
                {
                    enc.Enemy.Info.SerializePKHeX(
                        bw, (byte)enc.Stars, enc.Rate, RaidSerializationFormat.BaseROM);
                    bw.Write(enc.RandRateStartScarlet < 0
                        ? (short)-1 : checked((short)enc.RandRateStartScarlet));
                    bw.Write(enc.RandRateStartViolet < 0
                        ? (short)-1 : checked((short)enc.RandRateStartViolet));
                }
            }
            if (new FileInfo(dest).Length == 0 || new FileInfo(dest).Length % 24 != 0)
                throw new InvalidDataException($"Invalid native Tera raid 24-byte template stream: {name}");
            names.Add(name);
        }
        return names.ToArray();
    }

    private sealed class RaidSlot(RaidEnemyTable enemy, int fileIndex)
    {
        internal RaidEnemyTable Enemy { get; } = enemy;
        internal int Stars => Enemy.Info.Difficulty == 0 ? fileIndex + 1 : Enemy.Info.Difficulty;
        internal DevID Species => Enemy.Info.BossPokePara.DevId;
        internal short Form => Enemy.Info.BossPokePara.FormId;
        internal int Delivery => Enemy.Info.DeliveryGroupID;
        internal sbyte Rate => Enemy.Info.Rate;
        internal int RandRateStartScarlet { get; set; } =
            enemy.Info.RomVer == RaidRomType.TYPE_B ? -1 : 0;
        internal int RandRateStartViolet { get; set; } =
            enemy.Info.RomVer == RaidRomType.TYPE_A ? -1 : 0;
    }
}
