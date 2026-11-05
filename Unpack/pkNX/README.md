# SV 4.0.0 — pkNX read-only batch outputs

This folder is deliberately separate from `Unpack/4.0.0/romfs/arc/data.trpfs/virtual`.
The **original extracted bytes are never changed**. pkNX source is vendored at
[`tools/pkNX`](../../tools/pkNX). The headless application at
[`tools/pkNX/pkNX.VirtualDump`](../../tools/pkNX/pkNX.VirtualDump) references
the actual upstream pkNX parser projects, not an independent reimplementation.

## What the pipeline really decodes

| Input type | Native pkNX component | Output |
| --- | --- | --- |
| `message/dat/**/**/*.dat` | `pkNX.Structures.TextFile` / `TextConfig(SV)` | TXT, JSON; labels TSV when same-path AHTB entry count agrees |
| `message/dat/**/**/*.tbl`, `*.ahtb` | `pkNX.Containers.AHTB` | indexed hash/name TSV |
| `avalon/data/personal_array.bin` | `pkNX.Structures.FlatBuffers.SV.PersonalTable9SV` | personal stats JSON and pkNX PKHeX-compatible personal binary |
| `*.sarc` | `pkNX.Containers.SARC` | indexed members and manifest |
| `*.gfpak`, `*.gfpck` | `pkNX.Containers.GFPack` | indexed, decompressed members and manifest; Oodle dependency may be needed |

**Important:** The pkNX SV user interface can dump many **additional** game-specific
tables from the *original paired* `data.trpfs` / `data.trpfd`. This
headless adapter works from the already reconstructed `virtual/` tree
and currently implements only the native parsers listed above.
It does **not** claim that every `.bfbs`, texture, model, script, or
unknown binary has been decoded. Remaining types are explicitly
counted in `_index/inventory.json`; use existing secondary and R3
workflows for those formats. Results are not equivalent to a completed
TRPFD-to-virtual coverage audit.

## Layout

```text
Unpack/pkNX/
  README.md
  4.0.0/
    decoded/<original relative virtual path>.txt|json|tsv|pkhex.bin
    decoded/<original relative virtual path>.files/
    _index/
      inventory.json              # full Git-tracked virtual tree classification
      progress.json               # durable batch checkpoint / error totals
      batches/batch-000001.jsonl  # every attempted file + source SHA-256 + output paths + status
```

`decoded` means parser completed. `unsupported` means the candidate file did
not match its expected native format or exceeded safety limits.
`error` is an actual decoding error. Zero errors **does not** imply
other resource families are decoded. Only Git-tracked input files are
included; uncommitted or still-unextracted Trinity files cannot be
enumerated.

## GitHub Actions

Run [SV pkNX full virtual sweep](../../.github/workflows/sv-pknx-full.yml)
with `batch_size` 1–5000 and `workers` 1–8 (defaults 1000/4).
The workflow runs on Windows with .NET 10, verifies the planner, uses
`git ls-tree` for a complete tracked-file inventory, sparse-fetches
only selected native inputs, compiles the vendored pkNX batch exporter,
processes them in parallel, commits a bounded checkpoint to `master`
with no force push, then dispatches the next batch while work remains.

Use `restart=true` to sweep again from the beginning (e.g. after
new input packs or parser changes); old batch reports remain as historical
evidence. A failure is recorded, **not** promoted to successful decode.
Review `COMPLETE_WITH_ERRORS` and the exact failed paths in the JSONL
batch reports before claiming completion.

On a fully hydrated local checkout:

```powershell
python -m unittest discover -s tests -p test_sv_pknx_virtual.py -v
python scripts/pknx_virtual.py select --work .pknx-work --batch-size 1000
python scripts/pknx_virtual.py hydrate --work .pknx-work
dotnet build tools/pkNX/pkNX.VirtualDump/pkNX.VirtualDump.csproj -c Release
dotnet tools/pkNX/pkNX.VirtualDump/bin/Release/net10.0/pkNX.VirtualDump.dll Unpack/4.0.0/romfs/arc/data.trpfs/virtual Unpack/pkNX/4.0.0 .pknx-work/selection.txt .pknx-work/batch-report.jsonl 4
python scripts/pknx_virtual.py finalize --work .pknx-work
```

The job is not an editor and does not write ROM patches. Large archive entries
are bounded for hosted-runner safety; unsupported large resources remain
available for native processing in other pipelines. Check third-party
redistribution rights before publishing decoded game assets.
