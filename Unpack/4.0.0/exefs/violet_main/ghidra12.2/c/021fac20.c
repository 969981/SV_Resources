/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021fac20; name: FUN_021fac20
 */


void FUN_021fac20(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047ddaa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047ddaa8), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b72364,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047ddaa8);
  }
  FUN_01742154(PTR_DAT_047ddab0,0);
  return;
}


