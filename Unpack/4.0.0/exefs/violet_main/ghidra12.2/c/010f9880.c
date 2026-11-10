/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f9880; name: FUN_010f9880
 */


void FUN_010f9880(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &DAT_045dedd0;
  param_1[4] = &PTR_LAB_045dee48;
  param_1[5] = &DAT_045dee98;
  FUN_010f9b7c();
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar2;
  FUN_010fc8c8(uVar2,param_1[9],param_1[8]);
  FUN_010f9928(param_1);
  return;
}


