/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e856c; name: FUN_020e856c
 */


void FUN_020e856c(void)

{
  int iVar1;
  
  if (((DAT_048405f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048405f8), iVar1 != 0)) {
    FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048405f8);
  }
  FUN_0163ab9c(&DAT_048405e8,0);
  return;
}


