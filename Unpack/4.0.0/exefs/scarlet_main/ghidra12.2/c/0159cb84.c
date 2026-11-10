/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159cb84; name: FUN_0159cb84
 */


undefined8 FUN_0159cb84(undefined4 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*PTR_DAT_047d8280 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280);
      if (iVar1 != 0) {
        FUN_00100190(param_1,PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8288;
    *(undefined8 *)PTR_DAT_047d8290 = uVar2;
    FUN_0159cc40(param_1,uVar2,*(undefined4 *)(param_2 + 0x38),param_3);
    uVar2 = 1;
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  return uVar2;
}


