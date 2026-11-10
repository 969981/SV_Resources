/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079af14; name: FUN_0079af14
 */


void FUN_0079af14(long param_1)

{
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x10))();
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
    (**(code **)(**(long **)(param_1 + 0x120) + 0x10))();
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
    (**(code **)(**(long **)(param_1 + 0x118) + 0x10))();
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
  }
  if (*(long *)(param_1 + 0x270) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x250));
  (**(code **)(**(long **)(param_1 + 0x270) + 0x10))();
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x250));
  return;
}


