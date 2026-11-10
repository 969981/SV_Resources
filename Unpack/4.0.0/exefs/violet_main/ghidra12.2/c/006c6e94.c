/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6e94; name: FUN_006c6e94
 */


void FUN_006c6e94(int *param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  *param_1 = *param_1 + -1;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 10));
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


