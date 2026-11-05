"""Read-only Scarlet/Violet Gen9 DAT/TBL message decoding.

Implements the file and XOR layout established by the pinned
tools/pkNX/pkNX.Structures/Text/TextFile.cs. Never edits original bytes.
Unknown control words are retained losslessly in code_units_hex.
"""
from __future__ import annotations
import struct

KEY_BASE = 0x7C89
KEY_ADVANCE = 0x2983
KEY_VARIABLE = 0x0010
KEY_RETURN = 0xBE00
KEY_CLEAR = 0xBE01
KEY_WAIT = 0xBE02
KEY_EMPTY = 0xBDFF
KEY_RUBY = 0xFF01

LANGUAGES = {
    "Simp_Chinese": "zh-Hans", "Trad_Chinese": "zh-Hant",
    "English": "en", "French": "fr", "German": "de", "Italian": "it",
    "Spanish": "es", "Korean": "ko", "JPN": "ja",
    "JPN_KANJI": "ja-x-kanji",
}


def parse_ahtb(data: bytes):
    if len(data) < 8 or data[:4] != b"AHTB":
        raise ValueError("Invalid AHTB signature")
    count = struct.unpack_from("<I", data, 4)[0]
    if count > 1000000 or count * 11 + 8 > len(data):
        raise ValueError("AHTB label count cannot fit source")
    result = []
    pos = 8
    for index in range(count):
        if pos + 10 > len(data):
            raise ValueError("AHTB record truncated")
        h, size = struct.unpack_from("<QH", data, pos)
        pos += 10
        if not size or pos + size > len(data) or data[pos+size-1] != 0:
            raise ValueError("Invalid AHTB string size/terminator")
        label = data[pos:pos+size-1].decode("utf-8")
        result.append({"ordinal": index, "hash64": f"{h:016X}", "label": label})
        pos += size
    if pos != len(data):
        raise ValueError("Trailing AHTB bytes")
    return result


def parse_dat(data: bytes):
    """Decode DAT records, returning raw words, flags, and conservative text."""
    if len(data) < 20:
        raise ValueError("DAT too short")
    sections, count, total, initial, section_base = struct.unpack_from("<HHIII", data, 0)
    if sections != 1 or initial != 0 or section_base != 16:
        raise ValueError("Unexpected message header")
    if section_base + total != len(data):
        raise ValueError("DAT section length differs from file size")
    if struct.unpack_from("<I", data, section_base)[0] != total:
        raise ValueError("DAT inner section length differs from header")
    if count > 1000000 or section_base + 4 + 8*count > len(data):
        raise ValueError("DAT line directory outside source")
    lines = []
    minimum_offset = 4 + 8*count
    for index in range(count):
        off, unit_count, flags = struct.unpack_from("<IHH", data, section_base+4+index*8)
        end = section_base + off + unit_count*2
        if off < minimum_offset or end > len(data) or unit_count > 0xFFFF:
            raise ValueError(f"DAT line {index} outside source")
        key = (KEY_BASE + index * KEY_ADVANCE) & 0xFFFF
        units = []
        for pos in range(section_base+off, end, 2):
            unit = struct.unpack_from("<H", data, pos)[0] ^ key
            units.append(unit)
            key = ((key << 3) | (key >> 13)) & 0xFFFF
        plain, tokens, status = render_units(units)
        lines.append({
            "ordinal": index, "offset_section": off,
            "byte_length": unit_count*2, "flags": flags,
            "text": plain, "tokens": tokens,
            "code_units_hex": [f"{u:04X}" for u in units],
            "text_status": status
        })
    return lines


