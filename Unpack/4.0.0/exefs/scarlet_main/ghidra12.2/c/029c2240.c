/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c2240; name: FUN_029c2240
 */


undefined * FUN_029c2240(void)

{
  int iVar1;
  
  if (((DAT_0486aed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486aed8), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_04605d68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486aed8);
  }
  return &DAT_04605d68;
}


