/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b3a98; name: FUN_029b3a98
 */


undefined * FUN_029b3a98(void)

{
  int iVar1;
  
  if (((DAT_0486adf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486adf0), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_04604488,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486adf0);
  }
  return &DAT_04604488;
}


