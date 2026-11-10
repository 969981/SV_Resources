/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9d890; name: FUN_00d9d890
 */


void FUN_00d9d890(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar3 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar3;
    if (*(int *)(param_1 + 0x38) != 0) {
      plVar2 = *(long **)(*(long *)(lVar3 + 0x200) + 0x60);
      (**(code **)(*plVar2 + 0xd8))(plVar2,*(int *)(param_1 + 0x38),0,4);
    }
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x61) = 1;
  }
  return;
}


