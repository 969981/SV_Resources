/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e64d28; name: FUN_00e64d28
 */


void FUN_00e64d28(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  MutexType *pMVar3;
  ConditionVariableType *pCVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  nn::os::GetSystemTick();
  lVar7 = nn::os::ConvertToTimeSpan();
  pMVar1 = (MutexType *)(param_1 + 0x100);
  *(long *)(param_1 + 0x158) = lVar7 - *(long *)(param_1 + 0x150);
  nn::os::LockMutex(pMVar1);
  piVar2 = (int *)(param_1 + 0x120);
  if ((*piVar2 != 0) && (*piVar2 != 0)) {
    pCVar4 = (ConditionVariableType *)(param_1 + 0xf8);
    nn::os::WaitConditionVariable(pCVar4,pMVar1);
    if (*(int *)(param_1 + 0x120) != 0) {
      nn::os::WaitConditionVariable(pCVar4,pMVar1);
      iVar5 = *(int *)(param_1 + 0x120);
      while (iVar5 != 0) {
        nn::os::WaitConditionVariable(pCVar4,pMVar1);
        iVar5 = *(int *)(param_1 + 0x120);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::GetSystemTick();
  uVar8 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x150) = uVar8;
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(param_1 + 0x124) = 0;
  *piVar2 = 1;
  lVar7 = *(long *)(param_1 + 0xd8);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x3d0));
  local_d0 = &LAB_00dcfe14;
  local_c8 = FUN_02baefbc;
  local_c0 = &LAB_02baefc0;
  local_b8 = &LAB_02baefcc;
  alStack_b0[0] = param_1;
  FUN_00dd17e4(lVar7 + 0x360,&local_d0);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(alStack_b0);
  }
  *(undefined8 *)(lVar7 + 0x3f8) = *(undefined8 *)(lVar7 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x3d0));
  plVar10 = *(long **)(lVar7 + 0x400);
  plVar9 = *(long **)(lVar7 + 0x408);
  if (plVar10 != plVar9) {
    lVar7 = *plVar10;
    pMVar3 = (MutexType *)(lVar7 + 0x3f0);
    nn::os::LockMutex(pMVar3);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x410));
    nn::os::UnlockMutex(pMVar3);
    if (plVar10 + 1 != plVar9) {
      lVar7 = plVar10[1];
      pMVar3 = (MutexType *)(lVar7 + 0x3f0);
      nn::os::LockMutex(pMVar3);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x410));
      nn::os::UnlockMutex(pMVar3);
      for (plVar10 = plVar10 + 2; plVar10 != plVar9; plVar10 = plVar10 + 1) {
        lVar7 = *plVar10;
        pMVar3 = (MutexType *)(lVar7 + 0x3f0);
        nn::os::LockMutex(pMVar3);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x410));
        nn::os::UnlockMutex(pMVar3);
      }
    }
  }
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x124) == '\0')) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0xf8),pMVar1);
    } while (*(char *)(param_1 + 0x124) == '\0');
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


