/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343f3b8; name: FUN_0343f3b8
 */


undefined8 FUN_0343f3b8(long param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  *param_2 = 0;
  *param_3 = 0;
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_0343f260(param_1,param_3);
  *param_2 = lVar3;
  if ((lVar3 != 0) || (*(char *)(param_1 + 0xc3) != '\0')) goto LAB_0343f40c;
  if (*(char *)(param_1 + 0x69) != '\0') {
    lVar3 = FUN_0343f260(param_1,param_3);
    *param_2 = lVar3;
    if (lVar3 != 0) goto LAB_0343f40c;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x50) + 0x58))(*(long **)(param_1 + 0x50),param_1);
    if ((uVar5 & 1) == 0) {
      lVar3 = *param_2;
    }
    else {
      lVar3 = FUN_0343f260(param_1,param_3);
      *param_2 = lVar3;
    }
    if (lVar3 != 0) goto LAB_0343f40c;
  }
  if ((param_4 & 1) != 0) {
    do {
      if ((*(char *)(param_1 + 0xc3) != '\0') ||
         ((*(char *)(param_1 + 0x6a) == '\0' && (*(int *)(param_1 + 0x98) == 0)))) break;
      uVar4 = nn::os::GetCurrentThread();
      *(undefined8 *)(param_1 + 8) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      lVar3 = *(long *)(param_1 + 0x50);
      pMVar2 = (MutexType *)(lVar3 + 0x220);
      nn::os::LockMutex(pMVar2);
      if (*(long *)(param_1 + 8) != 0) {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(lVar3 + 0x240),pMVar2);
        } while (*(long *)(param_1 + 8) != 0);
      }
      nn::os::UnlockMutex(pMVar2);
      nn::os::LockMutex(pMVar1);
      lVar3 = FUN_0343f260(param_1,param_3);
      *param_2 = lVar3;
    } while (lVar3 == 0);
  }
LAB_0343f40c:
  nn::os::UnlockMutex(pMVar1);
  if (*(char *)(param_1 + 0xc3) == '\0') {
    if (*param_2 == 0) {
      if ((*(char *)(param_1 + 0x67) == '\0') ||
         (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) {
        return 0x2e;
      }
    }
    else if ((*(char *)(param_1 + 0x67) == '\0') ||
            (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) {
      return 0x2d;
    }
    uVar4 = 0x11;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


