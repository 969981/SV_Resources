/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017aafec; name: FUN_017aafec
 */


void FUN_017aafec(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x400);
  plVar2 = *(long **)(param_1 + 0x408);
  if (plVar3 != plVar2) {
    lVar4 = *plVar3;
    pMVar1 = (MutexType *)(lVar4 + 0x3f0);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x410));
    nn::os::UnlockMutex(pMVar1);
    if (plVar3 + 1 != plVar2) {
      lVar4 = plVar3[1];
      pMVar1 = (MutexType *)(lVar4 + 0x3f0);
      nn::os::LockMutex(pMVar1);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x410));
      nn::os::UnlockMutex(pMVar1);
      for (plVar3 = plVar3 + 2; plVar3 != plVar2; plVar3 = plVar3 + 1) {
        lVar4 = *plVar3;
        pMVar1 = (MutexType *)(lVar4 + 0x3f0);
        nn::os::LockMutex(pMVar1);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x410));
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  return;
}


