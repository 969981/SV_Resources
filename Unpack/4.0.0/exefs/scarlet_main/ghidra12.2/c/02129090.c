/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02129090; name: FUN_02129090
 */


void FUN_02129090(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  nn::os::LockMutex((MutexType *)(param_2 + 0x1c0));
  *(undefined4 *)(param_2 + 0x1b0) = param_3;
  *(undefined4 *)(param_2 + 0x1b4) = param_4;
  *(undefined4 *)(param_2 + 0x1b8) = param_1;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1c0));
  return;
}


