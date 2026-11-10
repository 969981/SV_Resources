/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011cb180; name: FUN_011cb180
 */


undefined * FUN_011cb180(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_8;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (((*PTR_DAT_047d8c18 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c18), iVar1 != 0)) {
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar1 != 0)) {
        local_8 = FUN_00d44228();
        puVar2 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_8);
        FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      puVar2 = PTR_DAT_047d8c20;
      FUN_01db7420(PTR_DAT_047d8c20,PTR_DAT_047d8c30,0);
      FUN_00100190(PTR_FUN_047dc9f0,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c18);
    }
    else {
      puVar2 = PTR_DAT_047d8c20;
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x40);
  }
  return puVar2;
}


