/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013eda3c; name: FUN_013eda3c
 */


void FUN_013eda3c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  MutexType *pMVar2;
  undefined8 *puVar3;
  size_t __n;
  int iVar4;
  long lVar5;
  undefined8 *__dest;
  
  pMVar2 = (MutexType *)(param_1 + 0xe0);
  nn::os::LockMutex(pMVar2);
  __dest = *(undefined8 **)(param_1 + 0xa8);
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  if ((__dest != puVar3) && ((long *)*__dest != param_2)) {
    do {
      if (puVar3 + -1 == __dest) {
        __dest = puVar3;
        goto LAB_013edaa0;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((long *)*puVar1 != param_2);
  }
LAB_013edaa0:
  if (puVar3 == __dest) {
    nn::os::UnlockMutex(pMVar2);
    return;
  }
  __n = (long)puVar3 - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(size_t *)(param_1 + 0xb0) = (long)__dest + __n;
  (**(code **)(*param_2 + 0x18))(param_2,0);
  nn::os::UnlockMutex(pMVar2);
  iVar4 = (**(code **)*param_2)(param_2);
  if (0 < iVar4) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x100));
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) - iVar4;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
    for (lVar5 = *(long *)(param_1 + 0x68); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x68)) {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x100));
      *(int *)(lVar5 + 0x120) = *(int *)(lVar5 + 0x120) - iVar4;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x100));
    }
  }
  return;
}


