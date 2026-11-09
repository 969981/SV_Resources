#!/usr/bin/env python3
"""R3 EXPERIMENTAL opt-in patch to unluac-rs v1.4.5 fixed SETLIST lowering.

This is a pinned diagnostic hypothesis, not a general upstream patch:
  * ONLY native source-site (Proto#0, InstrRef#683), proven by transformer
    lowering_map to original 4.0.0 main_dynamic Proto752 PC665.
  * ONLY verified LocalId15 with a contiguous 3-slot PUC-batched allocation.
  * Requires existing upstream private-owner prefix proof.
  * Initializes three nil array slots at the same earlier seed statement, then
    lowers original fixed batch to ordinary indexed writes.
  * Requires SV_R3_EXPERIMENTAL_752=1 at process runtime; default unchanged.

It must NEVER be published as a blanket SETLIST fix or complete behavior proof.
"""
from __future__ import annotations
import argparse
from pathlib import Path

ANCHOR = '''            // An open pack is only folded for the narrow, seed-anchored LocalDecl shape'''
PATCH = r'''            // SLR R3 *experimental* Lua5.4 compatibility shim, OFF by default.
            // The native source-site is pinned to full 4.0.0 Proto752 low @683,
            // which the transformer maps to raw PC665. This is NOT a general
            // inference from arbitrary stripped-debug chunks.
            if std::env::var_os("SV_R3_EXPERIMENTAL_752").is_some()
                && set_list.source_site.is_some_and(|site|
                    site.proto.index() == 0 && site.instr.index() == 683)
                && let TableBinding::Local(local) = binding
                && local.index() == 15
                && set_list.start_index == 1
                && set_list.values.fixed.len() == 3
                && set_list.values.tail.is_none()
                && set_list.values.fixed.iter().all(expr_is_indexed_set_list_value_safe)
                && let Some(seed_index) = index.checked_sub(4)
            {
                let verified_seed = constructor_seed(&block.stmts[seed_index]).is_some_and(
                    |(owner, seed)| owner == binding
                        && matches!(block.stmts[seed_index], HirStmt::LocalDecl(_))
                        && seed.fields.is_empty()
                        && seed.trailing_multivalue.is_none()
                        && matches!(&seed.allocation,
                            crate::hir::common::HirTableAllocation::PucBatched(allocation)
                                if allocation.array_capacity == 3 && allocation.hash_capacity == 0)
                );
                let private_prefix = verified_seed
                    && self.fixed_set_list_prefix_is_safe(
                        block, seed_index, index, binding);
                eprintln!("SV_R3 EXPERIMENT candidate site=0:683 seed_index={seed_index} verified_seed={verified_seed} private_prefix={private_prefix}");
                if private_prefix {
                    let Some((_, seed)) = constructor_seed(&block.stmts[seed_index]) else {
                        unreachable!("prevalidated SLR R3 table seed must exist")
                    };
                    let mut capacity_seed = seed.clone();
                    // {nil,nil,nil} causes the stock Lua5.4 compiler to retain
                    // array capacity 3; plain {} plus t[i]=v changes # and next
                    // for nil holes, as the native R3 differential demonstrates.
                    capacity_seed.fields = vec![HirTableField::Array(HirExpr::Nil); 3];
                    install_constructor_seed(&mut block.stmts[seed_index], capacity_seed);
                    // Preserve the original allocation and all intervening
                    // arithmetic instructions/effects at their original positions.
                    // Values are already materialized Local/Temp references, so
                    // these writes cannot reevaluate the seven MMBIN fallbacks.
                    let base = set_list.base.clone();
                    let assignments = set_list.values.fixed.iter().enumerate()
                        .map(|(offset, value)| {
                            HirStmt::Assign(Box::new(HirAssign {
                                luau_function_declaration: false,
                                luau_compound_global: false,
                                upvalue_write_source: None,
                                is_phi_transfer: false,
                                parallel_nil_frame: None,
                                targets: vec![HirLValue::TableAccess(Box::new(HirTableAccess {
                                    preserve_index_syntax: false,
                                    sources: Default::default(),
                                    metamethod_free: false,
                                    base: base.clone(),
                                    key: HirExpr::Integer((offset + 1) as i64),
                                    method_setup_protocol: None,
                                }))],
                                values: HirValuePack::fixed(vec![value.clone()]),
                                initializer_merge_transaction: None,
                                generic_for_initializer_producer: None,
                                root_release: None,
                                method_rewrite_transaction: None,
                            }))
                        }).collect::<Vec<_>>();
                    block.stmts.splice(index..=index, assignments);
                    eprintln!("SV_R3 EXPERIMENT applied nil-preallocation + fixed batch at 0:683");
                    changed = true;
                    index += 3;
                    continue;
                }
            }

'''
def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("checkout",type=Path)
    args=ap.parse_args()
    f=args.checkout.resolve()/"src/hir/simplify/table_constructors/mod.rs"
    src=f.read_text("utf-8")
    if src.count(ANCHOR)!=1:
        raise ValueError("unluac-rs v1.4.5 anchor changed: refusing patch")
    if "SV_R3_EXPERIMENTAL_752" in src:
        raise ValueError("experimental lowering already injected")
    f.write_text(src.replace(ANCHOR,PATCH+ANCHOR,1),"utf-8")
    print("Injected R3 env-gated, source-site-specific capacity preserving experiment")
    print("No default semantics changed; no general SETLIST inference.")


if __name__=="__main__":
    main()
