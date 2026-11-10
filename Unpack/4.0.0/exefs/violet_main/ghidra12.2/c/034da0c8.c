/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034da0c8; name: FUN_034da0c8
 */


int FUN_034da0c8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x70));
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x70));
  return iVar1;
}


