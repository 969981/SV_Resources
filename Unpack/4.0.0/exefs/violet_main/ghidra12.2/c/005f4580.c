/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f4580; name: FUN_005f4580
 */


void FUN_005f4580(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
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
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
LAB_005f45b0:
  plVar15 = param_2 + -1;
LAB_005f45b8:
  lVar10 = (long)param_2 - (long)param_1;
  uVar7 = lVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_005f48ec_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (param_2[-1] < lVar10) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar10;
      return;
    }
    return;
  case 3:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_2[-1];
    if (lVar11 < lVar10) {
      if (lVar13 < lVar11) {
        *param_1 = lVar13;
        param_2[-1] = lVar10;
        return;
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
      if (param_2[-1] < lVar10) {
        param_1[1] = param_2[-1];
        param_2[-1] = lVar10;
        return;
      }
      return;
    }
    if (lVar11 <= lVar13) {
      return;
    }
    param_1[1] = lVar13;
    param_2[-1] = lVar11;
    lVar11 = param_1[1];
    goto LAB_005f4b3c;
  case 4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar13 = param_1[2];
    if (lVar11 < lVar10) {
      if (lVar13 < lVar11) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (lVar10 <= lVar13) goto LAB_005f4b14;
        param_1[1] = lVar13;
      }
      param_1[2] = lVar10;
      lVar11 = lVar10;
    }
    else if (lVar13 < lVar11) {
      param_1[1] = lVar13;
      param_1[2] = lVar11;
      if (lVar13 < lVar10) {
        *param_1 = lVar13;
        param_1[1] = lVar10;
      }
    }
    else {
LAB_005f4b14:
      lVar11 = lVar13;
    }
    if (lVar11 <= param_2[-1]) {
      return;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar11;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    if (lVar10 <= lVar11) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar10;
LAB_005f4b3c:
    lVar10 = *param_1;
    if (lVar11 < lVar10) {
      *param_1 = lVar11;
      param_1[1] = lVar10;
      return;
    }
    return;
  case 5:
    FUN_005f4b50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar15,param_3);
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
        lVar13 = *plVar15;
        if (lVar11 < lVar10) {
          if (lVar13 < lVar11) {
            *param_1 = lVar13;
            iVar3 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar9 = lVar10;
            if (lVar10 <= *plVar15) {
LAB_005f4834:
              iVar4 = 1;
              iVar3 = 1;
              lVar11 = *param_1;
              lVar10 = *plVar9;
              if (lVar10 <= lVar11) goto LAB_005f46e0;
              goto LAB_005f462c;
            }
            iVar3 = 2;
            *plVar9 = *plVar15;
          }
          *plVar15 = lVar10;
          lVar11 = *param_1;
          lVar10 = *plVar9;
          iVar4 = iVar3;
          if (lVar10 <= lVar11) {
LAB_005f46e0:
            plVar12 = param_2 + -2;
LAB_005f46e4:
            plVar8 = plVar12;
            if (param_1 != plVar8) goto code_r0x005f46ec;
            plVar9 = param_1 + 1;
            if (*plVar15 <= lVar11) {
              if (plVar9 == plVar15) {
                return;
              }
              plVar9 = param_1 + 2;
              while (lVar10 = plVar9[-1], lVar10 <= lVar11) {
                plVar9 = plVar9 + 1;
                if (param_2 == plVar9) {
                  return;
                }
              }
              plVar9[-1] = *plVar15;
              *plVar15 = lVar10;
            }
            if (plVar9 == plVar15) {
              return;
            }
            plVar12 = plVar15;
            while( true ) {
              do {
                plVar8 = plVar9;
                plVar9 = plVar8 + 1;
                lVar10 = *plVar8;
              } while (lVar10 <= *param_1);
              do {
                plVar12 = plVar12 + -1;
              } while (*param_1 < *plVar12);
              if (plVar12 <= plVar8) break;
              *plVar8 = *plVar12;
              *plVar12 = lVar10;
            }
            uVar6 = 4;
            goto LAB_005f489c;
          }
        }
        else if (lVar13 < lVar11) {
          *plVar9 = lVar13;
          *plVar15 = lVar11;
          lVar10 = *param_1;
          if (lVar10 <= *plVar9) goto LAB_005f4834;
          *param_1 = *plVar9;
          iVar4 = 2;
          iVar3 = 2;
          *plVar9 = lVar10;
          lVar11 = *param_1;
          if (lVar10 <= lVar11) goto LAB_005f46e0;
        }
        else {
          iVar4 = 0;
          iVar3 = 0;
          lVar11 = *param_1;
          lVar10 = *plVar9;
          if (lVar10 <= lVar11) goto LAB_005f46e0;
        }
      }
      else {
        uVar5 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar5 = uVar7;
        }
        lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_005f4b50(param_1,(long)param_1 + lVar10,plVar9,(long)plVar9 + lVar10,plVar15,
                             param_3);
        lVar11 = *param_1;
        lVar10 = *plVar9;
        iVar4 = iVar3;
        if (lVar10 <= lVar11) goto LAB_005f46e0;
      }
