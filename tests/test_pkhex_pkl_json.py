import importlib.util
import json
from pathlib import Path
import struct
import tempfile
import unittest

p=Path(__file__).resolve().parents[1]/'scripts'/'PKHeX-PKL-JSON.py'
s=importlib.util.spec_from_file_location('pkl_converter',p)
m=importlib.util.module_from_spec(s)
s.loader.exec_module(m)

class PKLTests(unittest.TestCase):
    def sample(self,width=4):
        chunks=[b'ab',b'',b'foo\x00\x02\xff']
        fmt='<'+('I' if width==4 else 'H')*4
        start=4+4*width+1
        offs=[start]
        for c in chunks:offs.append(offs[-1]+len(c))
        return b'xy'+struct.pack('<H',3)+struct.pack(fmt,*offs)+b'\xfd'+b''.join(chunks)+b'\x00',chunks
    def test_both_binlinker_formats_reversible(self):
        for width in (2,4):
            raw,chunks=self.sample(width)
            d=m.decode(raw,Path('byte/test_eggs.pkl'))
            self.assertEqual(d['container']['offset_width'],width)
            self.assertEqual(len(d['container']['chunks']),3)
            self.assertEqual(m.encode(d),raw)
            d['container']['chunks'][0]['data_hex']='abcdef'
            self.assertNotEqual(m.encode(d),raw)
    def test_semantic_gen9_wild_and_edit(self):
        fields=dict(species=246,form=0,gender=2,level_min=10,level_max=14,time_forbidden_mask=3,weather_allowed_mask=255)
        item=m.pack_fields('gen9_wild_slot',fields)
        area=struct.pack('<HH',100,0)+item
        data=b'sv'+struct.pack('<HII',1,12,12+len(area))+area
        d=m.decode(data,Path('legality/wild/Gen9/encounter_wild_paldea.pkl'))
        self.assertEqual(d['container']['chunks'][0]['slots'][0]['species'],246)
        self.assertEqual(m.encode(d),data)
        d['container']['chunks'][0]['slots'][0]['species']=371
        self.assertEqual(m.encode(d)[-8:-6],struct.pack('<H',371))
        with self.assertRaises(ValueError):
            d['container']['chunks'][0]['slots'][0]['species']=70000
            m.encode(d)
    def test_semantic_fixed_raid_outbreak(self):
        data={
          'gen9_fixed':{'species':246,'form':0,'level':20,'flawless_iv':3,'tera_type':1,'gender':0,'ability':1,
                        **{f'move{i}':i*100 for i in range(1,5)},**{f'location{i}':i for i in range(4)}},
          'gen9_raid':{'species':371,'form':0,'gender_raw_encoded':1,'ability':3,'flawless_iv':4,'shiny_rule':0,'level':75,
                       **{f'move{i}':i*100 for i in range(1,5)},'tera_type':10,'index':1,'stars':6,'rand_rate':90,
                       'rand_min_scarlet':-1,'rand_min_violet':3},
          'gen9_outbreak':{'species':190,'form':0,'gender':3,'level_min':12,'level_max':22,'ribbon':0,
                           'weather_allowed_mask':255,'force_scale_range':0,'scale_min':0,'scale_max':255,
                           'is_shiny_forced':0,'met_base':7,'met_flags_hex':'0123456789abcdef0123456789abcd'},
        }
        fn={'gen9_fixed':'encounter_fixed_paldea.pkl',
            'gen9_raid':'encounter_gem_kitakami.pkl','gen9_outbreak':'encounter_outbreak_paldea.pkl'}
        for key,fields in data.items():
            with self.subTest(key=key):
                raw=m.build_records([fields],key)
                d=m.decode(raw,Path('legality/wild/Gen9')/fn[key])
                self.assertEqual(d['container']['records'][0],fields)
                self.assertEqual(m.encode(d),raw)
    def test_unknown_bytes_not_guessed(self):
        raw=b'\x00\xff\x7ehello\x01\x02'
        d=m.decode(raw,Path('legality/mgdb/unknown.pkl'))
        self.assertEqual(d['container']['type'],'opaque')
        self.assertEqual(m.encode(d),raw)
    def test_invalid_binlinker_truncated(self):
        raw,chunks=self.sample(2)
        corrupt=raw[:4]+b'\xff\xff'+raw[6:]
        self.assertIsNone(m.inspect_binlinker(corrupt,2))
    def test_complete_folder_roundtrip(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            orig=root/'pkl'; js=root/'json'; rebuilt=root/'restored'
            (orig/'legality/mgdb').mkdir(parents=True)
            (orig/'legality/mgdb/a.pkl').write_bytes(b'xx\x00\xff')
            (orig/'legality/wild/Gen9').mkdir(parents=True)
            (orig/'legality/wild/Gen9/encounter_fixed_paldea.pkl').write_bytes(
                m.build_records([dict(species=2,form=0,level=5,flawless_iv=0,tera_type=1,gender=0,ability=0,
                    move1=1,move2=2,move3=3,move4=4,location0=1,location1=0,location2=0,location3=0)],'gen9_fixed'))
            export=m.convert_export(orig,js)
            self.assertEqual(export['count'],2)
            check=m.convert_import(js,rebuilt,orig)
            self.assertEqual(check['count'],2)
            self.assertTrue(check['all_original_sha_exact'])
            with self.assertRaises(ValueError):
                m.convert_export(orig,orig/'nested')
    def test_gen9_formats_sizes(self):
        self.assertEqual(struct.calcsize(m.PROFILE_LAYOUTS['gen9_fixed']),20)
        self.assertEqual(struct.calcsize(m.PROFILE_LAYOUTS['gen9_raid']),24)
        self.assertEqual(struct.calcsize(m.PROFILE_LAYOUTS['gen9_wild_slot']),8)
if __name__=='__main__':unittest.main(verbosity=2)
