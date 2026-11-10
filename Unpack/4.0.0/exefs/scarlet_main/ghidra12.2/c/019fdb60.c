/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fdb60; name: FUN_019fdb60
 */


void FUN_019fdb60(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  *(undefined8 *)(param_1 + 0x1b0) = 100;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
  return;
}


