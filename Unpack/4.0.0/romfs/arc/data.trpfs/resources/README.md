# resources/ — semantic view, not the original filesystem

Reserved categories:
pokemon/, items/, moves/, abilities/, ribbons/, ui/, messages/,
characters/, world/, effects/, audio/, ai/, _index/.

Do not rename raw resources or infer Species/Item/Ribbon ID from a filename
alone. Only publish entries with a traceable source, semantic identity,
language and evidence status. The SQLite resource_catalog VIEW is the primary
cross-domain discovery surface. This directory intentionally begins with
documentation and no unproven asset mapping.
