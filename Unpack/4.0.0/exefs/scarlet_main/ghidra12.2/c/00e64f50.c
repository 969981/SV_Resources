/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e64f50; name: FUN_00e64f50
 */


void FUN_00e64f50(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  SemaphoreType *pSVar3;
  MutexType *pMVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  SemaphoreType *pSStack_a8;
  
  plVar1 = (long *)(param_1 + 0x148);
  *(int *)PTR_DAT_047e0da0 = 1 - *(int *)PTR_DAT_047e0da0;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00e64fa4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00e64fa4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00e64fa4:
  lVar12 = param_1 + (ulong)*(uint *)(param_1 + 0x140) * 0x38;
  lVar10 = *(long *)(lVar12 + 0x28);
  lVar12 = *(long *)(lVar12 + 0x30);
  pLVar2 = (LightEventType *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent(pLVar2);
  pSVar3 = (SemaphoreType *)(param_1 + 0x168);
  if ((ulong)(lVar12 - lVar10 >> 3) < 0x4b0) {
    uVar11 = nn::os::TryAcquireSemaphore(pSVar3);
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  else {
    nn::os::AcquireSemaphore(pSVar3);
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00e65000;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00e65000;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00e65000:
  iVar5 = 0;
  if (*(int *)(param_1 + 0x140) + 1U < 4) {
    iVar5 = *(int *)(param_1 + 0x140) + 1;
  }
  lVar10 = *(long *)(param_1 + 0x160);
  *(int *)(param_1 + 0x140) = iVar5;
  uVar6 = 0;
  if (iVar5 + 1U < 4) {
    uVar6 = iVar5 + 1;
  }
  nn::os::LockMutex((MutexType *)(lVar10 + 0x3d0));
  local_d0 = &LAB_027109b0;
  local_c8 = FUN_02baf134;
  local_c0 = &LAB_02baf138;
  puStack_b8 = &LAB_02baf144;
  local_b0 = param_1 + (ulong)uVar6 * 0x38 + 0x28;
  pSStack_a8 = pSVar3;
  FUN_00dd17e4(lVar10 + 0x360,&local_d0);
  pcVar9 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  *(undefined8 *)(lVar10 + 0x3f8) = *(undefined8 *)(lVar10 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x3d0));
  plVar14 = *(long **)(lVar10 + 0x400);
  plVar13 = *(long **)(lVar10 + 0x408);
  if (plVar14 != plVar13) {
    lVar10 = *plVar14;
    pMVar4 = (MutexType *)(lVar10 + 0x3f0);
    nn::os::LockMutex(pMVar4);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
    nn::os::UnlockMutex(pMVar4);
    if (plVar14 + 1 != plVar13) {
      lVar10 = plVar14[1];
      pMVar4 = (MutexType *)(lVar10 + 0x3f0);
      nn::os::LockMutex(pMVar4);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
      nn::os::UnlockMutex(pMVar4);
      for (plVar14 = plVar14 + 2; plVar14 != plVar13; plVar14 = plVar14 + 1) {
        lVar10 = *plVar14;
        pMVar4 = (MutexType *)(lVar10 + 0x3f0);
        nn::os::LockMutex(pMVar4);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
        nn::os::UnlockMutex(pMVar4);
      }
    }
  }
  if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x110)) {
    lVar10 = param_1 + (ulong)*(uint *)(param_1 + 0x140) * 0x38;
    FUN_00e665d0(lVar10 + 0x28,*(undefined8 *)(lVar10 + 0x30));
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x108);
  }
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  return;
}


