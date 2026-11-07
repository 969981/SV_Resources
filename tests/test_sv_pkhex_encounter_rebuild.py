"""ROM-free round-trip tests for Gen9 PKHeX resource writer."""
import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

SCRIPTS = Path(__file__).resolve().parents[1] / "scripts"


def import_file(module_name, filename):
    spec = importlib.util.spec_from_file_location(module_name, SCRIPTS/filename)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


reader = import_file("sv_pkhex_reader", "Audit-SV-PKHeX-Encounters.py")
writer = import_file("sv_pkhex_writer", "Rebuild-SV-PKHeX-Encounter-Binary.py")


class EncounterRebuildTests(unittest.TestCase):
    def test_wild_with_an_empty_area_byte_exact_roundtrip(self):
        a = struct.pack("<HH", 6, 0) + struct.pack("<HBBBBBB",25,0,255,5,8,0,3)
        b = struct.pack("<HH", 75, 0)  # native empty area, must be preserved
        c = struct.pack("<HH", 18, 12) + struct.pack("<HBBBBBB",133,31,0,10,14,5,1)
        blobs=[a,b,c]
        offsets=[4+4*(len(blobs)+1)]
        for chunk in blobs:
            offsets.append(offsets[-1]+len(chunk))
        raw=b"sv"+struct.pack("<H",len(blobs))+struct.pack("<4I",*offsets)+b"".join(blobs)
        slots=reader.read_wild(raw)
        areas=[{"area_index":i,"location_id":loc,"cross_from_id":cross,
                "slot_count":(len(blob)-4)//8}
               for i,(blob,(loc,cross)) in enumerate(zip(blobs,[(6,0),(75,0),(18,12)]))]
        self.assertEqual(writer.wild(areas,slots), raw)
        areas[1]["slot_count"]=1
        with self.assertRaises(ValueError):
            writer.wild(areas, slots)

    def test_fixed_byte_exact_roundtrip(self):
        data=struct.pack("<HBBBBBBHHHHBBBB", 1001,0,60,3,7,255,1,33,45,0,0,6,8,0,0)
        self.assertEqual(writer.fixed(reader.read_fixed(data)), data)

    def test_raid_byte_exact_roundtrip(self):
        data=struct.pack("<HBBBBBBHHHHBBBBhh", 150,0,0,1,5,1,
                         75,33,45,85,99,12,7,6,10,-99,101)
        self.assertEqual(writer.raid(reader.read_raid(data,"paldea"),"paldea"), data)

    def test_outbreak_byte_exact_roundtrip(self):
        data=struct.pack("<HBBBBBBBBBB",1025,1,255,4,30,5,3,1,0,255,1)+bytes(range(16))
        self.assertEqual(writer.outbreak(reader.read_outbreak(data)),data)

    def test_original_reference_unchanged(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            source=root/"source"
            out=root/"output"
            source.mkdir()
            data=struct.pack("<HBBBBBBHHHHBBBB", 1001,0,60,3,7,255,1,33,45,0,0,6,8,0,0)
            rows=reader.read_fixed(data)
            reader.write_csv(source/"pkhex_fixed.csv",rows,reader.FIXED_COLUMNS)
            reference=root/"reference"
            reference.mkdir()
            (reference/"encounter_fixed_paldea.pkl").write_bytes(data)
            result=writer.reconstruct(source,out,reference)
            self.assertTrue(result["results"]["fixed"]["byte_exact_match"])
            self.assertEqual((reference/"encounter_fixed_paldea.pkl").read_bytes(),data)
            self.assertEqual((out/"encounter_fixed_paldea.pkl").read_bytes(),data)


if __name__=="__main__":
    unittest.main()
