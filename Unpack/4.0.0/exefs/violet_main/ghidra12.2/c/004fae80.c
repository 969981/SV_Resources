/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fae80; name: FUN_004fae80
 */


void FUN_004fae80(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
LAB_004faeac:
  plVar13 = param_2 + -1;
LAB_004faeb4:
  lVar10 = (long)param_2 - (long)param_1;
  uVar7 = lVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_004fb1e4_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (*(int *)(param_2[-1] + 0x44) < *(int *)(lVar10 + 0x44)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar10;
      return;
    }
    return;
  case 3:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar15 = param_2[-1];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    if (iVar2 <= iVar4) {
      if (iVar4 <= *(int *)(lVar15 + 0x44)) {
        return;
      }
      param_1[1] = lVar15;
      param_2[-1] = lVar11;
      lVar10 = *param_1;
      if (*(int *)(param_1[1] + 0x44) < *(int *)(lVar10 + 0x44)) {
        *param_1 = param_1[1];
        param_1[1] = lVar10;
        return;
      }
      return;
    }
    if (*(int *)(lVar15 + 0x44) < iVar4) {
      *param_1 = lVar15;
      param_2[-1] = lVar10;
      return;
    }
    *param_1 = lVar11;
    param_1[1] = lVar10;
    if (*(int *)(param_2[-1] + 0x44) < iVar2) {
      param_1[1] = param_2[-1];
      param_2[-1] = lVar10;
      return;
    }
    return;
  case 4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar15 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    iVar3 = *(int *)(lVar15 + 0x44);
    if (iVar4 < iVar2) {
      if (iVar3 < iVar4) {
        *param_1 = lVar15;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_004fb450;
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
      if (iVar3 < iVar2) {
        param_1[1] = lVar15;
        param_1[2] = lVar10;
        lVar11 = lVar10;
        goto LAB_004fb450;
      }
    }
    else if (iVar3 < iVar4) {
      param_1[1] = lVar15;
      param_1[2] = lVar11;
      if (iVar3 < iVar2) {
        *param_1 = lVar15;
        param_1[1] = lVar10;
      }
      goto LAB_004fb450;
    }
    lVar11 = lVar15;
LAB_004fb450:
    if (*(int *)(lVar11 + 0x44) <= *(int *)(param_2[-1] + 0x44)) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar11;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    if (*(int *)(lVar10 + 0x44) <= iVar4) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar10;
    lVar10 = *param_1;
    if (iVar4 < *(int *)(lVar10 + 0x44)) {
      *param_1 = lVar11;
      param_1[1] = lVar10;
      return;
    }
    return;
  case 5:
    FUN_004fb4c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  default:
    if (0xf7 < lVar10) {
      uVar5 = uVar7;
      if ((long)uVar7 < 0) {
        uVar5 = uVar7 + 1;
      }
      plVar9 = (long *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        lVar11 = *plVar9;
        lVar10 = *param_1;
        lVar15 = *plVar13;
        iVar4 = *(int *)(lVar11 + 0x44);
        iVar2 = *(int *)(lVar10 + 0x44);
        if (iVar4 < iVar2) {
          if (*(int *)(lVar15 + 0x44) < iVar4) {
            *param_1 = lVar15;
            iVar4 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar9 = lVar10;
            if (iVar2 <= *(int *)(*plVar13 + 0x44)) goto LAB_004fafb4;
            iVar4 = 2;
            *plVar9 = *plVar13;
          }
          *plVar13 = lVar10;
        }
        else if (*(int *)(lVar15 + 0x44) < iVar4) {
          *plVar9 = lVar15;
          *plVar13 = lVar11;
          lVar10 = *param_1;
          if (*(int *)(*plVar9 + 0x44) < *(int *)(lVar10 + 0x44)) {
            *param_1 = *plVar9;
            iVar4 = 2;
            *plVar9 = lVar10;
          }
          else {
LAB_004fafb4:
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        uVar5 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar5 = uVar7;
        }
        lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar4 = FUN_004fb4c0(param_1,(long)param_1 + lVar10,plVar9,(long)plVar9 + lVar10,plVar13);
      }
      lVar10 = *param_1;
      iVar2 = *(int *)(lVar10 + 0x44);
      if (*(int *)(*plVar9 + 0x44) <= iVar2) {
        plVar12 = param_2 + -2;
LAB_004fafe8:
        plVar8 = plVar12;
        if (param_1 != plVar8) break;
        plVar9 = param_1 + 1;
        if (*(int *)(*plVar13 + 0x44) <= iVar2) {
          if (plVar9 == plVar13) {
            return;
          }
          plVar9 = param_1 + 2;
          while (lVar10 = plVar9[-1], *(int *)(lVar10 + 0x44) <= iVar2) {
            plVar9 = plVar9 + 1;
            if (param_2 == plVar9) {
              return;
            }
          }
          plVar9[-1] = *plVar13;
          *plVar13 = lVar10;
        }
        if (plVar9 == plVar13) {
          return;
        }
        plVar12 = plVar13;
        while( true ) {
          do {
            plVar8 = plVar9;
            plVar9 = plVar8 + 1;
            lVar10 = *plVar8;
          } while (*(int *)(lVar10 + 0x44) <= *(int *)(*param_1 + 0x44));
          do {
            plVar12 = plVar12 + -1;
          } while (*(int *)(*param_1 + 0x44) < *(int *)(*plVar12 + 0x44));
          if (plVar12 <= plVar8) break;
          *plVar8 = *plVar12;
          *plVar12 = lVar10;
        }
        uVar6 = 4;
        goto LAB_004fb198;
      }
      plVar12 = param_1 + 1;
      plVar8 = plVar13;
      if (plVar13 <= plVar12) goto LAB_004fb018;
      goto LAB_004fb038;
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar14 = param_1[2];
    iVar4 = *(int *)(lVar11 + 0x44);
    iVar2 = *(int *)(lVar10 + 0x44);
    iVar3 = *(int *)(lVar14 + 0x44);
    lVar15 = lVar14;
    if (iVar4 < iVar2) {
      if (iVar3 < iVar4) {
        *param_1 = lVar14;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (iVar2 <= iVar3) goto joined_r0x004fb25c;
        param_1[1] = lVar14;
      }
      param_1[2] = lVar10;
      lVar15 = lVar10;
    }
    else if (iVar3 < iVar4) {
      param_1[1] = lVar14;
      param_1[2] = lVar11;
      lVar15 = lVar11;
      if (iVar3 < iVar2) {
        *param_1 = lVar14;
        param_1[1] = lVar10;
      }
    }
joined_r0x004fb25c:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0;
    plVar13 = param_1 + 3;
    goto LAB_004fb2a0;
  }
  plVar12 = plVar8 + -1;
  if (*(int *)(*plVar8 + 0x44) < *(int *)(*plVar9 + 0x44)) goto code_r0x004fb000;
  goto LAB_004fafe8;
code_r0x004fb000:
  *param_1 = *plVar8;
  iVar4 = iVar4 + 1;
  *plVar8 = lVar10;
  plVar12 = param_1 + 1;
  if (plVar12 < plVar8) {
LAB_004fb038:
    while( true ) {
      plVar16 = plVar12 + -1;
      do {
        plVar12 = plVar16;
        plVar16 = plVar12 + 1;
        lVar10 = *plVar16;
      } while (*(int *)(lVar10 + 0x44) < *(int *)(*plVar9 + 0x44));
      plVar12 = plVar12 + 2;
      do {
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar9 + 0x44) <= *(int *)(*plVar8 + 0x44));
      if (plVar8 < plVar16) break;
      *plVar16 = *plVar8;
      iVar4 = iVar4 + 1;
      *plVar8 = lVar10;
      plVar1 = plVar8;
      if (plVar9 != plVar16) {
        plVar1 = plVar9;
      }
      plVar9 = plVar1;
    }
    if (plVar16 == plVar9) goto LAB_004fb0a0;
  }
  else {
LAB_004fb018:
    plVar16 = param_1 + 1;
    if (plVar16 == plVar9) goto LAB_004fb0a0;
  }
  lVar10 = *plVar16;
  if (*(int *)(*plVar9 + 0x44) < *(int *)(lVar10 + 0x44)) {
    iVar4 = iVar4 + 1;
    *plVar16 = *plVar9;
    *plVar9 = lVar10;
  }
LAB_004fb0a0:
  if (iVar4 == 0) {
    uVar7 = FUN_004fb6a0(param_1,plVar16);
    plVar8 = plVar16 + 1;
    uVar5 = FUN_004fb6a0(plVar8,param_2);
    if ((uVar5 & 1) != 0) {
      param_2 = plVar16;
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_004faeac;
    }
    if ((uVar7 & 1) != 0) {
      uVar6 = 2;
LAB_004fb198:
      if (4 < uVar6) {
        return;
      }
      param_1 = plVar8;
      if ((1 << (ulong)uVar6 & 0x15U) == 0) {
        return;
      }
      goto LAB_004faeb4;
    }
  }
  if ((long)plVar16 - (long)param_1 < (long)param_2 - (long)plVar16) {
    FUN_004fae80(param_1,plVar16);
    param_1 = plVar16 + 1;
    goto LAB_004faeb4;
  }
  FUN_004fae80(plVar16 + 1,param_2);
  param_2 = plVar16;
  goto LAB_004faeac;
LAB_004fb2a0:
  lVar11 = *plVar13;
  iVar4 = *(int *)(lVar11 + 0x44);
  if (iVar4 < *(int *)(lVar15 + 0x44)) {
    lVar15 = lVar10;
    do {
      lVar14 = lVar15;
      *(undefined8 *)((long)param_1 + lVar14 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar14 + 0x10);
      if (lVar14 == -0x10) {
        plVar9 = param_1;
        goto LAB_004fb2f0;
      }
      lVar15 = lVar14 + -8;
    } while (iVar4 < *(int *)(*(long *)((long)param_1 + lVar14 + 8) + 0x44));
    plVar9 = (long *)((long)param_1 + lVar14 + 0x10);
LAB_004fb2f0:
    *plVar9 = lVar11;
  }
  if (plVar13 + 1 == param_2) {
switchD_004fb1e4_caseD_0:
    return;
  }
  lVar15 = *plVar13;
  lVar10 = lVar10 + 8;
  plVar13 = plVar13 + 1;
  goto LAB_004fb2a0;
}


