/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019be968; name: FUN_019be968
 */


void FUN_019be968(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d88e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88e8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047df3e0,PTR_DAT_047d88f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88e8);
  }
  *(undefined8 *)PTR_DAT_047d88f8 = *(undefined8 *)PTR_DAT_047d88f0;
  return;
}


