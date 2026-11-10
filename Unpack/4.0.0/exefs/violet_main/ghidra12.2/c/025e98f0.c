/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e98f0; name: FUN_025e98f0
 */


void FUN_025e98f0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8658);
  }
  *(undefined8 *)PTR_DAT_047d8668 = *(undefined8 *)PTR_DAT_047d8660;
  FUN_025ead04();
  return;
}


