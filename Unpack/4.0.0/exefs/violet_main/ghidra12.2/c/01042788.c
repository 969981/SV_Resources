/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01042788; name: FUN_01042788
 */


void FUN_01042788(long param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  char *__s;
  char *__s_00;
  long *local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  plVar18 = *(long **)(param_1 + 0x1b8);
  plVar17 = *(long **)(param_1 + 0x1c0);
  if ((plVar18 != plVar17) && (*(long *)*plVar18 != *param_2)) {
    do {
      plVar18 = plVar18 + 4;
      if (plVar17 == plVar18) {
        plVar18 = plVar17;
        goto LAB_010427f0;
      }
    } while (*(long *)*plVar18 != *param_2);
  }
LAB_010427f0:
  if (plVar17 == plVar18) {
    return;
  }
  plVar17 = *(long **)(*plVar18 + 0x20);
  plVar19 = *(long **)(*plVar18 + 0x28);
  if (plVar17 != plVar19) {
    do {
      iVar5 = *(int *)(*(long *)(*plVar17 + 0x20) + 0x50);
      iVar6 = iVar5 + -1;
      *(int *)(*(long *)(*plVar17 + 0x20) + 0x50) = iVar6;
      if (iVar6 == 0 || iVar5 < 1) {
        FUN_01042f28(param_1 + 0x1f8,*plVar17);
        lVar20 = *plVar17;
        __s = *(char **)(lVar20 + 8);
        sVar11 = strlen(__s);
        if (sVar11 != 0) {
          uVar13 = sVar11 - 1;
          if (2 < uVar13) {
            uVar13 = 3;
          }
          if ((*__s == 'v') &&
             (((uVar13 == 0 ||
               ((__s[1] == 'i' &&
                ((uVar13 == 1 || ((__s[2] == 's' && ((uVar13 == 2 || (__s[3] == '_')))))))))) &&
              (uVar13 == 3)))) {
            __s_00 = (char *)param_2[1];
            sVar12 = strlen(__s_00);
            do {
              if ((sVar11 == 0) || (sVar12 == 0)) {
                if (sVar12 == 0) {
                  FUN_0118eed0(&local_70,lVar20);
                  plVar8 = (long *)CONCAT44(uStack_6c,local_70);
                  local_90 = (long *)puVar1;
                  if (plVar8 != (long *)0x0) {
                    local_90 = plVar8 + 6;
                  }
                  local_90 = (long *)*local_90;
                  plVar2 = (long *)PTR_PTR_047d4508;
                  if (plVar8 != (long *)0x0) {
                    plVar2 = plVar8 + 7;
                  }
                  lStack_88 = *plVar2;
                  if (plVar8 == (long *)0x0) {
                    local_80 = 0;
                  }
                  else {
                    local_80 = plVar8[8];
                    local_78 = (long *)0x0;
                    (**(code **)(*plVar8 + 0x18))(plVar8);
                  }
                  local_78 = plVar8;
                  FUN_01042f28(param_1 + 0x1f8,&local_90);
                  if (local_78 != (long *)0x0) {
                    (**(code **)(*local_78 + 0x20))();
                  }
                  if ((long *)CONCAT44(uStack_6c,local_70) != (long *)0x0) {
                    (**(code **)(*(long *)CONCAT44(uStack_6c,local_70) + 0x20))();
                  }
                }
                break;
              }
              lVar10 = sVar11 - 1;
              sVar11 = sVar11 - 1;
              lVar9 = sVar12 - 1;
              sVar12 = sVar12 - 1;
            } while (__s[lVar10] == __s_00[lVar9]);
          }
        }
      }
      plVar17 = plVar17 + 4;
    } while (plVar17 != plVar19);
  }
  FUN_01042bd0(param_1 + 0x1b8,plVar18);
  FUN_0118d660(&local_90,param_2);
  plVar18 = local_90;
  if (local_90 != (long *)0x0) {
    puVar1 = (ulong *)(local_90 + 6);
  }
  uVar13 = *puVar1;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
  }
  uVar14 = *(ulong *)(param_1 + 0x200);
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & uVar13;
    }
    else if (uVar13 < uVar14) {
      uVar16 = uVar13;
    }
    else {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar13 / uVar14;
      }
      uVar16 = uVar13 - uVar16 * uVar14;
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar13) {
            if (plVar17[2] == uVar13) goto LAB_01042b10;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_01042a20;
          plVar17 = (long *)*plVar17;
          plVar19 = (long *)0x0;
        } while (plVar17 != (long *)0x0);
        goto LAB_01042b14;
      }
      do {
        uVar15 = plVar17[1];
        if (uVar15 == uVar13) {
          if (plVar17[2] == uVar13) goto LAB_01042b10;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar7 * uVar14;
          }
          if (uVar15 != uVar16) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
LAB_01042a20:
  plVar19 = (long *)0x0;
LAB_01042b14:
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar19 != (long *)0x0) {
    local_70 = 0;
    local_68 = *(int *)((long)plVar19 + 0x44);
    iStack_64 = (int)plVar19[8];
    piVar3 = &local_68;
    if (-1 < *(int *)((long)plVar19 + 0x44)) {
      piVar3 = &local_70;
    }
    piVar4 = &iStack_64;
    if ((int)plVar19[8] < 1) {
      piVar4 = piVar3;
    }
    if (*(int *)((long)plVar19 + 0x4c) != *piVar4) {
      *(int *)((long)plVar19 + 0x4c) = *piVar4;
      *(undefined1 *)((long)plVar19 + 0x54) = 1;
    }
  }
  FUN_01042c84(param_1 + 0x150,param_2);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  return;
LAB_01042b10:
  plVar19 = plVar17 + 6;
  goto LAB_01042b14;
}


