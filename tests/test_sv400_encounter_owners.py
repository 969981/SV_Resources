#!/usr/bin/env python3
"""Synthetic SQLite provenance test for lexical encounter-owner traversal."""
import importlib.util, sqlite3
from pathlib import Path
p=Path(__file__).resolve().parents[1]/'scripts'/'Trace-SV400-EncounterOwners.py'
spec=importlib.util.spec_from_file_location('owner_scan',p)
m=importlib.util.module_from_spec(spec);spec.loader.exec_module(m)
db=sqlite3.connect(':memory:')
db.executescript("""
CREATE TABLE metadata(key TEXT,value TEXT);
CREATE TABLE functions(entry TEXT,name TEXT,min_addr TEXT,max_addr TEXT);
CREATE TABLE defined_data(addr TEXT,preview TEXT,is_string INTEGER);
CREATE TABLE references_full(from_addr TEXT,to_addr TEXT,ref_type TEXT,is_call INTEGER);
CREATE TABLE decompilation(entry TEXT,status TEXT,c TEXT,error TEXT);
INSERT INTO metadata VALUES('image_base','00100000');
INSERT INTO functions VALUES('00101000','FUN_fake_owner','00101000','001010ff');
INSERT INTO defined_data VALUES('00401000','world/data/encount/pokedata','1');
INSERT INTO references_full VALUES('00101020','00401000','DATA',0);
INSERT INTO decompilation VALUES('00101000','OK','fake native pseudocode',NULL);
""")
report=m.analyze(db)
assert report['matched_strings']==1,report
assert report['matched_function_owners']==1,report
assert report['roots'][0]['function_rva']=='0x1000',report
assert report['roots'][0]['data_xrefs'][0]['from']=='00101020',report
assert report['roots'][0]['interpretation']=='LEXICAL_ROOT_CANDIDATE_NOT_NATIVE_GAMEPLAY_VERIFIED'
print('PASS synthetic lexical anchor, owner mapping, and no-runtime-proof policy')
