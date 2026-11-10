/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5f210; name: FUN_00a5f210
 */


void FUN_00a5f210(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  undefined8 local_60;
  undefined8 uStack_58;
  
LAB_00a5f238:
  piVar14 = param_2 + -4;
  piVar10 = param_1;
LAB_00a5f244:
  param_1 = piVar10;
  lVar12 = (long)param_2 - (long)param_1;
  uVar6 = lVar12 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00a5f654_caseD_0;
  case 2:
    if (*param_1 <= *piVar14) {
      return;
    }
    break;
  case 3:
    piVar10 = param_1 + 4;
    iVar4 = *piVar10;
    if (*param_1 <= iVar4) {
      if (iVar4 <= *piVar14) {
        return;
      }
      uVar16 = *(undefined8 *)piVar10;
      uVar11 = *(undefined8 *)(param_1 + 6);
      uVar15 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar10 = *(undefined8 *)piVar14;
      *(undefined8 *)(param_1 + 6) = uVar15;
      *(undefined8 *)piVar14 = uVar16;
      *(undefined8 *)(param_2 + -2) = uVar11;
      if (param_1[4] < *param_1) {
        uVar16 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar10 = uVar16;
        *(undefined8 *)(param_1 + 6) = uVar11;
        return;
      }
      return;
    }
    if (iVar4 <= *piVar14) {
      uVar16 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar10 = uVar16;
      *(undefined8 *)(param_1 + 6) = uVar11;
      if (param_1[4] <= *piVar14) {
        return;
      }
      local_60 = *(undefined8 *)piVar10;
      uStack_58 = *(undefined8 *)(param_1 + 6);
      uVar16 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar10 = *(undefined8 *)piVar14;
      *(undefined8 *)(param_1 + 6) = uVar16;
      goto LAB_00a5f7e8;
    }
    break;
  case 4:
    FUN_00a5f970(param_1,param_1 + 4,param_1 + 8,piVar14);
    return;
  case 5:
    piVar10 = param_1 + 4;
    piVar9 = param_1 + 8;
    piVar7 = param_1 + 0xc;
    FUN_00a5f970(param_1,piVar10,piVar9,piVar7);
    if (param_1[0xc] <= *piVar14) {
      return;
    }
    uVar16 = *(undefined8 *)piVar7;
    uVar11 = *(undefined8 *)(param_1 + 0xe);
    uVar15 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)piVar7 = *(undefined8 *)piVar14;
    *(undefined8 *)(param_1 + 0xe) = uVar15;
    *(undefined8 *)piVar14 = uVar16;
    *(undefined8 *)(param_2 + -2) = uVar11;
    if (*piVar9 <= *piVar7) {
      return;
    }
    uVar16 = *(undefined8 *)piVar9;
    uVar11 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)piVar7 = uVar16;
    *(undefined8 *)(param_1 + 0xe) = uVar11;
    if (*piVar10 <= *piVar9) {
      return;
    }
    uVar16 = *(undefined8 *)piVar10;
    uVar11 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)piVar10 = *(undefined8 *)piVar9;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)piVar9 = uVar16;
    *(undefined8 *)(param_1 + 10) = uVar11;
    if (param_1[4] < *param_1) {
      uVar16 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar10 = uVar16;
      *(undefined8 *)(param_1 + 6) = uVar11;
      return;
    }
    return;
  default:
    if (0x1ef < lVar12) {
      uVar5 = uVar6;
      if ((long)uVar6 < 0) {
        uVar5 = uVar6 + 1;
      }
      piVar10 = param_1 + (uVar5 & 0x1ffffffffffffffe) * 2;
      if (lVar12 < 0x3e71) {
        iVar4 = *piVar10;
        if (iVar4 < *param_1) {
          if (*piVar14 < iVar4) {
            uVar16 = *(undefined8 *)param_1;
            uVar11 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)param_1 = *(undefined8 *)piVar14;
            *(undefined8 *)(param_1 + 2) = uVar15;
            *(undefined8 *)piVar14 = uVar16;
            *(undefined8 *)(param_2 + -2) = uVar11;
          }
          else {
            uVar16 = *(undefined8 *)param_1;
            uVar11 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)(piVar10 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)piVar10;
            *(undefined8 *)(param_1 + 2) = uVar15;
            *(undefined8 *)piVar10 = uVar16;
            *(undefined8 *)(piVar10 + 2) = uVar11;
            if (*piVar14 < *piVar10) {
              uVar16 = *(undefined8 *)piVar10;
              uVar11 = *(undefined8 *)(piVar10 + 2);
              uVar15 = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)piVar10 = *(undefined8 *)piVar14;
              *(undefined8 *)(piVar10 + 2) = uVar15;
              *(undefined8 *)piVar14 = uVar16;
              *(undefined8 *)(param_2 + -2) = uVar11;
              goto LAB_00a5f420;
            }
          }
