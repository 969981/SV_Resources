/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bfeda4; name: FUN_01bfeda4
 */


void FUN_01bfeda4(void *param_1)

{
  int iVar1;
  
  if ((DAT_0483ac50 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483ac50);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a16748,&DAT_0483ac40,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483ac50);
    }
  }
  DAT_0483ac58 = DAT_0483ac40;
  memcpy(param_1,(void *)(DAT_0483ac40 + 0xe8),0x7c);
  return;
}


