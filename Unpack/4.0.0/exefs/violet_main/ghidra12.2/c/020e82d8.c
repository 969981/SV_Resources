/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e82d8; name: FUN_020e82d8
 */


void FUN_020e82d8(void)

{
  int iVar1;
  
  if (((DAT_04840580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840580), iVar1 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  FUN_01779ba0(&DAT_04840570,0);
  return;
}


