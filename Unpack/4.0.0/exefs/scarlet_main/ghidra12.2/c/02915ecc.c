/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02915ecc; name: FUN_02915ecc
 */


undefined8 FUN_02915ecc(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x1b5) {
    if (uVar3 == 0x11d || uVar1 < 0x11d) {
      if (uVar3 == 0xb7 || uVar1 < 0xb7) {
        if ((uVar3 - 9 < 0x3c) && ((1L << ((ulong)(uVar3 - 9) & 0x3f) & 0x800040000000001U) != 0)) {
          return uVar2;
        }
        if (uVar3 == 0x73) {
          return uVar2;
        }
        if (uVar3 == 0x8d) {
          return uVar2;
        }
      }
      else if ((uVar3 - 0xb8 < 0x22) && ((1L << ((ulong)(uVar3 - 0xb8) & 0x3f) & 0x250040001U) != 0)
              ) {
        return uVar2;
      }
    }
    else {
      if ((uVar3 - 0x124 < 0x3f) &&
         ((1L << ((ulong)(uVar3 - 0x124) & 0x3f) & 0x4000000000010c21U) != 0)) {
        return uVar2;
      }
      if (uVar3 == 0x11e) {
        return uVar2;
      }
    }
  }
  else if (uVar3 == 0x280 || uVar1 < 0x280) {
    if (((uVar3 - 0x216 < 0x2e) && ((1L << ((ulong)(uVar3 - 0x216) & 0x3f) & 0x240000002011U) != 0))
       || (uVar3 == 0x1b5)) {
      return uVar2;
    }
  }
  else {
    if ((uVar3 - 0x294 < 0x30) && ((1L << ((ulong)(uVar3 - 0x294) & 0x3f) & 0x800000042001U) != 0))
    {
      return uVar2;
    }
    if (uVar3 - 0x281 < 2) {
      return uVar2;
    }
  }
  return 0;
}


