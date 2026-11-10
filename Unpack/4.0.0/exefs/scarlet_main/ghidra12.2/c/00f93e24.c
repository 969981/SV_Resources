/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f93e24; name: FUN_00f93e24
 */


void FUN_00f93e24(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *local_98;
  long *local_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  undefined1 auStack_48 [8];
  
  lVar14 = *param_2;
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) goto LAB_00f942d8;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar14;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 5;
    do {
      lVar14 = *plVar3;
      iVar10 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00f942b0;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  pcVar12 = (char *)(**(code **)(*DAT_0485a020 + 0x20))(DAT_0485a020,1);
  puVar9 = PTR_DAT_047d4250;
  puVar8 = PTR_DAT_047d4248;
  puVar7 = PTR_DAT_047d4240;
  if (*pcVar12 == '\0') {
    plVar11 = (long *)FUN_00d44228();
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar13 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar13;
    FUN_00cf9884(&local_88,uVar13,pcVar12);
    plVar11 = local_88;
  }
  plVar3 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  local_88 = (long *)PTR_DAT_047d8b70;
  if (plVar11 != (long *)0x0) {
    local_88 = plVar11 + 6;
  }
  local_88 = (long *)*local_88;
  plVar2 = (long *)PTR_PTR_047d4508;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 7;
  }
  lStack_80 = *plVar2;
  if (plVar11 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = plVar11[8];
  }
  local_70 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_70 = (long *)0x0;
    FUN_00eb0610(&local_68,uVar15,&local_88);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_70 = plVar11;
    FUN_00eb0610(&local_68,uVar15,&local_88);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  local_90 = (long *)FUN_010bf4b8(&local_88,*(undefined8 *)(param_1 + 8),&local_68);
  if (local_90 != (long *)0x0) {
    plVar11 = local_90 + 5;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) goto LAB_00f942d8;
  }
  FUN_00f94300(*(undefined8 *)(param_1 + 0x38),&local_90);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  pcVar12 = (char *)(**(code **)(*DAT_0485a020 + 0x20))(DAT_0485a020,0xb);
  if (*pcVar12 == '\0') {
    plVar11 = (long *)FUN_00d44228();
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar13 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar13;
    FUN_00cf9884(&local_88,uVar13,pcVar12);
    plVar11 = local_88;
  }
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 6;
  }
  local_88 = (long *)*plVar3;
  if (plVar11 != (long *)0x0) {
    plVar4 = plVar11 + 7;
  }
  lStack_80 = *plVar4;
  if (plVar11 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = plVar11[8];
  }
  local_70 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_70 = (long *)0x0;
    FUN_00eb0610(&local_98,uVar15,&local_88);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_70 = plVar11;
    FUN_00eb0610(&local_98,uVar15,&local_88);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (local_98 != (long *)0x0) {
    local_88 = (long *)FUN_010bf4b8(auStack_48,*(undefined8 *)(param_1 + 8),&local_98);
    if (local_88 != (long *)0x0) {
      plVar11 = local_88 + 5;
      do {
        lVar14 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = (int)lVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar14 == -1) {
LAB_00f942d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_00f94308(*(undefined8 *)(param_1 + 0x38),&local_88);
    if (local_88 != (long *)0x0) {
      plVar11 = local_88 + 5;
      do {
        lVar14 = *plVar11;
        iVar10 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00f942b0;
    }
    if (local_98 != (long *)0x0) {
      plVar11 = local_98 + 5;
      do {
        lVar14 = *plVar11;
        iVar10 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00f942b0;
    }
  }
  if (local_90 != (long *)0x0) {
    plVar11 = local_90 + 5;
    do {
      lVar14 = *plVar11;
      iVar10 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00f942b0;
  }
  if (local_68 != (long *)0x0) {
    plVar11 = local_68 + 5;
    do {
      lVar14 = *plVar11;
      iVar10 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_00f942b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


