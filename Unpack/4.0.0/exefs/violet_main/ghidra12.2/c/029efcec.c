/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029efcec; name: FUN_029efcec
 */


void FUN_029efcec(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  lVar2 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x3d0));
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_029efd94(&local_c0,param_2);
  FUN_00dd17e4(lVar2 + 0x360,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(lVar2 + 0x3f8) = *(undefined8 *)(lVar2 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar2 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x3d0));
  FUN_017aafec(lVar2);
  return;
}


