/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170835c; name: FUN_0170835c
 */


void FUN_0170835c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d8c28;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_38 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  puVar2 = PTR_DAT_047d8c30;
  plVar5 = *(long **)PTR_DAT_047d8c30;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
    local_38 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar6 = *(long **)puVar2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = *(long **)(param_1 + 0x388);
  *(long **)(param_1 + 0x380) = plVar5;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(long **)(param_1 + 0x388) = plVar6;
  *(undefined4 *)(param_1 + 0x390) = 0;
  return;
}


