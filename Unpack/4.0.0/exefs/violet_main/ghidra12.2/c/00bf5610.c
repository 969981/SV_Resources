/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf5610; name: FUN_00bf5610
 */


void FUN_00bf5610(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
LAB_00bf5634:
  plVar9 = param_2 + -1;
  plVar12 = param_1;
LAB_00bf5640:
  param_1 = plVar12;
  lVar10 = (long)param_2 - (long)param_1;
  uVar5 = lVar10 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_00bf5938_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (*(int *)(*plVar9 + 0x38) < *(int *)(lVar10 + 0x38)) {
      *param_1 = *plVar9;
      *plVar9 = lVar10;
      return;
    }
    return;
  case 3:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = *plVar9;
    iVar3 = *(int *)(lVar11 + 0x38);
    if (iVar3 < *(int *)(lVar10 + 0x38)) {
      if (*(int *)(lVar13 + 0x38) < iVar3) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (*(int *)(lVar10 + 0x38) <= *(int *)(*plVar9 + 0x38)) {
          return;
        }
        param_1[1] = *plVar9;
      }
      *plVar9 = lVar10;
      return;
    }
    if (iVar3 <= *(int *)(lVar13 + 0x38)) {
      return;
    }
    param_1[1] = lVar13;
    *plVar9 = lVar11;
    lVar11 = param_1[1];
    goto LAB_00bf5bb0;
  case 4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar11 + 0x38);
    if (iVar3 < *(int *)(lVar10 + 0x38)) {
      if (*(int *)(lVar13 + 0x38) < iVar3) {
        *param_1 = lVar13;
        param_1[2] = lVar10;
        lVar11 = lVar10;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (*(int *)(lVar10 + 0x38) <= *(int *)(lVar13 + 0x38)) goto LAB_00bf5b78;
        param_1[1] = lVar13;
        param_1[2] = lVar10;
        lVar11 = lVar10;
      }
    }
    else if (*(int *)(lVar13 + 0x38) < iVar3) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      if (*(int *)(lVar13 + 0x38) < *(int *)(lVar10 + 0x38)) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
    }
    else {
LAB_00bf5b78:
      lVar11 = lVar13;
    }
    if (*(int *)(lVar11 + 0x38) <= *(int *)(*plVar9 + 0x38)) {
      return;
    }
    param_1[2] = *plVar9;
    *plVar9 = lVar11;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    if (*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38)) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar10;
LAB_00bf5bb0:
    lVar10 = *param_1;
    if (*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38)) {
      *param_1 = lVar11;
      param_1[1] = lVar10;
      return;
    }
    return;
  case 5:
    FUN_00bf5be0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar9);
    return;
  default:
    if (0xf7 < lVar10) {
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      plVar12 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        lVar11 = *plVar12;
        lVar10 = *param_1;
        lVar13 = *plVar9;
        iVar3 = *(int *)(lVar11 + 0x38);
        if (iVar3 < *(int *)(lVar10 + 0x38)) {
          if (*(int *)(lVar13 + 0x38) < iVar3) {
            *param_1 = lVar13;
            iVar3 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar12 = lVar10;
            if (*(int *)(lVar10 + 0x38) <= *(int *)(*plVar9 + 0x38)) goto LAB_00bf5748;
            iVar3 = 2;
            *plVar12 = *plVar9;
          }
          *plVar9 = lVar10;
        }
        else if (*(int *)(lVar13 + 0x38) < iVar3) {
          *plVar12 = lVar13;
          *plVar9 = lVar11;
          lVar10 = *param_1;
          if (*(int *)(*plVar12 + 0x38) < *(int *)(lVar10 + 0x38)) {
            *param_1 = *plVar12;
            iVar3 = 2;
            *plVar12 = lVar10;
          }
          else {
LAB_00bf5748:
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_00bf5be0(param_1,(long)param_1 + lVar10,plVar12,(long)plVar12 + lVar10,plVar9);
      }
      lVar10 = *param_1;
      iVar2 = *(int *)(lVar10 + 0x38);
      if (*(int *)(*plVar12 + 0x38) <= iVar2) break;
      plVar6 = plVar9;
      goto LAB_00bf5794;
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar11 + 0x38);
    if (iVar3 < *(int *)(lVar10 + 0x38)) {
      if (*(int *)(lVar13 + 0x38) < iVar3) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (*(int *)(lVar10 + 0x38) <= *(int *)(lVar13 + 0x38)) goto LAB_00bf59d8;
        param_1[1] = lVar13;
      }
      param_1[2] = lVar10;
      lVar11 = lVar10;
    }
    else if (*(int *)(lVar13 + 0x38) < iVar3) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      if (*(int *)(lVar13 + 0x38) < *(int *)(lVar10 + 0x38)) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
    }
    else {
LAB_00bf59d8:
      lVar11 = lVar13;
    }
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0;
    plVar12 = param_1 + 3;
    goto LAB_00bf59ec;
  }
  plVar7 = param_2 + -2;
  while (plVar6 = plVar7, param_1 != plVar6) {
    plVar7 = plVar6 + -1;
    if (*(int *)(*plVar6 + 0x38) < *(int *)(*plVar12 + 0x38)) goto code_r0x00bf5788;
  }
  plVar7 = param_1 + 1;
  if (*(int *)(*plVar9 + 0x38) <= iVar2) {
    if (plVar7 == plVar9) {
      return;
    }
    plVar7 = param_1 + 2;
    while (lVar10 = plVar7[-1], *(int *)(lVar10 + 0x38) <= iVar2) {
      plVar7 = plVar7 + 1;
      if (param_2 == plVar7) {
        return;
      }
    }
    plVar7[-1] = *plVar9;
    *plVar9 = lVar10;
  }
  if (plVar7 == plVar9) {
    return;
  }
  plVar6 = plVar9;
  while( true ) {
    do {
      plVar12 = plVar7;
      plVar7 = plVar12 + 1;
      lVar10 = *plVar12;
    } while (*(int *)(lVar10 + 0x38) <= *(int *)(*param_1 + 0x38));
    do {
      plVar6 = plVar6 + -1;
    } while (*(int *)(*param_1 + 0x38) < *(int *)(*plVar6 + 0x38));
    if (plVar6 <= plVar12) break;
    *plVar12 = *plVar6;
    *plVar6 = lVar10;
  }
  goto LAB_00bf5640;
