/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c85cd4; name: FUN_00c85cd4
 */


/* WARNING: Removing unreachable block (ram,0x00c85d5c) */

void FUN_00c85cd4(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  code *local_c0;
  code *local_b8;
  undefined1 auStack_a0 [96];
  
  pMVar1 = (MutexType *)(param_1 + 0x3d0);
  nn::os::LockMutex(pMVar1);
  while ((local_b8 = (code *)0x0, *(long *)(param_1 + 0x3a8) == 0 &&
         ((*(byte *)(param_1 + 0x248) & 1) == 0))) {
    nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x3f0),pMVar1);
  }
  if ((*(byte *)(param_1 + 0x248) & 1) == 0) {
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x368) +
                       (*(ulong *)(param_1 + 0x3a0) >> 2 & 0x3ffffffffffffff8)) +
             (*(ulong *)(param_1 + 0x3a0) & 0x1f) * 0x80);
    local_b8 = (code *)0x0;
    local_c0 = (code *)0x0;
    if ((code *)puVar2[2] != (code *)0x0) {
      (*(code *)puVar2[2])(puVar2 + 4,auStack_a0);
      local_b8 = (code *)puVar2[1];
      local_c0 = (code *)*puVar2;
    }
    *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3a8) + -1;
    uVar3 = *(ulong *)(param_1 + 0x3a0);
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x368) + (uVar3 >> 2 & 0x3ffffffffffffff8)) +
             (uVar3 & 0x1f) * 0x80);
    pcVar4 = (code *)puVar2[1];
    if (pcVar4 != (code *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      (*pcVar4)(puVar2 + 4);
      uVar3 = *(ulong *)(param_1 + 0x3a0);
    }
    *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + -1;
    *(ulong *)(param_1 + 0x3a0) = uVar3 + 1;
    FUN_00c85e70(param_1 + 0x360);
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
    nn::os::UnlockMutex(pMVar1);
    (*local_c0)(auStack_a0);
  }
  else {
    nn::os::UnlockMutex(pMVar1);
  }
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
  return;
}


