/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f95f4; name: FUN_021f95f4
 */


void FUN_021f95f4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d78d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d78d8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d78f0,PTR_DAT_047d78e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d78d8);
  }
  FUN_021f9658(PTR_DAT_047d78e0);
  return;
}


