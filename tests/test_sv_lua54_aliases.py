"""Synthetic alias graph and Upvalue write-site tests, with no ROM bytes."""
from __future__ import annotations
from pathlib import Path
import sys
import struct
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools"/"SV.Lua54"/"src"))
from sv_lua54.chunk import Chunk, Proto, parse
from sv_lua54 import aliases, trace

HEADER=(bytes.fromhex("1b4c7561540019930d0a1a0a")
        + b"\x04\x08\x08" + (0x5678).to_bytes(8,"little")
        + struct.pack("<d",370.5))


def abc(op,a=0,b=0,c=0):
    return trace.OPNAMES.index(op) | a << 7 | b << 16 | c << 24


def proto(pid,parent,words,upvalues=b"",children=()):
    return Proto(id=pid,parent_id=parent,start=0,code_offset=0,end=0,
                 source=None,line_defined=0,last_line_defined=0,
                 num_params=0,is_vararg=0,max_stack_size=8,
                 code=struct.pack("<"+"I"*len(words),*words),
                 upvalues=upvalues,children=list(children))


def sample():
    g=proto(2,1,[abc("SETTABUP",0,0),abc("RETURN0")],
            upvalues=b"\x00\x00\x00")
    one=proto(1,0,[abc("SETUPVAL",0,0),abc("RETURN0")],
              upvalues=b"\x01\x03\x00",children=[g])
    two=proto(3,0,[abc("GETUPVAL",0,0),abc("RETURN0")],
              upvalues=b"\x01\x03\x00")
    other=proto(4,0,[abc("SETUPVAL",0,0),abc("RETURN0")],
                upvalues=b"\x01\x04\x00")
    root=proto(0,None,[abc("RETURN0")],upvalues=b"\x01\x00\x00",
               children=[one,two,other])
    return parse(Chunk(HEADER,1,root,"").encode())


class AliasTests(unittest.TestCase):
    def test_root_cell_aliases_and_writer_kind_are_separate(self):
        c=sample()
        g=aliases.alias_groups(c,registers=(3,4))["groups"]
        self.assertEqual(g[3]["holder_count"],3)
        self.assertEqual(g[3]["direct_root_child_count"],2)
        self.assertEqual(g[3]["potential_setupval_count"],1)
        self.assertEqual(g[3]["potential_settabup_count"],1)
        self.assertEqual(g[4]["holder_count"],1)
        self.assertEqual(g[4]["potential_setupval_count"],1)
        self.assertNotEqual(g[3]["setupval_sites"][0]["proto_id"],
                            g[3]["settabup_sites"][0]["proto_id"])

    def test_grandchild_inherits_parent_upvalue_alias(self):
        c=sample()
        nodes={p.id:p for p in c.protos()}
        reg,path=aliases.ancestor_register(nodes,2,0)
        self.assertEqual(reg,3)
        self.assertEqual([x["instack"] for x in path],[0,1])
        self.assertEqual(aliases.ancestor_register(nodes,3,0)[0],3)

    def test_root_environment_is_not_root_stack_register(self):
        c=sample()
        nodes={p.id:p for p in c.protos()}
        self.assertEqual(aliases.ancestor_register(nodes,0,0)[0],None)
        self.assertEqual(aliases.ancestor_register(nodes,3,99)[0],None)


if __name__=="__main__":
    unittest.main()
