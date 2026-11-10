/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


