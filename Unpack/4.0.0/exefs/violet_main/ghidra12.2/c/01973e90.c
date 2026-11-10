/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01973e90; name: FUN_01973e90
 */


bool FUN_01973e90(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d8658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8658);
  }
  lVar2 = *(long *)PTR_DAT_047d8660;
  *(long *)PTR_DAT_047d8668 = lVar2;
  return *(int *)(lVar2 + 0x48) == 3;
}


