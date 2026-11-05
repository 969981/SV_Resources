# SV Trinity Resource Pipeline (R0/R1)

All layers are below Unpack/4.0.0/romfs/arc/data.trpfs:
- virtual/ original immutable bytes
- parsed/ structural analysis, raw text code units
- converted/ PNGs and text CSV
- resources/ verified multilingual message resources
- _index/ resource_catalog.sqlite and exports

## Usage from the repository root (Python 3.10+)

    python scripts/resource_pipeline/cli.py scan
    python scripts/resource_pipeline/cli.py scan --verify-sha
    python scripts/resource_pipeline/cli.py convert-r1 --kind messages
    python scripts/resource_pipeline/cli.py convert-r1 --kind labels
    python scripts/resource_pipeline/cli.py convert-r1 --kind bntx
    python scripts/resource_pipeline/cli.py export --json

DAT/TBL message conversion is based on the pinned
tools/pkNX/pkNX.Structures/Text/TextFile.cs XOR+rotate algorithm.
It preserves controls, raw code units, line flags, and verifies the trailing
*_max TBL sentinel. Unknown controls are marked CONTROL_PARTIAL.
Exports:
  parsed/message/dat/<OriginalLanguage>/{common,script}/<name>.messages.json
  converted/message/dat/<OriginalLanguage>/{common,script}/<name>.messages.csv
  resources/messages/<OriginalLanguage>/{common,script}/<name>.json
  SQLite: message_entries + message_catalog

## PNG decoder dependency

Build the pinned CLI with a recent Rust compiler:

    cargo install --locked --git https://github.com/ScanMountGoat/ultimate_tex --rev 2ef4f0904f85d696650bdefa1f18c935a09159ac ultimate_tex_cli

On Windows PowerShell run this cargo command on a single line.
When ultimate_tex_cli is on PATH, convert-r1 --kind bntx auto-detects it.
Or provide --converter "ultimate_tex_cli {input} {output}".
Each PNG is checked against BNTX dimensions and signature. Multiple-texture
BNTX files are currently BLOCKED rather than losing secondary images.
No converter binary is vendored and no original asset is modified.

Native tests:
    python -m unittest discover -s tests -p "test_sv_r1_native.py" -v

Full BC7 PNG integration CI:
    .github/workflows/verify-sv-bntx-png.yml

Original input hashes must match the extraction manifest. Generated
databases and assets are gitignored by default.

## R3/R4 model, animation and incremental processing

See R3-R4-README.md for TRMDL→TRMSH→TRMBF dependency graphs,
standalone .NET10 Windows glTF export, explicit .tranm animation maps,
material/UV/LOD/skin checks, SHA-256 fingerprints, retry checkpoints and
metadata-only archive generation. An on-demand GitHub Actions workflow,
sv-r4-incremental.yml, processes bounded folders without uploading models.
