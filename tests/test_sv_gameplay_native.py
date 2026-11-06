"""ROM-free tests for the dedicated native gameplay FlatBuffers decoder."""
import importlib.util
import struct
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Decode-SV-Gameplay-Flatbuffers.py"
SPEC = importlib.util.spec_from_file_location("sv_gameplay_native", SCRIPT)
decoder = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(decoder)

class NativeGameplayTests(unittest.TestCase):
    def test_source_classes(self):
        self.assertEqual(decoder.TABLES["avalon/data/personal_array.bin"][1], "pokedex")
        self.assertEqual(decoder.TABLES["avalon/data/waza_array.bin"][1], "moves")
        self.assertEqual(decoder.TABLES["world/data/item/itemdata/itemdata_array.bfbs"][1], "items")
        self.assertEqual(decoder.TABLES["world/data/encount/pokedata/pokedata/pokedata_array.bfbs"][1], "encounters")
        self.assertEqual(decoder.TABLES["world/data/ui/ymap/ymap_place_name_data/ymap_place_name_data_array.bfbs"][1], "locations")

    def test_bounded_root_validation(self):
        with tempfile.TemporaryDirectory() as folder:
            f=Path(folder)/"sample.bin"
            f.write_bytes(b"bad")
            self.assertFalse(decoder.bounded_root(f))
            # Correct minimal byte bounds alone do not assert semantic schema.
            data=bytearray(40)
            struct.pack_into("<I",data,0,16)
            struct.pack_into("<i",data,16,8)
            struct.pack_into("<HH",data,8,6,8)
            f.write_bytes(data)
            self.assertTrue(decoder.bounded_root(f))
            struct.pack_into("<I",data,0,10000)
            f.write_bytes(data)
            self.assertFalse(decoder.bounded_root(f))

if __name__=="__main__":
    unittest.main()
