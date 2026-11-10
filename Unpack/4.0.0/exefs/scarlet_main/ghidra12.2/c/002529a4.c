/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002529a4; name: FUN_002529a4
 */


void FUN_002529a4(long param_1,undefined8 *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