LAB_00a5f428:
          iVar4 = 1;
        }
        else if (*piVar14 < iVar4) {
          uVar16 = *(undefined8 *)piVar10;
          uVar11 = *(undefined8 *)(piVar10 + 2);
          uVar15 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)piVar10 = *(undefined8 *)piVar14;
          *(undefined8 *)(piVar10 + 2) = uVar15;
          *(undefined8 *)piVar14 = uVar16;
          *(undefined8 *)(param_2 + -2) = uVar11;
          if (*param_1 <= *piVar10) goto LAB_00a5f428;
          uVar16 = *(undefined8 *)param_1;
          uVar11 = *(undefined8 *)(param_1 + 2);
          uVar15 = *(undefined8 *)(piVar10 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)piVar10;
          *(undefined8 *)(param_1 + 2) = uVar15;
          *(undefined8 *)piVar10 = uVar16;
          *(undefined8 *)(piVar10 + 2) = uVar11;
LAB_00a5f420:
          iVar4 = 2;
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        uVar5 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar5 = uVar6;
        }
        piVar9 = param_1 + (uVar5 & 0x3ffffffffffffffc);
        piVar7 = piVar10 + (uVar5 & 0x3ffffffffffffffc);
        iVar4 = FUN_00a5f970(param_1,piVar9,piVar10,piVar7);
        if (*piVar14 < *piVar7) {
          uVar16 = *(undefined8 *)piVar7;
          uVar11 = *(undefined8 *)(piVar7 + 2);
          uVar15 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)piVar7 = *(undefined8 *)piVar14;
          *(undefined8 *)(piVar7 + 2) = uVar15;
          *(undefined8 *)piVar14 = uVar16;
          *(undefined8 *)(param_2 + -2) = uVar11;
          if (*piVar7 < *piVar10) {
            uVar16 = *(undefined8 *)piVar10;
            uVar11 = *(undefined8 *)(piVar10 + 2);
            uVar15 = *(undefined8 *)(piVar7 + 2);
            *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
            *(undefined8 *)(piVar10 + 2) = uVar15;
            *(undefined8 *)piVar7 = uVar16;
            *(undefined8 *)(piVar7 + 2) = uVar11;
            if (*piVar10 < *piVar9) {
              uVar16 = *(undefined8 *)piVar9;
              uVar11 = *(undefined8 *)(piVar9 + 2);
              uVar15 = *(undefined8 *)(piVar10 + 2);
              *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
              *(undefined8 *)(piVar9 + 2) = uVar15;
              *(undefined8 *)piVar10 = uVar16;
              *(undefined8 *)(piVar10 + 2) = uVar11;
              if (*piVar9 < *param_1) {
                uVar16 = *(undefined8 *)param_1;
                uVar11 = *(undefined8 *)(param_1 + 2);
                iVar4 = iVar4 + 4;
                uVar15 = *(undefined8 *)(piVar9 + 2);
                *(undefined8 *)param_1 = *(undefined8 *)piVar9;
                *(undefined8 *)(param_1 + 2) = uVar15;
                *(undefined8 *)piVar9 = uVar16;
                *(undefined8 *)(piVar9 + 2) = uVar11;
              }
              else {
                iVar4 = iVar4 + 3;
              }
            }
            else {
              iVar4 = iVar4 + 2;
            }
          }
          else {
            iVar4 = iVar4 + 1;
          }
        }
      }
      iVar2 = *param_1;
      if (*piVar10 <= iVar2) goto LAB_00a5f45c;
      piVar7 = piVar14;
      goto LAB_00a5f494;
    }
    piVar10 = param_1 + 8;
    iVar4 = *piVar10;
    piVar14 = param_1 + 4;
    iVar2 = *piVar14;
    if (iVar2 < *param_1) {
      if (iVar4 < iVar2) {
        local_60 = *(undefined8 *)param_1;
        uStack_58 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      }
      else {
        uVar16 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar14 = uVar16;
        *(undefined8 *)(param_1 + 6) = uVar11;
        if (param_1[4] <= iVar4) goto LAB_00a5f728;
        local_60 = *(undefined8 *)piVar14;
        uStack_58 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar14 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      }
      *(undefined8 *)piVar10 = local_60;
      *(undefined8 *)(param_1 + 10) = uStack_58;
    }
    else if (iVar4 < iVar2) {
      uVar16 = *(undefined8 *)piVar14;
      uVar11 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)piVar14 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)piVar10 = uVar16;
      *(undefined8 *)(param_1 + 10) = uVar11;
      if (*piVar14 < *param_1) {
        uVar16 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)piVar14 = uVar16;
        *(undefined8 *)(param_1 + 6) = uVar11;
      }
    }
