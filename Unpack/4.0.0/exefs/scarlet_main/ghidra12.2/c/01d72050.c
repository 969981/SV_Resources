/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d72050; name: FUN_01d72050
 */


undefined1 FUN_01d72050(void)

{
  int iVar1;
  
  if (((DAT_04837608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04837608), iVar1 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  return *(undefined1 *)(DAT_048375f8 + 0x3f4);
}


