/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ed9c8; name: FUN_021ed9c8
 */


void FUN_021ed9c8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  FUN_01743f30(PTR_DAT_047da7c8,0);
  return;
}


