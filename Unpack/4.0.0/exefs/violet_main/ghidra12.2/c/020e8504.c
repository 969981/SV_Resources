/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e8504; name: FUN_020e8504
 */


void FUN_020e8504(void)

{
  int iVar1;
  
  if (((DAT_04840598 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840598), iVar1 != 0)) {
    FUN_00100190(&LAB_02ace768,&DAT_04840588,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840598);
  }
  FUN_01727d04(&DAT_04840588,0);
  return;
}


