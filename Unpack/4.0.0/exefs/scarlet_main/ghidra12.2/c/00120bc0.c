/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120bc0; name: FUN_00120bc0
 */


void FUN_00120bc0(long param_1,int param_2)

{
  MutexType *pMVar1;
  
  if (param_2 < 1) {
    return;
  }
  pMVar1 = *(MutexType **)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  *(int *)(pMVar1 + 0x28) = *(int *)(pMVar1 + 0x28) + param_2;
  if (param_2 == 1) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(pMVar1 + 0x20));
  }
  else {
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(pMVar1 + 0x20));
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


