/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


