# R0/R1 command reference

See scripts/resource_pipeline/README.md for current commands.

R0 = scan native _index/export.jsonl and _index/batches/pack-*.jsonl;
classify magic and extension; optional --verify-sha; write SQLite tables.
Run export --json for CSV and JSON snapshots.

R1 = AHTB label export and BNTX structural metadata; optional externally
verified PNG converter. Unsupported formats are not renamed or guessed.
For large extraction jobs, do not rehash the entire 408,641-file inventory
unless --verify-sha was explicitly requested.

Schema tables: raw_files, file_formats, parsed_records, resource_assets,
semantic_entities, resource_links, localized_names, conversion_jobs,
evidence. The resource_catalog view joins these without storing fake
or duplicate semantic IDs.

The converted and resources directories are under the same data.trpfs
directory as virtual and parsed, as required for side-by-side traceability.
