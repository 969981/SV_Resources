/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013146c4; name: FUN_013146c4
 */


void FUN_013146c4(long param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  short *psVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  FUN_00c9e664(&local_70,param_1 + 0xe8);
  if (local_68 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = (long *)local_68[9];
  }
  (**(code **)(*plVar9 + 0x18))(&local_50,plVar9);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  plVar2 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
  }
  if ((long *)local_50[2] == plVar2) {
    FUN_00c9ea00(&local_60,&local_50);
  }
  plVar9 = local_50;
  if (local_50 != (long *)0x0) {
    plVar2 = local_50 + 3;
    do {
      sVar3 = (short)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(short *)plVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *plVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_013148a0;
  }
  puVar6 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    psVar8 = (short *)(local_60 + 3);
    *(undefined8 *)(param_1 + 0x318) = *local_60;
    do {
      sVar3 = *psVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar8,0x10);
      if (bVar5) {
        *psVar8 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_50 = (long *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_50);
      }
    }
    else if (sVar3 == 0) {
LAB_013148a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    plVar9 = local_68 + 5;
    do {
      lVar11 = *plVar9;
      iVar7 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01314a6c;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x60))();
  }
  if (*(char *)(param_1 + 0x321) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    uVar10 = *(undefined8 *)(param_1 + 0x318);
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    plVar9 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar10,*(undefined8 *)(local_48[9] + 0x370));
    *(bool *)(param_1 + 800) = iVar7 == 1;
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        lVar11 = *plVar9;
        iVar7 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
LAB_01314a6c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  }
  return;
}


