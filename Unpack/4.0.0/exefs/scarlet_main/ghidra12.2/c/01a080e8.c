/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a080e8; name: FUN_01a080e8
 */


void FUN_01a080e8(void)

{
  int iVar1;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839b78), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return;
  }
  FUN_01a0afb4();
  return;
}


