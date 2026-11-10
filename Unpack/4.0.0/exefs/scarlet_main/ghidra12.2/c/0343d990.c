/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343d990; name: FUN_0343d990
 */


void FUN_0343d990(long *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  MutexType *pMVar4;
  long lVar5;
  
  *(int *)(param_1 + 0x15) = param_2;
  if (((char)param_1[0xd] == '\0') ||
     (uVar3 = (**(code **)(*param_1 + 0x10))(param_1), (uVar3 & 1) == 0)) {
    if (param_2 != 2) {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) == '\0') {
        return;
      }
      lVar5 = param_1[10];
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      pMVar4 = (MutexType *)(lVar5 + 0x1e8);
      nn::os::LockMutex(pMVar4);
      *(int *)(lVar5 + 0x210) = *(int *)(lVar5 + 0x210) + -1;
      goto LAB_0343da48;
    }
    cVar2 = *(char *)((long)param_1 + 0x6a);
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x6a);
  }
  if (cVar2 != '\0') {
    return;
  }
  lVar5 = param_1[10];
  *(undefined1 *)((long)param_1 + 0x6a) = 1;
  pMVar4 = (MutexType *)(lVar5 + 0x1e8);
  nn::os::LockMutex(pMVar4);
  iVar1 = *(int *)(lVar5 + 0x210);
  *(int *)(lVar5 + 0x210) = iVar1 + 1;
  if (iVar1 == 0) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x208));
  }
LAB_0343da48:
  nn::os::UnlockMutex(pMVar4);
  return;
}


