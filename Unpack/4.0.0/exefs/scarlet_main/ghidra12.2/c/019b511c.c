/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b511c; name: FUN_019b511c
 */


void FUN_019b511c(void)

{
  int iVar1;
  
  if (((DAT_0483a588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a588), iVar1 != 0)) {
    FUN_00100190(&LAB_00b6a33c,&DAT_0483a578,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a588);
    return;
  }
  return;
}


