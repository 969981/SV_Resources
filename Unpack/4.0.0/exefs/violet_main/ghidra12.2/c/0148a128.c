/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


