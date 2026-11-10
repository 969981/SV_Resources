/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b2760; name: FUN_028b2760
 */


void FUN_028b2760(void *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [112];
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  lVar3 = FUN_014b65d8();
  nn::os::LockMutex((MutexType *)(lVar3 + 0x3d0));
  memcpy(auStack_a0,param_1,0x30);
  local_c0 = &LAB_028b3648;
  local_b8 = FUN_02c7c794;
  local_b0 = &LAB_02c7c798;
  puStack_a8 = &LAB_02c7c7ac;
  FUN_00dd17e4(lVar3 + 0x360,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(lVar3 + 0x3f8) = *(undefined8 *)(lVar3 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar3 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x3d0));
  FUN_017aafec(lVar3);
  return;
}


