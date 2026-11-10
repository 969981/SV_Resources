/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133bb3c; name: FUN_0133bb3c
 */


void FUN_0133bb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  FUN_010106e4(param_1 + 0x208,&local_18,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


