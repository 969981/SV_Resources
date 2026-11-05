# SV message DAT/TBL

## Native paths

virtual/message/dat/<OriginalLanguage>/{common,script}/<name>.dat
virtual/message/dat/<OriginalLanguage>/{common,script}/<name>.tbl

Observed language directories include Simp_Chinese, Trad_Chinese,
English, JPN, JPN_KANJI, French, German, Spanish, Italian and Korean.
Preserve each source code; derive ISO/BCP47 names only in a separate map.

## AHTB .tbl findings (confirmed against app_common.tbl and bag.tbl)

- Offset 0x00: ASCII AHTB
- Offset 0x04: little-endian uint32 record count
- Each entry: little-endian uint64 hash, uint16 label byte length,
  then UTF-8 label bytes including a NUL terminator.
- app_common.tbl: 65 name records and 1,705 bytes in observed sample.

The parser verifies bounds, UTF-8 encoding, count and exact end-of-file.
It exports labels and hash IDs as JSON/CSV, not translated message content.

## .dat findings / current limitation

The paired app_common.dat begins 01 00 40 00 and is 1,300 bytes in the
observed sample. bag.dat begins 01 00 8B 01 and is 10,596 bytes. AHTB
labels and DAT payloads must not be assumed identical by naive ordinal.
These files are NOT currently proven to be plaintext UTF-8 or UTF-16.
R1 does not decode message values, control tokens, colors, variables or
language-specific grammar. text=null and NOT_DECODED are intentional.

Next evidence: verify DAT record table, text coding/decryption,
paired indexing and control token round-trip against native bytes; only then
promote text into resources/messages and localized_names.
