# Game semantic resources

Categories reserved: pokemon, items, moves, abilities, ribbons,
ui, messages, characters, world, effects, audio, ai, _index.

Verified DAT/TBL message text is exported as:
messages/<OriginalLanguage>/{common,script}/<name>.json

This proves the identity of a message key but does NOT prove that
a text ordinal equals a gameplay Species/Item/Move/Ability/Ribbon ID.
Only native cross-references should promote such joins to CONFIRMED.

BNTX images are first exported to converted/. Semantic game-ID assets
are added under resources/items, resources/ribbons etc only after
native tables and links prove their IDs.

SQLite message_catalog serves multilingual message lookup;
resource_catalog is reserved for evidence-backed game entities.
