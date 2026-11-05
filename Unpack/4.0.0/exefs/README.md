# ExeFS 4.0.0 processed outputs

Source: `4.0.0/0/`. Known original modules include `scarlet_main`, `violet_main`, `rtld`, `sdk`, `subsdk0`, and their NPDM files.

Create one child directory per **original file name**, including `.npdm` if present. For `scarlet_main` and `violet_main`, use separate roots; they are not interchangeable.

First extract/check executable metadata (NSO headers, build IDs when obtainable, sections and NPDM fields). Disassembly and semantic claims belong in `docs/research/` with instruction offsets and a version-specific provenance record.

No original ExeFS bytes are modified in this tree. No executable extraction has been performed merely by creating this directory.
