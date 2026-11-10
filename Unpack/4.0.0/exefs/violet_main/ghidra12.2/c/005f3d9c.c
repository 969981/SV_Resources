/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f3d9c; name: FUN_005f3d9c
 */


void FUN_005f3d9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_24;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    local_24 = (undefined4)param_1[2];
    nn::os::LockMutex((MutexType *)(lVar5 + 0x40));
                    /* try { // try from 005f3dd0 to 005f3dd7 has its CatchHandler @ 005f3e38 */
    FUN_005f43fc(lVar5 + 0x20,&local_24);
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x40));
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


