"""Conservative bounded Lua 5.4 PC CFG, basic blocks and reaching definitions.

Diagnostic only: a merged register definition is a PHI CANDIDATE, not
reconstructed HIR, type, memory SSA or Haxe code. CALL is an opaque heap
and external side-effect barrier. Unsupported opcodes are explicitly flagged.
"""
from __future__ import annotations
from collections import defaultdict, deque
from hashlib import sha256
from ..r1 import decode, syntactic_edges
from .restricted import LiftFailure

SINGLE_WRITE={
 "MOVE","LOADI","LOADF","LOADK","LOADKX","LOADFALSE","LFALSESKIP",
 "LOADTRUE","GETUPVAL","GETTABUP","GETTABLE","GETI","GETFIELD",
 "NEWTABLE","ADD","ADDI","ADDK","SUB","SUBK","MUL","MULK","DIV",
 "DIVK","IDIV","IDIVK","MOD","MODK","POW","POWK","BAND","BANDK",
 "BOR","BORK","BXOR","BXORK","SHRI","SHLI","SHL","SHR",
 "UNM","BNOT","NOT","LEN","CONCAT","CLOSURE",
}
NO_WRITE={
 "SETUPVAL","SETTABUP","SETTABLE","SETI","SETFIELD","SETLIST",
 "JMP","EQ","LT","LE","EQK","EQI","LTI","LEI","GTI","GEI","TEST",
 "RETURN","RETURN0","RETURN1","TBC","CLOSE","EXTRAARG",
}
OPAQUE={"CALL","TAILCALL","SELF","TESTSET","VARARG","VARARGPREP",
        "FORLOOP","FORPREP","TFORPREP","TFORCALL","TFORLOOP"}


def register_writes(ins,stack):
    op=ins.name
    if op in SINGLE_WRITE:
        effect=("READ_MAY_INVOKE_INDEX_METAMETHOD"
                if op in ("GETTABUP","GETTABLE","GETI","GETFIELD") else None)
        return set(range(ins.a,min(ins.a+1,stack))),effect
    if op=="LOADNIL":
        return set(range(ins.a,min(ins.a+ins.b+1,stack))),None
    if op=="SELF":
        return set(range(ins.a,min(ins.a+2,stack))),"OPAQUE_GETTABLE_METHOD"
    if op=="CALL":
        count=stack-ins.a if ins.c==0 else max(0,ins.c-1)
        return set(range(ins.a,min(ins.a+count,stack))),"OPAQUE_CALL_HEAP_BARRIER"
    if op=="TESTSET":
        return {ins.a},"CONDITIONAL_WRITE_UNVERIFIED"
    if op=="VARARG":
        count=stack-ins.a if ins.c==0 else max(0,ins.c-1)
        return set(range(ins.a,min(ins.a+count,stack))),"VARARG_UNKNOWN_TOP"
    if op in NO_WRITE:
        effect=("WRITE_MAY_INVOKE_NEWINDEX_METAMETHOD"
                if op in ("SETTABUP","SETTABLE","SETI","SETFIELD")
                else "OPAQUE_TABLE_MUTATION" if op=="SETLIST" else None)
        return set(),effect
    if op in OPAQUE or op not in NO_WRITE:
        return set(),"UNSUPPORTED_REGISTER_EFFECT"
    return set(),"UNSUPPORTED_REGISTER_EFFECT"


