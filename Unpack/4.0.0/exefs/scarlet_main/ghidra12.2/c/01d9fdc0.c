/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9fdc0; name: FUN_01d9fdc0
 */


void FUN_01d9fdc0(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d8a20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a20);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a20);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8a28;
  *(long *)PTR_DAT_047d8ea8 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_01dbf598(lVar2,param_1);
  return;
}


