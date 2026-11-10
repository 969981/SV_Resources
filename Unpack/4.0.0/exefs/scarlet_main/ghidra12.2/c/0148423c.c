/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148423c; name: FUN_0148423c
 */


uint FUN_0148423c(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  byte bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  
  lVar3 = FUN_011d3f10();
  if (lVar3 == 0) {
    return 5;
  }
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),param_2);
  if (puVar4 == (uint *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar4 & 0xff;
    if (4 < (int)*puVar4) {
      uVar9 = 0;
    }
  }
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar2 == 2) {
    if (uVar9 < 5) {
      bVar6 = (&DAT_03d6a45a)[uVar9];
    }
    else {
      bVar6 = 2;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
    uVar7 = (ulong)bVar1;
    if (4 < bVar1) goto LAB_01484310;
    puVar8 = &DAT_03d6a45a;
  }
  else if (iVar2 == 1) {
    if (uVar9 < 5) {
      bVar6 = (&DAT_03d6a455)[uVar9];
    }
    else {
      bVar6 = 2;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
    uVar7 = (ulong)bVar1;
    if (4 < bVar1) goto LAB_01484310;
    puVar8 = &DAT_03d6a455;
  }
  else {
    if (iVar2 != 0) goto LAB_01484310;
    if (uVar9 < 5) {
      bVar6 = (&DAT_03d6a450)[uVar9];
    }
    else {
      bVar6 = 2;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
    uVar7 = (ulong)bVar1;
    if (4 < bVar1) goto LAB_01484310;
    puVar8 = &DAT_03d6a450;
  }
  bVar1 = puVar8[uVar7];
  if (bVar1 < 2) {
    if ((bVar1 == bVar6) || (bVar6 == 3)) {
      return 4;
    }
    if (bVar6 == 4) {
      if (bVar1 != 0) {
        return 4;
      }
    }
    else if ((bVar6 == 5) && (bVar1 != 1)) {
      return 4;
    }
  }
LAB_01484310:
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),param_2);
  if (puVar4 == (uint *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar4;
    if (4 < (int)uVar9) {
      uVar9 = 0;
    }
    if (4 < (uVar9 & 0xff)) {
      return 5;
    }
  }
  uVar10 = (ulong)uVar9 & 0xff;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x30);
  pbVar12 = (byte *)(lVar3 + uVar10 * 0x38 + 0x58);
  uVar7 = (ulong)*pbVar12;
  if (uVar7 == 0) {
    return 5;
  }
  uVar11 = 0;
  uVar13 = uVar7 - 1;
  while ((((uint)uVar7 <= ((uint)uVar11 & 0xff) ||
          (plVar5 = *(long **)(lVar3 + uVar10 * 0x38 + 0x28 + uVar11 * 8), plVar5 == (long *)0x0))
         || (iVar2 = (**(code **)(*plVar5 + 0x98))(), iVar2 != param_2))) {
    if (uVar13 == uVar11) {
      return 5;
    }
    uVar7 = (ulong)*pbVar12;
    uVar11 = uVar11 + 1;
  }
  if ((int)(uint)uVar11 < 0) {
    return 5;
  }
  iVar2 = FUN_00d9c090(param_1,uVar10,uVar11 & 0xffffffff);
  uVar9 = iVar2 - 4;
  if (3 < (uVar9 & 0xff)) {
    uVar9 = 5;
  }
  return uVar9;
}


