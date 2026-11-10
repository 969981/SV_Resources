/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5b8c; name: FUN_006c5b8c
 */


void FUN_006c5b8c(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  int iVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  FUN_006c6ed4(param_1 + 0xe0);
  pMVar1 = (MutexType *)(param_1 + 0xc0);
  uVar4 = nn::os::TryLockMutex(pMVar1);
  if ((uVar4 & 1) != 0) {
    pMVar2 = (MutexType *)(param_1 + 0xa0);
    nn::os::LockMutex(pMVar2);
    if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(long *)(param_1 + 0x10) == param_1 + 8))
    {
      iVar3 = *(int *)(param_1 + 0x98);
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
      if (iVar3 == 0) {
        nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x108));
        nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe8));
        nn::os::FinalizeMutex(pMVar1);
        nn::os::FinalizeMutex(pMVar2);
        FUN_006c44d0(param_1 + 0x50);
        nn::os::FinalizeEvent((EventType *)(param_1 + 0x28));
        return;
      }
    }
    else {
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


