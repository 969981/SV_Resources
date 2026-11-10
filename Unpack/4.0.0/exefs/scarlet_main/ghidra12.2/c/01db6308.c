/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db6308; name: FUN_01db6308
 */


void FUN_01db6308(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2dfb4,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  FUN_01875ad8(PTR_DAT_047d8940,0);
  return;
}


