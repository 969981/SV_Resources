# SV 4.0.0 DAT/TBL message format

## File paths

virtual/message/dat/<OriginalLanguage>/{common,script}/<name>.dat
virtual/message/dat/<OriginalLanguage>/{common,script}/<name>.tbl

The original language name is preserved alongside any normalized BCP47 tag.

## Confirmed original layout

AHTB .tbl:
- byte 0: ASCII AHTB
- byte 4: little-endian uint32 label count
- entry: little-endian uint64 hash, uint16 byte length,
  UTF-8 label and NUL terminator.

DAT .dat, based on pinned pkNX TextFile:
- 0x00: uint16 sections (1)
- 0x02: uint16 line count
- 0x04: uint32 section bytes
- 0x08: uint32 initial key (0)
- 0x0C: uint32 section start (0x10)
- 0x10: uint32 inner section bytes
- 0x14: entries (uint32 offset relative to section start,
  uint16 UTF-16 length, uint16 flags).
- key for line i = (0x7C89 + 0x2983 * i) mod 65536.
- Each encrypted uint16 is XORed with the key, then the key
  rotates left by three bits before the next unit.

Native Chinese examples decoded from actual source:
- monsname.dat: 1=妙蛙种子, 6=喷火龙.
- itemname.dat: 1=大师球, 4=精灵球.
- wazaname.dat: 1=拍击, 3=连环巴掌.
- tokusei.dat: 1=恶臭, 2=降雨.
- ribbon.dat: 0=卡洛斯冠军奖章, 1=冠军奖章.
- bag.dat includes special text controls and ordinary HP / Lv. text.

The *_max end label accounts for one extra TBL entry relative to DAT
in all the verified sample pairs. The parser rejects count mismatches
without a matching final sentinel.

## Controls and fidelity

Known: 0x0010 variable prefix, 0xBE00 page return, 0xBE01 clear,
0xBE02 wait, 0xBDFF empty line, 0xFF01 ruby/furigana.
Unknown variable opcodes remain in the original decoded code_units_hex
and are flagged CONTROL_PARTIAL; their meaning is NOT invented.

The parser produces parsed metadata, Unicode CSV, and application-facing
resources/messages JSON. It inserts queryable entries into message_catalog,
not speculative numeric game IDs into semantic_entities.

Code: scripts/resource_pipeline/r1_text.py
Tests: tests/test_sv_r1_native.py