code_r0x00bf5788:
  *param_1 = *plVar6;
  iVar3 = iVar3 + 1;
  *plVar6 = lVar10;
LAB_00bf5794:
  plVar7 = param_1 + 1;
  plVar14 = plVar7;
  if (plVar7 < plVar6) {
    while( true ) {
      plVar7 = plVar14 + -1;
      do {
        plVar14 = plVar7;
        plVar7 = plVar14 + 1;
        lVar10 = *plVar7;
      } while (*(int *)(lVar10 + 0x38) < *(int *)(*plVar12 + 0x38));
      plVar14 = plVar14 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(int *)(*plVar12 + 0x38) <= *(int *)(*plVar6 + 0x38));
      if (plVar6 < plVar7) break;
      *plVar7 = *plVar6;
      iVar3 = iVar3 + 1;
      *plVar6 = lVar10;
      plVar1 = plVar6;
      if (plVar12 != plVar7) {
        plVar1 = plVar12;
      }
      plVar12 = plVar1;
    }
  }
  if (plVar7 != plVar12) {
    lVar10 = *plVar7;
    if (*(int *)(*plVar12 + 0x38) < *(int *)(lVar10 + 0x38)) {
      iVar3 = iVar3 + 1;
      *plVar7 = *plVar12;
      *plVar12 = lVar10;
    }
  }
  if (iVar3 == 0) {
    uVar5 = FUN_00bf5db0(param_1,plVar7);
    uVar4 = FUN_00bf5db0(plVar7 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_00bf5918;
    plVar12 = plVar7 + 1;
    if ((uVar5 & 1) != 0) goto LAB_00bf5640;
  }
  if ((long)param_2 - (long)plVar7 <= (long)plVar7 - (long)param_1) {
    FUN_00bf5610(plVar7 + 1,param_2);
    param_2 = plVar7;
    goto LAB_00bf5634;
  }
  FUN_00bf5610(param_1,plVar7);
  plVar12 = plVar7 + 1;
  goto LAB_00bf5640;
LAB_00bf5918:
  param_2 = plVar7;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_00bf5634;
LAB_00bf59ec:
  lVar13 = *plVar12;
  if (*(int *)(lVar13 + 0x38) < *(int *)(lVar11 + 0x38)) {
    lVar11 = lVar10;
    do {
      lVar8 = lVar11;
      *(undefined8 *)((long)param_1 + lVar8 + 0x18) = *(undefined8 *)((long)param_1 + lVar8 + 0x10);
      if (lVar8 == -0x10) {
        plVar9 = param_1;
        goto LAB_00bf5a40;
      }
      lVar11 = lVar8 + -8;
    } while (*(int *)(lVar13 + 0x38) < *(int *)(*(long *)((long)param_1 + lVar8 + 8) + 0x38));
    plVar9 = (long *)((long)param_1 + lVar8 + 0x10);
LAB_00bf5a40:
    *plVar9 = lVar13;
  }
  if (plVar12 + 1 == param_2) {
switchD_00bf5938_caseD_0:
    return;
  }
  lVar11 = *plVar12;
  lVar10 = lVar10 + 8;
  plVar12 = plVar12 + 1;
  goto LAB_00bf59ec;
}


