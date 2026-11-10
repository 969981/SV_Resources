/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c3318; name: FUN_016c3318
 */


undefined4 FUN_016c3318(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
  uVar1 = *(undefined4 *)(param_1 + 0x398);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  return uVar1;
}


