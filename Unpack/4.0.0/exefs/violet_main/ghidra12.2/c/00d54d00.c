/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d54d00; name: FUN_00d54d00
 */


void FUN_00d54d00(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined1 auStack_a0 [96];
  
  if (*(long *)(param_2 + 0x3f8) == 0) {
    memset(param_1,0,0x80);
    return;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x3d0));
  lVar3 = *(long *)(param_2 + 0x3a8);
  if (lVar3 == 0) {
    memset(param_1,0,0x80);
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x368) +
                       (*(ulong *)(param_2 + 0x3a0) >> 2 & 0x3ffffffffffffff8)) +
             (*(ulong *)(param_2 + 0x3a0) & 0x1f) * 0x80);
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    if ((code *)puVar1[2] != (code *)0x0) {
      (*(code *)puVar1[2])(puVar1 + 4,auStack_a0);
      local_a8 = (code *)puVar1[3];
      local_b8 = (code *)puVar1[1];
      local_c0 = *puVar1;
      local_b0 = puVar1[2];
      lVar3 = *(long *)(param_2 + 0x3a8);
    }
    pcVar2 = local_b8;
    *(long *)(param_2 + 0x3f8) = lVar3 + -1;
    uVar4 = *(ulong *)(param_2 + 0x3a0);
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x368) + (uVar4 >> 2 & 0x3ffffffffffffff8)) +
             (uVar4 & 0x1f) * 0x80);
    pcVar5 = (code *)puVar1[1];
    if (pcVar5 != (code *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      (*pcVar5)(puVar1 + 4);
      uVar4 = *(ulong *)(param_2 + 0x3a0);
    }
    *(long *)(param_2 + 0x3a8) = *(long *)(param_2 + 0x3a8) + -1;
    *(ulong *)(param_2 + 0x3a0) = uVar4 + 1;
    FUN_00c85e70(param_2 + 0x360);
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_2 + 0x3f0));
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,param_1 + 4);
      param_1[2] = local_b0;
      param_1[3] = local_a8;
      *param_1 = local_c0;
      param_1[1] = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
        (*pcVar2)(auStack_a0);
      }
    }
    if (local_b8 != (code *)0x0) {
      (*local_b8)(auStack_a0);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x3d0));
  return;
}


