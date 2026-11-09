#!/usr/bin/env python3
"""Instrument upstream unluac-rs v1.4.5 table-lowering proof rejection.

Operates ONLY on an ephemeral checked-out upstream Rust source tree.
Uses exact source anchors to fail closed on upstream version drift.
The instrumentation does not alter emitted Lua or bypass safety guards.
"""
from __future__ import annotations
import argparse
from pathlib import Path

TARGET = Path("src/hir/simplify/table_constructors/mod.rs")
MARKER = "SLR_R3_SCOPE_DIAGNOSTIC"
ANCHOR = """            // A raw SETLIST is not generally equivalent to ordinary indexed assignment:
            // the former bypasses `__newindex` and has distinct nil-hole/array-part rules."""

PROBE = r"""
            // SLR_R3_SCOPE_DIAGNOSTIC: bounded diagnostics only; fail-closed normal behavior.
            if set_list.start_index == 1 && set_list.values.fixed.len() == 3 {
                static SLR_DIAG_COUNT: std::sync::atomic::AtomicUsize =
                    std::sync::atomic::AtomicUsize::new(0);
                let n = SLR_DIAG_COUNT.fetch_add(1, std::sync::atomic::Ordering::Relaxed);
                if n < 60 {
                    eprintln!("SLR_R3_DIAG candidate={n} binding={binding:?} index={index} blocklen={} scope={:?} tail={} fixed={} stage={:?}",
                        block.stmts.len(), set_list.initializer_debug_scope,
                        set_list.values.tail.is_some(), set_list.values.fixed.len(),
                        if self.stage == TableConstructorStage::LowerFixedBatches { "Lower" } else { "Rebuild" });
                    let start = index.saturating_sub(12);
                    for j in start..index {
                        let dbg = format!("{:?}", block.stmts[j]);
                        eprintln!("SLR_R3_STMT j={j} {}", dbg.chars().take(1100).collect::<String>());
                    }
                    let dbg = format!("{:?}", set_list);
                    eprintln!("SLR_R3_BATCH {}", dbg.chars().take(2000).collect::<String>());
                    eprintln!("SLR_R3_FIND_LOCAL {}", self.find_local_set_list_seed_for_indexed_writes(
                        block, index, binding, &set_list, &non_nil).is_some());

                    let value_safe = set_list.values.fixed.iter().map(expr_is_indexed_set_list_value_safe).collect::<Vec<_>>();
                    let definitely_non_nil = set_list.values.fixed.iter().map(
                        |value| expr_is_definitely_non_nil_from_definitions(value, &non_nil)
                    ).collect::<Vec<_>>();
                    eprintln!("SLR_R3_VALUE_GUARDS safe={value_safe:?} non_nil={definitely_non_nil:?} nil_shape={}",
                        values_have_safe_nil_shape(definitely_non_nil.iter().copied()));
                    for seed_pos in (0..index).rev().take(12) {
                        if let Some((seed_binding, seed)) = constructor_seed(&block.stmts[seed_pos]) {
                            if seed_binding == binding {
                                eprintln!("SLR_R3_SEED seed_index={seed_pos} direct_local={} local_indexed_proof={} seed_has_open_tail={} seed_fields={}",
                                    matches!(block.stmts[seed_pos], HirStmt::LocalDecl(_)),
                                    self.fixed_set_list_prefix_is_safe(block, seed_pos, index, binding),
                                    seed.trailing_multivalue.is_some(), seed.fields.len());
                                break;
                            }
                        }
                    }

                }
            }
"""

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--upstream", type=Path, required=True)
    args = parser.parse_args()
    target = args.upstream / TARGET
    src = target.read_text("utf-8")
    if MARKER in src:
        raise SystemExit("already instrumented")
    if src.count(ANCHOR) != 1:
        raise SystemExit("upstream anchor missing or ambiguous; refusing to modify")
    src = src.replace(ANCHOR, PROBE + "\n" + ANCHOR)
    target.write_text(src, "utf-8")
    print(f"Patched ephemeral upstream: {target} (diagnostic-only, no AST semantics modified)")

if __name__ == "__main__":
    main()
