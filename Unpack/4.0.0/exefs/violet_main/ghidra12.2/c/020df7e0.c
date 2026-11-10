/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020df7e0; name: FUN_020df7e0
 */


void FUN_020df7e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_0457f9b8;
  param_1[4] = &PTR_LAB_0457faf8;
  param_1[5] = &DAT_0457fc20;
  param_1[6] = &PTR_LAB_0457fc78;
  param_1[7] = &PTR_LAB_0457fca0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (((*PTR_DAT_047d8aa8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8aa8), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dcb40,PTR_DAT_047d8ab0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8aa8);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8ab0;
    *(undefined8 *)PTR_DAT_047d8ab8 = uVar2;
    FUN_00f0630c(uVar2,param_1 + 0x24,param_1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 0x20))();
  }
  FUN_00e6bfa4(param_1);
  return;
}


