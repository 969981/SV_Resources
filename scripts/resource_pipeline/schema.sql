-- SV 4.0.0 Trinity resource catalog. SQLite 3; only evidence-backed semantic IDs.
CREATE TABLE IF NOT EXISTS raw_files (
 id INTEGER PRIMARY KEY,
 source_version TEXT NOT NULL,
 virtual_path TEXT NOT NULL,
 hash64 TEXT,
 size_bytes INTEGER,
 sha256_recorded TEXT,
 sha256_verified INTEGER NOT NULL DEFAULT 0 CHECK (sha256_verified IN (0,1)),
 source_pack TEXT,
 pack_offset INTEGER,
 extract_status TEXT NOT NULL DEFAULT 'UNKNOWN',
 available INTEGER NOT NULL DEFAULT 0 CHECK (available IN (0,1)),
 last_scanned_utc TEXT NOT NULL,
 UNIQUE(source_version,virtual_path)
);
CREATE INDEX IF NOT EXISTS ix_raw_hash ON raw_files(hash64);
CREATE INDEX IF NOT EXISTS ix_raw_status ON raw_files(extract_status,available);
CREATE TABLE IF NOT EXISTS file_formats (
 raw_file_id INTEGER PRIMARY KEY REFERENCES raw_files(id) ON DELETE CASCADE,
 extension TEXT,
 magic_hex TEXT,
 format_name TEXT NOT NULL,
 confidence TEXT NOT NULL CHECK(confidence IN ('CONFIRMED','CANDIDATE','UNKNOWN','REJECTED')),
 parser_name TEXT,
 detector_version TEXT NOT NULL,
 parse_status TEXT NOT NULL
);
CREATE INDEX IF NOT EXISTS ix_formats_name ON file_formats(format_name,parse_status);
CREATE TABLE IF NOT EXISTS parsed_records (
 id INTEGER PRIMARY KEY,
 raw_file_id INTEGER NOT NULL REFERENCES raw_files(id) ON DELETE CASCADE,
 record_key TEXT NOT NULL,
 ordinal INTEGER,
 byte_offset INTEGER,
 length_bytes INTEGER,
 format_name TEXT NOT NULL,
 content_json TEXT,
 evidence_id INTEGER REFERENCES evidence(id),
 UNIQUE(raw_file_id,record_key)
);
CREATE INDEX IF NOT EXISTS ix_parsed_key ON parsed_records(record_key);
CREATE TABLE IF NOT EXISTS resource_assets (
 id INTEGER PRIMARY KEY,
 raw_file_id INTEGER NOT NULL REFERENCES raw_files(id) ON DELETE CASCADE,
 asset_kind TEXT NOT NULL,
 output_path TEXT NOT NULL,
 sha256 TEXT,
 status TEXT NOT NULL,
 updated_utc TEXT NOT NULL,
 UNIQUE(raw_file_id,asset_kind,output_path)
);
CREATE INDEX IF NOT EXISTS ix_assets_path ON resource_assets(output_path);
CREATE TABLE IF NOT EXISTS semantic_entities (
 id INTEGER PRIMARY KEY,
 entity_type TEXT NOT NULL,
 game_id TEXT,
 form_id TEXT,
 canonical_key TEXT NOT NULL UNIQUE,
 status TEXT NOT NULL CHECK(status IN ('CONFIRMED','CANDIDATE','UNKNOWN','REJECTED')),
 evidence_id INTEGER REFERENCES evidence(id),
 UNIQUE(entity_type,game_id,form_id)
);
CREATE TABLE IF NOT EXISTS resource_links (
 id INTEGER PRIMARY KEY,
 semantic_entity_id INTEGER NOT NULL REFERENCES semantic_entities(id) ON DELETE CASCADE,
 raw_file_id INTEGER REFERENCES raw_files(id),
 asset_id INTEGER REFERENCES resource_assets(id),
 link_role TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('CONFIRMED','CANDIDATE','UNKNOWN','REJECTED')),
 evidence_id INTEGER REFERENCES evidence(id),
 CHECK (raw_file_id IS NOT NULL OR asset_id IS NOT NULL),
 UNIQUE(semantic_entity_id,raw_file_id,asset_id,link_role)
);
CREATE TABLE IF NOT EXISTS localized_names (
 id INTEGER PRIMARY KEY,
 semantic_entity_id INTEGER NOT NULL REFERENCES semantic_entities(id) ON DELETE CASCADE,
 language TEXT NOT NULL,
 name TEXT,
 text_key TEXT,
 raw_file_id INTEGER REFERENCES raw_files(id),
 status TEXT NOT NULL CHECK(status IN ('CONFIRMED','CANDIDATE','UNKNOWN','REJECTED')),
 UNIQUE(semantic_entity_id,language,text_key)
);
CREATE INDEX IF NOT EXISTS ix_loc_language ON localized_names(language);
CREATE TABLE IF NOT EXISTS conversion_jobs (
 id INTEGER PRIMARY KEY,
 raw_file_id INTEGER NOT NULL REFERENCES raw_files(id) ON DELETE CASCADE,
 stage TEXT NOT NULL,
 fingerprint TEXT NOT NULL UNIQUE,
 status TEXT NOT NULL CHECK(status IN ('OK','BLOCKED','FAILED','PENDING')),
 updated_utc TEXT NOT NULL,
 error_message TEXT
);
CREATE INDEX IF NOT EXISTS ix_jobs_status ON conversion_jobs(status,stage);
CREATE TABLE IF NOT EXISTS evidence (
 id INTEGER PRIMARY KEY,
 level TEXT NOT NULL CHECK(level IN ('CONFIRMED','CANDIDATE','UNKNOWN','REJECTED')),
 source_ref TEXT,
 method TEXT NOT NULL,
 details_json TEXT,
 created_utc TEXT NOT NULL
);
DROP VIEW IF EXISTS resource_catalog;
CREATE VIEW resource_catalog AS
SELECT e.entity_type,e.game_id,e.form_id,ln.name AS name_zh,
       rf.virtual_path AS source_path, a.output_path,
       rl.link_role, rl.status AS link_status, e.status AS entity_status,
       ln.status AS name_status
 FROM semantic_entities e
 LEFT JOIN resource_links rl ON rl.semantic_entity_id=e.id
 LEFT JOIN raw_files rf ON rf.id=rl.raw_file_id
 LEFT JOIN resource_assets a ON a.id=rl.asset_id
 LEFT JOIN localized_names ln
   ON ln.semantic_entity_id=e.id AND ln.language='zh-Hans';
