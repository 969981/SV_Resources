# Technical documentation index

All permanent technical documentation belongs in `docs/`, not at the repository root.

- [Repository layout and naming](repository-layout.md)
- [Resource provenance and verification](resource-provenance.md)
- [Research notebook index](research/README.md)
- [Technical-note template](research/TECHNICAL_NOTE_TEMPLATE.md)

## What to document
For every investigation, preserve version, Scarlet/Violet distinction, exact input file, size, SHA-256, file magic, byte offsets, methods, reproduced commands and output checks. Attach parsed schemas or scripts by relative path. Distinguish confirmed native evidence from hypotheses.

For future work create `docs/research/<topic>.md` (e.g. `trinity-trpfd-trpfs.md`, `events-trevt.md`, `exe-main-diff.md`). Add the link to `docs/research/README.md`. Generated CSV/SQLite indexes should be explicitly named and documented; never put multi-gigabyte data under docs.

## RomFS transfer

- [Violet 4.0.0 RomFS transfer, verification, and recovery](romfs-transfer.md)
