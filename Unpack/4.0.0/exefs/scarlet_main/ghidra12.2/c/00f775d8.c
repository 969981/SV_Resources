/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f775d8; name: FUN_00f775d8
 */


void FUN_00f775d8(long param_1)

{
  code *pcVar1;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [96];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d0));
  local_b0 = FUN_017cad0c;
  local_a8 = FUN_02c75368;
  local_a0 = &LAB_02c7536c;
  puStack_98 = &LAB_02c75370;
  FUN_00dd17e4(param_1 + 0x360,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  FUN_017aafec(param_1);
  return;
}


