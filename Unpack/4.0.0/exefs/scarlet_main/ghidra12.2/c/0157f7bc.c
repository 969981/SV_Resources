/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157f7bc; name: FUN_0157f7bc
 */


undefined8 FUN_0157f7bc(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if ((*(long **)(param_1 + 0x180) == (long *)0x0) || (**(long **)(param_1 + 0x180) != *param_2)) {
    uVar1 = 0;
  }
  else {
    FUN_0157f96c(param_1 + 0x80);
    uVar1 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return uVar1;
}


