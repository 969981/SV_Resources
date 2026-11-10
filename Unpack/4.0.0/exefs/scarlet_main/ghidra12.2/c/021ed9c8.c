/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ed9c8; name: FUN_021ed9c8
 */


void FUN_021ed9c8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  FUN_01743f30(PTR_DAT_047da7c8,0);
  return;
}


