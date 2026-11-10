/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a544c; name: FUN_007a544c
 */


void FUN_007a544c(long param_1,undefined2 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x80) = param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return;
}


