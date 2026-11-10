/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024d780; name: FUN_0024d780
 */


void FUN_0024d780(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1f0));
  if (*(long *)(param_2 + 0x490) == 0) {
    FUN_0024e1b0(&local_40,param_2 + 0x30);
    uVar2 = *(undefined8 *)(local_40 + 8);
    lVar5 = *(long *)(local_40 + 0x10);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(param_2 + 0x498);
    *(undefined8 *)(param_2 + 0x490) = uVar2;
    *(long *)(param_2 + 0x498) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 1;
      do {
        lVar5 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar5 = *(long *)(param_2 + 0x498);
    *param_1 = *(long *)(param_2 + 0x490);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    *param_1 = *(long *)(param_2 + 0x490);
    lVar5 = *(long *)(param_2 + 0x498);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f0));
  return;
}


