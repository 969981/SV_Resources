/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a07ff8; name: FUN_01a07ff8
 */


void FUN_01a07ff8(void)

{
  int iVar1;
  
  if (((DAT_04839b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839b28), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1e40c,&DAT_04839b18,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b28);
  }
  DAT_04839b10 = DAT_04839b18;
  if (DAT_04839b18 == 0) {
    return;
  }
  FUN_01a08458();
  return;
}


