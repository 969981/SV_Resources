/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be61f8; name: FUN_01be61f8
 */


void FUN_01be61f8(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_0483ace8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483ace8), iVar2 != 0)) {
    FUN_00100190(&LAB_02a1f4a8,&DAT_0483acd8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ace8);
  }
  lVar1 = DAT_0483acd8;
  DAT_0483acf0 = DAT_0483acd8;
  if ((*(int *)(DAT_0483acd8 + 0xc4) != 0) &&
     (iVar2 = *(int *)(DAT_0483acd8 + 0xc4) + -1, *(int *)(DAT_0483acd8 + 0xc4) = iVar2, iVar2 == 0)
     ) {
    *(undefined4 *)(lVar1 + 0xc0) = *(undefined4 *)(lVar1 + 0xbc);
  }
  return;
}


