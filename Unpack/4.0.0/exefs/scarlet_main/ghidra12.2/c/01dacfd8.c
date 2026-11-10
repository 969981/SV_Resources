/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dacfd8; name: FUN_01dacfd8
 */


void FUN_01dacfd8(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  FUN_029a07c8(param_1 + 8,param_2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return;
}


