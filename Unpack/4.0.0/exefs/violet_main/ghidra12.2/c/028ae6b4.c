/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


