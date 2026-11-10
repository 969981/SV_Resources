/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dad254; name: FUN_01dad254
 */


void FUN_01dad254(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  FUN_020e357c(param_1);
  FUN_020e38e4(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x140) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


