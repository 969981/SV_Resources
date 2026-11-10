/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b2624; name: FUN_028b2624
 */


void FUN_028b2624(long param_1,void *param_2)

{
  code *pcVar1;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d0));
  memcpy(auStack_a0,param_2,0x30);
  local_c0 = &LAB_028b35dc;
  local_b8 = FUN_02c7c768;
  local_b0 = &LAB_02c7c76c;
  puStack_a8 = &LAB_02c7c780;
  FUN_00dd17e4(param_1 + 0x360,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  FUN_017aafec(param_1);
  return;
}


