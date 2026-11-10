/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f84408; name: FUN_01f84408
 */


void FUN_01f84408(void)

{
  int iVar1;
  
  if (((DAT_0483acc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483acc8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a1c3ec,&DAT_0483acb8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483acc8);
  }
  FUN_0185c0b4(&DAT_0483acb8,0);
  return;
}


