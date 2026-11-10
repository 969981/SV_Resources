/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173426c; name: FUN_0173426c
 */


undefined4 FUN_0173426c(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar9 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar10 = *(int *)(param_1 + 0x24);
  iVar3 = *param_2;
  iVar5 = param_2[1];
  iVar16 = iVar9;
  if (iVar6 != 0) {
    iVar16 = iVar10;
  }
  iVar11 = iVar4 + iVar16 * iVar2;
  iVar7 = iVar3;
  if (iVar6 != 0) {
    iVar7 = iVar5;
  }
  if ((iVar7 < 1) && (iVar7 != 0)) {
    iVar17 = 0;
    if (iVar16 != 0) {
      iVar17 = iVar4 / iVar16;
    }
    if (-1 < (iVar4 - iVar17 * iVar16) + iVar7) goto LAB_017342bc;
    if ((iVar16 * iVar2 + iVar4 == 0) && (*(char *)(param_1 + 0x2c) != '\0')) {
      return 5;
    }
    iVar16 = *(int *)(param_1 + 8);
    iVar17 = iVar16 + -1;
  }
  else {
LAB_017342bc:
    iVar16 = *(int *)(param_1 + 8);
    iVar17 = iVar16 + -1;
    if (0 < iVar7 && iVar11 == iVar16 + -1) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        return 6;
      }
      iVar17 = iVar11;
    }
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (iVar6 != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  iVar7 = *piVar1;
  iVar12 = 0;
  if (iVar7 != 0) {
    iVar12 = iVar4 / iVar7;
  }
  iVar4 = iVar5;
  if (iVar6 != 0) {
    iVar4 = iVar3;
  }
  if ((iVar4 < 0) && (iVar12 == 0 && iVar2 == 0)) {
    uVar14 = FUN_01734444();
    uVar13 = 1;
    if ((uVar14 & 1) != 0) {
      uVar13 = 2;
    }
    return uVar13;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 < 1) {
    iVar15 = 0;
    if (iVar7 != 0) {
      iVar15 = iVar17 / iVar7;
    }
    if (((iVar2 == iVar8) && (0 < iVar4)) && (iVar12 == iVar15)) {
      iVar15 = iVar12;
      goto LAB_017343a4;
    }
  }
  else {
    iVar15 = iVar10;
    if (iVar6 != 0) {
      iVar15 = iVar9;
    }
    iVar15 = iVar15 + -1;
    if ((0 < iVar4) && (iVar12 == iVar15 && iVar2 == iVar8)) goto LAB_017343a4;
  }
  if (iVar4 < 1) {
    return 0;
  }
  if (iVar12 != iVar15 + -1) {
    return 0;
  }
  iVar4 = iVar3 + iVar5 * iVar9;
  if (iVar6 != 0) {
    iVar4 = iVar5 + iVar3 * iVar10;
  }
  if (iVar11 + iVar4 < iVar16 || iVar2 != iVar8) {
    return 0;
  }
  if (iVar8 < 1) {
    iVar15 = 0;
    if (iVar7 != 0) {
      iVar15 = iVar17 / iVar7;
    }
  }
  else {
    iVar2 = iVar10;
    if (iVar6 != 0) {
      iVar2 = iVar9;
    }
    iVar15 = iVar2 + -1;
  }
LAB_017343a4:
  uVar13 = 3;
  if (iVar12 == iVar15 + -1) {
    iVar2 = iVar3 + iVar5 * iVar9;
    if (iVar6 != 0) {
      iVar2 = iVar5 + iVar3 * iVar10;
    }
    uVar13 = 3;
    if (iVar16 <= iVar11 + iVar2) {
      uVar13 = 4;
    }
  }
  return uVar13;
}


