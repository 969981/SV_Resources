/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080ac0c; name: FUN_0080ac0c
 */


void FUN_0080ac0c(undefined8 param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))(param_1);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x18));
  return;
}


