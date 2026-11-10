/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bfec68; name: FUN_01bfec68
 */


void FUN_01bfec68(void)

{
  int iVar1;
  
  if (((DAT_0483ac50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ac50), iVar1 != 0)) {
    FUN_00100190(&LAB_02a16748,&DAT_0483ac40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ac50);
  }
  DAT_0483ac58 = DAT_0483ac40;
  FUN_00ff84dc(DAT_0483ac40 + 0x30);
  return;
}


