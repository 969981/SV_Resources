/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6ed4; name: FUN_006c6ed4
 */


void FUN_006c6ed4(int *param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  if (0 < *param_1) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 10),pMVar1);
    } while (0 < *param_1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


