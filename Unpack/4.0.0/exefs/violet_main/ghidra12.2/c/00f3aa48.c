/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3aa48; name: FUN_00f3aa48
 */


void FUN_00f3aa48(undefined8 param_1,long param_2,long *param_3)

{
  MutexType *pMVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_128 [2];
  long *local_118;
  undefined4 local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined4 local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *pcStack_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined4 local_a0;
  
  uVar10 = (**(code **)(*param_3 + 0x48))(param_3);
  lVar16 = *(long *)(param_2 + 0xb4f0);
  (**(code **)(*param_3 + 0x20))(local_128,param_3);
  local_118 = param_3;
  local_110 = uVar10;
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar12;
  FUN_00cbf5d4(param_1,uVar12,*(undefined8 *)(lVar16 + 8));
  plVar13 = (long *)FUN_00f3afb4(&local_e0,*(undefined8 *)(lVar16 + 8),param_1);
  if (plVar13 == (long *)0x0) {
    local_108 = (long *)0x0;
  }
  else {
    plVar15 = plVar13 + 5;
    do {
      lVar7 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar7 == -1) goto LAB_00f3af64;
    do {
      lVar7 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_108 = plVar13;
    if ((int)lVar7 == -1) goto LAB_00f3af64;
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_00c96b7c(&local_100,local_128);
  local_f0 = local_118;
  local_e8 = local_110;
  nn::os::LockMutex((MutexType *)(lVar16 + 0x3d0));
  local_d0 = (code *)0x0;
  pcStack_c8 = (code *)0x0;
  local_c0 = local_108;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  if (local_108 != (long *)0x0) {
    plVar15 = local_108 + 5;
    do {
      lVar7 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar7 == -1) {
LAB_00f3af64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_00c43ef0(&local_b8,&local_100);
  local_a8 = local_f0;
  local_a0 = local_e8;
  local_e0 = FUN_021a825c;
  local_d8 = FUN_021a8638;
  local_d0 = FUN_021a87b8;
  pcStack_c8 = FUN_021a884c;
  FUN_00dd17e4(lVar16 + 0x360,&local_e0);
  pcVar9 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    pcStack_c8 = (code *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  *(undefined8 *)(lVar16 + 0x3f8) = *(undefined8 *)(lVar16 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar16 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar16 + 0x3d0));
  plVar15 = *(long **)(lVar16 + 0x400);
  plVar14 = *(long **)(lVar16 + 0x408);
  if (plVar15 != plVar14) {
    lVar16 = *plVar15;
    pMVar1 = (MutexType *)(lVar16 + 0x3f0);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar16 + 0x410));
    nn::os::UnlockMutex(pMVar1);
    if (plVar15 + 1 != plVar14) {
      lVar16 = plVar15[1];
      pMVar1 = (MutexType *)(lVar16 + 0x3f0);
      nn::os::LockMutex(pMVar1);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar16 + 0x410));
      nn::os::UnlockMutex(pMVar1);
      for (plVar15 = plVar15 + 2; plVar15 != plVar14; plVar15 = plVar15 + 1) {
        lVar16 = *plVar15;
        pMVar1 = (MutexType *)(lVar16 + 0x3f0);
        nn::os::LockMutex(pMVar1);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar16 + 0x410));
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  puVar8 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_100 + 3);
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
      piVar3 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_e0 = (code *)*puVar8;
        FUN_00c44438(lVar16 + 0x8040,&local_e0);
      }
    }
    else if (sVar4 == 0) goto LAB_00f3ad9c;
  }
  if (local_108 != (long *)0x0) {
    plVar15 = local_108 + 5;
    do {
      lVar16 = *plVar15;
      iVar11 = (int)lVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_00f3af8c;
  }
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 5;
    do {
      lVar16 = *plVar15;
      iVar11 = (int)lVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar16 == 0) {
LAB_00f3af8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_128[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_128[0] + 3);
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
      piVar3 = (int *)((long)local_128[0] + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_e0 = (code *)*local_128[0];
        FUN_00c44438(lVar16 + 0x8040,&local_e0);
      }
    }
    else if (sVar4 == 0) {
LAB_00f3ad9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  iVar11 = (**(code **)(*param_3 + 0x48))(param_3);
  plVar13 = (long *)(param_2 + (long)iVar11 * 8 + 0xb4f8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = *plVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}


