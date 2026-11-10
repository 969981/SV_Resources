/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017aaeac; name: FUN_017aaeac
 */


void FUN_017aaeac(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  lVar3 = FUN_014b65d8();
  nn::os::LockMutex((MutexType *)(lVar3 + 0x3d0));
  local_90 = *param_1;
  uStack_88 = param_1[1];
  local_b0 = &LAB_01741ae0;
  local_a8 = FUN_02b72348;
  local_a0 = &LAB_02b7234c;
  puStack_98 = &LAB_02b72358;
  FUN_00dd17e4(lVar3 + 0x360,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  *(undefined8 *)(lVar3 + 0x3f8) = *(undefined8 *)(lVar3 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar3 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x3d0));
  FUN_017aafec(lVar3);
  return;
}


