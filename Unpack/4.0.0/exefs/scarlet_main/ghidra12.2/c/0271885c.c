/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271885c; name: FUN_0271885c
 */


void FUN_0271885c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if ((*PTR_DAT_047d8c40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar2;
  FUN_02718a04(uVar2,*(long *)(param_1 + 8) + 0x70,param_2);
  FUN_0271953c(param_1);
  return;
}


