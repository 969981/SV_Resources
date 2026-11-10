/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01581408; name: FUN_01581408
 */


void FUN_01581408(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x3e0));
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x400);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e0));
  return;
}


