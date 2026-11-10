/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9d030; name: FUN_01f9d030
 */


void FUN_01f9d030(void)

{
  int iVar1;
  
  if (((DAT_0483adf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483adf8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adf8);
  }
  FUN_018c0fa8(&DAT_0483ade8,0);
  return;
}


