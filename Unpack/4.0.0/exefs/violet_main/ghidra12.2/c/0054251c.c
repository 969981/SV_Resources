/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054251c; name: FUN_0054251c
 */


void FUN_0054251c(undefined8 *param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_50;
  long *local_48;
  
  FUN_0053f540(&local_50,*param_2);
  if (local_50 == 0) {
    plVar5 = (long *)FUN_0053f478(*param_2);
    plVar7 = *(long **)(*plVar5 + 0x238);
    plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
    plVar5[2] = 0;
    plVar8 = plVar5 + 1;
    *plVar8 = 0;
    puVar4 = PTR_DAT_047cc0d8;
    plVar5[3] = (long)plVar7;
    *plVar5 = (long)(puVar4 + 0x10);
    FUN_006c4254(plVar5 + 4);
    plVar5[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
    nn::os::InitializeEvent((EventType *)(plVar5 + 6),0,0);
    pMVar1 = (MutexType *)(plVar5 + 0xb);
    plVar5[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
    nn::os::InitializeMutex(pMVar1,false,0);
    if (plVar5 == (long *)0x0) {
      *param_1 = 0x20;
      param_1[1] = 0;
      nn::os::LockMutex((MutexType *)&DAT_00000058);
      nn::os::SignalEvent((EventType *)&DAT_00000030);
      nn::os::UnlockMutex((MutexType *)&DAT_00000058);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = plVar5 + 4;
      param_1[1] = plVar5;
      nn::os::LockMutex(pMVar1);
      nn::os::SignalEvent((EventType *)(plVar5 + 6));
      nn::os::UnlockMutex(pMVar1);
      do {
        lVar6 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    FUN_0055239c(param_1);
  }
  if (local_48 != (long *)0x0) {
    plVar5 = local_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


