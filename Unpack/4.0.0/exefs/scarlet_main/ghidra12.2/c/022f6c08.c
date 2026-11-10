/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f6c08; name: FUN_022f6c08
 */


undefined * FUN_022f6c08(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8 [4];
  int local_4;
  
  if (param_2 == -1) {
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
    local_8[0] = 1;
    local_4 = param_2;
    puVar2 = (undefined *)FUN_022f6c9c(param_1,local_8);
  }
  return puVar2;
}


