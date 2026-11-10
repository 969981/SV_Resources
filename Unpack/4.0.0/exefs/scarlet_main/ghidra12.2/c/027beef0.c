/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027beef0; name: FUN_027beef0
 */


void FUN_027beef0(long param_1)

{
  FUN_027bf110();
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x170));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x148));
  FUN_027bf154(param_1);
  return;
}


