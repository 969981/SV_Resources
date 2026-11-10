/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034414d8; name: FUN_034414d8
 */


void FUN_034414d8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e6ee0;
  *param_1 = (long)(PTR_DAT_047e6ec0 + 0x10);
  param_1[0x55] = (long)(puVar1 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x51));
  *param_1 = (long)(PTR_DAT_047e6eb8 + 0x10);
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x48));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x44));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x41));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d));
  return;
}


