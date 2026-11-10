/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ae6b4; name: FUN_028ae6b4
 */


void FUN_028ae6b4(long param_1)

{
  FUN_0172bf50();
  nn::os::LockMutex((MutexType *)(param_1 + 0x558));
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x578));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x558));
  FUN_028ae704(*(undefined8 *)(param_1 + 0x460));
  FUN_028ae704(*(undefined8 *)(param_1 + 0x468));
  FUN_028ae704(*(undefined8 *)(param_1 + 0x470));
  return;
}


