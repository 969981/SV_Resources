-- R3/R4 table additions; backward compatible with R0/R1 schema.
CREATE TABLE IF NOT EXISTS r4_object_jobs (
 object_name TEXT PRIMARY KEY,
 fingerprint TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('BLOCKED','FAILED','STRUCTURE_PASS','PROMOTED')),
 input_sha256 TEXT,
 report_path TEXT,
 error_message TEXT,
 attempts INTEGER NOT NULL DEFAULT 1,
 updated_utc TEXT NOT NULL
);
CREATE INDEX IF NOT EXISTS ix_r4_jobs_status ON r4_object_jobs(status,updated_utc);
CREATE INDEX IF NOT EXISTS ix_r4_jobs_fp ON r4_object_jobs(fingerprint);
-- mtime/size cache is an optimization. SHA still refers to actual file bytes.
CREATE TABLE IF NOT EXISTS r4_hash_cache (
 path TEXT PRIMARY KEY,
 size_bytes INTEGER NOT NULL,
 mtime_ns INTEGER NOT NULL,
 sha256 TEXT NOT NULL
);
CREATE TABLE IF NOT EXISTS r4_object_dependencies (
 object_name TEXT NOT NULL REFERENCES r4_object_jobs(object_name) ON DELETE CASCADE,
 source_path TEXT NOT NULL,
 role TEXT NOT NULL,
 evidence TEXT NOT NULL,
 required INTEGER NOT NULL DEFAULT 1 CHECK(required IN (0,1)),
 exists_local INTEGER NOT NULL CHECK(exists_local IN (0,1)),
 sha256 TEXT,
 PRIMARY KEY(object_name,source_path)
);
CREATE VIEW IF NOT EXISTS r4_job_summary AS
 SELECT status,COUNT(*) AS object_count
 FROM r4_object_jobs
 GROUP BY status;
