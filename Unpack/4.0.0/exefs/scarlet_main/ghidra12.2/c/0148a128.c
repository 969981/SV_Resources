/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148a128; name: FUN_0148a128
 */


undefined4 FUN_0148a128(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x3e0));
    uVar1 = *(undefined4 *)(lVar2 + 0x3d8);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x3e0));
  }
  return uVar1;
}


