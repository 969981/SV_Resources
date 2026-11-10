/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343dd44; name: FUN_0343dd44
 */


void FUN_0343dd44(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  MutexType *pMVar4;
  long lVar5;
  
  if (param_2 == 2) {
    uVar3 = 4;
  }
  else {
    if (*(char *)((long)param_1 + 0xac) == '\0') goto LAB_0343de14;
    param_1[0xf] = param_1[0xf] + (ulong)*(uint *)(param_1 + 0x12);
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  if (((char)param_1[0xd] == '\0') ||
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    if (*(char *)((long)param_1 + 0x6a) == '\0') goto LAB_0343de14;
    lVar5 = param_1[10];
    pMVar4 = (MutexType *)(lVar5 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
    nn::os::LockMutex(pMVar4);
    *(int *)(lVar5 + 0x210) = *(int *)(lVar5 + 0x210) + -1;
  }
  else {
    if (*(char *)((long)param_1 + 0x6a) != '\0') goto LAB_0343de14;
    lVar5 = param_1[10];
    pMVar4 = (MutexType *)(lVar5 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    nn::os::LockMutex(pMVar4);
    iVar1 = *(int *)(lVar5 + 0x210);
    *(int *)(lVar5 + 0x210) = iVar1 + 1;
    if (iVar1 == 0) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x208));
    }
  }
  nn::os::UnlockMutex(pMVar4);
LAB_0343de14:
  if ((param_1[1] == 0) || ((*(uint *)(param_1 + 0x15) | 2) == 2)) {
    return;
  }
  lVar5 = param_1[10];
  pMVar4 = (MutexType *)(lVar5 + 0x220);
  nn::os::LockMutex(pMVar4);
  param_1[1] = 0;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar5 + 0x240));
  nn::os::UnlockMutex(pMVar4);
  return;
}


