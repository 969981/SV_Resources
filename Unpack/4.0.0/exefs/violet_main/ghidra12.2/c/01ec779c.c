/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec779c; name: FUN_01ec779c
 */


void FUN_01ec779c(void)

{
  int iVar1;
  
  if (((DAT_04839c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c70), iVar1 != 0)) {
    FUN_00100190(&LAB_00b2035c,&DAT_04839c60,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839c70);
  }
  FUN_016a49f8(&DAT_04839c60,0);
  return;
}


