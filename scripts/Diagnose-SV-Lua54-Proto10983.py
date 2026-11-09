#!/usr/bin/env python3
"""Diagnose strict unluac-rs loop condition recovery on pinned SV main Proto 10983."""
import argparse
from pathlib import Path
import sys
import hashlib

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/SV.Lua54/src'))
from sv_lua54.chunk import Chunk,parse

SRC=ROOT/'Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua'
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"

def lift(path):
    raw=SRC.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==SHA
    chunk=parse(raw)
    original=next(x for x in chunk.protos() if x.id==10983)
    assert original.parent_id==0 and original.instruction_count==93
    assert original.code_offset==0x59157A and len(original.children)==1
    lifted=Chunk(chunk.header,original.upvalue_count,original,"").encode()
    assert parse(lifted).encode()==lifted
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_bytes(lifted)
    print('SLR10983_LIFT',len(lifted),original.id,original.instruction_count,
          'child',len(original.children), 'upvalue',original.upvalue_count,flush=True)

def instrument(folder):
    path=folder/'src/hir/analyze/short_circuit/decision.rs'
    text=path.read_text()
    before='    let resolved = resolve_condition_nodes(condition, &remap)?;'
    after='''    eprintln!("SV10983_CONDITION_PLAN_BEGIN {:#?}", condition);
    let resolved = match resolve_condition_nodes(condition, &remap) {
        Some(value) => value,
        None => {
            eprintln!("SV10983_FAILURE=resolve_condition_nodes");
            return None;
        }
    };'''
    assert text.count(before)==1
    text=text.replace(before,after)
    before='    let mut subjects = lower_condition_subjects(lowering, condition, &values_by_consumer)?;'
    after='''    let mut subjects = match lower_condition_subjects(lowering, condition, &values_by_consumer) {
        Some(value) => value,
        None => {
            eprintln!("SV10983_FAILURE=lower_condition_subjects");
            return None;
        }
    };'''
    assert text.count(before)==1
    text=text.replace(before,after)
    before='    (!nodes.is_empty()).then_some(HirDecisionExpr {'
    after='''    eprintln!("SV10983_RESOLVED_NODES={} physical_nodes={}", nodes.len(), condition.nodes.len());
    (!nodes.is_empty()).then_some(HirDecisionExpr {'''
    assert text.count(before)==1
    text=text.replace(before,after)
    # This diagnostic does not allow any new rejected lowering to pass.
    path.write_text(text)

if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--lift',type=Path)
    p.add_argument('--instrument',type=Path);args=p.parse_args()
    if args.lift:lift(args.lift)
    if args.instrument:instrument(args.instrument)
