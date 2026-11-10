/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dee378; name: FUN_01dee378
 */


void FUN_01dee378(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d4928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d4930;
  *(long *)PTR_DAT_047d4938 = lVar2;
  FUN_00fb1cf4(param_1,lVar2 + 0x198);
  return;
}


