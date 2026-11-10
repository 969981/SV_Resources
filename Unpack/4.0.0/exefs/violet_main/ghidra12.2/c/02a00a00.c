/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a00a00; name: FUN_02a00a00
 */


void FUN_02a00a00(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
LAB_02a00a30:
  plVar13 = param_2 + -1;
  plVar10 = param_1;
LAB_02a00a3c:
  param_1 = plVar10;
  lVar7 = (long)param_2 - (long)param_1;
  uVar4 = lVar7 >> 3;
  switch(uVar4) {
  case 0:
  case 1:
    goto switchD_02a012e4_caseD_0;
  case 2:
    lVar7 = *plVar13;
    lVar8 = *param_1;
    if (*(char *)(lVar7 + 0x44) == '\0') {
      plVar10 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar7 + 0x60) == 0) {
      plVar10 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
    }
    else {
      plVar10 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar8 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
    }
    else {
      plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar7 - *plVar10) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39) {
      *param_1 = lVar7;
      *plVar13 = lVar8;
      return;
    }
    return;
  case 3:
    FUN_02a01590(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_02a01800(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_02a01a00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_02a01590(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar7 = 0;
    plVar10 = param_1 + 3;
    plVar13 = param_1 + 2;
    goto LAB_02a0132c;
  }
  uVar3 = uVar4;
  if ((long)uVar4 < 0) {
    uVar3 = uVar4 + 1;
  }
  plVar10 = (long *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar2 = FUN_02a01590(param_1,plVar10,plVar13);
  }
  else {
    uVar3 = uVar4 + 3;
    if (-1 < (long)uVar4) {
      uVar3 = uVar4;
    }
    lVar7 = (uVar3 & 0x7ffffffffffffffc) * 2;
    iVar2 = FUN_02a01a00(param_1,(long)param_1 + lVar7,plVar10,(long)plVar10 + lVar7,plVar13);
  }
  lVar7 = *param_1;
  lVar8 = *plVar10;
  cVar1 = *(char *)(lVar7 + 0x44);
  if (cVar1 == '\0') {
    plVar5 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar7 + 0x60) == 0) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
  }
  else {
    plVar5 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
  }
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar7 - *plVar5) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39) {
    plVar5 = plVar13;
  }
  else {
    plVar5 = param_2 + -2;
    if (*(char *)(lVar8 + 0x44) == '\0') {
      do {
        if (param_1 == plVar5) goto LAB_02a00e68;
        lVar12 = *plVar5;
        if (*(char *)(lVar12 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(lVar12 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar12 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(lVar12 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar12 + 0x60) + 0x80);
        }
        plVar5 = plVar5 + -1;
      } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x30)) >> 4) * 0x38e38e39
               <= (int)((ulong)(lVar12 - *plVar6) >> 4) * 0x38e38e39);
    }
    else {
      do {
        if (param_1 == plVar5) goto LAB_02a00e68;
        lVar12 = *plVar5;
        if (*(char *)(lVar12 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(lVar12 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar12 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(lVar12 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar12 + 0x60) + 0x80);
        }
        if (*(long *)(lVar8 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        plVar5 = plVar5 + -1;
      } while ((int)((ulong)(lVar8 - *plVar14) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar12 - *plVar6) >> 4) * 0x38e38e39);
    }
    plVar5 = plVar5 + 1;
    iVar2 = iVar2 + 1;
    *param_1 = *plVar5;
    *plVar5 = lVar7;
  }
  plVar6 = param_1 + 1;
  plVar14 = plVar6;
  if (plVar6 < plVar5) {
    while( true ) {
      lVar7 = *plVar10;
      if (*(char *)(lVar7 + 0x44) == '\0') {
        plVar14 = plVar6 + -1;
        do {
          lVar8 = plVar14[1];
          if (*(char *)(lVar8 + 0x44) == '\0') {
            plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
          }
          else if (*(long *)(lVar8 + 0x60) == 0) {
            plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
          }
          else {
            plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
          }
          plVar14 = plVar14 + 1;
        } while ((int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39 <
                 (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39
                );
      }
      else {
        plVar14 = plVar6 + -1;
        do {
          lVar8 = plVar14[1];
          if (*(char *)(lVar8 + 0x44) == '\0') {
            plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
          }
          else if (*(long *)(lVar8 + 0x60) == 0) {
            plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
          }
          else {
            plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
          }
          plVar15 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
          if (*(long *)(lVar7 + 0x60) == 0) {
            plVar15 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
          }
          plVar14 = plVar14 + 1;
        } while ((int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39 <
                 (int)((ulong)(lVar7 - *plVar15) >> 4) * 0x38e38e39);
      }
      if (*(char *)(lVar7 + 0x44) == '\0') {
        do {
          plVar5 = plVar5 + -1;
          lVar8 = *plVar5;
          if (*(char *)(lVar8 + 0x44) == '\0') {
            plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
          }
          else if (*(long *)(lVar8 + 0x60) == 0) {
            plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
          }
          else {
            plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
          }
        } while ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39
                 <= (int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39);
      }
      else {
        do {
          plVar5 = plVar5 + -1;
          lVar8 = *plVar5;
          if (*(char *)(lVar8 + 0x44) == '\0') {
            plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
          }
          else if (*(long *)(lVar8 + 0x60) == 0) {
            plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
          }
          else {
            plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
          }
          plVar15 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
          if (*(long *)(lVar7 + 0x60) == 0) {
            plVar15 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
          }
        } while ((int)((ulong)(lVar7 - *plVar15) >> 4) * 0x38e38e39 <=
                 (int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39);
      }
      if (plVar5 < plVar14) break;
      lVar7 = *plVar14;
      iVar2 = iVar2 + 1;
      plVar15 = plVar5;
      if (plVar10 != plVar14) {
        plVar15 = plVar10;
      }
      plVar6 = plVar14 + 1;
      *plVar14 = *plVar5;
      *plVar5 = lVar7;
      plVar10 = plVar15;
    }
  }
  if (plVar14 != plVar10) {
    lVar8 = *plVar10;
    lVar7 = *plVar14;
    if (*(char *)(lVar8 + 0x44) == '\0') {
      plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar8 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
    }
    else {
      plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
    }
    if (*(char *)(lVar7 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar7 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar7 - *plVar6) >> 4) * 0x38e38e39) {
      iVar2 = iVar2 + 1;
      *plVar14 = lVar8;
      *plVar10 = lVar7;
    }
  }
  if (iVar2 == 0) {
    uVar4 = FUN_02a01ca0(param_1,plVar14);
    uVar3 = FUN_02a01ca0(plVar14 + 1,param_2);
    if ((uVar3 & 1) != 0) goto LAB_02a012c4;
    plVar10 = plVar14 + 1;
    if ((uVar4 & 1) != 0) goto LAB_02a00a3c;
  }
  if ((long)param_2 - (long)plVar14 <= (long)plVar14 - (long)param_1) {
    FUN_02a00a00(plVar14 + 1,param_2);
    param_2 = plVar14;
    goto LAB_02a00a30;
  }
  FUN_02a00a00(param_1,plVar14);
  plVar10 = plVar14 + 1;
  goto LAB_02a00a3c;
LAB_02a0132c:
  plVar5 = plVar10;
  lVar12 = *plVar13;
  lVar8 = *plVar5;
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar10 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar10 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar10 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if (*(char *)(lVar12 + 0x44) == '\0') {
    plVar13 = (long *)(*(long *)(lVar12 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar12 + 0x60) == 0) {
    plVar13 = (long *)(*(long *)(lVar12 + 0x30) + 0x88);
  }
  else {
    plVar13 = (long *)(*(long *)(lVar12 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar8 - *plVar10) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar12 - *plVar13) >> 4) * 0x38e38e39) {
    lVar12 = lVar7;
    do {
      lVar9 = lVar12;
      *(undefined8 *)((long)param_1 + lVar9 + 0x18) = *(undefined8 *)((long)param_1 + lVar9 + 0x10);
      if (lVar9 == -0x10) {
        plVar10 = param_1;
        goto LAB_02a01468;
      }
      lVar11 = *(long *)((long)param_1 + lVar9 + 8);
      if (*(char *)(lVar8 + 0x44) == '\0') {
        plVar10 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar8 + 0x60) == 0) {
        plVar10 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
      }
      else {
        plVar10 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
      }
      if (*(char *)(lVar11 + 0x44) == '\0') {
        plVar13 = (long *)(*(long *)(lVar11 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar11 + 0x60) == 0) {
        plVar13 = (long *)(*(long *)(lVar11 + 0x30) + 0x88);
      }
      else {
        plVar13 = (long *)(*(long *)(lVar11 + 0x60) + 0x80);
      }
      lVar12 = lVar9 + -8;
    } while ((int)((ulong)(lVar8 - *plVar10) >> 4) * 0x38e38e39 <
             (int)((ulong)(lVar11 - *plVar13) >> 4) * 0x38e38e39);
    plVar10 = (long *)((long)param_1 + lVar9 + 0x10);
LAB_02a01468:
    *plVar10 = lVar8;
  }
  lVar7 = lVar7 + 8;
  plVar10 = plVar5 + 1;
  plVar13 = plVar5;
  if (plVar5 + 1 == param_2) {
switchD_02a012e4_caseD_0:
    return;
  }
  goto LAB_02a0132c;
LAB_02a00e68:
  lVar8 = *plVar13;
  if (cVar1 == '\0') {
    plVar10 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar7 + 0x60) == 0) {
    plVar10 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
  }
  else {
    plVar10 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
  }
  plVar5 = param_1 + 1;
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar6 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar6 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar6 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar8 - *plVar6) >> 4) * 0x38e38e39 <=
      (int)((ulong)(lVar7 - *plVar10) >> 4) * 0x38e38e39) {
    if (plVar5 == plVar13) {
      return;
    }
    if (cVar1 == '\0') {
      plVar5 = param_1 + 2;
      while( true ) {
        lVar12 = plVar5[-1];
        if (*(char *)(lVar12 + 0x44) == '\0') {
          plVar10 = (long *)(*(long *)(lVar12 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar12 + 0x60) == 0) {
          plVar10 = (long *)(*(long *)(lVar12 + 0x30) + 0x88);
        }
        else {
          plVar10 = (long *)(*(long *)(lVar12 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar12 - *plVar10) >> 4) * 0x38e38e39) break;
        plVar5 = plVar5 + 1;
        if (param_2 == plVar5) {
          return;
        }
      }
    }
    else {
      plVar5 = param_1 + 2;
      while( true ) {
        lVar12 = plVar5[-1];
        plVar10 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar10 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar12 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(lVar12 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar12 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(lVar12 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar12 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar7 - *plVar10) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar12 - *plVar6) >> 4) * 0x38e38e39) break;
        plVar5 = plVar5 + 1;
        if (param_2 == plVar5) {
          return;
        }
      }
    }
    lVar7 = plVar5[-1];
    plVar5[-1] = lVar8;
    *plVar13 = lVar7;
  }
  if (plVar5 == plVar13) {
    return;
  }
  plVar6 = plVar13;
  while( true ) {
    lVar7 = *param_1;
    if (*(char *)(lVar7 + 0x44) == '\0') {
      plVar10 = plVar5 + -1;
      do {
        lVar8 = plVar10[1];
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        plVar10 = plVar10 + 1;
      } while ((int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39);
    }
    else {
      plVar10 = plVar5 + -1;
      do {
        lVar8 = plVar10[1];
        plVar5 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        plVar10 = plVar10 + 1;
      } while ((int)((ulong)(lVar8 - *plVar14) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar7 - *plVar5) >> 4) * 0x38e38e39);
    }
    if (*(char *)(lVar7 + 0x44) == '\0') {
      do {
        plVar6 = plVar6 + -1;
        lVar8 = *plVar6;
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
      } while ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39 <
               (int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39);
    }
    else {
      do {
        plVar6 = plVar6 + -1;
        lVar8 = *plVar6;
        plVar5 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar14 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar14 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar14 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
      } while ((int)((ulong)(lVar7 - *plVar5) >> 4) * 0x38e38e39 <
               (int)((ulong)(lVar8 - *plVar14) >> 4) * 0x38e38e39);
    }
    if (plVar6 <= plVar10) break;
    lVar7 = *plVar10;
    plVar5 = plVar10 + 1;
    *plVar10 = *plVar6;
    *plVar6 = lVar7;
  }
  goto LAB_02a00a3c;
LAB_02a012c4:
  param_2 = plVar14;
  if ((uVar4 & 1) != 0) {
    return;
  }
  goto LAB_02a00a30;
}


