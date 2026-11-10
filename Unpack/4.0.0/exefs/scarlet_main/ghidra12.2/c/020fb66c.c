/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fb66c; name: FUN_020fb66c
 */


void FUN_020fb66c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d38d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d38d8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89e8,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38d8);
  }
  FUN_020fb6d0(PTR_DAT_047d38e0);
  return;
}


