/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f6f98; name: FUN_017f6f98
 */


void FUN_017f6f98(void)

{
  int iVar1;
  
  if (((DAT_0483a368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a368), iVar1 != 0)) {
    FUN_00100190(&LAB_00b60ef0,&DAT_0483a358,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a368);
  }
  DAT_0483a350 = DAT_0483a358;
  return;
}


