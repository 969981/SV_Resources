/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120750; name: FUN_00120750
 */


void FUN_00120750(long param_1)

{
  int iVar1;
  long lVar2;
  MutexType *pMVar3;
  
  pMVar3 = *(MutexType **)(param_1 + 0x78);
  iVar1 = *(int *)(pMVar3 + 0x30);
  *(int *)(pMVar3 + 0x30) = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (lVar2 = FUN_00120220(pMVar3 + 0x28,0), lVar2 < 0)) {
    nn::os::LockMutex(pMVar3);
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(pMVar3 + 0x20));
    nn::os::UnlockMutex(pMVar3);
    return;
  }
  return;
}


