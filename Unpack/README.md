# SV unpacked and processed resources

This tree contains **derived** results only. The immutable source archive stays in `4.0.0/0` (ExeFS) and `4.0.0/1` (RomFS).

- `4.0.0/exefs/`: per-original-file binary metadata and analysis.
- `4.0.0/romfs/`: per-original-file extraction, reconstructed virtual paths and conversions.
- `4.0.0/_index/`: locally generated inventories (created by scripts).

For an original `4.0.0/1/path/name.ext`, the directory is `Unpack/4.0.0/romfs/path/name.ext/`. Do **not** strip extensions or flatten paths. For an ExeFS original, use `Unpack/4.0.0/exefs/name/`.

Example for the Trinity filesystem:

```text
Unpack/4.0.0/romfs/arc/
  data.trpfd/                     # descriptor/index exports
  data.trpfs/                     # original container basename as directory
    virtual/<original game path>  # virtual filesystem extraction, file bytes kept intact
    parsed/<original game path>/<filename.ext>/    # nested unpack / metadata
    converted/<original game path>/<filename.ext>/ # optional PNG/CSV/JSON outputs
```

Use `scripts/Plan-SV-Unpack.py` to produce a task inventory. A planned directory is **not** evidence of successful extraction. Every real artifact must have a provenance record (source path, version, sizes/hashes, virtual path, tool commit/version and parameters) before publication. Read [unpack roadmap](../docs/unpack-roadmap.md).
