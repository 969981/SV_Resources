/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cf778; name: FUN_031cf778
 */


void FUN_031cf778(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  int iVar22;
  long lVar23;
  
  plVar18 = *(long **)(param_1 + 0x30);
  iVar22 = -1;
  lVar23 = (long)(int)plVar18[3];
  do {
    lVar9 = lVar23 + -1;
    if (lVar23 < 1) goto LAB_031cf7d4;
    lVar15 = lVar23 * 8;
    lVar23 = lVar9;
  } while (*(ulong *)(param_1 + 0x28) <= param_2 - *(long *)(plVar18[2] + lVar15 + -8));
  iVar22 = (int)lVar9;
LAB_031cf7d4:
  uVar14 = *(uint *)(plVar18 + 1);
  uVar10 = param_2 + param_3;
  if (0 < (int)uVar14) {
    lVar23 = (ulong)uVar14 + 1;
    uVar19 = 0xffffffff;
    uVar20 = uVar14;
    puVar21 = (ulong *)(*plVar18 + (ulong)uVar14 * 0x18);
    do {
      puVar12 = puVar21 + -3;
      if ((int)puVar21[-1] == iVar22) {
        uVar4 = uVar20 - 1;
        if (uVar19 != 0xffffffff) {
          uVar4 = uVar19;
        }
        if (*puVar12 == uVar10) {
          *puVar12 = param_2;
        }
        else {
          if (puVar21[-2] != param_2) {
            uVar19 = uVar4;
            if (param_2 <= *puVar12) goto LAB_031cf840;
            goto LAB_031cf858;
          }
          puVar21[-2] = uVar10;
        }
        if ((uVar4 == 0xffffffff) ||
           (plVar18 = *(long **)(param_1 + 0x30), iVar22 == (int)plVar18[3] + -1))
        goto LAB_031cf8c0;
        lVar9 = *plVar18;
        plVar13 = (long *)(lVar9 + (long)(int)uVar4 * 0x18);
        uVar14 = uVar4 & (int)uVar4 >> 0x1f;
        lVar23 = (long)(int)uVar4;
        goto LAB_031cf948;
      }
      if ((int)puVar21[-1] < iVar22) goto LAB_031cf858;
LAB_031cf840:
      lVar23 = lVar23 + -1;
      uVar20 = uVar20 - 1;
      puVar21 = puVar12;
    } while (1 < lVar23);
  }
  uVar20 = 0;
LAB_031cf858:
  if ((int)(*(uint *)((long)plVar18 + 0xc) & 0x7fffffff) <= (int)uVar14) {
    FUN_031cfc9c(plVar18,*(undefined8 *)(param_1 + 0x20),(long)(int)uVar14 + 1);
  }
  lVar23 = *plVar18;
  puVar21 = (ulong *)(lVar23 + (long)(int)uVar20 * 0x18);
  if (uVar14 - uVar20 != 0) {
    FUN_031d0240(puVar21 + 3,puVar21,(long)(int)(uVar14 - uVar20) * 0x18);
  }
  lVar23 = lVar23 + (long)(int)uVar20 * 0x18;
  *(int *)(plVar18 + 1) = (int)((long)(int)uVar14 + 1);
  *puVar21 = param_2;
  *(ulong *)(lVar23 + 8) = uVar10;
  *(int *)(lVar23 + 0x10) = iVar22;
  goto LAB_031cf8c0;
LAB_031cf948:
  if (0 < lVar23) {
    if ((int)plVar13[-1] != iVar22) {
      uVar14 = (uint)lVar23;
      goto LAB_031cf97c;
    }
    lVar15 = *plVar13;
    plVar1 = plVar13 + -2;
    plVar13 = plVar13 + -3;
    lVar23 = lVar23 + -1;
    if (*plVar1 != lVar15) goto LAB_031cf8c0;
    goto LAB_031cf948;
  }
LAB_031cf97c:
  if ((uVar14 == 0xffffffff) ||
     (*(ulong *)(lVar9 + (long)(int)uVar14 * 0x18) !=
      (*(long *)(plVar18[2] + (long)iVar22 * 8) + 0x3fU & 0xffffffffffffffc0))) goto LAB_031cf8c0;
  lVar23 = (long)iVar22;
  if (0 < (int)uVar14) {
    *(undefined8 *)(lVar9 + (ulong)(uVar14 - 1) * 0x18 + 8) =
         *(undefined8 *)(lVar9 + (long)(int)uVar4 * 0x18 + 8);
    plVar18 = *(long **)(param_1 + 0x30);
  }
  *(int *)(plVar18 + 4) = (int)plVar18[4] + -1;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + lVar23 * 8),
             *(undefined8 *)(param_1 + 0x28));
  lVar15 = *(long *)(param_1 + 0x30);
  lVar9 = *(long *)(lVar15 + 0x10);
  if (*(long *)(param_1 + 0x50) == *(long *)(lVar9 + lVar23 * 8)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar9 = *(long *)(lVar15 + 0x10);
  }
  iVar17 = *(int *)(lVar15 + 0x18) + -1;
  *(int *)(lVar15 + 0x18) = iVar17;
  uVar20 = iVar17 - iVar22;
  if (uVar20 != 0) {
    uVar10 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3;
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    uVar2 = (uVar10 - 1 >> 3) + 1;
    uVar11 = uVar2 & 3;
    if (uVar10 - 1 < 0x18) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      puVar8 = (undefined8 *)(lVar9 + lVar23 * 8 + 0x10);
      do {
        uVar10 = uVar10 + 4;
        puVar8[-2] = puVar8[-1];
        puVar8[-1] = *puVar8;
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        puVar8 = puVar8 + 4;
      } while ((uVar2 & 0x3ffffffffffffffc) != uVar10);
    }
    if (uVar11 != 0) {
      lVar15 = -uVar11;
      puVar8 = (undefined8 *)(lVar9 + (uVar10 + lVar23) * 8);
      do {
        *puVar8 = puVar8[1];
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar6);
    }
  }
  plVar18 = *(long **)(param_1 + 0x30);
  iVar17 = (uVar4 - uVar14) + 1;
  lVar23 = *plVar18;
  iVar5 = (int)plVar18[1] - iVar17;
  *(int *)(plVar18 + 1) = iVar5;
  if ((uVar4 - uVar14 != -1) && (iVar5 = iVar5 - uVar14, iVar5 != 0)) {
    uVar10 = (long)iVar5 * 0x18;
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    uVar2 = (uVar10 - 1 >> 3) + 1;
    uVar11 = uVar2 & 3;
    if (uVar10 - 1 < 0x18) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      puVar8 = (undefined8 *)(lVar23 + (long)(int)uVar14 * 0x18 + 0x18);
      do {
        puVar3 = puVar8 + (long)iVar17 * 3;
        puVar8[-3] = puVar3[-3];
        puVar8[-2] = puVar3[-2];
        puVar8[-1] = puVar3[-1];
        uVar10 = uVar10 + 4;
        *puVar8 = *puVar3;
        puVar8 = puVar8 + 4;
      } while ((uVar2 & 0x3ffffffffffffffc) != uVar10);
    }
    if (uVar11 != 0) {
      lVar9 = -uVar11;
      puVar8 = (undefined8 *)(lVar23 + (long)(int)uVar14 * 0x18 + uVar10 * 8);
      do {
        bVar6 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        *puVar8 = puVar8[(long)iVar17 * 3];
        puVar8 = puVar8 + 1;
      } while (bVar6);
    }
  }
  uVar14 = *(uint *)(*(long **)(param_1 + 0x30) + 1);
  uVar10 = (ulong)uVar14;
  if ((int)uVar14 < 1) goto LAB_031cf8c0;
  lVar23 = uVar10 - 1;
  piVar16 = (int *)(**(long **)(param_1 + 0x30) + lVar23 * 0x18 + 0x10);
  iVar17 = *piVar16;
  if (iVar17 <= iVar22) goto LAB_031cf8c0;
  lVar9 = uVar10 + 1;
  lVar15 = uVar10 * 0x18 + -0x20;
  do {
    lVar9 = lVar9 + -1;
    *piVar16 = iVar17 + -1;
    if (lVar9 < 2) break;
    lVar23 = lVar23 + -1;
    iVar17 = *(int *)(**(long **)(param_1 + 0x30) + lVar15);
    lVar15 = lVar15 + -0x18;
    piVar16 = (int *)(**(long **)(param_1 + 0x30) + lVar23 * 0x18 + 0x10);
  } while (iVar22 < iVar17);
LAB_031cf8c0:
  iVar22 = (int)(*(long **)(param_1 + 0x30))[1];
  if (iVar22 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(**(long **)(param_1 + 0x30) + (long)(iVar22 + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  return;
}


