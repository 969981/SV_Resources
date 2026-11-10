/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012952d0; name: FUN_012952d0
 */


void FUN_012952d0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  *param_1 = &DAT_0459f7b8;
  param_1[4] = &PTR_LAB_0459f918;
  param_1[5] = &DAT_0459fa40;
  param_1[0x24] = &PTR_LAB_0459faf8;
  param_1[6] = &PTR_LAB_0459fa98;
  param_1[7] = &PTR_LAB_0459fac0;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  FUN_01295394(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x38) + 0x48) + 0x148),param_1);
  FUN_00e6bfa4(param_1);
  return;
}


