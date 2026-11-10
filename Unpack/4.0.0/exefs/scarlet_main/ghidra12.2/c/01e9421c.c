/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9421c; name: FUN_01e9421c
 */


void FUN_01e9421c(void)

{
  int iVar1;
  
  if (((DAT_048393e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048393e0), iVar1 != 0)) {
    FUN_00100190(&LAB_00b0c240,&DAT_048393d0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048393e0);
  }
  FUN_017ca93c(&DAT_048393d0,0);
  return;
}


