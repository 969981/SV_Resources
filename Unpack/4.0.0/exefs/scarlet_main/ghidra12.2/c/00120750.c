/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


