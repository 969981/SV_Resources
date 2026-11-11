"""Synthetic tests only. Never label these results as a Switch/ELF live capture."""
import copy
import importlib.util
import socket
import struct
import threading
import unittest
from pathlib import Path

SOURCE = Path(__file__).resolve().parents[1] / "scripts/Probe-SV400-MyStatus-Live.py"
spec = importlib.util.spec_from_file_location("sv400_mystatus_live", SOURCE)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


def ptr(x):
    return struct.pack("<Q", x)


class MemorySwitch:
    def __init__(self, same_address=True, same_bytes=True):
        self.mem = {}
        self.mbase = 0x7100000000
        self._title = "0100A3D008C5C000"
        self._version = "4.0.0"
        self.p = [0x20000000, 0x21000000, 0x22000000, 0x23000000, 0x24000000]
        r, a, b, c, d = self.p
        self.mem[probe.ROOT] = ptr(r)
        self.mem[r + 0xD8] = ptr(a)
        self.mem[a + 0x08] = ptr(b)
        self.mem[b + 0xB8] = ptr(c)
        self.mem[c + 0x00] = ptr(d)
        self.mem[c + 0xD0] = ptr(0x26000000)
        self.mem[c + 0x28] = ptr(0x27000000)
        self.mem[c + 0x30] = ptr(0x28000000)
        self.mem[0x28000000 + 0x9D0] = ptr(0x29000000)
        self.mem[0x26000000 + 0x40] = bytes([2])
        self.mem[0x27000000 + 0x570] = bytes([7])
        self.mem[0x29000000] = bytes(range(256)) + bytes(range(88))
        payload = bytearray(probe.LENGTH)
        payload[:4] = (305419896).to_bytes(4, "little")
        payload[4:8] = bytes([0x32, 1, 0, 2])
        payload[16:22] = b"TESTOT"
        self.mem[d + 0x40] = bytes(payload)
        state = d if same_address else 0x30000000
        if not same_bytes:
            payload[0x50] ^= 0x55
        self.mem[probe.GLOBAL] = ptr(state)
        self.mem[state + 0x40] = bytes(payload)

    def title(self):
        return self._title

    def version(self):
        return self._version

    def base(self):
        return self.mbase

    def main(self, addr, n):
        return self._read(addr, n)

    def absolute(self, addr, n):
        return self._read(addr, n)

    def _read(self, addr, n):
        if addr not in self.mem:
            raise OSError("unmapped in synthetic memory")
        item = self.mem[addr]
        if len(item) != n:
            raise OSError("short synthetic read")
        return item

    def pointer(self, chain):
        return probe.walk(self, self.mbase, chain)[0]

    def peek(self, chain, n):
        return self.absolute(self.pointer(chain), n)


class ProbeTests(unittest.TestCase):
    def test_real_resolver_chain_matches_mock(self):
        t = MemorySwitch()
        address, hops = probe.walk(t, t.base(), probe.CHAINS["MyStatus"])
        self.assertEqual(address, 0x24000040)
        self.assertEqual(hops[:4], t.p[:4])

    def test_same_physical_payload(self):
        t = MemorySwitch()
        result = probe.run(t, count=2, interval=0)
        self.assertEqual(result["verdict"], "VERIFIED_SAME_RUNTIME_PAYLOAD")
        self.assertTrue(result["samples"][0]["equal_all_0x68_bytes"])
        self.assertTrue(all(x["readable"] for x in result["samples"][0]["aux"].values()))
        self.assertTrue(result["samples"][0]["aux"]["Config"]["shared_first_four_hops"])

    def test_distinct_identical_copy_does_not_prove_same_object(self):
        t = MemorySwitch(same_address=False)
        result = probe.run(t, count=2, interval=0)
        self.assertEqual(result["verdict"], "DISTINCT_ADDRESSES_EQUAL_CONTENT_NOT_SAME_OBJECT")

    def test_different_data_and_first_mismatch(self):
        t = MemorySwitch(same_address=False, same_bytes=False)
        result = probe.run(t, count=2, interval=0)
        self.assertEqual(result["verdict"], "DIFFERENT_0x68_CONTENT")
        self.assertEqual(result["samples"][0]["first_difference_offset"], 0x50)

    def test_wrong_version_rejected_before_memory_read(self):
        t = MemorySwitch()
        t._version = "3.0.1"
        with self.assertRaises(ValueError):
            probe.run(t, count=2, interval=0)

    def test_no_trainer_personal_data_in_default_report(self):
        t = MemorySwitch()
        output = probe.run(t, count=2, interval=0)
        report = repr(output)
        self.assertNotIn("305419896", report)
        self.assertNotIn("TESTOT", report)
        self.assertNotIn("0x24000040", report)
        visible = probe.run(t, count=2, interval=0, reveal=True)
        self.assertEqual(visible["samples"][0]["visible_tid6"], "419896")

    def test_pointerpeek_divergence_fails_closed(self):
        class BadPeek(MemorySwitch):
            def peek(self, chain, n):
                raw = super().peek(chain, n)
                if chain == probe.CHAINS["MyStatus"]:
                    return bytes([raw[0] ^ 1]) + raw[1:]
                return raw
        r = probe.run(BadPeek(), count=2, interval=0)
        self.assertEqual(r["verdict"], "INCONCLUSIVE_POINTER_SEMANTICS")

    def test_auxiliary_not_loaded_is_not_primary_failure(self):
        t = MemorySwitch()
        del t.mem[0x27000000 + 0x570]
        r = probe.run(t, count=2, interval=0)
        self.assertEqual(r["verdict"], "VERIFIED_SAME_RUNTIME_PAYLOAD")
        self.assertFalse(r["samples"][0]["aux"]["CurrentBox"]["readable"])

    def test_state_changed_during_samples_not_confirmed(self):
        a = probe.capture(MemorySwitch(), 0x7100000000)
        b = copy.deepcopy(a)
        b["hash_sysbot"] = "0" * 64
        self.assertEqual(probe.classify([a, b]), "INCONCLUSIVE_CHANGED_DURING_SAMPLES")

    def test_matching_address_with_different_bytes_is_read_race(self):
        x = probe.capture(MemorySwitch(), 0x7100000000)
        y = copy.deepcopy(x)
        y["equal_all_0x68_bytes"] = False
        self.assertEqual(probe.classify([x, y]), "INCONCLUSIVE_NON_ATOMIC_READ_RACE")

    def test_moving_pointer_between_samples_is_inconclusive(self):
        x = probe.capture(MemorySwitch(), 0x7100000000)
        y = copy.deepcopy(x)
        y["hash_sysbot_address"] = "0" * 64
        self.assertEqual(probe.classify([x, y]), "INCONCLUSIVE_POINTER_MOVED_BETWEEN_SAMPLES")

    def test_socket_wire_is_read_only_and_fragmentation_safe(self):
        left, right = socket.socketpair()
        obj = probe.SocketReadOnly.__new__(probe.SocketReadOnly)
        obj.sock, obj.fp = left, left.makefile("rb")
        def server():
            received = b""
            while not received.endswith(b"\r\n"):
                received += right.recv(1024)
            self.assertEqual(received, b"getMainNsoBase\r\n")
            right.sendall(b"0000000071000000")
            right.sendall(b"\n")
            right.close()
        th = threading.Thread(target=server)
        th.start()
        try:
            self.assertEqual(obj.base(), 0x71000000)
            with self.assertRaises(ValueError):
                obj.query("pokeMain 0x100 04")
        finally:
            obj.fp.close()
            left.close()
            th.join(timeout=3)


if __name__ == "__main__":
    unittest.main()
