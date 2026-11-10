/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219b020; name: FUN_0219b020
 */


void FUN_0219b020(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    local_14 = param_1;
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    param_1 = local_14;
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
      param_1 = local_14;
    }
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  if (*(char *)(lVar2 + 0xb2d0) == '\0') {
    *(undefined4 *)(lVar2 + 0xb2cc) = param_1;
    *(undefined1 *)(lVar2 + 0xb2d0) = 1;
    if (*(code **)(lVar2 + 0xb2e0) != (code *)0x0) {
      local_14 = CONCAT31(local_14._1_3_,1);
      local_18 = param_1;
      (**(code **)(lVar2 + 0xb2e0))(lVar2 + 0xb300,&local_14,&local_18);
    }
  }
  return;
}


