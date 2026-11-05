# SV Trinity resource pipeline (R0/R1)

The pipeline operates under:
Unpack/4.0.0/romfs/arc/data.trpfs/

Input is virtual/ plus _index/export.jsonl and _index/batches/*.jsonl.
The immutable original 4.0.0/1/ and all virtual/ bytes are NEVER rewritten.

## Commands (Python 3.10+, standard library only)

From repository root:

    python scripts/resource_pipeline/cli.py scan --limit 1000
    python scripts/resource_pipeline/cli.py scan
    python scripts/resource_pipeline/cli.py scan --verify-sha
    python scripts/resource_pipeline/cli.py convert-r1 --kind labels --limit 100
    python scripts/resource_pipeline/cli.py convert-r1 --kind bntx --limit 100
    python scripts/resource_pipeline/cli.py export --json

The default SQLite database is _index/resource_catalog.sqlite. Large generated
DB/CSV/JSON files are local derived artifacts, NOT git-tracked. Exported index
CSV/JSON is written to _index/exports/. The schema is in schema.sql.

For an independently verified BNTX-to-PNG command-line converter:

    python scripts/resource_pipeline/cli.py convert-r1 --kind bntx \
      --converter 'YOUR_CONVERTER --input {input} --output {output}'

This is a command TEMPLATE, not a working converter provided by the repository.
The converter must actually produce a PNG; merely detecting BNTX metadata is
recorded as BLOCKED. Consult the existing Switch-Toolbox vendor source for
implementation support; its GUI being present does not prove that a CLI exists.
The script invokes the supplied command without a shell. Use only a trusted
locally installed executable.

## State and evidence contract

- R0 indexes extracted native records, flags missing local files, optionally
  verifies output SHA-256; the manifest hash is not silently called verified.
- AHTB .tbl labels and hashes are exported as labels JSON and CSV only.
  The paired .dat file is NOT decoded. Text is null, NOT_DECODED.
- BNTX containers are checked for magic, byte order, declared size, and
  plausible BRTI metadata. PNG extraction requires a tested decoder.
- The semantic catalog is deliberately empty until game IDs are proven from
  actual native structures or a verified reference.
- The job fingerprint includes original hash, tool stage/version and converter
  command. Use --force only to retry processed inputs. Failures remain visible.

## Tests

    python -m unittest discover -s tests -p 'test_sv_resource_pipeline.py' -v

No ROM, Oodle dependency, network or third-party Python modules are required
for R0, parsing AHTB labels, BNTX metadata or synthetic tests.
