/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dad35c; name: FUN_01dad35c
 */


void FUN_01dad35c(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  FUN_029a599c(param_1);
  FUN_029a5ca0(param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
}


