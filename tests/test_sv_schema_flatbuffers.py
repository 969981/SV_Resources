"""Regression for bounded FlatBuffers schema exports, without native ROM distribution."""
import json
import os
from pathlib import Path
import struct
import sys
import tempfile
import unittest
from unittest.mock import patch

from scripts.resource_pipeline import schema_flatbuffers as sf


def fake_table_bytes():
    raw = bytearray(32)
    struct.pack_into("<I", raw, 0, 16)
    struct.pack_into("<HH", raw, 8, 4, 4)
    struct.pack_into("<i", raw, 16, 8)
    return bytes(raw)


class SchemaFlatbuffersTests(unittest.TestCase):
    def test_valid_table_header_and_corruption_guards(self):
        with tempfile.TemporaryDirectory() as temp:
            file = Path(temp) / "sample.traef"
            file.write_bytes(fake_table_bytes())
            self.assertEqual(sf.verify_flatbuffer_table(file),
                             (True, "BOUNDED_FLATBUFFER_ROOT"))
            # Real SV TRAEF files use a negative soffset_t to a shared
            # vtable located after the root table; this must be accepted.
            signed=bytearray(32)
            struct.pack_into("<I", signed, 0, 4)
            struct.pack_into("<i", signed, 4, -12)
            struct.pack_into("<HH", signed, 16, 6, 8)
            struct.pack_into("<H", signed, 20, 4)
            file.write_bytes(signed)
            self.assertEqual(sf.verify_flatbuffer_table(file),
                             (True, "BOUNDED_FLATBUFFER_ROOT"))
            file.write_bytes(bytes(32))
            self.assertEqual(sf.verify_flatbuffer_table(file)[0], False)
            bad = bytearray(fake_table_bytes())
            struct.pack_into("<H", bad, 8, 0xFFFE)
            file.write_bytes(bad)
            self.assertEqual(sf.verify_flatbuffer_table(file)[0], False)

    @unittest.skipIf(os.name == "nt", "Fake Python executable uses POSIX shebang")
    def test_schema_json_is_real_child_process_output(self):
        with tempfile.TemporaryDirectory() as temp:
            base = Path(temp)
            root = base / "root"
            source = root / "virtual/pokemon/data/demo.traef"
            source.parent.mkdir(parents=True)
            source.write_bytes(fake_table_bytes())
            schemas = base / "schemas"
            entry = schemas / "animation/traef.fbs"
            entry.parent.mkdir(parents=True)
            entry.write_text("table TRAEF { value:uint; } root_type TRAEF;")
            tool = base / "fakeflatc"
            tool.write_text(
                "#!/usr/bin/env python3\n"
                "import pathlib,sys\n"
                "args=sys.argv\n"
                "out=pathlib.Path(args[args.index('-o')+1])\n"
                "name=pathlib.Path(args[-1]).stem+'.json'\n"
                "(out/name).write_text('{\"value\":42}')\n")
            tool.chmod(0o755)
            with patch.object(sf, "SCHEMA_ROOT", schemas):
                output, status = sf.convert_one(
                    root, "pokemon/data/demo.traef", source, str(tool))
            self.assertEqual(status, "SCHEMA_JSON_EXPORTED")
            self.assertIsNotNone(output)
            body = json.loads((root / output).read_text())
            self.assertEqual(body["flatc_json"]["value"], 42)
            self.assertEqual(body["schema"], "animation/traef.fbs")
            self.assertEqual(body["status"], "STRUCTURE_PARSED")
            self.assertEqual(len(body["schema_sha256"]), 64)

    def test_no_schema_never_becomes_success(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            source = root / "virtual/missing.bin"
            source.parent.mkdir(parents=True)
            source.write_bytes(fake_table_bytes())
            self.assertEqual(sf.convert_one(root, "missing.bin", source),
                             (None, "NO_MATCHING_SCHEMA"))


if __name__ == "__main__":
    unittest.main()
