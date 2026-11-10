/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebd41c; name: FUN_01ebd41c
 */


void FUN_01ebd41c(void)

{
  int iVar1;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839b78), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  FUN_017891f8(&DAT_04839b68,0);
  return;
}


