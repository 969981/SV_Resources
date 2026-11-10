#!/usr/bin/env python3
"""SLR R8 experimental narrowly guarded Lua 5.4 open SETLIST constructor repair.

Applies only to an ephemeral pinned unluac-rs v1.4.5 checkout. Folds the
original NEWTABLE -> CLOSURE -> CALL -> CLOSURE -> CALL(open) -> SETLIST
sequence back into the original constructor, preserving table allocation
position and the two calls' order. Does not manufacture table-index writes.
"""
from pathlib import Path
import argparse

FILE=Path("src/hir/simplify/table_constructors/mod.rs")
INSERT_BEFORE="    /// Lower a fixed SETLIST to indexed writes only when an explicit fresh seed dominates it."
INSERT_IN_LOOP="""            if self.fold_fixed_batch_across_root_copy(block, index, binding, &set_list) {"""
REPLACEMENT="""            if self.slr_r8_fold_open_capture_constructor(block, index, binding, &set_list) {
                changed = true;
                continue;
            }
            if self.fold_fixed_batch_across_root_copy(block, index, binding, &set_list) {"""

METHOD=r"""    /// R8: original PUC open batch with a single scalar closure producer.
    /// This is deliberately a structural proof, not a generic CFG rewrite.
    fn slr_r8_fold_open_capture_constructor(
        &self,
        block: &mut crate::hir::common::HirBlock,
        index: usize,
        binding: TableBinding,
        set_list: &crate::hir::common::HirTableSetList,
    ) -> bool {
        let Some(seed_i) = index.checked_sub(3) else { return false };
        let TableBinding::Local(owner) = binding else { return false };
        let Some((source, seed)) = constructor_seed(&block.stmts[seed_i]) else {
            return false;
        };
        if source != binding
            || !matches!(&block.stmts[seed_i], HirStmt::LocalDecl(decl)
                if decl.bindings.as_slice() == [owner])
            || !seed.fields.is_empty()
            || seed.trailing_multivalue.is_some()
            || !matches!(&seed.allocation, crate::hir::common::HirTableAllocation::PucBatched(a)
                if a.array_capacity == 1 && a.hash_capacity == 0)
            || set_list.start_index != 1
            || set_list.values.fixed.len() != 1
            || set_list.values.tail.as_ref().is_none_or(|t| t.exact_width().is_some())
            || self.debug_identity_bindings.get(binding).copied().unwrap_or_default()
            || self.reference_captured_bindings.get(binding).copied().unwrap_or_default()
            || self.preserved_identity_bindings.get(binding).copied().unwrap_or_default()
        { return false; }

        let HirStmt::LocalDecl(middle) = &block.stmts[seed_i+1] else { return false };
        let ([middle_local], [HirExpr::Closure(closure)], None) =
            (middle.bindings.as_slice(), middle.values.fixed.as_slice(), &middle.values.tail)
        else { return false };
        let middle_local = *middle_local;
        let middle_binding = TableBinding::Local(middle_local);
        if middle.generic_for_initializer_producer.is_some()
            || middle.initializer_merge_transaction.is_some()
            || self.debug_identity_bindings.get(middle_binding).copied().unwrap_or_default()
            || self.reference_captured_bindings.get(middle_binding).copied().unwrap_or_default()
            || self.preserved_identity_bindings.get(middle_binding).copied().unwrap_or_default()
            || closure.captures.iter().any(|capture|
                capture.binding == crate::hir::HirBinding::Local(owner)
                || capture.binding == crate::hir::HirBinding::Local(middle_local))
        { return false; }
        let original_closure = closure.clone();

        let HirStmt::Assign(a) = &block.stmts[seed_i+2] else { return false };
        let ([HirLValue::Local(target)], [HirExpr::Call(call)], None) =
            (a.targets.as_slice(), a.values.fixed.as_slice(), &a.values.tail)
        else { return false };
        if *target != middle_local
            || !matches!(&call.callee, HirExpr::LocalRef(id) if *id == middle_local)
            || !call.args.is_empty()
            || a.root_release.is_some()
            || a.is_phi_transfer
            || !matches!(&set_list.values.fixed[0], HirExpr::LocalRef(id) if *id == middle_local)
        { return false; }

        // A strong local proof: the first uses after SETLIST must be
        // move table owner to an independent local, overwrite owner with
        // a new value, then overwrite the scalar result local.
        if block.stmts.len() < index+4 { return false; }
        let HirStmt::Assign(copy) = &block.stmts[index+1] else { return false };
        let ([HirLValue::Local(destination)], [HirExpr::LocalRef(src)], None) =
            (copy.targets.as_slice(), copy.values.fixed.as_slice(), &copy.values.tail)
        else { return false };
        if *src != owner || *destination == owner || *destination == middle_local {
            return false;
        }
        let HirStmt::Assign(overwrite_owner) = &block.stmts[index+2] else { return false };
        if !matches!(overwrite_owner.targets.as_slice(), [HirLValue::Local(id)] if *id == owner)
            || overwrite_owner.values.fixed.len() != 1
            || overwrite_owner.values.tail.is_some()
            || expr_uses_binding(&overwrite_owner.values.fixed[0], binding)
        { return false; }
        let HirStmt::Assign(overwrite_middle) = &block.stmts[index+3] else { return false };
        if !matches!(overwrite_middle.targets.as_slice(), [HirLValue::Local(id)] if *id == middle_local)
            || overwrite_middle.values.fixed.len() != 1
            || overwrite_middle.values.tail.is_some()
            || expr_uses_binding(&overwrite_middle.values.fixed[0], middle_binding)
        { return false; }

        let Some(tail) = set_list.values.tail.as_ref() else { return false; };
        if expr_uses_binding(tail.as_expr(), binding)
            || expr_uses_binding(tail.as_expr(), middle_binding)
            || expr_open_tail_residuals(tail.as_expr()).decision
            || expr_open_tail_residuals(tail.as_expr()).unresolved
        { return false; }
        let mut immediate = (**call).clone();
        immediate.callee = HirExpr::Closure(original_closure);
        let mut remapped = set_list.clone();
        remapped.values.fixed[0] = HirExpr::Call(Box::new(immediate));
        let constructor = constructor_with_set_list(seed, &remapped);
        if !constructor.matches_allocation_capacity(1) { return false; }

        // The captured-call result is now evaluated inside the *original*
        // NEWTABLE's initializer, followed by the original open tail call.
        // Keep the old lexical scalar local as nil (it is not read before
        // its proven overwrite), preserving downstream local scope identity.
        install_constructor_seed(&mut block.stmts[seed_i], constructor);
        if let HirStmt::LocalDecl(decl) = &mut block.stmts[seed_i+1] {
            decl.values.fixed[0] = HirExpr::Nil;
        }
        if let HirStmt::Assign(assign) = &mut block.stmts[seed_i+2] {
            assign.values.fixed[0] = HirExpr::Nil;
        }
        block.stmts.remove(index);
        eprintln!("SLR_R8_OPEN_SETLIST_FOLDED seed={} call={} batch={} owner={:?}",
            seed_i, seed_i+2, index, binding);
        true
    }

"""
def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--checkout",type=Path,required=True)
    args=ap.parse_args()
    path=args.checkout/FILE
    text=path.read_text()
    for old,new in [(INSERT_BEFORE,METHOD+INSERT_BEFORE),(INSERT_IN_LOOP,REPLACEMENT)]:
        n=text.count(old)
        if n!=1: raise RuntimeError(f"expected unique upstream anchor, got {n}: {old[:75]}")
        text=text.replace(old,new,1)
    path.write_text(text)
    print("SLR_R8_OPEN_SETLIST_PATCH_APPLIED")

if __name__=="__main__":main()
