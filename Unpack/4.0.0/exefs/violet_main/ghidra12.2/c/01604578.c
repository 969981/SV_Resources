/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01604578; name: FUN_01604578
 */


void FUN_01604578(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 local_18;
  
  FUN_01604a64();
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_04600fc0;
  param_1[4] = &PTR_LAB_04601008;
  param_1[5] = &PTR_LAB_04601028;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_01604774(param_1 + 0xe);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_01604774(param_1 + 0x15);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_01604830(param_1 + 0x1c);
  puVar1 = PTR_DAT_047d8c28;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_18 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  puVar2 = PTR_DAT_047d8c30;
  plVar4 = *(long **)PTR_DAT_047d8c30;
  param_1[0x21] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_18 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar4 = *(long **)puVar2;
  param_1[0x22] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2a),false,0);
  FUN_01604734(param_1 + 0x2e);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3b),false,0);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  memset(param_1 + 0x40,0,0x80);
  return;
}


