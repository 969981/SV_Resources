/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177a670; name: FUN_0177a670
 */


void FUN_0177a670(void)

{
  int iVar1;
  
  FUN_0177a6e0();
  if (((DAT_048404e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048404e8), iVar1 != 0)) {
    FUN_00100190(&LAB_02acc060,&DAT_048404d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048404e8);
  }
  DAT_048404f0 = DAT_048404d8;
  FUN_0177adcc();
  return;
}


