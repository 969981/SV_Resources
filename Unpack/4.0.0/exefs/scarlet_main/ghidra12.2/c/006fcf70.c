/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fcf70; name: FUN_006fcf70
 */


undefined8 FUN_006fcf70(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  char *pcVar19;
  char *pcVar20;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plStack_a8 = (long *)FUN_01cf7e20();
  local_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  plStack_88 = (long *)FUN_01cf7e20();
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  plStack_68 = (long *)FUN_01cf7e20();
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if ((param_2 != (char *)0x0) && (sVar7 = strlen(param_2), sVar7 != 0)) {
    pcVar20 = param_2 + sVar7;
    if ((long)sVar7 < 1) {
LAB_006fd00c:
      pcVar19 = pcVar20;
    }
    else {
      pcVar19 = param_2;
      if (*param_2 != '/') {
        pcVar11 = param_2;
        sVar9 = sVar7;
        do {
          sVar9 = sVar9 - 1;
          if (sVar9 == 0) goto LAB_006fd00c;
          pcVar19 = pcVar11 + 1;
          pcVar10 = pcVar11 + 1;
          pcVar11 = pcVar19;
        } while (*pcVar10 != '/');
      }
    }
    uVar17 = 0;
    if ((pcVar20 == pcVar19) ||
       (uVar16 = (long)pcVar19 - (long)param_2, uVar16 == 0xffffffffffffffff)) goto LAB_006fd080;
    uVar18 = sVar7;
    if (uVar16 <= sVar7) {
      uVar18 = uVar16;
    }
    sVar9 = 7;
    if (uVar18 < 8) {
      sVar9 = uVar18;
    }
    if (sVar9 == 0) {
      if (7 < uVar18) goto LAB_006fd07c;
LAB_006fd070:
      iVar8 = -(uint)(uVar18 < 7);
    }
    else {
      iVar6 = memcmp(param_2,"tenants",sVar9);
      iVar8 = iVar6;
      if (iVar6 == 0) {
        iVar8 = 1;
      }
      if ((uVar18 < 8) && (iVar6 == 0)) goto LAB_006fd070;
    }
    if (iVar8 == 0) {
      uVar18 = sVar7 - (uVar16 + 1);
      pcVar11 = param_2 + uVar16 + 1;
      if (uVar18 == 0) {
LAB_006fd184:
        pcVar10 = pcVar20;
      }
      else {
        pcVar10 = pcVar20;
        if ((0 < (long)pcVar20 - (long)pcVar11) && (pcVar10 = pcVar11, *pcVar11 != '/')) {
          pcVar12 = param_2 + (sVar7 - (long)pcVar19) + -2;
          pcVar13 = pcVar11;
          do {
            if (pcVar12 == (char *)0x0) goto LAB_006fd184;
            pcVar10 = pcVar13 + 1;
            pcVar15 = pcVar13 + 1;
            pcVar12 = pcVar12 + -1;
            pcVar13 = pcVar10;
          } while (*pcVar15 != '/');
        }
      }
      uVar16 = (long)pcVar10 - (long)pcVar11;
      if (pcVar20 == pcVar10) {
        uVar16 = 0xffffffffffffffff;
      }
      uVar3 = uVar18;
      if (uVar16 <= uVar18) {
        uVar3 = uVar16;
      }
      FUN_006fbcf0(&local_c0,pcVar11,uVar3);
      uVar3 = uVar18;
      if (uVar16 != 0xffffffffffffffff) {
        uVar3 = uVar16 + 1;
      }
      uVar18 = uVar18 - uVar3;
      if (uVar18 != 0) {
        pcVar11 = pcVar11 + uVar3;
        if ((long)uVar18 < 1) {
LAB_006fd20c:
          pcVar20 = pcVar11 + uVar18;
        }
        else {
          pcVar20 = pcVar11;
          if (*pcVar11 != '/') {
            pcVar13 = param_2 + (sVar7 - (long)(pcVar19 + uVar3)) + -2;
            pcVar10 = pcVar11;
            do {
              if (pcVar13 == (char *)0x0) goto LAB_006fd20c;
              pcVar20 = pcVar10 + 1;
              pcVar12 = pcVar10 + 1;
              pcVar13 = pcVar13 + -1;
              pcVar10 = pcVar20;
            } while (*pcVar12 != '/');
          }
        }
        uVar17 = 0;
        if ((pcVar11 + uVar18 == pcVar20) ||
           (uVar16 = (long)pcVar20 - (long)pcVar11, uVar16 == 0xffffffffffffffff))
        goto LAB_006fd080;
        uVar4 = uVar18;
        if (uVar16 <= uVar18) {
          uVar4 = uVar16;
        }
        sVar9 = 0xc;
        if (uVar4 < 0xd) {
          sVar9 = uVar4;
        }
        if (sVar9 == 0) {
          if (0xc < uVar4) goto LAB_006fd07c;
LAB_006fd270:
          iVar8 = -(uint)(uVar4 < 0xc);
        }
        else {
          iVar6 = memcmp(pcVar11,"competitions",sVar9);
          iVar8 = iVar6;
          if (iVar6 == 0) {
            iVar8 = 1;
          }
          if ((uVar4 < 0xd) && (iVar6 == 0)) goto LAB_006fd270;
        }
        if (iVar8 == 0) {
          uVar18 = uVar18 - (uVar16 + 1);
          pcVar10 = pcVar11 + uVar16 + 1;
          if ((long)uVar18 < 1) {
LAB_006fd2f8:
            pcVar13 = pcVar10 + uVar18;
          }
          else {
            pcVar13 = pcVar10;
            if (*pcVar10 != '/') {
              pcVar12 = param_2 + (sVar7 - 3);
              pcVar13 = pcVar20 + uVar3 + (long)pcVar19;
              do {
                if (pcVar19 + uVar3 + (long)pcVar20 + -(long)pcVar11 == pcVar12) goto LAB_006fd2f8;
                pcVar1 = pcVar13 + 1;
                pcVar15 = pcVar13 + (3 - (long)pcVar11);
                pcVar12 = pcVar12 + -1;
                pcVar13 = pcVar1;
              } while (*pcVar15 != '/');
              pcVar13 = pcVar1 + (2 - (long)pcVar11);
            }
          }
          uVar16 = (long)pcVar13 - (long)pcVar10;
          if (pcVar10 + uVar18 == pcVar13) {
            uVar16 = 0xffffffffffffffff;
          }
          uVar4 = uVar18;
          if (uVar16 <= uVar18) {
            uVar4 = uVar16;
          }
          FUN_006fbcf0(&local_a0,pcVar10,uVar4);
          uVar4 = uVar18;
          if (uVar16 != 0xffffffffffffffff) {
            uVar4 = uVar16 + 1;
          }
          uVar18 = uVar18 - uVar4;
          if (uVar18 != 0) {
            pcVar10 = pcVar10 + uVar4;
            if ((long)uVar18 < 1) {
LAB_006fd398:
              pcVar13 = pcVar10 + uVar18;
            }
            else {
              pcVar13 = pcVar10;
              if (*pcVar10 != '/') {
                lVar14 = sVar7 - 3;
                pcVar13 = pcVar20 + uVar4 + uVar3 + (long)pcVar19;
                do {
                  if ((long)(pcVar19 + uVar4 + uVar3 + (long)pcVar20) -
                      (long)(param_2 + (long)pcVar11) == lVar14) goto LAB_006fd398;
                  pcVar15 = pcVar13 + 1;
                  pcVar12 = pcVar13 + (3 - (long)pcVar11);
                  lVar14 = lVar14 + -1;
                  pcVar13 = pcVar15;
                } while (*pcVar12 != '/');
                pcVar13 = pcVar15 + (2 - (long)pcVar11);
              }
            }
            uVar17 = 0;
            if ((pcVar10 + uVar18 == pcVar13) ||
               (uVar16 = (long)pcVar13 - (long)pcVar10, uVar16 == 0xffffffffffffffff))
            goto LAB_006fd080;
            uVar5 = uVar18;
            if (uVar16 <= uVar18) {
              uVar5 = uVar16;
            }
            sVar9 = 0xc;
            if (uVar5 < 0xd) {
              sVar9 = uVar5;
            }
            if (sVar9 == 0) {
              if (0xc < uVar5) goto LAB_006fd07c;
LAB_006fd408:
              iVar8 = -(uint)(uVar5 < 0xc);
            }
            else {
              iVar6 = memcmp(pcVar10,"participants",sVar9);
              iVar8 = iVar6;
              if (iVar6 == 0) {
                iVar8 = 1;
              }
              if ((uVar5 < 0xd) && (iVar6 == 0)) goto LAB_006fd408;
            }
            if (iVar8 == 0) {
              uVar18 = uVar18 - (uVar16 + 1);
              pcVar12 = pcVar10 + uVar16 + 1;
              if ((long)uVar18 < 1) {
LAB_006fd4b0:
                pcVar15 = pcVar12 + uVar18;
              }
              else {
                pcVar15 = pcVar12;
                if (*pcVar12 != '/') {
                  pcVar15 = pcVar11 + sVar7 + (long)param_2 + -4;
                  lVar14 = (long)(pcVar13 + uVar4 + uVar3 + (long)pcVar20 + (long)pcVar19) -
                           (long)pcVar11;
                  do {
                    if (pcVar19 + uVar4 + uVar3 + (long)pcVar20 + (long)pcVar13 + -(long)pcVar10 ==
                        pcVar15) goto LAB_006fd4b0;
                    lVar2 = lVar14 - (long)pcVar10;
                    lVar14 = lVar14 + 1;
                    pcVar15 = pcVar15 + -1;
                  } while (*(char *)(lVar2 + 4) != '/');
                  pcVar15 = (char *)((lVar14 - (long)pcVar10) + 3);
                }
              }
              uVar16 = (long)pcVar15 - (long)pcVar12;
              if (pcVar12 + uVar18 == pcVar15) {
                uVar16 = 0xffffffffffffffff;
              }
              if (uVar16 <= uVar18) {
                uVar18 = uVar16;
              }
              FUN_006fbcf0(&local_80,pcVar12,uVar18);
              FUN_006fd550(param_1,&local_c0);
              uVar17 = 1;
              goto LAB_006fd080;
            }
          }
        }
      }
    }
  }
LAB_006fd07c:
  uVar17 = 0;
LAB_006fd080:
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
  }
  return uVar17;
}


