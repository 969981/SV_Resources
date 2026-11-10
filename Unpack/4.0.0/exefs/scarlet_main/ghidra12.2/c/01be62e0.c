/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be62e0; name: FUN_01be62e0
 */


undefined4 FUN_01be62e0(void)

{
  int iVar1;
  
  if (((DAT_0483ace8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ace8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a1f4a8,&DAT_0483acd8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ace8);
  }
  DAT_0483acf0 = DAT_0483acd8;
  return *(undefined4 *)(DAT_0483acd8 + 0xc4);
}


