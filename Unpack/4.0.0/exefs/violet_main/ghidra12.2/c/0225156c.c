/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225156c; name: FUN_0225156c
 */


void FUN_0225156c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_045ac128;
  param_1[4] = &PTR_LAB_045ac278;
  param_1[5] = &DAT_045ac3a0;
  param_1[6] = &PTR_LAB_045ac3f8;
  param_1[7] = &PTR_LAB_045ac420;
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar2;
  if ((*PTR_DAT_047d89f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
  }
  lVar4 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar4;
  FUN_014ed314(uVar2,param_1 + 0x25,*(undefined1 *)(lVar4 + 0x2c));
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x20))();
  }
  plVar3 = (long *)param_1[0x25];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_00e6bfa4(param_1);
  return;
}


