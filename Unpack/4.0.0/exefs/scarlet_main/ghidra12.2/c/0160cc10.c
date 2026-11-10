/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160cc10; name: FUN_0160cc10
 */


void FUN_0160cc10(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
LAB_0160cc34:
  plVar13 = param_2 + -1;
  plVar12 = param_1;
LAB_0160cc40:
  param_1 = plVar12;
  lVar9 = (long)param_2 - (long)param_1;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_0160cd8c_caseD_0;
  case 2:
    lVar9 = *param_1;
    if (*(int *)(lVar9 + 8) < *(int *)(*plVar13 + 8)) {
      *param_1 = *plVar13;
      *plVar13 = lVar9;
      return;
    }
    return;
  case 3:
    FUN_0160d060(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_029a6c30(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_029a6ce0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  default:
    if (0xf7 < lVar9) {
      uVar5 = uVar6;
      if ((long)uVar6 < 0) {
        uVar5 = uVar6 + 1;
      }
      plVar12 = (long *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
      if (lVar9 < 0x1f39) {
        iVar4 = FUN_0160d060(param_1,plVar12,plVar13);
      }
      else {
        uVar5 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar5 = uVar6;
        }
        lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar4 = FUN_029a6ce0(param_1,(long)param_1 + lVar9,plVar12,(long)plVar12 + lVar9,plVar13);
      }
      lVar9 = *param_1;
      iVar2 = *(int *)(lVar9 + 8);
      if (iVar2 <= *(int *)(*plVar12 + 8)) break;
      plVar7 = plVar13;
      goto LAB_0160cdd4;
    }
    FUN_0160d060(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar9 = 0;
    plVar12 = param_1 + 3;
    plVar13 = param_1 + 2;
    goto LAB_0160cfd8;
  }
  plVar8 = param_2 + -2;
  while (plVar7 = plVar8, param_1 != plVar7) {
    plVar8 = plVar7 + -1;
    if (*(int *)(*plVar12 + 8) < *(int *)(*plVar7 + 8)) goto LAB_0160ce94;
  }
  plVar8 = param_1 + 1;
  if (iVar2 <= *(int *)(*plVar13 + 8)) {
    if (plVar8 == plVar13) {
      return;
    }
    plVar8 = param_1 + 2;
    while (lVar9 = plVar8[-1], iVar2 <= *(int *)(lVar9 + 8)) {
      plVar8 = plVar8 + 1;
      if (param_2 == plVar8) {
        return;
      }
    }
    plVar8[-1] = *plVar13;
    *plVar13 = lVar9;
  }
  if (plVar8 == plVar13) {
    return;
  }
  plVar7 = plVar13;
  while( true ) {
    do {
      plVar12 = plVar8;
      plVar8 = plVar12 + 1;
      lVar9 = *plVar12;
    } while (*(int *)(*param_1 + 8) <= *(int *)(lVar9 + 8));
    do {
      plVar7 = plVar7 + -1;
    } while (*(int *)(*plVar7 + 8) < *(int *)(*param_1 + 8));
    if (plVar7 <= plVar12) break;
    *plVar12 = *plVar7;
    *plVar7 = lVar9;
  }
  goto LAB_0160cc40;
LAB_0160ce94:
  *param_1 = *plVar7;
  iVar4 = iVar4 + 1;
  *plVar7 = lVar9;
LAB_0160cdd4:
  plVar14 = param_1 + 1;
  plVar8 = plVar14;
  if (plVar14 < plVar7) {
    while( true ) {
      plVar14 = plVar8 + -1;
      do {
        plVar8 = plVar14;
        plVar14 = plVar8 + 1;
        lVar9 = *plVar14;
      } while (*(int *)(*plVar12 + 8) < *(int *)(lVar9 + 8));
      plVar8 = plVar8 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*(int *)(*plVar7 + 8) <= *(int *)(*plVar12 + 8));
      if (plVar7 < plVar14) break;
      *plVar14 = *plVar7;
      iVar4 = iVar4 + 1;
      *plVar7 = lVar9;
      plVar1 = plVar7;
      if (plVar12 != plVar14) {
        plVar1 = plVar12;
      }
      plVar12 = plVar1;
    }
  }
  if (plVar14 != plVar12) {
    lVar9 = *plVar14;
    if (*(int *)(lVar9 + 8) < *(int *)(*plVar12 + 8)) {
      iVar4 = iVar4 + 1;
      *plVar14 = *plVar12;
      *plVar12 = lVar9;
    }
  }
  if (iVar4 == 0) {
    uVar6 = FUN_029a6dc0(param_1,plVar14);
    uVar5 = FUN_029a6dc0(plVar14 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_0160cf8c;
    plVar12 = plVar14 + 1;
    if ((uVar6 & 1) != 0) goto LAB_0160cc40;
  }
  if ((long)param_2 - (long)plVar14 <= (long)plVar14 - (long)param_1) {
    FUN_0160cc10(plVar14 + 1,param_2);
    param_2 = plVar14;
    goto LAB_0160cc34;
  }
  FUN_0160cc10(param_1,plVar14);
  plVar12 = plVar14 + 1;
  goto LAB_0160cc40;
LAB_0160cf8c:
  param_2 = plVar14;
  if ((uVar6 & 1) != 0) {
switchD_0160cd8c_caseD_0:
    return;
  }
  goto LAB_0160cc34;
LAB_0160cfd8:
  plVar8 = plVar12;
  lVar10 = *plVar8;
  if (*(int *)(*plVar13 + 8) < *(int *)(lVar10 + 8)) {
    lVar3 = lVar9;
    do {
      lVar11 = lVar3;
      *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar11 + 0x10);
      if (lVar11 == -0x10) {
        plVar12 = param_1;
        goto LAB_0160d02c;
      }
      lVar3 = lVar11 + -8;
    } while (*(int *)(*(long *)((long)param_1 + lVar11 + 8) + 8) < *(int *)(lVar10 + 8));
    plVar12 = (long *)((long)param_1 + lVar11 + 0x10);
LAB_0160d02c:
    *plVar12 = lVar10;
  }
  lVar9 = lVar9 + 8;
  plVar12 = plVar8 + 1;
  plVar13 = plVar8;
  if (plVar8 + 1 == param_2) {
    return;
  }
  goto LAB_0160cfd8;
}


