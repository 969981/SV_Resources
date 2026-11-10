/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5ed30; name: FUN_00e5ed30
 */


void FUN_00e5ed30(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x148);
  uVar2 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  nn::os::LockMutex(pMVar1);
  do {
    uVar2 = FUN_027bf4c4(param_1);
  } while ((uVar2 & 1) != 0);
  nn::os::UnlockMutex(pMVar1);
  return;
}


