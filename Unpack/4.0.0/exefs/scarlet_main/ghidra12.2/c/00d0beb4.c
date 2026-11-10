/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0beb4; name: FUN_00d0beb4
 */


void FUN_00d0beb4(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_00d0befc(*(long *)(param_1 + 0x140),param_2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
}


