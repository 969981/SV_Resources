/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270963c; name: FUN_0270963c
 */


void FUN_0270963c(long param_1)

{
  MutexType *pMVar1;
  ConditionVariableType *pCVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x70);
  pMVar1 = (MutexType *)(lVar4 + 0x100);
  nn::os::LockMutex(pMVar1);
  if ((*(int *)(lVar4 + 0x120) != 0) && (*(int *)(lVar4 + 0x120) != 0)) {
    pCVar2 = (ConditionVariableType *)(lVar4 + 0xf8);
    nn::os::WaitConditionVariable(pCVar2,pMVar1);
    if (*(int *)(lVar4 + 0x120) != 0) {
      nn::os::WaitConditionVariable(pCVar2,pMVar1);
      iVar3 = *(int *)(lVar4 + 0x120);
      while (iVar3 != 0) {
        nn::os::WaitConditionVariable(pCVar2,pMVar1);
        iVar3 = *(int *)(lVar4 + 0x120);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


