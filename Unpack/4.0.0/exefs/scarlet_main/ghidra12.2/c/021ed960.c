/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ed960; name: FUN_021ed960
 */


void FUN_021ed960(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  FUN_01743e68(PTR_DAT_047d7438,0);
  return;
}


