#!/usr/bin/env python3
"""SV 4.0.0: read-only sys-botbase Wi-Fi MyStatus parity probe.

Only getTitleID/game version/getMainNsoBase/peekMain/peekAbsolute/pointerAll/
pointerPeek commands; no writes. Needs an owned Switch running game 4.0.0.
"""
import argparse
import hashlib
import json
import socket
import sys
import time
from pathlib import Path

TITLES = {"0100A3D008C5C000": "Scarlet", "01008F6008C5E000": "Violet"}
LENGTH = 0x68
ROOT = 0x47350D8
GLOBAL = 0x4740AC0
CHAINS = {
    "MyStatus": (ROOT, 0xD8, 8, 0xB8, 0, 0x40),
    "Config": (ROOT, 0xD8, 8, 0xB8, 0xD0, 0x40),
    "CurrentBox": (ROOT, 0xD8, 8, 0xB8, 0x28, 0x570),
    "BoxStartPokemon": (ROOT, 0xD8, 8, 0xB8, 0x30, 0x9D0, 0),
}


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def u64(raw):
    if len(raw) != 8:
        raise ValueError("short pointer response")
    return int.from_bytes(raw, "little")


def valid(addr):
    if not (0x10000 <= addr < (1 << 64)):
        raise ValueError("invalid or uninitialized pointer")
    return addr


class SocketReadOnly:
    """Compatible with SysBot.NET SocketAsync wire format (not USB)."""
    def __init__(self, host, port=6000, timeout=5):
        self.sock = socket.create_connection((host, port), timeout)
        self.sock.settimeout(timeout)
        self.fp = self.sock.makefile("rb")

    def __enter__(self):
        return self

    def __exit__(self, *_):
        self.fp.close()
        self.sock.close()

    def query(self, cmd, maxsize=1024):
        if cmd.split(" ", 1)[0] not in (
                "getTitleID", "game", "getMainNsoBase",
                "peekMain", "peekAbsolute", "pointerAll", "pointerPeek"):
            raise ValueError("not a read-only command")
        self.sock.sendall((cmd + "\r\n").encode("ascii"))
        raw = self.fp.readline(maxsize + 1)
        if not raw.endswith(b"\n") or len(raw) > maxsize:
            raise IOError("missing or oversized botbase response")
        return raw.strip(b"\r\n")

    def hexread(self, cmd, n):
        if not 0 < n <= 0x158:
            raise ValueError("read size outside approved range")
        data = self.query(cmd, n * 2 + 4)
        if len(data) != n * 2:
            raise IOError("short or invalid hexadecimal response")
        try:
            return bytes.fromhex(data.decode("ascii"))
        except (UnicodeError, ValueError) as e:
            raise IOError("botbase response is not hex") from e

    def title(self):
        return self.query("getTitleID", 64).decode("ascii").strip("\x00 ").upper()

    def version(self):
        return self.query("game version", 64).decode("ascii").strip("\x00 ")

    def base(self):
        # SwitchSocketAsync parses GetMainNsoBase as BIG endian.
        return valid(int.from_bytes(self.hexread("getMainNsoBase", 8), "big"))

    def main(self, offset, n):
        return self.hexread(f"peekMain 0x{offset:X} {n}", n)

    def absolute(self, address, n):
        return self.hexread(f"peekAbsolute 0x{valid(address):X} {n}", n)

    def pointer(self, chain):
        cmd = "pointerAll" + "".join(f" {x}" for x in chain)
        # SocketAsync parses pointerAll as BIG endian (USB differs).
        return valid(int.from_bytes(self.hexread(cmd, 8), "big"))

    def peek(self, chain, n):
        cmd = f"pointerPeek {n}" + "".join(f" {x}" for x in chain)
        return self.hexread(cmd, n)


def walk(t, main_base, chain):
    """Independent hop-by-hop pointer traversal. Last offset is an ADD."""
    cur = valid(u64(t.main(chain[0], 8)))
    hops = [cur]
    for offset in chain[1:-1]:
        cur = valid(u64(t.absolute(cur + offset, 8)))
        hops.append(cur)
    return valid(cur + chain[-1]), hops


