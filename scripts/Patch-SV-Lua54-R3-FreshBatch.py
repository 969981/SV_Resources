#!/usr/bin/env python3
"""Experimental upstream unluac-rs 1.4.5 HIR table-constructor fusion.

Adds a tightly guarded transformation for one fresh local table followed by
three scalar LocalDecl producers and one fixed three-slot raw SETLIST.
Unlike the existing indexed-write fallback, it keeps table constructor
semantics for possible nil values. This is a *candidate* until the upstream
regressions and full Proto 752 validation complete.

Patches an EPHEMERAL clone; no upstream repository write.
"""
from __future__ import annotations
import argparse
from pathlib import Path

FILE = Path("src/hir/simplify/table_constructors/mod.rs")
ANCHOR_CALL = """            // Fresh local seeds can have harmless scalar/keyed setup statements between the
            // allocation and SETLIST. Preserve those statements and replace only the raw fixed"""
CALL = """            // SLR R3: preserve native raw SETLIST nil-hole semantics by folding a
            // fully-owned, contiguous scalar producer region into its original
            // fresh constructor. Do not relax indexed-write nil shape guards.
            if self.stage == TableConstructorStage::LowerFixedBatches
                && self.fold_fresh_scalar_batch_into_constructor(block, index, binding, &set_list)
            {
                changed = true;
                index = index.saturating_sub(4);
                continue;
            }

"""
ANCHOR_IMPL = """    fn find_local_set_list_seed_for_indexed_writes(
        &self,"""
