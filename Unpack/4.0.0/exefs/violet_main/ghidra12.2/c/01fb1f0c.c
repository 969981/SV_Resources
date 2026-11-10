/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb1f0c; name: FUN_01fb1f0c
 */


void FUN_01fb1f0c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8ce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8ce0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047db078,PTR_DAT_047d8ce8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ce0);
  }
  *(undefined8 *)PTR_DAT_047d8cf0 = *(undefined8 *)PTR_DAT_047d8ce8;
  return;
}


