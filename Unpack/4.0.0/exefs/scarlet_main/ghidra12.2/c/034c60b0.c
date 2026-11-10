/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c60b0; name: FUN_034c60b0
 */


undefined8 FUN_034c60b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
LAB_034c61f8:
    uVar4 = 1;
  }
  else {
    uVar3 = ((uint)lVar9 ^ (uint)lVar9 >> 0x10) * -0x7a143595;
    uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
    uVar3 = uVar3 ^ uVar3 >> 0x10;
    if (DAT_048b02b8 != 0) {
      uVar2 = (int)DAT_048b02c0 - 1U & uVar3 & 0x3fffffff;
      puVar7 = (uint *)(DAT_048b02b8 + (ulong)uVar2 * 8);
      iVar6 = 1 - uVar2;
      lVar8 = (long)(int)DAT_048b02c0 - (ulong)uVar2;
      do {
        if ((lVar8 == 0) || (uVar2 = *puVar7, -1 < (int)uVar2)) goto LAB_034c6150;
        iVar6 = iVar6 + -1;
        puVar7 = puVar7 + 2;
        lVar8 = lVar8 + -1;
      } while (((uVar2 >> 0x1e & 1) != 0) || ((uVar2 & 0x3fffffff) != (uVar3 & 0x3fffffff)));
      while (iVar6 != 1) {
        if (*(long *)(DAT_048b02d8 + (ulong)*(uint *)(DAT_048b02b8 + (long)-iVar6 * 8 + 4) * 8) ==
            lVar9) goto LAB_034c61f8;
        lVar8 = (long)-iVar6 + 1;
        puVar7 = (uint *)(DAT_048b02b8 + lVar8 * 8);
        lVar8 = (int)DAT_048b02c0 - lVar8;
        do {
          if ((lVar8 == 0) || (uVar2 = *puVar7, -1 < (int)uVar2)) goto LAB_034c6150;
          iVar6 = iVar6 + -1;
          puVar7 = puVar7 + 2;
          lVar8 = lVar8 + -1;
        } while ((uVar2 & 0x40000000) != 0 || ((uVar2 ^ uVar3) & 0x3fffffff) != 0);
      }
    }
LAB_034c6150:
    uVar4 = FUN_034c8260(&DAT_048b02b8,uVar3,DAT_048b02e0);
    uVar2 = DAT_048b02e0;
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    if (DAT_048b02e0 < DAT_048b02e4) {
LAB_034c61c8:
      if (uVar2 < DAT_048b02e4) {
        uVar5 = (ulong)DAT_048b02e0;
        DAT_048b02e0 = DAT_048b02e0 + 1;
        if (DAT_048b02d8 != 0) {
          *(long *)(DAT_048b02d8 + uVar5 * 8) = lVar9;
          DAT_048b02d0 = uVar3;
          goto LAB_034c61f8;
        }
      }
    }
    else {
      iVar6 = DAT_048b02e4 + (DAT_048b02e4 >> 1);
      if (DAT_048b02e4 == 0) {
        iVar6 = 1;
      }
      uVar1 = iVar6 + DAT_048b02e4;
      lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048b02d8,(ulong)uVar1 << 3);
      if (lVar8 != 0) {
        DAT_048b02d8 = lVar8;
        DAT_048b02e4 = uVar1;
        goto LAB_034c61c8;
      }
    }
    FUN_034c85a0(&DAT_048b02b8,uVar3,DAT_048b02e0);
    uVar4 = 0x34;
  }
  return uVar4;
}


