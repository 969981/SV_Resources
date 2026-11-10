/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


