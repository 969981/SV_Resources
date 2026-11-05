# SV R3/R4 pipeline

Run from repository root, Python 3.10+:

    python scripts/resource_pipeline/r4_pipeline.py run --discover --limit 20
    python scripts/resource_pipeline/r4_pipeline.py run --resume --retry-failed --limit 100
    python scripts/resource_pipeline/r4_pipeline.py pack-reports --max-mb 50

The default source and output root is:
Unpack/4.0.0/romfs/arc/data.trpfs.

The existing R0 database must first be initialized by:
    python scripts/resource_pipeline/cli.py scan

R3:
- parse .trmdl as a strict FlatBuffer manifest
- parse each .trmsh to obtain true .trmbf dependency
- list materials, skeleton, LOD meshes and candidate texture/animations
- save graph and evidence in parsed/; do not modify virtual/
- use optional prebuilt TrinityModelViewer --export-gltf converter
- validate model glTF and references before considering promotion

R4:
- fingerprint per object from input SHA-256, schema/tool hashes, version,
  and conversion options
- SQLite persisted jobs and dependencies plus local checkpoint
- --retry-failed can revisit BLOCKED and FAILED states
- --resume continues after checkpoint; normal run resweeps changes
- --limit bounds each batch; metadata-only archiver splits TAR.GZ

Output directories:
- parsed/<original>.object.json
- converted/<original stem>/<original stem>.gltf (only after converter)
- resources/geometry/source_verified/<original> (review-required)

No semantic IDs or publishable game assets inferred from names. Actions
do not upload extracted models, PNGs or animations.
