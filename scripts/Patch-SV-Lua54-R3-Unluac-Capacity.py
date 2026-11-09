#!/usr/bin/env python3
"""Experimental, fail-closed unluac-rs v1.4.5 constructor-capacity patch.

Only modifies a disposable source checkout in CI; never modifies original
game BLUA or upstream repository. Uses a *new* private table's exact
PucBatched allocation to preserve nil holes before fixed SETLIST lowering.
This is not yet a general validated upstream fix.
"""
from pathlib import Path
import argparse

PATH = Path("src/hir/simplify/table_constructors/mod.rs")

METHOD_ANCHOR = "    fn find_local_set_list_seed_for_indexed_writes("
METHOD = """    /// Preserve the native array part when a *fresh* empty PUC table's fixed
    /// SETLIST may contain nil: indexed writes alone change rawlen/#table.
    /// Only exact original PucBatched capacity, no hash part, no prefix
    /// fields, no open pack, and a contiguous [1..N] batch are accepted.
    fn slr_r3_exact_nil_preallocation(
        seed: &HirTableConstructor,
        batch: &crate::hir::common::HirTableSetList,
    ) -> bool {
        let crate::hir::HirTableAllocation::PucBatched(allocation) = seed.allocation else {
            return false;
        };
        let count = batch.values.fixed.len();
        count > 0
            && count <= 64
            && seed.fields.is_empty()
            && seed.trailing_multivalue.is_none()
            && batch.start_index == 1
            && batch.values.tail.is_none()
            && allocation.hash_capacity == 0
            && u32::try_from(count).ok() == Some(allocation.array_capacity)
            && allocation.matches(count, 0)
    }

"""
NIL_ANCHOR = """            if !values_have_safe_nil_shape(
                set_list
                    .values
                    .fixed
                    .iter()
                    .map(|value| expr_is_definitely_non_nil_from_definitions(value, non_nil)),
            ) {"""
NIL_NEW = """            if !values_have_safe_nil_shape(
                set_list
                    .values
                    .fixed
                    .iter()
                    .map(|value| expr_is_definitely_non_nil_from_definitions(value, non_nil)),
            ) && !Self::slr_r3_exact_nil_preallocation(seed, set_list) {"""
CALL_ANCHOR = """                && let Some(_seed_index) = self.find_local_set_list_seed_for_indexed_writes(
                    block, index, binding, &set_list, &non_nil,
                )
            {
                let base = set_list.base.clone();"""
CALL_NEW = """                && let Some(seed_index) = self.find_local_set_list_seed_for_indexed_writes(
                    block, index, binding, &set_list, &non_nil,
                )
            {
                // Lua indexed stores do not recreate PUC's preallocated array
                // part when an arithmetic metamethod returns nil.  Insert
                // exact nil slots at the *original* NEWTABLE allocation site;
                // preserve the following original scalar evaluation order.
                let values_may_be_nil = !values_have_safe_nil_shape(
                    set_list.values.fixed.iter().map(|value| {
                        expr_is_definitely_non_nil_from_definitions(value, &non_nil)
                    }),
                );
                if values_may_be_nil {
                    let Some((_, seed_ref)) = constructor_seed(&block.stmts[seed_index]) else {
                        unreachable!("R3 preallocation must have a native seed");
                    };
                    let mut seed = seed_ref.clone();
                    if !Self::slr_r3_exact_nil_preallocation(&seed, &set_list) {
                        unreachable!("R3 capacity proof must be repeated at commit");
                    }
                    seed.fields = (0..set_list.values.fixed.len())
                        .map(|_| HirTableField::Array(HirExpr::Nil))
                        .collect();
                    install_constructor_seed(&mut block.stmts[seed_index], seed);
                    eprintln!("SLR_R3_PREALLOC_PASS index={} seed={} fields={}",
                        index, seed_index, set_list.values.fixed.len());
                }
                let base = set_list.base.clone();"""

def apply(source: str):
    anchors = [(METHOD_ANCHOR, METHOD+METHOD_ANCHOR),
               (NIL_ANCHOR, NIL_NEW), (CALL_ANCHOR, CALL_NEW)]
    for before, after in anchors:
        found = source.count(before)
        if found != 1:
            raise RuntimeError(f"Upstream source mismatch: anchor {before[:60]!r} count={found}")
        source = source.replace(before, after, 1)
    return source

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--checkout",required=True,type=Path)
    args=p.parse_args()
    checkout=args.checkout.resolve()
    if checkout.name in ("SV_Resources", "Unpack"):
        raise ValueError("must patch disposable upstream checkout only")
    path=checkout/PATH
    path.write_text(apply(path.read_text("utf-8")), "utf-8")
    print("Applied private native PucBatched capacity guard; original source data unchanged")

if __name__=="__main__":
    main()
