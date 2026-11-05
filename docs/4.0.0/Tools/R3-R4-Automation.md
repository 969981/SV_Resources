# R3 model graph and R4 incremental automation

The immutable input stays at:
Unpack/4.0.0/romfs/arc/data.trpfs/virtual/

The database stays at:
Unpack/4.0.0/romfs/arc/data.trpfs/_index/resource_catalog.sqlite

Run from repo root with Python 3.10+.

    python scripts/resource_pipeline/cli.py scan
    python scripts/resource_pipeline/r4_pipeline.py run --limit 100
    python scripts/resource_pipeline/r4_pipeline.py run --prefix pokemon/data --limit 100
    python scripts/resource_pipeline/r4_pipeline.py run --resume --limit 100
    python scripts/resource_pipeline/r4_pipeline.py run --retry-failed --limit 100
    python scripts/resource_pipeline/r4_pipeline.py pack-reports --max-mb 50

Build tools/SV.R3.ModelExport/SV.R3.ModelExport.csproj on Windows .NET 10.\nWhen the standalone headless converter is verified on Windows:

    python scripts/resource_pipeline/r4_pipeline.py run --prefix chara/model_pc --converter '"C:\path\SV.R3.ModelExport.exe" {input} {output}' --converter-version gftool-commit-hash

The converter's version is part of the object fingerprint, so a tool upgrade
invalidates only work with changed inputs and parameters. All dependencies,
schema file digests and exporter source changes are included in the tool
digest, plus actual SHA-256 for each input file. Same size/mtime uses a local
hash cache; pass a new environment or clear the cache if timestamps are
externally manipulated.

## Statuses

- BLOCKED: missing required source dependency or no converter yet.
- FAILED: invalid source, failed exporter, bad glTF or other error.
- STRUCTURE_PASS: glTF and required assets have been checked.
- PROMOTED: review evidence explicitly names this model, output hash, and
  materials/UV/LOD/skeleton/animations checks as PASS.

R4 does not silently claim visual quality from glTF's JSON header.
Unverified models remain in parsed/ or converted/. Candidate resource
names never become gameplay IDs without original native cross references.

SQLite extras: r4_object_jobs, r4_object_dependencies,
r4_hash_cache, r4_job_summary.
Local checkpoint: _index/r4-checkpoint.json. Resume is lexicographic,
retry-failed revisits BLOCKED/FAILED items even before the current cursor.
Running without --resume resweeps the scope and cheaply skips valid outputs.

## Publishing and legal review

Actions test native samples and upload JSON reports only.
pack-reports writes bounded TAR.GZ archives containing .object.json only,
plus archive SHA-256. Game files are never automatically uploaded as Actions
artifacts or released. Full-scale image/model/animation archives require
separate review of original game data and decoder/license restrictions, and
should not be stored as ordinary Git objects.

For large SV inventories, prefer persistent self-hosted runner storage and
scope-based invocation; GitHub-hosted runners are ephemeral and cannot
magically resume the prior job without restoring the checkpoint/database.
