/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080a7b8; name: FUN_0080a7b8
 */


bool FUN_0080a7b8(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return lVar1 != 0;
}


