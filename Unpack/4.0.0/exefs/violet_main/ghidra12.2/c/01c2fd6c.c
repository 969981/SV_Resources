/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2fd6c; name: FUN_01c2fd6c
 */


bool FUN_01c2fd6c(uint param_1,char param_2)

{
  bool bVar1;
  
  param_1 = param_1 & 0xffff;
  bVar1 = true;
  if (param_1 < 0x2cc) {
    if (param_1 < 0x1e3) {
      if (((4 < param_1 - 0x17e) && (2 < param_1 - 0xf9)) && (1 < param_1 - 0x96)) {
        return false;
      }
    }
    else if ((0xb < param_1 - 0x1e3) || ((1 << (ulong)(param_1 - 0x1e3 & 0x1f) & 0xfd3U) == 0)) {
      param_1 = param_1 - 0x283;
      if (0x1b < param_1) {
        return false;
      }
      if ((1 << (ulong)(param_1 & 0x1f) & 0x7bU) != 0) {
        return bVar1;
      }
      if (param_1 == 0x1b) {
        return param_2 == '\x05';
      }
      return false;
    }
    return bVar1;
  }
  if (param_1 < 0x378) {
    if ((param_1 - 0x315 < 0x15) && ((1 << (ulong)(param_1 - 0x315 & 0x1f) & 0x1c380fU) != 0)) {
      return bVar1;
    }
    if (param_1 - 0x2cc < 6) {
      return bVar1;
    }
  }
  else {
    if ((param_1 - 0x378 < 0xb) && ((1 << (ulong)(param_1 - 0x378 & 0x1f) & 0x427U) != 0)) {
      return bVar1;
    }
    if ((param_1 - 0x3e6 < 0x19) && ((1 << (ulong)(param_1 - 0x3e6 & 0x1f) & 0x1800003U) != 0)) {
      return bVar1;
    }
  }
  return false;
}


