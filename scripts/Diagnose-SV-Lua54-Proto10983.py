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

def lift(path, proto_id=10983):
    raw=SRC.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==SHA
    chunk=parse(raw)
    original=next(x for x in chunk.protos() if x.id==proto_id)
    expected={10983:(93,0x59157A,1), 34363:(208,0xB34690,6)}
    assert proto_id in expected
    count, code_off, children=expected[proto_id]
    assert original.parent_id==0 and original.instruction_count==count
    assert original.code_offset==code_off and len(original.children)==children
    lifted=Chunk(chunk.header,original.upvalue_count,original,"").encode()
    assert parse(lifted).encode()==lifted
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_bytes(lifted)
    print('SLR_NATIVE_LIFT',len(lifted),original.id,original.instruction_count,
          'child',len(original.children), 'upvalue',original.upvalue_count,flush=True)

def instrument(folder):
    path=folder/'src/hir/analyze/short_circuit/decision.rs'
    text=path.read_text()
    before='    let resolved = resolve_condition_nodes(condition, &remap)?;'
    after='''    let resolved = match resolve_condition_nodes(condition, &remap) {
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
    after='''    (!nodes.is_empty()).then_some(HirDecisionExpr {'''
    assert text.count(before)==1
    text=text.replace(before,after)
    source='''                let (mut expr, mut test_source) = if node.id == condition.entry {
                    lower_short_circuit_subject(lowering, node.block, node.predicate)
                } else {
                    lower_short_circuit_subject_single_eval(lowering, node.block, node.predicate)
                }?;'''
    target='''                let (mut expr, mut test_source) = match if node.id == condition.entry {
                    lower_short_circuit_subject(lowering, node.block, node.predicate)
                } else {
                    lower_short_circuit_subject_single_eval(lowering, node.block, node.predicate)
                } {
                    Some(value) => value,
                    None => {
                        eprintln!("SV10983_FAILURE=subject node={:?} block={:?} predicate={:?}", node.id, node.block, node.predicate);
                        return None;
                    }
                };'''
    assert text.count(source)==1
    text=text.replace(source,target)
    source='''                    let read = super::super::exprs::expr_for_ssa_value_in_block(
                        lowering,
                        node.block,
                        crate::structure::SsaValue::Phi(value.phi),
                    )?;
                    let binding = crate::hir::HirBinding::from_expr(&read)?;'''
    target='''                    let read = match super::super::exprs::expr_for_ssa_value_in_block(
                        lowering,
                        node.block,
                        crate::structure::SsaValue::Phi(value.phi),
                    ) {
                        Some(read) => read,
                        None => {
                            eprintln!("SV10983_FAILURE=ssa_value_in_block producer={:?} consumer={:?} phi={:?}", producer_id, node.id, value.phi);
                            return None;
                        }
                    };
                    let binding = match crate::hir::HirBinding::from_expr(&read) {
                        Some(binding) => binding,
                        None => {
                            eprintln!("SV10983_FAILURE=binding_from_expr read={:?}", read);
                            return None;
                        }
                    };'''
    assert text.count(source)==1
    text=text.replace(source,target)
    source='''                    if crate::hir::rewrite::replace_binding_in_expr(
                        &mut expr,
                        binding,
                        &replacement,
                    ) != 1
                    {
                        return None;
                    }'''
    target='''                    let replaced = crate::hir::rewrite::replace_binding_in_expr(
                        &mut expr,
                        binding,
                        &replacement,
                    );
                    if replaced != 1 {
                        eprintln!("SV10983_FAILURE=replace_binding count={} producer={:?} consumer={:?} phi={:?} expr={:?} replacement={:?} read={:?}", replaced, producer_id, node.id, value.phi, expr, replacement, read);
                        return None;
                    }'''
    assert text.count(source)==1
    text=text.replace(source,target)
    # EXPERIMENT: bypass scalar substitution only when the consumer is a freshly
    # created closure that captures the exact lexical binding by reference.
    source='''                    if replaced != 1 {
                        eprintln!("SV10983_FAILURE=replace_binding count={} producer={:?} consumer={:?} phi={:?} expr={:?} replacement={:?} read={:?}", replaced, producer_id, node.id, value.phi, expr, replacement, read);
                        return None;
                    }'''
    target='''                    let captured_by_ref = if let HirExpr::Call(call) = &expr {
                        if let HirExpr::Closure(closure) = &call.callee {
                            closure.captures.iter().any(|capture| {
                                capture.mode == crate::hir::HirCaptureMode::ByReference
                                    && capture.binding == binding
                            })
                        } else { false }
                    } else { false };
                    if replaced == 0 && captured_by_ref
                        && condition.nodes.len() == 2
                        && producer.id == condition.entry
                        && value.consumer == node.id
                        && matches!(&replacement, HirExpr::Binary(binary)
                            if binary.op == crate::hir::HirBinaryOpKind::Lt)
                    {
                        eprintln!("SV10983_CAPTURE_REFERENCE_RETAINED binding={:?}", binding);
                    } else if replaced != 1 {
                        eprintln!("SV10983_FAILURE=replace_binding count={} producer={:?} consumer={:?} phi={:?} expr={:?} replacement={:?} read={:?}", replaced, producer_id, node.id, value.phi, expr, replacement, read);
                        return None;
                    }'''
    assert text.count(source)==1
    text=text.replace(source,target)
    path.write_text(text)

    # The control connectors originally contain LFALSESKIP/LOADTRUE writes.
    # An observed ByReference capture requires an explicit lexical-cell write
    # after the header prefix and before the closure expression is evaluated.
    loop_file=folder/'src/hir/analyze/structure/plan_body/loops.rs'
    loops=loop_file.read_text()
    source='''        Ok(PlannedLoopCondition {
            prefix: self.lower_condition_prefix(owner, header)?,
            cond: finalize_condition_decision_expr('''
    target='''        let mut prefix = self.lower_condition_prefix(owner, header)?;
        if let [producer, consumer] = condition.nodes.as_slice()
            && producer.id == condition.entry
            && let Some(value) = &producer.materialized_value
            && value.consumer == consumer.id
            && let Some(HirExpr::LocalRef(local_id)) =
                super::super::super::exprs::expr_for_ssa_value_in_block(
                    self.lowering, consumer.block,
                    crate::structure::SsaValue::Phi(value.phi))
            && let Some((producer_expr, _)) =
                super::super::super::short_circuit::lower_short_circuit_subject(
                    self.lowering, producer.block, producer.predicate)
            && matches!(&producer_expr, HirExpr::Binary(binary) if binary.op == crate::hir::HirBinaryOpKind::Lt)
            && let Some((HirExpr::Call(call), _)) =
                super::super::super::short_circuit::lower_short_circuit_subject_single_eval(
                    self.lowering, consumer.block, consumer.predicate)
            && let HirExpr::Closure(closure) = &call.callee
            && closure.captures.iter().any(|capture|
                capture.mode == crate::hir::HirCaptureMode::ByReference &&
                capture.binding == crate::hir::HirBinding::Local(local_id))
        {
            eprintln!("SV10983_EXPLICIT_CAPTURED_BOOLEAN local={:?} from={:?}", local_id, producer.predicate);
            prefix.push(assign_stmt(
                vec![HirLValue::Local(local_id)],
                vec![producer_expr],
            ));
        }
        Ok(PlannedLoopCondition {
            prefix,
            cond: finalize_condition_decision_expr('''
    assert loops.count(source)==1
    loops=loops.replace(source,target)
    loop_file.write_text(loops)
    # The experimental loop call site lives outside short_circuit's parent
    # module; expose only the two already crate-scoped helpers in this
    # ephemeral upstream checkout, not in the user's source tree.
    public_file=folder/'src/hir/analyze/short_circuit/mod.rs'
    public_text=public_file.read_text()
    source='use self::lowering::{lower_short_circuit_subject, lower_short_circuit_subject_single_eval};'
    assert public_text.count(source)==1
    public_text=public_text.replace(source,'pub(crate) use self::lowering::{lower_short_circuit_subject, lower_short_circuit_subject_single_eval};')
    public_file.write_text(public_text)

if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--lift',type=Path)
    p.add_argument('--instrument',type=Path);p.add_argument('--proto-id',type=int,default=10983);args=p.parse_args()
    if args.lift:lift(args.lift,args.proto_id)
    if args.instrument:instrument(args.instrument)
