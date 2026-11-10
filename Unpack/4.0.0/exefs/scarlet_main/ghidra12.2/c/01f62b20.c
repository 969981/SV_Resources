/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f62b20; name: FUN_01f62b20
 */


void FUN_01f62b20(void)

{
  int iVar1;
  
  if (((DAT_0483a368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a368), iVar1 != 0)) {
    FUN_00100190(&LAB_00b60ef0,&DAT_0483a358,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a368);
  }
  FUN_017f7328(&DAT_0483a358,0);
  return;
}


