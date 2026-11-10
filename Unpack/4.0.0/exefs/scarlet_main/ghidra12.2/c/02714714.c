/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02714714; name: FUN_02714714
 */


undefined * FUN_02714714(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
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
    puVar2 = (undefined *)(*(long *)(*(long *)(param_1 + 0x38) + 0x98) + (long)param_2 * 0x20);
  }
  return puVar2;
}


