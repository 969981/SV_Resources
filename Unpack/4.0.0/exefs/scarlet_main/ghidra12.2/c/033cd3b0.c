/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033cd3b0; name: FUN_033cd3b0
 */


void FUN_033cd3b0(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  
  param_3 = param_3 >> (param_2 == 1);
  uVar10 = (ulong)param_3;
  if (param_3 * -0x55555555 < 0x55555556) {
    iVar9 = 0;
    iVar12 = 1;
    uVar14 = uVar10;
    do {
      uVar15 = uVar14 / 3;
      uVar5 = uVar14 / 3;
      iVar12 = iVar12 * 3;
      iVar9 = iVar9 + 1;
      uVar14 = uVar15;
    } while ((uint)((int)uVar5 * -0x55555555) < 0x55555556);
  }
  else {
    iVar9 = 0;
    iVar12 = 1;
    uVar15 = uVar10;
  }
  if ((uVar15 & 3) == 0) {
    iVar8 = 0;
    uVar14 = uVar15;
    do {
      uVar15 = uVar14 >> 2;
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 << 2;
      uVar5 = uVar14 & 0xc;
      uVar14 = uVar15;
    } while (uVar5 == 0);
  }
  else {
    iVar8 = 0;
  }
  if ((uint)((int)uVar15 * -0x33333333) < 0x33333334) {
    iVar11 = 0;
    uVar14 = uVar15;
    do {
      uVar15 = uVar14 / 5;
      uVar5 = uVar14 / 5;
      iVar12 = iVar12 * 5;
      iVar11 = iVar11 + 1;
      uVar14 = uVar15;
    } while ((uint)((int)uVar5 * -0x33333333) < 0x33333334);
  }
  else {
    iVar11 = 0;
  }
  uVar2 = (uint)(iVar8 != 0 && (uVar15 & 1) == 0);
  uVar14 = 0;
  if ((iVar8 != 0) && ((uVar15 & 1) == 0)) {
    uVar6 = 5;
    if ((param_3 & 0x1f) != 0) {
      uVar6 = 1;
    }
    *param_1 = uVar6;
    uVar10 = (ulong)(param_3 >> 3);
    uVar14 = 1;
  }
  uVar3 = (uint)(iVar8 - uVar2 != 0 && iVar12 << (ulong)uVar2 == param_3);
  iVar4 = (iVar8 - uVar2) - uVar3;
  if (iVar4 != 0) {
    iVar13 = (int)uVar14;
    uVar1 = (iVar8 - uVar3) + -uVar2;
    if ((uVar1 & 1) != 0) {
      uVar6 = 7;
      if ((uVar10 & 0xf) != 0) {
        uVar6 = 3;
      }
      param_1[uVar14] = uVar6;
      uVar10 = uVar10 >> 2;
      uVar14 = uVar14 + 1;
    }
    if (uVar1 != 1) {
      iVar8 = (((iVar8 + iVar13) - uVar3) + -uVar2) - (int)uVar14;
      puVar16 = param_1 + uVar14 + 1;
      do {
        uVar6 = 7;
        if ((uVar10 & 0xf) != 0) {
          uVar6 = 3;
        }
        uVar14 = uVar10 & 0x3c;
        uVar10 = uVar10 >> 4;
        uVar7 = 7;
        if (uVar14 != 0) {
          uVar7 = 3;
        }
        iVar8 = iVar8 + -2;
        puVar16[-1] = uVar6;
        *puVar16 = uVar7;
        puVar16 = puVar16 + 2;
      } while (iVar8 != 0);
    }
    uVar14 = (ulong)(uint)(iVar4 + iVar13);
  }
  if (iVar9 != 0) {
    uVar1 = (int)uVar14 + iVar9;
    do {
      iVar8 = (int)uVar10;
      uVar10 = uVar10 / 3;
      uVar6 = 6;
      if (0x15555555 < ((uint)(iVar8 * -0x55555555) >> 2 | iVar8 * -0x40000000)) {
        uVar6 = 2;
      }
      iVar9 = iVar9 + -1;
      param_1[uVar14] = uVar6;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (iVar9 != 0);
    uVar14 = (ulong)uVar1;
  }
  if (iVar11 != 0) {
    uVar1 = (int)uVar14 + iVar11;
    do {
      iVar9 = (int)uVar10;
      uVar10 = uVar10 / 5;
      uVar6 = 8;
      if (0xccccccc < ((uint)(iVar9 * -0x33333333) >> 2 | iVar9 * 0x40000000)) {
        uVar6 = 4;
      }
      iVar11 = iVar11 + -1;
      param_1[uVar14] = uVar6;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (iVar11 != 0);
    uVar14 = (ulong)uVar1;
  }
  if (uVar3 == 0) {
    if (iVar12 << (ulong)uVar2 == param_3) goto LAB_033cd630;
    uVar6 = 0;
  }
  else {
    uVar6 = 9;
    if ((param_3 & 0xf) != 0) {
      uVar6 = 3;
    }
  }
  param_1[uVar14] = uVar6;
  uVar14 = (ulong)((int)uVar14 + 1);
LAB_033cd630:
  if (param_2 == 1) {
    param_1[uVar14] = 10;
  }
  return;
}


