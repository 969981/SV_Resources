/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a48e4; name: FUN_016a48e4
 */


void FUN_016a48e4(void)

{
  int iVar1;
  
  if (((DAT_04839c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c70), iVar1 != 0)) {
    FUN_00100190(&LAB_00b2035c,&DAT_04839c60,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839c70);
  }
  DAT_04839c58 = DAT_04839c60;
  return;
}


