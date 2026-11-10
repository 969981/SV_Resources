# Pokémon Scarlet / Violet 4.0.0 — experimental recovered `main.lua`

**Repository status (2026-11-10):** `provenance.json` and `VALIDATION.md` are committed to `master`, but `main.lua` itself is **pending a large-file Git upload**. The exact source is preserved in the independent `SV400_main_lua_full_source_experimental.zip` artifact (34,448,213 bytes unpacked).

The intended path is this directory's `main.lua`, adjacent to the immutable original at `../main.blua`. Do **not** overwrite the original BLUA.

**SHA-256 of intended `main.lua`:** `62db3e8515f8871c27f5ef034e74db5ea5ed114756c5dbc42a671750e01266c7`.

`main.lua` is a Lua 5.4 **experimental register-level reconstruction**, not the original high-level source and **not gameplay verified**. Syntax succeeds, while a controlled mock-runtime A/B comparison already diverged. The directly recovered 30,829 child function bodies and 429,034 translated root instructions are not proof of actual engine behavior.

See [validation](VALIDATION.md), [provenance](provenance.json) and [Draft PR #92](https://github.com/969981/SV_Resources/pull/92). The complete root translation generator and exact CLI are not committed in PR #92, so source generation is not yet end-to-end reproducible.

To add the actual source from the verified archive, copy `main.lua` into this directory, check its SHA-256 above, optionally run `luac5.4 -p`, then stage and commit **only** this source path. Never force-push or merge unverified scripts into the immutable source directory.
