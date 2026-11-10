/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e231c0; name: FUN_00e231c0
 */


void FUN_00e231c0(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
LAB_00e231e4:
  plVar8 = param_2 + -1;
  plVar10 = param_1;
LAB_00e231f0:
  param_1 = plVar10;
  lVar12 = (long)param_2 - (long)param_1;
  uVar9 = lVar12 >> 3;
  if (uVar9 < 2) {
    return;
  }
  switch(uVar9) {
  case 2:
    lVar12 = *param_1;
    if (*(int *)(*plVar8 + 0x350) < *(int *)(lVar12 + 0x350)) {
      *param_1 = *plVar8;
      *plVar8 = lVar12;
      return;
    }
    return;
  case 3:
    lVar12 = *param_1;
    lVar5 = param_1[1];
    lVar13 = *plVar8;
    iVar3 = *(int *)(lVar5 + 0x350);
    if (iVar3 < *(int *)(lVar12 + 0x350)) {
      if (*(int *)(lVar13 + 0x350) < iVar3) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar5;
        param_1[1] = lVar12;
        if (*(int *)(lVar12 + 0x350) <= *(int *)(*plVar8 + 0x350)) {
          return;
        }
        param_1[1] = *plVar8;
      }
      *plVar8 = lVar12;
      return;
    }
    if (iVar3 <= *(int *)(lVar13 + 0x350)) {
      return;
    }
    param_1[1] = lVar13;
    *plVar8 = lVar5;
    lVar5 = param_1[1];
    goto LAB_00e232c0;
  case 4:
    lVar12 = *param_1;
    lVar5 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar5 + 0x350);
    if (iVar3 < *(int *)(lVar12 + 0x350)) {
      if (*(int *)(lVar13 + 0x350) < iVar3) {
        *param_1 = lVar13;
        param_1[2] = lVar12;
      }
      else {
        *param_1 = lVar5;
        param_1[1] = lVar12;
        if (*(int *)(lVar12 + 0x350) <= *(int *)(lVar13 + 0x350)) goto LAB_00e23288;
        param_1[1] = lVar13;
        param_1[2] = lVar12;
      }
    }
    else if (*(int *)(lVar13 + 0x350) < iVar3) {
      param_1[1] = lVar13;
      param_1[2] = lVar5;
      if (*(int *)(lVar13 + 0x350) < *(int *)(lVar12 + 0x350)) {
        *param_1 = lVar13;
        param_1[1] = lVar12;
      }
      lVar12 = lVar5;
    }
    else {
LAB_00e23288:
      lVar12 = lVar13;
    }
    if (*(int *)(lVar12 + 0x350) <= *(int *)(*plVar8 + 0x350)) {
      return;
    }
    param_1[2] = *plVar8;
    *plVar8 = lVar12;
    lVar12 = param_1[1];
    lVar5 = param_1[2];
    if (*(int *)(lVar12 + 0x350) <= *(int *)(lVar5 + 0x350)) {
      return;
    }
    param_1[1] = lVar5;
    param_1[2] = lVar12;
LAB_00e232c0:
    lVar12 = *param_1;
    if (*(int *)(lVar5 + 0x350) < *(int *)(lVar12 + 0x350)) {
      *param_1 = lVar5;
      param_1[1] = lVar12;
      return;
    }
    return;
  case 5:
    FUN_00e23820(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    return;
  }
  if (0xf7 < lVar12) {
    uVar4 = uVar9;
    if ((long)uVar9 < 0) {
      uVar4 = uVar9 + 1;
    }
    plVar10 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar12 < 0x1f39) {
      lVar5 = *plVar10;
      lVar12 = *param_1;
      lVar13 = *plVar8;
      iVar3 = *(int *)(lVar5 + 0x350);
      if (iVar3 < *(int *)(lVar12 + 0x350)) {
        if (*(int *)(lVar13 + 0x350) < iVar3) {
          *param_1 = lVar13;
          iVar3 = 1;
        }
        else {
          *param_1 = lVar5;
          *plVar10 = lVar12;
          if (*(int *)(lVar12 + 0x350) <= *(int *)(*plVar8 + 0x350)) goto LAB_00e235c4;
          iVar3 = 2;
          *plVar10 = *plVar8;
        }
        *plVar8 = lVar12;
      }
      else if (*(int *)(lVar13 + 0x350) < iVar3) {
        *plVar10 = lVar13;
        *plVar8 = lVar5;
        lVar12 = *param_1;
        if (*(int *)(*plVar10 + 0x350) < *(int *)(lVar12 + 0x350)) {
          *param_1 = *plVar10;
          iVar3 = 2;
          *plVar10 = lVar12;
        }
        else {
LAB_00e235c4:
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      uVar4 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar4 = uVar9;
      }
      lVar12 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_00e23820(param_1,(long)param_1 + lVar12,plVar10,(long)plVar10 + lVar12,plVar8);
    }
    lVar12 = *param_1;
    iVar2 = *(int *)(lVar12 + 0x350);
    if (*(int *)(*plVar10 + 0x350) <= iVar2) {
      plVar11 = param_2 + -2;
LAB_00e2346c:
      plVar6 = plVar11;
      if (param_1 != plVar6) goto code_r0x00e23474;
      plVar6 = param_1 + 1;
      if (*(int *)(*plVar8 + 0x350) <= iVar2) {
        if (plVar6 == plVar8) {
          return;
        }
        plVar6 = param_1 + 2;
        while (lVar12 = plVar6[-1], *(int *)(lVar12 + 0x350) <= iVar2) {
          plVar6 = plVar6 + 1;
          if (param_2 == plVar6) {
            return;
          }
        }
        plVar6[-1] = *plVar8;
        *plVar8 = lVar12;
      }
      plVar11 = plVar8;
      if (plVar6 == plVar8) {
        return;
      }
      while( true ) {
        do {
          plVar10 = plVar6;
          plVar6 = plVar10 + 1;
          lVar12 = *plVar10;
        } while (*(int *)(lVar12 + 0x350) <= *(int *)(*param_1 + 0x350));
        do {
          plVar11 = plVar11 + -1;
        } while (*(int *)(*param_1 + 0x350) < *(int *)(*plVar11 + 0x350));
        if (plVar11 <= plVar10) break;
        *plVar10 = *plVar11;
        *plVar11 = lVar12;
      }
      goto LAB_00e2370c;
    }
    plVar6 = plVar8;
    goto LAB_00e23600;
  }
  lVar12 = *param_1;
  lVar5 = param_1[1];
  lVar13 = param_1[2];
  iVar3 = *(int *)(lVar5 + 0x350);
  if (iVar3 < *(int *)(lVar12 + 0x350)) {
    if (*(int *)(lVar13 + 0x350) < iVar3) {
      *param_1 = lVar13;
    }
    else {
      *param_1 = lVar5;
      param_1[1] = lVar12;
      if (*(int *)(lVar12 + 0x350) <= *(int *)(lVar13 + 0x350)) goto LAB_00e2338c;
      param_1[1] = lVar13;
    }
    param_1[2] = lVar12;
    lVar5 = lVar12;
  }
  else if (*(int *)(lVar13 + 0x350) < iVar3) {
    param_1[1] = lVar13;
    param_1[2] = lVar5;
    if (*(int *)(lVar13 + 0x350) < *(int *)(lVar12 + 0x350)) {
      *param_1 = lVar13;
      param_1[1] = lVar12;
    }
  }
  else {
LAB_00e2338c:
    lVar5 = lVar13;
  }
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar12 = 0;
  plVar10 = param_1 + 3;
  goto LAB_00e233a4;
