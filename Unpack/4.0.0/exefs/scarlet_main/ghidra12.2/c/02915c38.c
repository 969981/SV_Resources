/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02915c38; name: FUN_02915c38
 */


undefined8 FUN_02915c38(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar4;
  uint uVar3;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x16f) {
    if (uVar1 < 0xc3) {
      if ((uVar4 - 0x83 < 0x3e) &&
         ((1L << ((ulong)(uVar4 - 0x83) & 0x3f) & 0x2020010000000519U) != 0)) {
        return uVar2;
      }
      if (0x37 < uVar4) {
        return 0;
      }
      uVar5 = 1L << ((ulong)uVar1 & 0x3f);
      uVar6 = 0xa8000000000000;
    }
    else {
      if ((uVar3 - 0xc3 < 0x33) && ((1L << ((ulong)(uVar3 - 0xc3) & 0x3f) & 0x7000c80010089U) != 0))
      {
        return uVar2;
      }
      if (0x3a < uVar3 - 0x110) {
        return 0;
      }
      uVar5 = 1L << ((ulong)(uVar3 - 0x110) & 0x3f);
      uVar6 = 0x40001c040800009;
    }
  }
  else if (uVar4 == 0x250 || uVar1 < 0x250) {
    if ((uVar3 - 0x210 < 0x3b) &&
       ((1L << ((ulong)(uVar3 - 0x210) & 0x3f) & 0x409000000280205U) != 0)) {
      return uVar2;
    }
    if ((uVar4 - 0x16f < 0x39) &&
       ((1L << ((ulong)(uVar4 - 0x16f) & 0x3f) & 0x150000000000007U) != 0)) {
      return uVar2;
    }
    if (0x39 < uVar4 - 0x1c5) {
      return 0;
    }
    uVar5 = 1L << ((ulong)(uVar4 - 0x1c5) & 0x3f);
    uVar6 = 0x280000100002001;
  }
  else {
    if ((uVar4 - 0x251 < 0x3f) &&
       ((1L << ((ulong)(uVar4 - 0x251) & 0x3f) & 0x4003100000010101U) != 0)) {
      return uVar2;
    }
    if (0x30 < uVar3 - 0x2a1) {
      return 0;
    }
    uVar5 = 1L << ((ulong)(uVar3 - 0x2a1) & 0x3f);
    uVar6 = 0x1000000400029;
  }
  if ((uVar5 & uVar6) == 0) {
    return 0;
  }
  return uVar2;
}


