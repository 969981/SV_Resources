/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02232200; name: FUN_02232200
 */


void FUN_02232200(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x598));
  *(int *)(param_1 + 0x594) = *(int *)(param_1 + 0x594) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x598));
  return;
}


