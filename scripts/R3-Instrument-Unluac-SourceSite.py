#!/usr/bin/env python3
"""R3 read-only source-site and owner decision tracing against pinned unluac-rs v1.4.5.

Patches a TEMPORARY upstream checkout in GitHub Actions; does not change its
table-constructor semantics.  Checks exact anchor counts and fails closed.
The debug output is diagnostic ONLY and never proof of equivalence.
"""
from __future__ import annotations
import argparse
from pathlib import Path


def replace_once(text: str, old: str, new: str, description: str) -> str:
    n = text.count(old)
    if n != 1:
        raise ValueError(f"{description}: expected one upstream anchor, found {n}")
    return text.replace(old, new, 1)


def patch_debug(source: str) -> str:
    old = '''"{indent}table-set-list {} start={} values={} initializer-scope={:?}",
                    format_expr(&set_list.base),
                    set_list.start_index,
                    format_value_pack(&set_list.values),
                    set_list.initializer_debug_scope,'''
    new = '''"{indent}table-set-list {} start={} values={} initializer-scope={:?} native-source-site={:?}",
                    format_expr(&set_list.base),
                    set_list.start_index,
                    format_value_pack(&set_list.values),
                    set_list.initializer_debug_scope,
                    set_list.source_site.map(|s| (s.proto.index(), s.instr.index())),'''
    return replace_once(source, old, new, "HIR source-site debug")


def patch_constructor(source: str) -> str:
    old = '''            if self.fold_fixed_batch_across_root_copy(block, index, binding, &set_list) {
                changed = true;'''
    trace = '''            if std::env::var_os("SV_R3_TRACE").is_some()
                && set_list.source_site.is_some_and(|s| s.proto.index() == 0
                    && (630..=670).contains(&s.instr.index())) {
                eprintln!("SV_R3 SETLIST native-site={:?} owner={:?} index={} start={} fixed={} tail={}",
                    set_list.source_site.map(|s| (s.proto.index(), s.instr.index())),
                    binding, index, set_list.start_index,
                    set_list.values.fixed.len(), set_list.values.tail.is_some());
                let seeds = block.stmts[..index].iter().enumerate().filter_map(|(si, stmt)| {
                    constructor_seed(stmt).map(|(owner, seed)| {
                        (si, owner, seed.fields.len(), seed.trailing_multivalue.is_some(),
                         matches!(stmt, HirStmt::LocalDecl(_)))
                    })
                }).collect::<Vec<_>>();
                let same = seeds.iter().filter(|(_, owner, _, _, _)| *owner == binding)
                    .rev().take(6).collect::<Vec<_>>();
                eprintln!("SV_R3 OWNER_SEEDS {:?}", same);
                eprintln!("SV_R3 PROOFS direct={:?} indexed={:?} nonnil={:?} values={:?}",
                    self.find_direct_set_list_seed(block, index, binding, &set_list),
                    self.find_local_set_list_seed_for_indexed_writes(
                        block, index, binding, &set_list, &non_nil),
                    set_list.values.fixed.iter()
                        .map(|v| expr_is_definitely_non_nil_from_definitions(v, &non_nil))
                        .collect::<Vec<_>>(),
                    set_list.values.fixed.iter()
                        .map(|v| expr_is_indexed_set_list_value_safe(v))
                        .collect::<Vec<_>>());
                // For auditing only: show the last 24 HIR statements before the batch.
                let from = index.saturating_sub(24);
                for (si, stmt) in block.stmts[from..index].iter().enumerate() {
                    eprintln!("SV_R3 PREFIX {} {:?}", from + si, stmt);
                }
            }

            if self.fold_fixed_batch_across_root_copy(block, index, binding, &set_list) {
                changed = true;'''
    return replace_once(source, old, trace, "constructor-batch tracing")


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("checkout", type=Path, help="Upstream unluac v1.4.5 checkout")
    args = p.parse_args()
    base = args.checkout.resolve()
    files = {
        "src/hir/debug.rs": patch_debug,
        "src/hir/simplify/table_constructors/mod.rs": patch_constructor,
    }
    for name, fn in files.items():
        path = base / name
        before = path.read_text("utf-8")
        after = fn(before)
        if after == before:
            raise RuntimeError(f"no patch applied: {name}")
        path.write_text(after, "utf-8")
        print(f"R3 diagnostic instrumentation applied to {name}", flush=True)
    print("WARNING: this is read-only logging instrumentation, NOT a semantic fix.")


if __name__ == "__main__":
    main()
