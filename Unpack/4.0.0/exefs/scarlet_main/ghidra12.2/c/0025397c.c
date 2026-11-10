/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025397c; name: FUN_0025397c
 */


void FUN_0025397c(undefined8 param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 8));
  FUN_01e9fb38(param_1,param_2 + 0x28);
  nn::os::UnlockMutex((MutexType *)(param_2 + 8));
  return;
}