LAB_00a5f728:
    if (param_1 + 0xc == param_2) {
      return;
    }
    lVar12 = 0;
    piVar14 = param_1 + 0xc;
    goto LAB_00a5f738;
  }
  local_60 = *(undefined8 *)param_1;
  uStack_58 = *(undefined8 *)(param_1 + 2);
  uVar16 = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)param_1 = *(undefined8 *)piVar14;
  *(undefined8 *)(param_1 + 2) = uVar16;
LAB_00a5f7e8:
  *(undefined8 *)piVar14 = local_60;
  *(undefined8 *)(param_2 + -2) = uStack_58;
  return;
LAB_00a5f45c:
  piVar9 = param_2 + -8;
  while (piVar7 = piVar9, param_1 != piVar7) {
    piVar9 = piVar7 + -4;
    if (*piVar7 < *piVar10) goto code_r0x00a5f474;
  }
  piVar9 = param_1 + 4;
  if (*piVar14 <= iVar2) {
    if (piVar9 == piVar14) {
      return;
    }
    piVar9 = param_1 + 8;
    while (piVar9[-4] <= iVar2) {
      piVar9 = piVar9 + 4;
      if (param_2 == piVar9) {
        return;
      }
    }
    uVar16 = *(undefined8 *)(piVar9 + -4);
    uVar11 = *(undefined8 *)(piVar9 + -2);
    uVar15 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(piVar9 + -4) = *(undefined8 *)piVar14;
    *(undefined8 *)(piVar9 + -2) = uVar15;
    *(undefined8 *)piVar14 = uVar16;
    *(undefined8 *)(param_2 + -2) = uVar11;
  }
  if (piVar9 == piVar14) {
    return;
  }
  piVar7 = piVar14;
  while( true ) {
    piVar10 = piVar9 + -4;
    do {
      piVar18 = piVar10;
      piVar10 = piVar18 + 4;
    } while (*piVar10 <= *param_1);
    piVar9 = piVar18 + 8;
    do {
      piVar13 = piVar7;
      piVar7 = piVar13 + -4;
    } while (*param_1 < *piVar7);
    if (piVar7 <= piVar10) break;
    uVar16 = *(undefined8 *)piVar10;
    uVar11 = *(undefined8 *)(piVar18 + 6);
    uVar15 = *(undefined8 *)(piVar13 + -2);
    *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
    *(undefined8 *)(piVar18 + 6) = uVar15;
    *(undefined8 *)piVar7 = uVar16;
    *(undefined8 *)(piVar13 + -2) = uVar11;
  }
  goto LAB_00a5f244;
