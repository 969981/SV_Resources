"""R14 exact-native Lua54 field-register, two SETI writes and two EQI tests.

Not a general dynamic Lua decompiler. Only four human-reviewed opcode shapes,
their exact register operands, target positions and original K constants
are allowed. A bad register/branch/metamethod-sensitive unknown form is
rejected before attempting compilation and differential testing.
"""
from __future__ import annotations
from dataclasses import dataclass
from hashlib import sha256
import json
import re

from ..chunk import Proto
from ..r1 import decode, syntactic_edges
from .restricted import LiftFailure


@dataclass(frozen=True)
class R14Ast:
    kind: str
    proto_id: int
    code_sha256: str
    raw_words: tuple[str,...]
    cfg_edges: tuple[tuple[int,int,str],...]
    hir: tuple[dict,...]
    signature: str
    statements: tuple[str,...]
    write_count: int


def _key(proto:Proto, index:int)->str:
    if index < 0 or index >= len(proto.constants):
        raise LiftFailure("original Lua string constant index out of bounds")
    c=proto.constants[index]
    if c.tag not in (4,20) or not isinstance(c.payload,bytes):
        raise LiftFailure("original SETFIELD/GETFIELD K must be UTF8 string")
    try: s=c.payload.decode("utf-8")
    except UnicodeDecodeError as e: raise LiftFailure("non-UTF8 string K") from e
    if not s or len(s)>80 or any(ord(x)<32 for x in s):
        raise LiftFailure("unsupported original field key length or control bytes")
    return s


