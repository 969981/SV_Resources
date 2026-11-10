/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb09a0; name: FUN_01fb09a0
 */


void FUN_01fb09a0(void)

{
  int iVar1;
  
  if (((DAT_0483aff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483aff0), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3d9c0,&DAT_0483afe0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483aff0);
  }
  FUN_017ea324(&DAT_0483afe0,0);
  return;
}


