/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026eff48; name: FUN_026eff48
 */


void FUN_026eff48(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  FUN_026effac(PTR_DAT_047d8cd0);
  return;
}


