/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fd984; name: FUN_019fd984
 */


void FUN_019fd984(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    pMVar1 = (MutexType *)(param_1 + 0x170);
    nn::os::LockMutex(pMVar1);
    uVar2 = FUN_010f3a94(param_1);
    if ((uVar2 & 1) == 0) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    *(undefined1 *)(param_1 + 0x168) = 1;
    nn::os::UnlockMutex(pMVar1);
  }
  if (*(int *)(param_1 + 0x1a8) == 2) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
    lVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    *(float *)(param_1 + 0x1ac) =
         *(float *)(param_1 + 0x1ac) + (float)((double)*(long *)(lVar3 + 8) / -1000000000.0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
    if (*(float *)(param_1 + 0x1ac) < 0.0) {
      FUN_019fdb2c(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1b4) == 2) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
    lVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    *(float *)(param_1 + 0x1b8) =
         *(float *)(param_1 + 0x1b8) + (float)((double)*(long *)(lVar3 + 8) / -1000000000.0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
    if (*(float *)(param_1 + 0x1b8) < 0.0) {
      FUN_019fdb60(param_1);
      return;
    }
  }
  return;
}


