/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ff4a0; name: FUN_015ff4a0
 */


void FUN_015ff4a0(long param_1,undefined4 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
  return;
}


