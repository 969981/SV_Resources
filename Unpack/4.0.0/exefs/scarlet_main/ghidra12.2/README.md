# SV 4.0.0 Ghidra 12.2 — uncompressed / losslessly split

Source: Actions Run #42778907746 (validated outputs), ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f

- project/SV400.gpr and project/SV400.rep/: editable native Ghidra project;
- c/: 97871 individual Ghidra pseudocode .c files;
- database/: byte-exact raw SQLite pieces, not ZIP/GZ;
- ndjson/: plain newline-delimited JSON fragments, each line intact;
- fde_recovery.csv: original FDE recovery audit;
- parts_manifest.json: every chunk SHA256 and original full-file SHA256.

Restore the original SQLite and NDJSON using: python tools/ghidra/sv/sv400_restore_split.py --source Unpack/4.0.0/exefs/scarlet_main/ghidra12.2 --out /some/local/directory

GitHub cannot accept >100 MB ordinary Git blobs; we deliberately use uncompressed binary chunks <=45 MiB rather than LFS, TAR, or ZIP. If project_parts/ is present, restoration also reconstructs any oversized internal Ghidra project files.

This is Ghidra-generated C pseudocode, not Nintendo source code. All 97877 discovered functions have individual decompiler statuses; not all decompilations necessarily succeed. See decompiled_index.csv.
