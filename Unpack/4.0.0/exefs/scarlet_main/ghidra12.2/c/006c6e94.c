/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


