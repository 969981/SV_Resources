/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02963410; name: FUN_02963410
 */


undefined8 FUN_02963410(undefined2 *param_1,ushort param_2)

{
  undefined2 uVar1;
  
  if (param_2 < 0x148) {
    if (param_2 < 0x53) {
      if (param_2 == 0x14) {
        uVar1 = 0x105;
      }
      else {
        if (param_2 != 0x23) {
          return 0;
        }
        uVar1 = 0x106;
      }
    }
    else if (param_2 == 0x53) {
      uVar1 = 0x109;
    }
    else if (param_2 == 0x80) {
      uVar1 = 0x107;
    }
    else {
      if (param_2 != 0xfa) {
        return 0;
      }
      uVar1 = 0x108;
    }
  }
  else if (param_2 < 0x263) {
    if (param_2 == 0x148) {
      uVar1 = 0x10b;
    }
    else {
      if (param_2 != 0x1cf) {
        return 0;
      }
      uVar1 = 0x10a;
    }
  }
  else if (param_2 == 0x263) {
    uVar1 = 0x185;
  }
  else if (param_2 == 0x30b) {
    uVar1 = 0x1d1;
  }
  else {
    if (param_2 != 0x333) {
      return 0;
    }
    uVar1 = 0x1e1;
  }
  *param_1 = uVar1;
  return 1;
}


