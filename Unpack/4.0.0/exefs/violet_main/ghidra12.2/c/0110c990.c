/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0110c990; name: FUN_0110c990
 */


bool FUN_0110c990(long param_1,int *param_2)

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
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar9 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar10 = *(int *)(param_1 + 0x24);
  iVar3 = *param_2;
  iVar5 = param_2[1];
  iVar14 = iVar9;
  if (iVar6 != 0) {
    iVar14 = iVar10;
  }
  iVar11 = iVar4 + iVar14 * iVar2;
  iVar7 = iVar3;
  if (iVar6 != 0) {
    iVar7 = iVar5;
  }
  if ((iVar7 < 1) && (iVar7 != 0)) {
    iVar13 = 0;
    if (iVar14 != 0) {
      iVar13 = iVar4 / iVar14;
    }
    if ((iVar4 - iVar13 * iVar14) + iVar7 < 0) {
      if ((iVar14 * iVar2 + iVar4 == 0) && (*(char *)(param_1 + 0x2c) != '\0')) {
        return true;
      }
      iVar14 = *(int *)(param_1 + 8);
      iVar13 = iVar14 + -1;
      goto LAB_0110c9ec;
    }
  }
  iVar14 = *(int *)(param_1 + 8);
  iVar13 = iVar14 + -1;
  if (0 < iVar7 && iVar11 == iVar14 + -1) {
    if (*(char *)(param_1 + 0x2c) != '\0') {
      return true;
    }
    iVar13 = iVar11;
  }
LAB_0110c9ec:
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
    return true;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 < 1) {
    iVar15 = 0;
    if (iVar7 != 0) {
      iVar15 = iVar13 / iVar7;
    }
    if (((iVar2 == iVar8) && (0 < iVar4)) && (iVar12 == iVar15)) {
      return true;
    }
  }
  else {
    iVar15 = iVar10;
    if (iVar6 != 0) {
      iVar15 = iVar9;
    }
    iVar15 = iVar15 + -1;
    if ((0 < iVar4) && (iVar12 == iVar15 && iVar2 == iVar8)) {
      return true;
    }
  }
  if ((iVar4 < 1) || (iVar12 != iVar15 + -1)) {
    return false;
  }
  iVar4 = iVar3 + iVar5 * iVar9;
  if (iVar6 != 0) {
    iVar4 = iVar5 + iVar3 * iVar10;
  }
  return iVar14 <= iVar11 + iVar4 && iVar2 == iVar8;
}


