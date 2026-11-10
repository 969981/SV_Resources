/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


