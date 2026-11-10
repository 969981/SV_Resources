/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173d314; name: FUN_0173d314
 */


void FUN_0173d314(long param_1,undefined8 param_2)

{
  code *pcVar1;
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
  FUN_0173d3bc(&local_c0,param_2);
  FUN_00dd17e4(param_1 + 0x360,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  FUN_017aafec(param_1);
  return;
}


