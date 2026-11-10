/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c61940; name: FUN_01c61940
 */


bool FUN_01c61940(void)

{
  bool bVar1;
  int iVar2;
  
  if (((DAT_04839cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839cb0), iVar2 != 0)) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839cb0);
  }
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(DAT_04839ca0 + 0x210) != '\0';
  }
  return bVar1;
}


