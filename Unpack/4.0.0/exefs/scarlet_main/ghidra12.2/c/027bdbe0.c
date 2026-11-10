/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bdbe0; name: FUN_027bdbe0
 */


void FUN_027bdbe0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  FUN_027bdc44(PTR_DAT_047da808);
  return;
}


