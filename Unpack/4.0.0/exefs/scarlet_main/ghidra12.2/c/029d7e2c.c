/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d7e2c; name: FUN_029d7e2c
 */


undefined * FUN_029d7e2c(void)

{
  int iVar1;
  
  if (((DAT_0486afe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486afe0), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_046089c8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486afe0);
  }
  return &DAT_046089c8;
}


