/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0b9c0; name: FUN_00d0b9c0
 */


undefined * FUN_00d0b9c0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1[2] == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar2 = PTR_DAT_047d3e30, iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar2 = PTR_DAT_047d3e30;
    }
  }
  else {
    puVar2 = (undefined *)FUN_00d0ba70(*param_1);
    if (**(char **)(puVar2 + 8) == '\0') {
      puVar2 = (undefined *)FUN_00cf2638(param_1[2],param_2);
      return puVar2;
    }
  }
  return puVar2;
}


