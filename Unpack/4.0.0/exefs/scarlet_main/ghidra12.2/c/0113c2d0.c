/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113c2d0; name: FUN_0113c2d0
 */


void FUN_0113c2d0(long param_1,ulong *param_2,int param_3,long *param_4,char *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  char *pcVar18;
  float fVar19;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *puStack_68;
  long local_60;
  long *local_58;
  
  uVar12 = *(ulong *)(param_1 + 0x758);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar17 = uVar12 - 1 & uVar11;
    }
    else if (uVar11 < uVar12) {
      uVar17 = uVar11;
    }
    else {
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = uVar11 / uVar12;
      }
      uVar17 = uVar11 - uVar17 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x750) + uVar17 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_0113c3f8;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar17) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_0113c3f8;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar17) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0113c404:
  lVar7 = FUN_0113ca5c(param_1,param_2);
  if (lVar7 == 0) {
    return;
  }
  pcVar18 = (char *)param_2[1];
  if (*pcVar18 == '\0') {
    plVar15 = (long *)FUN_00d44228();
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_70,uVar8,pcVar18);
    plVar15 = local_70;
  }
  local_70 = (long *)PTR_DAT_047d8b70;
  if (plVar15 != (long *)0x0) {
    local_70 = plVar15 + 6;
  }
  local_70 = (long *)*local_70;
  plVar14 = (long *)PTR_PTR_047d4508;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 7;
  }
  puStack_68 = (undefined8 *)*plVar14;
  if (plVar15 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = plVar15[8];
  }
  local_58 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar14 = plVar15;
  }
  local_58 = plVar14;
  lVar9 = FUN_0113cb2c((long *)(param_1 + 0x750),&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  lVar10 = FUN_0113ca0c(lVar7);
  *(undefined8 *)(lVar9 + 0x18) =
       *(undefined8 *)(*(long *)(lVar10 + 0x18) + (long)param_3 * 0x10 + 8);
  local_78 = 0xffffffffffffffff;
  pcVar18 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(*param_4 + 0x70) + 0x110),*param_4 + 0x30
                                );
  if ((*pcVar18 != '\0') && (*(long *)(pcVar18 + 8) != 0)) {
    FUN_00f1d9f4(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x6140) + 0x110,&local_78,
                 *(undefined4 *)(*(long *)(pcVar18 + 8) + 0x88));
  }
  *(undefined8 *)(lVar9 + 8) = local_78;
  lVar7 = FUN_0113ca0c(lVar7);
  *(long *)(*(long *)(lVar7 + 0x18) + (long)param_3 * 0x10 + 8) = lVar9;
  *(int *)(lVar9 + 0x20) = param_3;
  lVar7 = *param_4;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar15 = *(long **)(lVar9 + 0x28);
  *(long *)(lVar9 + 0x28) = lVar7;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 5;
    do {
      lVar7 = *plVar14;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*param_5 == '\0') {
    return;
  }
  pcVar18 = (char *)param_2[1];
  local_80 = (long *)0x0;
  if (*pcVar18 == '\0') {
    plVar15 = (long *)FUN_00d44228();
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    if (local_80 != (long *)0x0) {
      lVar7 = *local_80;
      local_80 = plVar15;
      (**(code **)(lVar7 + 0x20))();
      plVar15 = local_80;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_70,uVar8,pcVar18);
    plVar15 = local_80;
    local_80 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    local_80 = local_70;
    plVar15 = local_80;
  }
  local_80 = plVar15;
  puVar2 = (undefined8 *)(param_1 + 0x7f0);
  plVar15 = (long *)(**(code **)(**(long **)(param_1 + 0x7f0) + 0x10))
                              (*(long **)(param_1 + 0x7f0),0x30,8);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  plVar14 = (long *)(param_1 + 0x7b8);
  local_70 = plVar15;
  puStack_68 = puVar2;
  FUN_010473dc(puVar2,plVar15 + 2,&local_80);
  local_60 = CONCAT71(local_60._1_7_,1);
  uVar13 = plVar15[2];
  *plVar15 = 0;
  plVar15[1] = uVar13;
  uVar12 = *(ulong *)(param_1 + 0x7c0);
  if (uVar12 != 0) {
    uVar11 = uVar12 - 1;
    if ((uVar12 & uVar11) == 0) {
      plVar16 = *(long **)(*plVar14 + (uVar11 & uVar13) * 8);
      if (plVar16 == (long *)0x0) goto LAB_0113c7d0;
      do {
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) || ((plVar16[1] & uVar11) != (uVar11 & uVar13)))
        goto LAB_0113c7d0;
      } while (plVar16[2] != uVar13);
    }
    else {
      uVar11 = uVar13;
      if (uVar12 <= uVar13) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar13 / uVar12;
        }
        uVar11 = uVar13 - uVar11 * uVar12;
      }
      plVar16 = *(long **)(*plVar14 + uVar11 * 8);
      if (plVar16 == (long *)0x0) goto LAB_0113c7d0;
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_0113c7d0;
        uVar17 = plVar16[1];
        if (uVar12 <= uVar17) {
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = uVar17 / uVar12;
          }
          uVar17 = uVar17 - uVar5 * uVar12;
        }
        if (uVar17 != uVar11) goto LAB_0113c7d0;
      } while (plVar16[2] != uVar13);
    }
    local_70 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_0113d610(&puStack_68,plVar15);
    }
    goto LAB_0113c8a0;
  }
LAB_0113c7d0:
  fVar19 = (float)(*(long *)(param_1 + 0x810) + 1);
  if ((uVar12 == 0) || (*(float *)(param_1 + 0x818) * (float)uVar12 < fVar19)) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar13 = (ulong)(fVar19 / *(float *)(param_1 + 0x818));
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    FUN_00db35b8(plVar14,uVar13);
    uVar12 = *(ulong *)(param_1 + 0x7c0);
    uVar13 = plVar15[1];
  }
  uVar11 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar13 = uVar12 - 1 & uVar13;
  }
  else if (uVar12 <= uVar13) {
    uVar17 = 0;
    if (uVar12 != 0) {
      uVar17 = uVar13 / uVar12;
    }
    uVar13 = uVar13 - uVar17 * uVar12;
  }
  plVar16 = *(long **)(*plVar14 + uVar13 * 8);
  if (plVar16 == (long *)0x0) {
    *plVar15 = *(long *)(param_1 + 0x7e8);
    *(long **)(param_1 + 0x7e8) = plVar15;
    *(long *)(*(long *)(param_1 + 0x7b8) + uVar13 * 8) = param_1 + 0x7e8;
    if (*plVar15 != 0) {
      uVar13 = *(ulong *)(*plVar15 + 8);
      if (uVar11 < 2) {
        uVar13 = uVar13 & uVar12 - 1;
      }
      else if (uVar12 <= uVar13) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar13 / uVar12;
        }
        uVar13 = uVar13 - uVar11 * uVar12;
      }
      plVar16 = (long *)(*plVar14 + uVar13 * 8);
      goto LAB_0113c88c;
    }
  }
  else {
    *plVar15 = *plVar16;
LAB_0113c88c:
    *plVar16 = (long)plVar15;
  }
  *(long *)(param_1 + 0x810) = *(long *)(param_1 + 0x810) + 1;
  local_70 = (long *)0x0;
LAB_0113c8a0:
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  FUN_0113d820(param_1,param_2);
  return;
LAB_0113c3f8:
  FUN_0113cf30(param_1,param_2);
  goto LAB_0113c404;
}


