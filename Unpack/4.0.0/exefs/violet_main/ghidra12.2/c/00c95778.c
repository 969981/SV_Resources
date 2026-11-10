/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c95778; name: FUN_00c95778
 */


void FUN_00c95778(long param_1)

{
  char *pcVar1;
  short *psVar2;
  MutexType *pMVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_28;
  
  pcVar1 = (char *)(param_1 + 0x134);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar7) {
      *pcVar1 = '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
    lVar11 = DAT_04866068;
  } while (cVar6 != '\0');
  local_c0 = (undefined8 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00c43ef0(&local_c0,param_1 + 0x98);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  lVar12 = 0;
  if (param_1 != 0) {
    lVar12 = param_1 + 0x28;
  }
  if (local_c0[2] == lVar12) {
    FUN_00c953a8(&local_d0,&local_c0);
  }
  puVar8 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_c0 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) goto LAB_00c9598c;
  }
  nn::os::LockMutex((MutexType *)(lVar11 + 0x3d0));
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00c6c994(&local_a0,&local_d0);
  local_c0 = (undefined8 *)&LAB_027694c0;
  local_b8 = FUN_02769b28;
  local_b0 = &LAB_02769c38;
  puStack_a8 = &LAB_02769c4c;
  FUN_00dd17e4(lVar11 + 0x360,&local_c0);
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined8 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(&local_a0);
  }
  *(undefined8 *)(lVar11 + 0x3f8) = *(undefined8 *)(lVar11 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar11 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x3d0));
  plVar14 = *(long **)(lVar11 + 0x400);
  plVar13 = *(long **)(lVar11 + 0x408);
  if (plVar14 != plVar13) {
    lVar11 = *plVar14;
    pMVar3 = (MutexType *)(lVar11 + 0x3f0);
    nn::os::LockMutex(pMVar3);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar11 + 0x410));
    nn::os::UnlockMutex(pMVar3);
    if (plVar14 + 1 != plVar13) {
      lVar11 = plVar14[1];
      pMVar3 = (MutexType *)(lVar11 + 0x3f0);
      nn::os::LockMutex(pMVar3);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar11 + 0x410));
      nn::os::UnlockMutex(pMVar3);
      for (plVar14 = plVar14 + 2; plVar14 != plVar13; plVar14 = plVar14 + 1) {
        lVar11 = *plVar14;
        pMVar3 = (MutexType *)(lVar11 + 0x3f0);
        nn::os::LockMutex(pMVar3);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar11 + 0x410));
        nn::os::UnlockMutex(pMVar3);
      }
    }
  }
  puVar8 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d0 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_c0 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_c0);
      }
    }
    else if (sVar5 == 0) {
LAB_00c9598c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


