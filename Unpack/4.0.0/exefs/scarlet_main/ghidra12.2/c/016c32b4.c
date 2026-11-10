/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c32b4; name: FUN_016c32b4
 */


void FUN_016c32b4(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_016c32fc(*(long *)(param_1 + 0x180),param_2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}


