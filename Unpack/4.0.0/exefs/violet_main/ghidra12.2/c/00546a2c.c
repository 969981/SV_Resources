/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00546a2c; name: FUN_00546a2c
 */


void FUN_00546a2c(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x168);
  nn::os::LockMutex(pMVar1);
  FUN_01ea06c8(param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x188) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x140));
  plVar6 = *(long **)(param_1 + 0x128);
  if (plVar6 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    plVar2 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::UnlockMutex(pMVar1);
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar5 = *(long *)(param_1 + 0x1f8);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x200);
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        lVar7 = lVar7 + -0x20;
        FUN_005744a0(lVar7);
      } while (lVar5 != lVar7);
      lVar7 = *(long *)(param_1 + 0x1f8);
    }
    *(long *)(param_1 + 0x200) = lVar5;
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))
              (*(long **)(param_1 + 0x210),lVar7,*(long *)(param_1 + 0x208) - lVar7,8);
  }
  lVar5 = *(long *)(param_1 + 0x1d8);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x1e0);
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        lVar7 = lVar7 + -0x28;
        FUN_00573390(lVar7);
      } while (lVar5 != lVar7);
      lVar7 = *(long *)(param_1 + 0x1d8);
    }
    *(long *)(param_1 + 0x1e0) = lVar5;
    (**(code **)(**(long **)(param_1 + 0x1f0) + 0x18))
              (*(long **)(param_1 + 0x1f0),lVar7,*(long *)(param_1 + 0x1e8) - lVar7,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1b0));
  FUN_0054d430(param_1 + 400,*(undefined8 *)(param_1 + 0x198));
  nn::os::FinalizeMutex(pMVar1);
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x140));
  plVar6 = *(long **)(param_1 + 0x138);
  if (plVar6 == (long *)0x0) {
LAB_00546ba8:
    plVar6 = *(long **)(param_1 + 0x128);
  }
  else {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00546ba8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x128);
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00549ecc(param_1 + 0xb0);
  FUN_0054a034(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 0x18);
      goto joined_r0x00546c38;
    }
  }
  plVar6 = *(long **)(param_1 + 0x18);
joined_r0x00546c38:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


