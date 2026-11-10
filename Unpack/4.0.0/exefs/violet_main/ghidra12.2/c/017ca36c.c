/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ca36c; name: FUN_017ca36c
 */


void FUN_017ca36c(void)

{
  int iVar1;
  
  if (((DAT_048393e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048393e0), iVar1 != 0)) {
    FUN_00100190(&LAB_00b0c240,&DAT_048393d0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048393e0);
  }
  DAT_048393c8 = DAT_048393d0;
  return;
}


