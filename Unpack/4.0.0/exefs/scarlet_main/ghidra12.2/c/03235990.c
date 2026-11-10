/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03235990; name: FUN_03235990
 */


void FUN_03235990(MutexType *param_1)

{
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x40));
  nn::os::FinalizeMutex(param_1 + 0x20);
  nn::os::FinalizeMutex(param_1);
  return;
}


