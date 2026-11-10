/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d6d40; name: FUN_011d6d40
 */


void FUN_011d6d40(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_04545b38;
  param_1[4] = &PTR_LAB_04545bd8;
  param_1[5] = &PTR_LAB_04545c28;
  if (param_1[0xc] != -1) {
    if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 8) != 5)) {
      FUN_011d775c(param_1);
    }
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d6c28;
    *(undefined8 *)PTR_DAT_047d6c30 = uVar2;
    FUN_011d6e10(uVar2,param_1[0xc]);
  }
  FUN_011d72d4(param_1);
  return;
}


