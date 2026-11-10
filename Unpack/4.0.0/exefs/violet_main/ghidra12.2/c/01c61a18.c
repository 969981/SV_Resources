/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c61a18; name: FUN_01c61a18
 */


void FUN_01c61a18(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_04839cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839cb0), iVar2 != 0)) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839cb0);
  }
  lVar1 = DAT_04839ca0;
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    return;
  }
  *(undefined1 *)(DAT_04839ca0 + 0x210) = 1;
  FUN_018439a0(lVar1,2);
  return;
}


