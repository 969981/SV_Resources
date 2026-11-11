#!/usr/bin/env python3
"""No ROM material: synthetic SQLite fixture for EncountPokeData.Version scan."""
import importlib.util, sqlite3, tempfile
from pathlib import Path

script=Path(__file__).resolve().parents[1]/'scripts'/'Trace-SV400-EncountVersion.py'
spec=importlib.util.spec_from_file_location('version_trace',script)
mod=importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)
assert mod.V28.search('ldrh w9,[x10,#0x3c]')
assert mod.V28.search('ldrh w9,[x10,#60]')
assert not mod.V28.search('ldrh w9,[x10,#0x13c]')
with tempfile.TemporaryDirectory() as temp:
    db=sqlite3.connect(str(Path(temp)/'mock.sqlite'))
    db.executescript("""
        CREATE TABLE metadata(key TEXT,value TEXT);
        CREATE TABLE functions(entry TEXT,name TEXT,min_addr TEXT,max_addr TEXT);
        CREATE TABLE instructions(addr TEXT PRIMARY KEY,mnemonic TEXT,display_text TEXT,bytes_hex TEXT);
        CREATE TABLE defined_data(addr TEXT,preview TEXT,is_string INTEGER);
        CREATE TABLE references_full(from_addr TEXT,to_addr TEXT,ref_type TEXT,is_call INTEGER);
        CREATE TABLE decompilation(entry TEXT,status TEXT,c TEXT,error TEXT);
        INSERT INTO metadata VALUES ('analysis_completed','True'),('image_base','00100000'),
                                    ('original_elf_sha256','synthetic');
        INSERT INTO functions VALUES ('00101000','FUN_00101000','00101000','00101100');
        INSERT INTO instructions VALUES ('00101000','LDRSW','ldrsw x8,[x0]','ab'),
               ('00101004','SUB','sub x9,x0,x8','ab'),
               ('00101008','LDRH','ldrh w9,[x9,#0x3c]','ab'),
               ('0010100c','CBZ','cbz w9,0x101050','ab'),
               ('00101010','LDRB','ldrb w8,[x9,#0x5]','ab');
        INSERT INTO decompilation VALUES ('00101000','OK','int FUN_00101000(void) { return 1; }',NULL);
    """)
    report=mod.scan(db,10)
    assert report['functions_with_candidate_offsets']==1,report
    assert report['candidates'][0]['entry_rva']=='0x1000',report
    assert report['candidates'][0]['score']>=20,report
    assert 'NOT_CONFIRMED' in report['candidates'][0]['confidence']
    assert 'Static heuristic ONLY' in mod.markdown_report(report)
print('PASS synthetic field-28 vtable access ranking (not native branch verification)')
