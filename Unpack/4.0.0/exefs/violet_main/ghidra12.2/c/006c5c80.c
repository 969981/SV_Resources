/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c5c80; name: FUN_006c5c80
 */


bool FUN_006c5c80(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = nn::os::TryLockMutex((MutexType *)(param_1 + 0xc0));
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
    if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(long *)(param_1 + 0x10) == param_1 + 8))
    {
      bVar1 = *(int *)(param_1 + 0x98) == 0;
    }
    else {
      bVar1 = false;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xc0));
  }
  return bVar1;
}


