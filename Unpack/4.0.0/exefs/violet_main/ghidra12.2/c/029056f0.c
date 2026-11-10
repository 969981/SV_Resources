/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029056f0; name: FUN_029056f0
 */


undefined8 FUN_029056f0(ushort param_1)

{
  if (param_1 < 0x102) {
    if (param_1 == 0xc9) {
      return 4;
    }
    if (param_1 == 0xf0) {
      return 2;
    }
    if (param_1 == 0xf1) {
      return 1;
    }
  }
  else if (((param_1 == 0x102) || (param_1 == 0x371)) || (param_1 == 0x373)) {
    return 3;
  }
  return 0;
}


