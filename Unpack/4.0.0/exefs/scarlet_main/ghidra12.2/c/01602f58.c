/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01602f58; name: FUN_01602f58
 */


void FUN_01602f58(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_28;
  
  FUN_0160377c();
  *param_1 = &PTR_FUN_04601c68;
  param_1[4] = &PTR_LAB_04601c98;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0))
  {
    local_28 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar3 = *(long **)PTR_DAT_047d8c30;
  param_1[8] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  FUN_016030cc(param_1 + 9);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  FUN_016038a8(param_1 + 0x19);
  FUN_0160310c(param_1 + 0x1d);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  FUN_016039dc(param_1 + 0x2d);
  FUN_0160314c(param_1 + 0x31);
  param_1[0x7c] = &PTR_FUN_04601cb8;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x84] = &PTR_FUN_04601cd8;
  param_1[0x8b] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8c),false,0);
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x3f800000;
  return;
}


