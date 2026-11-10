/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e8504; name: FUN_020e8504
 */


void FUN_020e8504(void)

{
  int iVar1;
  
  if (((DAT_04840598 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840598), iVar1 != 0)) {
    FUN_00100190(&LAB_02ace768,&DAT_04840588,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840598);
  }
  FUN_01727d04(&DAT_04840588,0);
  return;
}


