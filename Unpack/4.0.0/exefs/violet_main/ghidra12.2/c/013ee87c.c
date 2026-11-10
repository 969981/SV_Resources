/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013ee87c; name: FUN_013ee87c
 */


void FUN_013ee87c(long param_1)

{
  int iVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x100));
  iVar1 = *(int *)(param_1 + 0x120) + -1;
  if (*(int *)(param_1 + 0x120) < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x120) = iVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
  for (lVar2 = *(long *)(param_1 + 0x68); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x68)) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x100));
    iVar1 = *(int *)(lVar2 + 0x120) + -1;
    if (*(int *)(lVar2 + 0x120) < 1) {
      iVar1 = 0;
    }
    *(int *)(lVar2 + 0x120) = iVar1;
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x100));
  }
  return;
}


