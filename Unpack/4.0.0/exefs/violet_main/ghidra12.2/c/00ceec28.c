/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ceec28; name: FUN_00ceec28
 */


void FUN_00ceec28(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [64];
  char local_28;
  
  if ((*PTR_DAT_047d8a30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a30);
    if (iVar1 != 0) {
      FUN_00100190(param_2,PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a30);
    }
  }
  *(undefined8 *)PTR_DAT_047d8a40 = *(undefined8 *)PTR_DAT_047d8a38;
  FUN_00cef230(auStack_68,param_2);
  if (local_28 == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_00ceee08(param_2,param_1,auStack_68);
    if (local_28 != '\0') {
      FUN_00cef86c(auStack_68);
    }
  }
  return;
}


