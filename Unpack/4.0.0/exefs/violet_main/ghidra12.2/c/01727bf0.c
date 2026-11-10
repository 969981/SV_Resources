/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01727bf0; name: FUN_01727bf0
 */


void FUN_01727bf0(void)

{
  int iVar1;
  
  if (((DAT_04840598 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840598), iVar1 != 0)) {
    FUN_00100190(&LAB_02ace768,&DAT_04840588,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840598);
  }
  DAT_048405a0 = DAT_04840588;
  return;
}


