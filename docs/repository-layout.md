# Repository layout and naming rules

```text
SV_Resources/
├── AGENTS.md
├── README.md
├── .gitignore
├── scarlet_4.0.0_file_inventory.csv
├── violet_4.0.0_file_inventory.csv
├── Scarlet_vs_Violet_4.0.0_comparison.csv
├── violet_4.0.0_romfs_transfer_manifest.json     # generated after transfer
├── 4.0.0/
│   ├── 0/                                          # ExeFS; preserve existing files
│   └── 1/                                          # Violet RomFS
│       ├── arc/data.trpfd
│       ├── arc/data.trpfs.7z.001
│       ├── arc/data.trpfs.7z.002
│       └── ...
├── docs/
│   ├── README.md
│   ├── repository-layout.md
│   ├── resource-provenance.md
│   └── research/
├── scripts/
└── tests/
```

## Placement rules

1. Original game data goes in the versioned `<version>/0` or `<version>/1` subtree, preserving source-relative names and folders. Do not silently replace archived data with parsed derivatives.
2. Large originals (>90 MiB) are replaced in Git by `<basename>.7z.001`, `002`, ... at the original path. Preserve all volume parts and their SHA-256 in the manifest.
3. Executable scripts (`.ps1`, `.py`, `.cmd` when appropriate) go in `scripts/`; test automation and synthetic fixtures go in `tests/`.
4. Permanent explanations, reverse engineering logs, format notes, examples and evidence go in `docs/`. Keep a separate research note per subsystem and version.
5. Generated indexes/exports should have provenance in docs and predictable, versioned names. Do not add gigabytes of temporary intermediates to Git.
6. Temporary archives and resume checkpoints stay under `.git/` or system temp; never stage them.

## Git workflow

`master` tracks `origin/master`. Commit documentation and script changes separately from resource transfer batches. Each transfer batch stages explicit artifact paths, stays around 600 MiB, validates hashes, and pushes only after a successful commit. Never force-push.

## New derived-output layout

- `Unpack/4.0.0/exefs/<original-filename>/` — derived ExeFS outputs.
- `Unpack/4.0.0/romfs/<original-parent>/<original-filename>/` — per-file derived RomFS outputs.
- `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/` — preserved Trinity virtual files, with nested results in `parsed/` and `converted/`.
- `tools/upstream.json` — pinned tools, with ignored `tools/_external/` source checkouts.

See [unpack-roadmap.md](unpack-roadmap.md). Data under `Unpack/` is derived and does **not** replace immutable versioned original storage. Stage substantial data selectively with a manifest and maintain the existing single-artifact Git size rules.
