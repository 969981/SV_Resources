/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b1ccc; name: FUN_028b1ccc
 */


void FUN_028b1ccc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  FUN_01572e08(PTR_DAT_047d8b38,0);
  return;
}


