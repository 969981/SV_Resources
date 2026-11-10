/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e54fb8; name: FUN_02e54fb8
 */


void FUN_02e54fb8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  if (*(char *)(param_1 + 0x52) == '\0') {
    FUN_0135e6c4(param_1 + -0x20);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


