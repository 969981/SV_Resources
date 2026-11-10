/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012759f4; name: FUN_012759f4
 */


void FUN_012759f4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 *local_50 [2];
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  pcVar11 = (code *)*param_2;
  FUN_00efb870(local_60,param_3);
  local_68 = (long *)0x0;
  if (*param_4 == '\0') {
    plVar9 = (long *)FUN_00d44228();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (local_68 != (long *)0x0) {
      lVar10 = *local_68;
      local_68 = plVar9;
      (**(code **)(lVar10 + 0x20))();
      plVar9 = local_68;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_40,uVar8,param_4);
    plVar9 = local_68;
    local_68 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    local_68 = local_40;
    plVar9 = local_68;
  }
  local_68 = plVar9;
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_00ca1ea4(&local_40,local_60);
  (*pcVar11)(local_50,&local_40,&local_68);
  plVar9 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 3;
    do {
      sVar4 = (short)*plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(short *)plVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *plVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar4 == 0) goto LAB_01275b88;
  }
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_010eb1d0(&local_40,local_50);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_01275eb8(param_1 + 8,&local_40);
  plVar9 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 3;
    do {
      sVar4 = (short)*plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(short *)plVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *plVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar4 == 0) goto LAB_01275b88;
  }
  if (local_50[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50[0] + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = (long *)*local_50[0];
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar4 == 0) goto LAB_01275b88;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60[0] + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = (long *)*local_60[0];
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar4 == 0) {
LAB_01275b88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


