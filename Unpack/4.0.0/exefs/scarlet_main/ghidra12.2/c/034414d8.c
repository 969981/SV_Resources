/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


