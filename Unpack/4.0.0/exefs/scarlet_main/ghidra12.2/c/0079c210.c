/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079c210; name: FUN_0079c210
 */


void FUN_0079c210(long *param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x1f);
  nn::os::LockMutex(pMVar1);
  if (*(char *)((long)param_1 + 0x24d) == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
    if ((uVar2 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x4a));
      (**(code **)(*(long *)param_1[0x23] + 0x18))((long *)param_1[0x23],param_1[0x4e]);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a));
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    (**(code **)(*(long *)param_1[0x23] + 0x10))();
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


