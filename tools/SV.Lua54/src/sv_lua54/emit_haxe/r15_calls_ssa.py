"""R15 exact source-owned Lua54 SELF/CALL/TEST to Haxe, including return-phi.

Only the two named, verified SV400 root C->prototype->F Setup methods.
CALLs remain opaque/mock-observed, not Nintendo engine-equivalent.
"""
from dataclasses import dataclass
from hashlib import sha256
import re
from ..r1 import decode, syntactic_edges
from .restricted import LiftFailure

METHODS={
 "main.field.action.base.IAction.Setup":(12930,10,12),
 "main.field.action.base.IAutoAction.Setup":(13197,2,4),
}
FIELDS=("F22C7B81A049FA20D","component","f558733FC","updateInterval")
BASEWORDS=(
 "00008094","020200C4","000000C2","800003B8",None,None,
 "02010092","02028194","0301028E","010301C4","00000187",
 "000201C8","00000085","000200C8","000100C7",
)
CHECKS={0:("SELF",1,0,0,1),1:("CALL",1,2,2,0),
 2:("TEST",1,0,0,0),4:("GETI",1,0,None,0),
 5:("GETI",2,0,None,0),6:("SETFIELD",1,1,2,0),
 7:("SELF",3,2,2,1),8:("GETFIELD",5,1,3,0),
 9:("CALL",3,3,1,0),10:("LOADTRUE",3,0,0,0),
 11:("RETURN1",3,2,0,0),12:("LOADFALSE",1,0,0,0),
 13:("RETURN1",1,2,0,0),14:("RETURN0",1,1,0,0)}
RETURN_PHI={"kind":"SYNTHETIC_FUNCTION_EXIT_RETURN_PHI","inputs":[
 {"from_pc":11,"value":"R3@10","literal":True},
 {"from_pc":13,"value":"R1@12","literal":False}]}
CALL_SITES=[
 {"self_pc":0,"call_pc":1,"method":FIELDS[0],
  "receiver":"R0","arguments":["R0"],"result":"R1@1"},
 {"self_pc":7,"call_pc":9,"method":FIELDS[2],
  "receiver":"R2@5","arguments":["R4@7","R5@8"],"result":"DISCARDED"}]

@dataclass(frozen=True)
class Ast:
    kind:str
    proto_id:int
    sha:str
    words:tuple
    edges:tuple
    ssa:tuple
    blocks:tuple
    first_slot:int
    second_slot:int
    lines:tuple

