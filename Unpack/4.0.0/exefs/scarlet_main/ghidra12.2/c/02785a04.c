/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02785a04; name: FUN_02785a04
 */


void FUN_02785a04(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e2050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2050), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2078,PTR_DAT_047e2058,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2050);
  }
  FUN_02785a68(PTR_DAT_047e2058);
  return;
}


