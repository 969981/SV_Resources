/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343e98c; name: FUN_0343e98c
 */


void FUN_0343e98c(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  MutexType *pMVar7;
  long lVar8;
  
  if ((((int)param_1[0x12] == 0) &&
      (uVar6 = (**(code **)(*param_1 + 0xf0))(param_1), *(ulong *)param_1[4] <= uVar6)) &&
     (*(char *)((long)param_1 + 0x69) != '\0')) {
    bVar4 = false;
    *(undefined1 *)((long)param_1 + 0x67) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x67) = 0;
    bVar4 = false;
    if (*(char *)((long)param_1 + 0xc2) != '\0') {
      bVar4 = (char)param_1[0xd] == '\0';
    }
  }
  *(bool *)((long)param_1 + 0x6c) = bVar4;
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  cVar3 = *(char *)((long)param_1 + 0x6c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  if (((cVar3 == '\0') ||
      (uVar1 = *(uint *)(param_1 + 0x13), uVar5 = (**(code **)(*param_1 + 0x48))(param_1),
      uVar5 <= uVar1)) &&
     (((char)param_1[0xd] == '\0' ||
      (uVar6 = (**(code **)(*param_1 + 0x10))(param_1), (uVar6 & 1) == 0)))) {
    if (*(char *)((long)param_1 + 0x6a) == '\0') {
      return;
    }
    lVar8 = param_1[10];
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
    pMVar7 = (MutexType *)(lVar8 + 0x1e8);
    nn::os::LockMutex(pMVar7);
    *(int *)(lVar8 + 0x214) = *(int *)(lVar8 + 0x214) + -1;
  }
  else {
    if (*(char *)((long)param_1 + 0x6a) != '\0') {
      return;
    }
    lVar8 = param_1[10];
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    pMVar7 = (MutexType *)(lVar8 + 0x1e8);
    nn::os::LockMutex(pMVar7);
    iVar2 = *(int *)(lVar8 + 0x214);
    *(int *)(lVar8 + 0x214) = iVar2 + 1;
    if ((iVar2 == 0) && (*(char *)(lVar8 + 0x218) == '\0')) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x208));
    }
  }
  nn::os::UnlockMutex(pMVar7);
  return;
}


