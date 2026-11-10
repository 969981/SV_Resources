/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021fe368; name: FUN_021fe368
 */


void FUN_021fe368(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  FUN_0174221c(PTR_DAT_047d7948,0);
  return;
}


