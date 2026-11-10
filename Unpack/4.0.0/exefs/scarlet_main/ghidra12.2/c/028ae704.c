/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ae704; name: FUN_028ae704
 */


void FUN_028ae704(long param_1)

{
  FUN_0172bf50();
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f0));
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x410));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f0));
  return;
}


