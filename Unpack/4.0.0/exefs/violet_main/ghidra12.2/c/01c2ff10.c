/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2ff10; name: FUN_01c2ff10
 */


undefined8 FUN_01c2ff10(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 1;
  if (param_1 < 0x304) {
    if (param_1 < 0x1e0) {
      if (param_1 - 0x179 < 5) {
        return uVar1;
      }
      if (param_1 - 0x90 < 3) {
        return uVar1;
      }
      if (param_1 - 0xf3 < 3) {
        return uVar1;
      }
      return 0;
    }
    if ((param_1 - 0x1e0 < 9) && ((1 << (ulong)(param_1 - 0x1e0 & 0x1f) & 0x167U) != 0)) {
      return uVar1;
    }
    param_1 = param_1 - 0x27e;
    if (7 < param_1) {
      return 0;
    }
    uVar2 = 0x9f;
  }
  else {
    if ((param_1 - 0x304 < 0x23) && ((1L << ((ulong)(param_1 - 0x304) & 0x3f) & 0x78fe1e003U) != 0))
    {
      return uVar1;
    }
    if ((param_1 - 0x3e2 < 0x1b) && ((1 << (ulong)(param_1 - 0x3e2 & 0x1f) & 0x7f2000fU) != 0)) {
      return uVar1;
    }
    param_1 = param_1 - 0x37b;
    if (0xe < param_1) {
      return 0;
    }
    uVar2 = 0x407b;
  }
  if ((1 << (ulong)(param_1 & 0x1f) & uVar2) == 0) {
    return 0;
  }
  return uVar1;
}