def capture(t, main_base, reveal=False):
    chain = CHAINS["MyStatus"]
    addr = t.pointer(chain)
    manual, hops = walk(t, main_base, chain)
    a = t.absolute(addr, LENGTH)
    peek = t.peek(chain, LENGTH)
    state = valid(u64(t.main(GLOBAL, 8)))
    elf_addr = valid(state + 0x40)
    b = t.absolute(elf_addr, LENGTH)
    record = {
        "same_address": addr == elf_addr,
        "equal_all_0x68_bytes": a == b,
        "pointerAll_matches_manual": addr == manual,
        "pointerPeek_matches_absolute": a == peek,
        "hash_sysbot": sha(a),
        "hash_elf": sha(b),
        "hash_sysbot_address": sha(addr.to_bytes(8, "little")),
        "hash_elf_address": sha(elf_addr.to_bytes(8, "little")),
        "id32_equal": a[:4] == b[:4],
        "first_difference_offset": next((i for i, (x, y) in enumerate(zip(a, b)) if x != y), None),
        "payload_all_zero": not any(a),
        "aux": {},
    }
    if reveal:
        record["addresses"] = {
            "main": hex(main_base), "sysbot": hex(addr),
            "manual": hex(manual), "elf": hex(elf_addr),
            "state": hex(state), "shared_hops": [hex(x) for x in hops[:4]]}
        record["id32_hex"] = a[:4][::-1].hex()
        record["visible_tid6"] = f"{int.from_bytes(a[:4], 'little') % 1000000:06d}"
    for name, count in (("Config", 1), ("CurrentBox", 1), ("BoxStartPokemon", 0x158)):
        chain = CHAINS[name]
        v = {"readable": False}
        try:
            p = t.pointer(chain)
            m, extra_hops = walk(t, main_base, chain)
            data = t.absolute(p, count)
            v = {"readable": True, "pointerAll_matches_manual": p == m,
                 "shared_first_four_hops": hops[:4] == extra_hops[:4],
                 "pointerPeek_matches_absolute": data == t.peek(chain, count),
                 "sha256": sha(data)}
            if name == "Config":
                v["text_speed_bits"] = data[0] & 3
            elif name == "CurrentBox":
                v["box_index"] = data[0]
                v["typical_0_to_31"] = data[0] <= 31
            else:
                v["slot_all_zero"] = not any(data)
            if reveal:
                v["address"] = hex(p)
        except (OSError, ValueError, OverflowError) as e:
            v = {"readable": False, "why": type(e).__name__ + ": " + str(e)[:100]}
        record["aux"][name] = v
    return record


def classify(samples):
    if len(samples) < 2 or any("error" in x for x in samples):
        return "INCONCLUSIVE_UNREADABLE"
    if any(x["payload_all_zero"] for x in samples):
        return "INCONCLUSIVE_UNINITIALIZED"
    if not all(x["pointerAll_matches_manual"] and x["pointerPeek_matches_absolute"] for x in samples):
        return "INCONCLUSIVE_POINTER_SEMANTICS"
    if any(x["same_address"] and not x["equal_all_0x68_bytes"] for x in samples):
        return "INCONCLUSIVE_NON_ATOMIC_READ_RACE"
    if len({x["hash_sysbot_address"] for x in samples}) != 1 or len({x["hash_elf_address"] for x in samples}) != 1:
        return "INCONCLUSIVE_POINTER_MOVED_BETWEEN_SAMPLES"
    if len({x["hash_sysbot"] for x in samples}) != 1 or len({x["hash_elf"] for x in samples}) != 1:
        return "INCONCLUSIVE_CHANGED_DURING_SAMPLES"
    if all(x["same_address"] and x["equal_all_0x68_bytes"] for x in samples):
        return "VERIFIED_SAME_RUNTIME_PAYLOAD"
    if all(not x["same_address"] and x["equal_all_0x68_bytes"] for x in samples):
        return "DISTINCT_ADDRESSES_EQUAL_CONTENT_NOT_SAME_OBJECT"
    if all(not x["equal_all_0x68_bytes"] for x in samples):
        return "DIFFERENT_0x68_CONTENT"
    return "INCONCLUSIVE_MIXED_RESULTS"


def run(t, count=3, interval=0.25, reveal=False):
    title, version = t.title(), t.version()
    if title not in TITLES or version != "4.0.0":
        raise ValueError("Unsupported TitleID/game version: requires SV 4.0.0")
    base = t.base()
    samples = []
    for i in range(count):
        try:
            samples.append(capture(t, base, reveal))
        except (OSError, ValueError, OverflowError) as e:
            samples.append({"error": type(e).__name__ + ": " + str(e)[:120]})
        if i + 1 < count:
            time.sleep(interval)
    if t.title() != title or t.version() != version:
        raise RuntimeError("game changed during sampling")
    return {"schema": "sv400-mystatus-parity-v1", "source": "LIVE_SOCKET",
            "game": TITLES[title], "version": version, "samples": samples,
            "verdict": classify(samples),
            "note": "Memory equivalence cannot establish new-game RNG, seed, or save durability."}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--host", required=True)
    p.add_argument("--port", type=int, default=6000)
    p.add_argument("--timeout", type=float, default=5)
    p.add_argument("--samples", type=int, default=3)
    p.add_argument("--interval", type=float, default=0.25)
    p.add_argument("--output", type=Path)
    p.add_argument("--reveal-values", action="store_true",
                   help="Include trainer ID32 and absolute pointers in local report")
    a = p.parse_args()
    if not 2 <= a.samples <= 20 or not 0 <= a.interval <= 10:
        p.error("samples=2..20; interval=0..10")
    try:
        with SocketReadOnly(a.host, a.port, a.timeout) as t:
            result = run(t, a.samples, a.interval, a.reveal_values)
        text = json.dumps(result, indent=2, ensure_ascii=False) + "\n"
        if a.output:
            a.output.write_text(text, encoding="utf-8")
        print(text)
        return 0 if result["verdict"] == "VERIFIED_SAME_RUNTIME_PAYLOAD" else 2
    except (OSError, ValueError, RuntimeError) as exc:
        print("Unable to verify live data: " + str(exc), file=sys.stderr)
        return 3


if __name__ == "__main__":
    sys.exit(main())
