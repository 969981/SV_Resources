/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289c9a0; name: FUN_0289c9a0
 */


undefined4 FUN_0289c9a0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar1 = FUN_013fcabc(*param_2);
  lVar2 = FUN_013fcac4(*param_2);
  lVar7 = *(long *)(lVar2 + 0x20);
  lVar6 = lVar7;
  if (*(long *)(lVar2 + 0x28) != 0) {
    lVar6 = lVar7 + *(long *)(lVar2 + 0x28) * 8;
  }
  if (lVar7 == lVar6) {
    uVar9 = 0;
  }
  else {
    uVar3 = FUN_0148d208(*param_2,lVar7);
    uVar9 = 1L << (uVar3 & 0x3f);
    if (7 < ((uint)uVar3 & 0xff)) {
      uVar9 = 0;
    }
    if (lVar7 + 8 != lVar6) {
      uVar4 = FUN_0148d208(*param_2);
      uVar3 = 1L << (uVar4 & 0x3f);
      if (7 < ((uint)uVar4 & 0xff)) {
        uVar3 = 0;
      }
      uVar9 = uVar3 | uVar9;
      for (lVar7 = lVar7 + 0x10; lVar7 != lVar6; lVar7 = lVar7 + 8) {
        uVar4 = FUN_0148d208(*param_2,lVar7);
        uVar3 = 1L << (uVar4 & 0x3f);
        if (7 < ((uint)uVar4 & 0xff)) {
          uVar3 = 0;
        }
        uVar9 = uVar3 | uVar9;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x270);
  lVar6 = *(long *)(param_1 + 0x278);
  if (lVar7 != lVar6) {
    if (uVar1 == *(byte *)(lVar7 + 8)) {
      if ((ulong)*(byte *)(lVar7 + 9) < 8) {
        uVar9 = 1L << ((ulong)*(byte *)(lVar7 + 9) & 0x3f) | uVar9;
      }
    }
    if (lVar7 + 0x18 != lVar6) {
      if ((uVar1 == *(byte *)(lVar7 + 0x20)) && ((ulong)*(byte *)(lVar7 + 0x21) < 8)) {
        uVar9 = 1L << ((ulong)*(byte *)(lVar7 + 0x21) & 0x3f) | uVar9;
      }
      for (lVar7 = lVar7 + 0x30; lVar7 != lVar6; lVar7 = lVar7 + 0x18) {
        if (uVar1 == *(byte *)(lVar7 + 8)) {
          if ((ulong)*(byte *)(lVar7 + 9) < 8) {
            uVar9 = 1L << ((ulong)*(byte *)(lVar7 + 9) & 0x3f) | uVar9;
          }
        }
      }
    }
  }
  uVar8 = (uint)uVar9;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  else if ((uVar8 >> 1 & 1) == 0) {
    uVar5 = 1;
  }
  else if ((uVar8 >> 2 & 1) == 0) {
    uVar5 = 2;
  }
  else if ((uVar8 >> 3 & 1) == 0) {
    uVar5 = 3;
  }
  else if ((uVar8 >> 4 & 1) == 0) {
    uVar5 = 4;
  }
  else if ((uVar8 >> 5 & 1) == 0) {
    uVar5 = 5;
  }
  else if ((uVar8 >> 6 & 1) == 0) {
    uVar5 = 6;
  }
  else {
    uVar5 = 7;
    if ((uVar9 & 0x80) != 0) {
      uVar5 = 0xfffffffd;
    }
  }
  return uVar5;
}