def lift(proto,classname):
    expected=METHODS.get(classname)
    if expected is None or proto.id!=expected[0]:
        raise LiftFailure("R15 source-owned root C/F target mismatch")
    if (proto.parent_id!=0 or proto.upvalue_count!=0
            or proto.children or proto.is_vararg or proto.num_params!=1):
        raise LiftFailure("R15 no upvalues, nested Proto or extra args")
    const=[]
    for c in proto.constants:
        if c.tag not in (4,20) or not isinstance(c.payload,bytes):
            raise LiftFailure("R15 original K must be string")
        try:const.append(c.payload.decode("utf8"))
        except UnicodeDecodeError as e:raise LiftFailure("R15 invalid K UTF8") from e
    if tuple(const)!=FIELDS:raise LiftFailure("R15 original hashed SELF/field K changed")
    ops=decode(proto)
    w=tuple(f"{x.word:08X}" for x in ops)
    if len(w)!=15 or any(base and base!=word for base,word in zip(BASEWORDS,w)):
        raise LiftFailure("R15 original 15 opcode fingerprint changed")
    for pc,(name,a,b,c,k) in CHECKS.items():
        o=ops[pc]
        if (o.name,o.a,o.b,o.k)!=(name,a,b,k) or (c is not None and o.c!=c):
            raise LiftFailure(f"R15 original register/operation PC {pc} differs")
    if ((ops[4].c,ops[5].c)!=(expected[1],expected[2])
            or ops[3].name!="JMP" or ops[3].sj!=8):
        raise LiftFailure("R15 native self slots or branch target changed")
    edges,bad=syntactic_edges(proto)
    if bad or any(x not in edges for x in (
            (2,3,"TEST_NEXT"),(2,4,"TEST_SKIP"),(3,12,"JMP"),
            (10,11,"SEQUENTIAL"),(12,13,"SEQUENTIAL"))):
        raise LiftFailure("R15 original CFG does not have tested join structure")
    blocks=(
      {"name":"ENTRY","pcs":[0,1,2],"succ":["THEN","JMP_ELSE"]},
      {"name":"JMP_ELSE","pcs":[3],"succ":["ELSE"]},
      {"name":"THEN","pcs":list(range(4,12)),"succ":["RETURN_PHI"]},
      {"name":"ELSE","pcs":[12,13],"succ":["RETURN_PHI"]},
      {"name":"RETURN_PHI","pcs":[],"succ":[]},
    )
    ssa=(
      {"pc":0,"defs":["R1@0","R2@0"],"uses":["R0","K0"],"effect":"SELF_GET"},
      {"pc":1,"defs":["R1@1"],"uses":["R1@0","R2@0"],"effect":"OPAQUE_CALL"},
      {"pc":2,"defs":[],"uses":["R1@1"],"effect":"TEST"},
      {"pc":4,"defs":["R1@4"],"uses":["R0"],"effect":"GETI"},
      {"pc":5,"defs":["R2@5"],"uses":["R0"],"effect":"GETI"},
      {"pc":6,"defs":[],"uses":["R1@4","R2@5","K1"],"effect":"SETFIELD"},
      {"pc":7,"defs":["R3@7","R4@7"],"uses":["R2@5","K2"],"effect":"SELF_GET"},
      {"pc":8,"defs":["R5@8"],"uses":["R1@4","K3"],"effect":"GETFIELD"},
      {"pc":9,"defs":[],"uses":["R3@7","R4@7","R5@8"],"effect":"OPAQUE_CALL"},
      {"pc":10,"defs":["R3@10"],"uses":[],"effect":"TRUE"},
      {"pc":11,"defs":[],"uses":["R3@10"],"effect":"RETURN"},
      {"pc":12,"defs":["R1@12"],"uses":[],"effect":"FALSE"},
      {"pc":13,"defs":[],"uses":["R1@12"],"effect":"RETURN"},
    )
    slot1,slot2=expected[1:]
    lines=(
      f'var r15Method:Dynamic = untyped this["{FIELDS[0]}"];',
      'var r15OK:Dynamic = r15Method(this);',
      'if (r15OK) {',
      f'    var r15Target:Dynamic = untyped this[{slot1}];',
      f'    var r15Child:Dynamic = untyped this[{slot2}];',
      f'    untyped r15Target["{FIELDS[1]}"] = r15Child;',
      f'    var r15Invoke:Dynamic = untyped r15Child["{FIELDS[2]}"];',
      f'    var r15Interval:Dynamic = untyped r15Target["{FIELDS[3]}"];',
      '    r15Invoke(r15Child, r15Interval);',
      '    return true;',
      '}',
      'return false;',
    )
    return Ast("SELF_CALL_TEST_CFG_SSA_RETURN_PHI",proto.id,
               sha256(proto.code).hexdigest(),w,tuple(edges),ssa,blocks,
               slot1,slot2,lines)

def emit(method,method_hash,ast):
    if method!="Setup" or not re.fullmatch(r"F[0-9A-F]{16}",method_hash):
        raise LiftFailure("R15 invalid native F method")
    return "\n".join([
      f"    // R15 original Child {ast.proto_id} with CFG/SSA and synthetic return phi",
      f"    // code SHA256 {ast.sha}, words {' '.join(ast.words)}",
      f'    @:hashAbi("{method_hash}")',
      f'    @:native("{method_hash}")',
      "    public function Setup():Bool {",
      *["        "+x for x in ast.lines],
      "    }","",
    ])

# Explicit public names used by the CI staging/provenance gates.
lift_setup = lift
emit_setup = emit