code_r0x00a5f474:
  uVar16 = *(undefined8 *)param_1;
  uVar11 = *(undefined8 *)(param_1 + 2);
  iVar4 = iVar4 + 1;
  uVar15 = *(undefined8 *)(piVar7 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)piVar7;
  *(undefined8 *)(param_1 + 2) = uVar15;
  *(undefined8 *)piVar7 = uVar16;
  *(undefined8 *)(piVar7 + 2) = uVar11;
LAB_00a5f494:
  piVar9 = param_1 + 4;
  piVar18 = piVar9;
  if (piVar9 < piVar7) {
    while( true ) {
      piVar9 = piVar18 + -4;
      do {
        piVar13 = piVar9;
        piVar9 = piVar13 + 4;
      } while (*piVar9 < *piVar10);
      piVar18 = piVar13 + 8;
      do {
        piVar8 = piVar7;
        piVar7 = piVar8 + -4;
      } while (*piVar10 <= *piVar7);
      if (piVar7 < piVar9) break;
      uVar16 = *(undefined8 *)piVar9;
      uVar11 = *(undefined8 *)(piVar13 + 6);
      iVar4 = iVar4 + 1;
      uVar15 = *(undefined8 *)(piVar8 + -2);
      piVar1 = piVar7;
      if (piVar10 != piVar9) {
        piVar1 = piVar10;
      }
      *(undefined8 *)piVar9 = *(undefined8 *)piVar7;
      *(undefined8 *)(piVar13 + 6) = uVar15;
      *(undefined8 *)piVar7 = uVar16;
      *(undefined8 *)(piVar8 + -2) = uVar11;
      piVar10 = piVar1;
    }
  }
  if ((piVar9 != piVar10) && (*piVar10 < *piVar9)) {
    uVar16 = *(undefined8 *)piVar9;
    uVar11 = *(undefined8 *)(piVar9 + 2);
    iVar4 = iVar4 + 1;
    uVar15 = *(undefined8 *)(piVar10 + 2);
    *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
    *(undefined8 *)(piVar9 + 2) = uVar15;
    *(undefined8 *)piVar10 = uVar16;
    *(undefined8 *)(piVar10 + 2) = uVar11;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_00a5faf0(param_1,piVar9);
    uVar5 = FUN_00a5faf0(piVar9 + 4,param_2);
    if ((uVar5 & 1) != 0) goto LAB_00a5f634;
    piVar10 = piVar9 + 4;
    if ((uVar6 & 1) != 0) goto LAB_00a5f244;
  }
  if ((long)param_2 - (long)piVar9 <= (long)piVar9 - (long)param_1) {
    FUN_00a5f210(piVar9 + 4,param_2);
    param_2 = piVar9;
    goto LAB_00a5f238;
  }
  FUN_00a5f210(param_1,piVar9);
  piVar10 = piVar9 + 4;
  goto LAB_00a5f244;
LAB_00a5f634:
  param_2 = piVar9;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00a5f238;
LAB_00a5f738:
  uVar16 = *(undefined8 *)piVar14;
  iVar4 = (int)uVar16;
  if (iVar4 < *piVar10) {
    uVar11 = *(undefined8 *)(piVar14 + 2);
    lVar3 = lVar12;
    do {
      lVar17 = lVar3;
      *(undefined8 *)((long)param_1 + lVar17 + 0x30) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x20);
      *(undefined8 *)((long)param_1 + lVar17 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x28);
      if (lVar17 == -0x20) {
        piVar10 = param_1;
        goto LAB_00a5f784;
      }
      lVar3 = lVar17 + -0x10;
    } while (iVar4 < *(int *)((long)param_1 + lVar17 + 0x10));
    piVar10 = (int *)((long)param_1 + lVar17 + 0x20);
LAB_00a5f784:
    *(undefined8 *)piVar10 = uVar16;
    *(undefined8 *)(piVar10 + 2) = uVar11;
  }
  piVar9 = piVar14 + 4;
  lVar12 = lVar12 + 0x10;
  piVar10 = piVar14;
  piVar14 = piVar9;
  if (piVar9 == param_2) {
switchD_00a5f654_caseD_0:
    return;
  }
  goto LAB_00a5f738;
}