def lift(proto:Proto)->R14Ast:
    if (proto.parent_id!=0 or proto.upvalue_count or proto.children
            or proto.is_vararg):
        raise LiftFailure("R14 requires no captures, root C/F and non-vararg")
    ops=decode(proto)
    names=tuple(x.name for x in ops)
    edges,defects=syntactic_edges(proto)
    if defects:
        raise LiftFailure("malformed Lua54 CFG or EXTRAARG")
    kind=None
    if names==("GETI","SETFIELD","RETURN1","RETURN0"):
        get,store,ret,last=ops
        if (proto.num_params!=2 or
                (get.a,get.b,get.c,get.k)!=(2,0,22,0) or
                (store.a,store.c,store.k)!=(2,1,0) or
                ret.a!=1 or last.a!=2):
            raise LiftFailure("dynamic SETFIELD register/return pattern not verified")
        key=_key(proto,store.b)
        if key!="callFromReserve":
            raise LiftFailure("unverified original setter field K")
        kind="write_field_return_argument"
        sign="(value:Dynamic):Dynamic"
        statements=(f"untyped this[22][{json.dumps(key)}] = value;",
                    "return value;")
        write_count=1
        hir=(
          {"pc":0,"op":"read_slot","out":"R2","self_index":22},
          {"pc":1,"op":"write_field","table":"R2","key":key,"rhs":"R1"},
          {"pc":2,"op":"return","register":"R1"},
        )
    elif names==("GETI","SETFIELD","GETI","GETFIELD","RETURN1","RETURN0"):
        get,setf,get2,read,ret,last=ops
        if (proto.num_params!=2 or
                (get.a,get.b,get.c,get.k)!=(2,0,22,0) or
                (setf.a,setf.c,setf.k)!=(2,1,0) or
                (get2.a,get2.b,get2.c,get2.k)!=(2,0,22,0) or
                (read.a,read.b,read.k)!=(2,2,0) or
                (ret.a,last.a)!=(2,2)):
            raise LiftFailure("dynamic setter then GETFIELD original register mismatch")
        key=_key(proto,setf.b)
        if key!="disableFieldCamera" or _key(proto,read.c)!=key:
            raise LiftFailure("field key differs between SETFIELD and GETFIELD")
        kind="write_field_readback"
        sign="(value:Dynamic):Dynamic"
        statements=(f"untyped this[22][{json.dumps(key)}] = value;",
                    f"return untyped this[22][{json.dumps(key)}];")
        write_count=1
        hir=(
          {"pc":0,"op":"read_slot","out":"R2","self_index":22},
          {"pc":1,"op":"write_field","table":"R2","key":key,"rhs":"R1"},
          {"pc":2,"op":"read_slot","out":"R2","self_index":22},
          {"pc":3,"op":"read_field","out":"R2","table":"R2","key":key},
          {"pc":4,"op":"return","register":"R2"},
        )
    elif names==("SETI","SETI","RETURN0"):
        f,s,ret=ops
        if (proto.num_params!=3 or
                (f.a,f.b,f.c,f.k)!=(0,36,1,0) or
                (s.a,s.b,s.c,s.k)!=(0,37,2,0) or
                ret.a!=3):
            raise LiftFailure("double SETI must target R0[36], R0[37] in original order")
        kind="two_ordered_self_writes"
        sign="(first:Dynamic,second:Dynamic):Void"
        statements=("untyped this[36] = first;",
                    "untyped this[37] = second;")
        write_count=2
        hir=(
          {"pc":0,"op":"write_self_slot","self_index":36,"rhs":"R1"},
          {"pc":1,"op":"write_self_slot","self_index":37,"rhs":"R2"},
          {"pc":2,"op":"return_nil"},
        )
    elif names==("EQI","JMP","EQI","JMP","LOADTRUE","RETURN1",
                 "LOADFALSE","RETURN1","RETURN0"):
        eq1,jmp1,eq2,jmp2,t,rt,f,rf,last=ops
        if (proto.num_params!=2 or
                (eq1.a,eq1.b,eq1.k)!=(1,128,1) or
                (eq2.a,eq2.b,eq2.k)!=(1,130,0) or
                (jmp1.sj,jmp2.sj)!=(2,2) or
                (t.a,rt.a,f.a,rf.a,last.a)!=(2,2,2,2,2)):
            raise LiftFailure("two EQI integer tests and skip/jmp CFG pattern not original")
        # Lua54 sB=B-127: B128=1, B130=3. K determines JMP skip.
        if ((0,1,"TEST_NEXT") not in edges or
                (0,2,"TEST_SKIP") not in edges or
                (2,3,"TEST_NEXT") not in edges or
                (2,4,"TEST_SKIP") not in edges):
            raise LiftFailure("original two-test comparison CFG differs")
        if (1,4,"JMP") not in edges or (3,6,"JMP") not in edges:
            raise LiftFailure("EQI true/false jump targets differ from native")
        kind="integer_or_two_branches"
        sign="(value:Dynamic):Bool"
        statements=("return value == 1 || value == 3;",)
        write_count=0
        hir=(
          {"pc":0,"op":"eq_immediate","reg":"R1","value":1,"k":1},
          {"pc":1,"op":"conditional_jump","target":4},
          {"pc":2,"op":"eq_immediate","reg":"R1","value":3,"k":0},
          {"pc":3,"op":"conditional_jump","target":6},
          {"pc":4,"op":"return_true","register":"R2"},
          {"pc":6,"op":"return_false","register":"R2"},
        )
    else:
        raise LiftFailure("unsupported R14 dynamic field / double-write / two EQI shape")
    return R14Ast(kind,proto.id,sha256(proto.code).hexdigest(),
                  tuple(f"{x.word:08X}" for x in ops),tuple(edges),
                  hir,sign,statements,write_count)


def emit(name:str,hash_name:str,ast:R14Ast)->str:
    if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*",name):
        raise LiftFailure("invalid Haxe method identifier")
    if not re.fullmatch(r"F[0-9A-F]{16}",hash_name):
        raise LiftFailure("invalid native F symbol hash")
    result=[
        f"    // R14 original Child Proto {ast.proto_id}: {ast.kind}",
        f"    // native child SHA-256: {ast.code_sha256}",
        f"    // native opcode words: {' '.join(ast.raw_words)}",
        f'    @:hashAbi("{hash_name}")',
        f'    @:native("{hash_name}")',
        f"    public function {name}{ast.signature} {{",
        *[f"        {line}" for line in ast.statements],
        "    }",
        "",
    ]
    return "\n".join(result)
