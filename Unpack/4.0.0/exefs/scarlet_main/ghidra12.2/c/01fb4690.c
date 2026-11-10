/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb4690; name: FUN_01fb4690
 */


void FUN_01fb4690(void)

{
  int iVar1;
  
  if (((DAT_0483b1b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b1b0), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3f278,&DAT_0483b1a0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1b0);
  }
  FUN_01732604(&DAT_0483b1a0,0);
  return;
}


