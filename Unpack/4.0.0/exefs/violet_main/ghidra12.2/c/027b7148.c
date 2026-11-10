/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b7148; name: FUN_027b7148
 */


byte * FUN_027b7148(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  char *__s;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  long *local_40;
  long *local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  pbVar8 = (byte *)(param_1 + 0x48);
  bVar3 = *pbVar8;
  if ((bVar3 & 1) == 0) {
    nn::os::UnlockMutex(pMVar1);
    if (bVar3 >> 1 != 0) {
      return pbVar8;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x50);
    nn::os::UnlockMutex(pMVar1);
    if (lVar6 != 0) {
      return pbVar8;
    }
  }
  FUN_002104e8(&local_40,param_1 + 0x88);
  lVar6 = (**(code **)(*local_40 + 0x38))();
  __s = (char *)(lVar6 + 0x51);
  if ((*(byte *)(lVar6 + 0x50) & 1) != 0) {
    __s = *(char **)(lVar6 + 0x60);
  }
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::LockMutex(pMVar1);
  sVar7 = strlen(__s);
                    /* try { // try from 027b7214 to 027b721f has its CatchHandler @ 027b7240 */
  FUN_01f77cc0(pbVar8,__s,sVar7);
  nn::os::UnlockMutex(pMVar1);
  return pbVar8;
}