LAB_005f462c:
      plVar12 = param_1 + 1;
      plVar8 = plVar15;
      if (plVar12 < plVar15) goto LAB_005f4728;
      goto LAB_005f463c;
    }
    lVar10 = *param_1;
    lVar11 = param_1[1];
    lVar14 = param_1[2];
    lVar13 = lVar14;
    if (lVar11 < lVar10) {
      if (lVar14 < lVar11) {
        *param_1 = lVar14;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        if (lVar10 <= lVar14) goto joined_r0x005f4950;
        param_1[1] = lVar14;
      }
      param_1[2] = lVar10;
      lVar13 = lVar10;
    }
    else if (lVar14 < lVar11) {
      param_1[1] = lVar14;
      param_1[2] = lVar11;
      lVar13 = lVar11;
      if (lVar14 < lVar10) {
        *param_1 = lVar14;
        param_1[1] = lVar10;
      }
    }
joined_r0x005f4950:
    if (param_1 + 3 == param_2) {
      return;
    }
    plVar15 = param_1 + 3;
    lVar10 = 0x18;
    lVar11 = *plVar15;
    plVar9 = plVar15;
    if (lVar13 <= lVar11) goto LAB_005f49f0;
  }
LAB_005f49bc:
  lVar14 = lVar10;
  do {
    lVar2 = lVar14 + -8;
    *(long *)((long)param_1 + lVar14) = lVar13;
    if (lVar2 == 0) {
      plVar9 = param_1;
      goto LAB_005f49ec;
    }
    lVar13 = *(long *)((long)param_1 + lVar14 + -0x10);
    lVar14 = lVar2;
  } while (lVar11 < lVar13);
  plVar9 = (long *)((long)param_1 + lVar2);
LAB_005f49ec:
  *plVar9 = lVar11;
  plVar9 = plVar15;
LAB_005f49f0:
  do {
    plVar15 = plVar9 + 1;
    if (plVar15 == param_2) {
switchD_005f48ec_caseD_0:
      return;
    }
    lVar13 = *plVar9;
    lVar10 = lVar10 + 8;
    lVar11 = *plVar15;
    plVar9 = plVar15;
  } while (lVar13 <= lVar11);
  goto LAB_005f49bc;
code_r0x005f46ec:
  plVar12 = plVar8 + -1;
  if (*plVar8 < lVar10) goto code_r0x005f46f8;
  goto LAB_005f46e4;
code_r0x005f46f8:
  *param_1 = *plVar8;
  iVar4 = iVar3 + 1;
  *plVar8 = lVar11;
  plVar12 = param_1 + 1;
  if (plVar12 < plVar8) {
LAB_005f4728:
    while( true ) {
      plVar16 = plVar12 + -1;
      do {
        plVar12 = plVar16;
        plVar16 = plVar12 + 1;
        lVar10 = *plVar16;
      } while (lVar10 < *plVar9);
      plVar12 = plVar12 + 2;
      do {
        plVar8 = plVar8 + -1;
      } while (*plVar9 <= *plVar8);
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
    if (plVar16 == plVar9) goto LAB_005f477c;
  }
  else {
LAB_005f463c:
    plVar16 = param_1 + 1;
    if (plVar16 == plVar9) goto LAB_005f477c;
  }
  lVar10 = *plVar16;
  if (*plVar9 < lVar10) {
    iVar4 = iVar4 + 1;
    *plVar16 = *plVar9;
    *plVar9 = lVar10;
  }
LAB_005f477c:
  if (iVar4 == 0) {
    uVar7 = FUN_005f4d30(param_1,plVar16,param_3);
    plVar8 = plVar16 + 1;
    uVar5 = FUN_005f4d30(plVar8,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      param_2 = plVar16;
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_005f45b0;
    }
    if ((uVar7 & 1) != 0) {
      uVar6 = 2;
LAB_005f489c:
      if (4 < uVar6) {
        return;
      }
      param_1 = plVar8;
      if ((1 << (ulong)uVar6 & 0x15U) == 0) {
        return;
      }
      goto LAB_005f45b8;
    }
  }
  if ((long)plVar16 - (long)param_1 < (long)param_2 - (long)plVar16) {
    FUN_005f4580(param_1,plVar16,param_3);
    param_1 = plVar16 + 1;
    goto LAB_005f45b8;
  }
  FUN_005f4580(plVar16 + 1,param_2,param_3);
  param_2 = plVar16;
  goto LAB_005f45b0;
}


