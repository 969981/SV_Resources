"""No-ROM unit tests for SV 4.0.0 encounter mismatch pairing, never a legality edit."""
from pathlib import Path
import importlib.util
import struct
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Triage-SV-400-Native-Encounter-Differences.py"
S=importlib.util.spec_from_file_location("sv_diff_triage",SCRIPT)
M=importlib.util.module_from_spec(S)
S.loader.exec_module(M)


def wild(loc=156,cross=158,species=23,min_level=20,max_level=25,weather=15):
    return dict(zip(M.WILD_FIELDS,map(str,(
        loc,cross,species,0,1,min_level,max_level,0,weather))))


def fixed(locs=(140,158,0,0),species=23):
    return dict(zip(M.FIXED_FIELDS,map(str,(
        species,0,15,0,0,255,0,0,0,0,0,*locs))))


class DifferenceTriageTests(unittest.TestCase):
    def test_only_level_endpoints_are_different(self):
        n=[wild(min_level=20,max_level=29)]
        r=[wild(min_level=21,max_level=27)]
        paired,other=M.pair_level_only(n,r)
        self.assertEqual(len(paired),1)
        self.assertEqual(len(other),0)
        self.assertEqual(paired[0]["delta_min"],-1)
        self.assertEqual(paired[0]["delta_max"],2)

    def test_weather_and_crosssource_are_not_ignored(self):
        n=[wild()]
        r=[wild(cross=0),wild(weather=31),wild(loc=158)]
        pairs,other=M.pair_level_only(n,r)
        self.assertEqual(len(pairs),0)
        self.assertEqual(len(other),3)

    def test_duplicate_source_templates_are_not_double_consumed(self):
        n=[wild(min_level=20,max_level=25)]
        r=[wild(min_level=21,max_level=25),wild(min_level=22,max_level=26)]
        pairs,other=M.pair_level_only(n,r)
        self.assertEqual((len(pairs),len(other)),(1,1))

    def test_fixed_158_is_oracle_diagnostic_not_blanket_patch(self):
        n=[fixed((140,158,0,0)),fixed((158,162,0,0))]
        ref=[fixed((140,0,0,0)),fixed((162,0,0,0))]
        pairs,nonmatched,missing=M.fixed_pair_remove158(n,ref)
        self.assertEqual((len(pairs),len(nonmatched),len(missing)),(2,0,0))
        self.assertEqual(n[0]["location1"],"158")
        self.assertEqual(M.strip_only_location_158(fixed((158,0,0,0)))["location0"],"0")

    def test_real_158_reference_is_not_rewritten_as_an_equal_match(self):
        p=fixed((140,158,0,0))
        pairs,rest,missing=M.fixed_pair_remove158([p],[p])
        self.assertEqual(len(pairs),0)
        self.assertEqual(len(rest),1)
        self.assertEqual(len(missing),1)

    def test_native_pkhex_20_byte_fixed_layout(self):
        raw=M.FIXED_STRUCT.pack(23,0,15,0,0,255,0,0,0,0,0,140,158,0,0)
        records=M.fixed_records(raw)
        self.assertEqual(len(raw),20)
        self.assertEqual(records[0]["location1"],"158")
        self.assertEqual(records[0]["species_national"],"23")
        with self.assertRaises(ValueError):
            M.fixed_records(raw[:-1])


if __name__=="__main__":
    unittest.main()
