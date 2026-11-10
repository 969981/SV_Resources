/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00470860; name: FUN_00470860
 */


undefined8 FUN_00470860(int param_1)

{
  if (param_1 < 0x2a1) {
    if (param_1 == 0x40) {
      return 0x33;
    }
    if (param_1 == 0x2a0) {
      return 0x34;
    }
  }
  else {
    if (param_1 == 0x2a1) {
      return 0x36;
    }
    if (param_1 == 0x2a2) {
      return 0x35;
    }
  }
  return 0xffffffff;
}


