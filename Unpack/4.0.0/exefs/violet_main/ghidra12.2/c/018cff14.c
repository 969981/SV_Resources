/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018cff14; name: FUN_018cff14
 */


undefined8 FUN_018cff14(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (**(char **)(param_2 + 8) == '\0') {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 200) + 0x88))();
    *(undefined1 *)(param_1 + 0x2e9) = 1;
    *(undefined1 *)(param_1 + 0x2eb) = 1;
    if (((*PTR_DAT_047dd000 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
    uVar2 = 1;
    *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  }
  return uVar2;
}


