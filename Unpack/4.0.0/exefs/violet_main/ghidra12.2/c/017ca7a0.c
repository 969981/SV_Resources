/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ca7a0; name: FUN_017ca7a0
 */


void FUN_017ca7a0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da9a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9a0), iVar1 != 0))
  {
    FUN_00100190(&LAB_00b0c23c,PTR_DAT_047da9a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9a0);
  }
  *(undefined8 *)PTR_DAT_047da9b0 = *(undefined8 *)PTR_DAT_047da9a8;
  return;
}


