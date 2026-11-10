/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333ce10; name: FUN_0333ce10
 */


void FUN_0333ce10(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  iVar9 = (int)param_1[1];
  lVar10 = (long)iVar9;
  lVar14 = *param_1;
  uVar12 = 0xffffffff;
  lVar17 = lVar10 + -1;
  lVar16 = 0;
  do {
    lVar18 = lVar16;
    uVar12 = uVar12 + 1;
    if (lVar17 <= lVar18) break;
    lVar16 = lVar18 + 1;
  } while (*(char *)(lVar14 + lVar18) == ' ' || *(char *)(lVar14 + lVar18) == '\t');
  iVar11 = 0;
  lVar16 = -1;
  do {
    iVar1 = iVar9 + -2 + iVar11;
    iVar11 = iVar11 + -1;
    lVar2 = lVar18 + 1 + lVar16;
    cVar5 = *(char *)(lVar14 + iVar1);
    lVar16 = lVar16 + 1;
    if (lVar17 <= lVar2) break;
  } while (cVar5 == ' ' || cVar5 == '\t');
  uVar4 = (uint)lVar18;
  if ((int)(uint)lVar17 <= (int)(uint)lVar18) {
    uVar4 = (uint)lVar17;
  }
  if (0 < (int)uVar4) {
    uVar7 = iVar9 - uVar4;
    *(uint *)(param_1 + 1) = uVar7;
    if (uVar7 != 0) {
      if ((ulong)(lVar10 + (int)~uVar4) < 3) {
        uVar19 = 0;
      }
      else {
        uVar4 = uVar12;
        if ((int)(iVar9 - 1U) <= (int)uVar12) {
          uVar4 = iVar9 - 1U;
        }
        uVar19 = 0;
        do {
          puVar13 = (undefined1 *)(lVar14 + (ulong)uVar4 + 3 + uVar19);
          puVar3 = (undefined1 *)(lVar14 + 1 + uVar19);
          uVar19 = uVar19 + 4;
          puVar3[-1] = puVar13[-3];
          *puVar3 = puVar13[-2];
          puVar3[1] = puVar13[-1];
          puVar3[2] = *puVar13;
        } while ((lVar10 - (int)uVar4 & 0xfffffffffffffffcU) != uVar19);
      }
      if ((uVar7 & 3) != 0) {
        if ((int)(iVar9 - 1U) <= (int)uVar12) {
          uVar12 = iVar9 - 1U;
        }
        lVar10 = -((ulong)(iVar9 - uVar12) & 3);
        puVar13 = (undefined1 *)(lVar14 + uVar19);
        do {
          bVar8 = lVar10 != -1;
          lVar10 = lVar10 + 1;
          *puVar13 = puVar13[uVar12];
          puVar13 = puVar13 + 1;
        } while (bVar8);
      }
    }
  }
  if (0 < (int)lVar16) {
    iVar9 = (int)param_1[1];
    uVar12 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = iVar9 + iVar11 & (iVar9 + iVar11 >> 0x1f ^ 0xffffffffU);
    uVar6 = uVar12 - 1;
    uVar7 = uVar4;
    if ((int)uVar6 <= (int)uVar4) {
      uVar7 = uVar6;
    }
    if ((int)param_1[0x12] != 0) {
      uVar7 = uVar4;
    }
    iVar11 = uVar7 + 1;
    if ((int)uVar12 <= (int)uVar7) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,iVar11);
      iVar9 = (int)param_1[1];
    }
    if (iVar9 <= (int)uVar7 || iVar11 < iVar9) {
      *(int *)(param_1 + 1) = iVar11;
    }
    *(undefined1 *)(*param_1 + (long)(int)uVar7) = 0;
  }
  iVar9 = (int)param_1[1];
  uVar12 = iVar9 - 1;
  if (uVar12 != 0 && 0 < iVar9) {
    uVar12 = 1;
  }
  if (0 < (int)uVar12) {
    lVar16 = *param_1;
    iVar11 = iVar9 - uVar12;
    *(int *)(param_1 + 1) = iVar11;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    else {
      uVar19 = (long)iVar11 & 3;
      if ((ulong)((long)iVar9 + (long)(int)~uVar12) < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          puVar13 = (undefined1 *)((ulong)uVar12 + lVar16 + 3 + uVar15);
          puVar3 = (undefined1 *)(lVar16 + 1 + uVar15);
          uVar15 = uVar15 + 4;
          puVar3[-1] = puVar13[-3];
          *puVar3 = puVar13[-2];
          puVar3[1] = puVar13[-1];
          puVar3[2] = *puVar13;
        } while (((long)iVar11 & 0xfffffffffffffffcU) != uVar15);
      }
      if (uVar19 != 0) {
        puVar13 = (undefined1 *)(lVar16 + uVar15);
        do {
          uVar19 = uVar19 - 1;
          *puVar13 = puVar13[uVar12];
          puVar13 = puVar13 + 1;
        } while (uVar19 != 0);
      }
      iVar9 = (int)param_1[1];
    }
  }
  uVar4 = iVar9 - 2U & ((int)(iVar9 - 2U) >> 0x1f ^ 0xffffffffU);
  uVar12 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar12 - 1;
  uVar7 = uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar7 = uVar6;
  }
  if ((int)param_1[0x12] != 0) {
    uVar7 = uVar4;
  }
  iVar11 = uVar7 + 1;
  if ((int)uVar12 <= (int)uVar7) {
    FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,iVar11);
    iVar9 = (int)param_1[1];
  }
  if (iVar9 <= (int)uVar7 || iVar11 < iVar9) {
    *(int *)(param_1 + 1) = iVar11;
  }
  *(undefined1 *)(*param_1 + (long)(int)uVar7) = 0;
  return;
}


