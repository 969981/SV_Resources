/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


