/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


