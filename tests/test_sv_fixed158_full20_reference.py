"""Synthetic-only controls for full-20B SV native fixed-vs-reference identity."""
from pathlib import Path
import importlib.util
import tempfile
import unittest

MODULE = Path(__file__).resolve().parents[1] / "scripts" / "Disambiguate-SV-WorldEnd-158-Full20.py"
SPEC = importlib.util.spec_from_file_location("sv_fixed20_identity", MODULE)
SUBJECT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(SUBJECT)

class Fixed20OriginalIdentityTests(unittest.TestCase):
    def sample(self, **update):
        base = {
            'species_national':'218','form_raw':'0','level':'28',
            'flawless_iv_count':'3','tera_type_raw':'7',
            'gender_raw':'255','ability_permission_raw':'0',
            'move1':'246','move2':'510','move3':'151','move4':'108',
            'location0':'144','location1':'158','location2':'168','location3':'0',
        }
        base.update(update)
        return base

    def test_full_20b_roundtrip(self):
        row=self.sample()
        binary=SUBJECT.pack_reference_row(row)
        self.assertEqual(len(binary),20)
        decoded=SUBJECT.decode_fixed20(binary)
        self.assertEqual({k:str(v) for k,v in decoded.items()},row)

    def test_same_observed_shallow_identity_is_not_same_full20(self):
        first=SUBJECT.pack_reference_row(self.sample(flawless_iv_count='0',tera_type_raw='0',move1='0',move2='0',move3='0',move4='0'))
        second=SUBJECT.pack_reference_row(self.sample())
        self.assertEqual(SUBJECT.base_identity(first),SUBJECT.base_identity(second))
        self.assertNotEqual(first,second)

    def test_hypothetical_remove_158_preserves_all_other_bytes(self):
        original=SUBJECT.pack_reference_row(self.sample())
        updated=SUBJECT.mutated_fixed20(original,'144;168;0;0')
        self.assertEqual(updated[:16],original[:16])
        self.assertEqual(list(updated[16:]),[144,168,0,0])

    def test_hypothetical_must_remove_158(self):
        with self.assertRaises(ValueError):
            SUBJECT.mutated_fixed20(SUBJECT.pack_reference_row(self.sample()),'144;158;168;0')

    def test_bad_stride_and_bad_fields_rejected(self):
        with self.assertRaises(ValueError):SUBJECT.decode_fixed20(b'123')
        with self.assertRaises(ValueError):SUBJECT.pack_reference_row(self.sample(species_national='90000'))

    def test_changed_hash_cannot_pass_source_gate(self):
        with tempfile.TemporaryDirectory() as td:
            p=Path(td)/'native.pkl';p.write_bytes(b'invalid')
            self.assertNotEqual(SUBJECT.file_sha(p),SUBJECT.EXPECTED['native'])

if __name__=='__main__':unittest.main()