IMPL = """    /// Experimental SLR R3: a contiguous fresh LocalDecl table plus exactly
    /// three one-use scalar-producing LocalDecls may be reconstructed as
    /// one Lua table constructor. The native SETLIST is thus emitted again
    /// by Lua rather than replaced with metatable-observable indexed writes.
    ///
    /// Non-contiguous regions, variable-arity, captured/debug identities,
    /// alternate SSA producers, nil-unsafe indexed fallbacks, and externally
    /// used producer locals are all rejected.
    fn fold_fresh_scalar_batch_into_constructor(
        &self,
        block: &mut crate::hir::common::HirBlock,
        set_index: usize,
        binding: TableBinding,
        batch: &crate::hir::common::HirTableSetList,
    ) -> bool {
        let TableBinding::Local(owner) = binding else {
            return false;
        };
        eprintln!("SLR_R3_FOLD entered index={set_index} owner={owner:?} start={} count={} tail={}", batch.start_index, batch.values.fixed.len(), batch.values.tail.is_some());
        if batch.start_index != 1
            || batch.values.fixed.len() != 3
            || batch.values.tail.is_some()
            || batch.initializer_debug_scope.is_some()
        {
            return false;
        }
        let Some(seed_index) = set_index.checked_sub(4) else {
            return false;
        };
        let Some((seed_binding, ctor_ref)) = constructor_seed(&block.stmts[seed_index]) else {
            eprintln!("SLR_R3_FOLD failed: no seed four statements earlier");
            return false;
        };
        let mut ctor = ctor_ref.clone();
        let HirStmt::LocalDecl(seed_decl) = &block.stmts[seed_index] else {
            return false;
        };
        eprintln!("SLR_R3_FOLD seed_binding={seed_binding:?} local={:?} allocation={:?} fields={} debug={} captured={} frame={}", seed_decl.bindings, ctor.allocation, ctor.fields.len(), self.debug_identity_bindings.get(binding).copied().unwrap_or(false), self.reference_captured_bindings.get(binding).copied().unwrap_or(false), self.call_frame_prefix.contains(&owner));
        if seed_binding != binding
            || seed_decl.bindings.as_slice() != [owner]
            || seed_decl.values.fixed.len() != 1
            || seed_decl.values.tail.is_some()
            || seed_decl.initializer_merge_transaction.is_some()
            || seed_decl.generic_for_initializer_producer.is_some()
            || !ctor.fields.is_empty()
            || ctor.trailing_multivalue.is_some()
            || !matches!(&ctor.allocation, crate::hir::HirTableAllocation::PucBatched(_))
            || self.debug_identity_bindings.get(binding).copied().unwrap_or(false)
            || self.reference_captured_bindings.get(binding).copied().unwrap_or(false)
        {
            return false;
        }
        let mut producers = Vec::new();
        let mut expressions = Vec::new();
        for offset in 0..3 {
            let HirStmt::LocalDecl(decl) = &block.stmts[seed_index + offset + 1] else {
                eprintln!("SLR_R3_FOLD producer slot {offset} not LocalDecl");
                return false;
            };
            let [producer] = decl.bindings.as_slice() else {
                return false;
            };
            let [value] = decl.values.fixed.as_slice() else {
                return false;
            };
            if decl.values.tail.is_some()
                || decl.initializer_merge_transaction.is_some()
                || decl.generic_for_initializer_producer.is_some()
                || !matches!(batch.values.fixed.get(offset), Some(HirExpr::LocalRef(local)) if local == producer)
                || self.reference_captured_bindings.get(TableBinding::Local(*producer)).copied().unwrap_or(false)
                || self.debug_identity_bindings.get(TableBinding::Local(*producer)).copied().unwrap_or(false)
                || self.call_frame_prefix.contains(producer)
            {
                return false;
            }
            // Only direct scalar computations; no calls/pack values, nested
            // allocations or unresolved expressions can be moved.
            if !matches!(value,
                HirExpr::Binary(_) | HirExpr::Unary(_)
                | HirExpr::Integer(_) | HirExpr::Number(_)
                | HirExpr::Boolean(_) | HirExpr::Nil
                | HirExpr::LocalRef(_) | HirExpr::TempRef(_) | HirExpr::ParamRef(_)
            ) {
                return false;
            }
            eprintln!("SLR_R3_FOLD producer offset={offset} local={producer:?} expr={:?}", value);
            producers.push(TableBinding::Local(*producer));
            expressions.push(value.clone());
        }
        eprintln!("SLR_R3_FOLD gathered three locals; checking circular references");
        if expressions.iter().any(|value| expr_uses_binding(value, binding)
            || producers.iter().any(|producer| expr_uses_binding(value, *producer)))
        {
            return false;
        }
        // No value-producing local may be referenced, overwritten or captured
        // after the original raw batch. Otherwise removing declarations would
        // be a semantic change. The original owner local itself survives.
        let mut index = BindingIndex::new(self.temp_count, self.next_local_index);
        let ids = producers.iter().map(|x| index.intern(*x)).collect::<Vec<_>>();
        eprintln!("SLR_R3_FOLD checking later uses after index={set_index}");
        for stmt in &block.stmts[set_index + 1..] {
            let summary = collect_stmt_binding_summary(stmt, &mut index);
            if summary.uses().chain(summary.writes()).any(|id| ids.contains(&id)) {
                eprintln!("SLR_R3_FOLD rejected: producer local referenced/rewritten later");
                return false;
            }
        }
        // A Lua 5.4 table constructor evaluates its value expressions in
        // increasing order after allocating the table. It emits raw SETLIST
        // for its final fixed batch, including possible nil array values.
        eprintln!("SLR_R3_FOLD SUCCESS owner={owner:?} index={set_index} fresh table and three producer expressions");
        ctor.fields.extend(expressions.into_iter().map(HirTableField::Array));
        install_constructor_seed(&mut block.stmts[seed_index], ctor);
        block.stmts.drain(seed_index + 1..=set_index);
        true
    }

"""

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--upstream", type=Path, required=True)
    args=p.parse_args()
    target=args.upstream/FILE
    s=target.read_text("utf-8")
    for anchor in (ANCHOR_CALL, ANCHOR_IMPL):
        if s.count(anchor)!=1:
            raise SystemExit(f"missing or non-unique v1.4.5 upstream anchor: {anchor[:65]}")
    if "fold_fresh_scalar_batch_into_constructor" in s:
        raise SystemExit("already patched")
    s=s.replace(ANCHOR_CALL,CALL+ANCHOR_CALL).replace(ANCHOR_IMPL,IMPL+ANCHOR_IMPL)
    target.write_text(s,"utf-8")
    print("Applied guarded R3 fresh-scalar/SETLIST constructor fusion to temporary upstream checkout")

if __name__=="__main__":
    main()
