/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dee378; name: FUN_01dee378
 */


void FUN_01dee378(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d4928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d4930;
  *(long *)PTR_DAT_047d4938 = lVar2;
  FUN_00fb1cf4(param_1,lVar2 + 0x198);
  return;
}


