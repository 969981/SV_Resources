/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ede58; name: FUN_029ede58
 */


void FUN_029ede58(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d0));
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_029edf8c(&local_c0,param_2);
  FUN_00dd17e4(param_1 + 0x360,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  plVar4 = *(long **)(param_1 + 0x400);
  plVar3 = *(long **)(param_1 + 0x408);
  if (plVar4 != plVar3) {
    lVar5 = *plVar4;
    pMVar1 = (MutexType *)(lVar5 + 0x3f0);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x410));
    nn::os::UnlockMutex(pMVar1);
    if (plVar4 + 1 != plVar3) {
      lVar5 = plVar4[1];
      pMVar1 = (MutexType *)(lVar5 + 0x3f0);
      nn::os::LockMutex(pMVar1);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x410));
      nn::os::UnlockMutex(pMVar1);
      for (plVar4 = plVar4 + 2; plVar4 != plVar3; plVar4 = plVar4 + 1) {
        lVar5 = *plVar4;
        pMVar1 = (MutexType *)(lVar5 + 0x3f0);
        nn::os::LockMutex(pMVar1);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x410));
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  return;
}


