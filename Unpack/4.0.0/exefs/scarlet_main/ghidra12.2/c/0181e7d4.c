/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181e7d4; name: FUN_0181e7d4
 */


void FUN_0181e7d4(void)

{
  int iVar1;
  
  FUN_0181e844();
  if (((DAT_0483b210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b210), iVar1 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  DAT_0483b218 = DAT_0483b200;
  FUN_0181f1dc();
  return;
}


