/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c64ae0; name: FUN_01c64ae0
 */


bool FUN_01c64ae0(void)

{
  bool bVar1;
  int iVar2;
  
  if (((DAT_04839790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839790), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(DAT_04839780 + 0x40) != '\0';
  }
  return bVar1;
}


