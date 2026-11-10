"""R12 strictly gated Lua5.4 instance GETI/SETI and clamp LT/MOVE Haxe lowering.

This is a small additional typed AST, NOT generic CFG/SSA lowering.
Code patterns, register identities, jump targets, and nil/metamethod
behavior must be differentially tested against original Child bytecode.
"""
from __future__ import annotations

from dataclasses import dataclass
from hashlib import sha256
import json

from ..chunk import Proto
from ..r1 import decode, syntactic_edges
from .restricted import LiftFailure


@dataclass(frozen=True)
class OperationAst:
    kind: str
    slot: int | None
    signature: str
    statements: tuple[str,...]
    native_proto_id: int
    raw_words: tuple[str,...]
    source_code_sha256: str
    has_table_effect: bool


def lift_instance(proto:Proto)->OperationAst:
    if proto.parent_id!=0 or proto.upvalue_count!=0 or proto.children or proto.is_vararg:
        raise LiftFailure("no nested closure/upvalue/vararg allowed for R12")
    op=decode(proto)
    names=tuple(i.name for i in op)
    edges,defects=syntactic_edges(proto)
    if defects:
        raise LiftFailure(f"invalid native CFG edges: {defects[:2]}")

    if names==("GETI","RETURN1","RETURN0"):
        a,r,dead=op
        if (proto.num_params!=1 or (a.a,a.b)!=(1,0)
                or r.a!=1 or a.k!=0):
            raise LiftFailure("GETI is not a pure self-slot read")
        kind="self_slot_get"
        slot=a.c
        sig="():Dynamic"
        statements=(f"return untyped this[{slot}];",)
        effect=False
    elif names==("SETI","RETURN0"):
        a,dead=op
        if (proto.num_params!=2 or a.a!=0 or a.c!=1 or a.k!=0):
            raise LiftFailure("SETI is not a simple self-slot write of R1")
        kind="self_slot_set"
        slot=a.b
        sig="(value:Dynamic):Void"
        statements=(f"untyped this[{slot}] = value;",)
        effect=True
    elif names==("GETI","GETFIELD","RETURN1","RETURN0"):
        get,field,ret,dead=op
        if (proto.num_params!=1 or (get.a,get.b,get.k)!=(1,0,0)
                or (field.a,field.b,field.k)!=(1,1,0)
                or ret.a!=1 or field.c>=len(proto.constants)):
            raise LiftFailure("GETFIELD must read one original self-owned table field")
        key_const=proto.constants[field.c]
        if key_const.tag not in (4,20) or not isinstance(key_const.payload,bytes):
            raise LiftFailure("GETFIELD key must be original Lua string constant")
        try: key=key_const.payload.decode("utf-8")
        except UnicodeDecodeError as ex: raise LiftFailure("GETFIELD non-UTF8 key") from ex
        if len(key)>80 or any(ord(c)<32 for c in key):
            raise LiftFailure("GETFIELD unsupported key controls/length")
        kind="self_field_get"
        slot=get.c
        sig="():Dynamic"
        statements=(f"return untyped this[{slot}][{json.dumps(key,ensure_ascii=False)}];",)
        effect=False
    elif names==("GETI","SETFIELD","RETURN0"):
        get,field,dead=op
        if (proto.num_params!=1 or (get.a,get.b,get.k)!=(1,0,0)
                or field.a!=1 or field.k!=1
                or field.b>=len(proto.constants)
                or field.c>=len(proto.constants)):
            raise LiftFailure("SETFIELD must target original self-owned table with literal")
        key_const=proto.constants[field.b]
        value_const=proto.constants[field.c]
        if (key_const.tag not in (4,20)
                or not isinstance(key_const.payload,bytes)
                or value_const.tag!=17):
            raise LiftFailure("SETFIELD currently only accepts literal true RHS and UTF8 key")
        try: key=key_const.payload.decode("utf-8")
        except UnicodeDecodeError as ex: raise LiftFailure("SETFIELD non-UTF8 key") from ex
        if len(key)>80 or any(ord(c)<32 for c in key):
            raise LiftFailure("SETFIELD unsupported key controls/length")
        kind="self_field_set_true"
        slot=get.c
        sig="():Void"
        statements=(f"untyped this[{slot}][{json.dumps(key,ensure_ascii=False)}] = true;",)
        effect=True
    elif names==("LT","JMP","MOVE","LT","JMP","MOVE","RETURN1","RETURN0"):
        a,j1,m1,b,j2,m2,ret,dead=op
        if (proto.num_params!=4
                or (a.a,a.b,a.k)!=(1,2,0)
                or (b.a,b.b,b.k)!=(3,1,0)
                or (m1.a,m1.b,m2.a,m2.b)!=(1,2,1,3)
                or (j1.sj,j2.sj)!=(1,1)
                or ret.a!=1):
            raise LiftFailure("LT/MOVE clamp control flow/register fingerprint mismatch")
        kind="min_max_clamp"
        slot=None
        sig="(value:Dynamic,min:Dynamic,max:Dynamic):Dynamic"
        statements=(
            "if (value < min) value = min;",
            "if (max < value) value = max;",
            "return value;",
        )
        effect=False
    else:
        raise LiftFailure("R12 unsupported GETI/SETI/MOVE/branch opcode pattern")
    return OperationAst(kind,slot,sig,statements,proto.id,
                        tuple(f"{x.word:08X}" for x in op),
                        sha256(proto.code).hexdigest(),effect)


def haxe_method(method_name:str,method_hash:str,ast:OperationAst)->str:
    import re
    if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*",method_name):
        raise LiftFailure("unsafe Haxe method identifier")
    if not re.fullmatch(r"F[0-9A-F]{16}",method_hash):
        raise LiftFailure("invalid native instance F hash")
    lines=[
        f"    // R12 original Child Proto {ast.native_proto_id}: {ast.kind}",
        f"    // Child code SHA-256: {ast.source_code_sha256}",
        f"    // Raw opcode words: {' '.join(ast.raw_words)}",
        f'    @:hashAbi("{method_hash}")',
        f'    @:native("{method_hash}")',
        f"    public function {method_name}{ast.signature} {{",
    ]
    lines.extend(f"        {s}" for s in ast.statements)
    lines += ["    }",""]
    return "\n".join(lines)
