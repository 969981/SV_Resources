/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd4ff4; name: FUN_01dd4ff4
 */


undefined8 FUN_01dd4ff4(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar4;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x2cc) {
    if (uVar1 < 0x1e3) {
      if (uVar4 - 0x17e < 3) {
        return uVar2;
      }
      if (uVar4 - 0xf9 < 2) {
        return uVar2;
      }
      if (uVar3 == 0x96) {
        return uVar2;
      }
    }
    else {
      if ((uVar4 - 0x1e3 < 5) && ((1 << (ulong)(uVar4 - 0x1e3 & 0x1f) & 0x13U) != 0)) {
        return uVar2;
      }
      if ((uVar4 - 0x283 < 4) && (uVar4 - 0x283 != 2)) {
        return uVar2;
      }
    }
  }
  else if (uVar4 == 0x377 || uVar1 < 0x377) {
    if (((uVar3 - 0x315 < 0xc) && ((1 << (ulong)(uVar3 - 0x315 & 0x1f) & 0x80fU) != 0)) ||
       (uVar3 - 0x2cc < 3)) {
      return uVar2;
    }
  }
  else {
    if ((uVar4 - 0x378 < 0xb) && ((1 << (ulong)(uVar4 - 0x378 & 0x1f) & 0x407U) != 0)) {
      return uVar2;
    }
    if ((uVar3 - 0x3e6 < 0x18) && ((1 << (ulong)(uVar3 - 0x3e6 & 0x1f) & 0x800003U) != 0)) {
      return uVar2;
    }
  }
  return 0;
}


