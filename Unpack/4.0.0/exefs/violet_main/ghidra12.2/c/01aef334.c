/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aef334; name: FUN_01aef334
 */


void FUN_01aef334(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar1 != 0))
  {
    FUN_00100190(&LAB_008f48bc,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  FUN_01aef398(PTR_DAT_047d3be8);
  return;
}


