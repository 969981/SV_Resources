"""Synthetic checks for the native SV 4.0.0 prefetch hashing research."""
import importlib.util
import tempfile
import unittest
from pathlib import Path

SCRIPTS = Path(__file__).resolve().parents[1] / "scripts"


def script(name):
    path = SCRIPTS / name
    spec = importlib.util.spec_from_file_location(name.replace("-", "_"), path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


gaps = script("Investigate-SV-EventPrefetch-Gaps.py")
recover = script("Recover-SV-Prefetch-Missing.py")


class NativeSVHashes(unittest.TestCase):
    def test_exact_event_path_native_hash_equals_nso_constant(self):
        name = "event/trevt/bin/event.trevt"
        value = 0x95E2585FAEC1683F
        self.assertEqual(gaps.fnv1a64(name), value)
        self.assertEqual(recover.native_fnv64(name), value)

    def test_native_offset_basis_differs_from_standard(self):
        name = "event/trevt/bin/event.trevt"
        self.assertNotEqual(
            gaps.fnv1a64(name, seed=0xCBF29CE484222325),
            gaps.fnv1a64(name, seed=0xCBF29CE484222645),
        )

    def test_native_path_case_and_non_ascii_bytes(self):
        source = "world/Field/\u00e9.trscn"
        self.assertEqual(recover.native_fnv64(source), gaps.fnv1a64(source))
        self.assertNotEqual(recover.native_fnv64(source), recover.native_fnv64(source.lower()))

    def test_independent_hashlist_is_not_automatically_verified(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            wanted_name = "event/trevt/bin/event.trevt"
            hashhex = f"{recover.native_fnv64(wanted_name):016X}"
            for filename, content in (
                ("hashes_inside_fd.txt", hashhex + " " + wanted_name + "\n"),
                ("hashes_inside_trpak.txt", hashhex + " wrong/resource.trscn\n"),
            ):
                dest = root / "tools/PokeDocs/SV/Hashlists/FileSystem" / filename
                dest.parent.mkdir(parents=True, exist_ok=True)
                dest.write_text(content, encoding="utf-8")
            found, evidence = recover.read_lists(root, {hashhex.lower(): {}})
            self.assertEqual(len(evidence), 2)
            matches = found[hashhex.lower()]
            self.assertEqual(len(matches), 2)
            self.assertEqual([r["originalNameFnvMatches"] for r in matches], [True, False])


if __name__ == "__main__":
    unittest.main()