code_r0x00e23474:
  plVar11 = plVar6 + -1;
  if (*(int *)(*plVar6 + 0x350) < *(int *)(*plVar10 + 0x350)) goto code_r0x00e23484;
  goto LAB_00e2346c;
code_r0x00e23484:
  *param_1 = *plVar6;
  iVar3 = iVar3 + 1;
  *plVar6 = lVar12;
LAB_00e23600:
  plVar11 = param_1 + 1;
  plVar14 = plVar11;
  if (plVar11 < plVar6) {
    while( true ) {
      plVar11 = plVar14 + -1;
      do {
        plVar14 = plVar11;
        plVar11 = plVar14 + 1;
        lVar12 = *plVar11;
      } while (*(int *)(lVar12 + 0x350) < *(int *)(*plVar10 + 0x350));
      plVar14 = plVar14 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(int *)(*plVar10 + 0x350) <= *(int *)(*plVar6 + 0x350));
      if (plVar6 < plVar11) break;
      *plVar11 = *plVar6;
      iVar3 = iVar3 + 1;
      *plVar6 = lVar12;
      plVar1 = plVar6;
      if (plVar10 != plVar11) {
        plVar1 = plVar10;
      }
      plVar10 = plVar1;
    }
  }
  if (plVar11 != plVar10) {
    lVar12 = *plVar11;
    if (*(int *)(*plVar10 + 0x350) < *(int *)(lVar12 + 0x350)) {
      iVar3 = iVar3 + 1;
      *plVar11 = *plVar10;
      *plVar10 = lVar12;
    }
  }
  if (iVar3 == 0) {
    uVar9 = FUN_028fadd0(param_1,plVar11);
    uVar4 = FUN_028fadd0(plVar11 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_00e23790;
    plVar10 = plVar11 + 1;
    if ((uVar9 & 1) != 0) goto LAB_00e231f0;
  }
  if ((long)param_2 - (long)plVar11 <= (long)plVar11 - (long)param_1) {
    FUN_00e231c0(plVar11 + 1,param_2);
    param_2 = plVar11;
    goto LAB_00e231e4;
  }
  FUN_00e231c0(param_1,plVar11);
  plVar10 = plVar11 + 1;
LAB_00e2370c:
  goto LAB_00e231f0;
LAB_00e23790:
  param_2 = plVar11;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_00e231e4;
LAB_00e233a4:
  lVar13 = *plVar10;
  if (*(int *)(lVar13 + 0x350) < *(int *)(lVar5 + 0x350)) {
    lVar5 = lVar12;
    do {
      lVar7 = lVar5;
      *(undefined8 *)((long)param_1 + lVar7 + 0x18) = *(undefined8 *)((long)param_1 + lVar7 + 0x10);
      if (lVar7 == -0x10) {
        plVar8 = param_1;
        goto LAB_00e23574;
      }
      lVar5 = lVar7 + -8;
    } while (*(int *)(lVar13 + 0x350) < *(int *)(*(long *)((long)param_1 + lVar7 + 8) + 0x350));
    plVar8 = (long *)((long)param_1 + lVar7 + 0x10);
LAB_00e23574:
    *plVar8 = lVar13;
  }
  if (plVar10 + 1 == param_2) {
    return;
  }
  lVar5 = *plVar10;
  lVar12 = lVar12 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_00e233a4;
}