def inspect(proto,max_instructions=64,max_stack=255):
    if not 1<=proto.instruction_count<=max_instructions:
        raise LiftFailure("out of bounds for R15 generic SSA diagnostic")
    if proto.max_stack_size>max_stack:
        raise LiftFailure("stack exceeds bounded diagnostic")
    ops=decode(proto)
    edges,defects=syntactic_edges(proto)
    if defects:
        raise LiftFailure(f"native CFG edge defects: {defects[:2]}")
    stack=proto.max_stack_size
    if stack<proto.num_params:
        raise LiftFailure("invalid VM max_stack_size smaller than fixed args")
    succ=defaultdict(list)
    pred=defaultdict(list)
    for a,b,kind in edges:
        succ[a].append((b,kind))
        pred[b].append((a,kind))
    reachable={0}
    queue=deque([0])
    while queue:
        pc=queue.popleft()
        for dest,_ in succ[pc]:
            if dest not in reachable:
                reachable.add(dest)
                queue.append(dest)
    # Leaders begin at entry, any branch target, return-boundary, and
    # any PC with multiple distinct predecessor PCs.
    leaders={0}
    for pc in reachable:
        outgoing=succ[pc]
        if len(outgoing)!=1 or outgoing[0][0]!=pc+1 or outgoing[0][1]!="SEQUENTIAL":
            for dst,_ in outgoing:
                if dst in reachable:leaders.add(dst)
            if pc+1 in reachable:leaders.add(pc+1)
        if len({i for i,_ in pred[pc] if i in reachable})>1:
            leaders.add(pc)
    blocks=[]
    visited=set()
    for head in sorted(leaders):
        if head not in reachable or head in visited:continue
        pcs=[head]
        visited.add(head)
        cur=head
        while True:
            nxt=cur+1
            if (nxt not in reachable or nxt in leaders or nxt in visited
                    or succ[cur]!=[(nxt,"SEQUENTIAL")]):
                break
            pcs.append(nxt)
            visited.add(nxt)
            cur=nxt
        blocks.append({"start":head,"pcs":pcs,
                       "successors":[{"pc":dst,"edge":kind} for dst,kind in succ[cur]
                                     if dst in reachable]})
    if visited!=reachable:
        raise LiftFailure("basic-block partition incomplete")
    # Reaching writes: union at CFG joins. Initial R0..R(num_params-1)
    # are explicitly parameter values; all other stack slots UNINITIALIZED.
    initial=tuple(frozenset((f"PARAM_R{i}",) if i<proto.num_params
                             else (f"UNINITIALIZED_R{i}",))
                  for i in range(stack))
    incoming={0:initial}
    work=deque([0]);visits=0
    barriers=[]
    unsupported=[]
    write_log=[]
    for ins in ops:
        writes,effect=register_writes(ins,stack)
        if ins.pc not in reachable:continue
        if effect:
            barriers.append({"pc":ins.pc,"op":ins.name,"effect":effect})
            if effect=="UNSUPPORTED_REGISTER_EFFECT":unsupported.append(ins.pc)
        for r in sorted(writes):
            write_log.append({"pc":ins.pc,"register":r,"version":f"R{r}@{ins.pc}",
                              "effect":effect})
    while work:
        visits+=1
        if visits>max_instructions*max(4,stack)*5:
            raise LiftFailure("bounded native reaching-definitions did not converge")
        pc=work.popleft()
        state=list(incoming[pc])
        writes,effect=register_writes(ops[pc],stack)
        for reg in writes:
            state[reg]=frozenset((f"R{reg}@{pc}",))
            if effect=="CONDITIONAL_WRITE_UNVERIFIED":
                state[reg]=frozenset(set(state[reg])|set(incoming[pc][reg]))
        for dst,_ in succ[pc]:
            if dst not in reachable:continue
            before=incoming.get(dst)
            if before is None:
                incoming[dst]=tuple(state)
                work.append(dst)
            else:
                merged=tuple(before[i]|state[i] for i in range(stack))
                if merged!=before:
                    incoming[dst]=merged
                    work.append(dst)
    phis=[]
    for pc in sorted(reachable):
        upstream=sorted({u for u,_ in pred[pc] if u in reachable})
        if len(upstream)<2:continue
        for reg,definitions in enumerate(incoming[pc]):
            if len(definitions)>1:
                phis.append({"join_pc":pc,"register":reg,
                             "incoming_predecessor_pcs":upstream,
                             "reaching_versions":sorted(definitions),
                             "status":"SSA_PHI_CANDIDATE_ONLY"})
    calls=[{"pc":x.pc,"op":x.name,"a":x.a,"b":x.b,"c":x.c,
            "k":x.k,"note":"CALL_TARGET_HOST_UNKNOWN_UNTIL_RUNTIME"} for x in ops
           if x.pc in reachable and x.name in ("SELF","CALL","TAILCALL")]
    returns=[{"pc":x.pc,"kind":x.name,"register":x.a if x.name=="RETURN1" else None}
             for x in ops if x.pc in reachable and x.name in ("RETURN1","RETURN0","RETURN")]
    synthetic_exit={
      "kind":"SYNTHETIC_FUNCTION_EXIT_RETURN_PHI_CANDIDATE",
      "incoming_returns":returns,
      "not_a_real_bytecode_block":True,
      "status":"READ_ONLY_NOT_HAXE_VERIFIED",
    } if len(returns)>=2 else None
    return {
      "kind":"BOUNDED_REGISTER_REACHING_DEFS_NOT_FULL_SSA",
      "proto_id":proto.id,
      "code_sha256":sha256(proto.code).hexdigest(),
      "code_count":proto.instruction_count,
      "reachable_pc_count":len(reachable),
      "unreachable_pcs":sorted(set(range(len(ops)))-reachable),
      "basic_blocks":blocks,
      "phi_candidates":phis,
      "synthetic_exit_return_join":synthetic_exit,
      "call_sites":calls,
      "call_or_unhandled_effect_barriers":barriers,
      "unsupported_register_effect_pcs":unsupported,
      "register_definitions":write_log,
      "memory_ssa_status":"NOT_PROVEN_CALL_HEAP_CAN_MUTATE",
      "game_runtime_status":"NOT_OBSERVED",
      "haxe_source_generated":False,
    }
