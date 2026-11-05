# parsed/ — original-path structural analysis

For every virtual/<path.ext>, store intermediate parsed metadata at the same
relative path, with an explicit suffix to avoid collisions. Never modify
virtual/. Keep raw IDs, offsets, fields, schema, input SHA and confidence.

R1 examples:
- message/dat/Simp_Chinese/common/app_common.labels.json (AHTB only)
- appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx.json

The source of each derived item is recorded in the catalog. A parsed record is
not a confirmed semantic identity.
