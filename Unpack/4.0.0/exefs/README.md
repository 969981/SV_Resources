# ExeFS 4.0.0 processed outputs

Source: `4.0.0/0/`. Known original modules include `scarlet_main`, `violet_main`, `rtld`, `sdk`, `subsdk0`, and their NPDM files.

Create one child directory per **original file name**, including `.npdm` if present. For `scarlet_main` and `violet_main`, use separate roots; they are not interchangeable.

First extract/check executable metadata (NSO headers, build IDs when obtainable, sections and NPDM fields). Disassembly and semantic claims belong in `docs/research/` with instruction offsets and a version-specific provenance record.

No original ExeFS bytes are modified in this tree. No executable extraction has been performed merely by creating this directory.

## Verified NSO-to-ELF workflow

Convert the separate `scarlet_main` and `violet_main` sources with `scripts/Convert-SV-ExeFS.py` and the vendored `tools/nx2elf`. The `docs/exefs-nx2elf.md` guide details build, output, size limits and verification. Published outputs and `provenance.json` live under `Unpack/4.0.0/exefs/<source-filename>/`. An ELF over 90 MiB is stored in checked 7z volumes in Git, with the full `.elf` uploaded as a workflow artifact; do not stage `_work/`.

## Remaining modules and NPDM metadata

`rtld`, `sdk`, `subsdk0` are independent NSO modules converted to ELF under matching directories. `scarlet_main.npdm` and `violet_main.npdm` are parsed as `META`/`ACI0`/`ACID` metadata under directories retaining `.npdm`. See `docs/exefs-nx2elf.md` for byte layout, build commands and limitations. The conversion pipeline verifies outputs and does not modify original `4.0.0/0/` files.
