/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343de6c; name: FUN_0343de6c
 */


void FUN_0343de6c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  MutexType *pMVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  *(undefined4 *)(param_1 + 0x15) = 4;
  if (((char)param_1[0xd] == '\0') ||
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    if (*(char *)((long)param_1 + 0x6a) == '\0') goto LAB_0343df20;
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
    nn::os::LockMutex(pMVar3);
    *(int *)(lVar4 + 0x210) = *(int *)(lVar4 + 0x210) + -1;
  }
  else {
    if (*(char *)((long)param_1 + 0x6a) != '\0') goto LAB_0343df20;
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    nn::os::LockMutex(pMVar3);
    iVar1 = *(int *)(lVar4 + 0x210);
    *(int *)(lVar4 + 0x210) = iVar1 + 1;
    if (iVar1 == 0) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x208));
    }
  }
  nn::os::UnlockMutex(pMVar3);
LAB_0343df20:
  if ((param_1[1] != 0) && ((*(uint *)(param_1 + 0x15) | 2) != 2)) {
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x220);
    nn::os::LockMutex(pMVar3);
    param_1[1] = 0;
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar4 + 0x240));
    nn::os::UnlockMutex(pMVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


