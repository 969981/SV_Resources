/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5d564; name: FUN_01d5d564
 */


void FUN_01d5d564(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  DAT_04838400 = DAT_048383e8;
  FUN_01e29a3c(DAT_048383e8,param_1,param_2 & 1);
  return;
}


