/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be6070; name: FUN_01be6070
 */


undefined1 FUN_01be6070(void)

{
  int iVar1;
  
  if (((DAT_0483ace8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ace8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a1f4a8,&DAT_0483acd8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ace8);
  }
  DAT_0483acf0 = DAT_0483acd8;
  return *(undefined1 *)(DAT_0483acd8 + 0xb8);
}


