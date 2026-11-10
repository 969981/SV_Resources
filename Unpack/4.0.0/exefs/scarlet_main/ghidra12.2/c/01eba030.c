/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eba030; name: FUN_01eba030
 */


void FUN_01eba030(void)

{
  int iVar1;
  
  if (((DAT_04839ae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839ae8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1dc18,&DAT_04839ad8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839ae8);
  }
  FUN_017482b4(&DAT_04839ad8,0);
  return;
}


