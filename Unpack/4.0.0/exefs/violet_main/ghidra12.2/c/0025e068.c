/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025e068; name: FUN_0025e068
 */


void FUN_0025e068(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 200));
  if (*(long *)(param_2 + 0xb8) == 0) {
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
      lVar4 = param_2 + 0x59;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x68);
    }
                    /* try { // try from 0025e0ec to 0025e0f3 has its CatchHandler @ 0025e1b8 */
    (**(code **)(**(long **)(param_2 + 0x110) + 0x40))
              (&local_40,*(long **)(param_2 + 0x110),param_2 + 0x20,param_2 + 0x10,lVar4,
               param_2 + 0x78);
    plVar1 = local_38;
    lVar4 = local_40;
    local_40 = 0;
    local_38 = (long *)0x0;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 8) = 1;
    }
    plVar5 = *(long **)(param_2 + 0xc0);
    *(long *)(param_2 + 0xb8) = lVar4;
    *(long **)(param_2 + 0xc0) = plVar1;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar4 = *(long *)(param_2 + 0xc0);
    *param_1 = *(long *)(param_2 + 0xb8);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    *param_1 = *(long *)(param_2 + 0xb8);
    lVar4 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 200));
  return;
}


