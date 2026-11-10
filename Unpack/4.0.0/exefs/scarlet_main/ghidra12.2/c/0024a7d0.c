/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024a7d0; name: FUN_0024a7d0
 */


long * FUN_0024a7d0(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return param_1 + 0xb;
}


