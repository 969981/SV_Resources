#!/usr/bin/env python3
"""Synthetic field-reader scan regression; no game binaries."""
import importlib.util
from pathlib import Path
p=Path(__file__).resolve().parents[1]/'scripts'/'Trace-SV400-VersionFieldConsumers.py'
s=importlib.util.spec_from_file_location('field_scan',p)
m=importlib.util.module_from_spec(s);s.loader.exec_module(m)
assert m.B0.search('ldrb w0,[x1, #0xb0]')
assert m.B1.search('ldrb w0,[x1, #0xb1]')
assert not m.B0.search('ldrb w0,[x1, #0xb10]')
assert not m.B1.search('ldrb w0,[x1, #0xb12]')
assert not m.B1.search('ldrb w0,[x1, #0xb0]')
assert m.STACK.search('ldrb w0,[sp, #0xb0]')
print('PASS VersionTable candidate A/B byte reader patterns')
