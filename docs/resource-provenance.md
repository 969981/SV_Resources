# Binary resource provenance and evidence policy

## Input record

Every extracted or transferred resource must be traceable to:
- Game and version: Scarlet/Violet 4.0.0; distinguish program differences.
- Original relative path and host source root.
- Original byte size and SHA-256; optionally SHA-1.
- First 4/16/64 header bytes and magic interpretation where applicable.
- Relevant container offsets, length, endianness and parser version.
- Output relative path(s), byte sizes, SHA-256 and transformation command.

Use the inventory CSVs for raw input hashes and `violet_4.0.0_romfs_transfer_manifest.json` for transfer artifacts. Do not call file-extension heuristics a verified format.

## Evidence labels

- `CONFIRMED`: reproducible on original bytes, with offset/command/hash or native code reference.
- `CANDIDATE`: plausible structural/Hash/ID association that still needs a direct reference or runtime check.
- `UNKNOWN`: no defensible mapping yet.
- `REJECTED`: tested hypothesis disproven; retain why.

Avoid claiming resource IDs are Pokédex species IDs, item-material categories, or event/text foreign keys without explicit native references. Shared Scarlet/Violet RomFS bytes do not prove identical runtime behavior.

## Working procedure

1. Snapshot and hash input; never edit originals.
2. Parse conservatively and record every assumed offset.
3. Validate boundaries, counts, lengths and sample round-trips.
4. Test against multiple independent assets when possible.
5. Save commands and parser/test versions in `docs/research/`, scripts in `scripts/`.
6. Export reusable indexes only with direct provenance fields; record remaining uncertainty and failed cases.
7. Revalidate affected hashes after any code change.

## Large file rules

For transfer to ordinary Git, original files >90 MiB must use `D:\Tool\7-Zip\7z.exe` (fallback paths allowed) and `-t7z -mx=1 -v90m`. Run `7z t` before accepting every multi-volume archive. Store the original SHA-256 and every volume SHA-256. Do not commit any single artifact >=100,000,000 bytes.
