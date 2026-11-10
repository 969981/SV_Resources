/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148a0c0; name: FUN_0148a0c0
 */


undefined4 FUN_0148a0c0(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  if ((*(long **)(param_1 + 0x140) == (long *)0x0) || (**(long **)(param_1 + 0x140) != *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0148a128();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return uVar1;
}


