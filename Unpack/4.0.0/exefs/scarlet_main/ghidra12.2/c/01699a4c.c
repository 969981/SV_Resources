/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01699a4c; name: FUN_01699a4c
 */


void FUN_01699a4c(void)

{
  int iVar1;
  
  FUN_01699abc();
  if (((DAT_04837228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04837228), iVar1 != 0)) {
    FUN_00100190(&LAB_00a8b6e0,&DAT_04837218,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837228);
  }
  DAT_04837230 = DAT_04837218;
  FUN_01699c14();
  return;
}


