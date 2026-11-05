# SV 4.0.0 ExeFS: NSO to ELF (nx2elf)

## Sources

- Original files: 4.0.0/0/scarlet_main and 4.0.0/0/violet_main (immutable).
- Tool: tools/nx2elf, complete normal Git source snapshot of shuffle2/nx2elf, pinned to a1760ba54e2aefb41444933f53b90e6e8b05c399, upstream tree 9b59e627f272251f564af320daa2b7be66b319f5.
- nx2elf handles decrypted NSO/NRO/MOD and does not need title keys for already decrypted NSO input.
- Legal note: no license is declared in the tracked upstream source tree. Check redistribution authorization before reusing or republishing this copied source.

## Build and convert

Linux:
~~~bash
cmake -S tools/nx2elf -B /tmp/nx2elf-build -DCMAKE_BUILD_TYPE=Release
cmake --build /tmp/nx2elf-build --config Release -j 2
python3 scripts/Convert-SV-ExeFS.py --repo-root . --nx2elf /tmp/nx2elf-build/nx2elf --keep-elf
~~~

Windows PowerShell:
~~~powershell
cmake -S tools/nx2elf -B build/nx2elf
cmake --build build/nx2elf --config Release
python scripts/Convert-SV-ExeFS.py --repo-root . --nx2elf build/nx2elf/Release/nx2elf.exe --7z "D:\Tool\7-Zip\7z.exe" --keep-elf
~~~

Select just one input using --names scarlet_main or --names violet_main.

## Output layout

~~~text
Unpack/4.0.0/exefs/
  scarlet_main/
    provenance.json
    scarlet_main.elf                # only when under 90 MiB
    scarlet_main.elf.7z.001         # otherwise, 90 MiB volumes
    _work/scarlet_main.elf          # full ELF, ignored by Git
  violet_main/
    provenance.json
    violet_main.elf                 # only when under 90 MiB
    violet_main.elf.7z.001          # otherwise
    _work/violet_main.elf           # full ELF, ignored by Git
~~~

Run .github/workflows/convert-sv-exefs.yml to build, convert, verify, commit Git-safe outputs and upload complete ELF files as GitHub Actions artifacts. Provenance records original source path/size/SHA-256, raw NSO Build ID bytes, ELF size/SHA-256, converter commit and all stored artifact hashes.

Restore an archived ELF with 7z x scarlet_main.elf.7z.001 (or violet_main.elf.7z.001). The resulting file must hash to the elfSha256 value in provenance.

## Validation scope

The converter validates NSO0 magic, ELF64 little-endian format, AArch64 machine type (183), and SHA-256. Large outputs undergo archive-test and complete extraction/hash round-trip. The tool currently returns exit code zero on some failure paths; output existence and header checks are therefore mandatory. Binary conversion does not prove semantics, recovered symbols, or call graph correctness. Keep source ExeFS files unchanged, and never stage ignored _work files.
