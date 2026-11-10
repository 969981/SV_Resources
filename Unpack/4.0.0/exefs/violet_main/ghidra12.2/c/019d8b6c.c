/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d8b6c; name: FUN_019d8b6c
 */


void FUN_019d8b6c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8950), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8df8,PTR_DAT_047d8958,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8950);
  }
  *(undefined8 *)PTR_DAT_047d8960 = *(undefined8 *)PTR_DAT_047d8958;
  return;
}


