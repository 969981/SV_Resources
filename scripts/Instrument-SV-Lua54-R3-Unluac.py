#!/usr/bin/env python3
"""Instrument the *temporary* unluac-rs v1.4.5 Rust checkout for R3.

No permanent vendor modifications. All probes are diagnostic and are inserted
only in the existing SETLIST lowering helpers. This script must never run on
the SV_Resources working tree or on original game assets.
"""
from __future__ import annotations
import argparse
from pathlib import Path
import re

TARGET = Path("src/hir/simplify/table_constructors/mod.rs")
ANCHOR = """            let Some(binding) = binding_from_expr(&set_list.base) else {
                index += 1;
                continue;
            };

            if self.fold_fixed_batch_across_root_copy"""
PROBE = """            let Some(binding) = binding_from_expr(&set_list.base) else {
                index += 1;
                continue;
            };

            if set_list.start_index == 1 && set_list.values.fixed.len() == 3 {
                eprintln!("SLR_R3_SITE index={} binding={:?} lower_stage={} fixed={} tail={}",
                    index, binding,
                    matches!(self.stage, TableConstructorStage::LowerFixedBatches),
                    set_list.values.fixed.len(), set_list.values.tail.is_some());
                let adjacent = self.find_adjacent_local_constructor_seed(
                    block, index, binding, &set_list).is_some();
                let direct = self.find_direct_set_list_seed(
                    block, index, binding, &set_list).is_some();
                let indexed = self.find_local_set_list_seed_for_indexed_writes(
                    block, index, binding, &set_list, &non_nil).is_some();
                eprintln!("SLR_R3_GATES adjacent={} direct={} indexed={}",
                    adjacent, direct, indexed);
                for prior in index.saturating_sub(22)..index {
                    eprintln!("SLR_R3_STMT index={} kind={:?}",
                        prior, std::mem::discriminant(&block.stmts[prior]));
                }
            }

            if self.fold_fixed_batch_across_root_copy"""
# Separate probe for each source-local guard:
START = "    fn find_local_set_list_seed_for_indexed_writes("
END = "    fn fixed_set_list_prefix_is_safe("
PREFIX = """        if set_list.start_index == 1 && set_list.values.fixed.len() == 3 {
            eprintln!("SLR_R3_INDEXED_ENTRY index={} binding={:?} non_nil={:?}",
                set_list_index, binding, non_nil);
        }
"""
def instrument(raw: str) -> tuple[str, int]:
    if raw.count(ANCHOR) != 1:
        raise ValueError(f"expected exactly one original probe anchor, found {raw.count(ANCHOR)}")
    raw = raw.replace(ANCHOR, PROBE)
    start = raw.index(START)
    end = raw.index(END, start)
    body = raw[start:end]
    before = body
    # Add an entry log just after the function opening brace (it is a single,
    # stable signature at tag v1.4.5).
    brace = body.index("    ) -> Option<usize> {\n") + len("    ) -> Option<usize> {\n")
    body = body[:brace] + PREFIX + body[brace:]
    # Decorate every *explicit* return None with original static line number.
    # Use only coarse guard reasons, not long recovered game expressions.
    count = 0
    original_line_base = raw[:start].count("\n") + 1
    for m in list(re.finditer(r"(?m)^(\s*)return None;$", body))[::-1]:
        indentation = m.group(1)
        line = original_line_base + body[:m.start()].count("\n")
        annotation = (
            f'{indentation}if set_list.start_index == 1 && set_list.values.fixed.len() == 3 {{\n'
            f'{indentation}    eprintln!("SLR_R3_INDEXED_REJECT src_line={line}");\n'
            f'{indentation}}}\n'
        )
        body = body[:m.start()] + annotation + body[m.start():]
        count += 1
    if not count or body == before:
        raise ValueError("no local SETLIST reject branches instrumented")
    raw = raw[:start] + body + raw[end:]
    return raw, count

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--checkout", type=Path, required=True)
    args = p.parse_args()
    wd = args.checkout.resolve()
    if wd.name in ("SV_Resources", "Unpack", "virtual"):
        raise ValueError("refusing to modify original repository or ROM assets")
    target = wd / TARGET
    raw = target.read_text("utf-8")
    changed, gates = instrument(raw)
    target.write_text(changed, "utf-8")
    print(f"Injected R3 temporary diagnostics into {target} ({gates} explicit reject branches)")
if __name__ == "__main__":
    main()
