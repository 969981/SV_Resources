/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9f1c; name: FUN_021e9f1c
 */


void FUN_021e9f1c(void)

{
  int iVar1;
  
  FUN_017cf100(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8));
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  *(undefined8 *)PTR_DAT_047d8a08 = *(undefined8 *)PTR_DAT_047d8a00;
  FUN_01576744();
  FUN_01576820();
  FUN_01576750();
  return;
}


