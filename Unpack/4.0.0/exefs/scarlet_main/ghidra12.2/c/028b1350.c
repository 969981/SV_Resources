/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b1350; name: FUN_028b1350
 */


void FUN_028b1350(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e23f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e23f0), iVar1 != 0))
  {
    FUN_00100190(&LAB_02c7b4e8,PTR_DAT_047e23f8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e23f0);
  }
  FUN_012cb028(PTR_DAT_047e23f8,0);
  return;
}