def render_units(words):
    """Generate human-readable text plus a complete token audit.

    Preserve unknown control words in code_units_hex, rather than presenting
    an inferred variable name or dropping unknown metadata.
    """
    out, tokens = [], []
    unknown = False
    i = 0
    terminated = False
    while i < len(words):
        start = i
        u = words[i]
        i += 1
        if u == 0:
            terminated = True
            break
        if u == KEY_VARIABLE:
            if i+1 >= len(words):
                tokens.append({"kind":"invalid_control", "offset_units":start})
                out.append("[CONTROL_TRUNCATED]")
                unknown = True
                break
            count = words[i]
            opcode = words[i+1]
            i += 2
            token = {"kind":"control", "offset_units":start,
                     "count":count, "code_hex":f"{opcode:04X}", "args_hex":[]}
            if opcode in (KEY_WAIT, KEY_EMPTY):
                if i >= len(words):
                    token["kind"] = "invalid_control"
                    out.append("[CONTROL_TRUNCATED]")
                    unknown = True
                else:
                    arg = words[i]
                    i += 1
                    token["args_hex"].append(f"{arg:04X}")
                    out.append(f"[WAIT {arg}]" if opcode == KEY_WAIT else f"[EMPTY {arg}]")
            elif opcode == KEY_RETURN:
                out.append("\\r")
            elif opcode == KEY_CLEAR:
                out.append("\\c")
            elif opcode == KEY_RUBY:
                if i+2 > len(words):
                    token["kind"] = "invalid_control"
                    out.append("[RUBY_TRUNCATED]")
                    unknown = True
                else:
                    base_length, ruby_length = words[i:i+2]
                    i += 2
                    n = 2*base_length + ruby_length
                    if i+n > len(words):
                        token["kind"] = "invalid_control"
                        out.append("[RUBY_TRUNCATED]")
                        unknown = True
                        i = len(words)
                    else:
                        base = words[i:i+base_length]
                        reading = words[i+base_length:i+base_length+ruby_length]
                        repeated = words[i+base_length+ruby_length:i+n]
                        token["ruby_hex"] = {
                            "base": [f"{x:04X}" for x in base],
                            "reading": [f"{x:04X}" for x in reading],
                            "repeated_base": [f"{x:04X}" for x in repeated]
                        }
                        i += n
                        out.append("{" + "".join(chr(x) for x in base) + "|" +
                                   "".join(chr(x) for x in reading) +
                                   ("" if base == repeated else "|" + "".join(chr(x) for x in repeated)) + "}")
            else:
                # pkNX's generic variable convention is count-1 16-bit args.
                # Some SV entries have unusual counts. Bound the read and
                # preserve a warning without losing raw bytes.
                expected = max(0, count-1)
                available = len(words)-i
                take = min(expected, available)
                token["args_hex"] = [f"{x:04X}" for x in words[i:i+take]]
                i += take
                if expected != take:
                    token["incomplete"] = True
                unknown = True
                out.append("[VAR 0x" + f"{opcode:04X}" +
                           ("(" + ",".join(token["args_hex"]) + ")" if take else "") + "]")
            tokens.append(token)
        else:
            if u == ord("\n"):
                out.append("\\n")
            elif u == ord("\\"):
                out.append("\\\\")
            elif u == ord("["):
                out.append("\\[")
            elif u == ord("{"):
                out.append("\\{")
            elif 0xD800 <= u <= 0xDFFF:
                out.append(f"\\u{u:04X}")
                unknown = True
            else:
                out.append(chr(u))
    if not terminated:
        unknown = True
    if i < len(words) and any(u != 0 for u in words[i:]):
        unknown = True
        tokens.append({"kind":"trailing_units", "offset_units":i,
                       "raw_hex":[f"{u:04X}" for u in words[i:]]})
    return "".join(out), tokens, "CONTROL_PARTIAL" if unknown else "DECODED"


def join_messages(dat_bytes: bytes, tbl_bytes: bytes, language_raw: str, relative_name: str):
    """Validate ordinal-to-key mapping; only allow a recognized _max sentinel."""
    labels = parse_ahtb(tbl_bytes)
    lines = parse_dat(dat_bytes)
    if len(labels) == len(lines) + 1 and labels[-1]["label"].lower().endswith("_max"):
        sentinel = labels[-1]
        labels = labels[:-1]
        mode = "TRAILING_MAX_SENTINEL"
    elif len(labels) == len(lines):
        sentinel = None
        mode = "EXACT_LENGTH"
    else:
        raise ValueError(f"DAT/TBL mismatch: lines={len(lines)} labels={len(labels)}")
    language = LANGUAGES.get(language_raw)
    if not language:
        language = language_raw  # raw directory is still unambiguous
    entries = []
    for line, label in zip(lines, labels):
        entries.append({**line, "label": label["label"],
                        "hash64": label["hash64"]})
    return {
        "source": relative_name, "language_raw":language_raw, "language":language,
        "matching": mode, "sentinel": sentinel, "entries": entries,
        "decoded": sum(x["text_status"] == "DECODED" for x in entries),
        "partial": sum(x["text_status"] != "DECODED" for x in entries),
        "source_format": "SV_DAT_TBL", "semantic_game_ids_inferred":False
    }
