/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120ae0; name: FUN_00120ae0
 */


bool FUN_00120ae0(long param_1,uint param_2)

{
  int iVar1;
  MutexType *pMVar2;
  
  pMVar2 = *(MutexType **)(param_1 + 0x78);
  if (param_2 == 0) {
    nn::os::LockMutex(pMVar2);
    iVar1 = *(int *)(pMVar2 + 0x28);
  }
  else {
    if (param_2 == 0xffffffff) {
      nn::os::LockMutex(pMVar2);
      iVar1 = *(int *)(pMVar2 + 0x28);
      if (iVar1 == 0) {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(pMVar2 + 0x20),pMVar2);
          iVar1 = *(int *)(pMVar2 + 0x28);
        } while (iVar1 == 0);
      }
LAB_00120b98:
      *(int *)(pMVar2 + 0x28) = iVar1 + -1;
      nn::os::UnlockMutex(pMVar2);
      return true;
    }
    nn::os::LockMutex(pMVar2);
    do {
      iVar1 = *(int *)(pMVar2 + 0x28);
      if (iVar1 != 0) goto LAB_00120b98;
      iVar1 = nn::os::TimedWaitConditionVariable(pMVar2 + 0x20,pMVar2,(ulong)param_2 * 1000000);
    } while (iVar1 != 0);
    iVar1 = *(int *)(pMVar2 + 0x28);
  }
  if (iVar1 != 0) {
    *(int *)(pMVar2 + 0x28) = iVar1 + -1;
  }
  nn::os::UnlockMutex(pMVar2);
  return iVar1 != 0;
}


