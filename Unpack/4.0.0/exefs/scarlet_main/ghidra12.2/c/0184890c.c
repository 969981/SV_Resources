/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184890c; name: FUN_0184890c
 */


void FUN_0184890c(void)

{
  int iVar1;
  
  if (((DAT_048404e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048404e8), iVar1 != 0)) {
    FUN_00100190(&LAB_02acc060,&DAT_048404d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048404e8);
  }
  DAT_048404f0 = DAT_048404d8;
  FUN_018491f8();
  return;
}


