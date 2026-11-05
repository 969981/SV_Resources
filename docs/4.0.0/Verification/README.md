# Verification policy

Every native file has an original virtual path and recorded SHA-256.
The original extraction _index is evidence of earlier output; fresh hashes
are only marked verified after --verify-sha or checked in conversion itself.
Outputs should include input fingerprint, original hash, tool/schema version,
validation result, output hash, and exact source path.

Levels: CONFIRMED, CANDIDATE, UNKNOWN, REJECTED.
Status: OK, BLOCKED, FAILED, PENDING.

The synthetic unit tests confirm SQLite schema, index ingestion, safe paths,
AHTB bounds, BNTX metadata, hash mismatch detection and blocked PNG exports.
These do not establish real-world BNTX rendering correctness or DAT message
decoding. Running the full native conversion still requires integration
testing with actual native files, without redistributing protected assets.
