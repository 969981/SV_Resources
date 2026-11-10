/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343fcd0; name: FUN_0343fcd0
 */


void FUN_0343fcd0(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  *(undefined1 *)((long)param_1 + 0xc3) = 1;
  (**(code **)(*param_1 + 0xc0))(param_1);
  FUN_0343e98c(param_1);
  if (param_1[1] != 0) {
    lVar2 = param_1[10];
    pMVar1 = (MutexType *)(lVar2 + 0x220);
    nn::os::LockMutex(pMVar1);
    param_1[1] = 0;
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar2 + 0x240));
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


