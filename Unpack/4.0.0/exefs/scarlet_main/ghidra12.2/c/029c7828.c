/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c7828; name: FUN_029c7828
 */


undefined * FUN_029c7828(void)

{
  int iVar1;
  
  if (((DAT_0486aee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486aee0), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_04606670,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486aee0);
  }
  return &DAT_04606670;
}


